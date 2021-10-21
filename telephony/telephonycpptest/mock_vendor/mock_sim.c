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
const int PUK_LEN = 8;
const int PIN_MIN = 4;
const int PIN_MAX = 8;
const int READ_BINARY = 176;
const int READ_RECORD = 178;
const int GET_RESPONSE = 192;
const int UPDATE_BINARY = 214;
const int UPDATE_RECORD = 220;
const int STATUS = 242;
const int RETRIEVE_DATA = 203;
const int SET_DATA = 219;

enum ElementaryFile {
    // ETSI TS 102 221 V3.3.0 section 13.3 Preferred Languages
    ELEMENTARY_FILE_PL = 0x2F05,
    // CPHS V4.2 section B.3.1.1, B.4.1 - B.4.7 CPHS information Call forwarding flags and so on
    ELEMENTARY_FILE_VOICE_MAIL_INDICATOR_CPHS = 28433,
    ELEMENTARY_FILE_CFF_CPHS = 28435,
    ELEMENTARY_FILE_SPN_CPHS = 28436,
    ELEMENTARY_FILE_CSP_CPHS = 28437,
    ELEMENTARY_FILE_INFO_CPHS = 28438,
    ELEMENTARY_FILE_MAILBOX_CPHS = 28439,
    ELEMENTARY_FILE_SPN_SHORT_CPHS = 28440,
    // 3GPP TS 51.011 V4.1.0 section 10 contents of the Elementary Files
    ELEMENTARY_FILE_ICCID = 12258,
    ELEMENTARY_FILE_IMG = 20256,
    ELEMENTARY_FILE_HPLMN = 28465,
    ELEMENTARY_FILE_SST = 28472,
    ELEMENTARY_FILE_ADN = 28474,
    ELEMENTARY_FILE_FDN = 28475,
    ELEMENTARY_FILE_SMS = 28476,
    ELEMENTARY_FILE_GID1 = 28478,
    ELEMENTARY_FILE_GID2 = 28479,
    ELEMENTARY_FILE_MSISDN = 28480,
    ELEMENTARY_FILE_SPN = 28486,
    ELEMENTARY_FILE_SDN = 28489,
    ELEMENTARY_FILE_EXT1 = 28490,
    ELEMENTARY_FILE_EXT2 = 28491,
    ELEMENTARY_FILE_EXT3 = 28492,
    ELEMENTARY_FILE_EXT4 = 28494,
    ELEMENTARY_FILE_PLMN_W_ACT = 28512,
    ELEMENTARY_FILE_OPLMN_W_ACT = 28513,
    ELEMENTARY_FILE_HPLMN_W_ACT = 28514,
    ELEMENTARY_FILE_FPLMN = 28539,
    ELEMENTARY_FILE_AD = 28589,
    ELEMENTARY_FILE_PNN = 28613,
    ELEMENTARY_FILE_OPL = 28614,
    ELEMENTARY_FILE_MBDN = 28615,
    ELEMENTARY_FILE_EXT6 = 28616,
    ELEMENTARY_FILE_MBI = 28617,
    ELEMENTARY_FILE_MWIS = 28618,
    ELEMENTARY_FILE_CFIS = 28619,
    // 3GPP TS 31.102 V3.5.0 section 4.7 files of ADF USIM
    ELEMENTARY_FILE_PBR = 20272,
    ELEMENTARY_FILE_LI = 28421,
    // for usim extensiom
    ELEMENTARY_FILE_EXT5 = 28494,
    ELEMENTARY_FILE_SPDI = 28621,
    ELEMENTARY_FILE_EHPLMN = 28633,
    ELEMENTARY_FILE_LRPLMNSI = 28636,
    ELEMENTARY_FILE_HPPLMN = 28465,
    ELEMENTARY_FILE_USIM_ADN = 20282,
    ELEMENTARY_FILE_USIM_IAP = 20283
};

char *INVALID_SMS = "00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\
                    FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\
                    FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\
                    FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
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
    char pin2[10];
    char puk2[10];
    char *mem[SIM_SMS_MAX_LEN];
    bool memFull[SIM_SMS_MAX_LEN];
    HRilPinInputTimes pinInputTimes;
} g_simMockData;

