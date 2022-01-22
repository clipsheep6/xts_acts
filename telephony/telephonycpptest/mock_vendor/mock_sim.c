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
#include "telephony_log_c.h"
#include "mock_report_public.h"
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
const int FDN_SIZE = 3;
const int FILE_WRITE_READ_INDEX_RANGE = 10;
const int DEFAULT_SW1 = 106;
const int DEFAULT_SW2 = 131;
const int FILE_WRITE_READ_INDEX_RANGE_250 = 250;
const int ICC_UNKNOWN_TYPE = 0;
const int ICC_SIM_TYPE = 1;
const int ICC_USIM_TYPE = 2;
const int ICC_RUIM_TYPE = 4;
const int ICC_CG_TYPE = 5;
const int ICC_DUAL_MODE_ROAMING_TYPE = 7;
const int ICC_UNICOM_DUAL_MODE_TYPE = 8;
const int ICC_4G_LTE_TYPE = 9;
const int ICC_UG_TYPE = 10;
const int ICC_IMS_TYPE = 11;
static const int defaultTimes3 = 3;
static const int defaultTimes10 = 10;
const int simPasswordLength = 20;
const int simNameLength = 5;

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
    char name[simNameLength];
    int state;
    char passwd[simPasswordLength];
};
const int simIoLen = 9;
static int g_index = 0;
char *simIoKey[simIoLen] = {
    "AT+CRSM=192,12258,0,0,15",
    "AT+CRSM=192,28486,0,0,15",
    "AT+CRSM=192,28478,0,0,15",
    "AT+CRSM=192,28421,0,0,15",
    "AT+CRSM=192,12037,0,0,15",
    "AT+CRSM=176,28486,0,0,0",
    "AT+CRSM=176,28478,0,0,0",
    "AT+CRSM=176,28421,0,0,0",
    "AT+CRSM=176,12037,0,0,0",
};
char *simIoVal[simIoLen] = {
    "62178202412183022FE28A01058B03",
    "62168202412183026F468A01058B03",
    "62168202412183026F3E8A01058B03",
    "621C8202412183026F05A503800171",
    "621C8202412183022F05A503800171",
    "00434D4343FFFFFFFFFFFFFFFFFFFFFFFF",
    "FFFFFFFF",
    "FFFFFFFFFFFFFFFF",
    "FFFFFFFFFFFFFFFF",
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
    char *memFdn[SIM_SMS_MAX_LEN];
    bool memFdnFull[SIM_SMS_MAX_LEN];
    char *memAdn[SIM_SMS_MAX_LEN];
    bool memAdnFull[SIM_SMS_MAX_LEN];
    HRilPinInputTimes pinInputTimes;
} g_simMockData;

void ViewMem(int id)
{
    if (id == ELEMENTARY_FILE_ADN) {
        for (int i = 0; i < FDN_SIZE; i++) {
            TELEPHONY_LOGI("CRSM:mem_%{public}d[%{public}d]:%{public}s", id, i, g_simMockData.memAdn[i]);
        }
    } else if (id == ELEMENTARY_FILE_FDN) {
        for (int i = 0; i < FDN_SIZE; i++) {
            TELEPHONY_LOGI("CRSM:mem_%{public}d[%{public}d]:%{public}s", id, i, g_simMockData.memFdn[i]);
        }
    } else {
        TELEPHONY_LOGI("enter to [%{public}s]:%{public}d no this mem to view", __func__, __LINE__);
        return;
    }
}

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
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    strncpy_s(
        g_simMockData.stateList[g_simMockData.stateListIndex].name, sizeof(char) * simNameLength, name, strlen(name));
    g_simMockData.stateList[g_simMockData.stateListIndex].state = state;
    strncpy_s(g_simMockData.stateList[g_simMockData.stateListIndex].passwd, sizeof(char) * simPasswordLength, passwd,
        strlen(passwd));
    g_simMockData.stateListIndex++;
}

