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

#include <stdlib.h>
#include <securec.h>
#include "hril.h"

// at_call.c
void ReportImsServiceStatusInfo(const char *str) {}
void ReportCallStatusInfo(const char *str) {}
void ReportCallEndInfo(const char *str) {}
void ReportCallConnectInfo(const char *str) {}
void ReportCallCringInfo(const char *str) {}
void ReportCallWaitingInfo(const char *str) {}
void ReportCallStatusUpdate(const char *str) {}
int IsCallNoticeCmd(const char *str)
{
    return 0;
}
void CallReportInfoProcess(const char *str) {}
int ReportStrWith(const char *s, const char *prefix)
{
    return 0;
}

// at_network.c
int ProcessRegStatus(const char *s, const HRilRegStatusInfo *hrilRegStateInfo)
{
    return 0;
}
int ProcessIMSRegStatus(const char *s, char **response, int count)
{
    return 0;
}
int ProcessParamSignalStrength(const char *result, HRilRssi *hrilRssi)
{
    return 0;
}
int ProcessParamSignalStrengthNotify(const char *result, HRilRssi *hrilRssi)
{
    return 0;
}
int ProcessOperListToUse(const char *list)
{
    return 0;
}
void PerformTimeOut(int sigFlag) {}
int ParseOperListInfo(const char *lineinfo, int count, AvailableOperInfo *pOperInfo, AvailableOperInfo **ppOperInfo)
{
    return 0;
}
int parseNetTypeStr(char *netType)
{
    return 0;
}
void NotifyNetWokTime(void) {}
int ProcessImsRegStatus(const char *s, const HRilImsRegStatusInfo *imsRegStatusInfo, int expectInfoNum)
{
    return 0;
}

int32_t GenerateCommand(char *buffer, size_t bufferLen, const char *fmt, ...)
{
    int32_t ret;
    va_list va;

    va_start(va, fmt);
    ret = vsprintf_s(buffer, bufferLen, fmt, va);
    va_end(va);

    return ret;
}

int32_t GetCurrentNetworkType(void)
{
    return 0;
}

int32_t GetLargeTypeByNetworkType(void)
{
    return 0;
}

int32_t RadioMockInputToRatType(int32_t currentNetworkType)
{
    return 0;
}

int StkNotifyMock(const char *s)
{
    return 0;
}

int CdmaSmsNotifyMock(const char *s)
{
    return 0;
}

int CBConfigNotifyMock(const char *s)
{
    return 0;
}

int CsPsRegNotifyMock(const char *str, const HRilRegStatusInfo *hrilRegStateInfo)
{
    return 0;
}

int SignalStrengthNotifyMockTest(const char *str, const HRilRssi *hrilrssiInfo)
{
    return 0;
}

int CsRegNotifyMock(const char *str, const HRilRegStatusInfo *hrilRegStateInfo)
{
    return 0;
}
int PsRegNotifyMock(const char *str, const HRilRegStatusInfo *hrilRegStateInfo)
{
    return 0;
}
int ProcessCellBroadcast(char *s, HRilCBConfigReportInfo *response)
{
    return 0;
}

void FreeDataCallResponse(HRilDataCallResponse *pDcrs, int size) {}
void ProcessPhyChnlCfgNotify(struct ReportInfo reportInfo, char *srcstr) {}
int SkipATPrefix(char **s)
{
    return 0;
}
int NextStr(char **s, char **out)
{
    return 0;
}
int ProcessVoiceRadioInfo(const char *s, const HRilVoiceRadioInfo *hrilVoiceRadioInfo)
{
    return 0;
}
int32_t GetSlotId(const ReqDataInfo *requestInfo)
{
    return 0;
}
int32_t ProcessCurrentCellList(struct ReportInfo reportInfo, const char *s)
{
    return 0;
}