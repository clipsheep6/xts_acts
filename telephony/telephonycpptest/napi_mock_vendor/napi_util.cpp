/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include "napi_util.h"
#include <cstring>
#include <cstdio>
#include <cassert>
#include <cstdlib>

namespace NapiUtil
{
    napi_status GetPropertyValue(napi_env env, napi_value object, char *propName, napi_value *propValue)
    {
        return napi_get_named_property(env, object, propName, propValue);
    }

    void GetStringProperty(char *ret, napi_env env, napi_value object, char *propName)
    {
        napi_value prop = NULL;
        napi_status stats = GetPropertyValue(env, object, propName, &prop);
        assert(stats == napi_ok);

        size_t real_size = 0;
        stats = napi_get_value_string_utf8(env, prop, ret, sizeof(char) * MAX_PROPERTY_LENGTH, &real_size);
        assert(stats == napi_ok);
        printf("prop value: %s\n", ret);
    }

    int32_t GetIntProperty(napi_env env, napi_value object, char *propName)
    {
        napi_value prop = NULL;

        napi_status stats = GetPropertyValue(env, object, propName, &prop);
        assert(stats == napi_ok);

        int32_t ret = 0;
        stats = napi_get_value_int32(env, prop, &ret);
        assert(stats == napi_ok);
        return ret;
    }
} // NapiUtil