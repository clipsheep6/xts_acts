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

#include "vendor_adapter.h"
#include "macro.h"
#include "mock_data_handler.h"
#include "mock_vendor_common.h"
#include <securec.h>
#include <sys/shm.h>

#define HDF_LOG_TAG mock_vendor

const struct HRilReport *g_reportOps;
pthread_t g_threadReadLoop;

static const HRilCallReq g_callReqOps = {
    .GetCallList = ReqGetCallList,
    .Dial = ReqDial,
    .Hangup = ReqHangup,
    .Reject = ReqReject,
    .Answer = ReqAnswer,
    .GetClip = ReqDealClip,
    .SetClip = ReqSetClip,
    .Hold = ReqHold,
    .Active = ReqActive,
    .Swap = ReqSwap,
    .Join = ReqJoin,
    .Split = ReqSplit,
    .GetCallWait = ReqGetCallWait,
    .SetCallWait = ReqSetCallWait,
    .GetCallForwarding = ReqGetCallForwarding,
    .SetCallForwarding = ReqSetCallForwarding,
    .GetCallRestriction = ReqGetCallRestriction,
    .SetCallRestriction = ReqSetCallRestriction,
    .GetClir = ReqDealClir,
    .SetClir = ReqSetClir,
    .StartDtmf = ReqStartDtmf,
    .SendDtmf = ReqSendDtmf,
    .StopDtmf = ReqStopDtmf,
};

static const HRilSimReq g_simReqOps = {
    .GetSimStatus = ReqGetSimStatus,
    .GetSimImsi = ReqGetSimImsi,
    .GetSimIO = ReqGetSimIO,
    .GetSimIccID = ReqGetSimIccID,
    .GetSimLockStatus = ReqGetSimLockStatus,
    .SetSimLock = ReqSetSimLock,
    .ChangeSimPassword = ReqChangeSimPassword,
    .EnterSimPin = ReqEnterSimPin,
    .UnlockSimPin = ReqUnlockSimPin,
    .GetSimPinInputTimes = ReqGetSimPinInputTimes,
};

static const HRilSmsReq g_smsReqOps = {
    .SendSms = ReqSendSms,
    .SendSmsAck = ReqSendSmsAck,
    .StorageSms = ReqStorageSms,
    .DeleteSms = ReqDeleteSms,
    .UpdateSms = ReqUpdateSms,
    .SetSmsCenterAddress = ReqSetSmsCenterAddress,
    .GetSmsCenterAddress = ReqGetSmsCenterAddress,
    .SetCellBroadcast = ReqSetCellBroadcast,

};

static const HRilNetworkReq g_networkReqOps = {.GetSignalStrength = ReqGetSignalStrength,
    .GetCsRegStatus = ReqGetCsRegStatus,
    .GetPsRegStatus = ReqGetPsRegStatus,
    .GetOperatorInfo = ReqGetOperatorInfo,
    // keep here for future features .GetCellInfoList = ReqGetCellInfoList,
    // keep here for future features .GetCurrentCellInfo = ReqGetCurrentCellInfo,
    .GetNetworkSearchInformation = RequestGetNetworksToUse,
    .GetNetworkSelectionMode = RequestQueryNetworkSelectionMode,
    .SetNetworkSelectionMode = RequestSetAutomaticModeForNetworks};

static const HRilDataReq g_dataReqOps = {.ActivatePdpContext = ReqActivatePdpContext,
    .DeactivatePdpContext = ReqDeactivatePdpContext};

static const HRilModemReq g_modemReqOps = {.SetRadioStatus = ReqSetRadioStatus, .GetRadioStatus = ReqGetRadioStatus};

HRilOps g_hRilOps = {
    .callOps = &g_callReqOps,
    .simOps = &g_simReqOps,
    .smsOps = &g_smsReqOps,
    .networkOps = &g_networkReqOps,
    .dataOps = &g_dataReqOps,
    .modemOps = &g_modemReqOps,
};

void OnModemReport(struct ReportInfo reportInfo, void *response, size_t responseLen)
{
    if (g_reportOps != NULL) {
        g_reportOps->OnModemReport(reportInfo, response, responseLen);
    } else {
        TELEPHONY_LOGE("g_reportOps is NULL");
    }
}

void OnCallReport(struct ReportInfo reportInfo, void *response, size_t responseLen)
{
    if (g_reportOps != NULL) {
        g_reportOps->OnCallReport(reportInfo, response, responseLen);
    } else {
        TELEPHONY_LOGE("g_reportOps is NULL");
    }
}

void OnDataReport(struct ReportInfo reportInfo, void *response, size_t responseLen)
{
    if (g_reportOps != NULL) {
        g_reportOps->OnDataReport(reportInfo, response, responseLen);
    } else {
        TELEPHONY_LOGE("g_reportOps is NULL");
    }
}