int GetLockStatusIndex(const char *name)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
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
    TELEPHONY_LOGI("===========ShowLockState===========");
    TELEPHONY_LOGI("stateListIndex:%{public}d", g_simMockData.stateListIndex);
    TELEPHONY_LOGI("pin:%{public}s", g_simMockData.stateList[GetLockStatusIndex("SC")].passwd);
    TELEPHONY_LOGI("puk:%{public}s", g_simMockData.puk);
    for (int i = 0; i < g_simMockData.stateListIndex; i++) {
        TELEPHONY_LOGI("name:%{public}s", g_simMockData.stateList[i].name);
        TELEPHONY_LOGI("state:%{public}d", g_simMockData.stateList[i].state);
        TELEPHONY_LOGI("passwd:%{public}s", g_simMockData.stateList[i].passwd);
    }
    TELEPHONY_LOGI("===========ShowLockState end===========");
}

int UpdateLockState(const char *name, int state, const char *passwd, const char *new_passwd)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, [%{public}s], [%{public}s]", name, state, passwd, new_passwd);
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
            strncpy_s(
                g_simMockData.stateList[i].passwd, sizeof(char) * simPasswordLength, new_passwd, strlen(new_passwd));
        }
        ret = 0;
        break;
    }
    return ret;
}

int SimGetLockStatusByName(const char *name)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int index = GetLockStatusIndex(name);
    return g_simMockData.stateList[index].state;
}

int SimSetLockStatus(const char *fac, int mode, const char *password)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return UpdateLockState(fac, mode, password, "");
}

void SetSimPin(const char *data, int dataLen)
{
    strncpy_s(
        g_simMockData.stateList[GetLockStatusIndex("SC")].passwd, sizeof(char) * simPasswordLength, data, dataLen);
}

void SetSimPin2(const char *data, int dataLen)
{
    strncpy_s(
        g_simMockData.stateList[GetLockStatusIndex("P2")].passwd, sizeof(char) * simPasswordLength, data, dataLen);
}

enum CardType ConvertCardType(int simType)
{
    enum CardType ret = UNKNOWN_CARD;
    switch (simType) {
        case UNKNOWN_CARD:
            ret = ICC_UNKNOWN_TYPE;
            break;
        case SINGLE_MODE_SIM_CARD:
            ret = ICC_SIM_TYPE;
            break;
        case SINGLE_MODE_USIM_CARD:
            ret = ICC_USIM_TYPE;
            break;
        case SINGLE_MODE_RUIM_CARD:
            ret = ICC_RUIM_TYPE;
            break;
        case DUAL_MODE_CG_CARD:
            ret = ICC_CG_TYPE;
            break;
        case CT_NATIONAL_ROAMING_CARD:
            ret = ICC_DUAL_MODE_ROAMING_TYPE;
            break;
        case CU_DUAL_MODE_CARD:
            ret = ICC_UNICOM_DUAL_MODE_TYPE;
            break;
        case DUAL_MODE_4G_LTE_CARD:
            ret = ICC_4G_LTE_TYPE;
            break;
        case DUAL_MODE_UG_CARD:
            ret = ICC_UG_TYPE;
            break;
        case CARD_MODE_IMS:
            ret = ICC_IMS_TYPE;
            break;
        default:
            break;
    }
    return ret;
}

void SetSimCardType(const char *data, int dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimType cardType = 0;
    if (memcpy_s(&cardType, sizeof(HRilSimType), data, dataLen) != 0) {
        return;
    }
    g_simMockData.cardState.simType = ConvertCardType(cardType);
    TELEPHONY_LOGI("simType:%{public}d", g_simMockData.cardState.simType);
    NotifySuccessWithData(HRIL_SIM_SLOT_0, OnSimReport, HNOTI_SIM_STATUS_CHANGED,
        (const uint8_t *)&g_simMockData.cardState, sizeof(HRilCardState));
}

void SetSimIccid(const char *data, int dataLen)
{
    strncpy_s(g_simMockData.iccid, sizeof(g_simMockData.iccid), data, dataLen);
    NotifySuccessWithoutData(HRIL_SIM_SLOT_0, OnSimReport, HNOTI_SIM_STATUS_CHANGED);
}

void SetSimPuk(const char *data, int dataLen)
{
    strncpy_s(g_simMockData.puk, sizeof(g_simMockData.puk), data, dataLen);
}

void SetSimPuk2(const char *data, int dataLen) {}

