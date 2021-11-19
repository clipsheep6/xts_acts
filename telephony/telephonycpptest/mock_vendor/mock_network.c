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
#include "mock_vendor_adapter.h"

static const int g_operCount = 10;
static const int OPERATOR_INFO_ARR_LENGTH = 3;
static const int CAN_USE = 1;
static const int REGISTERED = 2;
static const int FORBIDERN = 3;

static const int GSM_OR_GPRS = 0;
static const int WCDMA = 2;
static const int LTE = 7;

static  int32_t GSM_SIGNAL_STRENGTH_5BAR[] = {-110, 1, 7, 13, 19, 25};
static  int32_t LTE_SIGNAL_STRENGTH_5BAR[] = {-121, 1, 6, 11, 16, 24};
static  int32_t WCDMA_SIGNAL_STRENGTH_5BAR[] = {-113, 1, 8, 14, 20, 26};
static CellInfo cellInfo[4] = {
    { NETWORK_TYPE_GSM, { {1, 49, 51, 3674, 10138, -88} }},
    { NETWORK_TYPE_GSM, { {2, 625, 20, 0, 10138, -90} }},
    { NETWORK_TYPE_GSM, { {2, 617, 55, 4452, 10138, -94} }},
    { NETWORK_TYPE_GSM, { {2, 622, 50, 0, 10138, -95} }}
};
static CurrentCellInfoVendor cciv = { NETWORK_TYPE_GSM, 460, 0, { {1, 48, 54, 5141, 10138, -82, 0, 12} }};
struct NetworkMockData {
    int selectMode;
    int netType;
    int psAttachStatus;
    AvailableOperInfo** pp_OperInfo;
    AvailableOperInfo* p_OperInfo;
    HRilImsRegStatusInfo imsRegStatusInfo;
    char *imei;
    char longOperator[100];
    char shortOperator[100];
    char plmn[100];
    char* operator_response[OPERATOR_INFO_ARR_LENGTH];
    HRilRegStatusInfo psRegStatusInfo;
    HRilRegStatusInfo csRegStatusInfo;
    HRilRssi hrilRssi;
    CellInfoList cellInfoList;
} g_networkMockData;

void ShowOperarorInfo(void)
{
    TELEPHONY_LOGD("========ShowOperarorInfo=========");
    TELEPHONY_LOGD("longName:%{public}s", g_networkMockData.operator_response[HRIL_LONE_NAME]);
    TELEPHONY_LOGD("shortName:%{public}s", g_networkMockData.operator_response[HRIL_SHORT_NAME]);
    TELEPHONY_LOGD("plmn:%{public}s", g_networkMockData.operator_response[HRIL_NUMERIC]);
    TELEPHONY_LOGD("========ShowOperarorInfo=========");
}

void NotifySignalChange(void)
{
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_SIGNAL_STRENGTH_UPDATED,
        (const uint8_t *)(&g_networkMockData.hrilRssi), sizeof(g_networkMockData.hrilRssi));

    TELEPHONY_LOGD("enter to [%{public}s]: %{public}d signal strength: GSM:  %{public}d  WCDMA: %{public}d"
        "LTE: %{public}d", __func__, __LINE__, g_networkMockData.hrilRssi.gwRssi.rxlev,
        g_networkMockData.hrilRssi.wcdmaRssi.rscp, g_networkMockData.hrilRssi.lteRssi.rsrp);
}

void CleanOperatorInfo(void)
{
    INIT_STRING_BUFF(g_networkMockData.plmn, '\0', sizeof(g_networkMockData.plmn));
    INIT_STRING_BUFF(g_networkMockData.shortOperator, '\0', sizeof(g_networkMockData.shortOperator));
    INIT_STRING_BUFF(g_networkMockData.longOperator, '\0', sizeof(g_networkMockData.longOperator));
}

void ModifyRegStatusInfo(void)
{
    g_networkMockData.psRegStatusInfo.regState = STAT_NO_REGISTER_SEARCHING;
    g_networkMockData.csRegStatusInfo.regState = STAT_NO_REGISTER_SEARCHING;
}

