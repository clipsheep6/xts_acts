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

#ifndef OHOS_MOCK_REPORT_PUBLIC_H
#define OHOS_MOCK_REPORT_PUBLIC_H

#include "hril.h"
#include "hril_notification.h"
#include "vendor_report.h"

typedef void (*ReportFunc)(int32_t slotId, struct ReportInfo reportInfo, const uint8_t *response, size_t responseLen);
void NotifySuccessWithoutData(int slotId, ReportFunc reportFunc, HRilNotification notifyId);
void NotifySuccessWithData(
    int slotId, ReportFunc reportFunc, HRilNotification notifyId, const uint8_t *data, int dataLen);
void RespSuccessWithoutData(int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc);
void RespSuccessWithData(
    int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc, const uint8_t *data, int dataLen);
void RespSuccessWithDataExtend(int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc, int notifId);
void RespErrnoWithoutData(int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc, int err);
void RespErrnoFixDataLenEqualOne(int slotId, const ReqDataInfo *requestInfo, ReportFunc reportFunc, int err);

#endif // OHOS_MOCK_REPORT_PUBLIC_H