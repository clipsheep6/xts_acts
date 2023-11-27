/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

#include "napi/native_api.h"
#include "hilog/log.h"
// #include "vibrator_agent_type.h"
#include "vibrator_type.h"
#include "vibrator.h"

const unsigned int LOG_ID = 0xD002B05;
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, LOG_ID, "VibratorNDKTest"};

#define MY_HILOG(op, fmt, args...) \
    do {                                  \
        op(LABEL, "{%{public}s:%{public}d} " fmt, __FUNCTION__, __LINE__, ##args);  \
    } while (0)
#define DEBUG_LOG(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Info, fmt, ##__VA_ARGS__)

static napi_value StartOnce(napi_env env, napi_callback_info info)
{
    DEBUG_LOG("StartOnce begin-------------------");
    size_t argc = 3;
    napi_value args[3] = {nullptr};

    napi_get_cb_info(env, info, &argc, args , nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);
    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);
    napi_valuetype valuetype2;
    napi_typeof(env, args[2], &valuetype2);

    double value0;
    napi_get_value_double(env, args[0], &value0);
    double value1;
    napi_get_value_double(env, args[1], &value1);
    double value2;
    napi_get_value_double(env, args[2], &value2);
    
    Vibrator_Attribute vibrateAttribute;
    vibrateAttribute.vibratorId = value1;
    vibrateAttribute.usage = (Vibrator_Usage)value2;
    int32_t ret = OHOS::Sensors::OH_Vibrator_PlayVibration(value0, vibrateAttribute);
    DEBUG_LOG("%d", ret);
    DEBUG_LOG("StartOnce end-------------------");
    napi_value tt;
    napi_create_double(env, ret, &tt);
    return tt;
}

static napi_value StartVibratorCustom(napi_env env, napi_callback_info info)
{
    DEBUG_LOG("StartVibratorCustom begin-------------------");
    size_t argc = 5;
    napi_value args[5] = {nullptr};
    napi_get_cb_info(env, info, &argc, args , nullptr, nullptr);

    napi_valuetype valuetype0;
    napi_typeof(env, args[0], &valuetype0);
    napi_valuetype valuetype1;
    napi_typeof(env, args[1], &valuetype1);
    napi_valuetype valuetype2;
    napi_typeof(env, args[2], &valuetype2);
    napi_valuetype valuetype3;
    napi_typeof(env, args[3], &valuetype3);
    napi_valuetype valuetype4;
    napi_typeof(env, args[4], &valuetype4);

    double value0;
    napi_get_value_double(env, args[0], &value0);
    double value1;
    napi_get_value_double(env, args[1], &value1);
    double value2;
    napi_get_value_double(env, args[2], &value2);
    double value3;
    napi_get_value_double(env, args[3], &value3);
    double value4;
    napi_get_value_double(env, args[4], &value4);
    
    Vibrator_FileDescription fileDescription;
    fileDescription.fd = value0;
    fileDescription.offset = value1;
    fileDescription.length = value2;
    
    Vibrator_Attribute vibrateAttribute;
    vibrateAttribute.vibratorId = value3;
    vibrateAttribute.usage = (Vibrator_Usage)value4;
    int32_t ret = OHOS::Sensors::OH_Vibrator_PlayVibrationCustom(fileDescription, vibrateAttribute);
    DEBUG_LOG("%d", ret);
    DEBUG_LOG("StartVibratorCustom end-------------------");
    napi_value tt;
    napi_create_double(env, ret, &tt);
    return tt;
}

static napi_value Cancel(napi_env env, napi_callback_info info)
{
    DEBUG_LOG("Cancel begin-------------------");
    int32_t ret = OHOS::Sensors::OH_Vibrator_Cancel();
    DEBUG_LOG("%d", ret);
    DEBUG_LOG("Cancel end-------------------");
    napi_value tt;
    napi_create_double(env, ret, &tt);
    return tt;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        { "startOnce", nullptr, StartOnce, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "startVibratorCustom", nullptr, StartVibratorCustom, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "cancel", nullptr, Cancel, nullptr, nullptr, nullptr, napi_default, nullptr }
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version =1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "vibratorNdkTest",
    .nm_priv = ((void*)0),
    .reserved = { 0 },
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void)
{
    napi_module_register(&demoModule);
}
