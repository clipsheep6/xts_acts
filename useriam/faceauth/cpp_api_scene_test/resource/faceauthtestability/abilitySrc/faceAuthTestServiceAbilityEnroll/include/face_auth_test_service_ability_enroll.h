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

#ifndef FACE_AUTH_TEST_SERVICE_ABILITY_ENROLL_H
#define FACE_AUTH_TEST_SERVICE_ABILITY_ENROLL_H
#include <map>
#include <string>
#include <thread>
#include "ability_connect_callback_stub.h"
#include "ability_connect_callback_proxy.h"
#include "ability_loader.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "on_faceauth_stub.h"
#include "face_auth_defines.h"

#ifndef O_RDWR
#define O_RDWR 02
#endif

#ifndef O_CREAT
#define O_CREAT 0100
#endif
namespace OHOS {
namespace AppExecFwk {
using AbilityConnectionStub = OHOS::AAFwk::AbilityConnectionStub;
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
const std::string APP_ENROLL_RESP_EVENT_NAME = "resp_com_ohos_face_auth_test_app_enroll";
const std::string APP_ENROLL_REQ_EVENT_NAME = "req_com_ohos_face_auth_test_app_enroll";
const std::int32_t FILE_PERMISSION_FLAG = 00766;
const std::int32_t PREVIEW_DEFAULT_WIDTH = 640;
const std::int32_t PREVIEW_DEFAULT_HEIGHT = 480;
static const std::int32_t VIDEO_DEFAULT_WIDTH = 1280;
static const std::int32_t VIDEO_DEFAULT_HEIGHT = 720;
class FaceAuthTestServiceAbilityEnroll : public Ability {
public:
    ~FaceAuthTestServiceAbilityEnroll();
    constexpr static double MAX_ELAPSED = 2;
    class FaceAuthCameraBufferListener;

protected:
    virtual void OnStart(const Want &want) override;
    virtual void OnStop() override;
    virtual void OnActive() override;
    virtual void OnInactive() override;
    virtual void OnBackground() override;
    virtual void OnNewWant(const Want &want) override;
    virtual void OnCommand(const AAFwk::Want &want, bool restart, int32_t startId) override;
    virtual sptr<IRemoteObject> OnConnect(const Want &want) override;
    virtual void OnDisconnect(const Want &want) override;

private:
    void GetWantInfo(const Want &want);
    void WriteFile(int32_t caseNum, int32_t codeNum, std::map<int32_t, UserIAM::FaceAuth::ResultInfo> resultInfos_);
    bool SubscribeEvent();
    static bool PublishEvent(const std::string &eventName, const int32_t &code, const std::string &data);
    void StopSelfAbility();
    void FaceAuth_Init();
    void FaceAuth_Release();
    typedef void (FaceAuthTestServiceAbilityEnroll::*func)();
    void CPPAPI_Performance_Enroll_0100();
    void CPPAPI_Function_Enroll_0100();
    void CPPAPI_Function_Enroll_0200();
    void CPPAPI_Function_Enroll_0300();
    void CPPAPI_Function_Enroll_1100();
    void CPPAPI_Function_Enroll_0400();
    void CPPAPI_Function_Enroll_0500();
    void CPPAPI_Function_Enroll_0600();
    void CPPAPI_Function_Enroll_0700();
    void CPPAPI_Function_Enroll_0800();
    void CPPAPI_Function_Enroll_0900();
    void CPPAPI_Performance_CancelEnroll_0100();
    void CPPAPI_Performance_PreEnroll_0100();
    void CPPAPI_Function_PreEnroll_0100();
    void CPPAPI_Performance_PostEnroll_0100();
    void CPPAPI_Function_PostEnroll_0100();
    void CPPAPI_Performance_GetAngleDim_0100();
    void CPPAPI_Function_GetAngleDim_0100();
    void CPPAPI_Performance_GetEnrolledFaceIDs_0100();
    void CPPAPI_Function_GetEnrolledFaceIDs_0100();
    void CPPAPI_Function_GetEnrolledFaceIDs_0200();
    void CPPAPI_Function_GetEnrolledFaceIDs_0300();
    void CPPAPI_Performance_Remove_0100();
    void CPPAPI_Function_Remove_0100();
    void CPPAPI_Function_Remove_0200();
    void CPPAPI_Function_Remove_0300();
    void CPPAPI_Function_Enroll_1000();
    void CPPAPI_Function_Remove_0600();
    void CPPAPI_Function_Remove_0700();
    void CPPAPI_Function_Scenario_0100();
    void CPPAPI_Function_Scenario_0200();
    void CPPAPI_Function_Scenario_0400();
    void EnrollFile();
    class TestCallback : public OHOS::UserIAM::FaceAuth::OnFaceAuthStub {
    public:
        TestCallback() = default;
        virtual ~TestCallback() = default;