void SetSimState(const char *data, const int dataLen)
{
    char buff[10];
    if (strncpy_s(buff, sizeof(buff), data, dataLen) != 0) {
        TELEPHONY_LOGE("copy fail");
        return;
    }

    int int_state = 0;
    if (strcmp(buff, "-1") == 0) { // 修改sim卡状态为not_ready zhangjunpu 2021-10-13 17:19
        int_state = -1;
    } else if (strcmp(buff, "1") == 0) { // 修改sim卡状态为ready zhangjunpu 2021-10-13 17:19
        int_state = 1;
    } else { // 原有逻辑
        int_state = atoi(buff);
    }
    HRilSimState state = (HRilSimState)int_state;
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, state:%{public}d", __func__, __LINE__, state);
    g_simMockData.cardState.simState = state;
    NotifySuccessWithoutData(HRIL_SIM_SLOT_0, OnSimReport, HNOTI_SIM_STATUS_CHANGED);
}

void InitLockState(void)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_simMockData.stateListIndex = 0;

    char *default_pin_passwd = "1234";
    char *default_service_passwd = "0000";
    AddLockState("OX", 0, default_service_passwd);
    AddLockState("OI", 0, default_service_passwd);
    AddLockState("AO", 0, default_service_passwd);
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
    g_simMockData.pinInputTimes.pinTimes = defaultTimes3;
    g_simMockData.pinInputTimes.pin2Times = defaultTimes3;
    g_simMockData.pinInputTimes.pukTimes = defaultTimes10;
    g_simMockData.pinInputTimes.puk2Times = defaultTimes10;
    g_simMockData.pinInputTimes.times = defaultTimes3;
}

