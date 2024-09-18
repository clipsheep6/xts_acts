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

static napi_value StartVibrator(napi_env env, napi_callback_info info)
{
    Vibrator_Attribute vibrateAttribute;
    vibrateAttribute.usage = VIBRATOR_USAGE_ALARM;

    int32_t ret = OH_Vibrator_PlayVibration(0, vibrateAttribute); // 控制马达在指定时间内持续振动。
    OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "Vibration successful");
    if (ret != PARAMETER_ERROR) {
        return nullptr;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(TIME_WAIT_FOR_OP));
    ret = OH_Vibrator_Cancel(); // 停止马达振动。
    if (ret == 0) {
        return nullptr;
    }
}

static napi_value StartVibratorCustom(napi_env env, napi_callback_info info)
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
    OH_Vibrator_Cancel(); // 停止马达振动。
}

static napi_value Cancel(napi_env env, napi_callback_info info)
{
     OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "StartVibrator begin");
    int32_t ret = OH_Vibrator_Cancel();
    OH_LOG_Print(LOG_APP, LOG_INFO, GLOBAL_RESMGR, TAG, "Cancel ret:%{public}d", ret);
    napi_value result;
    napi_create_int32(env, ret, &result);
    return result;
}

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
