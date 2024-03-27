/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "commonevent_onfocus_test.h"
#include "../manager/plugin_manager.h"
#include <string>

namespace ArkUICApiCBTest {

static void OnEventReceive(ArkUI_NodeEvent *event) {
    OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "CommonEventOnFocusTest", "OnEventReceive");
    if (event == nullptr) {
        OH_LOG_Print(
            LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "CommonEventOnFocusTest", "OnEventReceive: event is null");
        return;
    }

    auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(OH_ArkUI_GetNativeAPI(ARKUI_NATIVE_NODE, PARAM_1));
    auto nodeHandler = event->node;

    if (event->eventId == ON_FOCUS_EVENT_ID) {
        ArkUI_NumberValue background_color_value[] = {{.u32 = COLOR_GREEN}};
        ArkUI_AttributeItem background_color_item = {background_color_value, sizeof(background_color_value) / sizeof(ArkUI_NumberValue)};
        nodeAPI->setAttribute(nodeHandler, NODE_BACKGROUND_COLOR, &background_color_item);
        return;
    }
}

napi_value CommonEventOnFocusTest::CreateNativeNode(napi_env env, napi_callback_info info) {

    OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "CommonEventOnFocusTest", "CreateNativeNode");

    size_t argc = PARAM_1;
    napi_value args[PARAM_1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    size_t length = PARAM_64;
    size_t strLength = PARAM_0;
    char xComponentID[PARAM_64] = {PARAM_0};
    napi_get_value_string_utf8(env, args[PARAM_0], xComponentID, length, &strLength);

    if ((env == nullptr) || (info == nullptr)) {
        OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "CommonEventOnFocusTest", "GetContext env or info is null");
        return nullptr;
    }

    auto nodeAPI = reinterpret_cast<ArkUI_NativeNodeAPI_1 *>(OH_ArkUI_GetNativeAPI(ARKUI_NATIVE_NODE, PARAM_1));
    auto column = nodeAPI->createNode(ARKUI_NODE_COLUMN);
    auto buttonCompare = nodeAPI->createNode(ARKUI_NODE_BUTTON);
    auto button = nodeAPI->createNode(ARKUI_NODE_BUTTON);

    ArkUI_AttributeItem id_item = {};
    id_item.string = "OnFocusTestButtonCompare";
    nodeAPI->setAttribute(buttonCompare, NODE_ID, &id_item);
    id_item.string = "OnFocusTestButton";
    nodeAPI->setAttribute(button, NODE_ID, &id_item);

    ArkUI_NumberValue width_value[] = {{.f32 = SIZE_100}};
    ArkUI_AttributeItem width_item = {width_value, sizeof(width_value) / sizeof(ArkUI_NumberValue)};
    nodeAPI->setAttribute(buttonCompare, NODE_WIDTH, &width_item);
    nodeAPI->setAttribute(buttonCompare, NODE_HEIGHT, &width_item);
    nodeAPI->setAttribute(button, NODE_WIDTH, &width_item);
    nodeAPI->setAttribute(button, NODE_HEIGHT, &width_item);

    nodeAPI->addChild(column, buttonCompare);
    nodeAPI->addChild(column, button);
    nodeAPI->setAttribute(button, NODE_ALIGN_RULES, &width_item);

    ArkUI_NumberValue background_color_value[] = {{.u32 = COLOR_RED}};
    ArkUI_AttributeItem background_color_item = {background_color_value, sizeof(background_color_value) / sizeof(ArkUI_NumberValue)};
    nodeAPI->setAttribute(button, NODE_BACKGROUND_COLOR, &background_color_item);

    nodeAPI->registerNodeEventReceiver(&OnEventReceive);
    nodeAPI->registerNodeEvent(button, NODE_ON_FOCUS, ON_FOCUS_EVENT_ID);

    std::string id(xComponentID);
    if (OH_NativeXComponent_AttachNativeRootNode(PluginManager::GetInstance()->GetNativeXComponent(id), column) == INVALID_PARAM) {
        OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "CommonEventOnFocusTest", "OH_NativeXComponent_AttachNativeRootNode failed");
    }

    napi_value exports;
    if (napi_create_object(env, &exports) != napi_ok) {
        napi_throw_type_error(env, nullptr, "napi_create_object failed");
        return nullptr;
    }

    return exports;
}
} // namespace ArkUICApiCBTest