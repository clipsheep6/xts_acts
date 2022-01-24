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
#include "mock_vendor_adapter.h"
#include <fcntl.h>
#include <pthread.h>
#include <securec.h>
#include <sys/shm.h>
#include <termios.h>
#include <unistd.h>
#include "dfx_signal_handler.h"
#include "hril.h"
#include "mock_call.h"
#include "mock_data.h"
#include "mock_data_handler.h"
#include "mock_modem.h"
#include "mock_network.h"
#include "mock_sim.h"
#include "mock_sms.h"
#include "mock_vendor_common.h"
#include "telephony_log_c.h"
#include "mock_report_public.h"

#define HDF_LOG_TAG mock_vendor

static HRilRadioState g_radioState = HRIL_RADIO_POWER_STATE_UNAVAILABLE;

static pthread_t g_threadReadLoop;

static const HRilCallReq g_callReqOps = {
    .GetCallList = ReqGetCallList,
    .Dial = ReqDial,
    .Hangup = ReqHangup,
    .Reject = ReqReject,
    .Answer = ReqAnswer,
    .GetClip = ReqGetClip,
    .SetClip = ReqSetClip,
    .HoldCall = ReqHoldCall,
    .UnHoldCall = ReqUnHoldCall,
    .SwitchCall = ReqSwitchCall,
    .CombineConference = ReqCombineConference,
    .SeparateConference = ReqSeparateConference,
    .CallSupplement = ReqCallSupplement,
    .GetCallWaiting = ReqGetCallWaiting,
    .SetCallWaiting = ReqSetCallWaiting,
    .GetCallTransferInfo = ReqGetCallTransferInfo,
    .SetCallTransferInfo = ReqSetCallTransferInfo,
    .GetCallRestriction = ReqGetCallRestriction,
    .SetCallRestriction = ReqSetCallRestriction,
    .GetClir = ReqGetClir,
    .SetClir = ReqSetClir,
    .StartDtmf = ReqStartDtmf,
    .SendDtmf = ReqSendDtmf,
    .StopDtmf = ReqStopDtmf,
    .GetImsCallList = ReqGetImsCallList,
    .GetCallPreferenceMode = ReqGetCallPreferenceMode,
    .SetCallPreferenceMode = ReqSetCallPreferenceMode,
    .GetLteImsSwitchStatus = ReqGetLteImsSwitchStatus,
    .SetLteImsSwitchStatus = ReqSetLteImsSwitchStatus,
    .SetUssdCusd = ReqSetUssdCusd,
    .GetUssdCusd = ReqGetUssdCusd,
    .GetMute = ReqGetMute,
    .SetMute = ReqSetMute,
    .GetEmergencyCallList = ReqGetEmergencyCallList,
    .GetCallFailReason = ReqGetCallFailReason,
};

static const HRilSimReq g_simReqOps = {
    .GetSimStatus = ReqGetSimStatus,
    .GetSimImsi = ReqGetSimImsi,
    .GetSimIO = ReqGetSimIO,
    .GetSimLockStatus = ReqGetSimLockStatus,
    .SetSimLock = ReqSetSimLock,
    .ChangeSimPassword = ReqChangeSimPassword,
    .UnlockPin = ReqUnlockPin,
    .UnlockPuk = ReqUnlockPuk,
    .GetSimPinInputTimes = ReqGetSimPinInputTimes,
    .UnlockPin2 = ReqUnlockPin2,
    .UnlockPuk2 = ReqUnlockPuk2,
    .GetSimPin2InputTimes = ReqGetSimPin2InputTimes,
    .SetActiveSim = ReqSetActiveSim,
    .SimStkSendTerminalResponse = ReqSimStkSendTerminalResponse,
    .SimStkSendEnvelope = ReqSimStkSendEnvelope,
    .SimStkIsReady = ReqSimStkIsReady,
    .SetRadioProtocol = ReqSetRadioProtocol,
    .SimOpenLogicalChannel = ReqSimOpenLogicalChannel,
    .SimCloseLogicalChannel = ReqSimCloseLogicalChannel,
    .SimTransmitApduLogicalChannel = ReqSimTransmitApduLogicalChannel,
    .UnlockSimLock = ReqUnlockSimLock,
};

static const HRilSmsReq g_smsReqOps = {
    .SendGsmSms = ReqSendGsmSms,
    .SendSmsAck = ReqSendSmsAck,
    .SendCdmaSms = ReqSendCdmaSms,
    .SendCdmaAck = ReqSendCdmaSmsAck,
    .AddSimMessage = ReqWriteSimMessage,
    .DelSimMessage = ReqDelSimMessage,
    .UpdateSimMessage = ReqWriteSimMessage,
    .SetSmscAddr = ReqSetSmscAddr,
    .GetSmscAddr = ReqGetSmscAddr,
    .SetCBConfig = ReqSetCBConfig,
    .GetCBConfig = ReqGetCBConfig,
    .GetCdmaCBConfig = ReqGetCdmaCBConfig,
    .SetCdmaCBConfig = ReqSetCdmaCBConfig,
    .AddCdmaSimMessage = ReqAddCdmaSimMessage,
    .DelCdmaSimMessage = ReqDelCdmaSimMessage,
    .UpdateCdmaSimMessage = ReqUpdateCdmaSimMessage,
};

