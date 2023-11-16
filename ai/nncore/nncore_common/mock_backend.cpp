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

MockBackend::MockBackend(std::string backendName)
{
    m_backendName = backendName;
}

OH_NNCore_ReturnCode MockBackend::GetBackendName(std::string& backendName)
{
    backendName = m_backendName;
    return OH_NNCORE_SUCCESS;
}

OH_NNCore_ReturnCode MockBackend::GetBackendStatus(OH_NNCore_BackendStatus& status)
{
    status = OH_NNCORE_AVAILABLE;
    return OH_NNCORE_SUCCESS;
}

Compiler* MockBackend::CreateCompiler()
{
    return nullptr;
}

OH_NNCore_ReturnCode MockBackend::DestroyCompiler(Compiler* compiler)
{
    return OH_NNCORE_FAILED;
}

Compiled* MockBackend::CreateCompiled(const std::string& filePath)
{
    return nullptr;
}

Compiled* MockBackend::CreateCompiled(const void* buffer, size_t modelSize)
{
    return nullptr;
}

OH_NNCore_ReturnCode MockBackend::DestroyCompiled(Compiled* compiled)
{
    return OH_NNCORE_FAILED;
}

OH_NNCore_ReturnCode MockBackend::DestroyExecutor(Executor* executor)
{
    return OH_NNCORE_FAILED;
}

TensorDesc* MockBackend::CreateTensorDesc()
{
    return nullptr;
}

OH_NNCore_ReturnCode DestroyTensorDesc(TensorDesc* tensorDesc)
{
    return OH_NNCORE_FAILED;
}
}
