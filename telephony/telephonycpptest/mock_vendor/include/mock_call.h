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

#ifndef OHOS_MOCK_CALL_H
#define OHOS_MOCK_CALL_H

#include <stdbool.h>
#include "at_call.h"

typedef enum {
    MOCK_CALL_ORIGINATE = 0,
    MOCK_CALL_PROCEEDING = 1,
    MOCK_ALERTING = 2,
    MOCK_CONNECTED = 3,
    MOCK_RELEASED = 4,
    MOCK_INCOMING = 5,
    MOCK_WAITING = 6,
    MOCK_HOLD = 7,
    MOCK_RETRIEVE = 8
} CallStatus;

typedef enum {
    CS_DOMAIN_PHONE,
    IMS_DOMAIN_PHONE
} VoiceDomain;

void AddComingCallInfo(const char *number, int dataLen);
void RemoveCallInfo(const char *number, int dataLen);
void AddDialCallInfo(const char *number);
void InitCallMockData(void);
void ViewCallInfo(void);
void AcceptCall(const char *number, int dataLen);
void RemoveTargetIndex(int targetIndex);
void RemoveAllCallInfo(void);
void RemoveCallInfoByIndex(int index);
void HandleCallState(void);
void AnswerCall(void);
void SplitCall(int unHold);
void UploadCallStatusInfo(int callId, int status, int voiceDomain);
int ConvertToCallStatus(int status);
bool IsImsDomain(void);
VoiceDomain SwitchDomain(void);
void UploadCallEndInfo(int callId);

#endif // OHOS_MOCK_CALL_H
