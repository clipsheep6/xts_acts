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

#include <iostream>

#include "mock_device.h"
#include "frameworks/native/nnbackend.h"
namespace OHOS::NeuralNetworkCore {
class MockBackend : public NeuralNetworkBackend::NNBackend {
public:
    MockBackend(std::string backendName) : 
        NeuralNetworkBackend::NNBackend(static_cast<OHOS::NeuralNetworkRuntime::Device>(MockDevice()), backendName) {}
    virtual ~MockBackend() = default; 
public:
    void SetDeviceEnableFp16(bool isSupported);
};
} // namespace OHOS::NeuralNetworkCore
#endif // MOCK_BACKEND_H