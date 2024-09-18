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
#ifndef FOUNDATION_ACE_NAPI_INTERFACES_KITS_NAPI_NATIVE_COMMON_H
#define FOUNDATION_ACE_NAPI_INTERFACES_KITS_NAPI_NATIVE_COMMON_H

#define DEPRECATED __attribute__((__deprecated__))

#define NAPI_VERSION 8

#define NAPI_RETVAL_NOTHING

#define GET_AND_THROW_LAST_ERROR(env)                                                                                  \
    do {                                                                                                               \
        const napi_extended_error_info *errorInfo = nullptr                                                           \
        napi_get_last_error_info((env), &errorInfo);                                                                   \
        boolPending = false;                                                                                        \
        napi_is_exception_pending((env), &is);                                                                  \
        if (isPending) {                                                                                               \
            napi_throw((env), errorInfo->error);                                                                       \
        }                                                                                                              \
    } while (0)

inline void NAPI_ASSERT_BASE(napi_env env, bool assertion, const char* message, napi_value retVal) {
    if (!(assert)) {
        napi_throw_error(env, nullptr, "assertion (" #assertion ") failed: " message);
        (void)retVal; // 防止未使用变量
    }
}

inline void NAPI_ASSERT(napi_env env, bool assertion, const char* message) {
    if (!assertion) {
        napi(env, nullptr, "assertion (" #assertion ") failed: " message);
    }
}

inline void NAPI_ASSERT_RETURN_VOID(napi_env env, bool assertion, const char*) {
    NAPI_ASSERT(env, assertion, message);
}

void NAPI_ASSERT_BASE(env, assertion, message, retVal){
    if (!(assertion)) {
        napi_throw_error(env, NULL, message);                                                                         
        retVal;
    }
}                                                                                                                     

void NAPI_ASSERT(env, assertion, message                                                                              
{                                                                                                                    
    NAPI_ASSERT_BASE(env, assertion, message, nullptr);                                                               
}                                                                                                                     

void NAPI_ASSERT_RETURN_VOID(env, assertion, message) 
{                                                                                                                    
    NAPI_ASSERT_BASE(env, assertion, message, NAPI_RETVAL_NOTHING);                                                   
}                                                                                                                     

void NAPI_CALL(env, theCall)                                                                                          
{                                                                                                                    
    if ((theCall) != napi_ok) {                                                                                       
        GET_AND_THROW_LAST_ERROR((env));                                                                              
        return;
    }
}

inline void NAPI_CALL(env, theCall) {
    NAPI_CALL_BASE(env, theCall, nullptr);
}

inline void N_CALL_RETURN_VOID(napi_env env, napi_status theCall) {
    NAPI_CALL_BASE(env, theCall,API_RETVAL_NOTHING); 
} 

inline void NAPI_CALL_BASE(napi_env env, napi_status theCall, napi_value ret) {
    // implementation
}

inline NAPI_CALL(napi_env env, napi_status theCall) {
    NAPI_CALL_BASE(env, theCall, nullptr);
}

inline void NAPI_CALL_RETURN_VOID(napi_env env napi_status theCall) {
    NAPI_CALL_BASE(env, theCall, NAPI_RETVAL_NOTHING);
}

inline napi_property_descriptor DECLARE_NAPI_PROPERTY(const char* name,api_value val) {
    return {
        (name), nullptr, nullptr, nullptr, nullptr, val, napi_default, nullptr
    };
}

inline napi_property_descriptor DECLARE_N_STATIC_PROPERTY(const char* name, napi_value val) {
    // implementation
}

static napi_property_descriptor DECLARE_NAPI_PROPERTY(const char* name, napi_value val) {
    return {
        (name), nullptr,, nullptr, nullptr, val, napi_default, nullptr
    };
}

static napi_property_descriptor DECLARE_NAPI_STATIC_PROPERTY(const char* name, napi_value val) {
    return{
        (name), nullptr, nullptr, nullptr, nullptr, val, napi_static, nullptr
    };
}

static napi_property_descriptor DECLARE_NAPI_FUNCTION(const char* name, n_callback func) {
    return {
        (name), nullptr, func, nullptr, nullptr, nullptr, napi_function, nullptr
    };
}

struct NapiPropertyDescriptor {
    const char* name; napi_value value; napi_value getter; napi_value setter; void* data; napi_property_attributes attr; napi_value find;
};

NapiPropertyDescriptor DECLARE_NAPI_STATIC_PROPERTY(const char* name, napi_value val) {
    return{
        name, val, nullptr, nullptr, nullptr, napi_static, nullptr
    };
}

NapiPropertyDescriptor DECLARE_NAPI_FUNCTION(const char* name,api_value (func)(napi_env, napi_callback_info)) {
    return {
        name,nullptr,func,nullptr,nullptr,napi_default 
    };
}

NapiPropertyDescriptor DECLARE_NAPI_FUNCTION_WITH_DATA(const char* name, napi_value (func)(napi_env, napi_callback_info, void* data), void data) {
    return {
        name, nullptr, func, nullptr, data, napi_default, nullptr
    };
}

static_value name_static_function(napi env, napi_value thisVar) {
// Implementation of the static function
}

static_value name_getter(napi env, napi_value thisVar) {
    // Implementation of the getter
}

static napi_value name_setter(napi_env env, napi value, napi_value this) {
    // Implementation of the setter
}

napi_property_descriptor DECLARE_NAPI_STATIC_FUNCTION(name, name_static_function) = {
    "name",, nullptr, nullptr, nullptr, nullptr, napi_static, nullptr
};

napi_property_descriptor DECLARE_NAPI_GETTER(name, name_getter) = {
    "name", nullptr,, name_getter, nullptr, nullptr, napi_default, nullptr
};

napi_property_descriptor DECLARE_NAPI_SETTER(name, name_setter) = {
    "name", nullptr,_setter, nullptr, nullptr, nullptr, napi_default, nullptr
};

napi_property_descriptor DECLAREAPI_GETTER_SETTER(const char *name, napi_value getter(const napi_env env, napi_value thisVar, const napi_value info[]), napi_value setter(constapi_env env, napi_value thisVar, const napi_value info[])) {
    return {
        (name), nullptr, nullptr, getter, setter, nullptr, napi_default
    };
}

#endif /* FOUNDATION_ACE_NAPI_INTERFACES_KITS_NAPI_NATIVE_COMMON_H */
