/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
#include "napi/native_api.h"
#include "jsvm.h"
#include "jsvm_common.h"
#include "native_common.h"
#include "securec.h"
#include <stdint.h>
#include <stdio.h>
#include <malloc.h>
#include <ctime>
#include <thread>
#include <uv.h>
#include <bits/alltypes.h>
#include <unistd.h>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>
#define LOG_DEMAIN 0x0202
using namespace std;
static int aa = 0;
static std::string g_data_type = "";
static bool g_temp = false;
const int DIFF_VALUE_ZERO = 0;
const int DIFF_VALUE_NOE = 1;
const int DIFF_VALUE_TWO = 2;
const int DIFF_VALUE_THREE = 3;
const int DIFF_VALUE_FOUR = 4;
const int DIFF_VALUE_FIVE = 5;
const int DIFF_VALUE_SIX = 6;
const int DIFF_VALUE_SEVEN = 7;
const int DIFF_VALUE_EIGHT = 8;
const int DIFF_VALUE_NINE = 9;
const int DIFF_VALUE_TEN = 10;
const int DIFF_VALUE_ELEVEN = 11;
const int DIFF_VALUE_TWELVE = 12;
const int DIFF_VALUE_THIRTEEN = 13;
const int DIFF_VALUE_FOURTEEN = 14;
const int DIFF_VALUE_FITEEN = 15;
const int DIFF_VALUE_SIXTEEN = 16;
const int DIFF_VALUE_SEVENTEEN = 17;
const int DIFF_VALUE_EIGHTEEN = 18;
const int DIFF_VALUE_NINETEEN = 19;
const int DIFF_VALUE_TWENTY = 20;
const int DIFF_VALUE_TWENTYONE = 21;
#define EOK 0
#define OPENCODE
#ifdef OPENCODE
static void addReturnedStatus(JSVM_Env env, const char *key, JSVM_Value object, const char *expected_message,
    JSVM_Status expected_status, JSVM_Status actual_status)
{
    char napi_message_string[100] = "";
    JSVM_Value prop_value;

    if (actual_status != expected_status) {
        printf("Invalid status [%d]", actual_status);
    }

    JSVM_CALL_RETURN_VOID(env, OH_JSVM_CreateStringUtf8(env,
        (actual_status == expected_status ? expected_message : napi_message_string), NAPI_AUTO_LENGTH, &prop_value));
    JSVM_CALL_RETURN_VOID(env, OH_JSVM_SetNamedProperty(env, object, key, prop_value));
}

static void addLastStatus(JSVM_Env env, const char *key, JSVM_Value return_value)
{
    JSVM_Value prop_value;
    const JSVM_ExtendedErrorInfo *p_last_error;
    JSVM_CALL_RETURN_VOID(env, OH_JSVM_GetLastErrorInfo(env, &p_last_error));

    JSVM_CALL_RETURN_VOID(env, OH_JSVM_CreateStringUtf8(env,
        (p_last_error->errorMessage == NULL ? "JSVM_Status::JSVM_OK" : p_last_error->errorMessage), NAPI_AUTO_LENGTH,
        &prop_value));
    JSVM_CALL_RETURN_VOID(env, OH_JSVM_SetNamedProperty(env, return_value, key, prop_value));
}
#endif
static JSVM_Value defineProperties(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Value object, return_value;
    JSVM_CallbackStruct param;
    param.data = nullptr;
    param.callback = defineProperties;
    JSVM_PropertyDescriptor desc = { "prop", NULL, &param, NULL, NULL, NULL, JSVM_PropertyAttributes::JSVM_ENUMERABLE };

    JSVM_CALL(env, OH_JSVM_CreateObject(env, &object));
    JSVM_CALL(env, OH_JSVM_CreateObject(env, &return_value));

    addReturnedStatus(env, "envIsNull", return_value, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_DefineProperties(NULL, object, 1, &desc));

    OH_JSVM_DefineProperties(env, NULL, 1, &desc);
    addLastStatus(env, "objectIsNull", return_value);

    OH_JSVM_DefineProperties(env, object, 1, NULL);
    addLastStatus(env, "descriptorListIsNull", return_value);

    desc.utf8name = NULL;
    OH_JSVM_DefineProperties(env, object, 1, NULL);
    addLastStatus(env, "utf8nameIsNull", return_value);
    desc.utf8name = "prop";

    desc.method = NULL;
    OH_JSVM_DefineProperties(env, object, 1, NULL);
    addLastStatus(env, "methodIsNull", return_value);
    desc.method = &param;

    return return_value;
}
static JSVM_Value assertEqual(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 2;
    JSVM_Value args[2];
    JSVM_CALL(env, OH_JSVM_GetCbInfo(env, info, &argc, args, NULL, NULL));

    bool isStrictEquals = false;
    OH_JSVM_StrictEquals(env, args[0], args[1], &isStrictEquals);
    return nullptr;
}

static JSVM_Value assertTrue(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value args[1];
    JSVM_CALL(env, OH_JSVM_GetCbInfo(env, info, &argc, args, NULL, NULL));

    bool value = false;
    JSVM_CALL(env, OH_JSVM_GetValueBool(env, args[0], &value));
    return nullptr;
}

static JSVM_Value assertFalse(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value args[1];
    JSVM_CALL(env, OH_JSVM_GetCbInfo(env, info, &argc, args, NULL, NULL));

    bool value = false;
    JSVM_CALL(env, OH_JSVM_GetValueBool(env, args[0], &value));
    return nullptr;
}

static JSVM_Value consoleinfo(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value args[1];
    char log[256] = "";
    size_t log_length;
    JSVM_CALL(env, OH_JSVM_GetCbInfo(env, info, &argc, args, NULL, NULL));

    JSVM_CALL(env, OH_JSVM_GetValueStringUtf8(env, args[0], log, 255, &log_length));
    return nullptr;
}


// OH_JSVM_IsArray
static JSVM_Value isArray(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Value array = nullptr;
    OH_JSVM_CreateArray(env, &array);
    JSVM_ASSERT(env, array != nullptr, "OH_JSVM_GetUndefined success");
    bool isArray = false;
    OH_JSVM_IsArray(env, array, &isArray);
    JSVM_ASSERT(env, isArray, "OH_JSVM_IsArrayd success");

    JSVM_Value _value;
    JSVM_CALL(env, OH_JSVM_CreateInt32(env, 0, &_value));
    return _value;
}
static JSVM_Value hello(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Value output;
    void *data = nullptr;
    OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, nullptr, &data);
    OH_JSVM_CreateStringUtf8(env, (char *)data, strlen((char *)data), &output);
    return output;
}
static JSVM_CallbackStruct hello_cb = { hello, (void *)"Hello" };
static intptr_t externals[] = {
    (intptr_t)&hello_cb,
    0,
};

static JSVM_PropertyHandlerConfigurationStruct propertyCfg { nullptr, nullptr, nullptr, nullptr,
    nullptr, nullptr, nullptr, nullptr };

