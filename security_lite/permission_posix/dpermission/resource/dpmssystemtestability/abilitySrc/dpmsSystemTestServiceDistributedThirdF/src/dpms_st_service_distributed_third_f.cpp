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

#include "dpms_st_service_distributed_third_f.h"
#include "on_request_permissions_result_stub.h"
#include "app_log_wrapper.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "distributed_permission_kit.h"
#include "ipc_skeleton.h"

using namespace OHOS::EventFwk;
using namespace OHOS::Security::Permission;
using MAP_STR_STR = std::map<std::string, std::string>;
namespace OHOS {
namespace AppExecFwk {
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
int DpmsStServiceDistributedThirdF::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
int hapRet = -1;
constexpr static double PERFORMANCE_MAX = 1.5;
const int32_t TEST_COUNT = 1000;
double avgTime = 0.0;
int32_t avgFlag = -1;
std::map<std::string, DpmsStServiceDistributedThirdF::func> DpmsStServiceDistributedThirdF::funcMap_ = {
    {"StopSelfAbility", &DpmsStServiceDistributedThirdF::StopSelfAbility},
    {"VerifyPermissionFromRemote", &DpmsStServiceDistributedThirdF::VerifyPermissionFromRemote},
    {"VerifySelfPermissionFromRemote", &DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemote},
    {"RequestPermissionsFromRemote", &DpmsStServiceDistributedThirdF::RequestPermissionsFromRemote},
    {"CanRequestPermissionFromRemote", &DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemote},
    {"VerifyPermissionFromRemotePerformance", &DpmsStServiceDistributedThirdF::VerifyPermissionFromRemotePerformance},
    {"VerifySelfPermissionFromRemotePerformance",
        &DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemotePerformance},
    {"CanRequestPermissionFromRemotePerformance",
        &DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemotePerformance},
    {"RequestPermissionsFromRemotePerformance",
        &DpmsStServiceDistributedThirdF::RequestPermissionsFromRemotePerformance},
};
DpmsStServiceDistributedThirdF::~DpmsStServiceDistributedThirdF()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

class DpmsStServiceDistributedThirdF::TestCallback : public OnRequestPermissionsResultStub {
public:
    TestCallback() = default;
    virtual ~TestCallback() = default;

    int32_t result = -1;

    void OnResult(const std::string nodeId, std::vector<std::string> permissions, std::vector<int32_t> grantResults)
    {
        // Default only one permission, so only one grantResult
        if (grantResults[0] == Constant::PERMISSION_GRANTED) {
            result = 0;
        } else {
            int32_t resultNoGrant = 1;
            result = resultNoGrant;
        }
        APP_LOGI("DpmsStServiceDistributedThirdF  TestCallback :OnResult  is run!!!");
    }

    void OnCancel(const std::string nodeId, std::vector<std::string> permissions)
    {
        APP_LOGI("DpmsStServiceDistributedThirdF  TestCallback :OnCancel  is run!!!");
    }
    void OnTimeOut(const std::string nodeId, std::vector<std::string> permissions)
    {
        int32_t failResult = -2;
        result = failResult;
        APP_LOGI(
            "DpmsStServiceDistributedThirdF  TestCallback :OnTimeOut  is run!!! nodeId = %{public}s", nodeId.c_str());
    }
};

std::vector<std::string> DpmsStServiceDistributedThirdF::Split(std::string str, const std::string &token)
{
    APP_LOGI("DpmsStServiceDistributedThirdF::Split");

    std::vector<std::string> splitString;
    while (str.size()) {
        size_t index = str.find(token);
        if (index != std::string::npos) {
            splitString.push_back(str.substr(0, index));
            str = str.substr(index + token.size());
            if (str.size() == 0) {
                splitString.push_back(str);
            }
        } else {
            splitString.push_back(str);
            str = "";
        }
    }
    return splitString;
}

void DpmsStServiceDistributedThirdF::StopSelfAbility()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::StopSelfAbility");

    TerminateAbility();
}

string DpmsStServiceDistributedThirdF::GetAppIdInfo(int32_t pid, int32_t uid)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid);
}

void DpmsStServiceDistributedThirdF::VerifyPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::VerifyPermissionFromRemote");

    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    std::string appInfo = GetAppIdInfo(pid, uid);

    APP_LOGI("DpmsStServiceDistributedThirdF::VerifyPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());

    int result = DistributedPermissionKit::VerifyPermissionFromRemote(permission, nodeId, appInfo);

    APP_LOGI("DpmsStServiceDistributedThirdF::VerifyPermissionFromRemote  result = %{public}d, ", result);

    PublishEvent(RESP_EVENT_NAME_THIRD_F, result, "VerifyPermissionFromRemote");
}

void DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemote");

    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());

    int result = DistributedPermissionKit::VerifySelfPermissionFromRemote(permission, nodeId);

    APP_LOGI("DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemote  result = %{public}d, ", result);

    PublishEvent(RESP_EVENT_NAME_THIRD_F, result, "VerifySelfPermissionFromRemote");
}

void DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemote");
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());
    bool res = DistributedPermissionKit::CanRequestPermissionFromRemote(permission, nodeId);
    int32_t result = 0;
    if (res) {
        result = 1;
    } else {
        result = 0;
    }
    APP_LOGI("DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemote result = %{public}d, ", result);
    PublishEvent(RESP_EVENT_NAME_THIRD_F, result, "CanRequestPermissionFromRemote");
}

void DpmsStServiceDistributedThirdF::RequestPermissionsFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::RequestPermissionsFromRemote");
    int32_t reasonResId = reasonResId_;
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    std::string bundleName = bundleName_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    OHOS::sptr<DpmsStServiceDistributedThirdF::TestCallback> callback(
        new DpmsStServiceDistributedThirdF::TestCallback());
    APP_LOGI("DpmsStServiceDistributedThirdF::RequestPermissionsFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s, bundleName=%{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str(),
        bundleName.c_str());
    std::vector<std::string> permissions;
    permissions.push_back(permission);
    DistributedPermissionKit::RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
    int32_t sleepTimeOut = 61;
    sleep(sleepTimeOut);

    APP_LOGI("DpmsStServiceDistributedThirdF::RequestPermissionsFromRemote  callback->result = %{public}d, ",
        callback->result);
    PublishEvent(RESP_EVENT_NAME_THIRD_F, callback->result, "RequestPermissionsFromRemote");
}
void DpmsStServiceDistributedThirdF::VerifyPermissionFromRemotePerformance()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::VerifyPermissionFromRemotePerformance");
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    std::string appInfo = GetAppIdInfo(pid, uid);

    APP_LOGI("DpmsStServiceDistributedThirdF::VerifyPermissionFromRemotePerformance  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::VerifyPermissionFromRemote(permission, nodeId, appInfo);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    avgTime = timeAvg;
    avgFlag = 0;
    APP_LOGI("CanRequestPermissionFromRemotePerformance untime fp_ms avg = %{public}f, ", timeAvg);
    int32_t result = 0;
    if (timeAvg < PERFORMANCE_MAX) {
        result = 1;
    } else {
        result = 0;
    }
    APP_LOGI("DpmsStServiceDistributedThirdF::VerifyPermissionFromRemotePerformance  result = %{public}d, ", result);
    PublishEvent(RESP_EVENT_NAME_THIRD_F, result, "VerifyPermissionFromRemotePerformance");
}

void DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemotePerformance()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemotePerformance");

    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemotePerformance  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::VerifySelfPermissionFromRemote(permission, nodeId);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    avgTime = timeAvg;
    avgFlag = 0;
    APP_LOGI("VerifySelfPermissionFromRemotePerformance untime fp_ms avg = %{public}f, ", timeAvg);
    int32_t result = 0;
    if (timeAvg < PERFORMANCE_MAX) {
        result = 1;
    } else {
        result = 0;
    }
    APP_LOGI(
        "DpmsStServiceDistributedThirdF::VerifySelfPermissionFromRemotePerformance  result = %{public}d, ", result);
    PublishEvent(RESP_EVENT_NAME_THIRD_F, result, "VerifySelfPermissionFromRemotePerformance");
}

void DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemotePerformance()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemotePerformance");
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemotePerformance  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::CanRequestPermissionFromRemote(permission, nodeId);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    avgTime = timeAvg;
    avgFlag = 0;
    APP_LOGI("CanRequestPermissionFromRemotePerformance untime fp_ms avg = %{public}f, ", timeAvg);
    int32_t result = 0;
    if (timeAvg < PERFORMANCE_MAX) {
        result = 1;
    } else {
        result = 0;
    }
    APP_LOGI("DpmsStServiceDistributedThirdF::CanRequestPermissionFromRemotePerformance result = %{public}d, ", result);
    PublishEvent(RESP_EVENT_NAME_THIRD_F, result, "CanRequestPermissionFromRemotePerformance");
}

