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
#define private public
#define protected public

#include "fuzz_test_manager.h"
#include <unistd.h>
#include <csignal>
#include "faceauth_log_wrapper.h"
#include "face_auth_innerkit.h"
#include "getparam.h"
#include "on_faceauth_stub.h"

#undef private
#undef protected
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
std::shared_ptr<FuzzTestManager> FuzzTestManager::instance_ = nullptr;
const std::string distributedFaceAuthKitName_ = "DistributedFaceAuthKit";
const std::string distributedFaceAuthManager_ = "DistributedFaceAuthManager";

void FuzzTestManager::fuzzTestManagerTest()
{
    callFunctionMap_["DistributedFaceAuthKitFuzzTestMethodintstring"] = []() {
        std::cout << "DistributedFaceAuthKitFuzzTestMethodintstring" << std::endl;
    };
}

void FuzzTestManager::DistributedFaceAuthKitFuzzTest()
{
    callFunctionMap_[distributedFaceAuthKitName_ + "Authenticate"] = []() {
        FaceAuthInnerKit::Authenticate(GetBiomerticAuthParam(), GetOnRequestFaceAuthResultCallBack());
    };
    callFunctionMap_[distributedFaceAuthKitName_ + "CancelAuth"] = []() {
        FaceAuthInnerKit::CancelAuth(GetS32Param(), GetOnRequestFaceAuthResultCallBack());
    };
    callFunctionMap_[distributedFaceAuthKitName_ + "Init"] = []() { FaceAuthInnerKit::Init(); };
    callFunctionMap_[distributedFaceAuthKitName_ + "Release"] = []() { FaceAuthInnerKit::Release(); };
    callFunctionMap_[distributedFaceAuthKitName_ + "ResetTimeout"] = []() { FaceAuthInnerKit::ResetTimeout(); };
    callFunctionMap_[distributedFaceAuthKitName_ + "GetRemainingTime"] = []() { FaceAuthInnerKit::GetRemainingTime(); };
    callFunctionMap_[distributedFaceAuthKitName_ + "GetRemainingNum"] = []() { FaceAuthInnerKit::GetRemainingNum(); };
    callFunctionMap_[distributedFaceAuthKitName_ + "Enroll"] = []() {
        FaceAuthInnerKit::Enroll(GetBiomerticEnrollParam(), GetOnRequestFaceAuthResultCallBack());
    };
    callFunctionMap_[distributedFaceAuthKitName_ + "CancelEnrollment"] = []() {
        FaceAuthInnerKit::CancelEnrollment(GetS32Param(), GetOnRequestFaceAuthResultCallBack());
    };
    callFunctionMap_[distributedFaceAuthKitName_ + "PreEnroll"] = []() { FaceAuthInnerKit::PreEnroll(); };
    callFunctionMap_[distributedFaceAuthKitName_ + "PostEnroll"] = []() { FaceAuthInnerKit::PostEnroll(); };
    callFunctionMap_[distributedFaceAuthKitName_ + "Remove"] = []() {
        FaceAuthInnerKit::Remove(GetBiomerticRemoveParam(), GetOnRequestFaceAuthResultCallBack());
    };
    callFunctionMap_[distributedFaceAuthKitName_ + "GetEnrolledFaceIDs"] = []() {
        FaceAuthInnerKit::GetEnrolledFaceIDs(GetS32Param());
    };
    callFunctionMap_[distributedFaceAuthKitName_ + "GetAngleDim"] = []() { FaceAuthInnerKit::GetAngleDim(); };
}

FuzzTestManager::FuzzTestManager()
{
    fuzzTestManagerTest();
    DistributedFaceAuthKitFuzzTest();
}

void FuzzTestManager::SetJsonFunction(std::string functionName)
{
    remainderMap_.emplace(functionName, cycle_);
}

void FuzzTestManager::SetCycle(uint16_t cycle)
{
    cycle_ = cycle;
    for_each(remainderMap_.begin(), remainderMap_.end(), [cycle](std::unordered_map<std::string, int>::reference temp) {
        temp.second = cycle;
    });
}

int GetRandomInt(int minNum, int maxNum)
{
    return GetU16Param() % (maxNum - minNum + 1) + minNum;
}

void Action(int a)
{
    std::cout << "Interrupt signal (" << a << ") received.\n";
}

void FuzzTestManager::GetFuzzConfig()
{
    OHOS::FuzzConfigParser jsonParser;
    std::cout << "parseFromFile start" << std::endl;
    jsonParser.ParseFromFile4FuzzTest("/data/FaceAuthFuzz/config.json", configData_);
    std::cout << "flag :" << configData_.mainLoopFlag << std::endl;
}

void FuzzTestManager::StartFuzzTest()
{
    std::cout << __func__ << std::endl;
    if (configData_.methodVec.size() == 0) {
        GetFuzzConfig();
        if (configData_.methodVec.size() == 0) {
            return;
        }
    }
    for_each(configData_.methodVec.begin(), configData_.methodVec.end(), [this](std::vector<std::string>::reference s) {
        SetJsonFunction(s);
    });
    SetCycle(configData_.mainLoopFlag);
    std::vector<std::string> index;
    std::unordered_map<std::string, int>::iterator it = remainderMap_.begin();
    while (it != remainderMap_.end()) {
        if (it->second <= 0) {
            it = remainderMap_.erase(it);
        } else {
            index.push_back(it->first);
            ++it;
        }
    }
    std::cout << remainderMap_.size() << "--------fuzz test start--------" << callFunctionMap_.size() << std::endl;
    for (; remainderMap_.size() > 0;) {
        std::string functionName;
        int offset = GetRandomInt(0, index.size() - 1);
        functionName = index[offset];
        if (callFunctionMap_.find(functionName) != callFunctionMap_.end()) {
            std::cout << "call function : " << functionName << std::endl;
            callFunctionMap_[functionName]();
            std::cout << "function end  :" << functionName << std::endl;
        } else {
            std::cout << "can't find function : " << functionName << std::endl;
        }
        remainderMap_[functionName]--;
        if (remainderMap_[functionName] <= 0) {
            remainderMap_.erase(functionName);
            index.erase(index.begin() + offset);
        };
    }
    std::cout << remainderMap_.size() << "--------fuzz test end--------" << std::endl;
}
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS