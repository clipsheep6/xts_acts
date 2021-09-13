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

#include "mock_sim.h"
#include "macro.h"
#include "telephony_log_c.h"

#define HDF_LOG_TAG mock_vendor

// pin/puk password incorect
const int UNLOCK_PIN_PUK_INCORRECT = 16; // incorrect password
// Current valid phone id
const int CUR_VALID_PHONEID = 1;
// Phone number
const int SIM_CARD_NUM = 2;
// The events for handleMessage
const int MSG_SIM_GET_ICC_STATUS_DONE = 3;
// Unlock pin
const int MSG_SIM_UNLOCK_PIN_DONE = 4;
// Unlock puk
const int MSG_SIM_UNLOCK_PUK_DONE = 5;
// Change pin
const int MSG_SIM_CHANGE_PIN_DONE = 6;
// Check pin state
const int MSG_SIM_CHECK_PIN_DONE = 7;
// Set pin state[0:close_lock_state], [1:open_lock_state]
const int MSG_SIM_ENABLE_PIN_DONE = 8;
// Get sim unlock remain
const int MSG_SIM_UNLOCK_REMAIN_DONE = 10;
// Get sim realtime icc state
const int MSG_SIM_GET_REALTIME_ICC_STATUS_DONE = 21;
const int SIM_SMS_MAX_LEN = 255;

char* INVALID_SMS = "00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
struct SimLockState {
    char name[5];
    int state;
    char passwd[20];
};

struct SimMockData {
    HRilCardState cardState;
    char imsi[100];
    char iccid[100];
    struct SimLockState stateList[20];
    int stateListIndex;
    char pin[10];
    char puk[10];
    char* mem[SIM_SMS_MAX_LEN];
    bool memFull[SIM_SMS_MAX_LEN];
    HRilPinInputTimes pinInputTimes;
} g_simMockData;

void StorageSms(char** pdu)
{
    for (int i = 0; i < SIM_SMS_MAX_LEN; i++) {
        if (!g_simMockData.memFull[i]) {
            g_simMockData.mem[i] = *pdu;
            g_simMockData.memFull[i] = true;
            break;
        }
    }
}

void DeleteSms(int index)
{
    if (index >= SIM_SMS_MAX_LEN) {
        return;
    }
    free(g_simMockData.mem[index]);
    g_simMockData.mem[index] = NULL;
    g_simMockData.memFull[index] = false;
}

void UpdateSms(int index, char** pdu)
{
    if (index >= SIM_SMS_MAX_LEN) {
        return;
    }
    free(g_simMockData.mem[index]);
    g_simMockData.mem[index] = *pdu;
}

void AddLockState(char* name, int state, char* passwd)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[g_simMockData.stateListIndex].name, name);
    g_simMockData.stateList[g_simMockData.stateListIndex].state = state;
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[g_simMockData.stateListIndex].passwd, passwd);
    g_simMockData.stateListIndex++;
}

int GetLockStatusIndex(const char* name)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int ret = -1;
    for (int i = 0; i < g_simMockData.stateListIndex; i++) {
        if (strcmp(g_simMockData.stateList[i].name, name) != 0) {
            continue;
        }
        ret = i;
        break;
    }
    return ret;
}

void ShowLockState()
{
    TELEPHONY_LOGD("===========ShowLockState===========");
    TELEPHONY_LOGD("stateListIndex:%{public}d", g_simMockData.stateListIndex);
    TELEPHONY_LOGD("pin:%{public}s", g_simMockData.stateList[GetLockStatusIndex("SC")].passwd);
    TELEPHONY_LOGD("puk:%{public}s", g_simMockData.puk);
    for (int i = 0; i < g_simMockData.stateListIndex; i++) {
        TELEPHONY_LOGD("name:%{public}s", g_simMockData.stateList[i].name);
        TELEPHONY_LOGD("state:%{public}d", g_simMockData.stateList[i].state);
        TELEPHONY_LOGD("passwd:%{public}s", g_simMockData.stateList[i].passwd);
    }
    TELEPHONY_LOGD("===========ShowLockState end===========");
}

