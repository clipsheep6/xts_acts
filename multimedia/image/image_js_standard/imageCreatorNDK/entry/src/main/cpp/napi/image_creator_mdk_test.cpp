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

#include "image_creator_mdk_test.h"
#include "node_api.h"
#include <string>
#include "hilog/log.h"

namespace {
    constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, 0xD002B05, "ImageCreatorNDKTest"};
}

namespace {
    constexpr uint32_t NUM_0 = 0;
    constexpr uint32_t NUM_1 = 1;
    constexpr uint32_t NUM_2 = 2;
    constexpr uint32_t NUM_3 = 3;
    constexpr uint32_t NUM_4 = 4;
}

namespace OHOS {
namespace Media {
static bool CheckArgs(size_t count, const napi_value* argValues, size_t exceptCount)
{
    if (count != exceptCount) {
        return false;
    }
    for (size_t i = NUM_0; i < count; i++) {
        if (argValues[i] == nullptr) {
            return false;
        }
    }
    return true;
}

static napi_value CreateResult(napi_env env, int32_t resCode, napi_value res = nullptr)
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

static napi_value JsCreate(napi_env env, napi_callback_info info)
{
    napi_value udfVar = nullptr;
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_4] = {0};
    size_t argCount = NUM_4;
    ImageCreator_Opts creatorInfo;
    napi_value creator = nullptr;
    napi_get_undefined(env, &udfVar);
    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok ||
        !CheckArgs(argCount, argValue, NUM_4) ||
        napi_get_value_int32(env, argValue[NUM_0], &(creatorInfo.width)) != napi_ok ||
        napi_get_value_int32(env, argValue[NUM_1], &(creatorInfo.height)) != napi_ok ||
        napi_get_value_int32(env, argValue[NUM_2], &(creatorInfo.format)) != napi_ok ||
        napi_get_value_int32(env, argValue[NUM_3], &(creatorInfo.capicity)) != napi_ok) {
        return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
    }
    return CreateResult(env, OH_ImageCreator_Create(env, creatorInfo, &creator), creator);
}

static napi_value JsInitNative(napi_env env, napi_callback_info info)
{
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok ||
        argCount < NUM_1 || argValue[NUM_0] == nullptr) {
        return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
    }
    if (OH_ImageCreator_InitNative(env, argValue[NUM_0]) != nullptr) {
        return CreateResult(env, IMAGE_RESULT_SUCCESS);
    }
    return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
}

static napi_value JsDequeue(napi_env env, napi_callback_info info)
{
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok || argCount < NUM_1) {
        return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
    }
    auto native = OH_ImageCreator_InitNative(env, argValue[NUM_0]);
    napi_value image = nullptr;
    return CreateResult(env, OH_ImageCreator_Dequeue(native, &image), image);
}

static napi_value JsQueue(napi_env env, napi_callback_info info)
{
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_2] = {0};
    size_t argCount = NUM_2;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok || argCount < NUM_2) {
        return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
    }
    auto native = OH_ImageCreator_InitNative(env, argValue[NUM_0]);
    return CreateResult(env, OH_ImageCreator_Queue(native, argValue[NUM_1]));
}

static void onEvent()
{
    HiviewDFX::HiLog::Debug(LABEL, "onEvent IN");
}

static napi_value JsOn(napi_env env, napi_callback_info info)
{
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok || argCount < NUM_1) {
        return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
    }
    auto native = OH_ImageCreator_InitNative(env, argValue[NUM_0]);
    return CreateResult(env, OH_ImageCreator_On(native, onEvent));
}

static napi_value JsGetCapacity(napi_env env, napi_callback_info info)
{
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok || argCount < NUM_1) {
        return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
    }
    auto native = OH_ImageCreator_InitNative(env, argValue[NUM_0]);
    int32_t capacity = NUM_0;
    auto res = OH_ImageCreator_GetCapacity(native, &capacity);
    napi_value nRes = nullptr;
    napi_create_int32(env, capacity, &nRes);
    return CreateResult(env, res, nRes);
}

static napi_value JsGetFormat(napi_env env, napi_callback_info info)
{
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok || argCount < NUM_1) {
        return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
    }
    auto native = OH_ImageCreator_InitNative(env, argValue[NUM_0]);
    int32_t format = NUM_0;
    auto res = OH_ImageCreator_GetFormat(native, &format);
    napi_value nRes = nullptr;
    napi_create_int32(env, format, &nRes);
    return CreateResult(env, res, nRes);
}

static napi_value JsRelease(napi_env env, napi_callback_info info)
{
    napi_value thisVar = nullptr;
    napi_value argValue[NUM_1] = {0};
    size_t argCount = NUM_1;

    if (napi_get_cb_info(env, info, &argCount, argValue, &thisVar, nullptr) != napi_ok || argCount < NUM_1) {
        return CreateResult(env, IMAGE_RESULT_INVALID_PARAMETER);
    }
    auto native = OH_ImageCreator_InitNative(env, argValue[NUM_0]);
    return CreateResult(env, OH_ImageCreator_Release(native));
}

#define STATIC_FUNCTION(n, f) { (n), nullptr, (f), nullptr, nullptr, nullptr, napi_static, nullptr }
napi_value ImageCreatorNDKTest::Init(napi_env env, napi_value exports)
{
    napi_property_descriptor props[] = {
        STATIC_FUNCTION("create", JsCreate),
        STATIC_FUNCTION("init", JsInitNative),
        STATIC_FUNCTION("dequeue", JsDequeue),
        STATIC_FUNCTION("queue", JsQueue),
        STATIC_FUNCTION("on", JsOn),
        STATIC_FUNCTION("getCapacity", JsGetCapacity),
        STATIC_FUNCTION("getFormat", JsGetFormat),
        STATIC_FUNCTION("release", JsRelease),
    };
    napi_define_properties(env, exports, sizeof(props) / sizeof(props[0]), props);
    return exports;
}

EXTERN_C_START
napi_value ModuleRegister(napi_env env, napi_value exports)
{
    ImageCreatorNDKTest::Init(env, exports);
    return exports;
}

static napi_module demoModule = {
    .nm_version =1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = ModuleRegister,
    .nm_modname = "ImageCreatorNDKTest",
    .nm_priv = ((void*)0),
    .reserved = { 0 },
};

__attribute__((constructor)) void RegisterModule(void)
{
    napi_module_register(&demoModule);
}
EXTERN_C_END
}
}