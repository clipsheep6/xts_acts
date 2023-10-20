/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

#include "image_source_raw_file_test.h"
#include "node_api.h"
#include <cstdlib>
#include "hilog/log.h"

namespace {
    constexpr size_t SIZE_ZERO = 0;
    constexpr size_t SIZE_TWO = 2;
    constexpr uint32_t ARGS_FIRST = 0;
    constexpr uint32_t ARGS_SECOND = 1;
}

namespace OHOS {
namespace Media {

const unsigned int LOG_ID = 0xD002B05;
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, LOG_ID, "ImageSourceRawFileNDKTest"};
#define MY_HILOG(op, fmt, args...) \
    do {                                  \
        op(LABEL, "{%{public}s:%{public}d} " fmt, __FUNCTION__, __LINE__, ##args);  \
    } while (0)
#define DEBUG_LOG(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Info, fmt, ##__VA_ARGS__)
#define DEBUG_PTR(p) (((p) == nullptr)?"nullptr":"not nullptr")

#define STATIC_FUNCTION(n, f) { (n), nullptr, (f), nullptr, nullptr, nullptr, napi_static, nullptr }
napi_value ImageSourceRawFileNDKTest::Init(napi_env env, napi_value exports)
{
    napi_property_descriptor props[] = {
        STATIC_FUNCTION("create", Create),
    };
    napi_define_properties(env, exports, sizeof(props) / sizeof(props[ARGS_FIRST]), props);
    return exports;
}

static bool GetInt32Property(napi_env env, napi_value root, const char* utf8name, int32_t* res)
{
    napi_value property = nullptr;
    auto status = napi_get_named_property(env, root, utf8name, &property);
    if (status != napi_ok || property == nullptr) {
        DEBUG_LOG("Get property error %{public}s", utf8name);
        return false;
    }
    return (napi_get_value_int32(env, property, res) == napi_ok);
}

static bool GetStringValue(napi_env env, napi_value value, char** buffer, size_t *bufferSize)
{
    if (napi_ok != napi_get_value_string_utf8(env, value, nullptr, SIZE_ZERO, bufferSize)
        && *bufferSize == SIZE_ZERO) {
        DEBUG_LOG("Get napi string length error");
        return false;
    }
    *buffer = (char*)malloc((*bufferSize) + 1);
    if (napi_ok != napi_get_value_string_utf8(env, value, *buffer, (*bufferSize) + 1, bufferSize)) {
        DEBUG_LOG("Get napi string error");
        return false;
    }
    return (*bufferSize > SIZE_ZERO);
}

static bool checkType(napi_env env, napi_value arg, napi_valuetype type)
{
    napi_valuetype argType = napi_undefined;
    napi_typeof(env, arg, &argType);
    return (type == argType);
}
static bool checkArgs(const napi_value* argValue, size_t argCount, size_t want)
{
    if (argCount < want) {
        DEBUG_LOG("argCount %{public}zu < want %{public}zu", argCount, want);
        return false;
    }
    for (size_t i = SIZE_ZERO; i < want; i++) {
        if (argValue[i] == nullptr) {
            DEBUG_LOG("argValue[%{public}zu] is nullptr", i);
            return false;
        }
    }
    return true;
}
static bool hasNamedProperty(napi_env env, napi_value object, const char* name)
{
    bool res = false;
    return (napi_has_named_property(env, object, name, &res) == napi_ok) && res;
}
static bool parseRawFileItem(napi_env env, napi_value argValue, const char* item, int32_t* value)
{
    napi_value nItem;
    if (napi_get_named_property(env, argValue, item, &nItem) != napi_ok) {
        DEBUG_LOG("Failed to parse RawFileDescriptor item %{public}s", item);
        return false;
    }
    if (napi_get_value_int32(env, nItem, value) != napi_ok) {
        DEBUG_LOG("Failed to get RawFileDescriptor item %{public}s value", item);
        return false;
    }
    return true;
}
static bool isRawFileDescriptor(napi_env env, napi_value argValue)
{
    if (env == nullptr || argValue == nullptr) {
        DEBUG_LOG("isRawFileDescriptor invalid input");
        return false;
    }
    if (!hasNamedProperty(env, argValue, "fd") ||
        !hasNamedProperty(env, argValue, "offset") ||
        !hasNamedProperty(env, argValue, "length")) {
        DEBUG_LOG("RawFileDescriptor mismatch");
        return false;
    }
    return true;
}
static bool parseImageSource(napi_env env, napi_value arg, struct OhosImageSource &src)
{
    if (env == nullptr || arg == nullptr) {
        DEBUG_LOG("env is %{public}s || arg is %{public}s", DEBUG_PTR(env), DEBUG_PTR(arg));
        return false;
    }
    bool isArrayBuffer = false;
    if (checkType(env, arg, napi_string)) {
        DEBUG_LOG("Uri arg In");
        if (!GetStringValue(env, arg, &src.uri, &src.uriSize)) {
            DEBUG_LOG("Uri arg failed");
            return false;
        }
        DEBUG_LOG("Uri arg %{public}s", src.uri);
        return true;
    } else if (checkType(env, arg, napi_number)) {
        DEBUG_LOG("Fd arg In");
        if (napi_ok != napi_get_value_int32(env, arg, &(src.fd))) {
            DEBUG_LOG("Fd arg failed");
            return false;
        }
        return true;
    } else if (napi_is_arraybuffer(env, arg, &isArrayBuffer) == napi_ok && isArrayBuffer) {
        DEBUG_LOG("Buffer arg In");
        void* buf = nullptr;
        if (napi_ok != napi_get_arraybuffer_info(env, arg, &buf, &(src.bufferSize)) || buf == nullptr ||
            src.bufferSize == SIZE_ZERO) {
            DEBUG_LOG("Fd arg failed");
            return false;
        }
        src.buffer = static_cast<uint8_t*>(buf);
        return true;
    } else if (isRawFileDescriptor(env, arg)) {
        int32_t fd = -1;
        int32_t start = -1;
        int32_t length = -1;
        parseRawFileItem(env, arg, "fd", &(fd));
        parseRawFileItem(env, arg, "offset", &(start));
        parseRawFileItem(env, arg, "length", &(length));
        src.rawFile.fd = fd;
        src.rawFile.start = start;
        src.rawFile.length = length;
        return true;
    }
    DEBUG_LOG("Invaild arg type");
    return false;
}
static void OhosImageSourceRelease(struct OhosImageSource &src)
{
    if (src.uri != nullptr) {
        free(src.uri);
        src.uri = nullptr;
    }
}
static bool parseImageSourceOpt(napi_env env, napi_value arg, struct OhosImageSourceOps &src)
{
    if (env == nullptr || arg == nullptr) {
        DEBUG_LOG("env is %{public}s || arg is %{public}s", DEBUG_PTR(env), DEBUG_PTR(arg));
        return false;
    }
    // Optional parameters, no need check error.
    GetInt32Property(env, arg, "density", &(src.density));
    GetInt32Property(env, arg, "pixelFormat", &(src.pixelFormat));
    napi_value nSize = nullptr;
    auto status = napi_get_named_property(env, arg, "size", &nSize);
    if (status == napi_ok && nSize != nullptr) {
        GetInt32Property(env, nSize, "width", &(src.size.width));
        GetInt32Property(env, nSize, "height", &(src.size.height));
    }
    return true;
}
static napi_value createUndefine(napi_env env)
{
    napi_value udfVal = nullptr;
    napi_get_undefined(env, &udfVal);
    return udfVal;
}
static napi_value createResultValue(napi_env env, int32_t resCode, napi_value res = nullptr)
{
    napi_value result = nullptr;
    // JS result like
    // {code: <error code>, result: <result value>}
    napi_value nRes = nullptr;
    napi_create_int32(env, resCode, &nRes);
    napi_create_object(env, &result);
    napi_set_named_property(env, result, "code", nRes);
    if (res != nullptr) {
        napi_set_named_property(env, result, "result", res);
    }
    return result;
}
napi_value ImageSourceRawFileNDKTest::Create(napi_env env, napi_callback_info info)
{
    napi_value thisVar = nullptr;
    napi_value argValue[SIZE_TWO] = {0};
    size_t argCount = SIZE_TWO;
    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok ||
        !checkArgs(argValue, argCount, SIZE_TWO)) {
        return createUndefine(env);
    }
    struct OhosImageSource src;
    if (!parseImageSource(env, argValue[ARGS_FIRST], src)) {
        DEBUG_LOG("parseImageSource failed!!!");
        OhosImageSourceRelease(src);
        return createUndefine(env);
    }
    struct OhosImageSourceOps ops;
    if (!parseImageSourceOpt(env, argValue[ARGS_SECOND], ops)) {
        DEBUG_LOG("parseImageSourceOpt failed!!!");
        OhosImageSourceRelease(src);
        return createUndefine(env);
    }
    napi_value imageSource = nullptr;
    int32_t res = OH_ImageSource_Create(env, &src, &ops, &imageSource);
    OhosImageSourceRelease(src);
    return createResultValue(env, res, imageSource);
}


EXTERN_C_START
static napi_value ModuleRegister(napi_env env, napi_value exports)
{
    ImageSourceRawFileNDKTest::Init(env, exports);
    return exports;
}

static napi_module demoModule = {
    .nm_version =1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = ModuleRegister,
    .nm_modname = "ImageSourceRawFileNDKTest",
    .nm_priv = nullptr,
    .reserved = { 0 },
};

__attribute__((constructor)) void RegisterModule(void)
{
    napi_module_register(&demoModule);
}
EXTERN_C_END
}
}