static napi_value testEngineAndContext(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;


    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    const char *sourcecodestr = "\
{\
    var length = 5; var arr = new Array(length); arr[4] = 123;\
}\
";
    JSVM_Value sourcecodevalue;
    OH_JSVM_CreateStringUtf8(env, sourcecodestr, strlen(sourcecodestr), &sourcecodevalue);
    JSVM_Script script;
    OH_JSVM_CompileScript(env, sourcecodevalue, nullptr, 0, true, nullptr, &script);
    JSVM_Value result;
    OH_JSVM_RunScript(env, script, &result);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testError(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value code = nullptr;
    JSVM_Value message = nullptr;
    OH_JSVM_CreateStringLatin1(env, "600", NAPI_AUTO_LENGTH, &code);
    OH_JSVM_CreateStringLatin1(env, "test error", NAPI_AUTO_LENGTH, &message);
    JSVM_Value error = nullptr;
    OH_JSVM_CreateError(env, code, message, &error);
    bool isError = false;
    OH_JSVM_IsError(env, error, &isError);
    OH_JSVM_ThrowError(env, "500", "Common error");
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testTypeError(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;

    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    // typeError
    JSVM_Value code1 = nullptr;
    JSVM_Value message1 = nullptr;
    OH_JSVM_CreateStringLatin1(env, "500", NAPI_AUTO_LENGTH, &code1);
    OH_JSVM_CreateStringLatin1(env, "type error 500", NAPI_AUTO_LENGTH, &message1);
    JSVM_Value error1 = nullptr;
    OH_JSVM_CreateTypeError(env, code1, message1, &error1);
    bool isError1 = false;
    OH_JSVM_IsError(env, error1, &isError1);
    OH_JSVM_ThrowTypeError(env, NULL, "type error1");
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testRangeError(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;

    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    // rangeError
    JSVM_Value code2 = nullptr;
    JSVM_Value message2 = nullptr;
    OH_JSVM_CreateStringLatin1(env, "500", NAPI_AUTO_LENGTH, &code2);
    OH_JSVM_CreateStringLatin1(env, "range error 500", NAPI_AUTO_LENGTH, &message2);
    JSVM_Value error2 = nullptr;
    OH_JSVM_CreateRangeError(env, code2, message2, &error2);
    bool isError2 = false;
    OH_JSVM_IsError(env, error2, &isError2);
    OH_JSVM_ThrowRangeError(env, NULL, "range error");
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testSyntaxError(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;

    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    // syntaxError
    JSVM_Value code3 = nullptr;
    JSVM_Value message3 = nullptr;
    OH_JSVM_CreateStringLatin1(env, "500", NAPI_AUTO_LENGTH, &code3);
    OH_JSVM_CreateStringLatin1(env, "syntax error 500", NAPI_AUTO_LENGTH, &message3);
    JSVM_Value error3 = nullptr;
    OH_JSVM_CreateSyntaxError(env, code3, message3, &error3);
    bool isError3 = false;
    OH_JSVM_IsError(env, error3, &isError3);
    OH_JSVM_ThrowSyntaxError(env, NULL, "syntax error");
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testClearError(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;

    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    // getLastErrorInfo
    JSVM_Value value;
    OH_JSVM_CreateStringUtf8(env, "xyz", 3, &value);
    double double_value;
    OH_JSVM_GetValueDouble(env, value, &double_value);
    const JSVM_ExtendedErrorInfo *error_info = 0;
    OH_JSVM_GetLastErrorInfo(env, &error_info);
    // getAndClearLastException
    JSVM_Value code4 = nullptr;
    JSVM_Value message4 = nullptr;
    OH_JSVM_CreateStringLatin1(env, "600", NAPI_AUTO_LENGTH, &code4);
    OH_JSVM_CreateStringLatin1(env, "tag range error", NAPI_AUTO_LENGTH, &message4);
    JSVM_Value error4 = nullptr;
    OH_JSVM_CreateRangeError(env, code4, message4, &error4);
    bool isError4 = false;
    OH_JSVM_IsError(env, error4, &isError4);
    JSVM_Value ex;
    OH_JSVM_GetAndClearLastException(env, &ex);
    bool exceptionWasPending = true;
    OH_JSVM_IsExceptionPending(env, &exceptionWasPending);
    OH_JSVM_Throw(env, error4);
    OH_JSVM_IsExceptionPending(env, &exceptionWasPending);
    JSVM_Value ex1;
    OH_JSVM_GetAndClearLastException(env, &ex1);
    isError4 = false;
    OH_JSVM_IsError(env, ex1, &isError4);
    OH_JSVM_IsExceptionPending(env, &exceptionWasPending);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    // shaoshuai
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testLifeCycle(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_EscapableHandleScope handlescope1;
    OH_JSVM_OpenEscapableHandleScope(env, &handlescope1);
    JSVM_Value output = NULL;
    JSVM_Value escapee = NULL;
    OH_JSVM_CreateObject(env, &output);
    OH_JSVM_EscapeHandle(env, handlescope1, output, &escapee);
    JSVM_Value result = nullptr;
    JSVM_Ref resultRef = nullptr;
    uint32_t resultRefCount = 0;
    OH_JSVM_CreateObject(env, &result);
    OH_JSVM_CreateReference(env, result, 1, &resultRef);
    OH_JSVM_ReferenceRef(env, resultRef, &resultRefCount);
    OH_JSVM_ReferenceUnref(env, resultRef, &resultRefCount);
    JSVM_Value refValue = nullptr;
    OH_JSVM_GetReferenceValue(env, resultRef, &refValue);
    OH_JSVM_DeleteReference(env, resultRef);
    OH_JSVM_CloseEscapableHandleScope(env, handlescope1);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testCreateData1(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value ret;
    OH_JSVM_CreateArray(env, &ret);
    bool is_array = false;
    OH_JSVM_IsArray(env, ret, &is_array);
    uint32_t array_length = 10;
    JSVM_Value ret1;
    OH_JSVM_CreateArrayWithLength(env, array_length, &ret1);
    uint32_t length;
    OH_JSVM_GetArrayLength(env, ret1, &length);
    JSVM_Value arrayBuffer = nullptr;
    void *arrayBufferPtr = nullptr;
    size_t arrayBufferSize = 1024;
    JSVM_Status status = OH_JSVM_CreateArraybuffer(env, arrayBufferSize, &arrayBufferPtr, &arrayBuffer);
    JSVM_ASSERT(env, status == JSVM_OK, "success to OH_JSVM_CreateArraybuffer");
    JSVM_ASSERT(env, arrayBuffer != nullptr, "success create_arryBuffer");
    JSVM_Value createResult = nullptr;
    double time = 202110181203150;
    OH_JSVM_CreateDate(env, time, &createResult);
    double getTime;
    OH_JSVM_GetDateValue(env, createResult, &getTime);
    bool is_date = false;
    OH_JSVM_IsDate(env, createResult, &is_date);
    const char testStr[] = "test";
    JSVM_Value external = nullptr;
    OH_JSVM_CreateExternal(
        env, (void *)testStr, [](JSVM_Env env, void *data, void *hint) {}, (void *)testStr, &external);
    void *tempExternal = nullptr;
    OH_JSVM_GetValueExternal(env, external, &tempExternal);
    OH_JSVM_DetachArraybuffer(env, arrayBuffer);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    // shaoshuai
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testCreateData2(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value description;
    OH_JSVM_CreateStringUtf8(env, "teststr", 7, &description);
    char buffer[128];
    size_t bufferSize = 128;
    size_t copied = 0;
    OH_JSVM_GetValueStringUtf8(env, description, buffer, bufferSize, &copied);
    JSVM_Value symbol;
    OH_JSVM_CreateSymbol(env, description, &symbol);
    JSVM_Value result_symbol;
    OH_JSVM_SymbolFor(env, NULL, 0, &result_symbol);
    JSVM_Value arrayBuffer = nullptr;
    void *arrayBufferPtr = nullptr;
    size_t arrayBufferSize = 16;
    size_t typedArrayLength = 4;
    OH_JSVM_CreateArraybuffer(env, arrayBufferSize, &arrayBufferPtr, &arrayBuffer);
    void *tmpArrayBufferPtr = nullptr;
    size_t arrayBufferLength = 0;
    OH_JSVM_GetArraybufferInfo(env, arrayBuffer, &tmpArrayBufferPtr, &arrayBufferLength);
    JSVM_Value _value;
    OH_JSVM_CreateTypedarray(env, JSVM_TypedarrayType::JSVM_INT32_ARRAY, typedArrayLength, arrayBuffer, 0, &_value);
    bool isTypedArray = false;
    OH_JSVM_IsTypedarray(env, _value, &isTypedArray);
    JSVM_TypedarrayType type;
    size_t length = 0;
    void *data = nullptr;
    JSVM_Value retArrayBuffer;
    size_t byteOffset = -1;
    OH_JSVM_GetTypedarrayInfo(env, _value, &type, &length, &data, &retArrayBuffer, &byteOffset);
    OH_JSVM_DetachArraybuffer(env, retArrayBuffer);
    bool isDetachedArrayBuffer = false;
    OH_JSVM_IsDetachedArraybuffer(env, retArrayBuffer, &isDetachedArrayBuffer);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testCreateData3(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value arrayBuffer = nullptr;
    void *arrayBufferPtr = nullptr;
    size_t arrayBufferSize = 16;
    JSVM_Status status = OH_JSVM_CreateArraybuffer(env, arrayBufferSize, &arrayBufferPtr, &arrayBuffer);
    JSVM_ASSERT(env, status == JSVM_OK, "success to OH_JSVM_CreateArraybuffer");
    JSVM_ASSERT(env, arrayBuffer != nullptr, "success create_arryBuffer");
    bool isArrayBuffer = false;
    OH_JSVM_IsArraybuffer(env, arrayBuffer, &isArrayBuffer);
    JSVM_Value result = nullptr;
    OH_JSVM_CreateDataview(env, arrayBufferSize, arrayBuffer, 0, &result);
    bool isDataView = false;
    OH_JSVM_IsDataview(env, result, &isDataView);
    JSVM_Value retArrayBuffer = nullptr;
    void *data = nullptr;
    size_t byteLength = 0;
    size_t byteOffset = -1;
    OH_JSVM_GetDataviewInfo(env, result, &byteLength, &data, &retArrayBuffer, &byteOffset);
    OH_JSVM_DetachArraybuffer(env, arrayBuffer);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testCreateData4(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value output1;
    OH_JSVM_CreateInt32(env, 0, &output1);
    int32_t value1;
    OH_JSVM_GetValueInt32(env, output1, &value1);
    JSVM_Value output2;
    OH_JSVM_CreateUint32(env, 0, &output2);
    uint32_t value2;
    OH_JSVM_GetValueUint32(env, output2, &value2);
    JSVM_Value output3;
    OH_JSVM_CreateInt64(env, (double)0, &output3);
    int64_t value3;
    OH_JSVM_GetValueInt64(env, output3, &value3);
    int64_t resultValue = 0;
    bool flag = false;
    OH_JSVM_GetValueBigintInt64(env, output3, &resultValue, &flag);
    uint64_t testValue = UINT64_MAX;
    JSVM_Value result = nullptr;
    OH_JSVM_CreateBigintUint64(env, testValue, &result);

    uint64_t resultValue1 = 0;
    bool flag1 = false;
    OH_JSVM_GetValueBigintUint64(env, result, &resultValue1, &flag1);
    double value = 1.0;
    JSVM_Value output4;
    OH_JSVM_CreateDouble(env, value, &output4);
    double resultDouble;
    OH_JSVM_GetValueDouble(env, output4, &resultDouble);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testCreateData5(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    int64_t testValue = INT64_MAX;
    JSVM_Value result = nullptr;
    OH_JSVM_CreateBigintInt64(env, testValue, &result);
    uint64_t testValue1 = UINT64_MAX;
    JSVM_Value result1 = nullptr;
    OH_JSVM_CreateBigintUint64(env, testValue1, &result1);
    int signBit = 0;
    size_t wordCount = 4;
    uint64_t words[] = {0ULL, 34ULL, 56ULL, 2ULL};
    uint64_t wordsOut[] = {0ULL, 0ULL, 0ULL, 0ULL};
    JSVM_Value result2 = nullptr;
    OH_JSVM_CreateBigintWords(env, signBit, wordCount, words, &result2);
    int retSignBit = -1;
    size_t retWordCount = 4;
    OH_JSVM_GetValueBigintWords(env, result2, &retSignBit, &retWordCount, wordsOut);
    JSVM_Value description;
    OH_JSVM_CreateStringLatin1(env, "teststr", 7, &description);
    char buffer[128];
    size_t bufferSize = 128;
    size_t copied = 0;
    OH_JSVM_GetValueStringLatin1(env, description, buffer, bufferSize, &copied);
    const char16_t *str = u"he";
    JSVM_Value result4;
    OH_JSVM_CreateStringUtf16(env, str, 2, &result4);
    char16_t buffer1[128];    // 128: char16_t type of element size
    size_t bufferSize1 = 128; // 128: char16_t type of element size
    size_t copied1 = 0;
    OH_JSVM_GetValueStringUtf16(env, result4, buffer1, bufferSize1, &copied1);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testGetData1(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value testWrapClass = nullptr;
    JSVM_CallbackStruct param1;
    param1.data = nullptr;
    param1.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    OH_JSVM_DefineClass(env, "TestWrapClass", NAPI_AUTO_LENGTH, &param1, 0, nullptr, &testWrapClass);
    JSVM_Value customClassPrototype = nullptr;
    OH_JSVM_GetPrototype(env, testWrapClass, &customClassPrototype);
    bool value1 = true;
    JSVM_Value boolValue;
    OH_JSVM_GetBoolean(env, value1, &boolValue);
    bool value2;
    OH_JSVM_GetValueBool(env, boolValue, &value2);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testGetData2(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value result = nullptr;
    OH_JSVM_GetGlobal(env, &result);
    JSVM_Value result1 = nullptr;
    OH_JSVM_GetNull(env, &result1);
    JSVM_ValueType type;
    OH_JSVM_Typeof(env, result1, &type);
    JSVM_Value result2 = nullptr;
    OH_JSVM_GetUndefined(env, &result2);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testValueOperation(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value value1;
    OH_JSVM_CreateInt32(env, 0, &value1);
    JSVM_Value value2;
    OH_JSVM_CoerceToBool(env, value1, &value2);
    JSVM_Value value3;
    OH_JSVM_CreateStringUtf8(env, "12", 2, &value3);
    JSVM_Value value4;
    OH_JSVM_CoerceToNumber(env, value3, &value4);
    JSVM_Value ret;
    OH_JSVM_CreateArray(env, &ret);
    JSVM_Value value5;
    OH_JSVM_CoerceToObject(env, ret, &value5);
    JSVM_Value value6;
    OH_JSVM_CoerceToString(env, value1, &value6);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testValueOperation2(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value customClass = nullptr;
    JSVM_CallbackStruct param1;
    param1.data = nullptr;
    param1.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    OH_JSVM_DefineClass(env, "TestWrapClass", NAPI_AUTO_LENGTH, &param1, 0, nullptr, &customClass);
    JSVM_Value customClassPrototype = nullptr;
    OH_JSVM_GetPrototype(env, customClass, &customClassPrototype);
    JSVM_Value customInstance = nullptr;
    OH_JSVM_NewInstance(env, customClass, 0, nullptr, &customInstance);
    bool isInstanceOf = false;
    OH_JSVM_Instanceof(env, customInstance, customClass, &isInstanceOf);
    const char *testStringStr = "test";
    JSVM_Value testString = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStringStr, strlen(testStringStr), &testString);
    bool isStrictEquals = false;
    OH_JSVM_StrictEquals(env, testString, testString, &isStrictEquals);
    JSVM_Value testObject = nullptr;
    OH_JSVM_CreateObject(env, &testObject);
    isStrictEquals = false;
    OH_JSVM_StrictEquals(env, testObject, testObject, &isStrictEquals);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testGetPropertyNames(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value result = nullptr;
    OH_JSVM_CreateObject(env, &result);
    const char testStr[] = "1234567";
    JSVM_Value strAttribute = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &strAttribute);
    OH_JSVM_SetNamedProperty(env, result, "strAttribute", strAttribute);
    bool hasNamedProperty = false;
    OH_JSVM_HasNamedProperty(env, result, "strAttribute", &hasNamedProperty);
    JSVM_Value retStrAttribute = nullptr;
    OH_JSVM_GetNamedProperty(env, result, "strAttribute", &retStrAttribute);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testGetAllPropertyNames(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value returnValue, props;
    JSVM_CALL(env, OH_JSVM_CreateObject(env, &returnValue));
    addReturnedStatus(env, "envIsNull", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_GetAllPropertyNames(nullptr, returnValue, JSVM_KeyCollectionMode::JSVM_KEY_OWN_ONLY,
        JSVM_KeyFilter::JSVM_KEY_WRITABLE, JSVM_KeyConversion::JSVM_KEY_KEEP_NUMBERS, &props));
    OH_JSVM_GetAllPropertyNames(env, nullptr, JSVM_KeyCollectionMode::JSVM_KEY_OWN_ONLY,
        JSVM_KeyFilter::JSVM_KEY_WRITABLE, JSVM_KeyConversion::JSVM_KEY_KEEP_NUMBERS, &props);
    addLastStatus(env, "objectIsNull", returnValue);
    OH_JSVM_GetAllPropertyNames(env, returnValue, JSVM_KeyCollectionMode::JSVM_KEY_OWN_ONLY,
        JSVM_KeyFilter::JSVM_KEY_WRITABLE, JSVM_KeyConversion::JSVM_KEY_KEEP_NUMBERS, nullptr);
    addLastStatus(env, "valueIsNull", returnValue);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testProperty(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value result = nullptr;
    OH_JSVM_CreateObject(env, &result);
    const char testStr[] = "1234567";
    JSVM_Value strAttribute = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &strAttribute);
    OH_JSVM_SetNamedProperty(env, result, "strAttribute", strAttribute);

    JSVM_Value retStrAttribute = nullptr;
    OH_JSVM_GetNamedProperty(env, result, "strAttribute", &retStrAttribute);

    int32_t testNumber = 12345;
    JSVM_Value numberAttribute = nullptr;
    OH_JSVM_CreateInt32(env, testNumber, &numberAttribute);
    OH_JSVM_SetNamedProperty(env, result, "numberAttribute", numberAttribute);
    JSVM_Value propNames = nullptr;
    OH_JSVM_GetPropertyNames(env, result, &propNames);

    bool isArray = false;
    OH_JSVM_IsArray(env, propNames, &isArray);
    uint32_t arrayLength = 0;
    OH_JSVM_GetArrayLength(env, propNames, &arrayLength);

    for (uint32_t i = 0; i < arrayLength; i++) {
        bool hasElement = false;
        OH_JSVM_HasElement(env, propNames, i, &hasElement);
        JSVM_Value propName = nullptr;
        OH_JSVM_GetElement(env, propNames, i, &propName);
        bool hasProp = false;
        OH_JSVM_HasProperty(env, result, propName, &hasProp);
        JSVM_Value propValue = nullptr;
        OH_JSVM_GetProperty(env, result, propName, &propValue);
    }
    bool deletion = false;
    OH_JSVM_DeleteElement(env, propNames, 1, &deletion);
    bool hasElement = true;
    OH_JSVM_HasElement(env, propNames, 1, &hasElement);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testDefineProperties(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value object, return_value;
    JSVM_CallbackStruct param1;
    param1.data = nullptr;
    param1.callback = defineProperties;
    JSVM_PropertyDescriptor desc = {
        "prop", NULL, &param1, NULL, NULL, NULL, JSVM_PropertyAttributes::JSVM_ENUMERABLE
    };

    JSVM_CALL(env, OH_JSVM_CreateObject(env, &object));
    JSVM_CALL(env, OH_JSVM_CreateObject(env, &return_value));

    addReturnedStatus(env, "envIsNull", return_value, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_DefineProperties(NULL, object, 1, &desc));
    OH_JSVM_DefineProperties(env, NULL, 1, &desc);
    OH_JSVM_ObjectFreeze(env, object);
    OH_JSVM_ObjectSeal(env, object);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static napi_value testWrap(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value testClass = nullptr;
    JSVM_CallbackStruct param1;
    param1.data = nullptr;
    param1.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);

        return thisVar;
    };
    OH_JSVM_DefineClass(env, "TestClass", NAPI_AUTO_LENGTH, &param1, 0, nullptr, &testClass);

    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testClass, 0, nullptr, &instanceValue);

    const char *testStr = "test";
    OH_JSVM_Wrap(
        env, instanceValue, (void *)testStr, [](JSVM_Env env, void *data, void *hint) {}, nullptr, nullptr);
    const char *tmpTestStr = nullptr;
    OH_JSVM_Unwrap(env, instanceValue, (void **)&tmpTestStr);
    const char *tmpTestStr1 = nullptr;
    OH_JSVM_RemoveWrap(env, instanceValue, (void **)&tmpTestStr1);
    OH_JSVM_Unwrap(env, instanceValue, (void **)&tmpTestStr1);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static JSVM_Deferred deferred = nullptr;
static napi_value testOthers(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    uint32_t result;
    OH_JSVM_GetVersion(env, &result);
    JSVM_VMInfo result1;
    OH_JSVM_GetVMInfo(&result1);
    int64_t adjustedValue;
    OH_JSVM_AdjustExternalMemory(env, 1, &adjustedValue);
    JSVM_Value promise;
    OH_JSVM_CreatePromise(env, &deferred, &promise);
    bool is_promise;
    OH_JSVM_IsPromise(env, promise, &is_promise);
    const char *blob_data = nullptr;
    size_t blob_size = 0;
    JSVM_Env envs[1] = {env};
    OH_JSVM_CreateSnapshot(vm, 1, envs, &blob_data, &blob_size);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}


static napi_value Add(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[5];
    for (int i = 0; i < 5; i++) {
        param[i].data = nullptr;
    }
    param[0].callback = assertEqual;
    param[1].callback = assertTrue;
    param[2].callback = assertFalse;
    param[3].callback = consoleinfo;
    param[4].callback = isArray;

    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
        {"assertTrue", NULL, &param[1], NULL, NULL, NULL, JSVM_DEFAULT},
        {"assertFalse", NULL, &param[2], NULL, NULL, NULL, JSVM_DEFAULT},
        {"consoleinfo", NULL, &param[3], NULL, NULL, NULL, JSVM_DEFAULT},
        {"isArray", NULL, &param[4], NULL, NULL, NULL, JSVM_DEFAULT},
    };

    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    const char *sourcecodestr = "\
{\
    var length = 5; var arr = new Array(length); arr[4] = 123;\
}\
";
    JSVM_Value sourcecodevalue;
    OH_JSVM_CreateStringUtf8(env, sourcecodestr, strlen(sourcecodestr), &sourcecodevalue);
    JSVM_Script script;
    OH_JSVM_CompileScript(env, sourcecodevalue, nullptr, 0, true, nullptr, &script);
    JSVM_Value result;
    OH_JSVM_RunScript(env, script, &result);
    int32_t value2;
    JSVM_CALL(env, OH_JSVM_GetValueInt32(env, result, &value2));
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    // shaoshuai
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    return nullptr;
}
static JSVM_Value test(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_VM vm1 = nullptr;
    JSVM_Env env2;
    JSVM_Script script = nullptr;
    OH_JSVM_CreateEnvFromSnapshot(vm1, 0, &env2);
    const uint8_t **data_ptr = nullptr;
    size_t *length_ptr = nullptr;
    OH_JSVM_CreateCodeCache(env, script, data_ptr, length_ptr);
    OH_JSVM_SetInstanceData(
        env2, 0, [](JSVM_Env env, void *data, void *hint) { ++*static_cast<int *>(data); }, nullptr);
    JSVM_Ref *refValues;
    OH_JSVM_GetInstanceData(env, (void **)&refValues);
    JSVM_Value object = nullptr;
    OH_JSVM_SetProperty(env, object, 0, NULL);
    JSVM_Value key = nullptr;
    bool result;
    OH_JSVM_DeleteProperty(env, object, key, &result);
    OH_JSVM_HasOwnProperty(env, object, key, &result);
    OH_JSVM_SetElement(NULL, object, 0, object);
    JSVM_Value ret;
    JSVM_Value funcValue = nullptr;
    JSVM_CallbackStruct param;
    OH_JSVM_CreateFunction(env, "func", NAPI_AUTO_LENGTH, &param, &funcValue);
    OH_JSVM_CallFunction(env, nullptr, funcValue, 0, nullptr, &ret);
    JSVM_Value constructor = nullptr;
    JSVM_CallbackInfo info1 = nullptr;
    OH_JSVM_GetNewTarget(env, info1, &constructor);
    JSVM_Value value = nullptr;
    OH_JSVM_TypeTagObject(env, value, nullptr);
    OH_JSVM_CheckObjectTypeTag(env, object, nullptr, &result);
    JSVM_Finalize finalizeCb = nullptr;
    JSVM_Ref result1;
    OH_JSVM_AddFinalizer(env, object, NULL, finalizeCb, NULL, &result1);
    OH_JSVM_MemoryPressureNotification(env, JSVM_MEMORY_PRESSURE_LEVEL_NONE);
    JSVM_Deferred deferred = nullptr;
    OH_JSVM_ResolveDeferred(env, deferred, value);
    OH_JSVM_RejectDeferred(env, deferred, value);
    JSVM_Value value1;
    OH_JSVM_JsonParse(env, value, &value1);
    OH_JSVM_JsonStringify(env, object, &value1);
    return nullptr;
}
static napi_value Add1(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = test;
    JSVM_PropertyDescriptor descriptor[] = {
        {"test", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}
static bool output_stream(const char *data, int size, void *stream_data)
{
    return true;
}
static JSVM_Value theSecondOperations(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_VM vm;
    OH_JSVM_CreateVM(nullptr, &vm);
    void *data = nullptr;
    JSVM_HeapStatistics stats;
    OH_JSVM_GetHeapStatistics(vm, &stats);
    OH_JSVM_TakeHeapSnapshot(vm, output_stream, data);
    JSVM_CpuProfiler cpu_profiler;
    OH_JSVM_StartCpuProfiler(vm, &cpu_profiler);
    OH_JSVM_StopCpuProfiler(vm, cpu_profiler, output_stream, data);
    return nullptr;
}
static napi_value testSecondOperations(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].data = nullptr;
    param[0].callback = theSecondOperations;
    JSVM_PropertyDescriptor descriptor[] = {
        {"theSecondOperations", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    uint16_t num = 9229;
    OH_JSVM_OpenInspector(env, "localhost", num);
    OH_JSVM_WaitForDebugger(env, false);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseInspector(env);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// ========= arguments check =========
static JSVM_Value checkArgs(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    auto func = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.callback = func;
    param.data = nullptr;
    JSVM_Value testWrapClass = nullptr;

    // case 1. If env is null ptr, return JSVM_INVALID_ARG.
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(nullptr, "Test1", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &param, &testWrapClass);
    if (res == JSVM_INVALID_ARG) {
        JSVM_ASSERT(env, res == JSVM_INVALID_ARG, "OH_JSVM_DefineClassWithPropertyHandler failed due to nullptr env");
    }

    // case 1. If utf8name is nullptr, return JSVM_INVALID_ARG.
    res = OH_JSVM_DefineClassWithPropertyHandler(env, nullptr, NAPI_AUTO_LENGTH, &param, 0, nullptr, &propertyCfg,
        &param, &testWrapClass);
    if (res == JSVM_INVALID_ARG) {
        JSVM_ASSERT(env, res == JSVM_INVALID_ARG,
            "OH_JSVM_DefineClassWithPropertyHandler failed due to nullptr utf8name");
    }

    // case 3. if constructor is nullptr, return JSVM_INVALID_ARG.
    res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test1", NAPI_AUTO_LENGTH, nullptr, 0, nullptr, &propertyCfg,
        &param, &testWrapClass);
    if (res == JSVM_INVALID_ARG) {
        JSVM_ASSERT(env, res == JSVM_INVALID_ARG,
            "OH_JSVM_DefineClassWithPropertyHandler failed due to nullptr constructor");
    }

    // case 4. If the callback of the constructor is nullptr, return JSVM_INVALID_ARG.
    param.callback = nullptr;
    res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test1", NAPI_AUTO_LENGTH, &param, 0, nullptr, &propertyCfg,
        &param, &testWrapClass);
    if (res == JSVM_INVALID_ARG) {
        JSVM_ASSERT(env, res == JSVM_INVALID_ARG,
            "OH_JSVM_DefineClassWithPropertyHandler failed due to nullptr constructor callback");
    }
    param.callback = func;

    // case 5. If propertyCount is greater than 0, properties are nullptr
    res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test1", NAPI_AUTO_LENGTH, &param, 1, nullptr, &propertyCfg,
        &param, &testWrapClass);
    if (res == JSVM_INVALID_ARG) {
        JSVM_ASSERT(env, res == JSVM_INVALID_ARG,
            "OH_JSVM_DefineClassWithPropertyHandler failed due to nullptr properties");
    }

    // case 6. If propertyHandlerCfg is nullptr, return JSVM_INVALID_ARG.
    res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test1", NAPI_AUTO_LENGTH, &param, 0, nullptr, nullptr, &param,
        &testWrapClass);
    if (res == JSVM_INVALID_ARG) {
        JSVM_ASSERT(env, res == JSVM_INVALID_ARG,
            "OH_JSVM_DefineClassWithPropertyHandler failed due to nullptr propertyHandlerCfg");
    }

    // case 7. If result is nullptr, return JSVM_INVALID_ARG.
    res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test1", NAPI_AUTO_LENGTH, &param, 0, nullptr, &propertyCfg,
        &param, nullptr);
    if (res == JSVM_INVALID_ARG) {
        JSVM_ASSERT(env, res == JSVM_INVALID_ARG,
            "OH_JSVM_DefineClassWithPropertyHandler failed due to nullptr result");
    }

    // case 8. Valid input parameter, return JSVM_OK.
    res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test1", NAPI_AUTO_LENGTH, &param, 0, nullptr, &propertyCfg,
        nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        JSVM_ASSERT(env, res == JSVM_INVALID_ARG, "OH_JSVM_DefineClassWithPropertyHandler successfully");
    }
    return nullptr;
}

static napi_value testCheckArgs(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = checkArgs;

    JSVM_PropertyDescriptor descriptor[] = {
        {"checkArgs", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// ============ empty propertyHandlerCfg ============================
// case 9. setProperty
static JSVM_Value setProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    JSVM_Value testWrapClass = nullptr;

    OH_JSVM_DefineClassWithPropertyHandler(env, "Test2", NAPI_AUTO_LENGTH, &param, 0, nullptr, &propertyCfg, nullptr,
        &testWrapClass);
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world";
    JSVM_Value setvalueName = nullptr;
    JSVM_Value result = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    JSVM_Status res = OH_JSVM_SetNamedProperty(env, instanceValue, "mySettedProperty", setvalueName);
    if (res == JSVM_OK) {
        char resultStr[] = "set property successfully";
        OH_JSVM_CreateStringUtf8(env, resultStr, strlen(resultStr), &result);
    }
    return result;
}

static napi_value testSetProperty(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = setProperty;

    JSVM_PropertyDescriptor descriptor[] = {
        {"setProperty", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// case 10. getProperty
static JSVM_Value getProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    JSVM_Value testWrapClass = nullptr;
    OH_JSVM_DefineClassWithPropertyHandler(env, "Test3", NAPI_AUTO_LENGTH, &param, 0, nullptr, &propertyCfg, nullptr,
        &testWrapClass);
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "mySettedProperty", setvalueName);

    JSVM_Value valueName = nullptr;
    JSVM_Status res = OH_JSVM_GetNamedProperty(env, instanceValue, "mySettedProperty", &valueName);
    if (res == JSVM_OK) {
        printf("JSVM getProperty successfully");
    }
    return valueName;
}

static napi_value testGetProperty(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = getProperty;
    JSVM_PropertyDescriptor descriptor[] = {
        {"getProperty", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// case 11 and case 12
static JSVM_Value CallObjectAsFunction(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;

    JSVM_PropertyHandlerConfigurationStruct propertyCfg;
    JSVM_CallbackStruct callbackStruct;
    callbackStruct.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        void *innerData;
        size_t argc = 1;
        JSVM_Value args[1];
        OH_JSVM_GetCbInfo(env, info, &argc, args, &thisVar, &innerData);
        uint32_t ret = 0;
        OH_JSVM_GetValueUint32(env, args[0], &ret);
        const char testStr[] = "hello world 111111";
        JSVM_Value setvalueName = nullptr;
        OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
        return setvalueName;
    };
    char data[100] = "hello world";
    callbackStruct.data = data;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test12", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &callbackStruct, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance", instanceValue);
    return nullptr;
}

static napi_value testCallFunction(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = CallObjectAsFunction;

    JSVM_PropertyDescriptor descriptor[] = {
        {"CallObjectAsFunction", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// ============================= test nullptr return for namedProperty handle ====================================
// cases 13-16, return nullptr, only listen without interception, successfully setProperty.
static JSVM_Value SetNamedPropertyCbInfo1(JSVM_Env env, JSVM_Value name, JSVM_Value property, JSVM_Value thisArg)
{
    char strValue[100];
    size_t size;
    size_t bufferSize = 300;
    OH_JSVM_GetValueStringUtf8(env, name, strValue, bufferSize, &size);
    char str[100];
    size_t size1;
    OH_JSVM_GetValueStringUtf8(env, property, str, strlen(str), &size1);
    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance1", thisArg);
    return nullptr;
}

static JSVM_Value NameHandler(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericNamedPropertySetterCallback = SetNamedPropertyCbInfo1;
    JSVM_CallbackStruct callbackStruct;
    callbackStruct.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        printf("call as a function called");
        return nullptr;
    };
    callbackStruct.data = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test4", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &callbackStruct, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty1", setvalueName);
    JSVM_Value valueName = nullptr;
    OH_JSVM_GetNamedProperty(env, instanceValue, "nameProperty1", &valueName);
    propertyCfg.genericNamedPropertySetterCallback = nullptr;
    return valueName;
}

static napi_value testSetNamedProperty01(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler;

    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value SetNamedPropertyCbInfo2(JSVM_Env env, JSVM_Value name, JSVM_Value property, JSVM_Value thisArg)
{
    return property;
}

static JSVM_Value NameHandler1(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericNamedPropertySetterCallback = SetNamedPropertyCbInfo2;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test5", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world2";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty2", setvalueName);

    const char testStr2[] = "nameProperty2";
    JSVM_Value setvalueName2 = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr2, strlen(testStr2), &setvalueName2);
    bool isExisted = false;
    OH_JSVM_HasProperty(env, instanceValue, setvalueName2, &isExisted);
    propertyCfg.genericNamedPropertySetterCallback = nullptr;
    return nullptr;
}

static napi_value testSetNamedProperty02(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler1;

    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler1", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value SetIndexPropertyCbInfo1(JSVM_Env env, JSVM_Value index, JSVM_Value property, JSVM_Value thisArg)
{
    uint32_t value;
    OH_JSVM_GetValueUint32(env, index, &value);
    char str[100];
    size_t size;
    OH_JSVM_GetValueStringUtf8(env, property, str, strlen(str), &size);
    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance1", thisArg);
    return nullptr;
}

static JSVM_Value IndexHandler1(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;

    propertyCfg.genericIndexedPropertySetterCallback = SetIndexPropertyCbInfo1;
    JSVM_CallbackStruct callbackStruct;
    callbackStruct.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        printf("call as a function called");
        return nullptr;
    };
    callbackStruct.data = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test6", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &callbackStruct, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    JSVM_Value jsIndex = nullptr;
    uint32_t index = 0;
    OH_JSVM_CreateUint32(env, index, &jsIndex);
    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex, setvalueName);
    propertyCfg.genericIndexedPropertySetterCallback = nullptr;
    return setvalueName;
}

static napi_value testSetIndexProperty01(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = IndexHandler1;

    JSVM_PropertyDescriptor descriptor[] = {
        {"IndexHandler1", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value SetIndexPropertyCbInfo2(JSVM_Env env, JSVM_Value index, JSVM_Value property, JSVM_Value thisArg)
{
    return property;
}

static JSVM_Value IndexHandler2(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericIndexedPropertySetterCallback = SetIndexPropertyCbInfo2;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test7", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    JSVM_Value jsIndex = nullptr;
    uint32_t index = 0;
    OH_JSVM_CreateUint32(env, index, &jsIndex);
    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex, setvalueName);
    bool isExisted = false;
    OH_JSVM_HasProperty(env, instanceValue, jsIndex, &isExisted);
    propertyCfg.genericIndexedPropertySetterCallback = nullptr;
    return nullptr;
}

static napi_value testSetIndexProperty02(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = IndexHandler2;

    JSVM_PropertyDescriptor descriptor[] = {
        {"IndexHandler2", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value GetNamedPropertyCbInfo1(JSVM_Env env, JSVM_Value name, JSVM_Value thisArg)
{
    char strValue[100];
    size_t size;
    size_t bufferSize = 300;
    OH_JSVM_GetValueStringUtf8(env, name, strValue, bufferSize, &size);
    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance1", thisArg);
    return nullptr;
}

static JSVM_Value NameHandler2(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericNamedPropertyGetterCallback = GetNamedPropertyCbInfo1;
    JSVM_CallbackStruct callbackStruct;
    callbackStruct.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        printf("call as a function called");
        return nullptr;
    };
    callbackStruct.data = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test8", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &callbackStruct, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty1", setvalueName);
    JSVM_Value valueName = nullptr;
    OH_JSVM_GetNamedProperty(env, instanceValue, "nameProperty1", &valueName);
    propertyCfg.genericNamedPropertyGetterCallback = nullptr;
    return valueName;
}

static napi_value testGetNamedProperty01(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler2;

    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler2", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value GetNamedPropertyCbInfo2(JSVM_Env env, JSVM_Value name, JSVM_Value thisArg)
{
    JSVM_Value newResult = nullptr;
    if (g_temp) {
        char newStr[] = "hi from name handler";
        OH_JSVM_CreateStringUtf8(env, newStr, strlen(newStr), &newResult);
    }
    return newResult;
}

static JSVM_Value NameHandler3(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;

    propertyCfg.genericNamedPropertyGetterCallback = GetNamedPropertyCbInfo2;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test9", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty2", setvalueName);

    g_temp = true;
    JSVM_Value valueName = nullptr;
    OH_JSVM_GetNamedProperty(env, instanceValue, "nameProperty2", &valueName);
    char str[100];
    size_t size;
    OH_JSVM_GetValueStringUtf8(env, valueName, str, strlen(str), &size);
    g_temp = false;
    OH_JSVM_GetNamedProperty(env, instanceValue, "nameProperty2", &valueName);
    char str2[100];
    size_t size2;
    OH_JSVM_GetValueStringUtf8(env, valueName, str2, strlen(str2), &size2);
    propertyCfg.genericNamedPropertyGetterCallback = nullptr;
    return valueName;
}

static napi_value testGetNamedProperty02(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler3;

    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler3", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value GetIndexPropertyCbInfo1(JSVM_Env env, JSVM_Value index, JSVM_Value thisArg)
{
    uint32_t value;
    OH_JSVM_GetValueUint32(env, index, &value);
    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance2", thisArg);
    return nullptr;
}

static JSVM_Value IndexHandler3(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericIndexedPropertyGetterCallback = GetIndexPropertyCbInfo1;
    JSVM_CallbackStruct callbackStruct;
    callbackStruct.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        printf("call as a function called");
        return nullptr;
    };
    callbackStruct.data = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test10", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &callbackStruct, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    JSVM_Value jsIndex = nullptr;
    uint32_t index = 0;
    OH_JSVM_CreateUint32(env, index, &jsIndex);
    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex, setvalueName);
    JSVM_Value valueName = nullptr;
    OH_JSVM_GetProperty(env, instanceValue, jsIndex, &valueName);
    propertyCfg.genericIndexedPropertyGetterCallback = nullptr;
    return valueName;
}

static napi_value testGetIndexProperty01(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = IndexHandler3;

    JSVM_PropertyDescriptor descriptor[] = {
        {"IndexHandler3", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value GetIndexPropertyCbInfo2(JSVM_Env env, JSVM_Value index, JSVM_Value thisArg)
{
    JSVM_Value newResult = nullptr;
    if (g_temp) {
        char newStr[] = "hi from index handler";
        OH_JSVM_CreateStringUtf8(env, newStr, strlen(newStr), &newResult);
    }
    return newResult;
}

static JSVM_Value IndexHandler4(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericIndexedPropertyGetterCallback = GetIndexPropertyCbInfo2;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test11", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    JSVM_Value jsIndex = nullptr;
    uint32_t index = 0;
    OH_JSVM_CreateUint32(env, index, &jsIndex);
    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex, setvalueName);
    g_temp = true;
    JSVM_Value valueName = nullptr;
    OH_JSVM_GetProperty(env, instanceValue, jsIndex, &valueName);
    char str[100];
    size_t size;
    OH_JSVM_GetValueStringUtf8(env, valueName, str, strlen(str), &size);
    g_temp = false;
    OH_JSVM_GetProperty(env, instanceValue, jsIndex, &valueName);
    char str2[100];
    size_t size2;
    OH_JSVM_GetValueStringUtf8(env, valueName, str2, strlen(str2), &size2);
    propertyCfg.genericIndexedPropertyGetterCallback = nullptr;
    return valueName;
}

static napi_value testGetIndexProperty02(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = IndexHandler4;

    JSVM_PropertyDescriptor descriptor[] = {
        {"IndexHandler4", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value DeleterNamedPropertyCbInfo1(JSVM_Env env, JSVM_Value name, JSVM_Value thisArg)
{
    char strValue[100];
    size_t size;
    size_t bufferSize = 300;
    OH_JSVM_GetValueStringUtf8(env, name, strValue, bufferSize, &size);
    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance1", thisArg);
    return nullptr;
}

static JSVM_Value NameHandler4(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericNamedPropertyDeleterCallback = DeleterNamedPropertyCbInfo1;
    JSVM_CallbackStruct callbackStruct;
    callbackStruct.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        printf("call as a function called");
        return nullptr;
    };
    callbackStruct.data = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test13", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &callbackStruct, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);
    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty1", setvalueName);
    bool result = false;
    JSVM_Value propertyName = nullptr;
    char propertyChar[] = "nameProperty1";
    OH_JSVM_CreateStringUtf8(env, propertyChar, strlen(propertyChar), &propertyName);
    OH_JSVM_DeleteProperty(env, instanceValue, propertyName, &result);
    bool isExisted = false;
    OH_JSVM_HasProperty(env, instanceValue, propertyName, &isExisted);
    propertyCfg.genericNamedPropertyDeleterCallback = nullptr;
    return nullptr;
}

static napi_value testDeleterNamedProperty01(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;

    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler4;
    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler4", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value DeleterNamedPropertyCbInfo2(JSVM_Env env, JSVM_Value name, JSVM_Value thisArg)
{
    char strValue[100];
    size_t size;
    size_t bufferSize = 300;
    OH_JSVM_GetValueStringUtf8(env, name, strValue, bufferSize, &size);
    JSVM_Value newResult = nullptr;
    bool returnValue = true;
    OH_JSVM_GetBoolean(env, returnValue, &newResult);
    return newResult;
}

static JSVM_Value NameHandler5(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;

    JSVM_PropertyHandlerConfigurationStruct propertyCfg;
    propertyCfg.genericIndexedPropertyEnumeratorCallback = nullptr;
    propertyCfg.genericIndexedPropertyDeleterCallback = nullptr;
    propertyCfg.genericIndexedPropertySetterCallback = nullptr;
    propertyCfg.genericIndexedPropertyGetterCallback = nullptr;
    propertyCfg.genericNamedPropertyEnumeratorCallback = nullptr;
    propertyCfg.genericNamedPropertyDeleterCallback = DeleterNamedPropertyCbInfo2;
    propertyCfg.genericNamedPropertySetterCallback = nullptr;
    propertyCfg.genericNamedPropertyGetterCallback = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test14", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world2";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty2", setvalueName);

    bool result = false;
    JSVM_Value propertyName = nullptr;
    char propertyChar[] = "nameProperty2";
    OH_JSVM_CreateStringUtf8(env, propertyChar, strlen(propertyChar), &propertyName);
    OH_JSVM_DeleteProperty(env, instanceValue, propertyName, &result);
    bool isExisted = false;
    OH_JSVM_HasProperty(env, instanceValue, propertyName, &isExisted);
    return nullptr;
}

static napi_value testDeleterNamedProperty02(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler5;
    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler5", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static JSVM_Value DeleterNamedPropertyCbInfo3(JSVM_Env env, JSVM_Value name, JSVM_Value thisArg)
{
    char strValue[100];
    size_t size;
    size_t bufferSize = 300;
    OH_JSVM_GetValueStringUtf8(env, name, strValue, bufferSize, &size);
    JSVM_Value newResult = nullptr;
    bool returnValue = false;
    OH_JSVM_GetBoolean(env, returnValue, &newResult);
    return newResult;
}

static JSVM_Value NameHandler6(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;

    JSVM_PropertyHandlerConfigurationStruct propertyCfg;
    propertyCfg.genericIndexedPropertyEnumeratorCallback = nullptr;
    propertyCfg.genericIndexedPropertyDeleterCallback = nullptr;
    propertyCfg.genericIndexedPropertySetterCallback = nullptr;
    propertyCfg.genericIndexedPropertyGetterCallback = nullptr;
    propertyCfg.genericNamedPropertyEnumeratorCallback = nullptr;
    propertyCfg.genericNamedPropertyDeleterCallback = DeleterNamedPropertyCbInfo3;
    propertyCfg.genericNamedPropertySetterCallback = nullptr;
    propertyCfg.genericNamedPropertyGetterCallback = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test15", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);
    const char testStr[] = "hello world3";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty3", setvalueName);
    bool result = false;
    JSVM_Value propertyName = nullptr;
    char propertyChar[] = "nameProperty3";
    OH_JSVM_CreateStringUtf8(env, propertyChar, strlen(propertyChar), &propertyName);
    OH_JSVM_DeleteProperty(env, instanceValue, propertyName, &result);
    bool isExisted = false;
    OH_JSVM_HasProperty(env, instanceValue, propertyName, &isExisted);
    return nullptr;
}

static napi_value testDeleterNamedProperty03(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler6;
    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler6", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// ==================test nullptr return for indexedProperty handle =====================
// cases 36-38, when returning nullptr, delete listening trigger, only listen without intercepting.
// The attribute deletion is successful, and the OH_JSVM_DeleteProperty output parameter is true.
static JSVM_Value DeleterIndexedPropertyCbInfo1(JSVM_Env env, JSVM_Value index, JSVM_Value thisArg)
{
    uint32_t value;
    OH_JSVM_GetValueUint32(env, index, &value);
    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance1", thisArg);
    return nullptr;
}

// =================== test return true for indexedProperty handle ========================
// case 39 When returning true, the deletion of the listening trigger is triggered, and the interception
// is successful. The attribute deletion fails, and the OH_JSVM_DeleteProperty output parameter is true.
static JSVM_Value DeleterIndexedPropertyCbInfo2(JSVM_Env env, JSVM_Value index, JSVM_Value thisArg)
{
    uint32_t value;
    OH_JSVM_GetValueUint32(env, index, &value);
    JSVM_Value newResult = nullptr;
    bool returnValue = true;
    OH_JSVM_GetBoolean(env, returnValue, &newResult);
    return newResult;
}

static JSVM_Value IndexHandler6(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericIndexedPropertyDeleterCallback = DeleterIndexedPropertyCbInfo2;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test17", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    JSVM_Value jsIndex = nullptr;
    uint32_t index = 0;
    OH_JSVM_CreateUint32(env, index, &jsIndex);
    const char testStr[] = "hello world2";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex, setvalueName);
    bool result = false;
    OH_JSVM_DeleteProperty(env, instanceValue, jsIndex, &result);
    bool isExisted = false;
    OH_JSVM_HasProperty(env, instanceValue, jsIndex, &isExisted);
    propertyCfg.genericIndexedPropertyDeleterCallback = nullptr;
    return nullptr;
}

static napi_value testDeleterIndexedProperty02(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = IndexHandler6;
    JSVM_PropertyDescriptor descriptor[] = {
        {"IndexHandler6", NULL, &param[1], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// ============================= test return false for indexedProperty handle =======================
// case 40 When returning false, the deletion of the listening trigger is triggered, and the interception
// is successful.The attribute deletion fails, and the OH_JSVM_DeleteProperty output parameter is false.
static JSVM_Value DeleterIndexedPropertyCbInfo3(JSVM_Env env, JSVM_Value index, JSVM_Value thisArg)
{
    uint32_t value;
    OH_JSVM_GetValueUint32(env, index, &value);
    JSVM_Value newResult = nullptr;
    bool returnValue = false;
    OH_JSVM_GetBoolean(env, returnValue, &newResult);
    return newResult;
}

static JSVM_Value IndexHandler7(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericIndexedPropertyDeleterCallback = DeleterIndexedPropertyCbInfo3;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test18", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    JSVM_Value jsIndex = nullptr;
    uint32_t index = 0;
    OH_JSVM_CreateUint32(env, index, &jsIndex);
    const char testStr[] = "hello world2";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex, setvalueName);
    bool result = false;
    OH_JSVM_DeleteProperty(env, instanceValue, jsIndex, &result);
    bool isExisted = false;
    OH_JSVM_HasProperty(env, instanceValue, jsIndex, &isExisted);
    propertyCfg.genericIndexedPropertyDeleterCallback = nullptr;
    return nullptr;
}

static napi_value testDeleterIndexedProperty03(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = IndexHandler7;
    JSVM_PropertyDescriptor descriptor[] = {
        {"IndexHandler7", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// =================test nullptr return for namedProperty handle =======
// case 41 and case 42
// When returning nullptr, the enumerator listens and triggers, only listens but not
// intercepts.OH_JSVM_GetAllPropertyNames can retrieve the property names that have already been set.
static JSVM_Value EnumeratorNamedPropertyCbInfo1(JSVM_Env env, JSVM_Value thisArg)
{
    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance1", thisArg);
    return nullptr;
}

static JSVM_Value NameHandler7(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericNamedPropertyEnumeratorCallback = EnumeratorNamedPropertyCbInfo1;
    JSVM_CallbackStruct callbackStruct;
    callbackStruct.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        printf("call as a function called");
        return nullptr;
    };
    callbackStruct.data = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test19", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &callbackStruct, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }

    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty1", setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "nameProperty2", setvalueName);

    JSVM_Value allPropertyNames = nullptr;
    OH_JSVM_GetAllPropertyNames(env, instanceValue, JSVM_KEY_OWN_ONLY,
        static_cast<JSVM_KeyFilter>(JSVM_KEY_ENUMERABLE | JSVM_KEY_SKIP_SYMBOLS), JSVM_KEY_NUMBERS_TO_STRINGS,
        &allPropertyNames);
    uint32_t nameSize = 0;
    OH_JSVM_GetArrayLength(env, allPropertyNames, &nameSize);
    JSVM_Value propertyName = nullptr;
    for (uint32_t i = 0; i < nameSize; ++i) {
        OH_JSVM_GetElement(env, allPropertyNames, i, &propertyName);
        char str[100];
        size_t size;
        OH_JSVM_GetValueStringUtf8(env, propertyName, str, strlen(str), &size);
        bool isExisted = false;
        OH_JSVM_HasProperty(env, instanceValue, propertyName, &isExisted);
    }
    propertyCfg.genericNamedPropertyEnumeratorCallback = nullptr;
    return nullptr;
}

static napi_value testEnumeratorNamedProperty01(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler7;
    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler7", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// ================== test return true for namedProperty handle =========
// case 43
// When returning nullptr, the enumerator listens and triggers, only listens but not
// intercepts. OH_JSVM_GetAllPropertyNames can retrieve the property names that have already been set.
static JSVM_Value EnumeratorNamedPropertyCbInfo2(JSVM_Env env, JSVM_Value thisArg)
{
    uint32_t arrayLength = 2;
    JSVM_Value testArray = nullptr;
    OH_JSVM_CreateArrayWithLength(env, arrayLength, &testArray);
    JSVM_Value name1 = nullptr;
    char newStr1[] = "hahaha";
    OH_JSVM_CreateStringUtf8(env, newStr1, strlen(newStr1), &name1);
    JSVM_Value name2 = nullptr;
    char newStr2[] = "heheheh";
    OH_JSVM_CreateStringUtf8(env, newStr2, strlen(newStr2), &name2);
    OH_JSVM_SetElement(env, testArray, 0, name1);
    OH_JSVM_SetElement(env, testArray, 1, name2);
    return testArray;
}

static JSVM_Value NameHandler8(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericNamedPropertyEnumeratorCallback = EnumeratorNamedPropertyCbInfo2;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test20", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);
    const char testStr[] = "hello world2";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "str11", setvalueName);
    OH_JSVM_SetNamedProperty(env, instanceValue, "str123", setvalueName);
    JSVM_Value allPropertyNames = nullptr;
    OH_JSVM_GetAllPropertyNames(env, instanceValue, JSVM_KEY_OWN_ONLY,
        static_cast<JSVM_KeyFilter>(JSVM_KEY_ENUMERABLE | JSVM_KEY_SKIP_SYMBOLS), JSVM_KEY_NUMBERS_TO_STRINGS,
        &allPropertyNames);
    uint32_t nameSize = 0;
    OH_JSVM_GetArrayLength(env, allPropertyNames, &nameSize);
    JSVM_Value propertyName = nullptr;
    for (uint32_t i = 0; i < nameSize; ++i) {
        OH_JSVM_GetElement(env, allPropertyNames, i, &propertyName);
        char str[100];
        size_t size;
        OH_JSVM_GetValueStringUtf8(env, propertyName, str, strlen(str), &size);
        bool isExisted = false;
        OH_JSVM_HasProperty(env, instanceValue, propertyName, &isExisted);
    }
    propertyCfg.genericNamedPropertyEnumeratorCallback = nullptr;
    return nullptr;
}

static napi_value testEnumeratorNamedProperty02(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = NameHandler8;
    JSVM_PropertyDescriptor descriptor[] = {
        {"NameHandler8", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// ================== test nullptr return for indexedProperty handle =========
// case 44 and case 45
// When returning nullptr, the enumerator listens and triggers, only listens but not intercepts.
// OH_JSVM_GetAllPropertyNames can retrieve the property names that have already been set
static JSVM_Value EnumeratorIndexedPropertyCbInfo1(JSVM_Env env, JSVM_Value thisArg)
{
    JSVM_Value gloablObj = nullptr;
    OH_JSVM_GetGlobal(env, &gloablObj);
    OH_JSVM_SetNamedProperty(env, gloablObj, "myTestInstance1", thisArg);
    return nullptr;
}

static JSVM_Value IndexHandler8(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericIndexedPropertyEnumeratorCallback = EnumeratorIndexedPropertyCbInfo1;
    JSVM_CallbackStruct callbackStruct;
    callbackStruct.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        printf("call as a function called");
        return nullptr;
    };
    callbackStruct.data = nullptr;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test21", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, &callbackStruct, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world1";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    JSVM_Value jsIndex = nullptr;
    uint32_t index = 0;
    OH_JSVM_CreateUint32(env, index, &jsIndex);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex, setvalueName);
    JSVM_Value jsIndex1 = nullptr;
    uint32_t index1 = 1;
    OH_JSVM_CreateUint32(env, index1, &jsIndex1);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex1, setvalueName);
    JSVM_Value allPropertyNames = nullptr;
    OH_JSVM_GetAllPropertyNames(env, instanceValue, JSVM_KEY_OWN_ONLY,
        static_cast<JSVM_KeyFilter>(JSVM_KEY_ENUMERABLE | JSVM_KEY_SKIP_SYMBOLS), JSVM_KEY_NUMBERS_TO_STRINGS,
        &allPropertyNames);
    uint32_t nameSize = 0;
    OH_JSVM_GetArrayLength(env, allPropertyNames, &nameSize);
    JSVM_Value propertyName = nullptr;
    for (uint32_t i = 0; i < nameSize; ++i) {
        OH_JSVM_GetElement(env, allPropertyNames, i, &propertyName);
        char str[100];
        size_t size;
        OH_JSVM_GetValueStringUtf8(env, propertyName, str, strlen(str), &size);
        bool isExisted = false;
        OH_JSVM_HasProperty(env, instanceValue, propertyName, &isExisted);
    }
    propertyCfg.genericIndexedPropertyEnumeratorCallback = nullptr;
    return nullptr;
}

static napi_value testEnumeratorIndexedProperty01(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = IndexHandler8;
    JSVM_PropertyDescriptor descriptor[] = {
        {"indexHandler8", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

// =================== test return true for indexedProperty handle ============
// case 46
// When returning the array, the enumerator listens and triggers, listens and intercepts, and
// OH_JSVM_GetAllPropertyNames can retrieve the already set property names You can obtain the property
// names set in the listening callback and in the array, but the property names set in the callback are not actual
// properties
static JSVM_Value EnumeratorIndexedPropertyCbInfo2(JSVM_Env env, JSVM_Value thisArg)
{
    JSVM_Value testArray = nullptr;
    uint32_t arrayLength = 2;
    OH_JSVM_CreateArrayWithLength(env, arrayLength, &testArray);
    JSVM_Value index1 = nullptr;
    uint32_t num1 = 2;
    OH_JSVM_CreateUint32(env, num1, &index1);
    JSVM_Value index2 = nullptr;
    uint32_t num2 = 3;
    OH_JSVM_CreateUint32(env, num2, &index2);
    OH_JSVM_SetElement(env, testArray, 0, index1);
    OH_JSVM_SetElement(env, testArray, 1, index2);
    return testArray;
}

static JSVM_Value IndexHandler9(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_CallbackStruct param;
    param.callback = [](JSVM_Env env, JSVM_CallbackInfo info) -> JSVM_Value {
        JSVM_Value thisVar = nullptr;
        OH_JSVM_GetCbInfo(env, info, nullptr, nullptr, &thisVar, nullptr);
        return thisVar;
    };
    param.data = nullptr;
    propertyCfg.genericIndexedPropertyEnumeratorCallback = EnumeratorIndexedPropertyCbInfo2;
    JSVM_Value testWrapClass = nullptr;
    JSVM_Status res = OH_JSVM_DefineClassWithPropertyHandler(env, "Test22", NAPI_AUTO_LENGTH, &param, 0, nullptr,
        &propertyCfg, nullptr, &testWrapClass);
    if (res == JSVM_OK) {
        printf("OH_JSVM_DefineClassWithPropertyHandler successfully");
    } else {
        printf("OH_JSVM_DefineClassWithPropertyHandler failed");
        return nullptr;
    }
    JSVM_Value instanceValue = nullptr;
    OH_JSVM_NewInstance(env, testWrapClass, 0, nullptr, &instanceValue);

    const char testStr[] = "hello world2";
    JSVM_Value setvalueName = nullptr;
    OH_JSVM_CreateStringUtf8(env, testStr, strlen(testStr), &setvalueName);
    JSVM_Value jsIndex = nullptr;
    uint32_t index = 0;
    OH_JSVM_CreateUint32(env, index, &jsIndex);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex, setvalueName);
    JSVM_Value jsIndex1 = nullptr;
    uint32_t index1 = 1;
    OH_JSVM_CreateUint32(env, index1, &jsIndex1);
    OH_JSVM_SetProperty(env, instanceValue, jsIndex1, setvalueName);
    JSVM_Value allPropertyNames = nullptr;
    OH_JSVM_GetAllPropertyNames(env, instanceValue, JSVM_KEY_OWN_ONLY,
        static_cast<JSVM_KeyFilter>(JSVM_KEY_ENUMERABLE | JSVM_KEY_SKIP_SYMBOLS), JSVM_KEY_NUMBERS_TO_STRINGS,
        &allPropertyNames);
    uint32_t nameSize = 0;
    OH_JSVM_GetArrayLength(env, allPropertyNames, &nameSize);
    JSVM_Value propertyName = nullptr;
    for (uint32_t i = 0; i < nameSize; ++i) {
        OH_JSVM_GetElement(env, allPropertyNames, i, &propertyName);
        char str[100];
        size_t size;
        OH_JSVM_GetValueStringUtf8(env, propertyName, str, strlen(str), &size);
        bool isExisted = false;
        OH_JSVM_HasProperty(env, instanceValue, propertyName, &isExisted);
    }
    propertyCfg.genericIndexedPropertyEnumeratorCallback = nullptr;
    return nullptr;
}

static napi_value testEnumeratorIndexedProperty02(napi_env env1, napi_callback_info info)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[1];
    param[0].callback = nullptr;
    param[0].callback = IndexHandler9;
    JSVM_PropertyDescriptor descriptor[] = {
        {"indexHandler9", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(env1, napi_create_int32(env1, 0, &result11));
    return result11;
}

static napi_value testDefinePropertyHandle(napi_env env, napi_callback_info info)
{
    size_t argc = 1;
    napi_value args[1];
    NAPI_CALL(env, napi_get_cb_info(env, info, &argc, args, NULL, NULL));
    NAPI_ASSERT(env, argc > 0, "Wrong number of arguments");

    int32_t value;
    napi_value result = 0;
    NAPI_CALL(env, napi_get_value_int32(env, args[0], &value));
    if (value == DIFF_VALUE_ZERO) {
        result = testCheckArgs(env, info);
    } else if (value == DIFF_VALUE_NOE) {
        result = testSetProperty(env, info);
    } else if (value == DIFF_VALUE_TWO) {
        result = testGetProperty(env, info);
    } else if (value == DIFF_VALUE_THREE) {
        result = testCallFunction(env, info);
    } else if (value == DIFF_VALUE_FOUR) {
        result = testSetNamedProperty01(env, info);
    } else if (value == DIFF_VALUE_FIVE) {
        result = testSetNamedProperty02(env, info);
    } else if (value == DIFF_VALUE_SIX) {
        result = testSetIndexProperty01(env, info);
    } else if (value == DIFF_VALUE_SEVEN) {
        result = testSetIndexProperty02(env, info);
    } else if (value == DIFF_VALUE_EIGHT) {
        result = testGetNamedProperty01(env, info);
    } else if (value == DIFF_VALUE_NINE) {
        result = testGetNamedProperty02(env, info);
    } else if (value == DIFF_VALUE_TEN) {
        result = testGetIndexProperty01(env, info);
    } else if (value == DIFF_VALUE_ELEVEN) {
        result = testGetIndexProperty02(env, info);
    } else if (value == DIFF_VALUE_TWELVE) {
        result = testDeleterNamedProperty01(env, info);
    } else if (value == DIFF_VALUE_THIRTEEN) {
        result = testDeleterNamedProperty02(env, info);
    } else if (value == DIFF_VALUE_FOURTEEN) {
        result = testDeleterNamedProperty03(env, info);
    } else if (value == DIFF_VALUE_FITEEN) {
        result = testDeleterIndexedProperty01(env, info);
    } else if (value == DIFF_VALUE_SIXTEEN) {
        result = testDeleterIndexedProperty02(env, info);
    } else if (value == DIFF_VALUE_SEVENTEEN) {
        result = testDeleterIndexedProperty03(env, info);
    } else if (value == DIFF_VALUE_EIGHTEEN) {
        result = testEnumeratorNamedProperty01(env, info);
    } else if (value == DIFF_VALUE_NINETEEN) {
        result = testEnumeratorNamedProperty02(env, info);
    } else if (value == DIFF_VALUE_TWENTY) {
        result = testEnumeratorIndexedProperty01(env, info);
    } else if (value == DIFF_VALUE_TWENTYONE) {
        result = testEnumeratorIndexedProperty02(env, info);
    }
    return result;
}

static JSVM_Value CreateArrayWithLength(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    size_t argc = 1;
    JSVM_Value argv[1];
    JSVM_Value result;
    // 解析传递的参数OH_JSVM_GetCbInfo
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    // 获取传递的数组长度
    int32_t length;
    OH_JSVM_GetValueInt32(env, argv[0], &length);
    // 使用nOH_JSVM_CreateArrayWithLength创建传递固定长度的数组
    JSVM_Status status = OH_JSVM_CreateArrayWithLength(env, length, &result);
    if (status == JSVM_OK) {
        // 给创建的数组设置值
        for (int32_t i = 0; i < length; i++) {
            JSVM_Value value;
            OH_JSVM_CreateInt32(env, i, &value);
            OH_JSVM_SetElement(env, result, i, value);
        }
    }
    return result;
}

static JSVM_Value CreateArraybuffer(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "arraybuffer";
    size_t argc = 1;
    JSVM_Value argv[1];
    JSVM_Value result;
    // 解析传递的参数
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    int32_t value;
    size_t length;
    OH_JSVM_GetValueInt32(env, argv[0], &value);
    length = size_t(value);
    void *data;
    // 创建一个新的ArrayBuffer
    OH_JSVM_CreateArraybuffer(env, length, &data, &result);
    // 返回创建好的ArrayBuffer
    return result;
}

static JSVM_Value CreateInt32(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    // int32_t是有符号的32位整数类型，表示带有符号的整数，它的范围是从-2^31到2^31 - 1，也就是-2147483648到2147483647
    // 要表示的整数值
    int32_t value = -20;
    // 创建JavaScript中的int32数字
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_CreateInt32(env, value, &result);
    if (status != JSVM_OK) {
        // 处理错误
        return nullptr;
    }
    return result;
}

static JSVM_Value GetValueInt32(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    size_t argc = 1;
    JSVM_Value args[1] = {nullptr};
    // int32_t是有符号的32位整数类型，表示带有符号的整数，它的范围是从-2^31到2^31 - 1，也就是-2147483648到2147483647
    int32_t result32;
    // 解析传递的参数
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 将前端传过来的参数转为NAPI模块的int32类型
    JSVM_Status status = OH_JSVM_GetValueInt32(env, args[0], &result32);
    if (status != JSVM_OK) {
        return nullptr;
    }
    JSVM_Value napiResult32;
    status = OH_JSVM_CreateInt32(env, result32, &napiResult32);
    if (status != JSVM_OK) {
        return nullptr;
    }
    return napiResult32;
}

static JSVM_Value CreateUInt32(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    uint32_t value = 26;
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_CreateUint32(env, value, &result);
    if (status != JSVM_OK) {
        return nullptr;
    }
    return result;
}

static JSVM_Value GetValueUint32(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);

    uint32_t number;
    JSVM_Status status = OH_JSVM_GetValueUint32(env, argv[0], &number);
    JSVM_Value result;
    OH_JSVM_CreateUint32(env, number, &result);
    if (status != JSVM_OK) {
        return nullptr;
    }
    return result;
}

static JSVM_Value CreateInt64(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    int64_t value = 2147483648;
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_CreateInt64(env, value, &result);
    if (status != JSVM_OK) {
        return nullptr;
    }
    return result;
}

static JSVM_Value GetValueInt64(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    size_t argc = 1;
    JSVM_Value args[1] = {nullptr};
    int64_t result64;
    // 解析传递的值
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 将前端传过来的参数分别转为NAPI模块的int64类型
    JSVM_Status status = OH_JSVM_GetValueInt64(env, args[0], &result64);
    // 调用OH_JSVM_GetValueInt64接口将int64类型的数据转为napi_value返回前端
    JSVM_Value napiResult64;
    OH_JSVM_CreateInt64(env, result64, &napiResult64);
    if (status != JSVM_OK) {
        return nullptr;
    }
    return napiResult64;
}

static JSVM_Value CreateDouble(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "double";
    double value = 1.234;
    // 创建JavaScript中的double数字
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_CreateDouble(env, value, &result);
    if (status != JSVM_OK) {
        // 处理错误
        return nullptr;
    }
    return result;
}

static JSVM_Value GetDouble(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "double";
    size_t argc = 1;
    JSVM_Value args[1] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    double value;
    JSVM_Status status = OH_JSVM_GetValueDouble(env, args[0], &value);
    if (status != JSVM_OK) {
        return nullptr;
    }
    JSVM_Value result;
    OH_JSVM_CreateDouble(env, value, &result);
    return result;
}

static JSVM_Value GetBoolean(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 传入两个参数并解析
    size_t argc = 2;
    JSVM_Value argv[2] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    int32_t paramData;
    OH_JSVM_GetValueInt32(env, argv[0], &paramData);
    int32_t paramValue;
    OH_JSVM_GetValueInt32(env, argv[1], &paramValue);
    JSVM_Value returnValue;
    bool type = false;
    if (paramData == paramValue) {
        type = true;
    }
    OH_JSVM_GetBoolean(env, type, &returnValue);
    // 返回结果
    return returnValue;
}

static JSVM_Value GetValueBool(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value args[1] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    bool bool_c;
    JSVM_Status status = OH_JSVM_GetValueBool(env, args[0], &bool_c);
    if (status == JSVM_BOOLEAN_EXPECTED) {
        // 如果OH_JSVM_GetValueBool成功会返回JSVM_OK，如果传入一个非布尔值则会返回JSVM_BOOLEAN_EXPECTED
        return nullptr;
    }
    JSVM_Value bool_napi;
    OH_JSVM_GetBoolean(env, bool_c, &bool_napi);

    return bool_napi;
}

static JSVM_Value CreateStringUtf8(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    const char *str = u8"你好, World!, successes to create UTF-8 string!";
    size_t length = strlen(str);
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_CreateStringUtf8(env, str, length, &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to create UTF-8 string");
    }
    return result;
}

static JSVM_Value GetValueStringUtf8(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    size_t argc = 1;
    JSVM_Value args[1] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    size_t length = 0;
    JSVM_Status status = OH_JSVM_GetValueStringUtf8(env, args[0], nullptr, 0, &length);
    char *buf = (char *)malloc(length + 1);
    status = OH_JSVM_GetValueStringUtf8(env, args[0], buf, length + 1, &length);
    if (status != JSVM_OK) {
        return nullptr;
    }
    JSVM_Value result;
    OH_JSVM_CreateStringUtf8(env, buf, length, &result);
    return result;
}

static JSVM_Value CreateStringUtf16(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf16";
    const char16_t *str = u"你好, World!, successes to create UTF-16 string!";
    std::u16string ustr(str);
    size_t length = ustr.length();
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_CreateStringUtf16(env, str, length, &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to create UTF-16 string");
    }
    return result;
}
static const int MaxBufferSize = 128;
static JSVM_Value GetValueStringUtf16(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf16";
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    JSVM_Value result;
    size_t length;
    char16_t buffer[MaxBufferSize];
    size_t bufferSize = MaxBufferSize;
    JSVM_Status status = OH_JSVM_GetValueStringUtf16(env, args[0], buffer, bufferSize, &length);
    if (status != JSVM_OK) {
        return nullptr;
    }
    OH_JSVM_CreateStringUtf16(env, buffer, length, &result);
    return result;
}

static JSVM_Value CreateStringLatin1(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "latin";
    const char *str = "Hello, World! éçñ, successes to create Latin1 string! 111";
    size_t length = NAPI_AUTO_LENGTH;
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_CreateStringLatin1(env, str, length, &result);
    if (status != napi_ok) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to create Latin1 string");
    }

    return result;
}


static JSVM_Value GetValueStringLatin1(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "latin";
    size_t argc = 1;
    JSVM_Value args[1] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    char buf[MaxBufferSize];
    size_t length;
    JSVM_Value napi_Res;
    JSVM_Status status = OH_JSVM_GetValueStringLatin1(env, args[0], buf, 128, &length);
    if (status != JSVM_OK) {
        return nullptr;
    }
    OH_JSVM_CreateStringLatin1(env, buf, length, &napi_Res);
    return napi_Res;
}

static JSVM_Value CreateBigintUint64(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "BigintUint64";
    uint64_t value = 5555555555555555555;
    JSVM_Value returnValue;
    OH_JSVM_CreateBigintUint64(env, value, &returnValue);
    return returnValue;
}

static JSVM_Value GetValueBigintUint64(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "BigintUint64";
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    uint64_t value;
    bool lossLess;
    OH_JSVM_GetValueBigintUint64(env, args[0], &value, &lossLess);
    if (!lossLess) {
        OH_JSVM_ThrowError(env, nullptr, "BigInt values have no lossless converted");
    }
    JSVM_Value returnValue;
    OH_JSVM_CreateBigintUint64(env, value, &returnValue);
    return returnValue;
}

static JSVM_Value CreateBigintInt64(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "BigintInt64";
    int64_t value = -5555555555555555555;
    JSVM_Value returnValue;
    OH_JSVM_CreateBigintInt64(env, value, &returnValue);
    return returnValue;
}

static JSVM_Value GetBigintInt64(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "BigintInt64";
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    int64_t value;
    bool lossLess;
    OH_JSVM_GetValueBigintInt64(env, args[0], &value, &lossLess);
    if (!lossLess) {
        OH_JSVM_ThrowError(env, nullptr, "BigInt values have not been lossless converted");
    }
    JSVM_Value returnValue;
    OH_JSVM_CreateBigintInt64(env, value, &returnValue);
    return returnValue;
}

static JSVM_Value GetArrayLength(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    size_t argc = 1;
    JSVM_Value args[1];
    JSVM_Value result;
    uint32_t length;
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    bool is_array;
    OH_JSVM_IsArray(env, args[0], &is_array);
    if (!is_array) {
        return nullptr;
    }
    OH_JSVM_GetArrayLength(env, args[0], &length);
    OH_JSVM_CreateInt32(env, length, &result);
    return result;
}

static JSVM_Value CreateBigintWords(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "BigintWords";
    int signBit = 0;
    size_t wordCount = 3;
    uint64_t words[] = {12ULL, 34ULL, 56ULL};
    JSVM_Value returnValue;
    JSVM_Status status = OH_JSVM_CreateBigintWords(env, signBit, wordCount, words, &returnValue);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "OH_JSVM_CreateBigintWords fail");
    }
    return returnValue;
}

static JSVM_Value GetValueBigintWords(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    int signBit = 0;
    size_t wordCount = 0;
    uint64_t words;

    // 调用OH_JSVM_GetValueBigintWords接口获取wordCount
    JSVM_Status status = OH_JSVM_GetValueBigintWords(env, args[0], nullptr, &wordCount, nullptr);

    // 调用nOH_JSVM_GetValueBigintWords接口获取传入bigInt相关信息如：signBit传入bigInt正负信息
    status = OH_JSVM_GetValueBigintWords(env, args[0], &signBit, &wordCount, &words);
    if (status != JSVM_OK) {
        return nullptr;
    }

    // 将符号位转化为int类型传出去
    JSVM_Value returnValue;
    OH_JSVM_CreateInt32(env, signBit, &returnValue);
    return returnValue;
}

static JSVM_Value CreateExternal(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t dataSize = 10;
    void *data = malloc(dataSize); // 分配外部数据
    memset(data, 0, dataSize);     // 初始化外部数据
    const char testStr[] = "test";
    JSVM_Value external = nullptr;
    JSVM_Status status = OH_JSVM_CreateExternal(
        env, (void *)testStr, [](JSVM_Env env, void *data, void *hint) {}, (void *)testStr, &external);
    JSVM_Value returnValue;
    bool type = false;
    if (status != JSVM_OK) {
        return nullptr;
    } else {
        type = true;
    }
    OH_JSVM_GetBoolean(env, type, &returnValue);
    // 返回结果
    return returnValue;
}

static JSVM_Value GetValueExternal(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    void *data = (void *)0x12345;
    JSVM_Value externalValue;
    JSVM_Status status = OH_JSVM_CreateExternal(env, data, nullptr, nullptr, &externalValue);
    if (status != JSVM_OK) {
        // 错误处理
        return nullptr;
    }
    void *data_value;
    status = OH_JSVM_GetValueExternal(env, externalValue, &data_value);
    bool type = false;
    if (status != JSVM_OK) {
        // 错误处理
        return nullptr;
    }
    type = true;
    // 将符号位转化为int类型传出去
    JSVM_Value returnValue;
    OH_JSVM_CreateInt32(env, 0, &returnValue);
    return returnValue;
}

static JSVM_Value GetNull(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Value nullValue;
    OH_JSVM_GetNull(env, &nullValue);
    return nullValue;
}

static JSVM_Value GetUndefined(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 获取并解析传进的参数
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, NULL, NULL);
    // 创建一个 undefined 值
    JSVM_Value value;
    OH_JSVM_GetUndefined(env, &value);
    return value;
}

static JSVM_Value GetGlobal(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    // 获取全局对象
    JSVM_Value value;
    JSVM_Value global;
    OH_JSVM_CreateInt32(env, 1, &value);
    OH_JSVM_GetGlobal(env, &global);
    OH_JSVM_SetNamedProperty(env, global, "Row", value);
    return global;
}

static JSVM_Value CreateSymbol(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Value result;
    const char *des = "only";
    OH_JSVM_CreateStringUtf8(env, des, JSVM_AUTO_LENGTH, &result);
    JSVM_Value returnSymbol;
    OH_JSVM_CreateSymbol(env, result, &returnSymbol);
    JSVM_Value returnValue;
    bool type = false;
    JSVM_ValueType valuetypeSymbol;
    OH_JSVM_Typeof(env, returnSymbol, &valuetypeSymbol);
    if (valuetypeSymbol == JSVM_SYMBOL) {
        type = true;
    }
    OH_JSVM_GetBoolean(env, type, &returnValue);
    return returnValue;
}

static JSVM_Value SymbolFor(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Value description;
    OH_JSVM_CreateStringUtf8(env, "test_demo", 9, &description);
    char buffer[128];
    size_t bufferSize = 128;
    size_t copied = 0;
    OH_JSVM_GetValueStringUtf8(env, description, buffer, bufferSize, &copied);
    JSVM_Value symbol;
    OH_JSVM_CreateSymbol(env, description, &symbol);
    JSVM_Value result_symbol;
    JSVM_Status status = OH_JSVM_SymbolFor(env, nullptr, 0, &result_symbol);
    JSVM_Value returnValue;
    bool type = false;
    JSVM_ValueType valuetypeSymbol;
    OH_JSVM_Typeof(env, result_symbol, &valuetypeSymbol);
    if (valuetypeSymbol == JSVM_SYMBOL && status == JSVM_OK) {
        type = true;
    }
    OH_JSVM_GetBoolean(env, type, &returnValue);
    // 返回结果
    return returnValue;
}

static JSVM_Value CreateDate(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "date";
    double value = 1501924876711;
    // 调用napi_create_date接口将double值转换成表示日期时间的JavaScript值返回出去
    JSVM_Value returnValue;
    OH_JSVM_CreateDate(env, value, &returnValue);
    return returnValue;
}

static JSVM_Value GetDateValue(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "double";
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    double value;
    JSVM_Status status = OH_JSVM_GetDateValue(env, args[0], &value);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "napi_get_date_value fail");
    }
    JSVM_Value returnValue;
    OH_JSVM_CreateDouble(env, value, &returnValue);
    return returnValue;
}

static JSVM_Value IsDate(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    bool result;
    OH_JSVM_IsDate(env, args[0], &result);
    JSVM_Value isDate;
    OH_JSVM_GetBoolean(env, result, &isDate);
    return isDate;
}


static JSVM_Value GetArraybufferInfo(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "arraybufferinfo";
    size_t argc = 1;
    JSVM_Value args[1];
    // 解析传递的参数
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    // 检查参数是否为ArrayBuffer
    bool is_arraybuffer;
    OH_JSVM_IsArraybuffer(env, args[0], &is_arraybuffer);
    if (!is_arraybuffer) {
        OH_JSVM_ThrowTypeError(env, nullptr, "Argument must be an ArrayBuffer");
    }
    void *data;
    size_t byte_length;
    // 获取ArrayBuffer的底层数据缓冲区和长度
    JSVM_Status status = OH_JSVM_GetArraybufferInfo(env, args[0], &data, &byte_length);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to get ArrayBuffer info");
    }
    // 创建结果对象
    JSVM_Value result;
    OH_JSVM_CreateObject(env, &result);
    // 创建数据缓冲区的字节长度属性
    JSVM_Value byte_length_value;
    OH_JSVM_CreateUint32(env, byte_length, &byte_length_value);
    OH_JSVM_SetNamedProperty(env, result, "byteLength", byte_length_value);
    JSVM_Value bufferData;
    OH_JSVM_CreateArraybuffer(env, byte_length, &data, &bufferData);
    OH_JSVM_SetNamedProperty(env, result, "buffer", bufferData);
    return result;
}

static JSVM_Value CreateTypedArray(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "typearray";
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    int32_t typeNum;
    OH_JSVM_GetValueInt32(env, args[0], &typeNum);
    JSVM_TypedarrayType arrayType;
    // 用于存储每个元素的大小
    size_t elementSize = 0;
    // 根据传递的类型值选择创建对应的类型数组
    switch (typeNum) {
        case 0:
            arrayType = JSVM_INT8_ARRAY;
            elementSize = sizeof(int8_t);
            break;
        case 1:
            arrayType = JSVM_UINT8_ARRAY;
            elementSize = sizeof(uint8_t);
            break;
        case 2:
            arrayType = JSVM_UINT8_CLAMPED_ARRAY;
            elementSize = sizeof(uint8_t);
            break;
        case 3:
            arrayType = JSVM_INT16_ARRAY;
            elementSize = sizeof(int16_t);
            break;
        case 4:
            arrayType = JSVM_UINT16_ARRAY;
            elementSize = sizeof(uint16_t);
            break;
        case 5:
            arrayType = JSVM_INT32_ARRAY;
            elementSize = sizeof(int32_t);
            break;
        case 6:
            arrayType = JSVM_UINT32_ARRAY;
            elementSize = sizeof(uint32_t);
            break;
        case 7:
            arrayType = JSVM_FLOAT32_ARRAY;
            elementSize = sizeof(float);
            break;
        case 8:
            arrayType = JSVM_FLOAT64_ARRAY;
            elementSize = sizeof(double);
            break;
        case 9:
            arrayType = JSVM_BIGINT64_ARRAY;
            elementSize = sizeof(int64_t);
            break;
        case 10:
            arrayType = JSVM_BIGUINT64_ARRAY;
            elementSize = sizeof(uint64_t);
            break;
        default:
            arrayType = JSVM_INT8_ARRAY;
            elementSize = sizeof(int8_t);
            break;
    }
    size_t length = 3;
    JSVM_Value arrayBuffer;
    JSVM_Value typedArray;
    void *data;
    // 创建一个ArrayBuffer
    OH_JSVM_CreateArraybuffer(env, length * elementSize, (void **)&data, &arrayBuffer);
    // 根据给定类型创建TypedArray
    OH_JSVM_CreateTypedarray(env, arrayType, length, arrayBuffer, 0, &typedArray);
    return typedArray;
}

static JSVM_Value GetTypedArrayInfo(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 获取并解析参数，第一个参数为需要获得的信息的TypedArray类型数据，第二个参数为需要获得的信息类型的枚举值
    size_t argc = 2;
    JSVM_Value args[2] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    // 将第二个参数转为int32类型便于比较
    int32_t infoTypeParam;
    OH_JSVM_GetValueInt32(env, args[1], &infoTypeParam);
    // 定义枚举类型与ArkTs侧枚举类型infoType顺序含义一致
    enum infoType {
        infotype,
        infolength,
        infoarraybuffer,
        infobyteoffset
    };
    void *data;
    JSVM_TypedarrayType type;
    size_t byte_offset, length;
    JSVM_Value arraybuffer;
    // 调用接口OH_JSVM_GetTypedarrayInfo获得TypedArray类型数据的信息
    OH_JSVM_GetTypedarrayInfo(env, args[0], &type, &length, &data, &arraybuffer, &byte_offset);

    JSVM_Value result;
    // 根据属性名，返回TypedArray对应的属性值
    switch (infoTypeParam) {
        case infotype:
            // 如果传入的参数是int8类型的TypedArray数据，它的类型（type）为JSVM_INT8_ARRAY
            JSVM_Value int8_type;
            OH_JSVM_GetBoolean(env, type == JSVM_INT8_ARRAY, &int8_type);
            result = int8_type;
            break;
        case infolength:
            g_data_type = "int";
            // TypedArray中的元素数
            JSVM_Value napi_length;
            OH_JSVM_CreateInt32(env, length, &napi_length);
            result = napi_length;
            break;
        case infobyteoffset:
            g_data_type = "int";
            // TypedArray数组的第一个元素所在的基础原生数组中的字节偏移量
            JSVM_Value napi_byte_offset;
            OH_JSVM_CreateInt32(env, byte_offset, &napi_byte_offset);
            result = napi_byte_offset;
            break;
        case infoarraybuffer:
            bool isArraybuffer;
            OH_JSVM_IsArraybuffer(env, arraybuffer, &isArraybuffer);
            JSVM_Value isArray;
            OH_JSVM_GetBoolean(env, isArraybuffer, &isArray);
            result = isArray;
            break;
        default:
            break;
    }
    return result;
}

static JSVM_Value CreateObject(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "object";
    JSVM_Value object;
    // 创建一个空对象
    OH_JSVM_CreateObject(env, &object);
    // 设置对象的属性
    JSVM_Value name;
    // 设置属性名为 "name"
    OH_JSVM_CreateStringUtf8(env, "name", NAPI_AUTO_LENGTH, &name);
    JSVM_Value value;
    // 设置属性值为 "Hello from N-API!"
    OH_JSVM_CreateStringUtf8(env, "Hello OH_JSVM_CreateObject!", NAPI_AUTO_LENGTH, &value);
    // 将属性设置到对象上
    OH_JSVM_SetProperty(env, object, name, value);

    return object;
}

static JSVM_Value CreateDataView(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 2;
    JSVM_Value args[2];
    JSVM_Value arraybuffer;
    JSVM_Value result;
    // DataView的字节长度
    size_t byte_length = 12;
    // 字节偏移量
    size_t byte_offset = 4;
    // 获取回调函数的参数信息
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 将参数转换为对象类型
    OH_JSVM_CoerceToObject(env, args[0], &arraybuffer);
    // 创建一个数据视图对象，并指定字节长度和字节偏移量
    JSVM_Status status = OH_JSVM_CreateDataview(env, byte_length, arraybuffer, byte_offset, &result);
    if (status != JSVM_OK) {
        return nullptr;
    }
    // 获取DataView的指针和长度信息
    uint8_t *data = nullptr;
    size_t length = 0;
    // 为DataView赋值
    for (size_t i = 0; i < length; i++) {
        data[i] = static_cast<uint8_t>(i + 1);
    }
    int32_t infoType;
    OH_JSVM_GetValueInt32(env, args[1], &infoType);
    size_t bytelength;
    JSVM_Value array_buffer;
    size_t byteoffset;
    enum infoTypeEnum {
        bytelengthEnum,
        arraybufferEnum,
        byteoffsetEnum
    };
    // 获取dataview信息
    OH_JSVM_GetDataviewInfo(env, result, &bytelength, (void **)&data, &array_buffer, &byteoffset);
    JSVM_Value return_result;
    switch (infoType) {
        case bytelengthEnum:
            g_data_type = "int";
            JSVM_Value len;
            OH_JSVM_CreateInt32(env, bytelength, &len);
            return_result = len;
            break;
        case arraybufferEnum:
            bool isArraybuffer;
            OH_JSVM_IsArraybuffer(env, array_buffer, &isArraybuffer);
            JSVM_Value isArray;
            OH_JSVM_GetBoolean(env, isArraybuffer, &isArray);
            return_result = isArray;
            break;
        case byteoffsetEnum:
            g_data_type = "int";
            JSVM_Value offset;
            OH_JSVM_CreateInt32(env, byteoffset, &offset);
            return_result = offset;
            break;
        default:
            break;
    }
    return return_result;
}

static JSVM_Value GetDataViewInfo(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 2;
    JSVM_Value args[2] = {nullptr};

    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 将第二个参数转为int32类型的数字
    int32_t infoType;
    OH_JSVM_GetValueInt32(env, args[1], &infoType);

    size_t bytelength;
    void *data;
    JSVM_Value arraybuffer;
    size_t byte_offset;
    // 定义枚举类型与ArkTs侧枚举类型infoType顺序含义一致
    enum infoTypeEnum {
        bytelengthEnum,
        arraybufferEnum,
        byteoffsetEnum
    };
    // 获取dataview信息
    OH_JSVM_GetDataviewInfo(env, args[0], &bytelength, &data, &arraybuffer, &byte_offset);
    JSVM_Value result;
    switch (infoType) {
        case bytelengthEnum:
            g_data_type = "int";
            // 返回查询DataView的字节数
            JSVM_Value len;
            OH_JSVM_CreateInt32(env, bytelength, &len);
            result = len;
            break;
        case arraybufferEnum:
            // 返回查询DataView的arraybuffer
            bool isArraybuffer;
            OH_JSVM_IsArraybuffer(env, arraybuffer, &isArraybuffer);
            JSVM_Value isArray;
            OH_JSVM_GetBoolean(env, isArraybuffer, &isArray);
            result = isArray;
            break;
        case byteoffsetEnum:
            g_data_type = "int";
            // 返回查询DataView的偏移字节量
            JSVM_Value offset;
            OH_JSVM_CreateInt32(env, byte_offset, &offset);
            result = offset;
            break;
        default:
            break;
    }
    return result;
}

static JSVM_Value GetPrototype(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    // 创建一个空对象
    JSVM_Value obj = nullptr;
    OH_JSVM_CreateObject(env, &obj);
    const char *testNameStr = "set and get proto";
    JSVM_Value propValue = nullptr;
    JSVM_Value key;
    OH_JSVM_CreateStringUtf8(env, "name", JSVM_AUTO_LENGTH, &key);
    OH_JSVM_CreateStringUtf8(env, testNameStr, strlen(testNameStr), &propValue);
    OH_JSVM_SetProperty(env, obj, key, propValue);
    // 获取属性
    JSVM_Value propResult = nullptr;
    JSVM_Status status = OH_JSVM_GetProperty(env, obj, key, &propResult);
    if (status != JSVM_OK) {
        return nullptr;
    }
    return propResult;
}

static JSVM_Value CreateReference(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Ref g_ref;
    g_data_type = "object";
    JSVM_Value obj;
    OH_JSVM_CreateObject(env, &obj);
    JSVM_Value value;
    OH_JSVM_CreateStringUtf8(env, "CreateReference", JSVM_AUTO_LENGTH, &value);
    // 将键值对添加到对象中
    OH_JSVM_SetNamedProperty(env, obj, "name", value);
    // 创建对 JavaScript 对象的引用
    JSVM_Status status = OH_JSVM_CreateReference(env, obj, 1, &g_ref);
    if (status != napi_ok) {
        return nullptr;
    }
    JSVM_Finalize jSVM_Finalize = nullptr;
    OH_JSVM_AddFinalizer(env, obj, nullptr, jSVM_Finalize, nullptr, &g_ref);
    // 增加传入引用的引用计数并返回生成的引用计数
    uint32_t result;
    OH_JSVM_ReferenceRef(env, g_ref, &result);
    if (result != 2) {
        return nullptr;
    }
    return obj;
}

static JSVM_Value UseReference(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Ref g_ref;
    g_data_type = "object";
    JSVM_Value obj;
    OH_JSVM_CreateObject(env, &obj);
    JSVM_Value value;
    OH_JSVM_CreateStringUtf8(env, "UseReference", JSVM_AUTO_LENGTH, &value);
    // 将键值对添加到对象中
    OH_JSVM_SetNamedProperty(env, obj, "name", value);
    // 创建对 JavaScript 对象的引用
    JSVM_Status status = OH_JSVM_CreateReference(env, obj, 1, &g_ref);
    if (status != napi_ok) {
        return nullptr;
    }
    JSVM_Finalize jSVM_Finalize = nullptr;
    OH_JSVM_AddFinalizer(env, obj, nullptr, jSVM_Finalize, nullptr, &g_ref);
    // 增加传入引用的引用计数并返回生成的引用计数
    uint32_t result;
    OH_JSVM_ReferenceRef(env, g_ref, &result);
    if (result != 2) {
        return nullptr;
    }
    JSVM_Value object;
    // 通过调用OH_JSVM_GetReferenceValue获取引用的JavaScript对象
    status = OH_JSVM_GetReferenceValue(env, g_ref, &object);
    if (status != napi_ok) {
        return nullptr;
    }
    // 将获取到的对象返回
    return object;
}

static JSVM_Value DeleteReference(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Ref g_ref;
    g_data_type = "utf8";
    JSVM_Value obj;
    OH_JSVM_CreateObject(env, &obj);
    JSVM_Value value;
    OH_JSVM_CreateStringUtf8(env, "DeleteReference", JSVM_AUTO_LENGTH, &value);
    // 将键值对添加到对象中
    OH_JSVM_SetNamedProperty(env, obj, "name", value);
    // 创建对 JavaScript 对象的引用
    JSVM_Status status = OH_JSVM_CreateReference(env, obj, 1, &g_ref);
    if (status != napi_ok) {
        return nullptr;
    }
    JSVM_Finalize jSVM_Finalize = nullptr;
    OH_JSVM_AddFinalizer(env, obj, nullptr, jSVM_Finalize, nullptr, &g_ref);
    // 增加传入引用的引用计数并返回生成的引用计数
    uint32_t result;
    OH_JSVM_ReferenceRef(env, g_ref, &result);
    if (result != 2) {
        return nullptr;
    }
    // 减少传入引用的引用计数并返回生成的引用计数
    uint32_t num;
    OH_JSVM_ReferenceUnref(env, g_ref, &num);
    if (num != 1) {
        return nullptr;
    }
    // 通过调用OH_JSVM_DeleteReference删除对JavaScript对象的引用
    status = OH_JSVM_DeleteReference(env, g_ref);
    if (status != napi_ok) {
        return nullptr;
    }
    JSVM_Value returnResult;
    OH_JSVM_CreateStringUtf8(env, "OH_JSVM_DeleteReference success", JSVM_AUTO_LENGTH, &returnResult);
    return returnResult;
}


static JSVM_Value EscapableHandleScopeTest(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "object";
    // 创建一个可逃逸的句柄作用域
    JSVM_EscapableHandleScope scope;
    OH_JSVM_OpenEscapableHandleScope(env, &scope);
    // 在可逃逸的句柄作用域内创建一个 obj
    JSVM_Value obj;
    OH_JSVM_CreateObject(env, &obj);
    // 在对象中添加属性
    JSVM_Value value;
    OH_JSVM_CreateStringUtf8(env, "Test jsvm_escapable_handle_scope", JSVM_AUTO_LENGTH, &value);
    OH_JSVM_SetNamedProperty(env, obj, "name", value);
    // 调用 napi_escape_handle 将对象逃逸到作用域之外
    JSVM_Value escapedObj;
    OH_JSVM_EscapeHandle(env, scope, obj, &escapedObj);
    // 关闭可逃逸的句柄作用域，清理资源
    OH_JSVM_CloseEscapableHandleScope(env, scope);
    // 在作用域外继续使用 escapedObj 此时的 escapedObj 已逃逸，可以设置成功，在 ArkTs 侧可以取到东西
    OH_JSVM_CreateStringUtf8(env, "001", JSVM_AUTO_LENGTH, &value);
    OH_JSVM_SetNamedProperty(env, obj, "id", value);
    return escapedObj;
}


static JSVM_Value HandleScopeTest(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "object";
    JSVM_HandleScope scope;
    JSVM_Status status = OH_JSVM_OpenHandleScope(env, &scope);
    if (status != JSVM_OK) {
        return nullptr;
    }
    // 在句柄作用域内创建一个obj
    JSVM_Value obj;
    OH_JSVM_CreateObject(env, &obj);
    // 在对象中添加属性
    JSVM_Value value;
    OH_JSVM_CreateStringUtf8(env, "test handleScope", JSVM_AUTO_LENGTH, &value);
    OH_JSVM_SetNamedProperty(env, obj, "name", value);
    // 关闭句柄作用域，自动释放在该作用域内创建的对象句柄
    status = OH_JSVM_CloseHandleScope(env, scope);
    if (status != JSVM_OK) {
        return nullptr;
    }
    return obj;
}

static JSVM_Value HandleScope(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "object";
    // 通过调用OH_JSVM_OpenHandleScope来创建一个句柄作用域
    JSVM_HandleScope scope;
    JSVM_Status status = OH_JSVM_OpenHandleScope(env, &scope);
    if (status != JSVM_OK) {
        return nullptr;
    }
    // 在句柄作用域内创建一个obj
    JSVM_Value obj;
    OH_JSVM_CreateObject(env, &obj);
    // 在对象中添加属性
    JSVM_Value value;
    OH_JSVM_CreateStringUtf8(env, "handleScope", JSVM_AUTO_LENGTH, &value);
    OH_JSVM_SetNamedProperty(env, obj, "name", value);
    // 关闭句柄作用域，自动释放在该作用域内创建的对象句柄
    status = OH_JSVM_CloseHandleScope(env, scope);
    if (status != JSVM_OK) {
        return nullptr;
    }
    // 关闭句柄作用域之后继续在对象中添加属性，jsvm中原先设置的name失效
    OH_JSVM_CreateStringUtf8(env, "001", JSVM_AUTO_LENGTH, &value);
    OH_JSVM_SetNamedProperty(env, obj, "id", value);
    // 此处的obj的name失效
    return obj;
}

// ==========

static JSVM_Value GetPropertyNames(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    JSVM_Value result = nullptr;
    JSVM_Status status = OH_JSVM_GetPropertyNames(env, args[0], &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to get propertynames");
    }
    return result;
}

static JSVM_Value GetAllPropertyNames(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    // 传入一个参数
    JSVM_Status status;
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 获取给定对象的所有属性名称(自有属性)
    JSVM_Value result;
    status = OH_JSVM_GetAllPropertyNames(env, args[0], JSVM_KEY_OWN_ONLY, JSVM_KEY_WRITABLE,
        JSVM_KEY_NUMBERS_TO_STRINGS, &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to get allpropertynames");
    }
    return result;
}

static JSVM_Value GetEnumerableNames(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    JSVM_Status status;
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    JSVM_Value result;
    status = OH_JSVM_GetAllPropertyNames(env, args[0], JSVM_KEY_INCLUDE_PROTOTYPES, JSVM_KEY_ENUMERABLE,
        JSVM_KEY_NUMBERS_TO_STRINGS, &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to get allpropertynames");
    }
    return result;
}

static JSVM_Value GetOwnWritableNames(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    JSVM_Status status;
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    JSVM_Value result;
    status = OH_JSVM_GetAllPropertyNames(env, args[0], JSVM_KEY_OWN_ONLY, JSVM_KEY_WRITABLE,
        JSVM_KEY_NUMBERS_TO_STRINGS, &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to get allpropertynames");
    }
    return result;
}

static JSVM_Value GetEnumerableConfigurableNames(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    JSVM_Status status;
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    JSVM_Value result;
    status = OH_JSVM_GetAllPropertyNames(env, args[0], JSVM_KEY_INCLUDE_PROTOTYPES,
        static_cast<JSVM_KeyFilter>(JSVM_KEY_ENUMERABLE | JSVM_KEY_CONFIGURABLE), JSVM_KEY_NUMBERS_TO_STRINGS, &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to get allpropertynames");
    }
    return result;
}

static JSVM_Value GetOwnConfigurableNames(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    JSVM_Status status;
    size_t argc = 1;
    JSVM_Value args[1];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    JSVM_Value result;
    status = OH_JSVM_GetAllPropertyNames(env, args[0], JSVM_KEY_OWN_ONLY, JSVM_KEY_CONFIGURABLE,
        JSVM_KEY_NUMBERS_TO_STRINGS, &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "Failed to get allpropertynames");
    }
    return result;
}

static void AddReturnedStatus(JSVM_Env env, const char *key, JSVM_Value object, const char *expected_message,
    JSVM_Status expectedStatus, JSVM_Status actualStatus)
{
    char messageString[100] = "";
    JSVM_Value propValue;
    JSVM_CALL_RETURN_VOID(env, OH_JSVM_CreateStringUtf8(env,
        (actualStatus == expectedStatus ? expected_message : messageString), JSVM_AUTO_LENGTH, &propValue));
    JSVM_CALL_RETURN_VOID(env, OH_JSVM_SetNamedProperty(env, object, key, propValue));
}

static void AddLastStatus(JSVM_Env env, const char *key, JSVM_Value returnValue)
{
    JSVM_Value propValue;
    const JSVM_ExtendedErrorInfo *pLastError;
    JSVM_CALL_RETURN_VOID(env, OH_JSVM_GetLastErrorInfo(env, &pLastError));
    JSVM_CALL_RETURN_VOID(env, OH_JSVM_CreateStringUtf8(env,
        (pLastError->errorMessage == nullptr ? "JSVM_status::JSVM_OK" : pLastError->errorMessage), JSVM_AUTO_LENGTH,
        &propValue));
    JSVM_CALL_RETURN_VOID(env, OH_JSVM_SetNamedProperty(env, returnValue, key, propValue));
}

static JSVM_Value SetProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    size_t argc = 3;
    JSVM_Value args[3];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    JSVM_Status status = OH_JSVM_SetProperty(env, args[0], args[1], args[2]);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_SetProperty fail");
    }
    return args[0];
}

static JSVM_Value SetPropertyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_SetProperty(nullptr, object, 0, object));
    OH_JSVM_SetProperty(env, nullptr, 0, object);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_SetProperty(env, object, 0, nullptr);
    AddLastStatus(env, "nullptrValue", returnValue);
    return returnValue;
}

void GetResultType(JSVM_Env env, JSVM_Value result)
{
    JSVM_ValueType valueType;
    OH_JSVM_Typeof(env, result, &valueType);
    switch (valueType) {
        case JSVM_NUMBER: {
            g_data_type = "int";
            break;
        }
        case JSVM_STRING: {
            g_data_type = "utf8";
            break;
        }
        case JSVM_OBJECT: {
            g_data_type = "objectstr";
            break;
        }
        case JSVM_BIGINT: {
            g_data_type = "BigintUint64";
            break;
        }
    }
}

static JSVM_Value GetProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    // 接收两个js传来的参数
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 传入的第一个参数为要检测的object，第二个对象为要检测的属性，通过调用OH_JSVM_GetProperty接口获取对应的值
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_GetProperty(env, args[0], args[1], &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_GetProperty fail");
    }
    GetResultType(env, result);
    return result;
}

static JSVM_Value GetPropertyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    JSVM_Value key;
    OH_JSVM_CreateInt32(env, 0, &key);
    JSVM_Value result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_GetProperty(nullptr, object, key, &result));
    OH_JSVM_GetProperty(env, nullptr, key, &result);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_GetProperty(env, object, key, nullptr);
    AddLastStatus(env, "nullptrResult", returnValue);
    return returnValue;
}

static JSVM_Value HasProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 从js侧传入两个参数：第一个参数为要检验的对象，第二个参数为要检测是否存在对象的属性
    JSVM_Status status;
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 将参数传入OH_JSVM_HasProperty方法中，若接口调用成功则将结果转化为JSVM_Value类型抛出，否则抛出错误
    bool result;
    status = OH_JSVM_HasProperty(env, args[0], args[1], &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_HasProperty fail");
    }
    // 若传入属性存在传入对象中，则输出true将结果转化为JSVM_Value类型抛出
    JSVM_Value returnReslut;
    OH_JSVM_GetBoolean(env, result, &returnReslut);
    return returnReslut;
}

static JSVM_Value HasPropertyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    JSVM_Value key;
    OH_JSVM_CreateInt32(env, 0, &key);
    bool result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_HasProperty(nullptr, object, key, &result));
    OH_JSVM_HasProperty(env, nullptr, key, &result);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_HasProperty(env, object, nullptr, &result);
    AddLastStatus(env, "nullprtKey", returnValue);
    OH_JSVM_HasProperty(env, object, key, nullptr);
    AddLastStatus(env, "nullptrResult", returnValue);
    return returnValue;
}

// 从传入的Object对象中删除指定属性，返回是否删除成功的bool结果值
static JSVM_Value DeleteProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    JSVM_ValueType valueType;
    OH_JSVM_Typeof(env, args[0], &valueType);
    if (valueType != JSVM_OBJECT) {
        OH_JSVM_ThrowError(env, nullptr, "Expects an object as argument.");
    }
    // 删除指定属性，结果存储在result中
    bool result = false;
    JSVM_Status status = OH_JSVM_DeleteProperty(env, args[0], args[1], &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_DeleteProperty failed");
    }
    // 将bool结果转换为JSVM_value并返回
    JSVM_Value ret;
    OH_JSVM_GetBoolean(env, result, &ret);
    return ret;
}

static JSVM_Value DeletePropertyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    JSVM_Value key;
    OH_JSVM_CreateInt32(env, 0, &key);
    bool result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_DeleteProperty(nullptr, object, key, &result));
    OH_JSVM_DeleteProperty(env, nullptr, key, &result);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_DeleteProperty(env, object, nullptr, &result);
    AddLastStatus(env, "nullprtKey", returnValue);
    return returnValue;
}

static JSVM_Value HasOwnProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 获取函数调用信息和参数
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 检查第一个参数是否为对象
    JSVM_ValueType valueType1;
    OH_JSVM_Typeof(env, args[0], &valueType1);
    if (valueType1 != JSVM_OBJECT) {
        OH_JSVM_ThrowError(env, nullptr, "First argument must be an object.");
    }
    // 检查第二个参数是否为string
    JSVM_ValueType valuetype2;
    OH_JSVM_Typeof(env, args[1], &valuetype2);
    if (valuetype2 != JSVM_STRING && valuetype2 != JSVM_SYMBOL) {
        g_data_type = "utf8";
        JSVM_Value result;
        OH_JSVM_CreateStringUtf8(env, "name expected status.", JSVM_AUTO_LENGTH, &result);
        return result;
    }
    // 检查对象是否具有指定属性，结果存储在hasProperty中
    bool hasProperty;
    JSVM_Status status = OH_JSVM_HasOwnProperty(env, args[0], args[1], &hasProperty);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM  OH_JSVM_HasOwnProperty failed");
    }
    // 将bool结果转换为JSVM_Value并返回
    JSVM_Value result;
    OH_JSVM_GetBoolean(env, hasProperty, &result);
    return result;
}

static JSVM_Value HasOwnPropertyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    JSVM_Value key;
    OH_JSVM_CreateInt32(env, 0, &key);
    bool result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_HasOwnProperty(nullptr, object, key, &result));
    OH_JSVM_HasOwnProperty(env, nullptr, key, &result);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_HasOwnProperty(env, object, nullptr, &result);
    AddLastStatus(env, "nullprtKey", returnValue);
    OH_JSVM_HasOwnProperty(env, object, key, nullptr);
    AddLastStatus(env, "nullptrResult", returnValue);
    return returnValue;
}

static JSVM_Value SetNamedPropertyCreateObject(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    // 获取函数调用信息和参数
    size_t argc = 1;
    JSVM_Value str;
    char strKey[32] = "";
    OH_JSVM_GetCbInfo(env, info, &argc, &str, nullptr, nullptr);
    // 获取传入参数字符串并存储在strKey中
    size_t keyLength;
    OH_JSVM_GetValueStringUtf8(env, str, strKey, 32, &keyLength);
    // 创建一个新对象
    JSVM_Value newObj;
    OH_JSVM_CreateObject(env, &newObj);
    // 设置整数值1234为属性值
    int32_t value = 1234;
    JSVM_Value numValue;
    OH_JSVM_CreateInt32(env, value, &numValue);
    // 将整数值与指定属性名关联
    JSVM_Status status = OH_JSVM_SetNamedProperty(env, newObj, strKey, numValue);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_SetNamedProperty failed");
    }
    // 返回新创建并设置命名属性的对象
    return newObj;
}

static JSVM_Value SetNamedProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    size_t argc = 3;
    JSVM_Value args[3];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    JSVM_ValueType valueType;
    OH_JSVM_Typeof(env, args[0], &valueType);
    if (valueType != JSVM_OBJECT) {
        OH_JSVM_ThrowError(env, nullptr, "First argument must be an object.");
    }

    char strKey[32] = "";
    // 获取传入参数字符串并存储在strKey中
    OH_JSVM_GetValueStringUtf8(env, args[1], strKey, 32, nullptr);

    JSVM_Status status = OH_JSVM_SetNamedProperty(env, args[0], strKey, args[2]);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_SetNamedProperty failed");
    }
    return args[0];
}

static JSVM_Value SetNamedPropertyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    char key[32] = "";
    JSVM_Value result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_SetNamedProperty(nullptr, object, key, result));
    OH_JSVM_SetNamedProperty(env, nullptr, key, result);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_SetNamedProperty(env, object, nullptr, result);
    AddLastStatus(env, "nullprtKey", returnValue);
    OH_JSVM_SetNamedProperty(env, object, key, nullptr);
    AddLastStatus(env, "nullptrResult", returnValue);
    return returnValue;
}

