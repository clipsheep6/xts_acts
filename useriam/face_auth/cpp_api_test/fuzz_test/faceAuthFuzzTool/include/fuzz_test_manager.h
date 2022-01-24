/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
#ifndef FUZZTESTMANAGER_H
#define FUZZTESTMANAGER_H

#include <chrono>
#include <memory>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>
#include "../include/fuzz_config_parser.h"
#include "nlohmann/json.hpp"
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
class FuzzTestManager {
public:
    typedef std::shared_ptr<FuzzTestManager> Ptr;
    ~FuzzTestManager()
    {}
    static Ptr GetInstance()
    {
        if (instance_ == nullptr) {
            instance_ = std::make_shared<FuzzTestManager>();
        }
        return instance_;
    }
    void StartFuzzTest();
    void GetFuzzConfig();
    FuzzTestManager();
    FuzzTestManager(FuzzTestManager &) = delete;

private:
    void SetJsonFunction(std::string);
    void SetCycle(uint16_t cycle);
    FuzzTestManager &operator=(const FuzzTestManager &) = delete;
    static Ptr instance_;
    uint16_t cycle_;
    OHOS::FuzzTestData configData_;
    std::unordered_map<std::string, int> remainderMap_;
    std::unordered_map<std::string, std::function<void()>> callFunctionMap_;
    void fuzzTestManagerTest();
    void DistributedFaceAuthKitFuzzTest();
};
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
#endif