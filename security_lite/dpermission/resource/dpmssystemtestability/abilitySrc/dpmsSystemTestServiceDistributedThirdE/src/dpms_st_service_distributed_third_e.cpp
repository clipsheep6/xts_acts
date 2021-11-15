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

#include "dpms_st_service_distributed_third_e.h"
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
int DpmsStServiceDistributedThirdE::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
int hapRet = -1;
std::map<std::string, DpmsStServiceDistributedThirdE::func> DpmsStServiceDistributedThirdE::funcMap_ = {
    {"StopSelfAbility", &DpmsStServiceDistributedThirdE::StopSelfAbility},
    {"VerifyPermissionFromRemote", &DpmsStServiceDistributedThirdE::VerifyPermissionFromRemote},
    {"VerifySelfPermissionFromRemote", &DpmsStServiceDistributedThirdE::VerifySelfPermissionFromRemote},
    {"RequestPermissionsFromRemote", &DpmsStServiceDistributedThirdE::RequestPermissionsFromRemote},
    {"CanRequestPermissionFromRemote", &DpmsStServiceDistributedThirdE::CanRequestPermissionFromRemote},
};

DpmsStServiceDistributedThirdE::~DpmsStServiceDistributedThirdE()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

class DpmsStServiceDistributedThirdE::TestCallback : public OnRequestPermissionsResultStub {
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
        APP_LOGI("DpmsStServiceDistributedThirdE  TestCallback :OnResult  is run!!!");
    }

    void OnCancel(const std::string nodeId, std::vector<std::string> permissions)
    {
        APP_LOGI("DpmsStServiceDistributedThirdE  TestCallback :OnCancel  is run!!!");
    }
    void OnTimeOut(const std::string nodeId, std::vector<std::string> permissions)
    {
        result = -2;
        APP_LOGI(
            "DpmsStServiceDistributedThirdE  TestCallback :OnTimeOut  is run!!! nodeId = %{public}s", nodeId.c_str());
    }
};

std::vector<std::string> DpmsStServiceDistributedThirdE::Split(std::string str, const std::string &token)
{
    APP_LOGI("DpmsStServiceDistributedThirdE::Split");

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

void DpmsStServiceDistributedThirdE::StopSelfAbility()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::StopSelfAbility");

    TerminateAbility();
}

string DpmsStServiceDistributedThirdE::GetAppIdInfo(int32_t pid, int32_t uid)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid);
}

void DpmsStServiceDistributedThirdE::VerifyPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::VerifyPermissionFromRemote");

    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    std::string appInfo = GetAppIdInfo(pid, uid);

    APP_LOGI("DpmsStServiceDistributedThirdE::VerifyPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());

    int result = DistributedPermissionKit::VerifyPermissionFromRemote(permission, nodeId, appInfo);

    APP_LOGI("DpmsStServiceDistributedThirdE::VerifyPermissionFromRemote  result = %{public}d, ", result);

    PublishEvent(RESP_EVENT_NAME_THIRD_E, result, "VerifyPermissionFromRemote");
}

void DpmsStServiceDistributedThirdE::VerifySelfPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::VerifySelfPermissionFromRemote");

    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdE::VerifySelfPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid,
        uid,
        permission.c_str(),
        nodeId.c_str());

    int result = DistributedPermissionKit::VerifySelfPermissionFromRemote(permission, nodeId);

    APP_LOGI("DpmsStServiceDistributedThirdE::VerifySelfPermissionFromRemote  result = %{public}d, ", result);

    PublishEvent(RESP_EVENT_NAME_THIRD_E, result, "VerifySelfPermissionFromRemote");
}

void DpmsStServiceDistributedThirdE::CanRequestPermissionFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::CanRequestPermissionFromRemote");
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdE::CanRequestPermissionFromRemote  pid = %{public}d, uid = "
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
    APP_LOGI("DpmsStServiceDistributedThirdE::CanRequestPermissionFromRemote result = %{public}d, ", result);
    PublishEvent(RESP_EVENT_NAME_THIRD_E, result, "CanRequestPermissionFromRemote");
}

void DpmsStServiceDistributedThirdE::RequestPermissionsFromRemote()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::RequestPermissionsFromRemote");
    int32_t reasonResId = reasonResId_;
    std::string permission = permission_;
    std::string nodeId = nodeId_;
    std::string bundleName = bundleName_;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    OHOS::sptr<DpmsStServiceDistributedThirdE::TestCallback> callback(
        new DpmsStServiceDistributedThirdE::TestCallback());

    APP_LOGI("DpmsStServiceDistributedThirdE::RequestPermissionsFromRemote  pid = %{public}d, uid = "
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

    APP_LOGI("DpmsStServiceDistributedThirdE::RequestPermissionsFromRemote  callback->result = %{public}d, ",
        callback->result);
    PublishEvent(RESP_EVENT_NAME_THIRD_E, callback->result, "RequestPermissionsFromRemote");
}

void DpmsStServiceDistributedThirdE::OnStart(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnStart");

    GetWantInfo(want);
    Ability::OnStart(want);

    PublishEvent(RESP_EVENT_NAME_THIRD_E, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
    SubscribeEvent();
}
void DpmsStServiceDistributedThirdE::OnCommand(const AAFwk::Want &want, bool restart, int startId)
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnCommand");

    Ability::OnCommand(want, restart, startId);
}
void DpmsStServiceDistributedThirdE::OnNewWant(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnNewWant");

    GetWantInfo(want);
    Ability::OnNewWant(want);
}
void DpmsStServiceDistributedThirdE::OnStop()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnStop");

    Ability::OnStop();
    PublishEvent(RESP_EVENT_NAME_THIRD_E, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
    Clear();
}
void DpmsStServiceDistributedThirdE::OnActive()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnActive");

    Ability::OnActive();
}
void DpmsStServiceDistributedThirdE::OnInactive()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnInactive");

    Ability::OnInactive();
}
void DpmsStServiceDistributedThirdE::OnBackground()
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnBackground");

    Ability::OnBackground();
}

void DpmsStServiceDistributedThirdE::Clear()
{
    permission_ = "";
    nodeId_ = "";
    bundleName_ = "";
    reasonResId_ = 1;
}
void DpmsStServiceDistributedThirdE::GetWantInfo(const Want &want)
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
bool DpmsStServiceDistributedThirdE::PublishEvent(
    const std::string &eventName, const int &code, const std::string &data)
{
    APP_LOGI("DpmsStServiceDistributedThirdE::PublishEvent eventName = %{public}s, code = %{public}d, data = "
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
sptr<IRemoteObject> DpmsStServiceDistributedThirdE::OnConnect(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnConnect");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_E, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void DpmsStServiceDistributedThirdE::OnDisconnect(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdE::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_E, AbilityLifecycleExecutor::LifecycleState::BACKGROUND, "OnDisconnect");
}
bool DpmsStServiceDistributedThirdE::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(REQ_EVENT_NAME_THIRD_E);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void DpmsStServiceDistributedThirdE::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI("DpmsStServiceDistributedThirdE::OnReceiveEvent eventName = %{public}s, code = %{public}d, data "
             "= %{public}s",
        eventName.c_str(),
        data.GetCode(),
        dataContent.c_str());
    if (REQ_EVENT_NAME_THIRD_E.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI("DpmsStServiceDistributedThirdE::OnReceiveEvent eventName = %{public}s, code = "
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
REGISTER_AA(DpmsStServiceDistributedThirdE);
}  // namespace AppExecFwk
}  // namespace OHOS