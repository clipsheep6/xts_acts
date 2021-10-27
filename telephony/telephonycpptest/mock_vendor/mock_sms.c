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
#include "mock_sms.h"
#include "macro.h"
#include "mock_sim.h"
#include "telephony_log_c.h"

struct SmsMockData {
    HRilSmsResponse hrilSmsResponse;
    HRilServiceCenterAddress hrilServiceCenterAddress;
} g_smsMockData;

void InitSmsMockData(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_smsMockData.hrilSmsResponse.msgRef = 1;

    g_smsMockData.hrilServiceCenterAddress.address = "+8613888888888";
    g_smsMockData.hrilServiceCenterAddress.tosca = 1;

    TELEPHONY_LOGE("Sms Mock Data Init Done");
}

void ReqSendSms(const ReqDataInfo *requestInfo, const void *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnSmsReport, &g_smsMockData.hrilSmsResponse, sizeof(HRilSmsResponse));
}

void ReqSendSmsAck(const ReqDataInfo *requestInfo, const int32_t *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnSmsReport);
}

void ReqSendCdmaSms(const ReqDataInfo *requestInfo, const HRilCdmaSmsMessageInfo *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    return;
}

void ReqSendCdmaSmsAck(const ReqDataInfo *requestInfo, const char *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    return;
}

void ReqStorageSms(const ReqDataInfo *requestInfo, const HRilSmsWriteSms *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    char *smsPdu = NULL;
    HRilSmsWriteSms *msg = ((HRilSmsWriteSms*)data);
    TELEPHONY_LOGD("%{public}s enter, pdu:%{public}s, smsc:%{public}s, status:%{public}d", __func__, msg->pdu,
        msg->smsc, msg->state);
    if (msg->smsc == NULL || (strcmp(msg->smsc, "") == 0)) {
        strcpy_s(msg->smsc, strlen("00"), "00");
    }
    asprintf(&smsPdu, "%s%s", msg->smsc, msg->pdu);
    StorageSms(&smsPdu);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnSmsReport);
}

void ReqDeleteSms(const ReqDataInfo *requestInfo, const int *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    int index = ((int*)data)[0];
    DeleteSms(index);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnSmsReport);
}

void ReqUpdateSms(const ReqDataInfo *requestInfo, const HRilSmsWriteSms *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    HRilSmsWriteSms *msg = ((HRilSmsWriteSms*)data);
    char *smsPdu = NULL;
    asprintf(&smsPdu, "%s", msg->pdu);
    UpdateSms(msg->index, &smsPdu);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnSmsReport);
}

void ReqSetSmsCenterAddress(const ReqDataInfo *requestInfo, const HRilServiceCenterAddress *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    HRilServiceCenterAddress *centerAddress = (HRilServiceCenterAddress*)data;
    g_smsMockData.hrilServiceCenterAddress.address = centerAddress->address;
    g_smsMockData.hrilServiceCenterAddress.tosca = centerAddress->tosca;
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnSmsReport);
}

void ReqGetSmsCenterAddress(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnSmsReport, &g_smsMockData.hrilServiceCenterAddress,
        sizeof(HRilServiceCenterAddress));
}

void ReqSetCBConfig(const ReqDataInfo *requestInfo, const HRilCellBroadcastInfo *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnSmsReport);
}

void ReqGetCBConfig(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqGetCdmaCBConfig(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqSetCdmaCBConfig(const ReqDataInfo *requestInfo, const HRilCDMACellBroadcastInfo *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
}

int ProcessCellBroadcast(char *s, HRilCellBroadcastReportInfo *response)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}

int IsCallNoticeCmd(const char *str)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}

void CallResportInfoProcess(const char *str)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}