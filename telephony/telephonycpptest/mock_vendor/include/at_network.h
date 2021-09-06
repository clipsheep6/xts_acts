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

#ifndef OHOS_AT_NETWORK_H
#define OHOS_AT_NETWORK_H
#include "hril.h"
#include "vendor_adapter.h"

#define MAX_REG_INFO_ITEM 5

void InitNetworkMockData();
void SetNumertic(void* data, int dataLen);
void SetLongOperator(void* data, int dataLen);
void SetShortOperator(void* data, int dataLen);
void SetRadioTech(int reg, int domain);
void SetRegServiceState(int reg, int domain);
void SetRegServiceRawState(int reg, int domain);
void ReqGetSignalStrength(void* requestInfo, void* data, size_t dataLen);
void ReqGetCsRegStatus(void* requestInfo, void* data, size_t dataLen);
void ReqGetPsRegStatus(void* requestInfo, void* data, size_t dataLen);
void ReqGetOperatorInfo(void* requestInfo, void* data, size_t dataLen);
int ProcessSignalStrength(char* s, int* response, int count);
void ReqGetCellInfoList(void* requestInfo, void* data, size_t dataLen);
void ReqGetCurrentCellInfo(void* requestInfo, void* data, size_t dataLen);
void RequestGetNetworksToUse(void* requestInfo, void* data, size_t dataLen);
void RequestQueryNetworkSelectionMode(void* requestInfo, void* data, size_t dataLen);
void RequestSetAutomaticModeForNetworks(void* requestInfo, void* data, size_t dataLen);
int ProcessRegStatus(char* s, char** response, int count);
void NotityCsRegStatus();
#endif
