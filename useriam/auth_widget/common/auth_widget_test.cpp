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

#include "auth_widget_test.h"

namespace OHOS {
namespace UserIam {
namespace AuthWidget {
namespace {
constexpr int32_t WINDOW_DEFAULT_WIDTH = 720;
constexpr int32_t WINDOW_DEFAULT_HEIGHT = 1280;
const char *const JS_EVENT_TYPE_STR[static_cast<uint32_t>(JsEventType::NUM_OF_EVENT_TYPE)] = {"EVENT_AUTH_TYPE_READY",
    "EVENT_AUTH_USER_CANCEL", "EVENT_AUTH_USER_CANCEL_ALL", "EVENT_KEY_DERIVATION_READY", "EVENT_ANIMATION_PLAY_END"};
const char *const JS_CMD_TYPE_STR[static_cast<uint32_t>(JsCmdType::NUM_OF_CMD_TYPE)] = {"CMD_NOTIFY_AUTH_START",
    "CMD_NOTIFY_AUTH_SUCCESS", "CMD_NOTIFY_AUTH_FAILED", "CMD_NOTIFY_AUTH_TIMES_LEFT", "CMD_NOTIFY_AUTH_FREEZE",
    "CMD_GET_KEY_DERIVATION_DATA"};
} // namespace

JsEventType GetJsEventType(const std::string &event)
{
    JsEventType eventType;
    if (strcmp(JS_EVENT_TYPE_STR[static_cast<uint32_t>(JsEventType::EVENT_AUTH_TYPE_READY)], event.c_str()) == 0) {
        eventType = JsEventType::EVENT_AUTH_TYPE_READY;
    } else if (strcmp(JS_EVENT_TYPE_STR[static_cast<uint32_t>(JsEventType::EVENT_AUTH_USER_CANCEL)], event.c_str()) ==
        0) {
        eventType = JsEventType::EVENT_AUTH_USER_CANCEL;
    } else if (strcmp(JS_EVENT_TYPE_STR[static_cast<uint32_t>(JsEventType::EVENT_AUTH_USER_CANCEL_ALL)],
        event.c_str()) == 0) {
        eventType = JsEventType::EVENT_AUTH_USER_CANCEL_ALL;
    } else if (strcmp(JS_EVENT_TYPE_STR[static_cast<uint32_t>(JsEventType::EVENT_KEY_DERIVATION_READY)],
        event.c_str()) == 0) {
        eventType = JsEventType::EVENT_KEY_DERIVATION_READY;
    } else {
        eventType = JsEventType::EVENT_ANIMATION_PLAY_END;
    }
    return eventType;
}

const char *GetJsCmdTypeStr(JsCmdType jsCmdType)
{
    return JS_CMD_TYPE_STR[static_cast<uint32_t>(jsCmdType)];
}

void GetDisplaySize(int32_t &width, int32_t &height)
{
    auto display = Rosen::DisplayManager::GetInstance().GetDefaultDisplay();
    if (display == nullptr) {
        display = Rosen::DisplayManager::GetInstance().GetDefaultDisplay();
    }

    if (display != nullptr) {
        width = display->GetWidth();
        height = display->GetHeight();
    } else {
        width = WINDOW_DEFAULT_WIDTH;
        height = WINDOW_DEFAULT_HEIGHT;
    }
}
} // namespace AuthWidget
} // namespace UserIam
} // namespace OHOS