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

#ifndef DPMS_ST_SERVICE_DISTRIBUTED_THIRD_STRESS_
#define DPMS_ST_SERVICE_DISTRIBUTED_THIRD_STRESS_
#include <string>
#include <map>
#include "ability_connect_callback_stub.h"
#include "ability_connect_callback_proxy.h"
#include "ability_loader.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "device_manager.h"
namespace OHOS {
namespace AppExecFwk {
using AbilityConnectionStub = OHOS::AAFwk::AbilityConnectionStub;
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
const std::string RESP_EVENT_NAME_THIRD_STRESS = "resp_com_ohos_dpmsst_service_distributed_third_stress";
const std::string REQ_EVENT_NAME_THIRD_STRESS = "req_com_ohos_dpmsst_service_distributed_third_stress";
typedef bool (*FnPtr)(std::string &deviceId);

using OHOS::DistributedHardware::DmInitCallback;
class MyDmInitCallback final : public DmInitCallback {
    void OnRemoteDied() override
    {}
};

class DpmsStServiceDistributedThirdStressTest : public Ability {
public:
    ~DpmsStServiceDistributedThirdStressTest();

protected:
    virtual void OnStart(const Want &want) override;
    virtual void OnStop() override;
    virtual void OnActive() override;
    virtual void OnInactive() override;
    virtual void OnBackground() override;
    virtual void OnNewWant(const Want &want) override;
    virtual void OnCommand(const AAFwk::Want &want, bool restart, int startId) override;
    virtual sptr<IRemoteObject> OnConnect(const Want &want) override;
    virtual void OnDisconnect(const Want &want) override;

private:
    bool SubscribeEvent();
    static bool PublishEvent(const std::string &eventName, const int &code, const std::string &data);
    void StopSelfAbility();
    static bool VerifySelfPermissionFromRemote(std::string &deviceId);
    static bool RequestPermissionsFromRemote(std::string &deviceId);
    static bool CanRequestPermissionFromRemote(std::string &deviceId);
    static bool GrantSensitivePermissionToRemoteApp(std::string &deviceId);
    static bool TestFountion(std::string deviceId);
    static bool ExeAPI(std::string &deviceId);
    void StressFountion();
    static bool TestRandomFountion(std::string deviceId);
    static bool RandomExeAPI(std::string &deviceId);
    void StressRandomFountion();
    void DPMS_DistributedRequestPermissionFromRemote_0100();
    void DPMS_DistributedRequestPermissionFromRemote_0200();
    static void GetTestFunction(std::vector<FnPtr> &vector);
    std::string GetAppIdInfo(int32_t pid, int32_t uid);
    static int32_t GetTrustedDeviceList(std::string &packageName,
        std::vector<OHOS::DistributedHardware::DmDeviceInfo> &deviceList);
    std::string permName = {};
    typedef void (DpmsStServiceDistributedThirdStressTest::*func)();
    static std::map<std::string, func> funcMap_;
    class AbilityConnectCallback;
    class TestCallback;
    sptr<AbilityConnectCallback> stub_ = {};
    sptr<AbilityConnectionProxy> connCallback_ = {};
    class AppEventSubscriber;
    std::shared_ptr<AppEventSubscriber> subscriber_ = {};
    class AbilityConnectCallback : public AbilityConnectionStub {
    public:
        sptr<IRemoteObject> AsObject() override
        {
            return nullptr;
        }
        /**
         * OnAbilityConnectDone, AbilityMs notify caller ability the result of connect.
         *
         * @param element,.service ability's ElementName.
         * @param remoteObject,.the session proxy of service ability.
         * @param resultCode, ERR_OK on success, others on failure.
         */
        void OnAbilityConnectDone(const AppExecFwk::ElementName &element, const sptr<IRemoteObject> &remoteObject,
            int resultCode) override
        {
            if (resultCode == 0) {
                onAbilityConnectDoneCount++;
                PublishEvent(RESP_EVENT_NAME_THIRD_STRESS, onAbilityConnectDoneCount, "OnAbilityConnectDone");
            }
        }

        /**
         * OnAbilityDisconnectDone, AbilityMs notify caller ability the result of disconnect.
         *
         * @param element,.service ability's ElementName.
         * @param resultCode, ERR_OK on success, others on failure.
         */
        void OnAbilityDisconnectDone(const AppExecFwk::ElementName &element, int resultCode) override
        {
            if (resultCode == 0) {
                onAbilityConnectDoneCount--;
                PublishEvent(RESP_EVENT_NAME_THIRD_STRESS, onAbilityConnectDoneCount, "OnAbilityDisconnectDone");
            }
        }

        static int onAbilityConnectDoneCount;
    };
    class AppEventSubscriber : public EventFwk::CommonEventSubscriber {
    public:
        AppEventSubscriber(const EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const EventFwk::CommonEventData &data) override;

        DpmsStServiceDistributedThirdStressTest *mainAbility_ = nullptr;
    };
};
} // namespace AppExecFwk
} // namespace OHOS
#endif // DPMS_ST_SERVICE_DISTRIBUTED_THIRD_STRESS_