void InitSimMockData(void)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    InitLockState();
    g_simMockData.cardState.simType = HRIL_SIM_TYPE_USIM;
    g_simMockData.cardState.simState = HRIL_SIM_READY;

    char *tmImsi = "460028955072477";
    strncpy_s(g_simMockData.imsi, sizeof(g_simMockData.imsi), tmImsi, strlen(tmImsi));

    char *tmpIccid = "98680020918170716515";
    strncpy_s(g_simMockData.iccid, sizeof(g_simMockData.iccid), tmpIccid, strlen(tmpIccid));

    char *tmpPin = "1234";
    strncpy_s(g_simMockData.stateList[GetLockStatusIndex("SC")].passwd, sizeof(char) * simPasswordLength, tmpPin,
        strlen(tmpPin));
    strncpy_s(g_simMockData.stateList[GetLockStatusIndex("P2")].passwd, sizeof(char) * simPasswordLength, tmpPin,
        strlen(tmpPin));

    char *tmpPuk = "12345678";
    strncpy_s(g_simMockData.puk, sizeof(g_simMockData.puk), tmpPuk, strlen(tmpPuk));
    strncpy_s(g_simMockData.puk2, sizeof(g_simMockData.puk2), tmpPuk, strlen(tmpPuk));

    TELEPHONY_LOGE("Sim Mock Data Init Done");
    NotifySuccessWithoutData(HRIL_SIM_SLOT_0, OnSimReport, HNOTI_SIM_STATUS_CHANGED);
}
void ResetPinInputTimes(void)
{
    TELEPHONY_LOGI("reset Pin Input Times");
    g_simMockData.pinInputTimes.code = "PIN";
    g_simMockData.pinInputTimes.pinTimes = defaultTimes3;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pinTimes;
}
void ResetPin2InputTimes(void)
{
    TELEPHONY_LOGI("reset Pin2 Input Times");
    g_simMockData.pinInputTimes.code = "PIN2";
    g_simMockData.pinInputTimes.pin2Times = defaultTimes3;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pin2Times;
}
void HandlePinInputTimes(int errCode)
{
    if (errCode == 0) {
        ResetPinInputTimes();
        return;
    }

    if (errCode != UNLOCK_PIN_PUK_INCORRECT) {
        TELEPHONY_LOGI("not UNLOCK_PIN_PUK_INCORRECT");
        return;
    }

    g_simMockData.pinInputTimes.code = "PIN";
    if (g_simMockData.pinInputTimes.pinTimes >= 0) {
        g_simMockData.pinInputTimes.pinTimes -= 1;
    }

    if (g_simMockData.pinInputTimes.pinTimes <= 0) {
        // need to lock puk
        g_simMockData.cardState.simState = HRIL_SIM_PUK;
        g_simMockData.pinInputTimes.pinTimes = 0;
    }
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pinTimes;
}
void HandlePin2InputTimes(int errCode)
{
    if (errCode == 0) {
        ResetPin2InputTimes();
        return;
    }

    if (errCode != UNLOCK_PIN_PUK_INCORRECT) {
        TELEPHONY_LOGI("not UNLOCK_PIN_PUK_INCORRECT");
        return;
    }

    g_simMockData.pinInputTimes.code = "PIN2";
    if (g_simMockData.pinInputTimes.pin2Times >= 0) {
        g_simMockData.pinInputTimes.pin2Times -= 1;
    }

    if (g_simMockData.pinInputTimes.pin2Times <= 0) {
        // no need to lock puk2
        g_simMockData.pinInputTimes.pin2Times = 0;
    }
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pin2Times;
}
bool IsPinFormatCorrect(const char *pin)
{
    int pinLen = strlen(pin);
    if (pinLen < PIN_MIN || pinLen > PIN_MAX) {
        TELEPHONY_LOGI("Verify Pin len: %{public}d", pinLen);
        return false;
    }
    for (int i = 0; i < pinLen; i++) {
        if (pin[i] < '0' || pin[i] > '9') {
            TELEPHONY_LOGI("Verify Pin char %{public}c", pin[i]);
            return false;
        }
    }
    return true;
}
bool IsPukFormatCorrect(const char *puk)
{
    if (strlen(puk) != PUK_LEN) {
        return false;
    }
    for (int i = 0; i < PUK_LEN; i++) {
        if (puk[i] < '0' || puk[i] > '9') {
            TELEPHONY_LOGI("Verify Puk char %{public}c", puk[i]);
            return false;
        }
    }
    return true;
}
int VerifyPin(const char *pin, int state)
{
    if (!IsPinFormatCorrect(pin)) {
        TELEPHONY_LOGI("Verify Pin format error");
        return -1;
    }

    if (g_simMockData.stateList[GetLockStatusIndex("SC")].state == 0) {
        TELEPHONY_LOGI("Verify Pin lock state: Lock");
        return -1;
    }

    if (g_simMockData.cardState.simState != state) {
        TELEPHONY_LOGI("Verify Pin state, %{public}d", state);
        return state;
    }

    if (g_simMockData.pinInputTimes.pin2Times <= 0) {
        TELEPHONY_LOGI("Get pin2 remain times are 0.");
        return -1;
    }

    if (strcmp(pin, g_simMockData.stateList[GetLockStatusIndex("SC")].passwd) != 0) {
        TELEPHONY_LOGI("Verify passwd error");
        return UNLOCK_PIN_PUK_INCORRECT;
    }

    TELEPHONY_LOGI("Verify Pin succuss");
    return 0;
}
int VerifyPin2(const char *pin2, int state)
{
    if (!IsPinFormatCorrect(pin2)) {
        return -1;
    }

    if (g_simMockData.stateList[GetLockStatusIndex("P2")].state == 0) {
        TELEPHONY_LOGI("Verify Pin2 lock state: Lock");
        return -1;
    }

    if (g_simMockData.pinInputTimes.pin2Times <= 0) {
        TELEPHONY_LOGI("Get pin2 remain times are 0. %{public}d", state);
        return -1;
    }
    if (strcmp(pin2, g_simMockData.stateList[GetLockStatusIndex("P2")].passwd) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGI("Verify Pin2 succuss");
    return 0;
}
void ResetPukInputTimes(void)
{
    ResetPinInputTimes();
    g_simMockData.pinInputTimes.code = "PUK";
    g_simMockData.pinInputTimes.pukTimes = defaultTimes10;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pukTimes;
}
void ResetPuk2InputTimes(void)
{
    ResetPin2InputTimes();
    g_simMockData.pinInputTimes.code = "PUK2";
    g_simMockData.pinInputTimes.puk2Times = defaultTimes10;
    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.puk2Times;
}
void HandlePukInputTimes(int errCode)
{
    if (errCode == 0) {
        TELEPHONY_LOGI("reset puk inputtimes");
        ResetPukInputTimes();
        return;
    }

    if (errCode != UNLOCK_PIN_PUK_INCORRECT) {
        TELEPHONY_LOGI("not UNLOCK_PIN_PUK_INCORRECT");
        return;
    }

    g_simMockData.pinInputTimes.code = "PUK";
    if (g_simMockData.pinInputTimes.pukTimes >= 0) {
        g_simMockData.pinInputTimes.pukTimes -= 1;
    }

    if (g_simMockData.pinInputTimes.pukTimes < 0) {
        TELEPHONY_LOGI("puk locked");
        g_simMockData.pinInputTimes.pukTimes = 0;
        g_simMockData.cardState.simState = HRIL_SIM_NOT_READY;
    }

    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.pukTimes;
}
void HandlePuk2InputTimes(int errCode)
{
    if (errCode == 0) {
        TELEPHONY_LOGI("reset puk2 inputtimes");
        ResetPuk2InputTimes();
        return;
    }
    if (errCode != UNLOCK_PIN_PUK_INCORRECT) {
        TELEPHONY_LOGI("not UNLOCK_PIN_PUK_INCORRECT");
        return;
    }
    g_simMockData.pinInputTimes.code = "PUK2";
    if (g_simMockData.pinInputTimes.puk2Times >= 0) {
        g_simMockData.pinInputTimes.puk2Times -= 1;
    }

    if (g_simMockData.pinInputTimes.puk2Times < 0) {
        g_simMockData.pinInputTimes.puk2Times = 0;
    }

    g_simMockData.pinInputTimes.times = g_simMockData.pinInputTimes.puk2Times;
}
int VerifyPuk(const char *puk, int state)
{
    if (g_simMockData.cardState.simState != state) {
        return -1;
    }
    if (!IsPukFormatCorrect(puk)) {
        TELEPHONY_LOGI("puk format error");
        return -1;
    }
    if (g_simMockData.pinInputTimes.pinTimes != 0) {
        TELEPHONY_LOGI("puk lock is not triggered, %{public}d", state);
        return -1;
    }
    if (g_simMockData.pinInputTimes.puk2Times == 0) {
        TELEPHONY_LOGI("Get puk remain times are 0.");
        return -1;
    }
    if (strcmp(puk, g_simMockData.puk) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGI("Verify puk succuss");
    return 0;
}
int VerifyPuk2(const char *puk, int state)
{
    if (!IsPukFormatCorrect(puk)) {
        return -1;
    }
    // g_simMockData.pinInputTimes.pin2Times != 0 return -1 is not good for Telephony_Sim_QueryIccDiallingNumbers_1200
    if (g_simMockData.pinInputTimes.puk2Times == 0) {
        TELEPHONY_LOGI("Get puk2 remain times are 0.");
        return -1;
    }
    if (strcmp(puk, g_simMockData.puk) != 0) {
        return UNLOCK_PIN_PUK_INCORRECT;
    }
    TELEPHONY_LOGI("Verify puk succuss");
    return 0;
}

void ReqGetSimStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d sim status: %{public}d", __func__, __LINE__,
        g_simMockData.cardState.simState);
    RespSuccessWithData(
        HRIL_SIM_SLOT_0, requestInfo, OnSimReport, (const uint8_t *)&g_simMockData.cardState, sizeof(HRilCardState));
}

