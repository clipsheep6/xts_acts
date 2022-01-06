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

#include "mock_data.h"
#include <string.h>
#include "telephony_log_c.h"
#include "mock_report_public.h"

const int DATA_CALL_LENGTH = 2;
static bool retFailFlag = false;
static bool reportLostEvent = false;
static HRilErrNumber mockErrno;
struct CallMockData {
    HRilDataCallResponse pDataCalls[DATA_CALL_LENGTH];
} g_dataMockData;

// AT+CGDCONT?
// cid, pdp_type, apn, <PDP_addr, d_comp, h_comp
// 1,"IP","ABCDEF","200.1.1.80",1,2
void SetErrnoType(const char *data, int dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilErrNumber err = HRIL_ERR_NULL_POINT;
    if (memcpy_s(&err, sizeof(HRilErrNumber), data, dataLen) != 0) {
        return;
    }
    TELEPHONY_LOGI("err:%{public}d", err);
    retFailFlag = true;
    mockErrno = err;
}

void ReportLostActiveEvent(void)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_dataMockData.pDataCalls[0].cid = -1;
    NotifySuccessWithData(HRIL_SIM_SLOT_0, OnDataReport, HNOTI_DATA_PDP_CONTEXT_LIST_UPDATED,
        (const uint8_t *)&(g_dataMockData.pDataCalls[0]), sizeof(HRilDataCallResponse));
    reportLostEvent = true;
}

void PdpContextListUpdated(int cid, const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    if (requestInfo != NULL) {
        TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
        TELEPHONY_LOGI("cid:%{public}d,active:%{public}d,type:%{public}s", g_dataMockData.pDataCalls[0].cid,
            g_dataMockData.pDataCalls[0].active, g_dataMockData.pDataCalls[0].type);
        RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnDataReport,
            (const uint8_t *)&(g_dataMockData.pDataCalls[0]), sizeof(HRilDataCallResponse));
    } else {
        TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
        NotifySuccessWithData(HRIL_SIM_SLOT_0, OnDataReport, HNOTI_DATA_PDP_CONTEXT_LIST_UPDATED,
            (const uint8_t *)&g_dataMockData.pDataCalls, DATA_CALL_LENGTH * sizeof(HRilDataCallResponse));
    }
}

void ReqActivatePdpContext(const ReqDataInfo *requestInfo, const HRilDataInfo *data)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGI("serial:%{public}d", requestInfo->serial);
    TELEPHONY_LOGI("cid:%{public}d,apn:%{public}s,type:%{public}s", data->cid, data->apn, data->type);
    g_dataMockData.pDataCalls[0].active = 1;
    int sleepTwoSecond = 2;
    if (retFailFlag) {
        TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
        sleep(sleepTwoSecond);
        retFailFlag = false;
        RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnDataReport, mockErrno);
        return;
    }
    if (reportLostEvent) {
        TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
        g_dataMockData.pDataCalls[0].cid = 1;
        reportLostEvent = false;
    }
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    sleep(sleepTwoSecond);
    PdpContextListUpdated(1, requestInfo);
}

void ReqDeactivatePdpContext(const ReqDataInfo *requestInfo, const HRilDataInfo *data)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    const HRilDataInfo *pDataInfo = data;
    for (int i = 0; i < DATA_CALL_LENGTH; i++) {
        if (pDataInfo->cid == g_dataMockData.pDataCalls[i].cid) {
            g_dataMockData.pDataCalls[0].active = 0;
            PdpContextListUpdated(pDataInfo->cid, requestInfo);
            return;
        }
    }
    PdpContextListUpdated(pDataInfo->cid, requestInfo);
}

void ReqGetPdpContextList(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    PdpContextListUpdated(DEFAULT_CID, requestInfo);
}

void InitDataMockData(void)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int maxTransferUnit = 7200000;
    g_dataMockData.pDataCalls[0].cid = 1;
    g_dataMockData.pDataCalls[0].active = 1;
    // fixme:maybe need find a location to free this strdup memory if those data need to update in futue
    g_dataMockData.pDataCalls[0].type = strdup("IPV4V6");
    g_dataMockData.pDataCalls[0].netPortName = strdup("usb0");
    g_dataMockData.pDataCalls[0].address = strdup("10.124.109.118.255.255.255.252");
    g_dataMockData.pDataCalls[0].gateway = strdup("10.124.109.117");
    g_dataMockData.pDataCalls[0].dns = strdup("120.196.165.7");
    g_dataMockData.pDataCalls[0].maxTransferUnit = maxTransferUnit;
}

void ReqSetInitApnInfo(const ReqDataInfo *requestInfo, const HRilDataInfo *data)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqGetLinkBandwidthInfo(const ReqDataInfo *requestInfo, const int cid)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqSetLinkBandwidthReportingRule(const ReqDataInfo *requestInfo, const HRilLinkBandwidthReportingRule *data)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}