void StorageSms(char **pdu)
{
    for (int i = 0; i < SIM_SMS_MAX_LEN; i++) {
        if (!g_simMockData.memFull[i]) {
            g_simMockData.mem[i] = *pdu;
            g_simMockData.memFull[i] = true;
            break;
        }
    }
}

void DeleteSms(const int index)
{
    if (index >= SIM_SMS_MAX_LEN) {
        return;
    }
    free(g_simMockData.mem[index]);
    g_simMockData.mem[index] = NULL;
    g_simMockData.memFull[index] = false;
}

void UpdateSms(const int index, char **pdu)
{
    if (index >= SIM_SMS_MAX_LEN) {
        return;
    }
    free(g_simMockData.mem[index]);
    g_simMockData.mem[index] = *pdu;
}

void AddLockState(const char *name, const int state, const char *passwd)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[g_simMockData.stateListIndex].name, name);
    g_simMockData.stateList[g_simMockData.stateListIndex].state = state;
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[g_simMockData.stateListIndex].passwd, passwd);
    g_simMockData.stateListIndex++;
}

int GetLockStatusIndex(const char *name)
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

void ShowLockState(void)
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

int UpdateLockState(const char *name, int state, const char *passwd, const char *new_passwd)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, [%{public}s], [%{public}s]", name, state, passwd, new_passwd);
    int ret = -1;
    for (int i = 0; i < g_simMockData.stateListIndex; i++) {
        if (strcmp(g_simMockData.stateList[i].name, name) != 0) {
            continue;
        }
        if ((strcmp(name, "SC") == 0 || strcmp(name, "P2") == 0) && (!IsPinFormatCorrect(passwd))) {
            break;
        }
        if (g_simMockData.cardState.simState == HRIL_SIM_PIN) {
            break;
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

int SimGetLockStatusByName(const char *name)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int index = GetLockStatusIndex(name);
    return g_simMockData.stateList[index].state;
}

int SimSetLockStatus(const char *fac, int mode, const char *password)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return UpdateLockState(fac, mode, password, "");
}

static const int defaultTimes3 = 3;
static const int defaultTimes10 = 10;
void InitLockState(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_simMockData.stateListIndex = 0;

    char *default_pin_passwd = "1234";
    char *default_service_passwd = "0000";
    AddLockState("OX", 0, default_service_passwd);
    AddLockState("AI", 0, default_service_passwd);
    AddLockState("IR", 0, default_service_passwd);
    AddLockState("AB", 0, default_service_passwd);
    AddLockState("AG", 0, default_service_passwd);
    AddLockState("AC", 0, default_service_passwd);
    AddLockState("FD", 0, default_service_passwd);
    AddLockState("PN", 0, default_service_passwd);
    AddLockState("PU", 0, default_service_passwd);
    AddLockState("PP", 0, default_service_passwd);
    AddLockState("SC", 0, default_pin_passwd);
    AddLockState("P2", 0, default_pin_passwd);

    g_simMockData.pinInputTimes.code = "READY";
    g_simMockData.pinInputTimes.pin2Times = defaultTimes3;
    g_simMockData.pinInputTimes.pinTimes = defaultTimes3;
    g_simMockData.pinInputTimes.puk2Times = defaultTimes10;
    g_simMockData.pinInputTimes.pukTimes = defaultTimes10;
    g_simMockData.pinInputTimes.times = defaultTimes3;
}

void InitSimMockData(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    InitLockState();
    g_simMockData.cardState.simType = HRIL_SIM;
    g_simMockData.cardState.simState = HRIL_SIM_READY;

    char *tmImsi = "460028955072477";
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.imsi, tmImsi);

    char *tmpIccid = "98680020918170716515";
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.iccid, tmpIccid);

    char *tmpPin = "1234";
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[GetLockStatusIndex("SC")].passwd, tmpPin);
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[GetLockStatusIndex("P2")].passwd, tmpPin);

    char *tmpPuk = "12345678";
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.puk, tmpPuk);
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.puk2, tmpPuk);

    TELEPHONY_LOGE("Sim Mock Data Init Done");
}

void ReqGetSimStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d sim status: %{public}d", __func__, __LINE__,
        g_simMockData.cardState.simState);
    RESP_SUCSS_WITH_DATA(requestInfo, OnSimReport, &g_simMockData.cardState, sizeof(HRilCardState));
}

