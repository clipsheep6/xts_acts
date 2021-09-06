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
#include "at_sms.h"
#include "macro.h"

struct SmsMockData {
    HRilSmsResponse hrilSmsResponse;
    HRilServiceCenterAddress hrilServiceCenterAddress;
} g_smsMockData;

void InitSmsMockData()
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_smsMockData.hrilSmsResponse.msgRef = 1;

    g_smsMockData.hrilServiceCenterAddress.address = "+8613888888888";
    g_smsMockData.hrilServiceCenterAddress.tosca = 1;

    TELEPHONY_LOGE("Sms Mock Data Init Done");
}

void ReqSendSms(void *requestInfo, void *data, size_t dataLen __unused)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(OnSmsReport, &g_smsMockData.hrilSmsResponse, sizeof(HRilSmsResponse *));
}

void ReqSendSmsAck(void *requestInfo, void *data, size_t dataLen __unused)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITHOUT_DATA(OnSmsReport);
}

void ReqStorageSms(void *requestInfo, void *data, size_t dataLen __unused)
{
    char* smsPdu = NULL;
    HRilSmsWriteSms* msg = ((HRilSmsWriteSms*)data);
    TELEPHONY_LOGD("%{public}s enter, pdu:%{public}s, smsc:%{public}s, status:%{public}d", __func__, msg->pdu,
        msg->smsc, msg->state);
    if (msg->smsc == NULL || (strcmp(msg->smsc, "") == 0)) {
        strcpy_s(msg->smsc, strlen("00"), "00");
    }
    asprintf(&smsPdu, "%s%s", msg->smsc, msg->pdu);
    StorageSms(&smsPdu);
    RESP_SUCSS_WITHOUT_DATA(OnSmsReport);
}

void ReqDeleteSms(void *requestInfo, void *data, size_t dataLen __unused)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int index = ((int*)data)[0];
    DeleteSms(index);
    RESP_SUCSS_WITHOUT_DATA(OnSmsReport);
}

void ReqUpdateSms(void *requestInfo, void *data, size_t dataLen __unused)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSmsWriteSms* msg = ((HRilSmsWriteSms*)data);
    char* smsPdu = NULL;
    asprintf(&smsPdu, "%s", msg->pdu);
    UpdateSms(msg->index, &smsPdu);
    RESP_SUCSS_WITHOUT_DATA(OnSmsReport);
}

void ReqSetSmsCenterAddress(void *requestInfo, void *data, size_t dataLen __unused)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilServiceCenterAddress *centerAddress = (HRilServiceCenterAddress *)data;
    g_smsMockData.hrilServiceCenterAddress.address = centerAddress->address;
    g_smsMockData.hrilServiceCenterAddress.tosca = centerAddress->tosca;
    RESP_SUCSS_WITHOUT_DATA(OnSmsReport);
}

void ReqGetSmsCenterAddress(void *requestInfo, void *data, size_t dataLen __unused)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(OnSmsReport, &g_smsMockData.hrilServiceCenterAddress, sizeof(HRilServiceCenterAddress *));
}

void ReqSetCellBroadcast(void *requestInfo, void *data, size_t dataLen __unused)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITHOUT_DATA(OnSmsReport);
}