int UpdateLockState(const char* name, int state, const char* passwd, const char* new_passwd)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, [%{public}s], [%{public}s]", name, state, passwd, new_passwd);
    int ret = -1;
    for (int i = 0; i < g_simMockData.stateListIndex; i++) {
        if (strcmp(g_simMockData.stateList[i].name, name) != 0) {
            continue;
        }
        if (strcmp(g_simMockData.stateList[i].passwd, passwd) != 0) {
            ret = UNLOCK_PIN_PUK_INCORRECT;
            break;
        }
        if (state != -1) {
            g_simMockData.stateList[i].state = state;
        }
        if (strcmp(new_passwd, "") != 0) {
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[i].passwd, new_passwd);
        }
        ret = 0;
        break;
    }
    return ret;
}

int SimGetLockStatusByName(const char* name)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int index = GetLockStatusIndex(name);
    return g_simMockData.stateList[index].state;
}

int SimSetLockStatus(const char* fac, int mode, const char* password)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return UpdateLockState(fac, mode, password, "");
}

static const int defaultTimes3 = 3;
static const int defaultTimes10 = 10;
void InitLockState()
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_simMockData.stateListIndex = 0;
    char* default_passwd = "123456";
    AddLockState("OX", 1, default_passwd);
    AddLockState("AI", 1, default_passwd);
    AddLockState("IR", 1, default_passwd);
    AddLockState("AB", 1, default_passwd);
    AddLockState("AG", 1, default_passwd);
    AddLockState("AC", 1, default_passwd);
    AddLockState("FD", 1, default_passwd);
    AddLockState("PN", 1, default_passwd);
    AddLockState("PU", 1, default_passwd);
    AddLockState("PP", 1, default_passwd);
    AddLockState("SC", 1, default_passwd);
    AddLockState("P2", 1, default_passwd);

    g_simMockData.pinInputTimes.code = "READY";
    g_simMockData.pinInputTimes.pin2Times = defaultTimes3;
    g_simMockData.pinInputTimes.pinTimes = defaultTimes3;
    g_simMockData.pinInputTimes.puk2Times = defaultTimes10;
    g_simMockData.pinInputTimes.pukTimes = defaultTimes10;
    g_simMockData.pinInputTimes.times = defaultTimes3;
}

void InitSimMockData()
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    InitLockState();
    g_simMockData.cardState.simType = HRIL_SIM;
    g_simMockData.cardState.simState = HRIL_SIM_READY;

    char* tmImsi = "460028955072477";
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.imsi, tmImsi);

    char* tmpIccid = "98680020918170716515";
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.iccid, tmpIccid);

    char* tmpPin = "1234";
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[GetLockStatusIndex("SC")].passwd, tmpPin);
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[GetLockStatusIndex("P2")].passwd, tmpPin);

    char* tmpPuk = "12345678";
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.puk, tmpPuk);

    TELEPHONY_LOGE("Sim Mock Data Init Done");
}

void ReqGetSimStatus(void* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(OnSimReport, &g_simMockData.cardState, sizeof(HRilCardState));
}

