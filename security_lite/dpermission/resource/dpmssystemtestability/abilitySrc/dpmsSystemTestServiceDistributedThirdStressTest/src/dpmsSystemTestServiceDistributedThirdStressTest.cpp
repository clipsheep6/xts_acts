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

#include "dpmsSystemTestServiceDistributedThirdStressTest.h"
#include <future>
#include <thread>
#include <vector>
#include "on_request_permissions_result_stub.h"
#include "app_log_wrapper.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "distributed_permission_kit.h"
#include "ipc_skeleton.h"

using namespace OHOS::EventFwk;
using namespace OHOS::Security::Permission;
using namespace OHOS::DistributedHardware;
using MAP_STR_STR = std::map<std::string, std::string>;
namespace OHOS {
namespace AppExecFwk {
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
int DpmsStServiceDistributedThirdStressTest::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
const int STRESS_TEST_TIME = 60 * 10;

std::map<std::string, DpmsStServiceDistributedThirdStressTest::func> DpmsStServiceDistributedThirdStressTest::funcMap_ =
    {
        {"StopSelfAbility", &DpmsStServiceDistributedThirdStressTest::StopSelfAbility},
        {"DPMS_DistributedRequestPermissionFromRemote_0100",
            &DpmsStServiceDistributedThirdStressTest::DPMS_DistributedRequestPermissionFromRemote_0100},
        {"DPMS_DistributedRequestPermissionFromRemote_0200",
            &DpmsStServiceDistributedThirdStressTest::DPMS_DistributedRequestPermissionFromRemote_0200},
};

DpmsStServiceDistributedThirdStressTest::~DpmsStServiceDistributedThirdStressTest()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

class DpmsStServiceDistributedThirdStressTest::TestCallback : public OnRequestPermissionsResultStub {
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
        APP_LOGI("DpmsStServiceDistributedThirdStressTest  TestCallback :OnResult  is run!!!");
    }

    void OnCancel(const std::string nodeId, std::vector<std::string> permissions)
    {
        APP_LOGI("DpmsStServiceDistributedThirdStressTest  TestCallback :OnCancel  is run!!!");
    }
    void OnTimeOut(const std::string nodeId, std::vector<std::string> permissions)
    {
        result = -3;
        APP_LOGI("DpmsStServiceDistributedThirdStressTest  TestCallback :OnTimeOut  is run!!! nodeId = %{public}s",
            nodeId.c_str());
    }
};

void DpmsStServiceDistributedThirdStressTest::StopSelfAbility()
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::StopSelfAbility");

    TerminateAbility();
}

std::string DpmsStServiceDistributedThirdStressTest::GetAppIdInfo(int32_t pid, int32_t uid)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid);
}

bool DpmsStServiceDistributedThirdStressTest::VerifySelfPermissionFromRemote(std::string &deviceId)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::VerifySelfPermissionFromRemote");

    std::string permission = "ohos.permission.CAMERA";
    std::string nodeId = deviceId;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdStressTest::VerifySelfPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid, uid, permission.c_str(), nodeId.c_str());

    int result = DistributedPermissionKit::VerifySelfPermissionFromRemote(permission, nodeId);

    APP_LOGI("DpmsStServiceDistributedThirdStressTest::VerifySelfPermissionFromRemote  result = %{public}d, ", result);

    if (result == -1) {
        return true;
    } else {
        return false;
    }
}

bool DpmsStServiceDistributedThirdStressTest::CanRequestPermissionFromRemote(std::string &deviceId)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::CanRequestPermissionFromRemote");
    std::string permission = "ohos.permission.CAMERA";
    std::string nodeId = deviceId;
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdStressTest::CanRequestPermissionFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s ",
        pid, uid, permission.c_str(), nodeId.c_str());
    bool res = DistributedPermissionKit::CanRequestPermissionFromRemote(permission, nodeId);

    APP_LOGI("DpmsStServiceDistributedThirdStressTest::CanRequestPermissionFromRemote result = %{public}d, ", res);
    return !res;
}

bool DpmsStServiceDistributedThirdStressTest::RequestPermissionsFromRemote(std::string &deviceId)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::RequestPermissionsFromRemote");
    int32_t reasonResId = 1;
    std::string permission = "ohos.permission.CAMERA";
    std::string nodeId = deviceId;
    std::string bundleName = "com.ohos.dpmsst.service.distributed.third.stress";
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();
    OHOS::sptr<DpmsStServiceDistributedThirdStressTest::TestCallback> callback(
        new DpmsStServiceDistributedThirdStressTest::TestCallback());

    APP_LOGI("DpmsStServiceDistributedThirdStressTest::RequestPermissionsFromRemote  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s, bundleName=%{public}s ",
        pid, uid, permission.c_str(), nodeId.c_str(), bundleName.c_str());

    std::vector<std::string> permissions;
    permissions.push_back(permission);
    DistributedPermissionKit::RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
    sleep(1);

    APP_LOGI("DpmsStServiceDistributedThirdStressTest::RequestPermissionsFromRemote  callback->result = %{public}d, ",
        callback->result);
    if (callback->result == -2) {
        return true;
    } else {
        return false;
    }
}

