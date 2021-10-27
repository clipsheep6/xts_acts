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
#include "mock_network.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "macro.h"
#include "telephony_log_c.h"
#include "mock_report_public.h"

static const int g_operCount = 10;
static const uint32_t HRIL_ENABLE_ACTIVE_REPORT_MODE = 0;
static const uint32_t HRIL_REG_STATE = 1;
static const uint32_t HRIL_REG_RESP_ACT = 4;
static const int CAN_USE = 1;
static const int REGISTERED = 2;
static const int FORBIDERN = 3;

static const int GSM_OR_GPRS = 0;
static const int WCDMA = 2;
static const int LTE = 7;

static  int32_t GSM_SIGNAL_STRENGTH_5BAR[] = {-110, 1, 7, 13, 19, 25};
static  int32_t LTE_SIGNAL_STRENGTH_5BAR[] = {-121, 1, 6, 11, 16, 24};
static  int32_t WCDMA_SIGNAL_STRENGTH_5BAR[] = {-113, 1, 8, 14, 20, 26};

typedef enum {
    DOMAIN_TYPE_PS,
    DOMAIN_TYPE_CS,
} DomainType;

enum HRilOperatorInfoResult {
    HRIL_NUMERIC = 0,
    HRIL_SHORT_NAME,
    HRIL_LONE_NAME,
};

typedef enum {
    REG_STATE_UNKNOWN,
    REG_STATE_IN_SERVICE,
    REG_STATE_NO_SERVICE,
    REG_STATE_EMERGENCY_ONLY,
    REG_STATE_SEARCH,
} RegServiceState;

typedef enum {
    NETWORK_TYPE_UNKNOWN,
    NETWORK_TYPE_GSM,
    NETWORK_TYPE_CDMA,  // 未实现
    NETWORK_TYPE_WCDMA,
    NETWORK_TYPE_TDSCDMA,  // 未实现
    NETWORK_TYPE_LTE,
    NETWORK_TYPE_NR,  // 未实现
} RadioTech;

struct NetworkMockData {
    int selectMode;
    int netType;
    AvailableOperInfo** pp_OperInfo;
    AvailableOperInfo* p_OperInfo;
    char longOperator[100];
    char shortOperator[100];
    char plmn[100];
    char* operator_response[3];
    char* csRegStatusInfo[MAX_REG_INFO_ITEM];
    char csRegStatus[100];
    char csRadioTechnology[100];
    char* psRegStatusInfo[MAX_REG_INFO_ITEM];
    char psRegStatus[100];
    char psRadioTechnology[100];

    HRilRssi hrilRssi;
} g_networkMockData;

void ShowOperarorInfo(void)
{
    TELEPHONY_LOGD("========ShowOperarorInfo=========");
    TELEPHONY_LOGD("longName:%{public}s", g_networkMockData.operator_response[HRIL_LONE_NAME]);
    TELEPHONY_LOGD("shortName:%{public}s", g_networkMockData.operator_response[HRIL_SHORT_NAME]);
    TELEPHONY_LOGD("plmn:%{public}s", g_networkMockData.operator_response[HRIL_NUMERIC]);
    TELEPHONY_LOGD("========ShowOperarorInfo=========");
}

void NotityCsRegStatus(void)
{
    char *response[MAX_REG_INFO_ITEM] = { "" };
    struct ReportInfo reportInfo;
    (void)memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));
    reportInfo.notifyId = HNOTI_NETWORK_CS_REG_STATUS_UPDATED;
    reportInfo.type = HRIL_NOTIFICATION;
    reportInfo.error = HRIL_ERR_SUCCESS;
    response[HRIL_REG_STATE] = g_networkMockData.csRegStatus;
    response[HRIL_REG_RESP_ACT] = g_networkMockData.csRadioTechnology;
    OnNetworkReport(HRIL_SIM_SLOT_1, reportInfo, (void*)response, sizeof(response));
    TELEPHONY_LOGD("csRegStatus:%{public}s", response[HRIL_REG_STATE]);
    TELEPHONY_LOGD("csRadioTechnology:%{public}s", response[HRIL_REG_RESP_ACT]);
}

