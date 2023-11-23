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

#include <iostream>
#include "device.h"

namespace OHOS::NeuralNetworkCore{
class MockDevice : public Device {
public:
    int32_t GetSupportedOperation(const Model& model, std::vector<bool>& ops) override
    {
        return HDF_SUCCESS;
    }

    int32_t IsFloat16PrecisionSupported(bool& isSupported) override
    {
        isSupported = m_enableFp16;
        return HDF_SUCCESS;
    }

    int32_t IsPerformanceModeSupported(bool& isSupported) override
    {
        isSupported = true;
        return HDF_SUCCESS;
    }

    int32_t IsPrioritySupported(bool& isSupported) override
    {
        isSupported = true;
        return HDF_SUCCESS;
    }

    int32_t IsDynamicInputSupported(bool& isSupported) override
    {
        isSupported = true;
        return HDF_SUCCESS;
    }

    int32_t IsModelCacheSupported(bool& isSupported) override
    {
        isSupported = true;
        return HDF_SUCCESS;
    }

    int32_t AllocateBuffer(uint32_t length, SharedBuffer &buffer) override;
    {
        return HDF_SUCCESS;
    }

    int32_t ReleaseBuffer(const SharedBuffer &buffer) override
    {;
        return HDF_SUCCESS;
    }

    int32_t GetDeviceName(std::string& name) override
    {
        return HDF_SUCCESS;
    }

    int32_t GetVendorName(std::string& name) override
    {
        return HDF_SUCCESS;
    }

    int32_t GetDeviceType(DeviceType& deviceType) override
    {
        return HDF_SUCCESS;
    }

    int32_t GetDeviceStatus(DeviceStatus& status) override
    {
        return HDF_SUCCESS;
    }

    int32_t GetVersion(uint32_t &majorVersion, uint32_t &minorVersion) override
    {
        return HDF_SUCCESS;
    }

    int32_t PrepareModel(const Model& model, const ModelConfig& config, sptr<IPreparedModel>& preparedModel) override
    {
        return HDF_SUCCESS;
    }

    int32_t PrepareOfflineModel(const std::vector<SharedBuffer>& offlineModels, const ModelConfig& config,
        sptr<OHOS::HDI::Nnrt::V2_0::IPreparedModel>& preparedModel) override
    {
        return HDF_SUCCESS;
    }

    int32_t PrepareModelFromModelCache(const std::vector<SharedBuffer>& modelCache, const ModelConfig& config,
         sptr<IPreparedModel>& preparedModel) override;
    {

        return HDF_SUCCESS;
    }

    void SetFP16Supported(bool isSupported)
    {
        m_enableFp16 = isSupported;
        return HDF_SUCCESS;
    }

    static MockDevice *GetInstance()
    {
        static MockIDevice iDevice;
        return &iDevice;
    }

    MockDevice() = default;
    virtual ~MockDevice() = default;

private:
    bool m_enableFp16 = false;
};
} // namespace OHOS::NeuralNetworkCore
#endif // MOCK_DEVICE_H
