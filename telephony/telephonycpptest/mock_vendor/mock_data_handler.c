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

#include "mock_data_handler.h"
#include "mock_vendor_common.h"
#include "telephony_log_c.h"
#include "mock_report_public.h"

void InvokeNetworkFunc(int id, const char *data, int dataLen)
{
    switch (id) {
        case NETWORK_SEARCH_SET_SHORT_OPERATOR:
            SetShortOperator(data, dataLen);
            break;
        case NETWORK_SEARCH_SET_LONG_OPERATOR:
            SetLongOperator(data, dataLen);
            break;
        case NETWORK_SEARCH_SET_REG_STATUS:
            SetRegServiceState((int)(((int *)data)[0]), (int)(((int *)data)[1]));
            break;
        case NETWORK_SEARCH_SET_RADIO_TECH:
            SetRadioTech((int)(((int *)data)[0]), (int)(((int *)data)[1]));
            break;
        case NETWORK_SEARCH_SET_NUMERIC:
            SetNumertic(data, dataLen);
            break;
        case NETWORK_SEARCH_SET_ROAMING:
            break;
        case NETWORK_SEARCH_SET_RAW_REG_STATUS:
            SetRegServiceRawState((int)(((int *)data)[0]), (int)(((int *)data)[1]));
            break;
        case NETWORK_SEARCH_SET_PLMN_STATE:
            SetOperStatus(*(int *)data);
            break;
        case NETWORK_SEARCH_SET_RAT:
            SetOperRat(*(int *)data);
            break;
        case NETWORK_SEARCH_CHANGE_STATE:
            SetNetworkStatus(data, dataLen);
            break;
        case NETWORK_SEARCH_SET_SIGNAL:
            SetSignal(data, dataLen);
            break;
        default:
            break;
    }
}
void InvokeDataFunc(int id, const char *data, int dataLen)
{
    switch (id) {
        case DATA_SET_ERR_TYPE:
            SetErrnoType(data, dataLen);
            break;
        case DATA_REPORT_LOST_ACTIVE_EVENT:
            ReportLostActiveEvent();
            break;
        default:
            break;
    }
}
void InvokeSimFunc(int id, const char *data, int dataLen)
{
    switch (id) {
        case SIM_CHANGE_ICCID:
            SetSimIccid(data, dataLen);
            break;
        case SIM_SET_PIN:
            SetSimPin(data, dataLen);
            break;
        case SIM_SET_PUK:
            SetSimPuk(data, dataLen);
            break;
        case SIM_SET_PIN2:
            SetSimPin2(data, dataLen);
            break;
        case SIM_SET_PUK2:
            SetSimPuk2(data, dataLen);
            break;
        case SIM_SET_STATE:
            SetSimState(data, dataLen);
            break;
        case SIM_SET_CARD_TYPE:
            SetSimCardType(data, dataLen);
            break;
        case SIM_INIT:
            InitSimMockData();
            break;
        case SIM_NOTIFY:
            NotifySuccessWithoutData(HRIL_SIM_SLOT_0, OnSimReport, HNOTI_SIM_STATUS_CHANGED);
            break;
        default:
            break;
    }
}
void InvokeCallFunc(int id, const char *data, int dataLen)
{
    switch (id) {
        case CALL_REMOVE_ALL_CALL:
            RemoveAllCallInfo();
            break;
        case CALL_ADD_COMING_CALL:
            AddComingCallInfo(data, dataLen);
            break;
        case CALL_REMOVE_CALL:
            RemoveCallInfo(data, dataLen);
            break;
        case CALL_LIST_CHANGE_NOTIFY:
            NotifySuccessWithoutData(HRIL_SIM_SLOT_0, OnCallReport, HNOTI_CALL_STATE_UPDATED);
            return;
        case CALL_ACCEPT_CALL:
            AcceptCall(data, dataLen);
            break;
        case CALL_VIEW_CALL_INFO:
            ViewCallInfo();
            break;
        default:
            break;
    }
}

void Dispatch(int id, const char *data, int dataLen)
{
    TELEPHONY_LOGI("Dispatch id:%{public}d, data:%{public}s, dataLen:%{public}d", id, data, dataLen);
    if (id > COMMON_BASE) {
        TELEPHONY_LOGE("line:%{public}d,invalid id:%{public}d", __LINE__, id);
    } else if (id > NETWORK_BASE) {
        InvokeNetworkFunc(id, data, dataLen);
    } else if (id > DATA_BASE) {
        InvokeDataFunc(id, data, dataLen);
    } else if (id > SIM_BASE) {
        InvokeSimFunc(id, data, dataLen);
    } else if (id > CALL_BASE) {
        InvokeCallFunc(id, data, dataLen);
    } else {
        TELEPHONY_LOGE("line:%{public}d,invalid id:%{public}d", __LINE__, id);
    }
}