void NotifySignalChange(void)
{
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_SIGNAL_STRENGTH_UPDATED,
        (void*)(&g_networkMockData.hrilRssi), sizeof(g_networkMockData.hrilRssi));

    TELEPHONY_LOGD("enter to [%{public}s]: %{public}d signal strength: GSM:  %{public}d  WCDMA: %{public}d"
        "LTE: %{public}d", __func__, __LINE__, g_networkMockData.hrilRssi.gwRssi.rxlev,
        g_networkMockData.hrilRssi.wcdma.rscp, g_networkMockData.hrilRssi.lte.rsrp);
}

void CleanOperatorInfo(void)
{
    INIT_STRING_BUFF(g_networkMockData.plmn, '\0', sizeof(g_networkMockData.plmn));
    INIT_STRING_BUFF(g_networkMockData.shortOperator, '\0', sizeof(g_networkMockData.shortOperator));
    INIT_STRING_BUFF(g_networkMockData.longOperator, '\0', sizeof(g_networkMockData.longOperator));
}

void ModifyRegStatusInfo(void)
{
    INIT_STRING_BUFF(g_networkMockData.psRegStatus, '\0', sizeof(g_networkMockData.psRegStatus));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.psRegStatus, "2");
    g_networkMockData.psRegStatusInfo[HRIL_REG_RESP_ACT] = NULL;

    INIT_STRING_BUFF(g_networkMockData.csRegStatus, '\0', sizeof(g_networkMockData.csRegStatus));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.csRegStatus, "2");
    g_networkMockData.csRegStatusInfo[HRIL_REG_RESP_ACT] = NULL;
}

void InitNetworkMockData(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    InitNetworkSelectMode();
    InitNetworkPreferNetType();
    InitNetworkOperatorInformation();
    InitNetworkOperatorResponseStructure();
    InitNetworkRegisterStatusInformation();
    InitNetworkHRilRssiStructure();
    TELEPHONY_LOGE("NetworkSearch Mock Data Init Done");
}

void InitNetworkSelectMode(void)
{
    g_networkMockData.selectMode = 0;
}

void InitNetworkPreferNetType(void)
{
    g_networkMockData.netType = 0;
}

void InitNetworkOperatorInformation(void)
{
    InitOperatorInformationPointer();
    FillOperatorInformation();
}

void InitOperatorInformationPointer(void)
{
    g_networkMockData.p_OperInfo = (AvailableOperInfo*)malloc(g_operCount * sizeof(AvailableOperInfo));
    g_networkMockData.pp_OperInfo = (AvailableOperInfo**)malloc(g_operCount * sizeof(g_networkMockData.p_OperInfo));
    INIT_STRING_BUFF(g_networkMockData.p_OperInfo, 0, g_operCount * sizeof(AvailableOperInfo));
    for (int j = 0; j < g_operCount; j++) {
        g_networkMockData.pp_OperInfo[j] = &(g_networkMockData.p_OperInfo[j]);
    }
}

void FillOperatorInformation(void)
{
    int i = 0;
    FillSubitemOperatorInformation(g_networkMockData.longOperator, g_networkMockData.shortOperator,
        g_networkMockData.plmn, CAN_USE, LTE, i++);
    FillSubitemOperatorInformation("CHINA MOBILE", "CMCC", "46000", CAN_USE, GSM_OR_GPRS, i++);
    FillSubitemOperatorInformation("CHINA MOBILE", "CMCC", "46000", CAN_USE, WCDMA, i++);
    FillSubitemOperatorInformation("CHINA MOBILE", "CMCC", "46000", REGISTERED, LTE, i++);
    FillSubitemOperatorInformation("CHINA Unicom", "CUCC", "46001", FORBIDERN, GSM_OR_GPRS, i++);
    FillSubitemOperatorInformation("CHINA Unicom", "CUCC", "46001", FORBIDERN, WCDMA, i++);
    FillSubitemOperatorInformation("CHINA Unicom", "CUCC", "46001", FORBIDERN, LTE, i++);
    FillSubitemOperatorInformation("CHINA TELECOM", "CTCC", "46003", FORBIDERN, GSM_OR_GPRS, i++);
    FillSubitemOperatorInformation("CHINA TELECOM", "CTCC", "46003", FORBIDERN, WCDMA, i++);
    FillSubitemOperatorInformation("CHINA TELECOM", "CTCC", "46003", FORBIDERN, LTE, i++);
}

