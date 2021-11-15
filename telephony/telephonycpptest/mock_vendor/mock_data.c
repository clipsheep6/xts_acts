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
#include "macro.h"

const int DATA_CALL_LENGTH = 2;
struct CallMockData {
    HRilDataCallResponse pDataCalls[DATA_CALL_LENGTH];
} g_dataMockData;

// AT+CGDCONT?
// cid, pdp_type, apn, <PDP_addr, d_comp, h_comp
// 1,"IP","ABCDEF","200.1.1.80",1,2


void FreeDataCallResponse(HRilDataCallResponse* pDcrs, int size)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void PdpContextListUpdated(int cid, const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < DATA_CALL_LENGTH; i++) {
        if (g_dataMockData.pDataCalls[i].cid == cid) {
            RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnDataReport,
                (const uint8_t *)&(g_dataMockData.pDataCalls[i]), sizeof(HRilDataCallResponse));
            NotifySuccessWithData(HRIL_SIM_SLOT_1, OnDataReport, HNOTI_DATA_PDP_CONTEXT_LIST_UPDATED, 
                (const uint8_t *)&g_dataMockData.pDataCalls, sizeof(HRilDataCallResponse));
            return;
        }
    }
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnDataReport,
                (const uint8_t *)&g_dataMockData.pDataCalls, DATA_CALL_LENGTH * sizeof(HRilDataCallResponse));
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnDataReport, HNOTI_DATA_PDP_CONTEXT_LIST_UPDATED, 
        (const uint8_t *)&g_dataMockData.pDataCalls, DATA_CALL_LENGTH * sizeof(HRilDataCallResponse));
}

void ReqActivatePdpContext(const ReqDataInfo *requestInfo, const HRilDataInfo *data)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    PdpContextListUpdated(1, requestInfo);
}

void ReqDeactivatePdpContext(const ReqDataInfo *requestInfo, const HRilDataInfo *data)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    const HRilDataInfo *pDataInfo = data;
    for (int i = 0; i < DATA_CALL_LENGTH; i++) {
        if(pDataInfo->cid == g_dataMockData.pDataCalls[i].cid) {
            g_dataMockData.pDataCalls[0].active = 0;
            PdpContextListUpdated(pDataInfo->cid, requestInfo);
            return;
        }
    }
    PdpContextListUpdated(pDataInfo->cid, requestInfo);
}

void ReqGetPdpContextList(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    PdpContextListUpdated(DEFAULT_CID, requestInfo);
}

void InitDataMockData(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_dataMockData.pDataCalls[0].cid = 1;
    g_dataMockData.pDataCalls[0].active = 1;
    // fixme:maybe need find a location to free this strdup memory if those data need to update in futue
    g_dataMockData.pDataCalls[0].type = strdup("IP");
    g_dataMockData.pDataCalls[0].netPortName = strdup("usb0");
    g_dataMockData.pDataCalls[0].address = strdup("22.0.126.10:252.255.255.255");
    g_dataMockData.pDataCalls[0].gateway = strdup("21.0.126.10");
    g_dataMockData.pDataCalls[0].dns = strdup("101.55.72.10");
    g_dataMockData.pDataCalls[0].maxTransferUnit = 7200000;
}