#include "napi/native_api.h"
#include <chrono>
#include <string>
#include "common/native_common.h"
#include "hilog/log.h"
#include "web/native_interface_arkweb.h"

constexpr unsigned int LOG_PRINT_DOMAIN = 0xFF00;

std::chrono::time_point<std::chrono::high_resolution_clock> start;

// 发送JS脚本到H5侧执行，执行结果的回调
static void RunJavaScriptCallback(const char *result){
    std::chrono::duration<double,std::milli> elapsed_ms = std::chrono::high_resolution_clock::now() - start;
        
//    OH_LOG_Print(
//        LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz",
//        "ndk OH_NativeArkWeb_RunJavaScript end, cost time: %{public}f ms",
//        elapsed_ms.count());
//    OH_LOG_Print(
//            LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz",
//            "ndk OH_NativeArkWeb_RunJavaScript result:%{public}s",result);
}

// 示例代码 ，注册了1个对象，2个方法
static char *ProxyMethod1(const char **argv,int argc){
//    OH_LOG_Print(LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz",
//        "ndk ProxyMethod1 argc:%{public}d",argc);
//    for(int i = 0; i < argc; i++) {
//         OH_LOG_Print(LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz",
//            "ndk ProxyMethod1 argv[%{public}d]:%{public}s",i,argv[i]);
//    }
    return nullptr;
}

static char *ProxyMethod2(const char **argv,int argc){
//    OH_LOG_Print(LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz",
//        "ndk ProxyMethod2 argc:%{public}d",argc);
//    for(int i = 0; i < argc; i++) {
//         OH_LOG_Print(LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz",
//            "ndk ProxyMethod2 argv[%{public}d]:%{public}s",i,argv[i]);
//    }  
    char *ret =(char *)"ygz hello from native ProxyMethod2";
    return ret;
}

static char *ProxyMethod3(const char **argv,int argc){
//    OH_LOG_Print(LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz",
//        "ndk ProxyMethod3 argc:%{public}d",argc);
//    for(int i = 0; i < argc; i++) {
//         OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN,"ygz",
//                "ndk ProxyMethod3 argv[%{public}d] len:%{public}d",i,
//                strlen(argv[i]));
//    }
    char *ret =(char *)"ygz hello from native ProxyMethod3";
    return ret;
}

void ValidCallback(const char *webName){
    //OH_LOG_Print(LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz","ndk ValidCallback webName: %{public}s",webName);

    //注册对象
    //OH_LOG_Print(LOG_APP,LOG_INFO,LOG_PRINT_DOMAIN,"ygz","ndk RegisterJavaScriptPoxy begin");

    const char *methodName[2]={"method1","method2"};
    NativeArkWeb_OnJavaScriptProxyCallback callback[2] = {ProxyMethod1,ProxyMethod2};
    //调用ndk接口 注册对象
    // 如此注册的情况下，在H5页面就可以使用proxy.method1、proxy.method1调用此文件下的ProxyMethod1和ProxyMethod2方法了
    OH_NativeArkWeb_RegisterJavaScriptProxy(webName, "ndkProxy", methodName, callback, 2, false);  
                                            
    //OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz","ndk RegisterJavaScriptProxy end");
}

void DestroyCallback(const char *webName) {   
    // OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz","ndk DestoryCallback webName: %{public}s", webName); 
    // do what you need, eg: some clean-up work }
}

