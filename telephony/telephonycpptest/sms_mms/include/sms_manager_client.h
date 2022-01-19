/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#ifndef SMS_MANAGER_CLIENT_H
#define SMS_MANAGER_CLIENT_H

#include <mutex>
#include "i_sms_service_interface.h"
#include "if_system_ability_manager.h"
#include "iservice_registry.h"
#include "log.h"
#include "rwlock.h"
#include "sms_send_indexer.h"
#include "sms_service_proxy.h"
#include "system_ability.h"
#include "condition_lock.h"
#include "time_count_helper.h"

namespace OHOS {
namespace Telephony {
class SmsManagerClient {
public:
    SmsManagerClient();
    ~SmsManagerClient() = default;

    int32_t Init(int32_t systemAbilityId);
    void unInit();

    OHOS::sptr<OHOS::Telephony::ISmsServiceInterface> GetPtr();

private:
    int32_t systemAbilityId_;
    OHOS::sptr<OHOS::Telephony::ISmsServiceInterface> smsManagerServicePtr_;
    OHOS::Utils::RWLock rwClientlock_;

    int32_t ConnectService();
    void DisconnectService();
};

SmsManagerClient::SmsManagerClient() : smsManagerServicePtr_(nullptr) {}

int32_t SmsManagerClient::Init(int32_t systemAbilityId)
{
    LOG("Enter SmsManagerClient::Init, systemAbilityId:%d", systemAbilityId);
    systemAbilityId_ = systemAbilityId;
    int32_t result = ConnectService();
    LOG("Connect service: %X", result);
    return result;
}

void SmsManagerClient::unInit()
{
    DisconnectService();
    LOG("Disconnect service");
}

int32_t SmsManagerClient::ConnectService()
{
    int32_t ret = -1;
    Utils::UniqueWriteGuard<Utils::RWLock> guard(rwClientlock_);
    if (smsManagerServicePtr_ != nullptr) {
        LOG("Already get telephony base service");
        return ret;
    }

    LOG("Get telephony base service %d start", systemAbilityId_);
    sptr<ISystemAbilityManager> sm = SystemAbilityManagerClient::GetInstance().GetSystemAbilityManager();
    if (sm == nullptr) {
        LOG("GetSystemAbilityManager null");
        return ret;
    }

    sptr<Telephony::ISmsServiceInterface> smsManagerServicePtr =
        iface_cast<Telephony::ISmsServiceInterface>(sm->GetSystemAbility(systemAbilityId_));
    if (smsManagerServicePtr == nullptr) {
        LOG("GetSystemAbility null");
        return ret;
    }

    LOG("Get smsManagerServicePtr finish");
    smsManagerServicePtr_ = smsManagerServicePtr;
    return 0;
}

void SmsManagerClient::DisconnectService()
{
    LOG("Enter SmsManagerClient::DisconnectService");
    if (smsManagerServicePtr_ == nullptr) {
        Utils::UniqueWriteGuard<Utils::RWLock> guard(rwClientlock_);
        smsManagerServicePtr_ = nullptr;
    }
    LOG("Leave SmsManagerClient::DisconnectService");
}

OHOS::sptr<OHOS::Telephony::ISmsServiceInterface> SmsManagerClient::GetPtr()
{
    return smsManagerServicePtr_;
}

std::mutex _mutex;
namespace SendCallback {
static const int CALLBACK_SUCCESSFUL = 0;
static const int CALLBACK_ERROR = -1;
static const int CALLBACK_TEST = 1;
static int res = CALLBACK_ERROR;
const int LOOP_NUMBER = 10;
static int arrayCallback[LOOP_NUMBER] = {0};
static int arrayIndex = 0;
static TimeCountHelper timeHelper[LOOP_NUMBER];
static const int LOCK_WAIT_SLIP = 50;
static const int LOCK_WAIT_TIMEOUT = 60000;
class SendCallbackTest : public SendShortMessageCallbackStub {
public:
    SendCallbackTest() = default;
    virtual ~SendCallbackTest() = default;
    void OnSmsSendResult(const ISendShortMessageCallback::SmsSendResult result) override;

    bool GetSendCallbackResult();
    void SetSendCallbackResult(bool result);

private:
    bool isSendCallback_ = false;
};
} // namespace SendCallback

bool SendCallback::SendCallbackTest::GetSendCallbackResult()
{
    return isSendCallback_;
}
void SendCallback::SendCallbackTest::SetSendCallbackResult(bool result)
{
    isSendCallback_ = result;
}

void SendCallback::SendCallbackTest::OnSmsSendResult(const ISendShortMessageCallback::SmsSendResult result)
{
    res = CALLBACK_TEST;
    LOG("sms_mms_test SendCallbackTest result : %d", result);
    if (result == ISendShortMessageCallback::SmsSendResult::SEND_SMS_SUCCESS) {
        res = CALLBACK_SUCCESSFUL;
        int32_t useTimeUs = timeHelper[arrayIndex].GetUseTimeUs();
        arrayCallback[arrayIndex] = useTimeUs;
        arrayIndex++;
    }
    _mutex.lock();
    SetSendCallbackResult(true);
    _mutex.unlock();
    LOG("sms_mms_test SendCallbackTest res : %d....！！！！！！！！！！！！！！！！！", res);
}

namespace DeliveryShortback {
static const int CALLBACK_SUCCESSFUL = 0;
static const int CALLBACK_ERROR = -1;
static const int CALLBACK_TEST = 1;
static int res = CALLBACK_ERROR;
class DeliveryCallbackTest : public DeliveryShortMessageCallbackStub {
public:
    DeliveryCallbackTest() = default;
    virtual ~DeliveryCallbackTest() = default;
    void OnSmsDeliveryResult(const std::u16string pdu) override;

    bool GetDeliverybackResult();
    void SetDeliverybackResult(bool result);

private:
    bool isDeliveryback = false;
};
} // namespace DeliveryShortback

bool DeliveryShortback::DeliveryCallbackTest::GetDeliverybackResult()
{
    return isDeliveryback;
}
void DeliveryShortback::DeliveryCallbackTest::SetDeliverybackResult(bool result)
{
    isDeliveryback = result;
}

void DeliveryShortback::DeliveryCallbackTest::OnSmsDeliveryResult(const std::u16string pdu)
{
    LOG("sms_mms_test DeliveryCallbackTest OnSmsSendResult result !!!!");
    res = CALLBACK_TEST;
    if (!pdu.empty()) {
        res = CALLBACK_SUCCESSFUL;
        LOG("sms_mms_test DeliveryCallbackTest OnSmsSendResult pdu != null..... ");
    }
    _mutex.lock();
    SetDeliverybackResult(true);
    _mutex.unlock();
}
} // namespace Telephony
} // namespace OHOS

#endif