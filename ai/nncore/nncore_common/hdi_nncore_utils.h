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

#ifndef HDI_NNCORE_UTILS_H
#define HDI_NNCORE_UTILS_H

#include <string>
#include "gtest/gtest.h"

#include "../nnrt/hdi/v2_0/common/hdi_nnrt_test_utils.h"
#include "interfaces/kits/c/neural_network_core.h"


namespace OHOS::NeuralNetworkCore {
void RegisterBackend();
void TestGetBackendNum(bool isNull = false);
void TestGetBackendName(char** backendName, bool isNull = false);
void TestConstructCompilationWithNNModel(OH_NNCore_Compilation** compilation);
void SetCompilationBackendName(OH_NNCore_Compilation** compilation);
void TestCreateCompilationOptions(OH_NNCore_CompilationOptions** options);
void TestSetCompilationPriority(OH_NNBackend_Priority priority);
void TestSetCompilationPerformanceMode(OH_NNBackend_PerformanceMode performanceMode);
void TestSetCompilationEnableFloat16(bool enableFloat16, bool isSupport);
void TestSetCompilationOptions(OH_NNCore_CompilationOptions **option);
void TestBuildCompiled(OH_NNCore_Compilation** compilation, OH_NNCore_Compiled** compiled);
void TestConstructTensorDesc(OH_NNCore_TensorDesc** tensorDesc);
void TestExecutor(OH_NNCore_Executor** executor);
} // namespace OHOS::NeuralNetworkCore

#endif // HDI_NNCORE_UTILS_H