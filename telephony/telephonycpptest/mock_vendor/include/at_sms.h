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

#ifndef OHOS_AT_SMS_H
#define OHOS_AT_SMS_H
#include "hril.h"
#include "vendor_adapter.h"
void InitSmsMockData();
void ReqSendSms(void* requestInfo, void* data, size_t dataLen);
void ReqSendSmsAck(void* requestInfo, void* data, size_t dataLen);
void ReqStorageSms(void* requestInfo, void* data, size_t dataLen);
void ReqDeleteSms(void* requestInfo, void* data, size_t dataLen);
void ReqUpdateSms(void* requestInfo, void* data, size_t dataLen);
void ReqUpdateSms(void* requestInfo, void* data, size_t dataLen);
void ReqSetSmsCenterAddress(void* requestInfo, void* data, size_t dataLen);
void ReqGetSmsCenterAddress(void* requestInfo, void* data, size_t dataLen);
void ReqSetCellBroadcast(void* requestInfo, void* data, size_t dataLen);
int ProcessCellBroadcast(char* s, HRilCellBroadcastReportInfo* response);

#endif // OHOS_AT_SMS_H
