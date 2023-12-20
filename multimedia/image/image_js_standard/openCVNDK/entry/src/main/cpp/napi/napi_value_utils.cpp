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

#include "napi_value_utils.h"

#include <cstdlib>
#include <memory>

#include "node_api.h"
#include "hilog/log.h"
#include "hilog/log_cpp.h"

namespace {
    constexpr size_t SIZE_ZERO = 0;
    constexpr uint32_t LOG_ID = 0xD002B05;
}

namespace OHOS {
namespace Media {
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, LOG_ID, "NapiValueUtils"};
#define MY_HILOG(op, fmt, args...) \
    do {                                  \
        op(LABEL, "{%{public}s:%{public}d} " fmt, __FUNCTION__, __LINE__, ##args);  \
    } while (0)
#define DEBUG_LOG(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Info, fmt, ##__VA_ARGS__)
#define DEBUG_ERR(fmt, ...) MY_HILOG(OHOS::HiviewDFX::HiLog::Error, fmt, ##__VA_ARGS__)

template<typename T>
static bool CopyToVector(std::vector<T> &v, RawVectorData *data, size_t dataSize)
{
    if (data == nullptr || dataSize == SIZE_ZERO) {
        return false;
    }
    v.resize(dataSize);
    for (size_t i = SIZE_ZERO; i < dataSize; i++ ) {
        v[i] = static_cast<T *>(data)[i];
    }
    return true;
}

template<typename T>
static bool CopyFromVector(std::vector<T> &v, RawVectorData *data, size_t &dataSize)
{
    if (data == nullptr || v.size() == SIZE_ZERO) {
        return false;
    }
    dataSize = v.size();
    for (size_t i = SIZE_ZERO; i < v.size(); i++ ) {
        static_cast<T *>(data)[i] = v[i];
    }
    return true;
}

napi_value NapiValue::GetUndefined()
{
    if (!isEnvValid()) {
        DEBUG_ERR("Env is invalid");
        return nullptr;
    }

    napi_get_undefined(env_, &val_);
    return val_;
}

napi_value NapiValue::GetObject()
{
    if (!isEnvValid()) {
        DEBUG_ERR("Env is invalid");
        return nullptr;
    }

    if (val_ == nullptr) {
        napi_create_object(env_, &val_);
    }

    return val_;
}

napi_value NapiValue::GetResult(uint32_t code, napi_value res)
{
    if (GetObject() == nullptr) {
        DEBUG_ERR("Get obejct failed");
        return nullptr;
    }
    SetPropUInt32("code", code);
    if (res != nullptr) {
        napi_set_named_property(env_, val_, "result", res);
    }

    return val_;
}
napi_value NapiValue::GetResult(uint32_t code, NapiValue &val)
{
    if (GetObject() == nullptr) {
        DEBUG_ERR("Get obejct failed");
        return nullptr;
    }
    SetPropUInt32("code", code);
    if (val.isValid()) {
        SetProp("result", val);
    }
    return val_;
}

static napi_status NapiGetArrayBufferInfo(napi_env env, napi_value root, std::vector<uint8_t> *val)
{
    if (val == nullptr) {
        return napi_invalid_arg;
    }
    void* tmp = nullptr;
    size_t size = SIZE_ZERO;
    auto status = napi_get_arraybuffer_info(env, root, &tmp, &size);
    if (status != napi_ok || size == SIZE_ZERO) {
        DEBUG_ERR("Get arraybuffer info failed with %{public}d", status);
        return status;
    }
    CopyToVector(*val, tmp, size);
    return status;
}

static napi_status NapiGetFloatArrayInfo(napi_env env, napi_value root, std::vector<float> *val)
{
    if (val == nullptr) {
        return napi_invalid_arg;
    }
    bool isTypeArray = false;
    auto status = napi_is_typedarray(env, root, &isTypeArray);
    if (status != napi_ok) {
        DEBUG_ERR("Is typedarray with %{public}d", status);
        return status;
    }
    if (!isTypeArray) {
        DEBUG_ERR("Is not typedarray");
        return napi_invalid_arg;
    }

    void* tmp = nullptr;
    size_t size = SIZE_ZERO;
    napi_typedarray_type type;
    napi_value arraybuffer;
    size_t offset;
    status = napi_get_typedarray_info(env, root, &type, &size, &tmp, &arraybuffer, &offset);
    if (status != napi_ok) {
        DEBUG_ERR("Get typedarray info failed with %{public}d", status);
        return status;
    }
    if (tmp == nullptr || size == SIZE_ZERO || type != napi_float32_array) {
        DEBUG_ERR("Size is %{public}d ptr is %{public}p type is %{public}d", size, tmp, type);
        return napi_invalid_arg;
    }
    CopyToVector(*val, tmp, size);
    return status;
}

static napi_status NapiGetDoubleArrayInfo(napi_env env, napi_value root, std::vector<double> *val)
{
    if (val == nullptr) {
        return napi_invalid_arg;
    }
    bool isTypeArray = false;
    auto status = napi_is_typedarray(env, root, &isTypeArray);
    if (status != napi_ok) {
        DEBUG_ERR("Is typedarray with %{public}d", status);
        return status;
    }
    if (!isTypeArray) {
        DEBUG_ERR("Is not typedarray");
        return napi_invalid_arg;
    }

    void* tmp = nullptr;
    size_t size = SIZE_ZERO;
    napi_typedarray_type type;
    napi_value arraybuffer;
    size_t offset;
    status = napi_get_typedarray_info(env, root, &type, &size, &tmp, &arraybuffer, &offset);
    if (status != napi_ok) {
        DEBUG_ERR("Get typedarray info failed with %{public}d", status);
        return status;
    }
    if (tmp == nullptr || size == SIZE_ZERO || type != napi_float64_array) {
        DEBUG_ERR("Size is %{public}d ptr is %{public}p type is %{public}d", size, tmp, type);
        return napi_invalid_arg;
    }
    CopyToVector(*val, tmp, size);
    return status;
}

static napi_status NapiGetValueString(napi_env env, napi_value root, std::string *val)
{
    if (val == nullptr) {
        return napi_invalid_arg;
    }
    size_t size = SIZE_ZERO;
    auto status = napi_get_value_string_utf8(env, root, nullptr, SIZE_ZERO, &size);
    if (status != napi_ok && size == SIZE_ZERO) {
        DEBUG_ERR("Get value string failed with %{public}d, size is %{public}zu", status, size);
        return status;
    }

    auto buffer = std::make_unique<char[]>(size + 1);
    for (size_t i = SIZE_ZERO; i < size + 1; i++ ) {
        buffer[i] = 0;
    }

    status = napi_get_value_string_utf8(env, root, buffer.get(), size + 1, &size);
    if (status != napi_ok) {
        DEBUG_ERR("Get value string real value failed with %{public}d", status);
        return status;
    }

    val->assign(buffer.get());
    return status;
}

static napi_status NapiGetValueFloat(napi_env env, napi_value root, float *val)
{
    if (val == nullptr) {
        return napi_invalid_arg;
    }
    double tmp = 0;
    auto status = napi_get_value_double(env, root, &tmp);
    if (status == napi_ok) {
        *val = tmp;
    }
    return status;
}

template<typename T>
bool NapiValue::NapiValueTo(T &val, std::function<napi_status(napi_env, napi_value, T *)> call)
{
    if (!isValid()) {
        DEBUG_ERR("Napi value is invalid");
        return false;
    }
    return call(env_, val_, &val) == napi_ok;
}

bool NapiValue::ToInt32(int32_t &val)
{
    return NapiValueTo<int32_t>(val, napi_get_value_int32);
}

bool NapiValue::ToUInt32(uint32_t &val)
{
    return NapiValueTo<uint32_t>(val, napi_get_value_uint32);
}

bool NapiValue::ToFloat(float &val)
{
    return NapiValueTo<float>(val, NapiGetValueFloat);
}

bool NapiValue::ToDouble(double &val)
{
    return NapiValueTo<double>(val, napi_get_value_double);
}

bool NapiValue::ToByteArray(std::vector<uint8_t> &val)
{
    return NapiValueTo<std::vector<uint8_t>>(val, NapiGetArrayBufferInfo);
}

bool NapiValue::ToFloatArray(std::vector<float> &val)
{
    return NapiValueTo<std::vector<float>>(val, NapiGetFloatArrayInfo);
}

bool NapiValue::ToDoubleArray(std::vector<double> &val)
{
    return NapiValueTo<std::vector<double>>(val, NapiGetDoubleArrayInfo);
}

bool NapiValue::ToString(std::string &val)
{
    return NapiValueTo<std::string>(val, NapiGetValueString);
}

bool NapiValue::ToNapiArray(std::vector<NapiValue> &val)
{
    if (!isValid()) {
        DEBUG_ERR("Napi value is invalid");
        return false;
    }
    bool isArray = false;
    if(napi_is_array(env_,val_, &isArray) != napi_ok || !isArray) {
        DEBUG_ERR("Napi value is not a array");
        return false;
    }
    uint32_t len = 0;
    if (napi_get_array_length(env_, val_, &len) != napi_ok) {
        DEBUG_ERR("napi_get_array_length failed");
        return false;
    }
    val.clear();
    for (size_t i = 0; i < len; i++) {
        napi_value item;
        if (napi_get_element(env_, val_, i, &item) != napi_ok) {
            DEBUG_ERR("napi_get_element %{public}d failed ", i);
            return false;
        }
        NapiValue nItem(env_, item);
        val.push_back(nItem);
    }
    return true;
}


// -------------NAPI FROM ---------
napi_status NapiCreateByteArray(napi_env env, std::vector<uint8_t> value, napi_value *result)
{
    if (result == nullptr) {
        return napi_invalid_arg;
    }
    void *data = nullptr;
    auto status = napi_create_arraybuffer(env, value.size(), &data, result);

    if (status != napi_ok) {
        return status;
    }
    size_t size;
    CopyFromVector(value, static_cast<uint8_t*>(data), size);
    return status;
}
napi_status NapiCreateString(napi_env env, std::string value, napi_value *result)
{
    return napi_create_string_utf8(env, value.c_str(), NAPI_AUTO_LENGTH, result);
}

template<typename T>
bool NapiValue::NapiValueFrom(T val, std::function<napi_status(napi_env, T, napi_value *)> call)
{
    return (isEnvValid() && call(env_, val, &val_) == napi_ok);
}

bool NapiValue::FromInt32(int32_t val)
{
    return NapiValueFrom<int32_t>(val, napi_create_int32);
}

bool NapiValue::FromUInt32(uint32_t val)
{
    return NapiValueFrom<uint32_t>(val, napi_create_uint32);
}

bool NapiValue::FromFloat(float val)
{
    return NapiValueFrom<double>(val, napi_create_double);
}

bool NapiValue::FromDouble(double val)
{
    return NapiValueFrom<double>(val, napi_create_double);
}

bool NapiValue::FromByteArray(std::vector<uint8_t> &val)
{
    return NapiValueFrom<std::vector<uint8_t>>(val, NapiCreateByteArray);
}

bool NapiValue::FromByteArray(RawVectorData *data, size_t size)
{
    std::vector<uint8_t> tmp;
    if (!CopyToVector(tmp, data, size)) {
        return false;
    }
    return NapiValueFrom<std::vector<uint8_t>>(tmp, NapiCreateByteArray);
}

bool NapiValue::FromString(std::string &val)
{
    return NapiValueFrom<std::string>(val, NapiCreateString);
}

bool NapiValue::FromNapiArray(std::vector<NapiValue> &val)
{
    if (!isEnvValid() || val.empty()) {
        return false;
    }
    auto status = napi_create_array(env_, &val_);
    if (status != napi_ok) {
        DEBUG_ERR("napi_create_array failed with %{public}d", status);
        return false;
    }
    for (size_t i = SIZE_ZERO; i < val.size(); i++ ) {
        if (!val[i].isValid()) {
            DEBUG_ERR("Item %{public}d is not valid", i);
            return false;
        }
        status = napi_set_element(env_, val_, i, val[i].val_);
        if (status != napi_ok) {
            DEBUG_ERR("napi_set_element failed with %{public}d", status);
            return false;
        }
    }
    return true;
}
bool NapiValue::HasProp(const std::string name)
{
    bool res = false;
    if (napi_has_named_property(env_, val_, name.c_str(), &res) != napi_ok) {
        DEBUG_ERR("has named property failed");
    }
    return res;
}

NapiValue NapiValue::GetProp(const std::string name)
{
    napi_value property = nullptr;
    auto status = napi_get_named_property(env_, val_, name.c_str(), &property);
    if (status != napi_ok) {
        DEBUG_ERR("Get named property failed with %{public}d", status);
    }
    return NapiValue(env_, property);
}

bool NapiValue::GetPropTyped(const std::string name, std::function<bool(NapiValue &)> call)
{
    if (!HasProp(name)) {
        DEBUG_ERR("no named property %{public}s", name.c_str());
        return false;
    }

    auto namedVal = GetProp(name);
    if (!namedVal.isValid()) {
        return false;
    }
    return call(namedVal);
}

bool NapiValue::GetPropInt32(const std::string name, int32_t &val)
{
    return GetPropTyped(name, [&val](NapiValue &namedVal){ return namedVal.ToInt32(val); });
}

bool NapiValue::GetPropUInt32(const std::string name, uint32_t &val)
{
    return GetPropTyped(name, [&val](NapiValue &namedVal){ return namedVal.ToUInt32(val); });
}

bool NapiValue::GetPropFloat(const std::string name, float &val)
{
    return GetPropTyped(name, [&val](NapiValue &namedVal){ return namedVal.ToFloat(val); });
}

bool NapiValue::GetPropDouble(const std::string name, double &val)
{
    return GetPropTyped(name, [&val](NapiValue &namedVal){ return namedVal.ToDouble(val); });
}

bool NapiValue::GetPropByteArray(const std::string name, std::vector<uint8_t> &val)
{
    return GetPropTyped(name, [&val](NapiValue &namedVal){ return namedVal.ToByteArray(val); });
}

bool NapiValue::GetPropString(const std::string name, std::string &val)
{
    return GetPropTyped(name, [&val](NapiValue &namedVal){ return namedVal.ToString(val); });
}

bool NapiValue::GetPropNapiArray(const std::string name, std::vector<NapiValue> &val) {
    return GetPropTyped(name, [&val](NapiValue &namedVal){ return namedVal.ToNapiArray(val); });
}

bool NapiValue::SetProp(const std::string name, NapiValue &napiValue)
{
    if (GetObject() == nullptr) {
        DEBUG_ERR("Get obejct failed");
        return false;
    }
    if (!napiValue.isValid()) {
        return false;
    }
    return (napi_set_named_property(env_, val_, name.c_str(), napiValue.val_) == napi_ok);
}

bool NapiValue::SetPropTyped(const std::string name, std::function<bool(NapiValue &)> call)
{
    if (GetObject() == nullptr) {
        DEBUG_ERR("Get obejct failed");
        return false;
    }
    NapiValue nVal(env_);
    if (!call(nVal)) {
        DEBUG_ERR("Create napi failed");
        return false;
    }
    return SetProp(name, nVal);
}

bool NapiValue::SetPropInt32(const std::string name, int32_t val)
{
    return SetPropTyped(name, [&val](NapiValue &nVal){ return nVal.FromInt32(val); });
}

bool NapiValue::SetPropUInt32(const std::string name, uint32_t val)
{
    return SetPropTyped(name, [&val](NapiValue &nVal){ return nVal.FromUInt32(val); });
}

bool NapiValue::SetPropFloat(const std::string name, float val)
{
    return SetPropTyped(name, [&val](NapiValue &nVal){ return nVal.FromFloat(val); });
}

bool NapiValue::SetPropDouble(const std::string name, double val)
{
    return SetPropTyped(name, [&val](NapiValue &nVal){ return nVal.FromDouble(val); });
}

bool NapiValue::SetPropByteArray(const std::string name, std::vector<uint8_t> val)
{
    return SetPropTyped(name, [&val](NapiValue &nVal){ return nVal.FromByteArray(val); });
}

bool NapiValue::SetPropByteArray(const std::string name, RawVectorData *data, size_t size)
{
    return SetPropTyped(name, [&data, &size](NapiValue &nVal){ return nVal.FromByteArray(data, size); });
}

bool NapiValue::SetPropString(const std::string name, std::string val)
{
    return SetPropTyped(name, [&val](NapiValue &nVal){ return nVal.FromString(val); });
}

bool NapiValue::SetPropNapiArray(const std::string name, std::vector<NapiValue> &val)
{
    return SetPropTyped(name, [&val](NapiValue &nVal){ return nVal.FromNapiArray(val); });
}

bool NapiInfo::init() {
    auto wantCount = count_;
    args_.resize(count_);
    auto status = napi_get_cb_info(env_, info_, &count_, args_.data(), &thisVal_, nullptr);
    if (status != napi_ok) {
        DEBUG_ERR("NapiInfo::init failed with %{public}d", status);
        return false;
    }
    if (count_ != wantCount) {
        DEBUG_ERR("NapiInfo::init want %{public}d get count %{public}d", wantCount, count_);
        return false;
    }
    return true;
}

}

}