        void OnCallbackEvent(
            uint64_t reqId, int32_t type, int32_t code, int32_t errorCode, OHOS::UserIAM::FaceAuth::Bundle &bundle);
        void OnDeathRecipient();
        int32_t reqid_;
        int32_t type_;
        int32_t code_;
        int32_t errorcode_;
        OHOS::UserIAM::FaceAuth::Bundle bundle_;
        bool isCallback_ = false;
    };
    int32_t CPPAPI_Function_Scenario_0100_Check(OHOS::sptr<TestCallback> remoteCallback,
        OHOS::sptr<TestCallback> localCallback, OHOS::sptr<TestCallback> enrollCallback,
        OHOS::sptr<TestCallback> removeCallback);
    int32_t CPPAPI_Function_Scenario_0400_Check(OHOS::sptr<TestCallback> remoteCallback,
        OHOS::sptr<TestCallback> localCallback, OHOS::sptr<TestCallback> enrollCallback,
        OHOS::sptr<TestCallback> removeCallback);
    UserIAM::FaceAuth::AuthParam CPPAPI_Function_Scenario_0400_CoAuth();
    UserIAM::FaceAuth::AuthParam CPPAPI_Function_Scenario_0400_CoAnotherAuth();
    UserIAM::FaceAuth::AuthParam CPPAPI_Function_Scenario_0400_LocalAuth();
    UserIAM::FaceAuth::EnrollParam CPPAPI_Function_Scenario_0400_Enroll();
    UserIAM::FaceAuth::RemoveParam CPPAPI_Function_Scenario_0400_Remove();
    UserIAM::FaceAuth::EnrollParam CreateEnrollParam(uint64_t _reqId, int64_t _challenge, int32_t _faceId,
        sptr<IBufferProducer> _producer, std::vector<uint8_t> _token);
    UserIAM::FaceAuth::AuthParam CreateAuthParam(uint64_t _reqId = 0, int32_t _flags = 0, int64_t _challenge = 0,
        int32_t _faceId = 0, sptr<IBufferProducer> _producer = nullptr);
    static std::map<std::string, func> funcMap_;
    class AbilityConnectCallback;
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
            int32_t resultCode) override
        {
            if (resultCode == 0) {
                onAbilityConnectDoneCount++;
                PublishEvent(APP_ENROLL_RESP_EVENT_NAME, onAbilityConnectDoneCount, "OnAbilityConnectDone");
            }
        }

        /**
         * OnAbilityDisconnectDone, AbilityMs notify caller ability the result of disconnect.
         *
         * @param element,.service ability's ElementName.
         * @param resultCode, ERR_OK on success, others on failure.
         */
        void OnAbilityDisconnectDone(const AppExecFwk::ElementName &element, int32_t resultCode) override
        {
            if (resultCode == 0) {
                onAbilityConnectDoneCount--;
                PublishEvent(APP_ENROLL_RESP_EVENT_NAME, onAbilityConnectDoneCount, "OnAbilityDisconnectDone");
            }
        }

        static int32_t onAbilityConnectDoneCount;
    };
    class AppEventSubscriber : public EventFwk::CommonEventSubscriber {
    public:
        AppEventSubscriber(const EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const EventFwk::CommonEventData &data) override;

        FaceAuthTestServiceAbilityEnroll *mainAbility_ = nullptr;
    };
};
}  // namespace AppExecFwk
}  // namespace OHOS
#endif // FACE_AUTH_TEST_SERVICE_ABILITY_ENROLL_H