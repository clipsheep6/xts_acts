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
#include "macro.h"
#include "telephony_log_c.h"
#include "vendor_adapter.h"

extern int SetRadioState(HRilRadioState newState, int rst);

void ReqSetRadioState(const ReqDataInfo *requestInfo, int function, int reset)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int ret = HRIL_ERR_SUCCESS;
    if (GetRadioState() == function) {
        struct ReportInfo reportInfo;
        reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_REPEAT_STATUS, HRIL_RESPONSE, 0);
        OnModemReport(HRIL_SIM_SLOT_1, reportInfo, NULL, 1);
        return;
    }
    ret = SetRadioState(function, reset);
    COMMON_RESP_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnModemReport, ret, 0)
    return;
}

void ReqGetRadioState(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilRadioState state = GetRadioState();
    TELEPHONY_LOGD("> radioState:%{public}d", (int)state);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnModemReport, &state, sizeof(HRilRadioState));
}

void InitModemData(void)
{
    SetRadioState(HRIL_RADIO_POWER_STATE_ON, 0);
}