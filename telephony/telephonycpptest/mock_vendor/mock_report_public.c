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

#include "mock_report_public.h"
#include <securec.h>
#include "telephony_log_c.h"

void NotifySuccessWithoutData(int slotId, ReportFunc reportFunc, HRilNotification notifyId)
{
    struct ReportInfo reportInfo;
    memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));
    reportInfo.notifyId = notifyId;
    reportInfo.type = HRIL_NOTIFICATION;
    reportInfo.error = HRIL_ERR_SUCCESS;
    reportFunc(slotId, reportInfo, NULL, 0);
    TELEPHONY_LOGI("NOTIFY_SUCSS_WITHOUT_DATA id：%{public}d", notifyId);
}

void NotifySuccessWithData(
    int slotId, ReportFunc reportFunc, HRilNotification notifyId, const uint8_t *data, int dataLen)
{
    struct ReportInfo reportInfo;
    memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));
    reportInfo.notifyId = notifyId;
    reportInfo.type = HRIL_NOTIFICATION;
    reportInfo.error = HRIL_ERR_SUCCESS;
    reportFunc(slotId, reportInfo, data, dataLen);
    TELEPHONY_LOGI("NOTIFY_SUCSS_WITH_DATA id：%{public}d", notifyId);
}

void RespSuccessWithoutData(int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc)
{
    struct ReportInfo reportInfo;
    memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));
    reportInfo.requestInfo = (ReqDataInfo *)requestInfo;
    reportInfo.type = HRIL_RESPONSE;
    reportInfo.error = HRIL_ERR_SUCCESS;
    reportFunc(slotId, reportInfo, NULL, 0);
    TELEPHONY_LOGI("RESP_SUCSS_WITHOUT_DATA");
}

void RespSuccessWithData(
    int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc, const uint8_t *data, int dataLen)
{
    struct ReportInfo reportInfo;
    memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));
    reportInfo.requestInfo = (ReqDataInfo *)requestInfo;
    reportInfo.type = HRIL_RESPONSE;
    reportInfo.error = HRIL_ERR_SUCCESS;
    reportFunc(slotId, reportInfo, data, dataLen);
    TELEPHONY_LOGI("RESP_SUCSS_WITH_DATA");
}

void RespSuccessWithDataExtend(int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc, int notifyId)
{
    struct ReportInfo reportInfo;
    memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));
    reportInfo.requestInfo = (ReqDataInfo *)requestInfo;
    reportInfo.notifyId = notifyId;
    reportInfo.type = HRIL_RESPONSE;
    reportInfo.error = HRIL_ERR_SUCCESS;
    reportFunc(slotId, reportInfo, NULL, 0);
    TELEPHONY_LOGI("RESP_SUCSS_WITH_DATA_EXTEND");
}

void RespErrnoWithoutData(int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc, int err)
{
    struct ReportInfo reportInfo;
    memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));
    reportInfo.requestInfo = (ReqDataInfo *)requestInfo;
    reportInfo.type = HRIL_RESPONSE;
    reportInfo.error = err;
    reportFunc(slotId, reportInfo, NULL, 0);
    TELEPHONY_LOGI("RESP_ERRNO_WITHOUT_DATA");
}

void RespErrnoFixDataLenEqualOne(int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc, int err)
{
    struct ReportInfo reportInfo;
    memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));
    reportInfo.requestInfo = (ReqDataInfo *)requestInfo;
    reportInfo.type = HRIL_RESPONSE;
    reportInfo.error = err;
    reportFunc(slotId, reportInfo, NULL, 1);
    TELEPHONY_LOGI("RESP_ERRNO_WITH_DATALEN_ONE");
}