bool IsCmdExists(const char *cmd)
{
    g_index = 0;
    while (g_index < simIoLen) {
        if (strcmp(simIoKey[g_index], cmd) == 0) {
            return true;
        }
        g_index++;
    }
    return false;
}

void ProcessFixSimCommand(const char *cmd, char **response)
{
    if (IsCmdExists(cmd)) {
        *response = simIoVal[g_index];
    } else {
        *response = "FFFFFFFFFFFFFFFF";
    }
}

HRilSimIOResponse GetSimIoFdn(HRilSimIO *pSim)
{
    HRilSimIOResponse simResponse = {144, 0, NULL};
    if (pSim->command == UPDATE_RECORD) {
        ViewMem(ELEMENTARY_FILE_FDN);
        if (g_simMockData.memFdn[pSim->p1] != NULL) {
            free(g_simMockData.memFdn[pSim->p1]);
        }
        asprintf(&g_simMockData.memFdn[pSim->p1], "%s", pSim->data);
        ViewMem(ELEMENTARY_FILE_FDN);
    } else if (pSim->command == GET_RESPONSE) {
        simResponse.response = "621E82054221001C0A83026F3BA503";
    } else if (pSim->command == READ_RECORD) {
        if (pSim->p1 <= FILE_WRITE_READ_INDEX_RANGE && g_simMockData.memFdnFull[pSim->p1] == true) {
            simResponse.response = g_simMockData.memFdn[pSim->p1];
        } else if (pSim->p1 <= FILE_WRITE_READ_INDEX_RANGE && g_simMockData.memFdnFull[pSim->p1] == false) {
            simResponse.response = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
        } else {
            simResponse.sw1 = DEFAULT_SW1;
            simResponse.sw2 = DEFAULT_SW2;
            simResponse.response = "";
        }
    }
    return simResponse;
}

