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

#ifndef OHOS_MOCK_NETWORK_H
#define OHOS_MOCK_NETWORK_H

#include <stddef.h>
#include "at_network.h"
#include "../mock_vendor_common.h"

#define MAX_IMS_REG_INFO_ITEM 2
#define AUTO_TYPE "00"
#define GSM_TYPE "01"
#define WCDMA_TYPE "02"
#define LTE_TYPE "03"
#define LTE_WCDMA_GSM_TYPE "030201"
#define WCDMA_GSM_TYPE "0201"
#define LTE_WCDMA_TYPE "0302"

typedef enum {
    DOMAIN_TYPE_PS,
    DOMAIN_TYPE_CS,
} DomainType;

// 第四期开始完整网络状态
typedef enum {
    STAT_NO_REGISTER,   // 没有注册
    STAT_REGISTERED,    // 注册了归属网络
    STAT_NO_REGISTER_SEARCHING, // 没有注册， MT 正在搜索并注册新运营商
    STAT_REGISTER_REJECTED, // 注册被拒绝
    STAT_UNKNOW, // 位置状态
    STAT_REGISTER_ROAMING // 注册了漫游网络
} RegStatus;

// 当前网络接入技术
typedef enum {
    GSM,
    GSM_COMPACT,
    UTRAN,
    GSM_W_EGPRS,
    UTRAN_W_HSDPA,
    UTRAN_W_HSUPA,
    UTRAN_W_HSDPA_HSUPA,
    E_UTRAN
} ActType;

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
    RADIO_TECHNOLOGY_LTE
} RadioTech;

void InitNetworkMockData(void);
void InitSelectMode(void);
void InitPreferNetType(void);
void InitOperatorInformation(void);
void InitOperatorInformationPointer(void);
void FillOperatorInformation(void);
void FillSubitemOperatorInformation(char *longName, char *shortName, char *numeric, int status, int rat, int item);
void InitOperatorResponseStructure(void);
void InitRegisterStatusInformation(void);
void InitHRilRssiStructure(void);
void SetNumertic(const char *data, int dataLen);
void SetLongOperator(const char *data, int dataLen);
void SetShortOperator(const char *data, int dataLen);
void SetRadioTech(int reg, int domain);
void SetRegServiceState(int reg, int domain);
void SetRegServiceRawState(int reg, int domain);
void SetOperStatus(int plmnState);
void SetOperRat(int rat);
void ModifyRegStatusInfo(void);
void CleanOperatorInfo(void);
void ShowOperarorInfo(void);
void SetNetworkStatus(const char* data, int dateLen);
void ShowCanUseOperInfo(void);
void SetSignal(const char *data, int dataLen);
void SetRegStateWithRegType(int regType, char *destBuf);
void InitImsRegStatusInfo(void);
void InitImeiSn(void);
void InitCellInfoList(void);
void SetCurrentCellInfo(const char *buff, int dataLen);

#endif // OHOS_MOCK_NETWORK_H
