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
#include "mock_sim.h"
#include "telephony_log_c.h"
#include "mock_report_public.h"

struct SmsMockData {
    HRilSmsResponse hrilSmsResponse;
    HRilServiceCenterAddress hrilServiceCenterAddress;
    HRilCdmaCBConfigInfo cdmaCBConfig;
    HRilCBConfigInfo cellBroadcast;
} g_smsMockData;

void InitSmsMockData(void)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_smsMockData.hrilSmsResponse.msgRef = 1;

    g_smsMockData.hrilServiceCenterAddress.address = "+8613888888888";
    g_smsMockData.hrilServiceCenterAddress.tosca = 1;

    TELEPHONY_LOGE("Sms Mock Data Init Done");
}

void ReqSendGsmSms(const ReqDataInfo *requestInfo, const char *const *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport, (const uint8_t *)&g_smsMockData.hrilSmsResponse,
        sizeof(HRilSmsResponse));
}

void ReqSendSmsAck(const ReqDataInfo *requestInfo, const int32_t *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqSendCdmaSms(const ReqDataInfo *requestInfo, const char *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    return;
}

void ReqSendCdmaSmsAck(const ReqDataInfo *requestInfo, const char *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    return;
}

void ReqWriteSimMessage(const ReqDataInfo *requestInfo, const HRilSmsWriteSms *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    char *smsPdu = NULL;
    HRilSmsWriteSms *msg = ((HRilSmsWriteSms *)data);
    TELEPHONY_LOGI("%{public}s enter, pdu:%{public}s, smsc:%{public}s, status:%{public}d", __func__, msg->pdu,
        msg->smsc, msg->state);
    if (msg->smsc == NULL || (strcmp(msg->smsc, "") == 0)) {
        strcpy_s(msg->smsc, strlen("00"), "00");
    }
    asprintf(&smsPdu, "%s%s", msg->smsc, msg->pdu);
    StorageSms(&smsPdu);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqDelSimMessage(const ReqDataInfo *requestInfo, const int *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    int index = ((int *)data)[0];
    DeleteSms(index);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqUpdateSimMessage(const ReqDataInfo *requestInfo, const HRilSmsWriteSms *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    HRilSmsWriteSms *msg = ((HRilSmsWriteSms *)data);
    char *smsPdu = NULL;
    asprintf(&smsPdu, "%s", msg->pdu);
    UpdateSms(msg->index, &smsPdu);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqSetSmscAddr(const ReqDataInfo *requestInfo, const HRilServiceCenterAddress *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    HRilServiceCenterAddress *centerAddress = (HRilServiceCenterAddress *)data;
    g_smsMockData.hrilServiceCenterAddress.address = centerAddress->address;
    g_smsMockData.hrilServiceCenterAddress.tosca = centerAddress->tosca;
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqGetSmscAddr(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport,
        (const uint8_t *)&g_smsMockData.hrilServiceCenterAddress, sizeof(HRilServiceCenterAddress));
}

void ReqSetCBConfig(const ReqDataInfo *requestInfo, const HRilCBConfigInfo *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    if (data == NULL) {
        RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport, HRIL_ERR_GENERIC_FAILURE);
        return;
    }
    g_smsMockData.cellBroadcast = *data;
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqGetCBConfig(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport, (const uint8_t *)&g_smsMockData.cellBroadcast,
        sizeof(HRilCBConfigInfo));
}

void ReqGetCdmaCBConfig(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport, (const uint8_t *)&g_smsMockData.cdmaCBConfig,
        sizeof(HRilCdmaCBConfigInfo));
}

void ReqSetCdmaCBConfig(const ReqDataInfo *requestInfo, const HRilCdmaCBConfigInfo *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, len:%{public}d", __func__, __LINE__, dataLen);
    if (data == NULL) {
        RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport, HRIL_ERR_GENERIC_FAILURE);
        return;
    }
    g_smsMockData.cdmaCBConfig = *data;
    int size = dataLen / sizeof(HRilCdmaCBConfigInfo);
    if (size <= 0) {
        RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport, HRIL_ERR_GENERIC_FAILURE);
        return;
    }
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqAddCdmaSimMessage(const ReqDataInfo *requestInfo, const HRilSmsWriteSms *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    if (data == NULL) {
        RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport, HRIL_ERR_GENERIC_FAILURE);
        return;
    }
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqDelCdmaSimMessage(const ReqDataInfo *requestInfo, const int32_t *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    if (data == NULL) {
        RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport, HRIL_ERR_GENERIC_FAILURE);
        return;
    }

    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}

void ReqUpdateCdmaSimMessage(const ReqDataInfo *requestInfo, const HRilSmsWriteSms *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);

    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSmsReport);
}