HRilSimIOResponse GetSimIoAdn(HRilSimIO *pSim)
{
    HRilSimIOResponse simResponse = {144, 0, NULL};
    if (pSim->command == UPDATE_RECORD) {
        ViewMem(ELEMENTARY_FILE_ADN);
        if (g_simMockData.memAdn[pSim->p1] != NULL) {
            free(g_simMockData.memAdn[pSim->p1]);
        }
        asprintf(&g_simMockData.memAdn[pSim->p1], "%s", pSim->data);
        ViewMem(ELEMENTARY_FILE_ADN);
    } else if (pSim->command == GET_RESPONSE) {
        simResponse.response = "621E82054221001CFA83026F3AA503";
    } else if (pSim->command == READ_RECORD) {
        if (pSim->p1 <= FILE_WRITE_READ_INDEX_RANGE && g_simMockData.memAdnFull[pSim->p1] == true) {
            simResponse.response = g_simMockData.memFdn[pSim->p1];
        } else if (pSim->p1 <= FILE_WRITE_READ_INDEX_RANGE_250 && g_simMockData.memAdnFull[pSim->p1] == false) {
            simResponse.response = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
        } else {
            simResponse.sw1 = DEFAULT_SW1;
            simResponse.sw2 = DEFAULT_SW2;
            simResponse.response = "";
        }
    }
    return simResponse;
}
void ReqGetSimIO(const ReqDataInfo *requestInfo, const HRilSimIO *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimIOResponse simResponse = {144, 0, NULL};
    char *cmd = NULL;
    HRilSimIO *pSim = (HRilSimIO *)data;
    asprintf(&cmd, "AT+CRSM=%d,%d,%d,%d,%d,%s,\"%s\"", pSim->command, pSim->fileid, pSim->p1, pSim->p2, pSim->p3,
        (pSim->data == NULL ? "" : pSim->data), pSim->pathid);
    TELEPHONY_LOGI("CRSM:req > %{public}s", cmd);
    if (pSim->command == READ_RECORD && pSim->fileid == ELEMENTARY_FILE_SMS) {
        if (g_simMockData.memFull[pSim->p1]) {
            simResponse.response = g_simMockData.mem[pSim->p1];
        } else {
            simResponse.response = INVALID_SMS;
        }
    } else if (pSim->fileid == ELEMENTARY_FILE_FDN) {
        simResponse = GetSimIoFdn(pSim);
    } else if (pSim->fileid == ELEMENTARY_FILE_ADN) {
        simResponse = GetSimIoAdn(pSim);
    } else if (pSim->command == READ_BINARY && pSim->fileid == ELEMENTARY_FILE_ICCID) {
        simResponse.response = g_simMockData.iccid;
    } else if (pSim->command == READ_RECORD && pSim->fileid == ELEMENTARY_FILE_MBDN) {
        simResponse.response = "8000310032003500390039FFFFFF04812195F9FFFFFFFFFFFFFFFFFF";
    } else if (pSim->command == READ_RECORD && pSim->fileid == ELEMENTARY_FILE_MSISDN) {
        simResponse.response = "4D79204E756D626572FFFFFFFFFF07819125804123F5FFFFFFFFFFFF";
    } else if (pSim->command == READ_RECORD && pSim->fileid == ELEMENTARY_FILE_MBI) {
        simResponse.response = "0100000000";
    } else {
        ProcessFixSimCommand(cmd, &simResponse.response);
    }
    RespSuccessWithData(
        HRIL_SIM_SLOT_0, requestInfo, OnSimReport, (const uint8_t *)&simResponse, sizeof(HRilSimIOResponse));
    free(cmd);
}

