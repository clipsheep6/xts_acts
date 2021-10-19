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
#include "macro.h"
#include "telephony_log_c.h"

static const int g_operCount = 10;
static const uint32_t HRIL_CS_REG_STATE = 1;
static const uint32_t HRIL_CS_REG_RESP_ACT = 4;
static const int CAN_USE = 1;
static const int REGISTERED = 2;
static const int FORBIDERN = 3;

static const int GSM_OR_GPRS = 0;
static const int WCDMA = 2;
static const int LTE = 7;
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
    RADIO_TECHNOLOGY_UNKNOWN,
    RADIO_TECHNOLOGY_GSM,
    RADIO_TECHNOLOGY_WCDMA,
    RADIO_TECHNOLOGY_LTE,
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

void ShowOperarorInfo()
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
    response[HRIL_CS_REG_STATE] = g_networkMockData.csRegStatus;
    response[HRIL_CS_REG_RESP_ACT] = g_networkMockData.csRadioTechnology;
    OnNetworkReport(reportInfo, (void*)response, MAX_REG_INFO_ITEM * sizeof(void*));
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
    g_networkMockData.psRegStatusInfo[HRIL_CS_REG_RESP_ACT] = NULL;

    INIT_STRING_BUFF(g_networkMockData.csRegStatus, '\0', sizeof(g_networkMockData.csRegStatus));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.csRegStatus, "2");
    g_networkMockData.csRegStatusInfo[HRIL_CS_REG_RESP_ACT] = NULL;
}

void InitNetworkMockData(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_networkMockData.selectMode = 0;
    g_networkMockData.netType = 0;
    g_networkMockData.pp_OperInfo = (AvailableOperInfo**)malloc(g_operCount * sizeof(AvailableOperInfo*));
    g_networkMockData.p_OperInfo = (AvailableOperInfo*)malloc(g_operCount * sizeof(AvailableOperInfo));
    INIT_STRING_BUFF(g_networkMockData.p_OperInfo, 0, g_operCount * sizeof(AvailableOperInfo));
    for (int j = 0; j < g_operCount; j++) {
        g_networkMockData.pp_OperInfo[j] = &(g_networkMockData.p_OperInfo[j]);
    }

    g_networkMockData.p_OperInfo[0].status = CAN_USE;
    g_networkMockData.p_OperInfo[0].longName = g_networkMockData.longOperator;
    g_networkMockData.p_OperInfo[0].shortName = g_networkMockData.shortOperator;
    g_networkMockData.p_OperInfo[0].numeric = g_networkMockData.plmn;
    g_networkMockData.p_OperInfo[0].rat = LTE;

    g_networkMockData.p_OperInfo[1].status = CAN_USE;
    g_networkMockData.p_OperInfo[1].longName = "CHINA MOBILE";
    g_networkMockData.p_OperInfo[1].numeric = "46000"; // 中国移动2G（可用）
    g_networkMockData.p_OperInfo[1].shortName = "CMCC";
    g_networkMockData.p_OperInfo[1].rat = GSM_OR_GPRS;

    g_networkMockData.p_OperInfo[2].status = CAN_USE;
    g_networkMockData.p_OperInfo[2].longName = "CHINA MOBILE";
    g_networkMockData.p_OperInfo[2].numeric = "46000"; // 中国移动3G （可用）
    g_networkMockData.p_OperInfo[2].shortName = "CMCC";
    g_networkMockData.p_OperInfo[2].rat = WCDMA;

    g_networkMockData.p_OperInfo[3].status = REGISTERED;
    g_networkMockData.p_OperInfo[3].longName = "CHINA MOBILE";
    g_networkMockData.p_OperInfo[3].numeric = "46000"; // 中国移动4G （已注册）
    g_networkMockData.p_OperInfo[3].shortName = "CMCC";
    g_networkMockData.p_OperInfo[3].rat = LTE;

    g_networkMockData.p_OperInfo[4].status = FORBIDERN;
    g_networkMockData.p_OperInfo[4].longName = "China Unicom";
    g_networkMockData.p_OperInfo[4].numeric = "46001"; // 中国联通2G （禁止）
    g_networkMockData.p_OperInfo[4].shortName = "CUCC";
    g_networkMockData.p_OperInfo[4].rat = GSM_OR_GPRS;

    g_networkMockData.p_OperInfo[5].status = FORBIDERN;
    g_networkMockData.p_OperInfo[5].longName = "China Unicom";
    g_networkMockData.p_OperInfo[5].numeric = "46001"; // 中国联通3G （禁止）
    g_networkMockData.p_OperInfo[5].shortName = "CUCC";
    g_networkMockData.p_OperInfo[5].rat = WCDMA;

    g_networkMockData.p_OperInfo[6].status = FORBIDERN;
    g_networkMockData.p_OperInfo[6].longName = "China Unicom";
    g_networkMockData.p_OperInfo[6].numeric = "46001"; // 中国联通4G （禁止）
    g_networkMockData.p_OperInfo[6].shortName = "CUCC";
    g_networkMockData.p_OperInfo[6].rat = LTE;

    g_networkMockData.p_OperInfo[7].status = FORBIDERN;
    g_networkMockData.p_OperInfo[7].longName = "CHINA TELECOM";
    g_networkMockData.p_OperInfo[7].numeric = "46003"; // 中国电信2G （禁止）
    g_networkMockData.p_OperInfo[7].shortName = "CTCC";
    g_networkMockData.p_OperInfo[7].rat = GSM_OR_GPRS;

    g_networkMockData.p_OperInfo[8].status = FORBIDERN;
    g_networkMockData.p_OperInfo[8].longName = "CHINA TELECOM";
    g_networkMockData.p_OperInfo[8].numeric = "46003"; // 中国电信3G （禁止）
    g_networkMockData.p_OperInfo[8].shortName = "CTCC";
    g_networkMockData.p_OperInfo[8].rat = WCDMA;

    g_networkMockData.p_OperInfo[9].status = FORBIDERN;
    g_networkMockData.p_OperInfo[9].longName = "CHINA TELECOM";
    g_networkMockData.p_OperInfo[9].numeric = "46003"; // 中国电信4G （禁止）
    g_networkMockData.p_OperInfo[9].shortName = "CTCC";
    g_networkMockData.p_OperInfo[9].rat = LTE;

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

    INIT_STRING_BUFF(g_networkMockData.csRegStatus, '\0', sizeof(g_networkMockData.csRegStatus));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.csRegStatus, "1");
    INIT_STRING_BUFF(g_networkMockData.csRadioTechnology, '\0', sizeof(g_networkMockData.csRadioTechnology));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.csRadioTechnology, "0");
    g_networkMockData.csRegStatusInfo[0] = "2";
    g_networkMockData.csRegStatusInfo[1] = g_networkMockData.csRegStatus;
    g_networkMockData.csRegStatusInfo[4] = g_networkMockData.csRadioTechnology;

    INIT_STRING_BUFF(g_networkMockData.psRegStatus, '\0', sizeof(g_networkMockData.psRegStatus));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.psRegStatus, "1");
    INIT_STRING_BUFF(g_networkMockData.psRadioTechnology, '\0', sizeof(g_networkMockData.psRadioTechnology));
    CLEAR_AND_COPY_FROM_CLEAN_BUFFER(g_networkMockData.psRadioTechnology, "0");
    g_networkMockData.psRegStatusInfo[0] = "2";
    g_networkMockData.psRegStatusInfo[1] = g_networkMockData.psRegStatus;
    g_networkMockData.psRegStatusInfo[4] = g_networkMockData.psRadioTechnology;

    g_networkMockData.hrilRssi.gwRssi.rxlev = 30;
    g_networkMockData.hrilRssi.gwRssi.ber = 6;
    g_networkMockData.hrilRssi.cdmaRssi.absoluteRssi = 75;
    g_networkMockData.hrilRssi.cdmaRssi.ecno = -125;
    TELEPHONY_LOGE("NetworkSearch Mock Data Init Done");
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

void ReqGetCsRegStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(requestInfo, OnNetworkReport, &g_networkMockData.csRegStatusInfo,
        MAX_REG_INFO_ITEM * sizeof(void *));
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

    TELEPHONY_LOGD("g_networkMockData.csRegStatusInfo[0]:%{public}s:", g_networkMockData.csRegStatusInfo[0]);
    TELEPHONY_LOGD("g_networkMockData.csRegStatusInfo[1]:%{public}s:", g_networkMockData.csRegStatusInfo[1]);
    TELEPHONY_LOGD("g_networkMockData.csRegStatusInfo[2]:%{public}s:", g_networkMockData.csRegStatusInfo[2]);
    TELEPHONY_LOGD("g_networkMockData.csRegStatusInfo[3]:%{public}s:", g_networkMockData.csRegStatusInfo[3]);
    TELEPHONY_LOGD("g_networkMockData.csRegStatusInfo[4]:%{public}s:", g_networkMockData.csRegStatusInfo[4]);


    TELEPHONY_LOGD("g_networkMockData.psRegStatusInfo[0]:%{public}s:", g_networkMockData.psRegStatusInfo[0]);
    TELEPHONY_LOGD("g_networkMockData.psRegStatusInfo[1]:%{public}s:", g_networkMockData.psRegStatusInfo[1]);
    TELEPHONY_LOGD("g_networkMockData.psRegStatusInfo[2]:%{public}s:", g_networkMockData.psRegStatusInfo[2]);
    TELEPHONY_LOGD("g_networkMockData.psRegStatusInfo[3]:%{public}s:", g_networkMockData.psRegStatusInfo[3]);
    TELEPHONY_LOGD("g_networkMockData.psRegStatusInfo[4]:%{public}s:", g_networkMockData.psRegStatusInfo[4]);
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
    if(ret != 0) {
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
    case RADIO_TECHNOLOGY_GSM:
        CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "0");
        break;
    case RADIO_TECHNOLOGY_WCDMA:
        CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, "6");
        break;
    case RADIO_TECHNOLOGY_LTE:
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
    RESP_SUCSS_WITH_DATA(requestInfo, OnNetworkReport, &g_networkMockData.psRegStatusInfo,
        MAX_REG_INFO_ITEM * sizeof(char *));
}

