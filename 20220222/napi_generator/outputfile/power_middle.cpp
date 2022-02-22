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
#include <cstring>
#include <string>
#include <memory>
#include <vector>
#include <node_api.h>
#include "x_napi_tool.h"
#include "power.h"

#define NUMBER_JS_2_C(napi_v, type, dest)      \
    if (typeid(type) == typeid(int32_t))       \
        dest = pxt->SwapJs2CInt32(napi_v);     \
    else if (typeid(type) == typeid(uint32_t)) \
        dest = pxt->SwapJs2CUint32(napi_v);    \
    else if (typeid(type) == typeid(int64_t))  \
        dest = pxt->SwapJs2CInt64(napi_v);     \
    else if (typeid(type) == typeid(double_t)) \
        dest = pxt->SwapJs2CDouble(napi_v);

napi_value number_c_to_js(XNapiTool *pxt, const std::type_info &n, void *num)
{
    if (n == typeid(int32_t))
        return pxt->SwapC2JsInt32(*(int32_t *)num);
    else if (n == typeid(uint32_t))
        return pxt->SwapC2JsUint32(*(uint32_t *)num);
    else if (n == typeid(int64_t))
        return pxt->SwapC2JsInt64(*(int64_t *)num);
    else if (n == typeid(double_t))
        return pxt->SwapC2JsDouble(*(double_t *)num);
    return nullptr;
}
#define NUMBER_C_2_JS(pxt, n) \
    number_c_to_js(pxt, typeid(n), &n)

namespace power {
struct shutdownDevice_value_struct {
    std::string in0;
    
    
};

napi_value shutdownDevice_middle(napi_env env, napi_callback_info info)
{
    XNapiTool *pxt = std::make_unique<XNapiTool>(env, info).release();
    if (pxt->IsFailed())
    {
        napi_value err = pxt->GetError();
        delete pxt;
        return err;
    }
    

    struct shutdownDevice_value_struct *vio=new shutdownDevice_value_struct();
    
    pxt->SwapJs2CUtf8(pxt->GetArgv(0), vio->in0);

    shutdownDevice(vio->in0, vio->out);

    napi_value result = nullptr;
    result = pxt->UndefinedValue();

    delete vio;
    if (pxt->IsFailed())
        result = pxt->GetError();
    delete pxt;// release
    return result;
}
struct rebootDevice_value_struct {
    std::string in0;
    
    
};

napi_value rebootDevice_middle(napi_env env, napi_callback_info info)
{
    XNapiTool *pxt = std::make_unique<XNapiTool>(env, info).release();
    if (pxt->IsFailed())
    {
        napi_value err = pxt->GetError();
        delete pxt;
        return err;
    }
    

    struct rebootDevice_value_struct *vio=new rebootDevice_value_struct();
    
    pxt->SwapJs2CUtf8(pxt->GetArgv(0), vio->in0);

    rebootDevice(vio->in0, vio->out);

    napi_value result = nullptr;
    result = pxt->UndefinedValue();

    delete vio;
    if (pxt->IsFailed())
        result = pxt->GetError();
    delete pxt;// release
    return result;
}
struct isScreenOn_value_struct {
    
    bool out;
};

void isScreenOn_execute(XNapiTool *pxt, void *data)
{
    isScreenOn_value_struct *vio = (isScreenOn_value_struct *)data;
    

    isScreenOn(vio->out, vio->out);
}

void isScreenOn_complete(XNapiTool *pxt, void *data)
{
    isScreenOn_value_struct *vio = (isScreenOn_value_struct *)data;
    
    napi_value result = nullptr;
    result = pxt->SwapC2JsBool(vio->out);
    
    {
        napi_value args[1] = {result};
        pxt->FinishAsync(1, args);
    }

    delete vio;
}

napi_value isScreenOn_middle(napi_env env, napi_callback_info info)
{
    XNapiTool *pxt = std::make_unique<XNapiTool>(env, info).release();
    if (pxt->IsFailed())
    {
        napi_value err = pxt->GetError();
        delete pxt;
        return err;
    }
    

    struct isScreenOn_value_struct *vio=new isScreenOn_value_struct();
    
    

    
    napi_value result = pxt->StartAsync(isScreenOn_execute, vio, isScreenOn_complete, pxt->GetArgc() == 1 ? pxt->GetArgv(0) : nullptr);

    if (pxt->IsFailed())
        result = pxt->GetError();
    return result;
}}

napi_value init(napi_env env, napi_value exports)
{
    std::shared_ptr<XNapiTool> pxt = std::make_shared<XNapiTool>(env, exports);

    undefined    pxt->DefineFunction("shutdownDevice", power::shutdownDevice_middle);
    pxt->DefineFunction("rebootDevice", power::rebootDevice_middle);
    pxt->DefineFunction("isScreenOn", power::isScreenOn_middle);


    return exports;
}

static napi_module g_power_Module = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = init,
    .nm_modname = "",
    .nm_priv = ((void *)0),
    .reserved = {(void *)0},
};

extern "C" __attribute__((constructor)) void Register_power_Module(void)
{
    napi_module_register(&g_power_Module);
}