void FillSubitemOperatorInformation(char *longName, char *shortName, char *numeric, int status, int rat, int item)
{
    g_networkMockData.p_OperInfo[item].longName = longName;
    g_networkMockData.p_OperInfo[item].shortName = shortName;
    g_networkMockData.p_OperInfo[item].numeric = numeric;
    g_networkMockData.p_OperInfo[item].status = status;
    g_networkMockData.p_OperInfo[item].rat = rat;
}

void InitNetworkOperatorResponseStructure(void)
{
    INIT_STRING_BUFF(g_networkMockData.operator_response, 0, sizeof(g_networkMockData.operator_response));
    INIT_STRING_BUFF(g_networkMockData.plmn, '\0', sizeof(g_networkMockData.plmn));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.plmn, "46000");
    INIT_STRING_BUFF(g_networkMockData.shortOperator, '\0', sizeof(g_networkMockData.shortOperator));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.shortOperator, "CMCC");
    INIT_STRING_BUFF(g_networkMockData.longOperator, '\0', sizeof(g_networkMockData.longOperator));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.longOperator, "CHINA MOBILE");
    g_networkMockData.operator_response[HRIL_LONE_NAME] = g_networkMockData.longOperator;
    g_networkMockData.operator_response[HRIL_SHORT_NAME] = g_networkMockData.shortOperator;
    g_networkMockData.operator_response[HRIL_NUMERIC] = g_networkMockData.plmn;
}

void InitNetworkRegisterStatusInformation(void)
{
    INIT_STRING_BUFF(g_networkMockData.csRegStatus, '\0', sizeof(g_networkMockData.csRegStatus));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.csRegStatus, "1");
    INIT_STRING_BUFF(g_networkMockData.csRadioTechnology, '\0', sizeof(g_networkMockData.csRadioTechnology));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.csRadioTechnology, "0");
    g_networkMockData.csRegStatusInfo[HRIL_ENABLE_ACTIVE_REPORT_MODE] = "2";
    g_networkMockData.csRegStatusInfo[HRIL_REG_STATE] = g_networkMockData.csRegStatus;
    g_networkMockData.csRegStatusInfo[HRIL_REG_RESP_ACT] = g_networkMockData.csRadioTechnology;

    INIT_STRING_BUFF(g_networkMockData.psRegStatus, '\0', sizeof(g_networkMockData.psRegStatus));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.psRegStatus, "1");
    INIT_STRING_BUFF(g_networkMockData.psRadioTechnology, '\0', sizeof(g_networkMockData.psRadioTechnology));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.psRadioTechnology, "0");
    g_networkMockData.psRegStatusInfo[HRIL_ENABLE_ACTIVE_REPORT_MODE] = "2";
    g_networkMockData.psRegStatusInfo[HRIL_REG_STATE] = g_networkMockData.psRegStatus;
    g_networkMockData.psRegStatusInfo[HRIL_REG_RESP_ACT] = g_networkMockData.psRadioTechnology;
}

void InitNetworkHRilRssiStructure(void)
{
    const int RX_LEVEL = 30;
    const int BIT_ERR_RATE = 6;
    const int ABSOLUTE_RSSI = 75;
    const int ECNO = -125;
    g_networkMockData.hrilRssi.gwRssi.rxlev = RX_LEVEL;
    g_networkMockData.hrilRssi.gwRssi.ber = BIT_ERR_RATE;
    g_networkMockData.hrilRssi.cdmaRssi.absoluteRssi = ABSOLUTE_RSSI;
    g_networkMockData.hrilRssi.cdmaRssi.ecno = ECNO;
}

void SetPlmnState(int plmnState)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_networkMockData.p_OperInfo[0].status = plmnState;
    TELEPHONY_LOGD("> state: %{public}d", plmnState);
    NotityCsRegStatus();
}

