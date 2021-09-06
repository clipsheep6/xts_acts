/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef KERNEL_LITE_UTILS
#define KERNEL_LITE_UTILS
namespace OHOS {
namespace Telephony {
class Utils {
public:
    Utils() = default;
    ~Utils() = default;

public:
    static const int SYS_US_PER_MS = 1000;

public:
    // sleep n millisecond(1/1000 sec)
    static void Msleep(int msec);
};
} // namespace Telephony
} // namespace OHOS
#endif
