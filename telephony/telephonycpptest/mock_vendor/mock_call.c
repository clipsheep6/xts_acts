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

struct CallMockData {
    HRilCallInfo** pp_calls;
    int call_index;
    int call_id;

    HRilGetClipResult clip_result;
    HRilGetCallClirResult clir_result;
    HRilCallRestrictionResult restriction_result;
    HRilCallWaitResult hrilCallWaitResult;
    HRilCFQueryInfo cf_info[6];
} g_callMockData;

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
    p_calls->state = state; // incoming
    p_calls->index = g_callMockData.call_id++;
    if (number[0] == '+') {
        p_calls->type = NUM_F;
    } else {
        p_calls->type = NUM_S;
    }
    p_calls->dir = 0;
    p_calls->mode = HRIL_CALL_VOICE;
    p_calls->mpty = (state == HRIL_CALL_INCOMING) ? 1 : 0;
#ifdef HISILICON
    p_calls->callType = 0; // 0: voice call
    p_calls->voiceDomain = 0; /* Identifies the service domain.
                            * 0: CS domain phone
                            * 1: IMS domain phone */
#endif
    asprintf(&p_calls->number, "%s", number);
    p_calls->alpha = NULL;
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void ChangeCallState(void)
{
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void HandleCallState(void)
{
    bool needNotify = false;
    for (int i = 0; i < g_callMockData.call_index; i++) {
        // handle  all number dial -> alert
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_DIALING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ALERTING;
            needNotify = true;
            continue;
        }
        // handle auto accept for special number
        if (strcmp("10086", g_callMockData.pp_calls[i]->number) == 0 &&
            g_callMockData.pp_calls[i]->state == HRIL_CALL_ALERTING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            needNotify = true;
        }
    }
    if (needNotify) {
        NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
    }
}

void AddDialCallInfo(const char *number)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, add phone%{public}s:", __func__, __LINE__, number);
    AddBaseCallInfo(number, HRIL_CALL_DIALING);
}

void AddComingCallInfo(const char *number)
{
    HRilCallState state = HRIL_CALL_INCOMING;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_ACTIVATE) {
            state = HRIL_CALL_WAITING;
            break;
        }
    }
    AddBaseCallInfo(number, state);
}

void AcceptCall(const char *number)
{
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (strcmp(g_callMockData.pp_calls[i]->number, number) == 0 &&
            (g_callMockData.pp_calls[i]->state == HRIL_CALL_ALERTING ||
            g_callMockData.pp_calls[i]->state == HRIL_CALL_DIALING)) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            TELEPHONY_LOGD("accept phone %{public}s", number);
            break;
        }
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
    TELEPHONY_LOGD("accept phone done");
}

void RemoveCallInfo(const char *number)
{
    int nullSlot = 0;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (strcmp(number, g_callMockData.pp_calls[i]->number) != 0) {
            continue;
        }
        free(g_callMockData.pp_calls[i]);
        g_callMockData.pp_calls[i] = NULL;
        nullSlot = i;
    }
    for (int i = nullSlot + 1; i < g_callMockData.call_index; i++) {
        g_callMockData.pp_calls[i - 1] = g_callMockData.pp_calls[i];
    }

    g_callMockData.call_index--;
    g_callMockData.pp_calls[g_callMockData.call_index] = NULL;
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

static void HoldAndActiveCall(void)
{
    // 保持正在通话的呼叫，并接听等待的呼叫或者恢复被保持的呼叫
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int holdId = -1;
    ViewCallInfo();
    for (int i = 0; i < g_callMockData.call_index; i++) {
        // 将当前激活的通话 置为保持状态
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_ACTIVATE) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_HOLDING;
            continue;
        }
        // 将等待/保持的通话置为激活状态
        // 等待的优先级高，如果找到等待的通话，就置为激活，如果之前已经找到了保持的通话，将其回复，退出
        // 找到保持的通话，给定标记用于恢复，并置为激活状态。
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_WAITING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            if (holdId != -1) {
                g_callMockData.pp_calls[holdId]->state = HRIL_CALL_HOLDING;
            }
            break;
        }
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_HOLDING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
            holdId = i;
        }
    }
    ViewCallInfo();
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void RemoveCallInfoByIndex(int index)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int targetIndex = g_callMockData.call_index;
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (i > targetIndex) {
            g_callMockData.pp_calls[i - 1] = g_callMockData.pp_calls[i];
            continue;
        }
        if (index == g_callMockData.pp_calls[i]->index) {
            free(g_callMockData.pp_calls[i]);
            targetIndex = i;
            continue;
        }
    }
    g_callMockData.call_index--;
    g_callMockData.pp_calls[g_callMockData.call_index] = NULL;
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void RemoveAllCallInfo(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("> index : %{public}d", g_callMockData.call_index);
    for (int i = 0; i < g_callMockData.call_index; ++i) {
        free(g_callMockData.pp_calls[i]);
    }
    g_callMockData.call_index = 0;
    g_callMockData.call_id = 0;
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void AnswerCall(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (g_callMockData.pp_calls[i]->state == HRIL_CALL_INCOMING ||
            g_callMockData.pp_calls[i]->state == HRIL_CALL_WAITING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
        }
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
}

void SplitCall(int unHold, int callType)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    for (int i = 0; i < g_callMockData.call_index; i++) {
        if (i == unHold) {
            continue;
        }
        g_callMockData.pp_calls[i]->state = HRIL_CALL_HOLDING;
#ifdef HISILICON
        g_callMockData.pp_calls[i]->callType = call_type;
#endif
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
        TELEPHONY_LOGD("p_calls->number:%{public}s", p_calls->number);
        TELEPHONY_LOGD("p_calls->type:%{public}d", p_calls->type);
        TELEPHONY_LOGD("p_calls->alpha:%{public}s", p_calls->alpha);
        TELEPHONY_LOGD("------------------------");
    }
    TELEPHONY_LOGD("=======ViewCallInfo:%{public}d=======", g_callMockData.call_index);
}

