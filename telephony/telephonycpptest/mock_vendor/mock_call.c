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
#include "mock_call.h"
#include "macro.h"
#include "mock_sim.h"
#include "stdlib.h"
#include "string.h"
#include "telephony_log_c.h"
#include "mock_report_public.h"
#define HDF_LOG_TAG mock_vendor

#define PP_CALL_MAX_LEN 20

const int NUM_F = 145;
const int NUM_S = 129;
static pthread_mutex_t freeMemMutex = PTHREAD_MUTEX_INITIALIZER;

struct CallMockData {
    HRilCallInfo** pp_calls;
    int call_index;
    int call_id;
    int preferredMode;
    int lteImsSwitchStatus;
    HRilCallStatusInfo callStatusInfo;
    HRilCallEndInfo callEndInfo;
    HRilGetClipResult clip_result;
    HRilGetCallClirResult clir_result;
    HRilCallRestrictionResult restriction_result;
    HRilCallWaitResult hrilCallWaitResult;
    HRilCFQueryInfo cf_info[6];
} g_callMockData;
// status HRIL_CALL_
int ConvertToCallStatus(int status)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int retStatus = -1;
    switch (status) {
        case HRIL_CALL_ACTIVATE:
            retStatus = MOCK_CONNECTED;
            break;
        case HRIL_CALL_HOLDING:
            retStatus = MOCK_HOLD;
            break;
        case HRIL_CALL_DIALING:
            retStatus = MOCK_CALL_ORIGINATE;
            break;
        case HRIL_CALL_ALERTING:
            retStatus = MOCK_ALERTING;
            break;
        case HRIL_CALL_INCOMING:
            TELEPHONY_LOGD("==RIL_CALL_INCOMING==");
            retStatus = MOCK_INCOMING;
            break;
        case HRIL_CALL_WAITING:
            retStatus = MOCK_WAITING;
            break;
        default:
            break;
    }
    TELEPHONY_LOGD("retStatus:%{public}d", retStatus);
    return retStatus;
}

void AddBaseCallInfo(const char *number, const HRilCallState state)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    // 这里由调用者保证数据正确
    if (g_callMockData.call_index > PP_CALL_MAX_LEN) {
        return;
    }
    if (state <= HRIL_CALL_HOLDING || state > HRIL_CALL_WAITING) {
        return;
    }
    // g_callMockData.pp_calls malloc
    HRilCallInfo* p_calls = (HRilCallInfo*)malloc(sizeof(HRilCallInfo));
    if (p_calls == NULL) {
        TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
        return;
    }
    g_callMockData.pp_calls[g_callMockData.call_index++] = p_calls;
    p_calls->state = state; // default incoming
    p_calls->index = g_callMockData.call_id++;
    if (number[0] == '+') {
        p_calls->type = NUM_F;
    } else {
        p_calls->type = NUM_S;
    }
    p_calls->dir = 0;
    p_calls->mode = HRIL_CALL_VOICE;
    p_calls->mpty = (state == HRIL_CALL_INCOMING) ? 1 : 0;
    if (IsImsDomain()) {
        p_calls->callType = 0; // 0: voice call
        p_calls->voiceDomain = 1; /* Identifies the service domain.
                            * 0: CS domain phone
                            * 1: IMS domain phone */
    } else {
        p_calls->callType = -1;
        p_calls->voiceDomain = -1;
    }
    asprintf(&p_calls->number, "%s", number);
    p_calls->alpha = NULL;
    UploadCallStatusInfo(p_calls->index, ConvertToCallStatus(p_calls->state), SwitchDomain());
}

void ChangeCallState(void)
{
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void HandleCallState(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int notifyId = -1;
    for (int i = 0; i < g_callMockData.call_index; i++) {
        // handle  all number dial -> alert
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_DIALING) {
            UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, MOCK_CALL_PROCEEDING, SwitchDomain());
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ALERTING;
            notifyId = i;
            continue;
        }
        // handle auto accept for special number
        if (strcmp("10086", g_callMockData.pp_calls[i]->number) == 0 &&
            g_callMockData.pp_calls[i]->state == HRIL_CALL_ALERTING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            notifyId = i;
        }
    }
    if (notifyId != -1) {
        UploadCallStatusInfo(g_callMockData.pp_calls[notifyId]->index,
            ConvertToCallStatus(g_callMockData.pp_calls[notifyId]->state), SwitchDomain());
    }
}

void AddDialCallInfo(const char *number)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, add phone%{public}s:", __func__, __LINE__, number);
    AddBaseCallInfo(number, HRIL_CALL_DIALING);
}