static JSVM_Value GetNamedProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    // 获取函数调用信息和参数
    size_t argc = 2;
    JSVM_Value args[2];
    char strKey[32] = "";
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 获取要获取的属性名
    size_t keyLength;
    OH_JSVM_GetValueStringUtf8(env, args[1], strKey, 32, &keyLength);
    // 获取指定属性的值并存储在result中
    JSVM_Value result;
    JSVM_Status status = OH_JSVM_GetNamedProperty(env, args[0], strKey, &result);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_GetNamedProperty failed");
    }
    GetResultType(env, result);
    // 返回result
    return result;
}

static JSVM_Value GetNamedPropertyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    char key[32] = "";
    JSVM_Value result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_GetNamedProperty(nullptr, object, key, &result));
    OH_JSVM_GetNamedProperty(env, nullptr, key, &result);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_GetNamedProperty(env, object, nullptr, &result);
    AddLastStatus(env, "nullprtKey", returnValue);
    OH_JSVM_GetNamedProperty(env, object, key, nullptr);
    AddLastStatus(env, "nullptrResult", returnValue);
    return returnValue;
}

static JSVM_Value HasNamedProperty(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 获取函数调用信息和参数
    size_t argc = 2;
    JSVM_Value args[2];
    char strKey[32] = "";
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 获取要检查的属性名
    size_t keyLength;
    OH_JSVM_GetValueStringUtf8(env, args[1], strKey, 32, &keyLength);
    // 检查对象是否具有指定命名的属性，并将结果存储在hasProperty中
    bool hasProperty = false;
    JSVM_Status status = OH_JSVM_HasNamedProperty(env, args[0], strKey, &hasProperty);
    if (status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_HasNamedProperty failed");
    }
    // 将bool结果转换为JSVM_Value并返回
    JSVM_Value result;
    OH_JSVM_GetBoolean(env, hasProperty, &result);
    return result;
}

