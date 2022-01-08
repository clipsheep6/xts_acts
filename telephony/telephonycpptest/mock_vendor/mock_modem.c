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

#include "mock_modem.h"
#include <stdlib.h>
#include <assert.h>
#include "telephony_log_c.h"
#include "mock_vendor_adapter.h"
#include "mock_report_public.h"

void ReqSetRadioState(const ReqDataInfo *requestInfo, int function, int reset)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    if (GetRadioState() == function) {
        RespErrnoFixDataLenEqualOne(HRIL_SIM_SLOT_0, requestInfo, OnModemReport, HRIL_ERR_REPEAT_STATUS);
        return;
    }
    SetRadioState(function, reset);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnModemReport);
    return;
}

void ReqGetRadioState(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilRadioState state = GetRadioState();
    TELEPHONY_LOGI("> radioState:%{public}d", (int)state);
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnModemReport, (const uint8_t *)&state, sizeof(HRilRadioState));
}

void InitModemMockData(void)
{
    SetRadioState(HRIL_RADIO_POWER_STATE_ON, 0);
}

void ReqGetVoiceRadioTechnology(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqGetImei(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    char *imei = "863163042380669";
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnNetworkReport, (const uint8_t *)imei, strlen(imei));
}

void ReqGetMeid(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    char *meid = "863163042380669";
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnNetworkReport, (const uint8_t *)meid, strlen(meid));
}