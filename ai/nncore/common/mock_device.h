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
#ifndef MOCK_DEVICE_H
#define MOCK_DEVICE_H

#include <v2_0/innrt_device.h>
#include <v2_0/innrt_device.h>
#include <v2_0/iprepared_model.h>

namespace OHOS::NeuralNetworkCore{
namespace V2_0 = OHOS::HDI::Nnrt::V2_0;
class MockDevice : public V2_0::INnrtDevice {
public:
    int32_t GetSupportedOperation(const V2_0::Model& model, std::vector<bool>& ops)
    {
        return 0;
    }

    int32_t IsFloat16PrecisionSupported(bool& isSupported)
    {
        isSupported = m_enableFp16;
        return 0;
    }

    int32_t IsPerformanceModeSupported(bool& isSupported)
    {
        isSupported = true;
        return 0;
    }

    int32_t IsPrioritySupported(bool& isSupported)
    {
        isSupported = true;
        return 0;
    }

    int32_t IsDynamicInputSupported(bool& isSupported)
    {
        isSupported = true;
        return 0;
    }

    int32_t IsModelCacheSupported(bool& isSupported)
    {
        isSupported = true;
        return 0;
    }

    int32_t AllocateBuffer(uint32_t length, V2_0::SharedBuffer &buffer)
    {
        return 0;
    }

    int32_t ReleaseBuffer(const V2_0::SharedBuffer &buffer)
    {;
        return 0;
    }

    int32_t GetDeviceName(std::string& name)
    {
        name = "Device-CPU";
        return 0;
    }

    int32_t GetVendorName(std::string& name)
    {
        name = "TestVendor";
        return 0;
    }

    int32_t GetDeviceType(V2_0::DeviceType& deviceType)
    {
        return 0;
    }

    int32_t GetDeviceStatus(V2_0::DeviceStatus& status)
    {
        return 0;
    }

    int32_t GetVersion(uint32_t &majorVersion, uint32_t &minorVersion)
    {
        return 0;
    }

    int32_t PrepareModel(const V2_0::Model& model, const V2_0::ModelConfig& config, sptr<V2_0::IPreparedModel>& preparedModel)
    {
        return 0;
    }

    int32_t PrepareOfflineModel(const std::vector<V2_0::SharedBuffer>& offlineModels, const V2_0::ModelConfig& config,
        sptr<V2_0::IPreparedModel>& preparedModel)
    {
        return 0;
    }

    int32_t PrepareModelFromModelCache(const std::vector<V2_0::SharedBuffer>& modelCache, const V2_0::ModelConfig& config,
         sptr<V2_0::IPreparedModel>& preparedModel)
    {
        return 0;
    }

    void SetFP16Supported(bool isSupported)
    {
        m_enableFp16 = isSupported;
    }

    MockDevice() = default;
    virtual ~MockDevice() = default;

private:
    bool m_enableFp16 = false;
};
} // namespace OHOS::NeuralNetworkCore
#endif // MOCK_DEVICE_H
