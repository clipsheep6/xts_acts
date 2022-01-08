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

#include <node_api.h>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <securec.h>
#include "mock_vendor.h"
#include "hilog/log.h"
#include "telephony_log_c.h"
#include "napi_network_handler.h"

static const int BUFFER_SIZE = 32;
static MockVendor mMockVendor;

/**
 * 初始化厂商库
 */
static napi_value InitMockVendor(napi_env env, napi_callback_info info)
{
    napi_value result = nullptr;
    if (mMockVendor.Init() != 0) {
        HILOG_DEBUG(LOG_APP, "msg: %{public}s", "NAPI_MOCK_VENDOR #  init fail ");
        char msg[] = "mockVendor init fial";
        napi_create_string_utf8(env, msg, strlen(msg), &result);
        return result;
    }

    HILOG_DEBUG(LOG_APP, "msg: %{public}s", "NAPI_MOCK_VENDOR # init success ");
    char msg[] = "mockVendor init success";
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

static napi_value MockVendorSet(napi_env env, napi_callback_info info)
{
    // 获取参数
    void *data = nullptr;
    size_t argc = 2;
    napi_value argv[2] = {0};
    napi_value thiz;
    napi_status stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    int32_t funcId = 0;
    stats = napi_get_value_int32(env, argv[0], &funcId);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSet : funcId: %{public}d  ", funcId);

    char buffer[BUFFER_SIZE] = {0};
    size_t bufsize = 0;

    stats = napi_get_value_string_utf8(env, argv[1], buffer, BUFFER_SIZE, &bufsize);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSet : buffer: %{public}s  bufsize: %{public}d", buffer, bufsize);

    mMockVendor.MockVendorSet(funcId, buffer, bufsize);
    char msg[] = "napi invoke MockVendorSet success";
    napi_value result = nullptr;
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

static napi_value MockVendorSetInt(napi_env env, napi_callback_info info)
{
    // 获取参数
    void *data = nullptr;
    size_t argc = 2;
    napi_value argv[2] = {0};
    napi_value thiz;
    napi_status stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    int32_t funcId = 0;
    stats = napi_get_value_int32(env, argv[0], &funcId);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetInt : funcId: %{public}d  ", funcId);

    int32_t value = 0;
    stats = napi_get_value_int32(env, argv[1], &value);

    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetInt : input value: %{public}d  ", value);

    char buffer[BUFFER_SIZE] = {'\0'};
    size_t bufsize = 1;
    int src[1] = {value};
    if (memcpy_s(buffer, sizeof(buffer), src, sizeof(src)) != 0) {
        return nullptr;
    }
    napi_value result = nullptr;

    mMockVendor.MockVendorSet(funcId, buffer, bufsize);
    HILOG_DEBUG(LOG_APP, "MockVendorSetInt : buffer: %{public}s", buffer);

    char msg[] = "napi invoke MockVendorSetInt success";
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

static napi_value MockVendorSetWithDelay(napi_env env, napi_callback_info info)
{
    // 获取参数
    void *data = nullptr;
    size_t argc = 2;
    napi_value argv[2] = {0};
    napi_value thiz;
    napi_status stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    int32_t funcId = 0;
    stats = napi_get_value_int32(env, argv[0], &funcId);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetWithDelay : funcId: %{public}d  ", funcId);

    char buffer[BUFFER_SIZE] = {0};
    size_t bufsize = 0;

    stats = napi_get_value_string_utf8(env, argv[1], buffer, BUFFER_SIZE, &bufsize);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetWithDelay : buffer: %{public}s  bufsize: %{public}d", buffer, bufsize);

    mMockVendor.MockVendorSetWithDelay(funcId, buffer, bufsize);

    char msg[] = "napi invoke MockVendorSetWithDelay success";
    napi_value result = nullptr;
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

static napi_value MockVendorSetReg(napi_env env, napi_callback_info info)
{
    void *data = nullptr;
    size_t argc = 2;
    napi_value argv[2] = {};
    napi_value thiz;
    napi_status stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    // 获取具体值
    int32_t domain;
    stats = napi_get_value_int32(env, argv[0], &domain);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetReg : domain: %{public}d  ", domain);

    // 获取具体值
    int32_t reg;
    stats = napi_get_value_int32(env, argv[1], &reg);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetReg : reg: %{public}d  ", reg);

    mMockVendor.MockVendorSetReg(domain, reg);

    char msg[] = "napi invoke MockVendorSetReg success";
    napi_value result = nullptr;
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

static napi_value MockVendorSetTech(napi_env env, napi_callback_info info)
{
    void *data = nullptr;
    size_t argc = 2;
    napi_value argv[2] = {};
    napi_value thiz;
    napi_status stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    // 获取具体值
    int32_t domain;
    stats = napi_get_value_int32(env, argv[0], &domain);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetTech : domain: %{public}d  ", domain);

    // 获取具体值
    int32_t tech;
    stats = napi_get_value_int32(env, argv[1], &tech);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetTech : reg: %{public}d  ", tech);

    mMockVendor.MockVendorSetTech(domain, tech);

    char msg[] = "napi invoke MockVendorSetTech success";
    napi_value result = nullptr;
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

static napi_value MockVendorSetRawReg(napi_env env, napi_callback_info info)
{
    void *data = nullptr;
    size_t argc = 2;
    napi_value argv[2] = {};
    napi_value thiz;
    napi_status stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    // 获取具体值
    int32_t domain;
    stats = napi_get_value_int32(env, argv[0], &domain);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetRawReg : domain: %{public}d  ", domain);

    // 获取具体值
    int32_t tech;
    stats = napi_get_value_int32(env, argv[1], &tech);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetRawReg : reg: %{public}d  ", tech);

    mMockVendor.MockVendorSetRawReg(domain, tech);

    char msg[] = "napi invoke MockVendorSetRawReg success";
    napi_value result = nullptr;
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

static napi_value ChangeNetworkStats(napi_env env, napi_callback_info info)
{
    napi_value ret = nullptr;
    NetworkStatus *data = NetworkHandler::ParseNetworkStats(env, info);
    if (!data) {
        napi_create_int32(env, -1, &ret);
        return ret;
    }
    int mvSetRet = mMockVendor.MockVendorSet(NETWORK_SEARCH_CHANGE_STATE,
        (const char *)data, sizeof(struct NetworkStatus));
    HILOG_DEBUG(LOG_APP, "ChangeNetworkStats : mvSetRet: %{public}d  ", mvSetRet);
    if (mvSetRet == 0) {
        napi_create_int32(env, 1, &ret);
    } else {
        napi_create_int32(env, -1, &ret);
    }
    free(data);
    return ret;
}

static napi_value ChangeSignal(napi_env env, napi_callback_info info)
{
    napi_value ret = nullptr;
    SignalInfo *signalInfo = NetworkHandler::ParseSignal(env, info);
    if (!signalInfo) {
        napi_create_int32(env, -1, &ret);
        return ret;
    }
    int mvSetRet = mMockVendor.MockVendorSet(NETWORK_SEARCH_SET_SIGNAL, (const char*)signalInfo, sizeof(SignalInfo));
    HILOG_DEBUG(LOG_APP, "ChangeSignal : mvSetRet: %{public}d  ", mvSetRet);
    if (mvSetRet == 0) {
        napi_create_int32(env, 1, &ret);
    } else {
        napi_create_int32(env, -1, &ret);
    }
    free(signalInfo);
    return ret;
}

/**
 * 注册方法
*/
static napi_value Register(napi_env env, napi_value exports)
{
    HILOG_DEBUG(LOG_APP, "msg: %{public}s", "NAPI_MOCK_VENDOR # Register  start");
    napi_property_descriptor desc[] = {
        {"initMockVendor", 0, InitMockVendor, 0, 0, 0, napi_default, 0},
        {"mockVendorSet", 0, MockVendorSet, 0, 0, 0, napi_default, 0},
        {"mockVendorSetInt", 0, MockVendorSetInt, 0, 0, 0, napi_default, 0},
        {"mockVendorSetWithDelay", 0, MockVendorSetWithDelay, 0, 0, 0, napi_default, 0},
        {"mockVendorSetReg", 0, MockVendorSetReg, 0, 0, 0, napi_default, 0},
        {"mockVendorSetTech", 0, MockVendorSetTech, 0, 0, 0, napi_default, 0},
        {"mockVendorSetRawReg", 0, MockVendorSetRawReg, 0, 0, 0, napi_default, 0},
        {"changeNetworkStats", 0, ChangeNetworkStats, 0, 0, 0, napi_default, 0},
        {"changeSignal", 0, ChangeSignal, 0, 0, 0, napi_default, 0},
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    HILOG_DEBUG(LOG_APP, "msg: %{public}s", "NAPI_MOCK_VENDOR # Register  end");
    return exports;
}

NAPI_MODULE(napi, Register)