void ReqGetSimIO(void* requestInfo, void* data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimIOResponse SimResponse;
    SimResponse.sw1 = 144;
    SimResponse.sw2 = 0;
    char* cmd = NULL;
    char* response = NULL;
    HRilSimIO* pSim = (HRilSimIO*)data;
    asprintf(&cmd, "AT+CRSM=%d,%d,%d,%d,%d,%s,\"%s\"", pSim->command, pSim->fileid, pSim->p1, pSim->p2, pSim->p3,
        (pSim->data == NULL ? "" : pSim->data), pSim->pathid);
    if (pSim->command == 178 && pSim->fileid == 28476) {
        if (g_simMockData.memFull[pSim->p1]) {
            SimResponse.response = g_simMockData.mem[pSim->p1];
        } else {
            SimResponse.response = INVALID_SMS;
        }
    } else if (strcmp("AT+CRSM=192,12258,0,0,15", cmd) == 0) {
        response = "62178202412183022FE28A01058B03";
        SimResponse.response = response;
    } else if (strcmp("AT+CRSM=192,28486,0,0,15", cmd) == 0) {
        response = "62168202412183026F468A01058B03";
        SimResponse.response = response;
    } else if (strcmp("AT+CRSM=192,28478,0,0,15", cmd) == 0) {
        response = "62168202412183026F3E8A01058B03";
        SimResponse.response = response;
    } else if (strcmp("AT+CRSM=192,28421,0,0,15", cmd) == 0) {
        response = "621C8202412183026F05A503800171";
        SimResponse.response = response;
    } else if (strcmp("AT+CRSM=192,12037,0,0,15", cmd) == 0) {
        response = "621C8202412183022F05A503800171";
        SimResponse.response = response;
    } else if (pSim->command == 176 && pSim->fileid == 12258) {
        TELEPHONY_LOGD("request for iccid:%{public}s", g_simMockData.iccid);
        response = g_simMockData.iccid;
        SimResponse.response = response;
    } else if (strcmp("AT+CRSM=176,28486,0,0,0", cmd) == 0) {
        response = "00434D4343FFFFFFFFFFFFFFFFFFFFFFFF";
        SimResponse.response = response;
    } else if (strcmp("AT+CRSM=176,28478,0,0,0", cmd) == 0) {
        response = "FFFFFFFF";
        SimResponse.response = response;
    } else if (strcmp("AT+CRSM=176,28421,0,0,0", cmd) == 0) {
        response = "FFFFFFFFFFFFFFFF";
        SimResponse.response = response;
    } else if (strcmp("AT+CRSM=176,12037,0,0,0", cmd) == 0) {
        response = "FFFFFFFFFFFFFFFF";
        SimResponse.response = response;
    } else {
        TELEPHONY_LOGD("cmd:%{public}s, not defined", cmd);
        response = "FFFFFFFFFFFFFFFF";
        SimResponse.response = response;
        RESP_SUCSS_WITH_DATA(OnSimReport, &SimResponse, sizeof(SimResponse));
        return;
    }
    RESP_SUCSS_WITH_DATA(OnSimReport, &SimResponse, sizeof(SimResponse));
}

void ReqGetSimImsi(void* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(OnSimReport, &g_simMockData.imsi, sizeof(char*));
}

void ReqGetSimIccID(void* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(OnSimReport, &g_simMockData.iccid, sizeof(char*));
}

