/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
#include <sensors/vibrator.h>
#include "napi/native_api.h"
#include "hilog/log.h"
#include <thread>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

const int GLOBAL_RESMGR = 0xFF00;
const char *TAG = "[NativeVibratorTest]";
constexpr int32_t TIME_WAIT_FOR_OP = 2;
#define PARAMETER_SECOND 2
#define PARAMETER_THIRD 3

static napi_value StartVibrator123(napi_env env, napi_callback_info info)
{
    Vibrator_Attribute vibrateAttribute;
    //vibrateAttribute.usage = ;
    napi_value napiRet;
    int32_t ret = OH_Vibrator_PlayVibration(0, vibrateAttribute); // 控制马达在指定时间内持续振动。
    OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "Vibration successful");
    if (ret != 0) {
        napi_create_int32(env, ret, &napiRet);
        return napiRet;
    }
    napi_value value;
    napi_create_int32(env, ret, &value);
    return value;
}

bool GetNativeInt32(const napi_env &env, const napi_value &value, int32_t &number)
{
    napi_get_value_int32(env, value, &number);
    return true;
}

bool IsMatchType(const napi_env &env, const napi_value &value, const napi_valuetype &type)
{
    napi_valuetype paramType = napi_undefined;
    napi_typeof(env, value, &paramType);
    return paramType == type;
}

static napi_value StartVibrator(napi_env env, napi_callback_info info)
{
    OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "Vibration successful");
    size_t argc = 3;
    napi_value args[3] = {nullptr};
    napi_value result = {nullptr};

    napi_status status = napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    if (status != napi_ok) {
        OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "napi_get_cb_info failed");
        napi_create_int32(env, PARAMETER_ERROR, &result);
        return result;
    }

    if (!IsMatchType(env, args[0], napi_number) || !IsMatchType(env, args[1], napi_number)) {
        OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "IsMatchType failed");
        napi_create_int32(env, PARAMETER_ERROR, &result);
        return result;
    }

    int32_t duration;
    status = napi_get_value_int32(env, args[0], &duration);
    if (status != napi_ok) {
        //MISC_HILOGE("napi_get_value_int32 failed");
        napi_create_int32(env, PARAMETER_ERROR, &result);
        return result;
    }
    int32_t usage;
    status = napi_get_value_int32(env, args[1], &usage);
    if (status != napi_ok) {
        //MISC_HILOGE("napi_get_value_int32 failed");
        napi_create_int32(env, PARAMETER_ERROR, &result);
        return result;
    }
    Vibrator_Attribute vibrateAttribute = {
        .usage = static_cast<Vibrator_Usage>(usage)
    };

    int32_t ret = OH_Vibrator_PlayVibration(duration, vibrateAttribute);
    //MISC_HILOGD(" StartVibrator end %{public}d", ret);
    napi_create_int32(env, ret, &result);
    return result;
}

static napi_value StartVibratorCustom(napi_env env, napi_callback_info info)
{
    //MISC_HILOGD("+ StartVibrator begin-------------------");
    size_t argc = 5;
    napi_value args[5] = {nullptr};
    napi_value result {nullptr};
    napi_status status = napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    if (status != napi_ok) {
        //MISC_HILOGE("napi_get_cb_info failed");
        napi_create_int32(env, PARAMETER_ERROR, &result);
        return result;
    }
    if (!IsMatchType(env, args[0], napi_number) || !IsMatchType(env, args[1], napi_number) ||
        !IsMatchType(env, args[PARAMETER_SECOND], napi_number) || !IsMatchType(env,
        args[PARAMETER_THIRD], napi_number)) {
        //MISC_HILOGE("IsMatchType failed");
        napi_create_int32(env, PARAMETER_ERROR, &result);
        return result;
    }
    int32_t fd = 0;
    int32_t offset = 0;
    int32_t length = 0;
    int32_t usage = 0;
    if (!GetNativeInt32(env, args[0], fd) || !GetNativeInt32(env, args[1], offset) ||
        !GetNativeInt32(env, args[PARAMETER_SECOND], length) || !GetNativeInt32(env, args[PARAMETER_THIRD], usage)) {
        //MISC_HILOGE("napi_get_value_int32 failed");
        napi_create_int32(env, PARAMETER_ERROR, &result);
        return result;
    }
    Vibrator_FileDescription fileDescription = {
        .fd = fd,
        .offset = offset,
        .length = length
    };
    Vibrator_Attribute vibrateAttribute = {
        .usage = static_cast<Vibrator_Usage>(usage)
    };
    int32_t ret = OH_Vibrator_PlayVibrationCustom(fileDescription, vibrateAttribute);
    //MISC_HILOGD("StartVibratorCustom end----------%{public}d", ret);
    napi_create_int32(env, ret, &result);
    return result;
}

static napi_value Cancel(napi_env env, napi_callback_info info)
{
    //MISC_HILOGD("+ StartVibrator begin-------------------");
    int32_t ret = OH_Vibrator_Cancel();
    //MISC_HILOGD("Cancel end--------%{public}d", ret);
    napi_value result;
    napi_create_int32(env, ret, &result);
    return result;
}


/*static napi_value StartVibratorCustom(napi_env env, napi_callback_info info)
{
    int32_t fd = open("/data/test/vibrator/coin_drop.json", O_RDONLY);
    OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "Test fd:%{public}d", fd);
    struct stat64 statbuf = { 0 };
    if (fd == 0) {
        close(fd);
        return nullptr;
    }
    if (fstat64(fd, &statbuf) == 0) {
        Vibrator_FileDescription fileDescription = {
            .fd = fd,
            .offset = 0,
            .length = statbuf.st_size
        };
        Vibrator_Attribute vibrateAttribute = {
            .usage = VIBRATOR_USAGE_RING
        };
        int32_t ret = OH_Vibrator_PlayVibrationCustom(fileDescription, vibrateAttribute); // 播放自定义振动序列。
        OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "Vibratecustom successful");
        bool isSuccess = ((ret == 0) || (ret == UNSUPPORTED));
        if (isSuccess == true) {
            close(fd);
            return nullptr;
        }
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(TIME_WAIT_FOR_OP));
    close(fd);
    OH_Vibrator_Cancel(); // 停止马达振动。//2.?为啥要cancle？
}

static napi_value Cancel(napi_env env, napi_callback_info info)
{
    OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "Cancel begin");
    int32_t ret = OH_Vibrator_Cancel();
    OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "Cancel ret:%{public}d", ret);
    napi_value result;
    napi_create_int32(env, ret, &result);
    return result;
}
*/
EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        { "startVibrator", nullptr, StartVibrator, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "startVibratorCustom", nullptr, StartVibratorCustom, nullptr, nullptr, nullptr, napi_default, nullptr },
        { "cancel", nullptr, Cancel, nullptr, nullptr, nullptr, napi_default, nullptr }        
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "entry",
    .nm_priv = ((void*)0),
    .reserved = { 0 },
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void)
{
    napi_module_register(&demoModule);
}
