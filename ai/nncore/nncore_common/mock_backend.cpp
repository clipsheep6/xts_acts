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
#include "mock_backend.h"
namespace OHOS::NeuralNetworkCore {

std::shared_ptr<Backend> RegisterBackendFirst()
{
    std::shared_ptr<MockBackend> mockBackend = std::make_shared<MockBackend>("backendFirst");
    if (mockBackend == nullptr) {
        return nullptr;
    }
    mockBackend->SetDeviceEnableFp16(false);
    std::shared_ptr<Backend> backend = std::dynamic_cast<std::shared_ptr<Backend>>(mockBackend);
    if (backend == nullptr) {
        return nullptr;
    }
    return backend;
}

std::shared_ptr<Backend> RegisterBackendSecond()
{
    std::shared_ptr<MockBackend> mockBackend = std::make_shared<MockBackend>("backendSecond");
    if (mockBackend == nullptr) {
        return nullptr;
    }
    mockBackend->SetDeviceEnableFp16(true);
    std::shared_ptr<Backend> backend = std::dynamic_cast<std::shared_ptr<Backend>>(mockBackend);
    if (backend == nullptr) {
        return nullptr;
    }
    return backend;
}

MockBackend::MockBackend(std::string backendName)
{
    m_backendName = backendName;
    m_device = std::make_shared<MockDevice>();
}
}