void OnSmsReport(struct ReportInfo reportInfo, void *response, size_t responseLen)
{
    if (g_reportOps != NULL) {
        g_reportOps->OnSmsReport(reportInfo, response, responseLen);
    } else {
        TELEPHONY_LOGE("g_reportOps is NULL");
    }
}

void OnNetworkReport(struct ReportInfo reportInfo, void *response, size_t responseLen)
{
    if (g_reportOps != NULL) {
        g_reportOps->OnNetworkReport(reportInfo, response, responseLen);
    } else {
        TELEPHONY_LOGE("g_reportOps is NULL");
    }
}

void OnSimReport(struct ReportInfo reportInfo, void *response, size_t responseLen)
{
    if (g_reportOps != NULL) {
        g_reportOps->OnSimReport(reportInfo, response, responseLen);
    } else {
        TELEPHONY_LOGE("g_reportOps is NULL");
        return;
    }
}

struct ReportInfo CreateReportInfo(void *requestInfo, unsigned int err, unsigned int type, int notifyId)
{
    struct ReportInfo reportInfo;
    (void)memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));

    reportInfo.requestInfo = (ReqDataInfo *)requestInfo;
    reportInfo.notifyId = notifyId;
    reportInfo.type = type;
    reportInfo.error = err;

    return reportInfo;
}
struct ReportInfo ReportDataChange(void *requestInfo, unsigned int err, unsigned int type, int notifyId)
{
    struct ReportInfo reportInfo;

    reportInfo.requestInfo = (ReqDataInfo *)requestInfo;
    reportInfo.notifyId = notifyId;
    reportInfo.type = type;
    reportInfo.error = err;

    return reportInfo;
}

int SetRadioState(HRilRadioState newState, int rst)
{
    struct ReportInfo reportInfo;
    reportInfo.notifyId = HNOTI_MODEM_RADIO_STATE_UPDATED;
    reportInfo.type = HRIL_NOTIFICATION;
    reportInfo.error = HRIL_ERR_SUCCESS;
    g_radioState = newState;
    TELEPHONY_LOGE("g_radioState :%{public}d", g_radioState);
    OnModemReport(reportInfo, &g_radioState, sizeof(HRilRadioState));
    return 0;
}

static int ModemInit(void)
{
    SetRadioState(HRIL_RADIO_POWER_STATE_ON, 0);
    return 0;
}
void SharedMemoryRead(void)
{
    static const int sleepMs15 = 15;
    sleep(sleepMs15);
    NOTIFY_SUCSS_WITHOUT_DATA(OnSimReport, HNOTI_SIM_STATUS_CHANGED);
    NotityCsRegStatus();
    TELEPHONY_LOGE("notify done");
    static const int shmKey = 107077;
    static const int sleepUs10000 = 10000;
    struct SharedMemorySt *receiveSt = NULL;
    int shmid;
    shmid = shmget((key_t)(shmKey), BUFSIZ, 0666 | IPC_CREAT);
    if (shmid == -1) {
        TELEPHONY_LOGE("> child: shmget err");
        return;
    }

    receiveSt = (struct SharedMemorySt *)shmat(shmid, NULL, 0);
    if (receiveSt == NULL) {
        TELEPHONY_LOGE("> child: shmat err");
        return;
    }
    receiveSt->full = 0;
    memset_s(receiveSt->data, BUFSIZ, 0, BUFSIZ);

    for (;;) {
        if (receiveSt->full != 0) {
            TELEPHONY_LOGE("Dispatch id:%{public}d, data:%{public}s, dataLen:%{public}d", receiveSt->id,
                receiveSt->data, receiveSt->dataLen);
            Dispatch(receiveSt->id, receiveSt->data, receiveSt->dataLen);
            receiveSt->full = 0;
        }
        usleep(sleepUs10000);
    }

    if ((shmdt(receiveSt)) == -1) {
        TELEPHONY_LOGE("> child: shmdt err");
        return;
    }

    if (shmctl(shmid, IPC_RMID, NULL) == -1) {
        TELEPHONY_LOGE("> child: shmctl err");
        return;
    }
}

static void *ReadLoop(void *param __unused)
{
    while (true) {
        TELEPHONY_LOGE("In ReadLoop...\n");
        TELEPHONY_LOGE("notify done...\n");
        SharedMemoryRead();
    }
}

const HRilOps *RilInitOps(const struct HRilReport *reportOps)
{
    g_reportOps = reportOps;

    InitNetworkMockData();
    InitCallMockData();
    InitSimMockData();
    InitSmsMockData();

    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    int ret = pthread_create(&g_threadReadLoop, &attr, ReadLoop, NULL);
    if (ret != 0) {
        TELEPHONY_LOGE(" Init ReadLoop faild");
    }
    TELEPHONY_LOGE(" Init ReadLoop done");
    ModemInit();
    return &g_hRilOps;
}
