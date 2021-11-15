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

#include "dpms_st_service_distributed_third_b.h"
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
int DpmsStServiceDistributedThirdB::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
int hapRet = -1;
std::map<std::string, DpmsStServiceDistributedThirdB::func> DpmsStServiceDistributedThirdB::funcMap_ = {
    {"StopSelfAbility", &DpmsStServiceDistributedThirdB::StopSelfAbility},
    {"VerifyPermissionFromRemote", &DpmsStServiceDistributedThirdB::VerifyPermissionFromRemote},
    {"VerifySelfPermissionFromRemote", &DpmsStServiceDistributedThirdB::VerifySelfPermissionFromRemote},
    {"RequestPermissionsFromRemote", &DpmsStServiceDistributedThirdB::RequestPermissionsFromRemote},
    {"CanRequestPermissionFromRemote", &DpmsStServiceDistributedThirdB::CanRequestPermissionFromRemote},
};

DpmsStServiceDistributedThirdB::~DpmsStServiceDistributedThirdB()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

class DpmsStServiceDistributedThirdB::TestCallback : public OnRequestPermissionsResultStub {
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
            int32_t failResult = -2;
            result = failResult;
        }
        APP_LOGI("DpmsStServiceDistributedThirdB  TestCallback :OnResult  is run!!!");
    }

    void OnCancel(const std::string nodeId, std::vector<std::string> permissions)
    {
        APP_LOGI("DpmsStServiceDistributedThirdB  TestCallback :OnCancel  is run!!!");
    }
    void OnTimeOut(const std::string nodeId, std::vector<std::string> permissions)
    {
        result = -2;
        APP_LOGI(
            "DpmsStServiceDistributedThirdB  TestCallback :OnTimeOut  is run!!! nodeId = %{public}s", nodeId.c_str());
    }
};

std::vector<std::string> DpmsStServiceDistributedThirdB::Split(std::string str, const std::string &token)
{
    APP_LOGI("DpmsStServiceDistributedThirdB::Split");

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

void DpmsStServiceDistributedThirdB::StopSelfAbility()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::StopSelfAbility");

    TerminateAbility();
}

string DpmsStServiceDistributedThirdB::GetAppIdInfo(int32_t pid, int32_t uid)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid);
}

void DpmsStServiceDistributedThirdB::VerifyPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::VerifyPermissionFromRemote");

    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    std::string appInfo = GetAppIdInfo(pid, uid);

    APP_LOGI("DpmsStServiceDistributedThirdB::VerifyPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());

    int result = DistributedPermissionKit::VerifyPermissionFromRemote(permission, nodeId, appInfo);

    APP_LOGI("DpmsStServiceDistributedThirdB::VerifyPermissionFromRemote  result = %{public}d, ", result);

    PublishEvent(RESP_EVENT_NAME_THIRD_B, result, "VerifyPermissionFromRemote");
}

void DpmsStServiceDistributedThirdB::VerifySelfPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::VerifySelfPermissionFromRemote");

    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdB::VerifySelfPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());

    int result = DistributedPermissionKit::VerifySelfPermissionFromRemote(permission, nodeId);

    APP_LOGI("DpmsStServiceDistributedThirdB::VerifySelfPermissionFromRemote  result = %{public}d, ", result);

    PublishEvent(RESP_EVENT_NAME_THIRD_B, result, "VerifySelfPermissionFromRemote");
}

void DpmsStServiceDistributedThirdB::CanRequestPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::CanRequestPermissionFromRemote");
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdB::CanRequestPermissionFromRemote  pid = %{public}d, uid = "
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
    APP_LOGI("DpmsStServiceDistributedThirdB::CanRequestPermissionFromRemote result = %{public}d, ", result);
    PublishEvent(RESP_EVENT_NAME_THIRD_B, result, "CanRequestPermissionFromRemote");
}