static const HRilNetworkReq g_networkReqOps = {
    .GetSignalStrength = ReqGetSignalStrength,
    .GetImsRegStatus = ReqGetImsRegStatus,
    .GetCsRegStatus = ReqGetCsRegStatus,
    .GetPsRegStatus = ReqGetPsRegStatus,
    .GetOperatorInfo = ReqGetOperatorInfo,
    .SetPsAttachStatus = ReqSetPsAttachStatus,
    .GetPsAttachStatus = ReqGetPsAttachStatus,
    .GetNetworkSearchInformation = ReqGetNetworkSearchInformation,
    .GetNetworkSelectionMode = ReqGetNetworkSelectionMode,
    .SetNetworkSelectionMode = ReqSetNetworkSelectionMode,
    .SetPreferredNetwork = ReqSetPreferredNetwork,
    .GetPreferredNetwork = ReqGetPreferredNetwork,
    .GetNeighboringCellInfoList = ReqGetNeighboringCellInfoList,
    .GetCurrentCellInfo = ReqGetCurrentCellInfo,
    .GetRadioCapability = ReqGetRadioCapability,
    .SetRadioCapability = ReqSetRadioCapability,
    .GetPhysicalChannelConfig = ReqGetPhysicalChannelConfig,
    .SetLocateUpdates = ReqSetLocateUpdates,
};

static const HRilDataReq g_dataReqOps = {
    .SetInitApnInfo = ReqSetInitApnInfo,
    .ActivatePdpContext = ReqActivatePdpContext,
    .DeactivatePdpContext = ReqDeactivatePdpContext,
    .GetPdpContextList = ReqGetPdpContextList,
    .GetLinkBandwidthInfo = ReqGetLinkBandwidthInfo,
    .SetLinkBandwidthReportingRule = ReqSetLinkBandwidthReportingRule,
};

static const HRilModemReq g_modemReqOps = {
    .SetRadioState = ReqSetRadioState,
    .GetRadioState = ReqGetRadioState,
    .GetImei = ReqGetImei,
    .GetMeid = ReqGetMeid,
    .GetVoiceRadioTechnology = ReqGetVoiceRadioTechnology,
};

HRilOps g_HRilOps = {
    .callOps = &g_callReqOps,
    .simOps = &g_simReqOps,
    .smsOps = &g_smsReqOps,
    .networkOps = &g_networkReqOps,
    .dataOps = &g_dataReqOps,
    .modemOps = &g_modemReqOps,
};

int SetRadioState(HRilRadioState newState, int rst)
{
    if (newState == HRIL_RADIO_POWER_STATE_OFF) {
        CleanOperatorInfo();
        ModifyRegStatusInfo();
    } else if (newState == HRIL_RADIO_POWER_STATE_ON && g_radioState == HRIL_RADIO_POWER_STATE_OFF) {
        InitNetworkMockData();
    } else {
        TELEPHONY_LOGI("> newState :%{public}d", newState);
    }
    g_radioState = newState;
    TELEPHONY_LOGE("g_radioState :%{public}d", g_radioState);
    NotifySuccessWithData(HRIL_SIM_SLOT_0, OnModemReport, HNOTI_MODEM_RADIO_STATE_UPDATED,
        (const uint8_t *)&g_radioState, sizeof(HRilRadioState));
    return 0;
}

HRilRadioState GetRadioState(void)
{
    return g_radioState;
}

void SharedMemoryRead(void)
{
    mode_t mode = 0666;
    const int sleepMs15 = 10;
    sleep(sleepMs15);
    TELEPHONY_LOGE("notify done");
    static const int shmKey = 107077;
    static const int sleepUs10000 = 10000;
    struct SharedMemorySt *receiveSt = NULL;
    int shmid;
    shmid = shmget((key_t)(shmKey), BUFSIZ, mode | IPC_CREAT);
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
    (void)memset_s(receiveSt->data, BUFSIZ, 0, BUFSIZ);

    for (;;) {
        if (receiveSt->full != 0) {
            TELEPHONY_LOGE("Dispatch id:%{public}d, data:%{public}s, dataLen:%{public}d", receiveSt->id,
                receiveSt->data, receiveSt->dataLen);
            Dispatch(receiveSt->id, receiveSt->data, receiveSt->dataLen);
            (void)memset_s(receiveSt->data, BUFSIZ, 0, BUFSIZ);
            receiveSt->full = 0;
        }
        usleep(sleepUs10000);
    }
}

static void ReadLoop(void)
{
    SetRadioState(HRIL_RADIO_POWER_STATE_OFF, 0);
    while (true) {
        SharedMemoryRead();
    }
}

const HRilOps *RilInitOps(const struct HRilReport *reportOps)
{
    DFX_InstallSignalHandler();

    SetReportOps(reportOps);
    InitModemMockData();
    InitNetworkMockData();
    InitCallMockData();
    InitSimMockData();
    InitSmsMockData();
    InitDataMockData();

    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    int ret = pthread_create(&g_threadReadLoop, &attr, (void *(*)(void *))ReadLoop, NULL);
    if (ret != 0) {
        TELEPHONY_LOGE(" Init ReadLoop faild");
    }
    TELEPHONY_LOGE(" Init ReadLoop done");
    return &g_HRilOps;
}
