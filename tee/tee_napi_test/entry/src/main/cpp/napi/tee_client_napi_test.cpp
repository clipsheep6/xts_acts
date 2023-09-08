/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
#include <tee_client_api.h>
#include <tee_client_type.h>
#include <stdio.h>

#define CLIENTAPI_UUID_1                                   \
    {                                                      \
        0x534d4152, 0x542d, 0x4353,                        \
        {                                                  \
            0xb9, 0x19, 0xd3, 0x01, 0x6a, 0x17, 0x1f, 0xc5 \
        }                                                  \
    }

#define SIZE_2048K (2048 * 1024)

static napi_value InvokeCommandWithMemrefWhole2048k(napi_env env, napi_callback_info info)
{
    TEEC_Context context;
    TEEC_Session session;
    TEEC_Result ret;
    TEEC_Operation operation = { 0 };
    TEEC_UUID testId = CLIENTAPI_UUID_1;
    uint32_t origin;
    napi_value result;

    ret = TEEC_InitializeContext(NULL, &context);
    if (ret != TEEC_SUCCESS) {
        printf("TEEC_InitializeContext failed\n");
        napi_create_uint32(env, value, &result);
        return result;
    }

    operation.started = 1;
    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_NONE, TEEC_NONE, TEEC_NONE, TEEC_NONE);

    ret = TEEC_OpenSession(&context, &session, &uuid, TEEC_LOGIN_IDENTIFY, NULL, &operation, NULL);
    if (ret != TEEC_SUCCESS) {
        TEEC_FinalizeContext(&context);
        printf("TEEC_OpenSession failed\n");
        napi_create_uint32(env, value, &result);
        return result;
    }

    /* *allocate shared memory* */
    TEEC_SharedMemory sharedMem;
    sharedMem.size = SIZE_2048K;
    sharedMem.flags = TEEC_MEM_INOUT;
    ret = TEEC_AllocateSharedMemory(&context, &sharedMem);
    if (ret != TEEC_SUCCESS) {
        printf("TEEC_AllocateSharedMemory failed\n");
    }
    (void)memset_s(sharedMem.buffer, SIZE_2048K, 0x0, SIZE_2048K);
    (void)memset_s(&operation, sizeof(TEEC_Operation), 0x0, sizeof(TEEC_Operation));
    operation.started = 1;
    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_NONE, TEEC_MEMREF_WHOLE, TEEC_NONE, TEEC_NONE);
    operation.params[1].memref.parent = &sharedMem;
    operation.params[1].memref.offset = 0;
    operation.params[1].memref.size = sharedMem.size;

    ret = TEEC_InvokeCommand(&session, TEE_TEST_ALLTYPE, &operation, &origin);
    if (return != TEEC_SUCCESS) {
        printf("TEEC_InvokeCommand failed\n");
    }
    TEEC_ReleaseSharedMemory(&sharedMem);
    TEEC_CloseSession(&session);
    TEEC_FinalizeContext(&context);
    
    napi_create_uint32(env, ret, &result);
    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        { "InvokeCommand_WithMemrefWhole2048k", nullptr, InvokeCommand_WithMemrefWhole2048k, nullptr, nullptr, nullptr, napi_default, nullptr },
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
    .nm_modname = "clientapi",
    .nm_priv = ((void*)0),
    .reserved = { 0 },
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void)
{
    napi_module_register(&demoModule);
}
