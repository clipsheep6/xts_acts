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

#ifndef NAPI_VALUE_UTILS_H
#define NAPI_VALUE_UTILS_H

#include <string>
#include <vector>
#include <functional>
#include "napi/native_api.h"

using RawVectorData = void;

namespace OHOS {
namespace Media {
class NapiValue {
public:
    NapiValue() : env_(nullptr), val_(nullptr) {}
    NapiValue(napi_env env) : env_(env), val_(nullptr) {}
    NapiValue(napi_env env, napi_value val) : env_(env), val_(val) {}
    ~NapiValue() = default;
    bool isEnvValid() {
        return env_ != nullptr;
    }

    bool isValid()
    {
        return isEnvValid() && (val_ != nullptr);
    }

    napi_value GetUndefined();
    napi_value GetResult(uint32_t code, napi_value res = nullptr);
    napi_value GetResult(uint32_t code, NapiValue &val);
    napi_value GetObject();

    bool ToInt32(int32_t &val);
    bool ToUInt32(uint32_t &val);
    bool ToFloat(float &val);
    bool ToDouble(double &val);
    bool ToByteArray(std::vector<uint8_t> &val);
    bool ToFloatArray(std::vector<float> &val);
    bool ToDoubleArray(std::vector<double> &val);
    bool ToString(std::string &val);
    bool ToNapiArray(std::vector<NapiValue> &val);

    bool FromInt32(int32_t val);
    bool FromUInt32(uint32_t val);
    bool FromFloat(float val);
    bool FromDouble(double val);
    bool FromByteArray(std::vector<uint8_t> &val);
    bool FromByteArray(RawVectorData *data, size_t size);
    bool FromString(std::string &val);
    bool FromNapiArray(std::vector<NapiValue> &val);

    bool HasProp(const std::string name);
    NapiValue GetProp(const std::string name);
    bool GetPropInt32(const std::string name, int32_t &val);
    bool GetPropUInt32(const std::string name, uint32_t &val);
    bool GetPropFloat(const std::string name, float &val);
    bool GetPropDouble(const std::string name, double &val);
    bool GetPropByteArray(const std::string name, std::vector<uint8_t> &val);
    bool GetPropString(const std::string name, std::string &val);
    bool GetPropNapiArray(const std::string name, std::vector<NapiValue> &val);

    bool SetProp(const std::string name, NapiValue &napiValue);
    bool SetPropInt32(const std::string name, int32_t val);
    bool SetPropUInt32(const std::string name, uint32_t val);
    bool SetPropFloat(const std::string name, float val);
    bool SetPropDouble(const std::string name, double val);
    bool SetPropByteArray(const std::string name, std::vector<uint8_t> val);
    bool SetPropByteArray(const std::string name, RawVectorData *data, size_t size);
    bool SetPropString(const std::string name, std::string val);
    bool SetPropNapiArray(const std::string name, std::vector<NapiValue> &val);

    napi_env env_ = nullptr;
    napi_value val_ = nullptr;
private:
    template<typename T>
    bool NapiValueTo(T &val, std::function<napi_status(napi_env, napi_value, T *)> call);
    template<typename T>
    bool NapiValueFrom(T val, std::function<napi_status(napi_env, T, napi_value *)> call);
    bool GetPropTyped(const std::string name, std::function<bool(NapiValue &)> call);
    bool SetPropTyped(const std::string name, std::function<bool(NapiValue &)> call);
};
class NapiInfo {
public:
    NapiInfo(napi_env env, napi_callback_info info, size_t argsCount) :
        env_(env), info_(info), count_(argsCount) {}
    ~NapiInfo() = default;

    bool init();
    bool isValid() {
        return thisVal_ != nullptr;
    }

    napi_env env_ = nullptr;
    napi_callback_info info_ = nullptr;
    size_t count_ = 0;
    napi_value thisVal_ = nullptr;
    std::vector<napi_value> args_;
};
} // namespace Media
} // namespace OHOS
#endif // NAPI_VALUE_UTILS_H