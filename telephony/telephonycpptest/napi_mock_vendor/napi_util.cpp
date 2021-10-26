#include "napi_util.h"

napi_status GetPropertyValue(napi_env env, napi_value object, char *propName, napi_value *propValue) {
    return napi_get_named_property(env, object, propName,propValue);
}

void GetStringProperty(char* ret,napi_env env, napi_value object, char * propName) {
    napi_status stats = napi_ok;
    napi_value prop = NULL;
    stats = GetPropertyValue(env,object,propName,&prop);
    assert(stats == napi_ok);

    size_t real_size = 0;
    stats = napi_get_value_string_utf8(env, prop, ret,sizeof(char) * MAX_PROPERTY_LENGTH,&real_size);
    assert(stats == napi_ok);
    printf("prop value: %s\n",ret);
}

int32_t GetIntProperty(napi_env env, napi_value object, char *propName) {
    napi_status stats = napi_ok;
    napi_value prop = NULL;

    stats = GetPropertyValue(env, object,propName,&prop);
    assert(stats == napi_ok);

    int32_t ret = 0;
    stats = napi_get_value_int32(env, prop, &ret);
    assert(stats == napi_ok);
    return ret;
}