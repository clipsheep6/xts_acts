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

#include "accesstoken_ndk_api.h"
#include "hilog/log.h"
#include "napi/native_api.h"

#define PARM_SIZE_2 2
#define NAME_MAX_LEN 256

static bool CheckType(const napi_env env, const napi_value value, const napi_valuetype inputType)
{
    napi_valuetype valuetype = napi_undefined;
    if (napi_typeof(env, value, &valuetype) != napi_ok) {
        // OH_LOG_ERROR(LOG_APP, "get js object type failed.");
        return false;
    }

    if (valuetype != inputType) {
        // OH_LOG_ERROR(LOG_APP, "value type dismatch.");
        return false;
    }

    return true;
}

static bool ParseUint32(const napi_env env, const napi_value value, uint32_t* result)
{
    if (!CheckType(env, value, napi_number)) {
        return false;
    }

    if (napi_get_value_uint32(env, value, result) != napi_ok) {
        // OH_LOG_ERROR(LOG_APP, "get js number object failed.");
        return false;
    }

    return true;
}

static bool ParseString(const napi_env env, const napi_value value, char* result)
{
    if (!CheckType(env, value, napi_string)) {
        return false;
    }

    size_t size;
    if (napi_get_value_string_utf8(env, value, NULL, 0, &size) != napi_ok) {
        // OH_LOG_ERROR(LOG_APP, "get js string object size failed.");
        return false;
    }
    if (napi_get_value_string_utf8(env, value, NULL, size + 1, &size) != napi_ok) {
        // OH_LOG_ERROR(LOG_APP, "get js string object failed.");
        return false;
    }

    return true;
}

/* static bool IsArray(const napi_env env, const napi_value value)
{
    bool isArray = false;

    if (napi_is_array(env, value, &isArray) != napi_ok) {
        // OH_LOG_ERROR(LOG_APP, "js object is not array.");
        return false;
    }

    return isArray;
}

static bool ParseStringArray(const napi_env env, const napi_value value, char** result, uint32_t* length)
{
    if (!IsArray(env, value)) {
        return false;
    }

    if (napi_get_array_length(env, value, length) != napi_ok) {
        // OH_LOG_ERROR(LOG_APP, "get js array object length failed.");
        return false;
    }

    if (length == 0) {
        // OH_LOG_INFO(LOG_APP, "array is empty");
        return true;
    }

    for (uint32_t i = 0; i < *length; i++) {
        napi_value arrayValue;
        if (napi_get_element(env, value, i, &arrayValue) != napi_ok) {
            // OH_LOG_ERROR(LOG_APP, "get js array object element failed.");
            return false;
        }

        if (!ParseString(env, arrayValue, result[i])) {
            return false;
        }
    }

    return true;
} */

static napi_value OHAccessTokenVerifyAccessToken(napi_env env, napi_callback_info info)
{
    size_t argc = PARM_SIZE_2;
    napi_value argv[PARM_SIZE_2] = {NULL};
    if (napi_get_cb_info(env, info, &argc, argv, NULL, NULL) != napi_ok) {
        // OH_LOG_ERROR(LOG_APP, "get js callback info failed.");
        return NULL;
    }

    uint32_t tokenId;
    if (!ParseUint32(env, argv[0], &tokenId)) {
        return NULL;
    }

    char permissionName[NAME_MAX_LEN + 1] = {0};
    if (!ParseString(env, argv[1], permissionName)) {
        return NULL;
    }

    napi_value result;
    int32_t res = OH_AccessToken_VerifyAccessToken(tokenId, permissionName);
    napi_create_int32(env, res, &result);

    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        {"oHAccessTokenVerifyAccessToken", NULL, OHAccessTokenVerifyAccessToken, NULL, NULL, NULL, napi_default, NULL},
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}

EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = NULL,
    .nm_register_func = Init,
    .nm_modname = "accesstoken",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

static __attribute__((constructor)) void RegisterModule(void) { napi_module_register(&demoModule); }