void SetRadioTechnology(int rat)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_networkMockData.p_OperInfo[0].rat = rat;
    TELEPHONY_LOGD("> rat: %{public}d", rat);
    NotityCsRegStatus();
}

void SetNumertic(const char *data, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.plmn, data, dataLen);
    NotityCsRegStatus();
}

void SetLongOperator(const char *data, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.longOperator, data, dataLen);
    NotityCsRegStatus();
}

void SetShortOperator(const char *data, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.shortOperator, data, dataLen);
    NotityCsRegStatus();
}

void SetNetworkStatus(const char *data, int dateLen)
{
    NetworkStatus *src = (NetworkStatus*)data;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d src data = %{public}s  %{public}s ",
        __func__, __LINE__,  src->longOptName, src->shortOptName);
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d src data = %{public}s  %{public}d %{public}d",
        __func__, __LINE__,  src->plmn, src->regStatus, src-> nsaState);
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d src data = %{public}d  %{public}d %{public}d",
        __func__, __LINE__,  src->isRoaming, src->isCaActive, src-> isEmergency);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.longOperator, src->longOptName, sizeof(src->longOptName));
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.shortOperator, src->shortOptName, sizeof(src->shortOptName));
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.plmn, src->plmn, sizeof(src->plmn));
    // ps和cs都改为同一个状态
    SetRegStateWithRegType(src->regStatus, g_networkMockData.csRegStatus);
    SetRegStateWithRegType(src->regStatus, g_networkMockData.psRegStatus);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.csRadioTechnology, "1", sizeof(char));
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.psRadioTechnology, "1", sizeof(char));

    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d mock data = %{public}s  %{public}s ",
        __func__, __LINE__,  g_networkMockData.longOperator, g_networkMockData.shortOperator);
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d mock data = %{public}s  %{public}s %{public}s",
        __func__, __LINE__,  g_networkMockData.plmn, g_networkMockData.psRegStatus, g_networkMockData.csRegStatus);
    
    NotityCsRegStatus();
}

void SetRegStateWithRegType(int regType, char *destBuf) {
    switch (regType) {
        case REG_STATE_SEARCH:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(destBuf, "2");
            break;
        case REG_STATE_NO_SERVICE:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(destBuf, "0");
            break;
        case REG_STATE_IN_SERVICE:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(destBuf, "1");
            break;
        case REG_STATE_EMERGENCY_ONLY:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(destBuf, "6");
            break;
        case REG_STATE_UNKNOWN:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(destBuf, "4");
            break;
        default:
            break;
    }
}

void SetSignal(const char *data, int dataLen) {
    SignalInfo* signalInfo = (SignalInfo*) data;
    if (signalInfo == NULL) {
        TELEPHONY_LOGD("enter to [%{public}s]:%{public}d  signalInfo == NULL", __func__, __LINE__);
        return;
    }
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d mem src data = %{public}d  %{public}d ",
        __func__, __LINE__,  signalInfo->signalType, signalInfo->signalLevel);
    int levelIndex = signalInfo->signalLevel;
    levelIndex = fmin(5, levelIndex);
    levelIndex = fmax(0, levelIndex);
    switch (signalInfo->signalType) {
        case NETWORK_TYPE_GSM:
            g_networkMockData.hrilRssi.gwRssi.rxlev = GSM_SIGNAL_STRENGTH_5BAR[levelIndex];
            break;
        case NETWORK_TYPE_WCDMA:
            g_networkMockData.hrilRssi.wcdma.rscp = WCDMA_SIGNAL_STRENGTH_5BAR[levelIndex];
            break;
        case NETWORK_TYPE_LTE:
            g_networkMockData.hrilRssi.lte.rsrp = LTE_SIGNAL_STRENGTH_5BAR[levelIndex];
            break;
        default:
            break;
    }
    NotifySignalChange();
}

void ReqGetCsRegStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, &g_networkMockData.csRegStatusInfo,
        sizeof(g_networkMockData.csRegStatusInfo));
}