void ReqGetSimIO(const ReqDataInfo *requestInfo, const HRilSimIO *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimIOResponse SimResponse;
    SimResponse.sw1 = 144;
    SimResponse.sw2 = 0;
    char *cmd = NULL;
    char *response = NULL;
    HRilSimIO *pSim = (HRilSimIO*)data;
    asprintf(&cmd, "AT+CRSM=%d,%d,%d,%d,%d,%s,\"%s\"", pSim->command, pSim->fileid, pSim->p1, pSim->p2, pSim->p3,
        (pSim->data == NULL ? "" : pSim->data), pSim->pathid);
    if (pSim->command == READ_RECORD && pSim->fileid == ELEMENTARY_FILE_SMS) {
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
    } else if (pSim->command == READ_BINARY && pSim->fileid == ELEMENTARY_FILE_ICCID) {
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
    } else if (pSim->command == READ_RECORD && pSim->fileid == ELEMENTARY_FILE_MBDN) {
        response = "8000310032003500390039FFFFFF04812195F9FFFFFFFFFFFFFFFFFF";
        SimResponse.response = response;
    } else if (pSim->command == READ_RECORD && pSim->fileid == ELEMENTARY_FILE_MSISDN) {
        response = "4D79204E756D626572FFFFFFFFFF07819125804123F5FFFFFFFFFFFF";
        SimResponse.response = response;
    } else if (pSim->command == READ_RECORD && pSim->fileid == ELEMENTARY_FILE_MBI) {
        response = "0100000000";
        SimResponse.response = response;
    } else {
        TELEPHONY_LOGD("cmd:%{public}s, not defined", cmd);
        response = "FFFFFFFFFFFFFFFF";
        SimResponse.response = response;
        RESP_SUCSS_WITH_DATA(requestInfo, OnSimReport, &SimResponse, sizeof(SimResponse));
        return;
    }
    RESP_SUCSS_WITH_DATA(requestInfo, OnSimReport, &SimResponse, sizeof(SimResponse));
}

void ReqGetSimImsi(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(requestInfo, OnSimReport, &g_simMockData.imsi, sizeof(g_simMockData.imsi));
}

void ReqGetSimIccID(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(requestInfo, OnSimReport, &g_simMockData.iccid, sizeof(g_simMockData.iccid));
}

void ReqGetSimLockStatus(const ReqDataInfo *requestInfo, const HRilSimClock *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimClock *pSimClck = (HRilSimClock*)data;
    int index = GetLockStatusIndex(pSimClck->fac);
    if (index == -1) {
        RESP_FAIL_WITHOUT_DATA(requestInfo, OnSimReport);
        return;
    }
    RESP_SUCSS_WITH_DATA(requestInfo, OnSimReport, &g_simMockData.stateList[index].state, sizeof(int));
}
void ResetPinInputTimes(void)
{
    g_simMockData.pinInputTimes.code = "PIN";
    g_simMockData.pinInputTimes.pinTimes = defaultTimes3;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pinTimes;
}
void ResetPin2InputTimes(void)
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
}
bool IsPinFormatCorrect(const char *pin)
{
    bool ret = true;
    int pinLen = strlen(pin);
    if (pinLen < PIN_MIN || pinLen > PIN_MAX) {
        TELEPHONY_LOGD("Verify Pin len");
        ret = false;
    }
    for (int i = 0; i < pinLen; i++) {
        if (pin[i] < '0' || pin[i] > '9') {
            TELEPHONY_LOGD("Verify Pin char");
            ret = false;
        }
    }
    return ret;
}