static JSVM_Value HasNamedPropertyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    char key[32] = "";
    bool result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_HasNamedProperty(nullptr, object, key, &result));
    OH_JSVM_HasNamedProperty(env, nullptr, key, &result);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_HasNamedProperty(env, object, nullptr, &result);
    AddLastStatus(env, "nullprtKey", returnValue);
    OH_JSVM_HasNamedProperty(env, object, key, nullptr);
    AddLastStatus(env, "nullptrResult", returnValue);
    return returnValue;
}

static JSVM_Value SetElementWithLength(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    // 获取js侧传入的参数,表示数组长度
    size_t argc = 1;
    JSVM_Value args;
    OH_JSVM_GetCbInfo(env, info, &argc, &args, nullptr, nullptr);
    // 获取要设置的数组长度
    int32_t arrLength = 0;
    OH_JSVM_GetValueInt32(env, args, &arrLength);
    JSVM_Value result;
    OH_JSVM_CreateArrayWithLength(env, arrLength, &result);
    // 填充数组元素
    for (int32_t i = 0; i < arrLength; i++) {
        JSVM_Value value;
        OH_JSVM_CreateInt32(env, i + 2, &value);
        OH_JSVM_SetElement(env, result, i, value);
    }
    return result;
}

static JSVM_Value SetElement(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    size_t argc = 3;
    JSVM_Value args[3];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    int32_t index;
    OH_JSVM_GetValueInt32(env, args[1], &index);
    OH_JSVM_SetElement(env, args[0], index, args[2]);
    return args[0];
}

