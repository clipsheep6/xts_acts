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

#ifndef MOCK_VENDOR_COMMON_H
#define MOCK_VENDOR_COMMON_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

enum DISPATCHID {
    CALL_BASE = 0,
    CALL_ADD_COMING_CALL = 1,
    CALL_REMOVE_CALL = 2,
    CALL_LIST_CHANGE_NOTIFY = 3,
    CALL_VIEW_CALL_INFO = 4,
    CALL_ACCEPT_CALL = 5,
    CALL_REMOVE_ALL_CALL = 6,
    SMS_BASE = 10000000,
    SIM_BASE = 20000000,
    SIM_SET_PIN = 20000001,
    SIM_SET_PUK = 20000002,
    SIM_SET_STATE = 20000003,
    SIM_SET_PIN2 = 20000004,
    SIM_SET_PUK2 = 20000005,
    SIM_SET_CARD_TYPE = 20000006,
    SIM_CHANGE_ICCID = 20300001,
    SIM_INIT = 20300002,
    SIM_NOTIFY = 20300003,
    DATA_BASE = 30000000,
    DATA_SET_ERR_TYPE = 30000001,
    DATA_REPORT_LOST_ACTIVE_EVENT = 30000002,
    NETWORK_BASE = 40000000,
    NETWORK_SEARCH_SET_SHORT_OPERATOR = 40300001,
    NETWORK_SEARCH_SET_LONG_OPERATOR = 40300002,
    NETWORK_SEARCH_SET_NUMERIC = 40300003,
    NETWORK_SEARCH_SET_REG_STATUS = 40300004,
    NETWORK_SEARCH_SET_RADIO_TECH = 40300005,
    NETWORK_SEARCH_SET_ROAMING = 40300006,
    NETWORK_SEARCH_SET_RAW_REG_STATUS = 40300007,
    NETWORK_SEARCH_SET_PLMN_STATE = 40300008,
    NETWORK_SEARCH_SET_RAT = 40300009,
    NETWORK_SEARCH_CHANGE_STATE = 40300010,
    NETWORK_SEARCH_SET_SIGNAL = 40300011,
    NETWORK_SEARCH_SET_CELL_INFO = 40300012,
    COMMON_BASE = 50000000,
};

struct SharedMemorySt {
    int full; // 1---表示满了不能写只能读, 0---表示没满可以写不能读
    int id;
    char data[BUFSIZ];
    int dataLen;
};

typedef struct NetworkStatus {
    char longOptName[30];
    char shortOptName[30];
    char plmn[30];
    int isRoaming;
    int regStatus;
    int nsaState;
    int isCaActive;
    int isEmergency;
} NetworkStatus;

typedef struct {
    int type;
    int lac;
    int cellId;
    int arfcn;
    int bsic;
    int mcc;
    int mnc;
} MockCellInfo;

typedef struct SignalInfo {
    int signalType;
    int signalLevel;
} SignalInfo;

#ifdef __cplusplus
}
#endif

#endif // MOCK_VENDOR_COMMON_H