void SetRegServiceState(int reg, int domain)
{
    TELEPHONY_LOGD(
        "enter to [%{public}s]:%{public}d:reg:%{public}d, domain:%{public}d", __func__, __LINE__, reg, domain);
    char* dst = g_networkMockData.csRegStatus;
    if (domain == DOMAIN_TYPE_PS) {
        dst = g_networkMockData.psRegStatus;
    }

    switch (reg) {
        case REG_STATE_SEARCH:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "2");
            break;
        case REG_STATE_NO_SERVICE:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "0");
            break;
        case REG_STATE_IN_SERVICE:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "1");
            break;
        case REG_STATE_EMERGENCY_ONLY:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "6");
            break;
        case REG_STATE_UNKNOWN:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "4");
            break;
        default:
            break;
    }
    NotityCsRegStatus();
}

void SetRegServiceRawState(int reg, int domain)
{
    TELEPHONY_LOGD(
        "enter to [%{public}s]:%{public}d:reg:%{public}d, domain:%{public}d", __func__, __LINE__, reg, domain);
    char* dst = g_networkMockData.csRegStatus;
    if (domain == DOMAIN_TYPE_PS) {
        dst = g_networkMockData.psRegStatus;
    }
    int ret = sprintf_s(dst, sizeof(char[100]), "%d", reg);
    if (ret != 0) {
        return;
    }
    NotityCsRegStatus();
}

void SetRadioTech(int tech, int domain)
{
    TELEPHONY_LOGD(
        "enter to [%{public}s]:%{public}d:tech:%{public}d, domain:%{public}d", __func__, __LINE__, tech, domain);
    char* dst = g_networkMockData.csRadioTechnology;
    if (domain == DOMAIN_TYPE_PS) {
        dst = g_networkMockData.psRadioTechnology;
    }

    switch (tech) {
        case NETWORK_TYPE_GSM:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "0");
            break;
        case NETWORK_TYPE_WCDMA:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "6");
            break;
        case NETWORK_TYPE_LTE:
            CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "7");
            break;
        default:
            break;
    }
    NotityCsRegStatus();
}

void ReqGetPsRegStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, &g_networkMockData.psRegStatusInfo,
        sizeof(g_networkMockData.psRegStatusInfo));
}

void ReqGetOperatorInfo(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, &g_networkMockData.operator_response,
        sizeof(g_networkMockData.operator_response));
}

void ShowCanUseOperInfo(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("=================ShowCanUseOperInfo===================");
    for (int i = 0; i < g_operCount; i++) {
        TELEPHONY_LOGD("status:%{public}d, long:%{public}s, short:%{public}s, plmn:%{public}s",
            g_networkMockData.p_OperInfo[i].status, g_networkMockData.p_OperInfo[i].longName,
            g_networkMockData.p_OperInfo[i].shortName, g_networkMockData.p_OperInfo[i].numeric);
    }
    TELEPHONY_LOGD("=================ShowCanUseOperInfo===================");
}

void ReqGetNetworkSearchInformation(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    ShowCanUseOperInfo();
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo,
        OnNetworkReport, (void*)g_networkMockData.pp_OperInfo, g_operCount * sizeof(g_networkMockData.p_OperInfo));
}