void InitCallMockData(void)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d call data initdone", __func__, __LINE__);
    g_callMockData.pp_calls = (HRilCallInfo**)malloc(sizeof(void *) * PP_CALL_MAX_LEN);
    g_callMockData.call_index = 0;
    g_callMockData.call_id = 0;

    TELEPHONY_LOGE("Call Mock Data Init Done");
}

void ReqGetCallList(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, g_callMockData.pp_calls,
        sizeof(HRilCallInfo *) * g_callMockData.call_index);
    HandleCallState();
}

void ReqDial(const ReqDataInfo *requestInfo, const HRilDial *data, size_t dataLen)
{
    HRilDial* p_dial = (HRilDial*)data;
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d, address:%{public}s, clir:%{public}d", __func__, __LINE__,
        p_dial->address, p_dial->clir);
    AddDialCallInfo(p_dial->address);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
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
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &g_callMockData.clip_result, sizeof(HRilGetClipResult));
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
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &g_callMockData.clir_result, sizeof(HRilGetCallClirResult));
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
        if (g_callMockData.pp_calls[i] != NULL && g_callMockData.pp_calls[i]->state == HRIL_CALL_HOLDING) {
            g_callMockData.pp_calls[i]->state = HRIL_CALL_ACTIVATE;
        }
    }
    NotifySuccessWithoutData(HRIL_SIM_SLOT_1, OnCallReport, HNOTI_CALL_STATE_UPDATED);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
void ReqSeparateConference(const ReqDataInfo* requestInfo, int nThCall, int callType)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    SplitCall(nThCall, callType);
    RESP_SUCSS_WITHOUT_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport);
}
void ReqGetCallWaiting(const ReqDataInfo* requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &g_callMockData.hrilCallWaitResult, sizeof(HRilCallWaitResult));
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
    char *defaultNumber = "";
    static char dstNumber[NUMBER_SIZE] = {'\0'};
    if (number != NULL) {
        defaultNumber = number;
    }
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    if (mode == QUERY) { // query
        TELEPHONY_LOGD("SetCallForwardingInfo mode can't be set as 2");
        return;
    } else if (mode < QUERY) { // active or not active
        g_callMockData.cf_info[reason].status = mode;
        g_callMockData.cf_info[reason].number = dstNumber;
        CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dstNumber, defaultNumber);
        g_callMockData.cf_info[reason].type = numType;
    } else if (mode == RGIESTER) { // register
        g_callMockData.cf_info[reason].classx |= classx;
        g_callMockData.cf_info[reason].number = dstNumber;
        CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dstNumber, defaultNumber);
        g_callMockData.cf_info[reason].type = numType;
    } else if (mode == UNRGIESTER) { // unregister
        int tmp_classx = g_callMockData.cf_info[reason].classx;
        g_callMockData.cf_info[reason].classx &= (tmp_classx ^ classx);
        g_callMockData.cf_info[reason].number = dstNumber;
        CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dstNumber, defaultNumber);
        g_callMockData.cf_info[reason].type = numType;
    } else {
        TELEPHONY_LOGD("SetCallForwardingInfo mode can't be set as %{public}d", mode);
    }
    TELEPHONY_LOGD("dstNumber : %{public}s", dstNumber);
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
    RESP_SUCSS_WITH_DATA(HRIL_SIM_SLOT_1, requestInfo, OnCallReport, &g_callMockData.cf_info[reason], sizeof(HRilCFQueryInfo));
}

void ReqCallSupplement(const ReqDataInfo* requestInfo, int type)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
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
}

void ReqGetCallPreferenceMode(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqSetCallPreferenceMode(const ReqDataInfo *requestInfo, int mode)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqGetLteImsSwitchStatus(const ReqDataInfo *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}

void ReqSetLteImsSwitchStatus(const ReqDataInfo *requestInfo,int active)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
}