int VerifyPin(const char *pin, int state)
{
    if (!IsPinFormatCorrect(pin)) return -1;
    if (g_simMockData.stateList[GetLockStatusIndex("SC")].state == 0) {
        TELEPHONY_LOGD("Verify Pin lock state: Lock");
        return -1;
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

int VerifyPin2(const char *pin, int state)
{
    int pinLen = strlen(pin);
    if (pinLen < PIN_MIN || pinLen > PIN_MAX) {
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
    if (g_simMockData.pinInputTimes.pin2Times == 0) {
        TELEPHONY_LOGD("Get pin2 remain times are 0.");
        return -1;
    }
    if (strcmp(pin, g_simMockData.stateList[GetLockStatusIndex("P2")].passwd) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGD("Verify Pin succuss");
    return 0;
}

void ReqSetSimLock(const ReqDataInfo *requestInfo, const HRilSimClock *data, size_t dataLen)
{
    int ret = -1;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    const HRilSimClock *pSimClck = data;

    ret = UpdateLockState(pSimClck->fac, pSimClck->mode, pSimClck->passwd, "");
    if (strcmp(pSimClck->fac, "SC") == 0) {
        if (ret == UNLOCK_PIN_PUK_INCORRECT) {
            VerifyPinFail(ret);
        }
        if (ret == 0) {
            ResetPinInputTimes();
        }
    }

    RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, ret);
}

void ReqChangeSimPassword(const ReqDataInfo *requestInfo, const HRilSimPassword *data, size_t dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("enter to [%{public}s]: [%{public}s], [%{public}s]", data->fac, data->oldPassword,
        data->newPassword);
    const HRilSimPassword *pSimPwd = data;
    int ret = -1;
    // change pin
    if (strcmp("SC", pSimPwd->fac) == 0) {
        ret = VerifyPin(pSimPwd->newPassword, HRIL_SIM_READY);
        if (ret >= 0) {
            ret = VerifyPin(pSimPwd->oldPassword, HRIL_SIM_READY);
        }
        if (ret != 0) {
            VerifyPinFail(ret);
            RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, ret);
            return;
        }
    } else if (strcmp("P2", pSimPwd->fac) == 0) {
        ret = VerifyPin2(pSimPwd->newPassword, HRIL_SIM_READY);
        if (ret >= 0) {
            ret = VerifyPin2(pSimPwd->oldPassword, HRIL_SIM_READY);
        }
        if (ret != 0) {
            VerifyPinFail2(ret);
            RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, ret);
            return;
        }
    }

    ret = UpdateLockState(pSimPwd->fac, -1, pSimPwd->oldPassword, pSimPwd->newPassword);
    if (strcmp("SC", pSimPwd->fac) == 0 && ret == 0) {
        ResetPinInputTimes();
    } else if (strcmp("P2", pSimPwd->fac) == 0 && ret == 0) {
        ResetPin2InputTimes();
    }
    RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, ret);
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
void ResetPukInputTimes(void)
{
    g_simMockData.pinInputTimes.code = "PUK";
    g_simMockData.pinInputTimes.pukTimes = defaultTimes10;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pukTimes;
}
void ResetPukInputTimes2(void)
{
    g_simMockData.pinInputTimes.code = "PUK2";
    g_simMockData.pinInputTimes.puk2Times = defaultTimes10;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.puk2Times;
}
int VerifyPuk(const char *puk, int state)
{
    if (g_simMockData.cardState.simState != state) {
        return -1;
    }
    if (strlen(puk) != PUK_LEN) {
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
    if (strlen(puk) != PUK_LEN) {
        return -1;
    }
    if (g_simMockData.pinInputTimes.pin2Times != 0) {
        TELEPHONY_LOGD("puk2 lock is not triggered");
        return -1;
    }
    if (g_simMockData.pinInputTimes.puk2Times == 0) {
        TELEPHONY_LOGD("Get puk2 remain times are 0.");
        return -1;
    }
    if (strcmp(puk, g_simMockData.puk) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGD("Verify puk succuss");
    return 0;
}

void ReqEnterSimPin(const ReqDataInfo *requestInfo, const char *pin)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, in_pin:%{public}s, "
                   "self_pin:%{public}s",
        __func__, __LINE__, pin, g_simMockData.stateList[GetLockStatusIndex("SC")].passwd);
    int ret = VerifyPin(pin, HRIL_SIM_PIN);
    VerifyPinFail(ret);
    if (ret == 0) {
        ResetPinInputTimes();
    }
    RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, ret);
}

void ReqUnlockSimPin(const ReqDataInfo *requestInfo, const char *puk, const char *pin)
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
    RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, ret);
}