void ReqSetNetworkSelectionMode(const ReqDataInfo *requestInfo,  const HRilSetNetworkModeInfo *data)
{
    struct ReportInfo reportInfo;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);

    const HRilSetNetworkModeInfo *setModeInfo = data;
    TELEPHONY_LOGD("RequestSetAutomaticModeForNetworks setModeInfo:%{public}p", setModeInfo);
    if (setModeInfo == NULL) {
        reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_INVALID_PARAMETER, HRIL_RESPONSE, 0);
        OnNetworkReport(HRIL_SIM_SLOT_1, reportInfo, NULL, 1);
        return;
    }
    if (setModeInfo->selectMode != 0) {
        if (setModeInfo == NULL || setModeInfo->oper == NULL ||
            setModeInfo->selectMode < 0 || setModeInfo->selectMode > 1) {
            TELEPHONY_LOGD("RequestSetAutomaticModeForNetworks setModeInfo:%{public}p", setModeInfo);
            reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_INVALID_PARAMETER, HRIL_RESPONSE, 0);
            OnNetworkReport(HRIL_SIM_SLOT_1, reportInfo, NULL, 1);
            return;
        }
        for (unsigned int i = 0; i < strlen(setModeInfo->oper); i++) {
            if (setModeInfo->oper[i] < '0' || setModeInfo->oper[i] > '9') {
                TELEPHONY_LOGD("RequestSetAutomaticModeForNetworks setModeInfo:%{public}c", setModeInfo->oper[i]);
                reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_INVALID_MODEM_PARAMETER, HRIL_RESPONSE, 0);
                OnNetworkReport(HRIL_SIM_SLOT_1, reportInfo, NULL, 1);
                return;
            }
        }
    }

    g_networkMockData.selectMode = setModeInfo->selectMode;
    RESP_SUCSS_WITHOUT_DATA_EX(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, 1);
}

void ReqGetNetworkSelectionMode(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, &g_networkMockData.selectMode, sizeof(int));
}

void ReqGetSignalStrength(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d signal strength: GSM:%{public}d,WCDMA: %{public}d,LTE: %{public}d",
        __func__, __LINE__, g_networkMockData.hrilRssi.gwRssi.rxlev, g_networkMockData.hrilRssi.wcdma.rxlev,
        g_networkMockData.hrilRssi.lte.rxlev);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, &g_networkMockData.hrilRssi, sizeof(HRilRssi));
}

void ReqSetPreferredNetwork(const ReqDataInfo *requestInfo,  const int32_t *data)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, setNetType:%{public}d", __func__, __LINE__, *data);
    if ((*data) < HRIL_NETWORK_AUTO || (*data) > HRIL_NETWORK_WCDMA_GSM) {
        RESP_CODE_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, HRIL_ERR_INVALID_PARAMETER);
        return;
    }
    g_networkMockData.netType = *data;
    if (g_networkMockData.netType == HRIL_NETWORK_LTE_WCDMA_GSM) {
        g_networkMockData.netType = HRIL_NETWORK_AUTO;
    }
    if (g_networkMockData.netType == HRIL_NETWORK_LTE) {
        SetRadioTech(NETWORK_TYPE_LTE, DOMAIN_TYPE_PS);
        SetRadioTech(NETWORK_TYPE_LTE, DOMAIN_TYPE_CS);
    }
    if (g_networkMockData.netType == HRIL_NETWORK_AUTO) {
        SetRadioTech(NETWORK_TYPE_GSM, DOMAIN_TYPE_PS);
        SetRadioTech(NETWORK_TYPE_GSM, DOMAIN_TYPE_CS);
    }
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport);
}

void ReqGetPreferredNetwork(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, getNetType:%{public}d", __func__, __LINE__,
        g_networkMockData.netType);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, &g_networkMockData.netType, sizeof(int));
}

void ReqGetImei(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqSetPsAttachStatus(const ReqDataInfo *requestInfo, const int32_t *data)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqGetPsAttachStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqGetCellInfoList(const ReqDataInfo *requestInfo, const HRilSetNetworkModeInfo *data)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqGetCurrentCellInfo(const ReqDataInfo *requestInfo, const HRilSetNetworkModeInfo *data)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

int ProcessRegStatus(const char* s, char** response, int count)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}
int ProcessIMSRegStatus(const char* s, char** response, int count)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}
int ProcessParamSignalStrength(const char* result, HRilRssi* hrilRssi)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}
int ProcessParamSignalStrengthNotify(const char* result, HRilRssi* hrilRssi)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}
int ProcessOperListToUse(const char* list)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}
void PerformTimeOut(int sigFlag)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}
int ParseOperListInfo(const char* lineinfo, int count, AvailableOperInfo* pOperInfo, AvailableOperInfo** ppOperInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}
int parseNetTypeStr(char* netType)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}
void NotifyNetWokTime(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

int ProcessImsRegStatus(const char *s, const HRilImsRegStatusInfo *imsRegStatusInfo, int expectInfoNum)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    return 0;
}