void ReqGetOperatorInfo(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(requestInfo, OnNetworkReport, &g_networkMockData.operator_response, 3 * sizeof(char*));
}

void ShowCanUseOperInfo()
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

void RequestGetNetworkSearchInformation(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    ShowCanUseOperInfo();
    RESP_SUCSS_WITH_DATA(requestInfo,
        OnNetworkReport, (void*)g_networkMockData.pp_OperInfo, g_operCount * sizeof(void *));
}

void RequestSetNetworkSelectionMode(const ReqDataInfo *requestInfo,  const HRiSetNetworkModeInfo *data)
{
    struct ReportInfo reportInfo;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);

    HRiSetNetworkModeInfo *setModeInfo = (HRiSetNetworkModeInfo*)data;
    TELEPHONY_LOGD("RequestSetAutomaticModeForNetworks setModeInfo:%{public}p", setModeInfo);
    if(setModeInfo == NULL) {
        reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_INVALID_PARAMETER, HRIL_RESPONSE, 0);
        OnNetworkReport(reportInfo, NULL, 1);
        return;
    }
    if (setModeInfo->selectMode != 0) {
        if (setModeInfo == NULL || setModeInfo->oper == NULL ||
            setModeInfo->selectMode < 0 || setModeInfo->selectMode > 1) {
            TELEPHONY_LOGD("RequestSetAutomaticModeForNetworks setModeInfo:%{public}p", setModeInfo);
            reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_INVALID_PARAMETER, HRIL_RESPONSE, 0);
            OnNetworkReport(reportInfo, NULL, 1);
            return;
        }
        for (unsigned int i = 0; i < strlen(setModeInfo->oper); i++) {
            if (setModeInfo->oper[i] < '0' || setModeInfo->oper[i] > '9') {
                TELEPHONY_LOGD("RequestSetAutomaticModeForNetworks setModeInfo:%{public}c", setModeInfo->oper[i]);
                reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_INVALID_MODEM_PARAMETER, HRIL_RESPONSE, 0);
                OnNetworkReport(reportInfo, NULL, 1);
                return;
            }
        }
    }

    g_networkMockData.selectMode = setModeInfo->selectMode;
    RESP_SUCSS_WITHOUT_DATA_EX(requestInfo, OnNetworkReport, 1);
}

void RequestGetNetworkSelectionMode(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(requestInfo, OnNetworkReport, &g_networkMockData.selectMode, sizeof(int));
}

void ReqGetSignalStrength(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(requestInfo, OnNetworkReport, &g_networkMockData.hrilRssi, sizeof(HRilRssi));
}

void RequestSetPreferredNetworkPara(const ReqDataInfo *requestInfo,  const int32_t *data)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, setNetType:%{public}d", __func__, __LINE__, *data);
    g_networkMockData.netType = *data;
    if (g_networkMockData.netType < HRIL_NETWORK_AUTO || g_networkMockData.netType > HRIL_NETWORK_WCDMA_GSM) {
        RESP_CODE_WITHOUT_DATA(requestInfo, OnNetworkReport, HRIL_ERR_INVALID_PARAMETER);
        return;
    }
    if (g_networkMockData.netType == HRIL_NETWORK_LTE_WCDMA_GSM) {
        g_networkMockData.netType = HRIL_NETWORK_AUTO;
    }
    if (g_networkMockData.netType == HRIL_NETWORK_LTE) {
        SetRadioTech(RADIO_TECHNOLOGY_LTE, DOMAIN_TYPE_PS);
        SetRadioTech(RADIO_TECHNOLOGY_LTE, DOMAIN_TYPE_CS);
    }
    if (g_networkMockData.netType == HRIL_NETWORK_AUTO) {
        SetRadioTech(RADIO_TECHNOLOGY_GSM, DOMAIN_TYPE_PS);
        SetRadioTech(RADIO_TECHNOLOGY_GSM, DOMAIN_TYPE_CS);
    }
    RESP_SUCSS_WITHOUT_DATA(requestInfo, OnNetworkReport);
}

void RequestGetPreferredNetworkPara(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, getNetType:%{public}d", __func__, __LINE__, 
        g_networkMockData.netType );
    RESP_SUCSS_WITH_DATA(requestInfo, OnNetworkReport, &g_networkMockData.netType, sizeof(int));
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
void NotifyNetWokTime()
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}