void ReqGetSimPinInputTimes(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("LineNo:%{public}d,Times:%{public}d,PinTimes:%{public}d,PukTimes:%{public}d,Pin2Times:%{public}d,"
        "Puk2Times:%{public}d", __LINE__, g_simMockData.pinInputTimes.times, g_simMockData.pinInputTimes.pinTimes, 
        g_simMockData.pinInputTimes.pukTimes, g_simMockData.pinInputTimes.pin2Times,
        g_simMockData.pinInputTimes.puk2Times);
    RESP_SUCSS_WITH_DATA(requestInfo, OnSimReport, &g_simMockData.pinInputTimes, sizeof(HRilPinInputTimes));
}

void SetSimPin(const char *data, int dataLen)
{
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_simMockData.stateList[GetLockStatusIndex("SC")].passwd, data, dataLen);
}

void SetSimPin2(const char *data, int dataLen)
{
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_simMockData.stateList[GetLockStatusIndex("P2")].passwd, data, dataLen);
}

void SetSimIccid(const char *data, int dataLen)
{
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_simMockData.iccid, data, dataLen);
    NOTIFY_SUCSS_WITHOUT_DATA(OnSimReport, HNOTI_SIM_STATUS_CHANGED);
}

void SetSimPuk(const char *data, int dataLen)
{
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_simMockData.puk, data, dataLen);
}

void SetSimPuk2(const char *data, int dataLen)
{
}

void SetSimState(const char *data, const int dataLen)
{
    char buff[10];
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(buff, data, dataLen);
    int int_state = 0;
    if (strcmp(buff, "-1") == 0) {   // 修改sim卡状态为not_ready zhangjunpu 2021-10-13 17:19
        int_state = -1;
    } else if (strcmp(buff, "1") == 0) {   // 修改sim卡状态为ready zhangjunpu 2021-10-13 17:19
        int_state = 1;
    } else  {  // 原有逻辑
        int_state = atoi(buff);
    }
    HRilSimState state = (HRilSimState)int_state;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, state:%{public}d", __func__, __LINE__, state);
    g_simMockData.cardState.simState = state;
    NOTIFY_SUCSS_WITHOUT_DATA(OnSimReport, HNOTI_SIM_STATUS_CHANGED);
}

void ReqEnterSimPin2(const ReqDataInfo *requestInfo, const char* pin2)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, in_pin2:%{public}s, "
                   "self_pin2:%{public}s",
        __func__, __LINE__, pin2, g_simMockData.stateList[GetLockStatusIndex("P2")].passwd);
    int ret = VerifyPin2(pin2, HRIL_SIM_READY);
    VerifyPinFail2(ret);
    if (ret == 0) {
        ResetPin2InputTimes();
    }
    RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, ret);
}

void ReqUnlockSimPin2(const ReqDataInfo *requestInfo, const char* puk2, const char* pin2)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, puk2:%{public}s, pin2:%{public}s", __func__, __LINE__, puk2,
        pin2);
    int ret = VerifyPuk2(puk2, HRIL_SIM_READY);
    VerifyPukFail2(ret);
    if (ret == 0) {
        if (IsPinFormatCorrect(pin2)) {
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_simMockData.stateList[GetLockStatusIndex("P2")].passwd, pin2);
            ResetPukInputTimes2();
        } else {
            ret = -1;
        }
    }
    RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, ret);
}

void ReqGetSimPin2InputTimes(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(requestInfo, OnSimReport, &g_simMockData.pinInputTimes, sizeof(HRilPinInputTimes));
}

void ReqEnableSimCard(const ReqDataInfo *requestInfo, int index, int enable)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, index:%{public}d, enable:%{public}d",
        __func__, __LINE__, index, enable);
    if (enable == 0) {
        g_simMockData.cardState.simState = HRIL_SIM_NOT_INSERTED;
    } else if (enable == 1) {
        g_simMockData.cardState.simState = HRIL_SIM_READY;
    } else {
        TELEPHONY_LOGD("enter to [%{public}s]:%{public}d HRIL_ERR_INVALID_PARAMETER", __func__, __LINE__);
        RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, HRIL_ERR_INVALID_PARAMETER);
        return;
    }
    NOTIFY_SUCSS_WITHOUT_DATA(OnSimReport, HNOTI_SIM_STATUS_CHANGED);
    RESP_CODE_WITHOUT_DATA(requestInfo, OnSimReport, HRIL_ERR_SUCCESS);
}