bool DpmsStServiceDistributedThirdStressTest::GrantSensitivePermissionToRemoteApp(std::string &deviceId)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::GrantSensitivePermissionToRemoteApp");
    std::string permission = "ohos.permission.CAMERA";
    std::string nodeId = deviceId;
    std::string bundleName = "com.ohos.dpmsst.service.distributed.third.stress";
    const int32_t pid = IPCSkeleton::GetCallingPid();
    const int32_t uid = IPCSkeleton::GetCallingUid();

    APP_LOGI("DpmsStServiceDistributedThirdStressTest::GrantSensitivePermissionToRemoteApp  pid = %{public}d, uid = "
             "%{public}d, permission= %{public}s,nodeId= %{public}s, bundleName=%{public}s ",
        pid, uid, permission.c_str(), nodeId.c_str(), bundleName.c_str());

    DistributedPermissionKit::GrantSensitivePermissionToRemoteApp(permission, nodeId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    int32_t RESULT = DistributedPermissionKit::CheckDPermission(duid, permission);
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::GrantSensitivePermissionToRemoteApp  RESULT = %{public}d, ",
        RESULT);
    if (RESULT == -1) {
        return true;
    } else {
        return false;
    }
}

// stress start
bool DpmsStServiceDistributedThirdStressTest::TestFountion(std::string deviceId)
{
    auto starTime = std::chrono::system_clock::now();
    bool result = true;
    while (int(std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - starTime).count()) <=
        STRESS_TEST_TIME) {
        result = ExeAPI(deviceId);
        if (!result) {
            break;
        }
    }
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::TestFountion  result = %{public}d, ", result);
    return result;
}

bool DpmsStServiceDistributedThirdStressTest::TestRandomFountion(std::string deviceId)
{
    auto starTime = std::chrono::system_clock::now();
    bool result = true;
    // 43200 second equals 12 hours
    while (int(std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - starTime).count()) <=
        STRESS_TEST_TIME) {
        result = RandomExeAPI(deviceId);
        if (!result) {
            break;
        }
    }
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::TestRandomFountion  result = %{public}d, ", result);
    return result;
}

bool DpmsStServiceDistributedThirdStressTest::ExeAPI(std::string &deviceId)
{
    std::vector<FnPtr> vec;
    GetTestFunction(vec);
    bool result = true;
    for (auto fn : vec) {
        result = fn(deviceId);
        if (!result) {
            break;
        }
    }
    return result;
}

bool DpmsStServiceDistributedThirdStressTest::RandomExeAPI(std::string &deviceId)
{
    std::vector<FnPtr> vec;
    GetTestFunction(vec);
    int tar = std::rand() % vec.size();
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::RandomExeAPI  tar = %{public}d, ", tar);
    bool result = vec[tar](deviceId);
    return result;
}

void DpmsStServiceDistributedThirdStressTest::StressFountion()
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::StressFountion  start");
    std::vector<DmDeviceInfo> deviceList;
    std::string str = "com.ohos.distributedmusicplayer";
    GetTrustedDeviceList(str, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    std::cout << "deviceId ：" << deviceId << std::endl;
    int threadCount = 15;
    std::vector<std::future<void>> new_threads;
    for (unsigned int thread_index = 0; thread_index < threadCount; thread_index++) {
        new_threads.push_back(std::async(std::launch::async, [&deviceId]() {
            TestFountion(deviceId);
        }));
    }

    for (unsigned int wait_index = 0; wait_index < new_threads.size(); wait_index++) {
        new_threads[wait_index].get();
    }
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::StressFountion  end");
}

void DpmsStServiceDistributedThirdStressTest::StressRandomFountion()
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::StressRandomFountion  start");
    std::vector<DmDeviceInfo> deviceList;
    std::string str = "com.ohos.distributedmusicplayer";
    GetTrustedDeviceList(str, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    std::cout << "deviceId ：" << deviceId << std::endl;
    int threadCount = 15;
    std::vector<std::future<void>> new_threads;
    for (unsigned int thread_index = 0; thread_index < threadCount; thread_index++) {
        new_threads.push_back(std::async(std::launch::async, [&deviceId]() {
            TestRandomFountion(deviceId);
        }));
    }
    for (unsigned int wait_index = 0; wait_index < new_threads.size(); wait_index++) {
        new_threads[wait_index].get();
    }
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::StressRandomFountion  end");
}

void DpmsStServiceDistributedThirdStressTest::DPMS_DistributedRequestPermissionFromRemote_0100()
{
    APP_LOGI("app func StressTest start");
    int32_t result = 1;
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    auto starTime = std::chrono::system_clock::now();
    StressFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    if (realTestTime >= STRESS_TEST_TIME) {
        result = 0;
    }
    APP_LOGI("DPMS_DistributedRequestPermissionFromRemote_0100::StressFountion run time: %{public}d", realTestTime);
    PublishEvent(RESP_EVENT_NAME_THIRD_STRESS, result, "DPMS_DistributedRequestPermissionFromRemote_0100");
    APP_LOGI("app func StressTest end");
}

