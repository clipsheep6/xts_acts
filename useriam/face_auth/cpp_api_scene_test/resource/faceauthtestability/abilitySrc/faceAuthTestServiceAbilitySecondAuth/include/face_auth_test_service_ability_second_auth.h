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

#ifndef FACE_AUTH_TEST_SERVICE_ABILITY_SECOND_AUTH_H
#define FACE_AUTH_TEST_SERVICE_ABILITY_SECOND_AUTH_H
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
namespace OHOS {
namespace AppExecFwk {
using AbilityConnectionStub = OHOS::AAFwk::AbilityConnectionStub;
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
const std::string APP_SECOND_AUTH_RESP_EVENT_NAME = "resp_com_ohos_face_auth_test_app_second_auth";
const std::string APP_SECOND_AUTH_REQ_EVENT_NAME = "req_com_ohos_face_auth_test_app_second_auth";
class FaceAuthTestServiceAbilitySecondAuth : public Ability {
public:
    ~FaceAuthTestServiceAbilitySecondAuth();

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
    bool SubscribeEvent();
    static bool PublishEvent(const std::string &eventName, const int32_t &code, const std::string &data);
    void StopSelfAbility();
    typedef void (FaceAuthTestServiceAbilitySecondAuth::*func)();
    void FaceAuth_Init();
    void FaceAuth_Release();
    void FaceAuth_Authenticate();
    UserIAM::FaceAuth::AuthParam CreateAuthParam(uint64_t _reqId, int32_t _flags, int64_t _challenge, int32_t _faceId,
        int32_t _previewId = 0);
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
                PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, onAbilityConnectDoneCount, "OnAbilityConnectDone");
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
                PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, onAbilityConnectDoneCount, "OnAbilityDisconnectDone");
            }
        }

        static int32_t onAbilityConnectDoneCount;
    };
    class AppEventSubscriber : public EventFwk::CommonEventSubscriber {
    public:
        AppEventSubscriber(const EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const EventFwk::CommonEventData &data) override;

        FaceAuthTestServiceAbilitySecondAuth *mainAbility_ = nullptr;
    };

    class TestCallback : public OHOS::UserIAM::FaceAuth::OnFaceAuthStub {
    public:
        TestCallback() = default;
        virtual ~TestCallback() = default;

        void OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code, int32_t errorCode,
            OHOS::UserIAM::FaceAuth::Bundle &bundle);
        void OnDeathRecipient();
        int32_t reqid_;
        int32_t type_;
        int32_t code_;
        int32_t errorcode_;
        bool isCallback_ = false;
    };
};
} // namespace AppExecFwk
} // namespace OHOS
#endif // FACE_AUTH_TEST_SERVICE_ABILITY_SECOND_AUTH_H