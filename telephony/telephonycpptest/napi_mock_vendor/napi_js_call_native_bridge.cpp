#include <node_api.h>
#include <cstdlib>
#include <string.h>
#include <assert.h>
#include <iostream>
#include "../mock_vendor/mock_vendor.h"
#include "hilog/log.h"
#include "telephony_log_c.h"
#include <iostream>

using namespace std;
#define BUFFER_SIZE 32
MockVendor mMockVendor;
#define MAP_JS_NATIVE_METHOD(jsMethodId, nativeMethodId)        \
    {                                                           \
        jsMethodId, 0, nativeMethodId, 0, 0, 0, napi_default, 0 \
    }

/**
 * 初始化MockVendor方法 
 */
napi_value InitMockVendor(napi_env env, napi_callback_info info)
{
    napi_value result = NULL;
    if (mMockVendor.Init() != 0)
    {
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

napi_value MockVendorSet(napi_env env, napi_callback_info info)
{
    napi_value result = NULL;

    // 获取参数
    void *data = NULL;
    size_t argc = 2;
    napi_value argv[2] = {0};
    napi_value thiz;
    napi_status stats;
    stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
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
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

napi_value MockVendorSetInt(napi_env env, napi_callback_info info)
{
    napi_value result = NULL;

    // 获取参数
    void *data = NULL;
    size_t argc = 2;
    napi_value argv[2] = {0};
    napi_value thiz;
    napi_status stats;
    stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
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
    void *ret = memcpy(buffer, src, sizeof(src));
    if (!ret)
    {
        HILOG_DEBUG(LOG_APP, "MockVendorSetInt : copy fail");
        return result;
    }

    mMockVendor.MockVendorSet(funcId, buffer, bufsize);
    HILOG_DEBUG(LOG_APP, "MockVendorSetInt : buffer: %{public}s", buffer);

    char msg[] = "napi invoke MockVendorSetInt success";
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

napi_value MockVendorSetWithDelay(napi_env env, napi_callback_info info)
{
    napi_value result = NULL;

    // 获取参数
    void *data = NULL;
    size_t argc = 2;
    napi_value argv[2] = {0};
    napi_value thiz;
    napi_status stats;
    stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
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
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

napi_value MockVendorSetReg(napi_env env, napi_callback_info info)
{
    napi_value result = NULL;
    napi_status stats;

    void *data = NULL;
    size_t argc = 2;
    napi_value argv[2] = {};
    napi_value thiz;
    stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    //获取具体值
    int32_t domain;
    stats = napi_get_value_int32(env, argv[0], &domain);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetReg : domain: %{public}d  ", domain);

    //获取具体值
    int32_t reg;
    stats = napi_get_value_int32(env, argv[1], &reg);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetReg : reg: %{public}d  ", reg);

    mMockVendor.MockVendorSetReg(domain, reg);

    char msg[] = "napi invoke MockVendorSetReg success";
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

napi_value MockVendorSetTech(napi_env env, napi_callback_info info)
{
    napi_value result = NULL;
    napi_status stats;

    void *data = NULL;
    size_t argc = 2;
    napi_value argv[2] = {};
    napi_value thiz;
    stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    //获取具体值
    int32_t domain;
    stats = napi_get_value_int32(env, argv[0], &domain);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetTech : domain: %{public}d  ", domain);

    //获取具体值
    int32_t tech;
    stats = napi_get_value_int32(env, argv[1], &tech);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetTech : reg: %{public}d  ", tech);

    mMockVendor.MockVendorSetTech(domain, tech);

    char msg[] = "napi invoke MockVendorSetTech success";
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

napi_value MockVendorSetRawReg(napi_env env, napi_callback_info info)
{
    napi_value result = NULL;
    napi_status stats;

    void *data = NULL;
    size_t argc = 2;
    napi_value argv[2] = {};
    napi_value thiz;
    stats = napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    assert(stats == napi_ok);

    //获取具体值
    int32_t domain;
    stats = napi_get_value_int32(env, argv[0], &domain);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetRawReg : domain: %{public}d  ", domain);

    //获取具体值
    int32_t tech;
    stats = napi_get_value_int32(env, argv[1], &tech);
    assert(stats == napi_ok);
    HILOG_DEBUG(LOG_APP, "MockVendorSetRawReg : reg: %{public}d  ", tech);

    mMockVendor.MockVendorSetRawReg(domain, tech);

    char msg[] = "napi invoke MockVendorSetRawReg success";
    napi_create_string_utf8(env, msg, strlen(msg), &result);
    return result;
}

/**
 * 注册方法
*/
napi_value Register(napi_env env, napi_value exports)
{
    HILOG_DEBUG(LOG_APP, "msg: %{public}s", "NAPI_MOCK_VENDOR # Register  start");
    napi_property_descriptor desc[] = {
        MAP_JS_NATIVE_METHOD("initMockVendor", InitMockVendor),
        MAP_JS_NATIVE_METHOD("mockVendorSet", MockVendorSet),
        MAP_JS_NATIVE_METHOD("mockVendorSetInt", MockVendorSetInt),
        MAP_JS_NATIVE_METHOD("mockVendorSetWithDelay", MockVendorSetWithDelay),
        MAP_JS_NATIVE_METHOD("mockVendorSetReg", MockVendorSetReg),
        MAP_JS_NATIVE_METHOD("mockVendorSetTech", MockVendorSetTech),
        MAP_JS_NATIVE_METHOD("mockVendorSetRawReg", MockVendorSetRawReg)};
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    HILOG_DEBUG(LOG_APP, "msg: %{public}s", "NAPI_MOCK_VENDOR # Register  end");
    return exports;
}

NAPI_MODULE(napi, Register)