void DpmsStServiceDistributedThirdB::RequestPermissionsFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::RequestPermissionsFromRemote");
    int32_t reasonResId = reasonResId_;
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    std::string bundleName = bundleName_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    OHOS::sptr<DpmsStServiceDistributedThirdB::TestCallback> callback(
        new DpmsStServiceDistributedThirdB::TestCallback());

    APP_LOGI("DpmsStServiceDistributedThirdB::RequestPermissionsFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s, bundleName=%{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str(),
        bundleName.c_str());

    std::vector<std::string> permissions;
    permissions.push_back(permission);
    DistributedPermissionKit::RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
    sleep(1);

    APP_LOGI("DpmsStServiceDistributedThirdB::RequestPermissionsFromRemote  callback->result = %{public}d, ",
        callback->result);
    PublishEvent(RESP_EVENT_NAME_THIRD_B, callback->result, "RequestPermissionsFromRemote");
}

void DpmsStServiceDistributedThirdB::OnStart(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnStart");

    GetWantInfo(want);
    Ability::OnStart(want);

    PublishEvent(RESP_EVENT_NAME_THIRD_B, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
    SubscribeEvent();
}
void DpmsStServiceDistributedThirdB::OnCommand(const AAFwk::Want &want, bool restart, int startId)
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnCommand");

    Ability::OnCommand(want, restart, startId);
}
void DpmsStServiceDistributedThirdB::OnNewWant(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnNewWant");

    GetWantInfo(want);
    Ability::OnNewWant(want);
}
void DpmsStServiceDistributedThirdB::OnStop()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnStop");

    Ability::OnStop();
    PublishEvent(RESP_EVENT_NAME_THIRD_B, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
    Clear();
}
void DpmsStServiceDistributedThirdB::OnActive()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnActive");

    Ability::OnActive();
}
void DpmsStServiceDistributedThirdB::OnInactive()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnInactive");

    Ability::OnInactive();
}
void DpmsStServiceDistributedThirdB::OnBackground()
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnBackground");

    Ability::OnBackground();
}

void DpmsStServiceDistributedThirdB::Clear()
{
    permission_ = "";
    nodeId_ = "";
    bundleName_ = "";
    reasonResId_ = 1;
}
void DpmsStServiceDistributedThirdB::GetWantInfo(const Want &want)
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
bool DpmsStServiceDistributedThirdB::PublishEvent(
    const std::string &eventName, const int &code, const std::string &data)
{
    APP_LOGI("DpmsStServiceDistributedThirdB::PublishEvent eventName = %{public}s, code = %{public}d, data = "
             "%{public}s",
        eventName.c_str(),
        code,
        data.c_str());

    Want want;
    want.SetAction(eventName);
    want.SetParam("ret", hapRet);

    CommonEventData commonData;
    commonData.SetWant(want);
    commonData.SetCode(code);
    commonData.SetData(data);
    return CommonEventManager::PublishCommonEvent(commonData);
}
sptr<IRemoteObject> DpmsStServiceDistributedThirdB::OnConnect(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnConnect");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_B, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void DpmsStServiceDistributedThirdB::OnDisconnect(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdB::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_B, AbilityLifecycleExecutor::LifecycleState::BACKGROUND, "OnDisconnect");
}
bool DpmsStServiceDistributedThirdB::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(REQ_EVENT_NAME_THIRD_B);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void DpmsStServiceDistributedThirdB::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI("DpmsStServiceDistributedThirdB::OnReceiveEvent eventName = %{public}s, code = %{public}d, data "
             "= %{public}s",
        eventName.c_str(),
        data.GetCode(),
        dataContent.c_str());
    if (REQ_EVENT_NAME_THIRD_B.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI("DpmsStServiceDistributedThirdB::OnReceiveEvent eventName = %{public}s, code = "
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
REGISTER_AA(DpmsStServiceDistributedThirdB);
}  // namespace AppExecFwk
}  // namespace OHOS