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
#include "macro.h"
#include "mock_call.h"
#include "mock_network.h"
#include "mock_sim.h"
#include "mock_vendor_common.h"
#include "telephony_log_c.h"

static char buffer[BUFSIZ];
void Dispatch(int id, const char *data, int dataLen)
{
    TELEPHONY_LOGE("Dispatch id:%{public}d, data:%{public}s, dataLen:%{public}d", id, data, dataLen);
    INIT_STRING_BUFF(buffer, '\0', BUFSIZ);
    strncpy_s(buffer, BUFSIZ, data, dataLen);
    switch (id) {
        case CALL_ADD_COMING_CALL:
            AddComingCallInfo(buffer);
            break;
        case CALL_REMOVE_CALL:
            RemoveCallInfo(buffer);
            break;
        case CALL_LIST_CHANGE_NOTIFY:
            NOTIFY_SUCSS_WITHOUT_DATA(OnCallReport, HNOTI_CALL_STATE_UPDATED);
            return;
        case CALL_ACCEPT_CALL:
            AcceptCall(buffer);
            break;
        case SIM_CHANGE_ICCID:
            SetSimIccid(data, dataLen);
            break;
        case NETWORK_SEARCH_SET_SHORT_OPERATOR:
            SetShortOperator(data, dataLen);
            break;
        case NETWORK_SEARCH_SET_LONG_OPERATOR:
            SetLongOperator(data, dataLen);
            break;
        case NETWORK_SEARCH_SET_REG_STATUS:
            SetRegServiceState((int)(((int*)data)[0]), (int)(((int*)data)[1]));
            break;
        case NETWORK_SEARCH_SET_RADIO_TECH:
            SetRadioTech((int)(((int*)data)[0]), (int)(((int*)data)[1]));
            break;
        case NETWORK_SEARCH_SET_NUMERIC:
            SetNumertic(data, dataLen);
            break;
        case NETWORK_SEARCH_SET_ROAMING:
            break;
        case NETWORK_SEARCH_SET_RAW_REG_STATUS:
            SetRegServiceRawState((int)(((int*)data)[0]), (int)(((int*)data)[1]));
            break;
        case NETWORK_SEARCH_SET_PLMN_STATE:
            SetPlmnState(*(int*)data);
            break;
        case NETWORK_SEARCH_SET_RAT:
            SetRadioTechnology(*(int*)data);
            break;
        case CALL_VIEW_CALL_INFO:
            ViewCallInfo();
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
        case SIM_INIT:
            InitSimMockData();
            break;
        case CALL_REMOVE_ALL_CALL:
            RemoveAllCallInfo();
            break;
        case SIM_NOTIFY:
            NOTIFY_SUCSS_WITHOUT_DATA(OnSimReport, HNOTI_SIM_STATUS_CHANGED);
            break;
        default:
            TELEPHONY_LOGE("not impl, %{public}d", id);
    }
}