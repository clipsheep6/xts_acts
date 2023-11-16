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
namespace OHOS::NeuralNetworkCore {
class MockBackend : public Backend {
public:
    MockBackend(std::string backendName);
    virtual ~Backend() = default;

    OH_NNCore_ReturnCode GetBackendName(std::string& backendName) override;
    OH_NNCore_ReturnCode GetBackendStatus(OH_NNCore_BackendStatus& status) override;

    Compiler* CreateCompiler() override;
    OH_NNCore_ReturnCode DestroyCompiler(Compiler* compiler) override;

    Compiled* CreateCompiled(const std::string& filePath) override;
    Compiled* CreateCompiled(const void* buffer, size_t modelSize) override;
    OH_NNCore_ReturnCode DestroyCompiled(Compiled* compiled) override;

    OH_NNCore_ReturnCode DestroyExecutor(Executor* executor) override;

    TensorDesc* CreateTensorDesc() override;
    OH_NNCore_ReturnCode DestroyTensorDesc(TensorDesc* tensorDesc) override;
private:
    std::string m_backendName;
};
} // namespace OHOS::NeuralNetworkCore
#endif // MOCK_BACKEND_H