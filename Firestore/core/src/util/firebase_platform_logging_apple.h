/*
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FIRESTORE_CORE_SRC_UTIL_FIREBASE_PLATFORM_LOGGING_APPLE_H_
#define FIRESTORE_CORE_SRC_UTIL_FIREBASE_PLATFORM_LOGGING_APPLE_H_

#if !defined(__OBJC__)
#error "This header only supports Objective-C++."
#endif  // !defined(__OBJC__)

#include <string>

#include "Firestore/core/src/util/firebase_platform_logging.h"

@class FIRApp;

namespace firebase {
namespace firestore {
namespace util {

class FirebasePlatformLoggingApple : public FirebasePlatformLogging {
 public:
  explicit FirebasePlatformLoggingApple(FIRApp* app);

   bool IsLoggingAvailable() const override;
   std::string GetUserAgent() const override;
   std::string GetHeartbeat() const override;

   bool IsGmpAppIdAvailable() const override;
   std::string GetGmpAppId() const override;

 private:
   FIRApp* app_;
};

}  // namespace util
}  // namespace firestore
}  // namespace firebase

#endif  // FIRESTORE_CORE_SRC_UTIL_FIREBASE_PLATFORM_LOGGING_APPLE_H_
