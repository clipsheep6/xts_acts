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
#ifndef OHOS_MOCK_SIM_H
#define OHOS_MOCK_SIM_H

#include "at_sim.h"

void InitSimMockData(void);
int SimSetLockStatus(const char *fac, int mode, const char *password);
int SimGetLockStatusByName(const char *name);
void SetSimPin(const char *data, int dataLen);
void SetSimPuk(const char *data, int dataLen);
void SetSimState(const char *data, int dataLen);
void SetSimIccid(const char *data, int dataLen);
void StorageSms(char **pdu);
void DeleteSms(const int index);
void UpdateSms(const int index, char **pdu);
void ResetPin2InputTimes(void);
void ShowLockState(void);
void ResetPukInputTimes(void);
void ResetPukInputTimes2(void);
void RemoveAllCallInfo(void);

#endif // OHOS_MOCK_SIM_H