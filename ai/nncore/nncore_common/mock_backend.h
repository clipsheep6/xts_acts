/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
#ifndef MOCK_BACKEND_H
#define MOCK_BACKEND_H

#include "backend.h"
#include "mock_device.h"
namespace OHOS::NeuralNetworkCore {
class MockBackend : public NNBackend {
public:
    MockBackend(std::string backendName);
    virtual ~Backend() = default;

    OH_NNCore_ReturnCode GetBackendName(std::string& backendName)
    {
        if (m_backendName.empty()) {
            LOGE("Get backend name fail, backend name is empty");
            return OH_NNCORE_FAILED;
        }
        backendName = m_backendName;
        return OH_NNCORE_SUCCESS;
    }
public:
    void SetDeviceEnableFp16(bool isSupported)
    {
        if (m_device != nullptr) {
            m_device->SetFP16Supported(isSupported);
        }
    }
    std::shared_ptr<MockDevice> m_device {nullptr};
private:
    std::string m_backendName;
};
} // namespace OHOS::NeuralNetworkCore
#endif // MOCK_BACKEND_H