void DpmsStServiceDistributedThirdStressTest::DPMS_DistributedRequestPermissionFromRemote_0200()
{
    APP_LOGI("app func StressTest start");
    int32_t result = 1;
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    auto starTime = std::chrono::system_clock::now();
    StressRandomFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    if (realTestTime >= STRESS_TEST_TIME) {
        result = 0;
    }
    APP_LOGI("DPMS_DistributedRequestPermissionFromRemote_0200::StressRandomFountion run time: %{public}d",
        realTestTime);
    PublishEvent(RESP_EVENT_NAME_THIRD_STRESS, result, "DPMS_DistributedRequestPermissionFromRemote_0200");
    APP_LOGI("app func StressTest end");
}

void DpmsStServiceDistributedThirdStressTest::GetTestFunction(std::vector<FnPtr> &vector)
{
    vector.push_back(VerifySelfPermissionFromRemote);
    vector.push_back(CanRequestPermissionFromRemote);
    // vector.push_back(RequestPermissionsFromRemote);
    vector.push_back(GrantSensitivePermissionToRemoteApp);
}

int32_t DpmsStServiceDistributedThirdStressTest::GetTrustedDeviceList(std::string &packageName,
    std::vector<DmDeviceInfo> &deviceList)
{
    std::string extra = "";
    APP_LOGI("GetTrustedDeviceList params : packageName = %{public}s", packageName.c_str());
    std::shared_ptr<MyDmInitCallback> dmInitCallback = std::make_shared<MyDmInitCallback>();
    DeviceManager::GetInstance().InitDeviceManager(packageName, dmInitCallback);
    int32_t result = DeviceManager::GetInstance().GetTrustedDeviceList(packageName, extra, deviceList);
    return result;
}
// stress end

void DpmsStServiceDistributedThirdStressTest::OnStart(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnStart");

    Ability::OnStart(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_STRESS, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
    SubscribeEvent();
}
void DpmsStServiceDistributedThirdStressTest::OnCommand(const AAFwk::Want &want, bool restart, int startId)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnCommand");

    Ability::OnCommand(want, restart, startId);
}
void DpmsStServiceDistributedThirdStressTest::OnNewWant(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnNewWant");

    Ability::OnNewWant(want);
}
void DpmsStServiceDistributedThirdStressTest::OnStop()
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnStop");

    Ability::OnStop();
    PublishEvent(RESP_EVENT_NAME_THIRD_STRESS, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
}
void DpmsStServiceDistributedThirdStressTest::OnActive()
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnActive");

    Ability::OnActive();
}
void DpmsStServiceDistributedThirdStressTest::OnInactive()
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnInactive");

    Ability::OnInactive();
}
void DpmsStServiceDistributedThirdStressTest::OnBackground()
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnBackground");

    Ability::OnBackground();
}

bool DpmsStServiceDistributedThirdStressTest::PublishEvent(const std::string &eventName, const int &code,
    const std::string &data)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::PublishEvent eventName = %{public}s, code = %{public}d, data = "
             "%{public}s",
        eventName.c_str(), code, data.c_str());

    Want want;
    want.SetAction(eventName);

    CommonEventData commonData;
    commonData.SetWant(want);
    commonData.SetCode(code);
    commonData.SetData(data);
    return CommonEventManager::PublishCommonEvent(commonData);
}
sptr<IRemoteObject> DpmsStServiceDistributedThirdStressTest::OnConnect(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnConnect");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_STRESS, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void DpmsStServiceDistributedThirdStressTest::OnDisconnect(const Want &want)
{
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(RESP_EVENT_NAME_THIRD_STRESS, AbilityLifecycleExecutor::LifecycleState::BACKGROUND, "OnDisconnect");
}
bool DpmsStServiceDistributedThirdStressTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(REQ_EVENT_NAME_THIRD_STRESS);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void DpmsStServiceDistributedThirdStressTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnReceiveEvent eventName = %{public}s, code = %{public}d, data "
             "= %{public}s",
        eventName.c_str(), data.GetCode(), dataContent.c_str());
    if (REQ_EVENT_NAME_THIRD_STRESS.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI("DpmsStServiceDistributedThirdStressTest::OnReceiveEvent eventName = %{public}s, code = "
                     "%{public}d, data = %{public}s",
                eventName.c_str(), data.GetCode(), dataContent.c_str());
        } else {
            if (mainAbility_ != nullptr) {
                (mainAbility_->*funcMap_[dataContent])();
            }
        }
    }
}
REGISTER_AA(DpmsStServiceDistributedThirdStressTest);
} // namespace AppExecFwk
} // namespace OHOS