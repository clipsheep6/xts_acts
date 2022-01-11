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

#ifndef FACE_AUTH_TEST_SERVICE_STABILITY_TEST_H
#define FACE_AUTH_TEST_SERVICE_STABILITY_TEST_H
#include <string>
#include <map>
#include "ability_connect_callback_stub.h"
#include "ability_connect_callback_proxy.h"
#include "ability_loader.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "on_faceauth_stub.h"
#include "face_auth_defines.h"
namespace OHOS {
namespace AppExecFwk {
using AbilityConnectionStub = OHOS::AAFwk::AbilityConnectionStub;
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
const std::string RESP_EVENT_NAME_FACE_AUTH_STABILITY = "resp_com_ohos_face_auth_stability";
const std::string REQ_EVENT_NAME_FACE_AUTH_STABILITY = "req_com_ohos_face_auth_stability";
typedef bool (*FnPtr)();
class FaceAuthStabilityTest : public Ability {
public:
    ~FaceAuthStabilityTest();
    class FaceAuthCameraBufferListener : public IBufferConsumerListener {
    public:
        sptr<Surface> cameraBuffer_;
        void OnBufferAvailable();
    };

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
    static void WriteFile(int32_t caseNum, int32_t codeNum,
        std::map<int32_t, UserIAM::FaceAuth::ResultInfo> resultInfos_);
    static void EnrollFile();
    static bool Execute();
    static bool Cancel();
    static bool Init();
    static bool Release();
    static bool ResetTimeout();
    static bool GetRemainingTime();
    static bool GetRemainingNum();
    static bool Enroll();
    static bool CancelEnrollment();
    static bool PreEnroll();
    static bool PostEnroll();
    static bool Remove();
    static bool GetEnrolledFaceIDs();
    static bool GetAngleDim();
    static bool TestFountion();
    static bool ExeAPI();
    static bool TestRandomFountion();
    static bool RandomExeAPI();
    void StabilityFountion();
    void StabilityRandomFountion();
    void CPPAPI_Stability_0100();
    void CPPAPI_Stability_0200();
    static void GetTestFunction(std::vector<FnPtr> &vector);
    std::string permName = {};
    typedef void (FaceAuthStabilityTest::*func)();
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
                PublishEvent(RESP_EVENT_NAME_FACE_AUTH_STABILITY, onAbilityConnectDoneCount, "OnAbilityConnectDone");
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
                PublishEvent(RESP_EVENT_NAME_FACE_AUTH_STABILITY, onAbilityConnectDoneCount, "OnAbilityDisconnectDone");
            }
        }
        static int onAbilityConnectDoneCount;
    };
    class AppEventSubscriber : public EventFwk::CommonEventSubscriber {
    public:
        AppEventSubscriber(const EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const EventFwk::CommonEventData &data) override;

        FaceAuthStabilityTest *mainAbility_ = nullptr;
    };
    class TestCallback : public OHOS::UserIAM::FaceAuth::OnFaceAuthStub {
    public:
        TestCallback() = default;
        virtual ~TestCallback() = default;

        void OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code, int32_t errorCode,
            OHOS::UserIAM::FaceAuth::Bundle &bundle);
        void OnDeathRecipient();
        uint64_t reqid_;
        int32_t type_;
        int32_t code_;
        int32_t errorcode_;
        OHOS::UserIAM::FaceAuth::Bundle bundle_;
        bool isCallback_ = false;
    };
};
} // namespace AppExecFwk
} // namespace OHOS
#endif // FACE_AUTH_TEST_SERVICE_STABILITY_TEST_H