void ReqGetSimImsi(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithData(
        HRIL_SIM_SLOT_0, requestInfo, OnSimReport, (const uint8_t *)&g_simMockData.imsi, sizeof(g_simMockData.imsi));
}
void ReqGetSimIccID(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithData(
        HRIL_SIM_SLOT_0, requestInfo, OnSimReport, (const uint8_t *)&g_simMockData.iccid, sizeof(g_simMockData.iccid));
}
void ReqGetSimLockStatus(const ReqDataInfo *requestInfo, const HRilSimClock *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilSimClock *pSimClck = (HRilSimClock *)data;
    int index = GetLockStatusIndex(pSimClck->fac);
    if (index == -1) {
        RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, HRIL_ERR_GENERIC_FAILURE);
        return;
    }
    RespSuccessWithData(
        HRIL_SIM_SLOT_0, requestInfo, OnSimReport, (const uint8_t *)&g_simMockData.stateList[index].state, sizeof(int));
}
void ReqSetSimLock(const ReqDataInfo *requestInfo, const HRilSimClock *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    const HRilSimClock *pSimClck = data;

    int ret = UpdateLockState(pSimClck->fac, pSimClck->mode, pSimClck->passwd, "");
    if (strcmp(pSimClck->fac, "SC") == 0) {
        if (ret == UNLOCK_PIN_PUK_INCORRECT) {
            HandlePinInputTimes(ret);
        }
        if (ret == 0) {
            ResetPinInputTimes();
        }
    }

    RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, ret);
}
void ReqChangeSimPassword(const ReqDataInfo *requestInfo, const HRilSimPassword *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGI(
        "enter to [%{public}s]: [%{public}s], [%{public}s]", data->fac, data->oldPassword, data->newPassword);
    const HRilSimPassword *pSimPwd = data;
    int ret = -1;
    // change pin
    if (strcmp("SC", pSimPwd->fac) == 0) {
        ret = VerifyPin(pSimPwd->newPassword, HRIL_SIM_READY);
        if (ret >= 0) {
            ret = VerifyPin(pSimPwd->oldPassword, HRIL_SIM_READY);
        }
        if (ret != 0) {
            HandlePinInputTimes(ret);
            RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, ret);
            return;
        }
    } else if (strcmp("P2", pSimPwd->fac) == 0) {
        ret = VerifyPin2(pSimPwd->newPassword, HRIL_SIM_READY);
        if (ret >= 0) {
            ret = VerifyPin2(pSimPwd->oldPassword, HRIL_SIM_READY);
        }
        if (ret != 0) {
            HandlePin2InputTimes(ret);
            RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, ret);
            return;
        }
    }

    ret = UpdateLockState(pSimPwd->fac, -1, pSimPwd->oldPassword, pSimPwd->newPassword);
    if (strcmp("SC", pSimPwd->fac) == 0 && ret == 0) {
        ResetPinInputTimes();
    } else if (strcmp("P2", pSimPwd->fac) == 0 && ret == 0) {
        ResetPin2InputTimes();
    }
    RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, ret);
}
void ReqUnlockPin(const ReqDataInfo *requestInfo, const char *pin)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, in_pin:%{public}s, "
                   "self_pin:%{public}s",
        __func__, __LINE__, pin, g_simMockData.stateList[GetLockStatusIndex("SC")].passwd);
    int ret = VerifyPin(pin, HRIL_SIM_PIN);
    HandlePinInputTimes(ret);
    RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, ret);
}
void ReqUnlockPin2(const ReqDataInfo *requestInfo, const char *pin2)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, in_pin2:%{public}s, "
                   "self_pin2:%{public}s",
        __func__, __LINE__, pin2, g_simMockData.stateList[GetLockStatusIndex("P2")].passwd);
    int ret = VerifyPin2(pin2, HRIL_SIM_READY);
    HandlePin2InputTimes(ret);
    RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, ret);
}
void ReqUnlockPuk(const ReqDataInfo *requestInfo, const char *puk, const char *pin)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, pin:%{public}s", __func__, __LINE__, pin);
    int ret = -1;
    if (IsPinFormatCorrect(pin) && IsPukFormatCorrect(puk)) {
        ret = VerifyPuk(puk, HRIL_SIM_PUK);
        if (ret == 0) {
            strncpy_s(g_simMockData.stateList[GetLockStatusIndex("SC")].passwd, sizeof(char) * simPasswordLength, pin,
                strlen(pin));
        }
    }
    HandlePukInputTimes(ret);
    RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, ret);
}
void ReqUnlockPuk2(const ReqDataInfo *requestInfo, const char *puk2, const char *pin2)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d, pin2:%{public}s", __func__, __LINE__, pin2);
    int ret = -1;
    if (IsPinFormatCorrect(pin2) && IsPukFormatCorrect(puk2)) {
        ret = VerifyPuk2(puk2, HRIL_SIM_READY);
        if (ret == 0) {
            strncpy_s(g_simMockData.stateList[GetLockStatusIndex("P2")].passwd, sizeof(char) * simPasswordLength, pin2,
                strlen(pin2));
        }
    }
    HandlePuk2InputTimes(ret);
    RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, ret);
}