static JSVM_Value SetElementFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    JSVM_Value value;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_SetElement(nullptr, object, 0, value));
    OH_JSVM_SetElement(env, nullptr, 0, value);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_SetElement(env, object, 0, nullptr);
    AddLastStatus(env, "nullprtValue", returnValue);
    return returnValue;
}

static JSVM_Value GetElement(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 获取js侧传入的两个参数
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 获取请求元素的索引值
    uint32_t index;
    OH_JSVM_GetValueUint32(env, args[1], &index);
    // 获取请求索引位置的元素值并存储在result中
    JSVM_Value result;
    OH_JSVM_GetElement(env, args[0], index, &result);
    GetResultType(env, result);
    return result;
}

static JSVM_Value GetElementFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    JSVM_Value value;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_GetElement(nullptr, object, 0, &value));
    OH_JSVM_GetElement(env, nullptr, 0, &value);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_GetElement(env, object, 0, nullptr);
    AddLastStatus(env, "nullprtValue", returnValue);
    return returnValue;
}

static JSVM_Value HasElement(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 获取js侧传入的两个参数
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 获取要判断的元素的索引
    uint32_t index;
    OH_JSVM_GetValueUint32(env, args[1], &index);
    // 判断指定索引位置的元素是否存在
    bool hasElement = true;
    OH_JSVM_HasElement(env, args[0], index, &hasElement);
    // 将bool结果转换为JSVM_Value并返回
    JSVM_Value result;
    OH_JSVM_GetBoolean(env, hasElement, &result);
    return result;
}

