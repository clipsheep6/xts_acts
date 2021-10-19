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
#define MAX_IMS_REG_INFO_ITEM 2
#define AUTO_TYPE "00"
#define GSM_TYPE "01"
#define WCDMA_TYPE "02"
#define LTE_TYPE "03"
#define LTE_WCDMA_GSM_TYPE "030201"
#define WCDMA_GSM_TYPE "0201"
#define LTE_WCDMA_TYPE "0302"

void NotifyNetWokTime();
void InitNetworkMockData(void);
void SetNumertic(const char *data, int dataLen);
void SetLongOperator(const char *data, int dataLen);
void SetShortOperator(const char *data, int dataLen);
void SetRadioTech(int reg, int domain);
void SetRegServiceState(int reg, int domain);
void SetRegServiceRawState(int reg, int domain);
void NotityCsRegStatus(void);
void SetPlmnState(int plmnState);
void SetRadioTechnology(int rat);
void ModifyRegStatusInfo(void);
void CleanOperatorInfo(void);

#endif // OHOS_MOCK_NETWORK_H