void AddComingCallInfo(const char *number, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilCallState state = HRIL_CALL_INCOMING;
    char subNumber[20] = {'\0'};
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_ACTIVATE) {
            state = HRIL_CALL_WAITING;
            break;
        }
    }
    if (memcpy_s(subNumber, sizeof(subNumber), number, dataLen) != 0) {
        TELEPHONY_LOGE("memcpy_s fail");
        return;
    }
    AddBaseCallInfo(subNumber, state);
}

void AcceptCall(const char *number, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    char subNumber[20] = {'\0'};
    if (memcpy_s(subNumber, sizeof(subNumber), number, dataLen) != 0) {
        TELEPHONY_LOGE("memcpy_s fail");
        return;
    }
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (strcmp(g_callMockData.pp_calls[i]->number, subNumber) == 0 &&
            (g_callMockData.pp_calls[i]->state == HRIL_CALL_ALERTING ||
            g_callMockData.pp_calls[i]->state == HRIL_CALL_DIALING)) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, ConvertToCallStatus(HRIL_CALL_ACTIVATE),
                SwitchDomain());
            TELEPHONY_LOGD("accept phone %{public}s", subNumber);
            break;
        }
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
    TELEPHONY_LOGD("accept phone done");
}

static void HoldAndActiveCall(void)
{
    // 保持正在通话的呼叫，并接听等待的呼叫或者恢复被保持的呼叫
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int holdId = -1;
    for (int i = 0; i < g_callMockData.call_index; i++) {
        // 将当前激活的通话 置为保持状态
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_ACTIVATE) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_HOLDING;
            UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, ConvertToCallStatus(HRIL_CALL_HOLDING),
                SwitchDomain());
            continue;
        }
        // 将等待/保持的通话置为激活状态
        // 等待的优先级高，如果找到等待的通话，就置为激活，如果之前已经找到了保持的通话，将其回复，退出
        // 找到保持的通话，给定标记用于恢复，并置为激活状态。
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_WAITING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, ConvertToCallStatus(HRIL_CALL_ACTIVATE),
                SwitchDomain());
            if (holdId != -1) {
                g_callMockData.pp_calls[holdId]->state = HRIL_CALL_HOLDING;
                holdId = -1;
            }
            break;
        }
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_HOLDING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            holdId = i;
        }
    }
    if (holdId != -1) {
        UploadCallStatusInfo(g_callMockData.pp_calls[holdId]->index, MOCK_RETRIEVE, SwitchDomain());
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void RemoveTargetIndex(int targetIndex)
{
    pthread_mutex_lock(&freeMemMutex);
    if (targetIndex != g_callMockData.call_index) {
        free(g_callMockData.pp_calls[targetIndex]->number);
        g_callMockData.pp_calls[targetIndex]->number = NULL;
        free(g_callMockData.pp_calls[targetIndex]);
        g_callMockData.pp_calls[targetIndex] = NULL;
        if (targetIndex < g_callMockData.call_index - 1) {
            for (int i = targetIndex; i < g_callMockData.call_index - 1; i++) {
                g_callMockData.pp_calls[i] = g_callMockData.pp_calls[i+1];
            }
        }
        g_callMockData.call_index -= 1;
    }
    g_callMockData.pp_calls[g_callMockData.call_index] = NULL;
    pthread_mutex_unlock(&freeMemMutex);
}

void RemoveCallInfoByIndex(int index)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int targetIndex = g_callMockData.call_index;
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (index == g_callMockData.pp_calls[i]->index) {
            UploadCallEndInfo(index);
            UploadCallStatusInfo(index, MOCK_RELEASED, SwitchDomain());
            targetIndex = i;
            break;
        }
    }
    RemoveTargetIndex(targetIndex);
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void RemoveCallInfo(const char *number, int dataLen)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    char subNumber[20] = {'\0'};
    if (memcpy_s(subNumber, sizeof(subNumber), number, dataLen) != 0) {
        TELEPHONY_LOGE("memcpy_s fail");
        return;
    }
    int targetIndex = g_callMockData.call_index;
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (strcmp(subNumber, g_callMockData.pp_calls[i]->number) == 0) {
            UploadCallEndInfo(g_callMockData.pp_calls[i]->index);
            UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, MOCK_RELEASED, SwitchDomain());
            targetIndex = i;
            break;
        }
    }
    RemoveTargetIndex(targetIndex);
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void RemoveAllCallInfo(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("> index : %{public}d", g_callMockData.call_index);
    int cycleTimes = g_callMockData.call_index;
    for (int i = cycleTimes - 1; i >= 0; --i) {
        UploadCallEndInfo(g_callMockData.pp_calls[i]->index);
        UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, MOCK_RELEASED, SwitchDomain());
        RemoveTargetIndex(i);
    }
    g_callMockData.call_index = 0;
    g_callMockData.call_id = 0;
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void UploadCallEndInfo(int callId)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int offSet = 1;
    g_callMockData.callEndInfo.callId = callId + offSet;
    g_callMockData.callEndInfo.duration = 0;
    g_callMockData.callEndInfo.noCliCause = 0;
    g_callMockData.callEndInfo.ccCause = 0;
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_END_REPORT,
        (const uint8_t*)&g_callMockData.callEndInfo, sizeof(HRilCallEndInfo));
}