void InitNetworkMockData(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    InitSelectMode();
    InitPreferNetType();
    InitOperatorInformation();
    InitOperatorResponseStructure();
    InitRegisterStatusInformation();
    InitHRilRssiStructure();
    InitImsRegStatusInfo();
    InitImeiSn();
    InitCellInfoList();
    TELEPHONY_LOGE("NetworkSearch Mock Data Init Done");

    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)(&g_networkMockData.csRegStatusInfo), sizeof(HRilRegStatusInfo));
}

void InitSelectMode(void)
{
    g_networkMockData.selectMode = 0;
}

void InitPreferNetType(void)
{
    g_networkMockData.netType = 0;
}

void InitOperatorInformation(void)
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

void InitOperatorResponseStructure(void)
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

void InitRegisterStatusInformation(void)
{
    int notifyType = 2;
    int lacCode = 195;
    int cellId = 26;
    g_networkMockData.psRegStatusInfo.notifyType = notifyType;
    g_networkMockData.psRegStatusInfo.regState = REG_STATE_IN_SERVICE;
    g_networkMockData.psRegStatusInfo.lacCode = lacCode;
    g_networkMockData.psRegStatusInfo.cellId = cellId;
    g_networkMockData.psRegStatusInfo.actType = GSM;

    g_networkMockData.csRegStatusInfo = g_networkMockData.psRegStatusInfo;
}

void InitHRilRssiStructure(void)
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

void InitImsRegStatusInfo(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    const int IMS_EXT_INFO_NOTIFY_TYPE = 2;
    g_networkMockData.imsRegStatusInfo.notifyType = IMS_EXT_INFO_NOTIFY_TYPE;
    g_networkMockData.imsRegStatusInfo.regInfo = 0;
    g_networkMockData.imsRegStatusInfo.extInfo = 0;
}

void InitImeiSn(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_networkMockData.imei = "863163042380669";
}

void InitCellInfoList(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int cellInfoSize = 4;
    g_networkMockData.cellInfoList.itemNum = cellInfoSize;
    g_networkMockData.cellInfoList.cellNearbyInfo = cellInfo;
}

void SetOperStatus(int plmnState)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_networkMockData.p_OperInfo[0].status = plmnState;
    TELEPHONY_LOGD("> state: %{public}d", plmnState);
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetOperRat(int rat)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_networkMockData.p_OperInfo[0].rat = rat;
    TELEPHONY_LOGD("> rat: %{public}d", rat);
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetNumertic(const char *data, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.plmn, data, dataLen);
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetLongOperator(const char *data, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.longOperator, data, dataLen);
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetShortOperator(const char *data, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.shortOperator, data, dataLen);
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetNetworkStatus(const char *data, int dateLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    NetworkStatus *src = (NetworkStatus*)data;
    TELEPHONY_LOGD("<src data> ln:%{public}s, sn:%{public}s, plmn:%{public}s, regStatus:%{public}d", src->longOptName,
        src->shortOptName, src->plmn, src->regStatus);
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.longOperator, src->longOptName, sizeof(src->longOptName));
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.shortOperator, src->shortOptName, sizeof(src->shortOptName));
    CLEAR_AND_COPY_FROM_DIRTY_BUFFER(g_networkMockData.plmn, src->plmn, sizeof(src->plmn));
    g_networkMockData.psRegStatusInfo.regState = src->regStatus;
    g_networkMockData.csRegStatusInfo.regState = src->regStatus;
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetSignal(const char *data, int dataLen)
{
    SignalInfo* signalInfo = (SignalInfo*) data;
    if (signalInfo == NULL) {
        TELEPHONY_LOGD("enter to [%{public}s]:%{public}d  signalInfo == NULL", __func__, __LINE__);
        return;
    }
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d mem src data = %{public}d  %{public}d ",
        __func__, __LINE__,  signalInfo->signalType, signalInfo->signalLevel);
    int levelIndex = signalInfo->signalLevel;
    int ceilingIndex = 5;
    levelIndex = fmin(ceilingIndex, levelIndex);
    levelIndex = fmax(0, levelIndex);
    switch (signalInfo->signalType) {
        case RADIO_TECHNOLOGY_GSM:
            g_networkMockData.hrilRssi.gwRssi.rxlev = GSM_SIGNAL_STRENGTH_5BAR[levelIndex];
            break;
        case RADIO_TECHNOLOGY_WCDMA:
            g_networkMockData.hrilRssi.wcdmaRssi.rscp = WCDMA_SIGNAL_STRENGTH_5BAR[levelIndex];
            break;
        case RADIO_TECHNOLOGY_LTE:
            g_networkMockData.hrilRssi.lteRssi.rsrp = LTE_SIGNAL_STRENGTH_5BAR[levelIndex];
            break;
        default:
            break;
    }
    NotifySignalChange();
}

void ReqGetCsRegStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport,
        (const uint8_t*)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetRegServiceState(int reg, int domain)
{
    TELEPHONY_LOGD(
        "enter to [%{public}s]:%{public}d:reg:%{public}d, domain:%{public}d", __func__, __LINE__, reg, domain);
    int* dst = &g_networkMockData.csRegStatusInfo.regState;
    if (domain == DOMAIN_TYPE_PS) {
        dst = &g_networkMockData.psRegStatusInfo.regState;
    }

    switch (reg) {
        case REG_STATE_SEARCH:
            *dst = STAT_NO_REGISTER_SEARCHING;
            break;
        case REG_STATE_NO_SERVICE:
            *dst = STAT_NO_REGISTER;
            break;
        case REG_STATE_IN_SERVICE:
            *dst = STAT_REGISTERED;
            break;
        case REG_STATE_UNKNOWN:
            *dst = STAT_UNKNOW;
            break;
        default:
            break;
    }
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetRegServiceRawState(int reg, int domain)
{
    TELEPHONY_LOGD(
        "enter to [%{public}s]:%{public}d:reg:%{public}d, domain:%{public}d", __func__, __LINE__, reg, domain);
    int* dst = &g_networkMockData.csRegStatusInfo.regState;
    if (domain == DOMAIN_TYPE_PS) {
        dst = &g_networkMockData.psRegStatusInfo.regState;
    }
    *dst = reg;
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetRadioTech(int tech, int domain)
{
    TELEPHONY_LOGD(
        "enter to [%{public}s]:%{public}d:tech:%{public}d, domain:%{public}d", __func__, __LINE__, tech, domain);
    int* dst = &g_networkMockData.csRegStatusInfo.actType;
    if (domain == DOMAIN_TYPE_PS) {
        dst = &g_networkMockData.psRegStatusInfo.actType;
    }

    switch (tech) {
        case RADIO_TECHNOLOGY_GSM:
            *dst = GSM;
            break;
        case RADIO_TECHNOLOGY_WCDMA:
            *dst = UTRAN_W_HSDPA_HSUPA;
            break;
        case RADIO_TECHNOLOGY_LTE:
            *dst = E_UTRAN;
            break;
        default:
            break;
    }
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnNetworkReport, HNOTI_NETWORK_CS_REG_STATUS_UPDATED,
        (const uint8_t *)&g_networkMockData.csRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void SetCurrentCellInfo(const char *buff, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    MockCellInfo ci;
    (void)memcpy_s(&ci, sizeof(MockCellInfo), buff, dataLen);
    (void)memset_s(&cciv, sizeof(CurrentCellInfoVendor), 0, sizeof(CurrentCellInfoVendor));
    TELEPHONY_LOGD("type:%{public}d lac:%{public}d cellId:%{public}d arfcn:%{public}d bsic:%{public}d mcc:%{public}d "
        "mnc:%{public}d", ci.type, ci.lac, ci.cellId, ci.arfcn, ci.bsic, ci.mcc, ci.mnc);
    cciv.ratType = ci.type;
    cciv.mcc = ci.mcc;
    cciv.mnc = ci.mnc;
    if (ci.type == NETWORK_TYPE_GSM) {
        cciv.ServiceCellParas.gsm.arfcn = ci.arfcn;
        cciv.ServiceCellParas.gsm.cellId = ci.cellId;
        cciv.ServiceCellParas.gsm.bsic = ci.bsic;
        cciv.ServiceCellParas.gsm.lac = ci.lac;
    } else if (ci.type == NETWORK_TYPE_LTE) {
        cciv.ServiceCellParas.lte.arfcn = ci.arfcn;
        cciv.ServiceCellParas.lte.cellId = ci.cellId;
        cciv.ServiceCellParas.lte.pci = ci.bsic;
        cciv.ServiceCellParas.lte.tac = ci.lac;
    } else if (ci.type == NETWORK_TYPE_WCDMA) {
        cciv.ServiceCellParas.wcdma.arfcn = ci.arfcn;
        cciv.ServiceCellParas.wcdma.cellId = ci.cellId;
        cciv.ServiceCellParas.wcdma.psc = ci.bsic;
        cciv.ServiceCellParas.wcdma.lac = ci.lac;
    } else {
        TELEPHONY_LOGE("ratType is wrong!");
        return;
    }

    g_networkMockData.csRegStatusInfo.cellId = ci.cellId;
    g_networkMockData.csRegStatusInfo.lacCode = ci.lac;
    g_networkMockData.psRegStatusInfo = g_networkMockData.csRegStatusInfo;

    SetRadioState(HRIL_RADIO_POWER_STATE_OFF, 0);
    sleep(1);
    SetRadioState(HRIL_RADIO_POWER_STATE_ON, 0);
}

void ReqGetPsRegStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport,
        (const uint8_t*)&g_networkMockData.psRegStatusInfo, sizeof(HRilRegStatusInfo));
}

void ReqGetOperatorInfo(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, &g_networkMockData.operator_response,
        OPERATOR_INFO_ARR_LENGTH);
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
        OnNetworkReport, (const uint8_t *)g_networkMockData.pp_OperInfo, g_operCount);
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
        SetRadioTech(RADIO_TECHNOLOGY_LTE, DOMAIN_TYPE_PS);
        SetRadioTech(RADIO_TECHNOLOGY_LTE, DOMAIN_TYPE_CS);
    }
    if (g_networkMockData.netType == HRIL_NETWORK_AUTO) {
        SetRadioTech(RADIO_TECHNOLOGY_GSM, DOMAIN_TYPE_PS);
        SetRadioTech(RADIO_TECHNOLOGY_GSM, DOMAIN_TYPE_CS);
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
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, (const uint8_t*)g_networkMockData.imei,
        sizeof(char *));
}

void ReqSetPsAttachStatus(const ReqDataInfo *requestInfo, const int32_t *data)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int setPsAttachStatus = *(int *)data;
    if (setPsAttachStatus == 1 || setPsAttachStatus == 0) {
        g_networkMockData.psAttachStatus = setPsAttachStatus;
    } else {
        struct ReportInfo reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_INVALID_PARAMETER, HRIL_RESPONSE, 0);
        OnNetworkReport(HRIL_SIM_SLOT_1, reportInfo, NULL, 1);
        return;
    }
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport);
}

void ReqGetPsAttachStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport,
        (const uint8_t*)&g_networkMockData.psAttachStatus, sizeof(int));
}

void ReqGetCellInfoList(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, (const uint8_t*)&g_networkMockData.cellInfoList,
        sizeof(CellInfoList));
}

void ReqGetCurrentCellInfo(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport, (const uint8_t*)&cciv,
        sizeof(CurrentCellInfoVendor));
}

void ReqGetImsRegStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnNetworkReport,
        (const uint8_t*)&g_networkMockData.imsRegStatusInfo, sizeof(HRilImsRegStatusInfo));
}