static napi_value NativeWebInit(napi_env env, napi_callback_info info) {
//    OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz","ndk NativeWebInit start");

    size_t argc = 1;
    napi_value args[1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    // 获取第一个参数 webName
    size_t webNameSize = 0;
    napi_get_value_string_utf8(env, args[0], nullptr, 0, &webNameSize);
    char *webNameValue = new (std::nothrow) char[webNameSize + 1];
    size_t webNameLength = 0;
    napi_get_value_string_utf8(env, args[0], webNameValue, webNameSize + 1,&webNameLength);
                                
    //OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "ygz","ndk NativeWebInit webName:%{public}s", webNameValue);
    
    // 注js proxy册回调函数
    NativeArkWeb_OnValidCallback ptr = ValidCallback;
    OH_NativeArkWeb_SetJavaScriptProxyValidCallback(webNameValue, ptr);
    //OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "ygz","ndk NativeWebInit ValidCallback set:%{public}p", ptr);
    NativeArkWeb_OnValidCallback retValidCallback = OH_NativeArkWeb_GetJavaScriptProxyValidCallback(webNameValue);
//    if (retValidCallback) {
//        OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "ygz",
//                    "ndk NativeWebInit ValidCallback get:%{public}p",
//                    retValidCallback);
//    }else {
//        OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz",
//        "ndk retValidCallback null");
//    }
    // 注册destroy回调函数
    OH_NativeArkWeb_SetDestroyCallback(webNameValue, DestroyCallback);
//    OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "ygz"
//                "ndk NativeWebInit DestroyCallback:%{public}p", DestroyCallback);
    auto retDestroyCallback1 = OH_NativeArkWeb_GetDestroyCallback(webNameValue);
//    OH_LOG_Print(LOG_APP, LOG_ERROR, LOG_PRINT_DOMAIN, "ygz",
//                "ndk NativeWebInit DestroyCallback get:%{public}p",
//                 retDestroyCallback1);
//    OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz",
//                "ndk NativeWebInit end");
    return nullptr;
}

//发送JS脚本到H5侧执行
static napi_value RunJavaScript(napi_env env, napi_callback_info info) {
    size_t argc = 2;
    napi_value args[2] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    
    // 获取第一个参数 webName
    size_t webNameSize = 0;
    napi_get_value_string_utf8(env, args[0], nullptr, 0, &webNameSize);
    char *webNameValue = new (std::nothrow) char[webNameSize + 1];
    size_t webNameLength = 0;
    napi_get_value_string_utf8(env, args[0], webNameValue, webNameSize + 1,&webNameLength);
                                
//    OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz","ndk OH_NativeArkWeb_RunJavaScript webName:%{public}s",webNameValue);
    
    // 获取第二个参数 jsCode    
    size_t bufferSize = 0;
    napi_get_value_string_utf8(env, args[1], nullptr, 0, &bufferSize);
    char *jsCode = new (std::nothrow) char[bufferSize + 1];
    size_t byteLength = 0;
    napi_get_value_string_utf8(env, args[1], jsCode, bufferSize + 1, &byteLength);
//    OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz","ndk OH_NativeArkWeb_RunJavaScript jsCode len:%{public}d",strlen(jsCode));
    start = std::chrono::high_resolution_clock::now();
    
    // 调用ndk接口
    OH_NativeArkWeb_RunJavaScript(webNameValue, jsCode, RunJavaScriptCallback);
//    return nullptr;
    napi_value output;
    NAPI_CALL(env, napi_create_string_utf8(env, "RegisterSuccess", NAPI_AUTO_LENGTH,&output));
    return output;
    
}

static napi_value RegisterJavaScriptProxy(napi_env env, napi_callback_info info) {
    size_t argc = 1;
    napi_value args[1] = {nullptr};
    napi_get_cb_info(env, info, &argc, args, nullptr, nullptr);
    // 获取第一个参数 webName
    size_t webNameSize = 0;
    napi_get_value_string_utf8(env, args[0], nullptr, 0, &webNameSize);
    char *webNameValue = new (std::nothrow) char[webNameSize + 1];
    size_t webNameLength = 0;
    napi_get_value_string_utf8(env, args[0], webNameValue, webNameSize + 1, &webNameLength);
    //OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz", "ndk RegisterJavaScriptProxy webName:%{public}s",                   webNameValue);
    //OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz", "ndk RegisterJavaScriptProxy begin");
    const char *methodName[3] = {"method1", "method2", "method3"};
    NativeArkWeb_OnJavaScriptProxyCallback callback[3] = {ProxyMethod1, ProxyMethod2, ProxyMethod3};
    // 调用ndk接口 注册对象
    // 如此注册的情况下，在H5页面就可以使用proxy.method1、proxy.method1调用此文件下的ProxyMethod1和ProxyMethod2方法了
    OH_NativeArkWeb_RegisterJavaScriptProxy(webNameValue, "ndkProxy", methodName, callback,  3, false);
    //OH_LOG_Print(LOG_APP, LOG_INFO, LOG_PRINT_DOMAIN, "ygz", "ndk RegisterJavaScriptProxy end");
    return nullptr;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports) {
    napi_property_descriptor desc[] = {
        {"nativeWebInit", nullptr, NativeWebInit, nullptr, nullptr, nullptr,napi_default, nullptr},
        {"runJavaScript", nullptr, RunJavaScript, nullptr, nullptr, nullptr,napi_default, nullptr},
        {"registerJavaScriptProxy", nullptr,  RegisterJavaScriptProxy, nullptr,nullptr, nullptr, napi_default, nullptr},
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
    .nm_priv = ((void *)0),
    .reserved = {0},
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void) {
    napi_module_register(&demoModule);
}