void UploadCallStatusInfo(int callId, int status, int voiceDomain)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    const int CALLID_OFFSET_VALUE = 1;
    g_callMockData.callStatusInfo.callId = callId + CALLID_OFFSET_VALUE;
    g_callMockData.callStatusInfo.status = status;
    g_callMockData.callStatusInfo.voiceDomain = voiceDomain;
    TELEPHONY_LOGD("> call id:%{public}d, status:%{public}d", callId + CALLID_OFFSET_VALUE, status);
    NotifySuccessWithData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATUS_INFO_REPORT,
        (const uint8_t*)&g_callMockData.callStatusInfo, sizeof(HRilCallStatusInfo));
    ChangeCallState();
}

void AnswerCall(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_INCOMING ||
            g_callMockData.pp_calls[i]->state == HRIL_CALL_WAITING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, ConvertToCallStatus(HRIL_CALL_ACTIVATE),
                SwitchDomain());
        }
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

bool IsImsDomain(void)
{
    int imsPsPrefferCsSecondary = 3;
    int imsPsOnly = 4;
    return g_callMockData.preferredMode == imsPsPrefferCsSecondary || g_callMockData.preferredMode == imsPsOnly;
}

VoiceDomain SwitchDomain(void)
{
    return IsImsDomain() ? IMS_DOMAIN_PHONE : CS_DOMAIN_PHONE;
}
void SplitCall(int unHold)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (i == unHold) {
            continue;
        }
        g_callMockData.pp_calls[i]->state = HRIL_CALL_HOLDING;
        UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, ConvertToCallStatus(HRIL_CALL_HOLDING), SwitchDomain());
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void ViewCallInfo(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilCallInfo* p_calls = NULL;
    TELEPHONY_LOGD("=======ViewCallInfo:%{public}d=======", g_callMockData.call_index);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        p_calls = g_callMockData.pp_calls[i];
        TELEPHONY_LOGD("p_calls address:%{public}p", p_calls);
        TELEPHONY_LOGD("p_calls->index:%{public}d", p_calls->index);
        TELEPHONY_LOGD("p_calls->dir:%{public}d", p_calls->dir);
        TELEPHONY_LOGD("p_calls->state:%{public}d", (int)p_calls->state);
        TELEPHONY_LOGD("p_calls->mode:%{public}d", (int)p_calls->mode);
        TELEPHONY_LOGD("p_calls->mpty:%{public}d", p_calls->mpty);
        TELEPHONY_LOGD("p_calls->voiceDomain:%{public}d", p_calls->voiceDomain);
        TELEPHONY_LOGD("p_calls->callType:%{public}d", p_calls->callType);
        TELEPHONY_LOGD("p_calls->number:%{public}s", p_calls->number);
        TELEPHONY_LOGD("p_calls->type:%{public}d", p_calls->type);
        TELEPHONY_LOGD("p_calls->alpha:%{public}s", p_calls->alpha);
        TELEPHONY_LOGD("------------------------");
    }
}

void InitCallMockData(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d call data initdone", __func__, __LINE__);
    g_callMockData.pp_calls = (HRilCallInfo**)malloc(sizeof(int64_t) * PP_CALL_MAX_LEN);
    g_callMockData.call_index = 0;
    g_callMockData.call_id = 0;
    g_callMockData.preferredMode = 0;
    g_callMockData.lteImsSwitchStatus = 0;

    TELEPHONY_LOGE("Call Mock Data Init Done");
}

void ReqGetCallList(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    pthread_mutex_lock(&freeMemMutex);
    ViewCallInfo();
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, (const uint8_t*)g_callMockData.pp_calls,
        sizeof(HRilCallInfo) * g_callMockData.call_index);
    HandleCallState();
    pthread_mutex_unlock(&freeMemMutex);
}