void DpmsStServiceDistributedThirdF::RequestPermissionsFromRemotePerformance()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::RequestPermissionsFromRemotePerformance");
    int32_t reasonResId = reasonResId_;
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    std::string bundleName = bundleName_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    OHOS::sptr<DpmsStServiceDistributedThirdF::TestCallback> callback(
        new DpmsStServiceDistributedThirdF::TestCallback());

    APP_LOGI("DpmsStServiceDistributedThirdF::RequestPermissionsFromRemotePerformance  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s, bundleName=%{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str(),
        bundleName.c_str());

    std::vector<std::string> permissions;
    permissions.push_back(permission);
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    avgTime = timeAvg;
    avgFlag = 0;
    APP_LOGI("RequestPermissionsFromRemotePerformance untime fp_ms avg = %{public}f, ", timeAvg);
    int32_t result = 0;
    if (timeAvg < PERFORMANCE_MAX) {
        result = 1;
    } else {
        result = 0;
    }
    PublishEvent(RESP_EVENT_NAME_THIRD_F, result, "RequestPermissionsFromRemotePerformance");
}
void DpmsStServiceDistributedThirdF::OnStart(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnStart");

    GetWantInfo(want);
    Ability::OnStart(want);

    PublishEvent(RESP_EVENT_NAME_THIRD_F, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
    SubscribeEvent();
}
void DpmsStServiceDistributedThirdF::OnCommand(const AAFwk::Want &want, bool restart, int startId)
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnCommand");

    Ability::OnCommand(want, restart, startId);
}
void DpmsStServiceDistributedThirdF::OnNewWant(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnNewWant");

    GetWantInfo(want);
    Ability::OnNewWant(want);
}
void DpmsStServiceDistributedThirdF::OnStop()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnStop");

    Ability::OnStop();
    PublishEvent(RESP_EVENT_NAME_THIRD_F, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
    Clear();
}
void DpmsStServiceDistributedThirdF::OnActive()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnActive");

    Ability::OnActive();
}
void DpmsStServiceDistributedThirdF::OnInactive()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnInactive");

    Ability::OnInactive();
}
void DpmsStServiceDistributedThirdF::OnBackground()
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnBackground");

    Ability::OnBackground();
}

void DpmsStServiceDistributedThirdF::Clear()
{
    permission_ = "";
    nodeId_ = "";
    bundleName_ = "";
    reasonResId_ = 1;
}
void DpmsStServiceDistributedThirdF::GetWantInfo(const Want &want)
{
    Want mWant(want);
    permission_ = mWant.GetStringParam("permission");
    nodeId_ = mWant.GetStringParam("nodeId");
    bundleName_ = mWant.GetStringParam("bundleName");
    std::string temp_reasonResId = mWant.GetStringParam("reasonResId");
    if (temp_reasonResId == "-1") {
        reasonResId_ = -1;
    }
}
bool DpmsStServiceDistributedThirdF::PublishEvent(
    const std::string &eventName, const int &code, const std::string &data)
{
    APP_LOGI("DpmsStServiceDistributedThirdF::PublishEvent eventName = %{public}s, code = %{public}d, data = "
             "%{public}s",
        eventName.c_str(),
        code,
        data.c_str());

    Want want;
    want.SetAction(eventName);
    want.SetParam("ret", hapRet);
    want.SetParam("avgTime", avgTime);
    want.SetParam("avgFlag", avgFlag);
    CommonEventData commonData;
    commonData.SetWant(want);
    commonData.SetCode(code);
    commonData.SetData(data);
    return CommonEventManager::PublishCommonEvent(commonData);
}
sptr<IRemoteObject> DpmsStServiceDistributedThirdF::OnConnect(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnConnect");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_F, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void DpmsStServiceDistributedThirdF::OnDisconnect(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdF::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_F, AbilityLifecycleExecutor::LifecycleState::BACKGROUND, "OnDisconnect");
}
bool DpmsStServiceDistributedThirdF::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(REQ_EVENT_NAME_THIRD_F);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void DpmsStServiceDistributedThirdF::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI("DpmsStServiceDistributedThirdF::OnReceiveEvent eventName = %{public}s, code = %{public}d, data "
             "= %{public}s",
        eventName.c_str(),
        data.GetCode(),
        dataContent.c_str());
    if (REQ_EVENT_NAME_THIRD_F.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI("DpmsStServiceDistributedThirdF::OnReceiveEvent eventName = %{public}s, code = "
                     "%{public}d, data = %{public}s",
                eventName.c_str(),
                data.GetCode(),
                dataContent.c_str());
        } else {
            if (mainAbility_ != nullptr) {
                (mainAbility_->*funcMap_[dataContent])();
            }
        }
    }
}
REGISTER_AA(DpmsStServiceDistributedThirdF);
}  // namespace AppExecFwk
}  // namespace OHOS