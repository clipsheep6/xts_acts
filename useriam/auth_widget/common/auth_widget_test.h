/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

#ifndef AUTH_WIDGET_UT_TEST_H
#define AUTH_WIDGET_UT_TEST_H

#include <cstring>
#include <string>
#include <unistd.h>

#include "display_manager.h"

namespace OHOS {
namespace UserIam {
namespace AuthWidget {
enum class JsCmdType {
    CMD_NOTIFY_AUTH_START = 0,
    CMD_NOTIFY_AUTH_SUCCESS,
    CMD_NOTIFY_AUTH_FAILED,
    CMD_NOTIFY_AUTH_TIMES_LEFT,
    CMD_NOTIFY_AUTH_FREEZE,
    CMD_GET_KEY_DERIVATION_DATA,
    NUM_OF_CMD_TYPE
};

enum class JsEventType {
    EVENT_AUTH_TYPE_READY = 0,
    EVENT_AUTH_USER_CANCEL,
    EVENT_AUTH_USER_CANCEL_ALL,
    EVENT_KEY_DERIVATION_READY,
    EVENT_ANIMATION_PLAY_END,
    NUM_OF_EVENT_TYPE
};

JsEventType GetJsEventType(const std::string &event);
const char *GetJsCmdTypeStr(JsCmdType jsCmdType);
void GetDisplaySize(int32_t &width, int32_t &height);
} // namespace AuthWidget
} // namespace UserIam
} // namespace OHOS

#endif // AUTH_WIDGET_UT_TEST_H