void ReqDial(const ReqDataInfo *requestInfo, const HRilDial *data, size_t dataLen)
{
    HRilDial* p_dial = (HRilDial*)data;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, address:%{public}s, clir:%{public}d", __func__, __LINE__,
        p_dial->address, p_dial->clir);
    AddDialCallInfo(p_dial->address);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
    UploadCallStatusInfo(g_callMockData.pp_calls[g_callMockData.call_index-1]->index, MOCK_CALL_PROCEEDING,
        SwitchDomain());
}

void ReqHangup(const ReqDataInfo *requestInfo, const uint32_t *data, size_t dataLen)
{
    int *array = (int*)data;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, index:%{public}d", __func__, __LINE__, array[0]);
    RemoveCallInfoByIndex(array[0]);
    HoldAndActiveCall();
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}

void ReqReject(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_callMockData.call_index = 0;
    g_callMockData.call_id = 0;
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
    RemoveAllCallInfo();
}

void ReqAnswer(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    AnswerCall();
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}

// Calling line identification presentation

static void HangUpAndActiveCall(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int holdId = -1;
    int hangId = -1;
    for (int i = 0; i < g_callMockData.call_index; i++) {
        // 将当前激活的通话 置为保持状态
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_ACTIVATE) {
            hangId = i;
        }
        // 将等待/保持的通话置为激活状态
        // 等待的优先级高，如果找到等待的通话，就置为激活，如果之前已经找到了保持的通话，将其回复，退出
        // 找到保持的通话，给定标记用于恢复，并置为激活状态。
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_WAITING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            if (holdId != -1) {
                g_callMockData.pp_calls[i]->state = HRIL_CALL_HOLDING;
            }
            break;
        }
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_HOLDING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            holdId = i;
        }
    }
    if (hangId != -1) {
        RemoveCallInfoByIndex(g_callMockData.pp_calls[hangId]->index);
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

static void HangUpAllHoldWaitCall(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_HOLDING ||
            g_callMockData.pp_calls[i]->state == HRIL_CALL_WAITING) {
            RemoveCallInfoByIndex(g_callMockData.pp_calls[i]->index);
        }
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

static void HoldAndActiveAtSend(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HoldAndActiveCall();
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}

void ReqHoldCall(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HoldAndActiveAtSend(requestInfo);
}

void ReqUnHoldCall(const ReqDataInfo* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HoldAndActiveAtSend(requestInfo);
}
void ReqSwitchCall(const ReqDataInfo* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HoldAndActiveAtSend(requestInfo);
}

void ReqGetClip(const ReqDataInfo* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &g_callMockData.clip_result,
        sizeof(HRilGetClipResult));
}
void ReqSetClip(const ReqDataInfo* requestInfo, int action)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_callMockData.clip_result.action = action;
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}

void ReqGetClir(const ReqDataInfo* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &g_callMockData.clir_result,
        sizeof(HRilGetCallClirResult));
}
void ReqSetClir(const ReqDataInfo* requestInfo, int action)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_callMockData.clir_result.action = action;
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}

void ReqGetCallRestriction(const ReqDataInfo* requestInfo, const char* fac)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    HRilCallRestrictionResult result;
    result.status = SimGetLockStatusByName(fac);
    // update here for support more functions
    result.classCw = 1;
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &result, sizeof(HRilCallRestrictionResult));
}
void ReqSetCallRestriction(const ReqDataInfo* requestInfo, CallRestrictionInfo info)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int ret = SimSetLockStatus(info.fac, info.mode, info.password);
    if (ret != 0) {
        RESP_FAIL_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
        return;
    }
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
void ReqStartDtmf(const ReqDataInfo* requestInfo, CallDtmfInfo info)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
void ReqSendDtmf(const ReqDataInfo* requestInfo, CallDtmfInfo info)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
void ReqStopDtmf(const ReqDataInfo* requestInfo, CallDtmfInfo info)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
void ReqCombineConference(const ReqDataInfo* requestInfo, int callType)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_HOLDING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            UploadCallStatusInfo(g_callMockData.pp_calls[i]->index, MOCK_RETRIEVE, SwitchDomain());
        }
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
void ReqSeparateConference(const ReqDataInfo* requestInfo, int nThCall, int callType)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int count = 3;
    if (0 > callType || count < callType) {
        struct ReportInfo reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_INVALID_PARAMETER, HRIL_RESPONSE, 0);
        OnCallReport(HRIL_SIM_SLOT_1, reportInfo, NULL, 0);
    }
    
    SplitCall(nThCall);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
