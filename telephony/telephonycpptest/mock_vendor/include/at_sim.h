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
#ifndef OHOS_AT_SIM_H
#define OHOS_AT_SIM_H

#include "hril.h"
#include "vendor_adapter.h"

void InitSimMockData();
void ReqGetSimStatus(void* requestInfo);
void ReqGetSimIO(void* requestInfo, void* data, size_t dataLen);
void ReqGetSimImsi(void* requestInfo);
void ReqGetSimIccID(void* requestInfo);
void ReqGetSimLockStatus(void* requestInfo, void* data, size_t dataLen);
void ReqSetSimLock(void* requestInfo, void* data, size_t dataLen);
void ReqChangeSimPassword(void* requestInfo, void* data, size_t dataLen);
void ReqEnterSimPin(void* requestInfo, const char* pin);
void ReqUnlockSimPin(void* requestInfo, const char* puk, const char* pin);
void ReqGetSimPinInputTimes(void* requestInfo);

int SimSetLockStatus(const char* fac, int mode, const char* password);
int SimGetLockStatusByName(const char* name);
void SetSimPin(void* data, int dataLen);
void SetSimPuk(void* data, int dataLen);
void SetSimState(void* data, int dataLen);
void SetSimIccid(void* data, int dataLen);
void StorageSms(char** pdu);
void DeleteSms(int index);
void UpdateSms(int index, char** pdu);

#endif // OHOS_AT_SIM_H