void ReqGetSimLockStatus(void* requestInfo, void* data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimClock* pSimClck = (HRilSimClock*)data;
    int index = GetLockStatusIndex(pSimClck->fac);
    if (index == -1) {
        RESP_FAIL_WITHOUT_DATA(OnSimReport);
        return;
    }
    RESP_SUCSS_WITH_DATA(OnSimReport, &g_simMockData.stateList[index].state, sizeof(int*));
}
void ResetPinInputTimes()
{
    g_simMockData.pinInputTimes.code = "PIN";
    g_simMockData.pinInputTimes.pinTimes = defaultTimes3;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pinTimes;
}
void ResetPin2InputTimes()
{
    g_simMockData.pinInputTimes.code = "PIN2";
    g_simMockData.pinInputTimes.pin2Times = defaultTimes3;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pin2Times;
}
void VerifyPinFail(int ret)
{
    if (ret != UNLOCK_PIN_PUK_INCORRECT) {
        TELEPHONY_LOGD("not UNLOCK_PIN_PUK_INCORRECT");
        return;
    }
    g_simMockData.pinInputTimes.code = "PIN";
    if (g_simMockData.pinInputTimes.pinTimes > 0) {
        g_simMockData.pinInputTimes.pinTimes -= 1;
    }
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pinTimes;
    if (g_simMockData.pinInputTimes.pinTimes <= 0) {
        g_simMockData.cardState.simState = HRIL_SIM_PUK;
    }
}
void VerifyPinFail2(int ret)
{
    if (ret != UNLOCK_PIN_PUK_INCORRECT) {
        TELEPHONY_LOGD("not UNLOCK_PIN_PUK_INCORRECT");
        return;
    }
    g_simMockData.pinInputTimes.code = "PIN2";
    if (g_simMockData.pinInputTimes.pin2Times > 0) {
        g_simMockData.pinInputTimes.pin2Times -= 1;
    }
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pin2Times;
    if (g_simMockData.pinInputTimes.pin2Times <= 0) {
        g_simMockData.cardState.simState = HRIL_SIM_PUK2;
    }
}
int VerifyPin(const char* pin, int state)
{
    int pinLen = strlen(pin);
    if (pinLen < 4 || pinLen > 8) {
        TELEPHONY_LOGD("Verify Pin len");
        return -1;
    }
    for (int i = 0; i < pinLen; i++) {
        if (pin[i] < '0' || pin[i] > '9') {
            TELEPHONY_LOGD("Verify Pin char");
            return -1;
        }
    }
    if (g_simMockData.cardState.simState != state) {
        TELEPHONY_LOGD("Verify Pin state, %{public}d", state);
        return state;
    }
    if (strcmp(pin, g_simMockData.stateList[GetLockStatusIndex("SC")].passwd) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGD("Verify Pin succuss");
    return 0;
}

int VerifyPin2(const char* pin, int state)
{
    int pinLen = strlen(pin);
    if (pinLen < 4 || pinLen > 8) {
        TELEPHONY_LOGD("Verify Pin len");
        return -1;
    }
    for (int i = 0; i < pinLen; i++) {
        if (pin[i] < '0' || pin[i] > '9') {
            TELEPHONY_LOGD("Verify Pin char");
            return -1;
        }
    }
    if (g_simMockData.cardState.simState != state) {
        TELEPHONY_LOGD("Verify Pin state, %{public}d", state);
        return -1;
    }
    if (strcmp(pin, g_simMockData.stateList[GetLockStatusIndex("P2")].passwd) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGD("Verify Pin succuss");
    return 0;
}

void ReqSetSimLock(void* requestInfo, void* data, size_t dataLen)
{
    int ret = -1;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimClock* pSimClck = (HRilSimClock*)data;
    if (strcmp(pSimClck->fac, "SC") == 0) {
        ret = VerifyPin(pSimClck->passwd, HRIL_SIM_READY);
        if (ret != 0) {
            if (ret == UNLOCK_PIN_PUK_INCORRECT) {
                VerifyPinFail(ret);
            }
            RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
            return;
        }
        ResetPinInputTimes();
    }

    ret = UpdateLockState(pSimClck->fac, pSimClck->mode, pSimClck->passwd, "");
    RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
}

void ReqChangeSimPassword(void* requestInfo, void* data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimPassword* pSimPwd = (HRilSimPassword*)data;
    int ret = -1;
    // change pin
    if (strcmp("SC", pSimPwd->fac) == 0) {
        ret = VerifyPin(pSimPwd->newPassword, HRIL_SIM_READY);
        if (ret >= 0) {
            ret = VerifyPin(pSimPwd->oldPassword, HRIL_SIM_READY);
        }
        if (ret != 0) {
            VerifyPinFail(ret);
            RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
            return;
        }
    }
    ret = UpdateLockState(pSimPwd->fac, -1, pSimPwd->oldPassword, pSimPwd->newPassword);

    if (strcmp("SC", pSimPwd->fac) == 0 && ret == 0) {
        ResetPinInputTimes();
    }
    RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
}

void VerifyPukFail(int ret)
{
    if (ret != UNLOCK_PIN_PUK_INCORRECT) {
        return;
    }
    g_simMockData.pinInputTimes.code = "PUK";
    if (g_simMockData.pinInputTimes.pukTimes > 0) {
        g_simMockData.pinInputTimes.pukTimes -= 1;
    }
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pukTimes;
    if (g_simMockData.pinInputTimes.pukTimes <= 0) {
        g_simMockData.cardState.simState = HRIL_SIM_NOT_READY;
    }
}
void VerifyPukFail2(int ret)
{
    if (ret != UNLOCK_PIN_PUK_INCORRECT) {
        return;
    }
    g_simMockData.pinInputTimes.code = "PUK2";
    if (g_simMockData.pinInputTimes.puk2Times > 0) {
        g_simMockData.pinInputTimes.puk2Times -= 1;
    }
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.puk2Times;
    if (g_simMockData.pinInputTimes.pukTimes <= 0) {
        g_simMockData.stateList[GetLockStatusIndex("P2")].state = 0;
    }
}
void ResetPukInputTimes()
{
    g_simMockData.pinInputTimes.code = "PUK";
    g_simMockData.pinInputTimes.pukTimes = defaultTimes10;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pukTimes;
}
void ResetPukInputTimes2()
{
    g_simMockData.pinInputTimes.code = "PUK2";
    g_simMockData.pinInputTimes.puk2Times = defaultTimes10;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.puk2Times;
}
int VerifyPuk(const char* puk, int state)
{
    if (g_simMockData.cardState.simState != state) {
        return -1;
    }
    if (strlen(puk) != 8) {
        return -1;
    }
    if (strcmp(puk, g_simMockData.puk) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGD("Verify puk succuss");
    return 0;
}
int VerifyPuk2(const char* puk, int state)
{
    if (g_simMockData.cardState.simState != state) {
        return -1;
    }
    if (strlen(puk) != 8) {
        return -1;
    }
    if (strcmp(puk, g_simMockData.puk) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGD("Verify puk succuss");
    return 0;
}

void ReqEnterSimPin(void* requestInfo, const char* pin)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, in_pin:%{public}s, "
                   "self_pin:%{public}s",
        __func__, __LINE__, pin, g_simMockData.stateList[GetLockStatusIndex("SC")].passwd);
    int ret = VerifyPin(pin, HRIL_SIM_PIN);
    VerifyPinFail(ret);
    if (ret == 0) {
        ResetPinInputTimes();
    }
    RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
}

void ReqUnlockSimPin(void* requestInfo, const char* puk, const char* pin)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, puk:%{public}s, pin:%{public}s", __func__, __LINE__, puk, pin);
    int ret = VerifyPuk(puk, HRIL_SIM_PUK);
    VerifyPukFail(ret);
    if (ret == 0) {
        ret = VerifyPin(pin, HRIL_SIM_PUK);
        if ((ret) >= 0) { // not format problem
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[GetLockStatusIndex("SC")].passwd, pin);
            ResetPukInputTimes();
            ret = 0;
        }
    }
    RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
}