static JSVM_Value HasElementFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    bool result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_HasElement(nullptr, object, 0, &result));
    OH_JSVM_HasElement(env, nullptr, 0, &result);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_HasElement(env, object, 0, nullptr);
    AddLastStatus(env, "nullprtresult", returnValue);
    return returnValue;
}

static JSVM_Value DeleteElement(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 获取js侧传入的两个参数
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 获取要删除的元素的索引
    uint32_t index;
    OH_JSVM_GetValueUint32(env, args[1], &index);
    // 尝试删除请求索引位置的元素
    bool deleted = true;
    OH_JSVM_DeleteElement(env, args[0], index, &deleted);
    // 将bool结果转换为JSVM_Value并返回
    JSVM_Value result;
    OH_JSVM_GetBoolean(env, deleted, &result);
    return result;
}

static JSVM_Value DeleteElementAndCheck(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "array";
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    uint32_t index;
    OH_JSVM_GetValueUint32(env, args[1], &index);
    OH_JSVM_DeleteElement(env, args[0], index, nullptr);
    return args[0];
}

static JSVM_Value DeleteElementFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    bool result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_DeleteElement(nullptr, object, 0, &result));
    OH_JSVM_DeleteElement(env, nullptr, 0, &result);
    AddLastStatus(env, "nullprtObject", returnValue);
    return returnValue;
}

static JSVM_Value DefineMethodPropertiesExample(JSVM_Env env, JSVM_CallbackInfo info)
{
    int32_t propValue = 26;
    JSVM_Value returnValue;
    OH_JSVM_CreateInt32(env, propValue, &returnValue);
    return returnValue;
}
static JSVM_Value DefineMethodProperties(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    // 接受一个JavaScript侧传入的空object
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    JSVM_CallbackStruct param[] = {
        {.data = nullptr, .callback = DefineMethodPropertiesExample},
    };
    // 在obj对象上定义了一个函数defineMethodPropertiesExample，在函数defineMethodPropertiesExample中定义了一个变量并返回，
    // 在调用obj的这个对象时可以调用这个函数
    JSVM_PropertyDescriptor descriptor[] = {
        {"defineMethodPropertiesExample", nullptr, &param[0], nullptr, nullptr, nullptr, JSVM_DEFAULT}
    };
    OH_JSVM_DefineProperties(env, *argv, sizeof(descriptor) / sizeof(descriptor[0]), descriptor);
    // 运行obj.defineMethodPropertiesExample()并将结果返回给JavaScript
    static std::string srcMethod = R"JS(
        obj.defineMethodPropertiesExample();
    )JS";
    JSVM_Value sourceCodeValue = nullptr;
    OH_JSVM_CreateStringUtf8(env, srcMethod.c_str(), srcMethod.size(), &sourceCodeValue);
    JSVM_Script script;
    // 编译JavaScript代码字符串并返回编译后的脚本
    OH_JSVM_CompileScript(env, sourceCodeValue, nullptr, 0, true, nullptr, &script);
    // 执行JavaScript代码字符串
    JSVM_Value jsVmResult;
    OH_JSVM_RunScript(env, script, &jsVmResult);
    return jsVmResult;
}

static JSVM_Value DefineStringProperties(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    // 接受一个JavaScript侧传入的空object
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    // 创建一个string类型的属性值
    JSVM_Value stringValue;
    OH_JSVM_CreateStringUtf8(env, "Hello!", JSVM_AUTO_LENGTH, &stringValue);
    JSVM_PropertyDescriptor descriptor[] = {
        {"defineStringPropertiesExample", nullptr, nullptr, nullptr, nullptr, stringValue, JSVM_DEFAULT}
    };
    OH_JSVM_DefineProperties(env, *argv, sizeof(descriptor) / sizeof(descriptor[0]), descriptor);
    // 运行obj.defineStringPropertiesExample()并将结果返回给JavaScript
    static std::string srcMethod = R"JS(
        obj.defineStringPropertiesExample;
    )JS";
    JSVM_Value sourceCodeValue = nullptr;
    OH_JSVM_CreateStringUtf8(env, srcMethod.c_str(), srcMethod.size(), &sourceCodeValue);
    JSVM_Script script;
    // 编译JavaScript代码字符串并返回编译后的脚本
    OH_JSVM_CompileScript(env, sourceCodeValue, nullptr, 0, true, nullptr, &script);
    // 执行JavaScript代码字符串
    JSVM_Value jsVmResult;
    OH_JSVM_RunScript(env, script, &jsVmResult);
    return jsVmResult;
}

