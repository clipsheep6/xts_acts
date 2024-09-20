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

#include "napi/native_api.h"
#include <cstddef>
#include <cstdlib>
#include <js_native_api.h>
#include <js_native_api_types.h>
#include <node_api.h>
#include <csignal>
#include <sys/wait.h>
#include <unistd.h>

void SignalHandlerAbort(int signum)
{
    kill(getpid(), SIGSTOP);
}

// To detect accesses of an enumeration variable
// when its value isn’t within the valid range for the type.
// This can occur for uninitialized enumeration values,
// or when using an integer as an enumeration value without an appropriate cast.
enum E {
    A = 1,
    B = 2
};

static napi_value Enum(napi_env env, napi_callback_info info)
{
    struct sigaction sigabrt = {
        .sa_handler = SignalHandlerAbort,
    };
    sigaction(SIGABRT, &sigabrt, nullptr);
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    int status;
    int pid = fork();
    int res = -1;
    switch (pid) {
        case -1: {
            break;
        }
        case 0: {
            int param;
            napi_get_value_int32(env, args[0], &param);
            // deliberately convert from integer to enum to trigger the undefined behavior of enum
            enum E *e = (enum E *)&param;
            if (*e == A) {
                res = 1;
            }
            exit(0);
        }
        default: {
            waitpid(pid, &status, WUNTRACED);
            res = WSTOPSIG(status);
            kill(pid, SIGCONT);
            break;
        }
    }
    napi_value result = nullptr;
    napi_create_int32(env, res, &result);
    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        {"enum", nullptr, Enum, nullptr, nullptr, nullptr, napi_default, nullptr},
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = "enum",
    .nm_register_func = Init,
    .nm_modname = "enum",
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterModule(void) { napi_module_register(&demoModule); }