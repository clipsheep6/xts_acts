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

#ifndef OHOS_AT_CALL_H
#define OHOS_AT_CALL_H

#include "hril.h"
#include "vendor_adapter.h"

typedef enum {
    GET_CALL_WAITING,
    SET_CALL_WAITING,
} CallWaitingReqType;

void AddComingCallInfo(char* number);
void RemoveCallInfo(char* number);
void AddDialCallInfo(char* number);
void InitCallMockData();
void ViewCallInfo();
void AcceptCall(char* number);
void RemoveAllCallInfo();

void ReqGetCallList(ReqDataInfo* requestInfo, void* data, size_t dataLen);
void ReqDial(ReqDataInfo* requestInfo, void* data, size_t dataLen);
void ReqHangup(ReqDataInfo* requestInfo, void* data, size_t dataLen);
void ReqReject(ReqDataInfo* requestInfo, void* data, size_t dataLen);
void ReqAnswer(ReqDataInfo* requestInfo, void* data, size_t dataLen);
void ReqHold(ReqDataInfo* requestInfo);
void ReqActive(ReqDataInfo* requestInfo);
void ReqSwap(ReqDataInfo* requestInfo);
void ReqJoin(ReqDataInfo* requestInfo, int callType);
void ReqSplit(ReqDataInfo* requestInfo, int nThCall, int callType);
void ReqCallSupplement(ReqDataInfo* requestInfo, int type);
void ReqGetCallWait(ReqDataInfo* requestInfo);
void ReqSetCallWait(ReqDataInfo* requestInfo, int active);
void ReqSetCallForwarding(ReqDataInfo* requestInfo, HRilCFInfo info);
void ReqGetCallForwarding(ReqDataInfo* requestInfo, int reason);
void ReqGetCallRestriction(ReqDataInfo* requestInfo, const char* fac);
void ReqSetCallRestriction(ReqDataInfo* requestInfo, CallRestrictionInfo info);
void ReqDealClip(ReqDataInfo* requestInfo);
void ReqSetClip(ReqDataInfo* requestInfo, int action);
void ReqDealClir(ReqDataInfo* requestInfo);
void ReqSetClir(ReqDataInfo* requestInfo, int action);
void ReqStartDtmf(ReqDataInfo* requestInfo, CallDTMFInfo info);
void ReqSendDtmf(ReqDataInfo* requestInfo, CallDTMFInfo info);
void ReqStopDtmf(ReqDataInfo* requestInfo, CallDTMFInfo info);

extern const struct HRilReport* g_reportOps;

#endif // OHOS_AT_CALL_H