// Getter回调函数
static JSVM_Value GetterCallback(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Value result;
    const char *str = "Hello world!";
    size_t length = strlen(str);
    // 创建属性的值
    OH_JSVM_CreateStringUtf8(env, str, length, &result);
    return result;
}

static JSVM_Value DefineGetterProperties(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    // 接受一个JavaScript侧传入的空object
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    JSVM_CallbackStruct param[] = {
        {.data = nullptr, .callback = GetterCallback},
    };
    // 定义带有getter的属性
    JSVM_PropertyDescriptor descriptor[] = {
        {"getterCallback", nullptr, nullptr, &param[0], nullptr, nullptr, JSVM_DEFAULT}
    };
    OH_JSVM_DefineProperties(env, *argv, 1, descriptor);
    // 调用obj的getterCallback()并将结果字符串返回给JavaScript
    static std::string srcMethod = R"JS(
        obj.getterCallback;
    )JS";
    JSVM_Value sourceCodeValue = nullptr;
    OH_JSVM_CreateStringUtf8(env, srcMethod.c_str(), srcMethod.size(), &sourceCodeValue);
    JSVM_Script script;
    // 编译JavaScript代码字符串并返回编译后的脚本
    OH_JSVM_CompileScript(env, sourceCodeValue, nullptr, 0, true, nullptr, &script);
    // 执行JavaScript代码字符串
    JSVM_Value jsVmResult;
    OH_JSVM_RunScript(env, script, &jsVmResult);
    return jsVmResult;
}

static JSVM_Value DefinePropertiesFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    JSVM_Value object;
    OH_JSVM_CreateObject(env, &returnValue);
    OH_JSVM_CreateObject(env, &object);
    JSVM_CallbackStruct param[] = {
        {.data = nullptr, .callback = DefinePropertiesFailed},
    };
    // 定义带有getter的属性
    JSVM_PropertyDescriptor desc[] = {{"prop", nullptr, &param[0], nullptr, nullptr, nullptr, JSVM_DEFAULT}};
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_DefineProperties(nullptr, object, 1, desc));
    OH_JSVM_DefineProperties(env, nullptr, 1, desc);
    AddLastStatus(env, "nullprtObject", returnValue);
    OH_JSVM_DefineProperties(env, object, 1, nullptr);
    AddLastStatus(env, "nullptrDescriptorList", returnValue);
    desc->utf8name = nullptr;
    OH_JSVM_DefineProperties(env, object, 1, nullptr);
    AddLastStatus(env, "nullptrUtf8name", returnValue);
    return returnValue;
}

static JSVM_Value ObjectFreeze(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    // 接受一个JavaScript侧传入的object
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    // 调用接口OH_JSVM_ObjectFreeze将传入的object冻结
    JSVM_Status status = OH_JSVM_ObjectFreeze(env, argv[0]);
    if (status == JSVM_OK) {
    }
    // 测试冻结后的对象中属性能否修改、删除或添加
    JSVM_Value value;
    OH_JSVM_CreateInt32(env, 111111, &value);
    OH_JSVM_SetNamedProperty(env, argv[0], "data", value);
    OH_JSVM_SetNamedProperty(env, argv[0], "newKey", value);
    JSVM_Value key;
    OH_JSVM_CreateStringUtf8(env, "message", JSVM_AUTO_LENGTH, &key);
    OH_JSVM_DeleteProperty(env, argv[0], key, nullptr);
    // 将冻结后修改过的属性返回js侧
    return argv[0];
}

static JSVM_Value ObjectSeal(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    // 接受一个JavaScript侧传入的object
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    // 调用接口OH_JSVM_ObjectSeal将传入的object封闭，使其无法添加新的属性
    JSVM_Status status = OH_JSVM_ObjectSeal(env, argv[0]);
    if (status == JSVM_OK) {
    }
    // 测试封闭后的对象中属性能否修改、删除、新增
    // 封闭后对象修改
    JSVM_Value changeValue;
    OH_JSVM_CreateInt32(env, 12, &changeValue);
    OH_JSVM_SetNamedProperty(env, argv[0], "data", changeValue);
    // 封闭后对象删除
    JSVM_Value deleteProperty;
    OH_JSVM_CreateStringUtf8(env, "message", JSVM_AUTO_LENGTH, &deleteProperty);
    OH_JSVM_DeleteProperty(env, argv[0], deleteProperty, nullptr);
    // 封闭后对象新增
    JSVM_Value addValue;
    OH_JSVM_CreateStringUtf8(env, "addValue", JSVM_AUTO_LENGTH, &addValue);
    OH_JSVM_SetNamedProperty(env, argv[0], "newProperty", addValue);
    // 将封闭后改动过的对象返回JavaScript侧
    return argv[0];
}

static JSVM_Value GetVersion(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    uint32_t jsVersion;
    // 调用接口，获取当前JSVM运行时支持的最高JSVM API版本
    OH_JSVM_GetVersion(env, &jsVersion);
    JSVM_Value result;
    OH_JSVM_CreateUint32(env, jsVersion, &result);
    return result;
}

static JSVM_Value GetVersionFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    OH_JSVM_CreateObject(env, &returnValue);
    uint32_t jsVersion;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_GetVersion(nullptr, &jsVersion));
    OH_JSVM_GetVersion(env, nullptr);
    AddLastStatus(env, "nullptrResult", returnValue);
    return returnValue;
}

void PrintVmInfo()
{
    JSVM_VMInfo vmInfo;
    OH_JSVM_GetVMInfo(&vmInfo);
}
static JSVM_Value GetVMInfo(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    // 调用接口，获取虚拟机的信息
    JSVM_VMInfo result;
    OH_JSVM_GetVMInfo(&result);
    // 取出“此虚拟机支持的最高API版本”信息带出去打印
    JSVM_Value version;
    OH_JSVM_CreateUint32(env, result.apiVersion, &version);
    // 输出VM日志信息
    PrintVmInfo();
    return version;
}

static JSVM_Value JsonStringify(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    JSVM_Value result;
    OH_JSVM_JsonStringify(env, *argv, &result);
    return result;
}

static JSVM_Value JsonStringifyFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    OH_JSVM_CreateObject(env, &returnValue);
    std::string str = "";
    JSVM_Value jsonObject;
    JSVM_Value ret;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_JsonStringify(nullptr, jsonObject, &ret));
    OH_JSVM_JsonStringify(env, nullptr, &ret);
    AddLastStatus(env, "nullptrJsonObject", returnValue);
    return returnValue;
}

// 解析JSON字符串中的数字
static JSVM_Value JsonParseNumber(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "double";
    // 设置要解析的JSON数字字符串
    std::string strNumber = "10.555";
    JSVM_Value jsonString;
    OH_JSVM_CreateStringUtf8(env, strNumber.c_str(), strNumber.size(), &jsonString);
    // 调用OH_JSVM_JsonParse函数解析JSON字符串，并将结果存储在result中
    JSVM_Value result;
    OH_JSVM_JsonParse(env, jsonString, &result);
    return result;
}
// 解析JSON字符串中的对象
static JSVM_Value JsonParseObject(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    // 设置要解析的JSON对象字符串
    std::string strObject = "{\"first\": \"one\", \"second\": \"two\"}";
    JSVM_Value strJson;
    OH_JSVM_CreateStringUtf8(env, strObject.c_str(), strObject.size(), &strJson);
    // 调用OH_JSVM_JsonParse函数解析JSON字符串，并将结果存储在ret中
    JSVM_Value ret;
    OH_JSVM_JsonParse(env, strJson, &ret);
    return ret;
}

static JSVM_Value JsonParse(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    JSVM_Value result;
    OH_JSVM_JsonParse(env, *argv, &result);
    GetResultType(env, result);
    return result;
}

static JSVM_Value JsonParseFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    JSVM_Value returnValue;
    OH_JSVM_CreateObject(env, &returnValue);
    std::string str = "";
    JSVM_Value strJson;
    OH_JSVM_CreateStringUtf8(env, str.c_str(), str.size(), &strJson);
    JSVM_Value ret;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_JsonParse(nullptr, strJson, &ret));
    OH_JSVM_JsonParse(env, nullptr, &ret);
    AddLastStatus(env, "nullptrJsonString", returnValue);
    return returnValue;
}

static JSVM_Value CallFunction(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value args[1];
    // 获取JavaScript侧入参
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 获取全局对象
    JSVM_Value global;
    OH_JSVM_GetGlobal(env, &global);
    // 调用JavaScript方法
    JSVM_Value result;
    OH_JSVM_CallFunction(env, global, args[0], 0, nullptr, &result);
    GetResultType(env, result);
    return result;
}

static JSVM_Value CallFunctionWithArg(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    size_t argc = 1;
    JSVM_Value args[1];
    // 获取JavaScript侧入参
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 获取全局对象
    JSVM_Value global;
    OH_JSVM_GetGlobal(env, &global);
    JSVM_Value arg[2];
    OH_JSVM_CreateStringUtf8(env, "Hello", JSVM_AUTO_LENGTH, &arg[0]);
    OH_JSVM_CreateStringUtf8(env, " World!", JSVM_AUTO_LENGTH, &arg[1]);
    // 调用JavaScript方法
    JSVM_Value result;
    OH_JSVM_CallFunction(env, global, args[0], 2, arg, &result);
    return result;
}

static JSVM_Value CallFunctionWithObject(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    size_t argc = 1;
    JSVM_Value args[1];
    // 获取JavaScript侧入参
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    JSVM_Value func;
    OH_JSVM_GetNamedProperty(env, args[0], "myMethod", &func);
    // 获取全局对象
    JSVM_Value global;
    OH_JSVM_GetGlobal(env, &global);
    JSVM_Value arg[2];
    OH_JSVM_CreateInt32(env, 12, &arg[0]);
    OH_JSVM_CreateInt32(env, 12, &arg[1]);
    // 调用JavaScript方法
    JSVM_Value result;
    OH_JSVM_CallFunction(env, global, func, 2, arg, &result);
    return result;
}

static JSVM_Value CallFunctionFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    size_t argc = 1;
    JSVM_Value args[1];
    // 获取JavaScript侧入参
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    JSVM_Value returnValue;
    OH_JSVM_CreateObject(env, &returnValue);
    JSVM_Value global;
    OH_JSVM_GetGlobal(env, &global);
    JSVM_Value result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_CallFunction(nullptr, global, args[0], 0, nullptr, &result));
    OH_JSVM_CallFunction(env, nullptr, args[0], 0, nullptr, &result);
    AddLastStatus(env, "nullprtGlobal", returnValue);
    OH_JSVM_CallFunction(env, global, args[0], 1, nullptr, &result);
    AddLastStatus(env, "nullprtArgv", returnValue);
    OH_JSVM_CallFunction(env, global, nullptr, 0, nullptr, &result);
    AddLastStatus(env, "nullptrFunc", returnValue);
    return returnValue;
}

// CalculateArea自定义函数
static JSVM_Value CalculateArea(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 2;
    JSVM_Value args[2];
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);

    double width;
    OH_JSVM_GetValueDouble(env, args[0], &width);
    double height;
    OH_JSVM_GetValueDouble(env, args[1], &height);
    JSVM_Value area;
    OH_JSVM_CreateDouble(env, width * height, &area);
    return area;
}
static JSVM_Value CreateFunction(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "double";
    // 创建名为param的回调结构体传入OH_JSVM_CreateFunction
    JSVM_CallbackStruct param;
    param.data = nullptr;
    param.callback = CalculateArea;
    JSVM_Value funcValue = nullptr;
    // 创建名为calculateArea的JavaScript函数
    JSVM_Status status = OH_JSVM_CreateFunction(env, "calculateArea", JSVM_AUTO_LENGTH, &param, &funcValue);
    if (funcValue == nullptr || status != JSVM_OK) {
        OH_JSVM_ThrowError(env, nullptr, "JSVM OH_JSVM_CreateFunction failed");
    }
    // 创建参数
    JSVM_Value args[2];
    OH_JSVM_CreateDouble(env, 1.4, &args[0]);
    OH_JSVM_CreateDouble(env, 5.0, &args[1]);
    JSVM_Value global;
    OH_JSVM_GetGlobal(env, &global);
    // 调用calculateArea函数并传入参数
    JSVM_Value ret;
    OH_JSVM_CallFunction(env, global, funcValue, 2, args, &ret);
    return ret;
}

static JSVM_Value CreateFunctionFailed(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "objectstr";
    size_t argc = 1;
    JSVM_Value args[1];
    // 获取JavaScript侧入参
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    JSVM_Value returnValue;
    OH_JSVM_CreateObject(env, &returnValue);
    JSVM_CallbackStruct param;
    param.data = nullptr;
    param.callback = CalculateArea;
    JSVM_Value result;
    AddReturnedStatus(env, "nullptrEnv", returnValue, "Invalid argument", JSVM_Status::JSVM_INVALID_ARG,
        OH_JSVM_CreateFunction(nullptr, "myFunc", JSVM_AUTO_LENGTH, &param, &result));
    OH_JSVM_CreateFunction(env, "myFunc", JSVM_AUTO_LENGTH, nullptr, &result);
    AddLastStatus(env, "nullprtCD", returnValue);
    OH_JSVM_CreateFunction(env, "myFunc", JSVM_AUTO_LENGTH, &param, nullptr);
    AddLastStatus(env, "nullptrResult", returnValue);
    return returnValue;
}

// ===================================================================================================
#include <fstream>

static JSVM_Value RunVMScript(JSVM_Env env, std::string &src)
{
    // 打开handleScope作用域
    JSVM_HandleScope handleScope;
    OH_JSVM_OpenHandleScope(env, &handleScope);
    JSVM_Value jsStr;
    OH_JSVM_CreateStringUtf8(env, src.c_str(), src.size(), &jsStr);
    // 编译JavaScript代码
    JSVM_Script script;
    OH_JSVM_CompileScript(env, jsStr, nullptr, 0, true, nullptr, &script);
    // 执行JavaScript代码
    JSVM_Value result;
    OH_JSVM_RunScript(env, script, &result);
    // 关闭handleScope作用域
    OH_JSVM_CloseHandleScope(env, handleScope);
    return result;
}

static JSVM_Value PrintHello(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Value output;
    OH_JSVM_CreateStringUtf8(env, "Hello world!", JSVM_AUTO_LENGTH, &output);
    return output;
}

static JSVM_CallbackStruct helloCb = { PrintHello, nullptr };

static void CreateVMSnapshot()
{
    // 创建JavaScript虚拟机实例,打开虚拟机作用域
    JSVM_VM vm;
    JSVM_CreateVMOptions vmOptions;
    memset(&vmOptions, 0, sizeof(vmOptions));
    // isForSnapshotting设置该虚拟机是否用于创建快照
    vmOptions.isForSnapshotting = true;
    OH_JSVM_CreateVM(&vmOptions, &vm);
    JSVM_VMScope vmScope;
    OH_JSVM_OpenVMScope(vm, &vmScope);
    // 创建JavaScript环境,打开环境作用域
    JSVM_Env env;
    // 将native函数注册成JavaScript可调用的方法
    JSVM_PropertyDescriptor descriptor[] = {
        {"printHello", nullptr, &helloCb, nullptr, nullptr, nullptr, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, 1, descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    // 使用OH_JSVM_CreateSnapshot创建虚拟机的启动快照
    const char *blobData = nullptr;
    size_t blobSize = 0;
    JSVM_Env envs[1] = {env};
    JSVM_Status status = OH_JSVM_CreateSnapshot(vm, 1, envs, &blobData, &blobSize);
    if (status == JSVM_OK) {
    }
    // 将snapshot保存到文件中
    // 保存快照数据，/data/storage/el2/base/files/test_blob.bin为沙箱路径
    // 以包名为com.example.jsvm为例，实际文件会保存到/data/app/el2/100/base/com.example.jsvm/files/test_blob.bin
    std::ofstream file("/data/storage/el2/base/files/test_blob.bin",
        std::ios::out | std::ios::binary | std::ios::trunc);
    file.write(blobData, blobSize);
    file.close();
    // 关闭销毁环境和虚拟机
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vmScope);
    OH_JSVM_DestroyVM(vm);
}

static void RunVMSnapshot()
{
    // blobData的生命周期不能短于vm的生命周期
    // 从文件中读取snapshot
    std::vector<char> blobData;
    std::ifstream file("/data/storage/el2/base/files/test_blob.bin", std::ios::in | std::ios::binary | std::ios::ate);
    size_t blobSize = file.tellg();
    blobData.resize(blobSize);
    file.seekg(0, std::ios::beg);
    file.read(blobData.data(), blobSize);
    file.close();
    // 使用快照数据创建虚拟机实例
    JSVM_VM vm;
    JSVM_CreateVMOptions vmOptions;
    memset(&vmOptions, 0, sizeof(vmOptions));
    vmOptions.snapshotBlobData = blobData.data();
    vmOptions.snapshotBlobSize = blobSize;
    OH_JSVM_CreateVM(&vmOptions, &vm);
    JSVM_VMScope vmScope;
    OH_JSVM_OpenVMScope(vm, &vmScope);
    // 从快照中创建环境env
    JSVM_Env env;
    OH_JSVM_CreateEnvFromSnapshot(vm, 0, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);

    // 执行js脚本，快照记录的env中定义了printHello()
    std::string src = "printHello()";
    JSVM_Value result = RunVMScript(env, src);
    // 环境关闭前检查脚本运行结果
    if (result == nullptr) {
        OH_JSVM_ThrowError(env, nullptr, "Test JSVM RunVMSnapshot-RunVMScript result is nullptr");
    }
    char str[128];
    OH_JSVM_GetValueStringUtf8(env, result, str, 128, nullptr);
    // 关闭销毁环境和虚拟机
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vmScope);
    OH_JSVM_DestroyVM(vm);
    return;
}

static intptr_t externals[] = {
    (intptr_t)&helloCb,
    0,
};

static JSVM_Value CreateAndUseSnapshot(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    // 创建虚拟机快照并将快照保存到文件中
    CreateVMSnapshot();
    // snapshot可以记录下某个时间的js执行环境，可以跨进程通过snapshot快速还原出js执行上下文环境
    RunVMSnapshot();

    JSVM_Value result = nullptr;
    OH_JSVM_CreateInt32(env, 0, &result);
    return result;
}