void ReqGetSimPinInputTimes(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("LineNo:%{public}d,Times:%{public}d,PinTimes:%{public}d,PukTimes:%{public}d,Pin2Times:%{public}d,"
                   "Puk2Times:%{public}d",
        __LINE__, g_simMockData.pinInputTimes.times, g_simMockData.pinInputTimes.pinTimes,
        g_simMockData.pinInputTimes.pukTimes, g_simMockData.pinInputTimes.pin2Times,
        g_simMockData.pinInputTimes.puk2Times);
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, (const uint8_t *)&g_simMockData.pinInputTimes,
        sizeof(HRilPinInputTimes));
}

void ReqGetSimPin2InputTimes(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, (const uint8_t *)&g_simMockData.pinInputTimes,
        sizeof(HRilPinInputTimes));
}

void ReqSetActiveSim(const ReqDataInfo *requestInfo, int index, int enable)
{
    TELEPHONY_LOGI(
        "enter to [%{public}s]:%{public}d, index:%{public}d, enable:%{public}d", __func__, __LINE__, index, enable);
    if (enable == 0) {
        g_simMockData.cardState.simState = HRIL_SIM_NOT_INSERTED;
    } else if (enable == 1) {
        g_simMockData.cardState.simState = HRIL_SIM_READY;
    } else {
        TELEPHONY_LOGI("enter to [%{public}s]:%{public}d HRIL_ERR_INVALID_PARAMETER", __func__, __LINE__);
        RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, HRIL_ERR_INVALID_PARAMETER);
        return;
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_0, OnSimReport, HNOTI_SIM_STATUS_CHANGED);
    RespErrnoWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport, HRIL_ERR_SUCCESS);
}

void ReqSimStkSendTerminalResponse(const ReqDataInfo *requestInfo, const char *strCmd)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport);
}

void ReqSimStkSendEnvelope(const ReqDataInfo *requestInfo, const char *strCmd)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport);
}

void ReqSimStkIsReady(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport);
}

void ReqSetRadioProtocol(const ReqDataInfo *requestInfo, const HRilSimProtocolRequest *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqSimOpenLogicalChannel(const ReqDataInfo *requestInfo, const char *appID, int32_t p2)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport);
}

void ReqSimCloseLogicalChannel(const ReqDataInfo *requestInfo, int chanID)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport);
}

void ReqSimTransmitApduLogicalChannel(const ReqDataInfo *requestInfo, HRilApduSimIO *data, size_t dataLen)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqUnlockSimLock(const ReqDataInfo *requestInfo, int32_t lockReason, const char *passward)
{
    TELEPHONY_LOGI("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RespSuccessWithoutData(HRIL_SIM_SLOT_0, requestInfo, OnSimReport);
}