void ReqGetCallWaiting(const ReqDataInfo* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &g_callMockData.hrilCallWaitResult,
        sizeof(HRilCallWaitResult));
}
void ReqSetCallWaiting(const ReqDataInfo* requestInfo, int active)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_callMockData.hrilCallWaitResult.status = active;
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
// 所有的业务注册都只模拟成功的返回
void SetCallForwardingInfo(const int reason, const int mode, char *number, const int numType, const int classx)
{
    const int QUERY = 2;
    const int RGIESTER = 3;
    const int UNRGIESTER = 4;
    const int NUMBER_SIZE = 30;
    const int REASON = 6;
    char *defaultNumber = "";
    static char dstNumber[REASON][NUMBER_SIZE];
    if (number != NULL) {
        defaultNumber = number;
    }
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    if (mode == QUERY) { // query
        TELEPHONY_LOGD("SetCallForwardingInfo mode can't be set as 2");
        return;
    } else if (mode < QUERY) { // active or not active
        g_callMockData.cf_info[reason].status = mode;
        g_callMockData.cf_info[reason].number = dstNumber[reason];
        CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dstNumber[reason], defaultNumber);
        g_callMockData.cf_info[reason].type = numType;
    } else if (mode == RGIESTER) { // register
        g_callMockData.cf_info[reason].classx |= classx;
        g_callMockData.cf_info[reason].number = dstNumber[reason];
        CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dstNumber[reason], defaultNumber);
        g_callMockData.cf_info[reason].type = numType;
    } else if (mode == UNRGIESTER) { // unregister
        int tmp_classx = g_callMockData.cf_info[reason].classx;
        g_callMockData.cf_info[reason].classx &= (tmp_classx ^ classx);
        g_callMockData.cf_info[reason].number = dstNumber[reason];
        CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dstNumber[reason], defaultNumber);
        g_callMockData.cf_info[reason].type = numType;
    } else {
        TELEPHONY_LOGD("SetCallForwardingInfo mode can't be set as %{public}d", mode);
    }
    TELEPHONY_LOGD("dstNumber : %{public}s", dstNumber[reason]);
}

void ReqSetCallTransferInfo(const ReqDataInfo* requestInfo, HRilCFInfo info)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int numType;
    if (info.reason > CALL_FORWARD_REASON_ALL_CCF && info.mode > CALL_FORWARD_MODE_ERASURE) {
        RESP_FAIL_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
        return;
    }
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d log1", __func__, __LINE__);

    if (info.number != NULL && strlen(info.number) > 0 && info.number[0] == '+') {
        numType = NUM_F;
    } else {
        numType = NUM_S;
    }
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d   log2", __func__, __LINE__);
    SetCallForwardingInfo(info.reason, info.mode, info.number, numType, info.classx);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}

void ReqGetCallTransferInfo(const ReqDataInfo* requestInfo, int reason)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    if (reason > CALL_FORWARD_REASON_ALL_CCF) {
        RESP_FAIL_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
        return;
    }
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &g_callMockData.cf_info[reason],
        sizeof(HRilCFQueryInfo));
}

void ReqCallSupplement(const ReqDataInfo* requestInfo, int type)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("Type: %{public}d", type);
    switch (type) {
        case TYPE_HANG_UP_HOLD_WAIT: {
            TELEPHONY_LOGD("ReqCallSupplement hang up all holding or waiting call");
            HangUpAllHoldWaitCall();
            break;
        }
        case TYPE_HANG_UP_ACTIVE: {
            TELEPHONY_LOGD("ReqCallSupplement hang up all active call, and active holding or waiting call");
            HangUpAndActiveCall();
            break;
        }
        default: {
            TELEPHONY_LOGW("ReqCallSupplement warring, type is invalid");
            RESP_FAIL_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
            return;
        }
    }
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}

void ReqGetImsCallList(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    pthread_mutex_lock(&freeMemMutex);
    ViewCallInfo();
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, (const uint8_t*)g_callMockData.pp_calls,
        sizeof(HRilCallInfo) * g_callMockData.call_index);
    HandleCallState();
    pthread_mutex_unlock(&freeMemMutex);
}

void ReqGetCallPreferenceMode(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, (const uint8_t*)&g_callMockData.preferredMode,
        sizeof(int));
}

void ReqSetCallPreferenceMode(const ReqDataInfo *requestInfo, int mode)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_callMockData.preferredMode = mode;
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}

void ReqGetLteImsSwitchStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, (const uint8_t*)&g_callMockData.lteImsSwitchStatus,
        sizeof(int));
}

void ReqSetLteImsSwitchStatus(const ReqDataInfo *requestInfo,int active)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    g_callMockData.lteImsSwitchStatus = active;
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