static JSVM_Value CreateSnapshotFailed(JSVM_Env oldEnv, JSVM_CallbackInfo info)
{
    g_data_type = "utf8";
    JSVM_VM vm;
    JSVM_CreateVMOptions vmOptions;
    memset(&vmOptions, 0, sizeof(vmOptions));
    vmOptions.isForSnapshotting = false;
    OH_JSVM_CreateVM(&vmOptions, &vm);
    JSVM_Env env;
    JSVM_PropertyDescriptor descriptor[] = {
        {"printHello", nullptr, &helloCb, nullptr, nullptr, nullptr, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, 1, descriptor, &env);
    const char *blobData = nullptr;
    size_t blobSize = 0;
    JSVM_Env envs[1] = {env};
    JSVM_Status status = OH_JSVM_CreateSnapshot(vm, 1, envs, &blobData, &blobSize);
    JSVM_Value error;
    if (status != JSVM_OK) {
        OH_JSVM_CreateStringUtf8(oldEnv, "generic failure status.", JSVM_AUTO_LENGTH, &error);
        return error;
    }
    return nullptr;
}
// ======================================================================================================================

void PrintHeapStatistics(JSVM_HeapStatistics result) {}

static JSVM_Value GetHeapStatistics(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    // 获取当前虚拟机对象
    JSVM_VM testVm;
    OH_JSVM_GetVM(env, &testVm);
    // 获取虚拟机的堆栈统计信息
    JSVM_HeapStatistics result;
    OH_JSVM_GetHeapStatistics(testVm, &result);
    // 打印堆栈统计信息
    PrintHeapStatistics(result);
    // 返回堆栈统计信息中‘本机上下文数量’
    JSVM_Value nativeContextsCnt;
    OH_JSVM_CreateInt64(env, result.numberOfNativeContexts, &nativeContextsCnt);
    return nativeContextsCnt;
}

static JSVM_Value GetHeapStatisticsBak(JSVM_Env env, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);

    JSVM_VM testVm;
    OH_JSVM_GetVM(env, &testVm);
    JSVM_HeapStatistics result;
    OH_JSVM_GetHeapStatistics(testVm, &result);
    // 定义枚举类型与ArkTs侧枚举类型heapStatistics顺序含义一致
    enum heapStatistics {
        totalHeapSize,
        totalHeapSizeExecutable,
        totalPhysicalSize,
        totalAvailableSize,
        usedHeapSize,
        heapSizeLimit,
        mallocedMemory,
        externalMemory,
        peakMallocedMemory,
        numberOfNativeContexts,
        numberOfDetachedContexts,
        totalGlobalHandlesSize,
        usedGlobalHandlesSize
    };
    int32_t infoParam;
    OH_JSVM_GetValueInt32(env, *argv, &infoParam);
    JSVM_Value heapStatisticsInfo;
    switch (infoParam) {
        case totalHeapSize:
            OH_JSVM_CreateInt64(env, result.totalHeapSize, &heapStatisticsInfo);
            break;
        case totalHeapSizeExecutable:
            OH_JSVM_CreateInt64(env, result.totalHeapSizeExecutable, &heapStatisticsInfo);
            break;
        case totalPhysicalSize:
            OH_JSVM_CreateInt64(env, result.totalPhysicalSize, &heapStatisticsInfo);
            break;
        case totalAvailableSize:
            OH_JSVM_CreateInt64(env, result.totalAvailableSize, &heapStatisticsInfo);
            break;
        case usedHeapSize:
            OH_JSVM_CreateInt64(env, result.usedHeapSize, &heapStatisticsInfo);
            break;
        case heapSizeLimit:
            OH_JSVM_CreateInt64(env, result.heapSizeLimit, &heapStatisticsInfo);
            break;
        case mallocedMemory:
            OH_JSVM_CreateInt64(env, result.mallocedMemory, &heapStatisticsInfo);
            break;
        case externalMemory:
            OH_JSVM_CreateInt64(env, result.externalMemory, &heapStatisticsInfo);
            break;
        case peakMallocedMemory:
            OH_JSVM_CreateInt64(env, result.peakMallocedMemory, &heapStatisticsInfo);
            break;
        case numberOfNativeContexts:
            OH_JSVM_CreateInt64(env, result.numberOfNativeContexts, &heapStatisticsInfo);
            break;
        case numberOfDetachedContexts:
            OH_JSVM_CreateInt64(env, result.numberOfDetachedContexts, &heapStatisticsInfo);
            break;
        case totalGlobalHandlesSize:
            OH_JSVM_CreateInt64(env, result.totalGlobalHandlesSize, &heapStatisticsInfo);
            break;
        case usedGlobalHandlesSize:
            OH_JSVM_CreateInt64(env, result.usedGlobalHandlesSize, &heapStatisticsInfo);
            break;
    }
    return heapStatisticsInfo;
}

static JSVM_Value GetVM(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 获取当前虚拟机对象,后续可以进行与虚拟机相关的操作或分析
    JSVM_VM testVm;
    JSVM_Status status = OH_JSVM_GetVM(env, &testVm);
    if (status != JSVM_OK || testVm == nullptr) {
        OH_JSVM_ThrowError(env, nullptr, "Test JSVM OH_JSVM_GetVM failed");
    }
    JSVM_Value result;
    OH_JSVM_GetBoolean(env, true, &result);
    return result;
}

// ======================================================================================================================

static std::string scriptToDebug = R"JS(
function factorialRecursive(n) {
    if (n === 0 || n === 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

function calculateFactorial() {
    var number = 10;
    var result = factorialRecursive(number);
    return result;
}

calculateFactorial();
)JS";

static bool WriteDataToStream(const char *data, int size, void *streamData)
{
    std::ofstream &file = *reinterpret_cast<std::ofstream *>(streamData);
    if (data) {
        file.write(data, size);
    } else {
        file.close();
    }
    return true;
}

static void StartCpuProfiler(JSVM_VM vm, JSVM_CpuProfiler *cpuProfiler)
{
    std::ofstream startHeapFile("/data/storage/el2/base/files/heapsnapshot-start.heapsnapshot",
        std::ios::out | std::ios::binary | std::ios::trunc);
    OH_JSVM_TakeHeapSnapshot(vm, WriteDataToStream, &startHeapFile);
    OH_JSVM_StartCpuProfiler(vm, cpuProfiler);
}

static void StopCpuProfiler(JSVM_VM vm, JSVM_CpuProfiler cpuProfiler)
{
    std::ofstream cpFile("/data/storage/el2/base/files/cpu-profile.cpuprofile",
        std::ios::out | std::ios::binary | std::ios::trunc);
    OH_JSVM_StopCpuProfiler(vm, cpuProfiler, WriteDataToStream, &cpFile);
    std::ofstream stopHeapFile("/data/storage/el2/base/files/heapsnapshot-stop.heapsnapshot",
        std::ios::out | std::ios::binary | std::ios::trunc);
    OH_JSVM_TakeHeapSnapshot(vm, WriteDataToStream, &stopHeapFile);
}

static JSVM_Value DebugCodeUsingCpuProfiler(JSVM_Env oldEnv, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    JSVM_VM testVm;
    JSVM_CreateVMOptions vmOptions;
    memset(&vmOptions, 0, sizeof(vmOptions));
    OH_JSVM_CreateVM(&vmOptions, &testVm);
    JSVM_VMScope vmScope;
    OH_JSVM_OpenVMScope(testVm, &vmScope);
    JSVM_Env env;
    OH_JSVM_CreateEnv(testVm, 0, nullptr, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);

    JSVM_CpuProfiler cpuProfiler;
    StartCpuProfiler(testVm, &cpuProfiler);

    JSVM_HandleScope handleScope;
    OH_JSVM_OpenHandleScope(env, &handleScope);
    JSVM_Value strValue;
    OH_JSVM_CreateStringUtf8(env, (char *)scriptToDebug.c_str(), JSVM_AUTO_LENGTH, &strValue);
    JSVM_Script script;
    OH_JSVM_CompileScript(env, strValue, nullptr, 0, true, nullptr, &script);
    JSVM_Value result;
    OH_JSVM_RunScript(env, script, &result);
    int32_t ret;
    OH_JSVM_GetValueInt32(env, result, &ret);
    JSVM_ASSERT(env, ret == 3628800, "Wrong number of result");
    OH_JSVM_CloseHandleScope(env, handleScope);

    StopCpuProfiler(testVm, cpuProfiler);

    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_CloseVMScope(testVm, vmScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_DestroyVM(testVm);

    JSVM_Value ret1;
    OH_JSVM_CreateInt32(oldEnv, 0, &ret1);
    return ret1;
}

static JSVM_Value TakeHeapSnapshot(JSVM_Env oldEnv, JSVM_CallbackInfo info)
{
    g_data_type = "int";
    JSVM_VM testVm;
    JSVM_CreateVMOptions vmOptions;
    memset(&vmOptions, 0, sizeof(vmOptions));
    OH_JSVM_CreateVM(&vmOptions, &testVm);
    JSVM_VMScope vmScope;
    OH_JSVM_OpenVMScope(testVm, &vmScope);

    std::ofstream file("/data/storage/el2/base/files/heapsnapshot-test.heapsnapshot",
        std::ios::out | std::ios::binary | std::ios::trunc);
    OH_JSVM_TakeHeapSnapshot(testVm, WriteDataToStream, &file);

    OH_JSVM_CloseVMScope(testVm, vmScope);
    OH_JSVM_DestroyVM(testVm);

    JSVM_Value result;
    OH_JSVM_CreateInt32(oldEnv, 0, &result);
    return result;
}

static JSVM_Value JsVmThrow(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value argv[1] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    JSVM_Value errorCode = nullptr;
    OH_JSVM_CreateStringUtf8(env, "-1", JSVM_AUTO_LENGTH, &errorCode);
    JSVM_Value errorMessage = nullptr;
    OH_JSVM_CreateStringUtf8(env, "HasError", JSVM_AUTO_LENGTH, &errorMessage);
    JSVM_Value error = nullptr;
    OH_JSVM_CreateError(env, errorCode, errorMessage, &error);
    OH_JSVM_Throw(env, error);
    return nullptr;
}

static JSVM_Value JsVmThrowFromJS(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    JSVM_Value jsError = argv[0];
    // 调用接口OH_JSVM_IsError判断入参是否为一个error对象
    bool result = false;
    OH_JSVM_IsError(env, jsError, &result);
    if (!result) {
        JSVM_Value errorCode;
        OH_JSVM_CreateStringUtf8(env, "-1", JSVM_AUTO_LENGTH, &errorCode);
        JSVM_Value errorMessage;
        OH_JSVM_CreateStringUtf8(env, "HasError", JSVM_AUTO_LENGTH, &errorMessage);
        OH_JSVM_CreateError(env, errorCode, errorMessage, &jsError);
    }
    OH_JSVM_Throw(env, jsError);
    return nullptr;
}

static JSVM_Value JsVmThrowError(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    if (argc == 0) {
        // 如果没有传递参数，直接抛出异常
        OH_JSVM_ThrowError(env, "-1", "has Error");
    } else if (argc == 1) {
        size_t length;
        OH_JSVM_GetValueStringUtf8(env, argv[0], nullptr, 0, &length);
        char *buffer = new char[length + 1];
        OH_JSVM_GetValueStringUtf8(env, argv[0], buffer, length + 1, nullptr);
        OH_JSVM_ThrowError(env, nullptr, buffer);
        delete[] buffer;
    }
    return nullptr;
}

static JSVM_Value JsVmThrowTypeError(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value argv[1];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    if (argc == 0) {
        // 如果没有传递参数，直接抛出异常
        OH_JSVM_ThrowTypeError(env, "-1", "throwing type error");
    } else if (argc == 1) {
        size_t length;
        OH_JSVM_GetValueStringUtf8(env, argv[0], nullptr, 0, &length);
        char *buffer = new char[length + 1];
        OH_JSVM_GetValueStringUtf8(env, argv[0], buffer, length + 1, nullptr);
        OH_JSVM_ThrowTypeError(env, nullptr, buffer);
        delete[] buffer;
    }
    return nullptr;
}

static JSVM_Value JsVmThrowRangeError(JSVM_Env env, JSVM_CallbackInfo info)
{
    // js侧传入两个参数
    size_t argc = 2;
    JSVM_Value argv[2];
    OH_JSVM_GetCbInfo(env, info, &argc, argv, nullptr, nullptr);
    // 如果传入参数个数不为2
    if (argc != 2) {
        // 这里抛出一个 RangeError
        OH_JSVM_ThrowRangeError(env, "OH_JSVM_ThrowRangeError", "Expected two numbers as arguments");
    }
    JSVM_Value result;
    OH_JSVM_GetBoolean(env, true, &result);
    return result;
}

static JSVM_Value JsVmIsError(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value args[1] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    // 调用接口OH_JSVM_IsError判断入参是否为一个error对象
    bool result = false;
    // 如果JSVM_Value为一个error对象，则设置result为true的布尔值，否则设置为false
    OH_JSVM_IsError(env, args[0], &result);
    // 取出result通过OH_JSVM_GetBoolean接口将取出的bool值转换为JSVM_Value类型的值返回出去
    JSVM_Value returnValue;
    OH_JSVM_GetBoolean(env, result, &returnValue);
    return returnValue;
}

static JSVM_Value JsVmCreateError(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 在JSVM环境中创建一个字符串，并将其存储在errorCode变量中
    JSVM_Value errorCode;

    OH_JSVM_CreateStringUtf8(env, "-1", JSVM_AUTO_LENGTH, &errorCode);
    // 在JSVM环境中创建一个字符串，并将其存储在errorMessage变量中
    JSVM_Value errorMessage;
    OH_JSVM_CreateStringUtf8(env, "HasError", JSVM_AUTO_LENGTH, &errorMessage);
    JSVM_Value result;
    OH_JSVM_CreateError(env, errorCode, errorMessage, &result);
    return result;
}

static JSVM_Value JsVmCreateTypeError(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 在JSVM环境中创建一个字符串，并将其存储在errorCode变量中
    JSVM_Value errorCode;
    OH_JSVM_CreateStringUtf8(env, "-1", JSVM_AUTO_LENGTH, &errorCode);
    // 在JSVM环境中创建一个字符串，并将其存储在errorMessage变量中
    JSVM_Value errorMessage;
    OH_JSVM_CreateStringUtf8(env, "HasError", JSVM_AUTO_LENGTH, &errorMessage);
    JSVM_Value result;
    OH_JSVM_CreateTypeError(env, errorCode, errorMessage, &result);
    return result;
}

static JSVM_Value JsVmCreateRangeError(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 在JSVM环境中创建一个字符串，并将其存储在errorCode变量中
    JSVM_Value errorCode;
    OH_JSVM_CreateStringUtf8(env, "-1", JSVM_AUTO_LENGTH, &errorCode);
    // 在JSVM环境中创建一个字符串，并将其存储在errorMessage变量中
    JSVM_Value errorMessage;
    OH_JSVM_CreateStringUtf8(env, "HasError", JSVM_AUTO_LENGTH, &errorMessage);
    JSVM_Value result;
    OH_JSVM_CreateRangeError(env, errorCode, errorMessage, &result);
    return result;
}

static JSVM_Value JsVmCreateSyntaxError(JSVM_Env env, JSVM_CallbackInfo info)
{
    // 在JSVM环境中创建一个字符串，并将其存储在errorCode变量中
    JSVM_Value errorCode;
    OH_JSVM_CreateStringUtf8(env, "-1", JSVM_AUTO_LENGTH, &errorCode);
    // 在JSVM环境中创建一个字符串，并将其存储在errorMessage变量中
    JSVM_Value errorMessage;
    OH_JSVM_CreateStringUtf8(env, "HasError", JSVM_AUTO_LENGTH, &errorMessage);
    JSVM_Value result;
    OH_JSVM_CreateSyntaxError(env, errorCode, errorMessage, &result);
    return result;
}

static JSVM_Value JsVmGetAndClearLastException(JSVM_Env env, JSVM_CallbackInfo info)
{
    OH_JSVM_ThrowError(env, "OH_JSVM_ThrowError errorCode", "OH_JSVM_ThrowError errorMessage");
    JSVM_Value result = nullptr;
    JSVM_Status status = OH_JSVM_GetAndClearLastException(env, &result);
    if (status != JSVM_OK) {
        return nullptr;
    }
    return result;
}

static JSVM_Value JsVmIsExceptionPending(JSVM_Env env, JSVM_CallbackInfo info)
{
    JSVM_Status status;
    bool isExceptionPending = false;
    OH_JSVM_ThrowError(env, "OH_JSVM_ThrowError errorCode", "OH_JSVM_ThrowError errorMessage");
    status = OH_JSVM_IsExceptionPending(env, &isExceptionPending);
    if (status != JSVM_OK) {
        return nullptr;
    }
    if (isExceptionPending) {
        JSVM_Value result = nullptr;
        status = OH_JSVM_GetAndClearLastException(env, &result);
        if (status != JSVM_OK) {
            return nullptr;
        }
        return result;
    }
}

static JSVM_Value JsVmGetLastErrorInfo(JSVM_Env env, JSVM_CallbackInfo info)
{
    size_t argc = 1;
    JSVM_Value args[1] = {nullptr};
    OH_JSVM_GetCbInfo(env, info, &argc, args, nullptr, nullptr);
    int32_t value = 0;
    JSVM_Status status = OH_JSVM_GetValueInt32(env, args[0], &value);
    JSVM_ASSERT(env, status != JSVM_Status::JSVM_OK, "FAILED to produce error condition");
    const JSVM_ExtendedErrorInfo *errorInfo;
    OH_JSVM_GetLastErrorInfo(env, &errorInfo);
    JSVM_Value result;
    OH_JSVM_CreateInt32(env, errorInfo->errorCode, &result);
    return result;
}

static napi_value testRunJsVm(napi_env nEnv, napi_callback_info nInfo)
{
    JSVM_InitOptions init_options;
    if (memset_s(&init_options, sizeof(init_options), 0, sizeof(init_options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    init_options.externalReferences = externals;
    if (aa == 0) {
        OH_JSVM_Init(&init_options);
        aa++;
    }
    JSVM_VM vm;
    JSVM_CreateVMOptions options;
    if (memset_s(&options, sizeof(options), 0, sizeof(options)) != EOK) {
        printf("memset_s failed");
        return nullptr;
    }
    OH_JSVM_CreateVM(&options, &vm);
    JSVM_VMScope vm_scope;
    OH_JSVM_OpenVMScope(vm, &vm_scope);
    JSVM_Env env;
    JSVM_CallbackStruct param[2];
    param[0].data = nullptr;
    param[0].callback = assertEqual;
    param[1].data = nullptr;
    param[1].callback = JsVmThrow;
    JSVM_PropertyDescriptor descriptor[] = {
        {"assertEqual", NULL, &param[0], NULL, NULL, NULL, JSVM_DEFAULT},
        {"jsVmThrow", NULL, &param[1], NULL, NULL, NULL, JSVM_DEFAULT},
    };
    OH_JSVM_CreateEnv(vm, sizeof(descriptor) / sizeof(descriptor[0]), descriptor, &env);
    JSVM_EnvScope envScope;
    OH_JSVM_OpenEnvScope(env, &envScope);
    JSVM_HandleScope handlescope;
    OH_JSVM_OpenHandleScope(env, &handlescope);
    JSVM_Value sourcecodevalue;
    const char *sourcecodestr = "\
{\
     try {jsVmThrow();} catch (error) {};\
}\
";
    OH_JSVM_CreateStringUtf8(env, sourcecodestr, strlen(sourcecodestr), &sourcecodevalue);
    JSVM_Script script;
    OH_JSVM_CompileScript(env, sourcecodevalue, nullptr, 0, true, nullptr, &script);
    JSVM_Value jsvmResult;
    OH_JSVM_RunScript(env, script, &jsvmResult);
    OH_JSVM_CloseHandleScope(env, handlescope);
    OH_JSVM_CloseEnvScope(env, envScope);
    OH_JSVM_DestroyEnv(env);
    OH_JSVM_CloseVMScope(vm, vm_scope);
    OH_JSVM_DestroyVM(vm);
    napi_value result11;
    NAPI_CALL(nEnv, napi_create_int32(nEnv, 0, &result11));
    return result11;
}

EXTERN_C_START

static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor properties[] = {
        DECLARE_NAPI_FUNCTION("testEngineAndContext", testEngineAndContext),
        DECLARE_NAPI_FUNCTION("testError", testError),
        DECLARE_NAPI_FUNCTION("testTypeError", testTypeError),
        DECLARE_NAPI_FUNCTION("testRangeError", testRangeError),
        DECLARE_NAPI_FUNCTION("testSyntaxError", testSyntaxError),
        DECLARE_NAPI_FUNCTION("testClearError", testClearError),
        DECLARE_NAPI_FUNCTION("testLifeCycle", testLifeCycle),
        DECLARE_NAPI_FUNCTION("testCreateData1", testCreateData1),
        DECLARE_NAPI_FUNCTION("testCreateData2", testCreateData2),
        DECLARE_NAPI_FUNCTION("testCreateData3", testCreateData3),
        DECLARE_NAPI_FUNCTION("testCreateData4", testCreateData4),
        DECLARE_NAPI_FUNCTION("testCreateData5", testCreateData5),
        DECLARE_NAPI_FUNCTION("testGetData1", testGetData1),
        DECLARE_NAPI_FUNCTION("testGetData2", testGetData2),
        DECLARE_NAPI_FUNCTION("testValueOperation", testValueOperation),
        DECLARE_NAPI_FUNCTION("testValueOperation2", testValueOperation2),
        DECLARE_NAPI_FUNCTION("testGetPropertyNames", testGetPropertyNames),
        DECLARE_NAPI_FUNCTION("testGetAllPropertyNames", testGetAllPropertyNames),
        DECLARE_NAPI_FUNCTION("testProperty", testProperty),
        DECLARE_NAPI_FUNCTION("testDefineProperties", testDefineProperties),
        DECLARE_NAPI_FUNCTION("testWrap", testWrap),
        DECLARE_NAPI_FUNCTION("testOthers", testOthers),
        DECLARE_NAPI_FUNCTION("Add", Add),
        DECLARE_NAPI_FUNCTION("Add1", Add1),
        DECLARE_NAPI_FUNCTION("testSecondOperations", testSecondOperations),
        DECLARE_NAPI_FUNCTION("testDefinePropertyHandle", testDefinePropertyHandle),
        DECLARE_NAPI_FUNCTION("runJsVm", testRunJsVm),
    };
    NAPI_CALL(env, napi_define_properties(env, exports, sizeof(properties) / sizeof(properties[0]), properties));
    return exports;
}

EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "napitest",
    .nm_priv = ((void *)0),
    .reserved = { 0 },
};

extern "C" __attribute__((constructor)) void RegisterModule(void)
{
    napi_module_register(&demoModule);
}