void ReqGetSimPinInputTimes(void* requestInfo)
{
    RESP_SUCSS_WITH_DATA(OnSimReport, &g_simMockData.pinInputTimes, sizeof(HRilPinInputTimes));
}

void SetSimPin(void* data, int dataLen)
{
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_simMockData.stateList[GetLockStatusIndex("SC")].passwd, data, dataLen);
}

void SetSimIccid(void* data, int dataLen)
{
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_simMockData.iccid, data, dataLen);
    NOTIFY_SUCSS_WITHOUT_DATA(OnSimReport, HNOTI_SIM_STATUS_CHANGED);
}

void SetSimPuk(void* data, int dataLen)
{
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_simMockData.puk, data, dataLen);
}

void SetSimState(void* data, int dataLen)
{
    char buff[10];
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(buff, data, dataLen);
    int int_state = atoi(buff);
    HRilSimState state = (HRilSimState)int_state;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, state:%{public}d", __func__, __LINE__, int_state);
    g_simMockData.cardState.simState = state;
    NOTIFY_SUCSS_WITHOUT_DATA(OnSimReport, HNOTI_SIM_STATUS_CHANGED);
}

void ReqEnterSimPin2(void* requestInfo, const char* pin2)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, in_pin:%{public}s, "
                   "self_pin:%{public}s",
        __func__, __LINE__, pin2, g_simMockData.stateList[GetLockStatusIndex("P2")].passwd);
    int ret = VerifyPin2(pin2, HRIL_SIM_PUK2);
    VerifyPinFail2(ret);
    if (ret == 0) {
        ResetPin2InputTimes();
    }
    RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
}

void ReqUnlockSimPin2(void* requestInfo, const char* puk2, const char* pin2)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, puk:%{public}s, pin:%{public}s", __func__, __LINE__, puk2, pin2);
    int ret = VerifyPuk2(puk2, HRIL_SIM_PUK2);
    VerifyPukFail2(ret);
    if (ret == 0) {
        ret = VerifyPin2(pin2, HRIL_SIM_PUK2);
        if ((ret) >= 0) { // not format problem
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[GetLockStatusIndex("P2")].passwd, pin2);
            ResetPukInputTimes2();
            ret = 0;
        }
    }
    RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
}

void ReqGetSimPin2InputTimes(void* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(OnSimReport, &g_simMockData.pinInputTimes, sizeof(HRilPinInputTimes));
}

void ReqEnableSimCard(void* requestInfo, int index, int enable)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int ret = HRIL_ERR_GENERIC_FAILURE;
    if (index == 1 && enable == 1) {
        g_simMockData.cardState.simState = HRIL_SIM_READY;
        ret = HRIL_ERR_SUCCESS;
    }
    RESP_CODE_WITHOUT_DATA(OnSimReport, ret);
}
