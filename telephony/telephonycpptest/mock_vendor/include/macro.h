
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

#ifndef OHOS_TELEPHONY_MACRO_H
#define OHOS_TELEPHONY_MACRO_H

#include <securec.h>
#include "vendor_report.h"

#define COMMON_RESP_WITHOUT_DATA(slot_id, requestInfo, report_func, err_code, flag)                      \
    {                                                                                                    \
        do                                                                                               \
        {                                                                                                \
            TELEPHONY_LOGD("RESP_FAIL_WITHOUT_DATA");                                                    \
            struct ReportInfo reportInfo;                                                                \
            memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));              \
            reportInfo = CreateReportInfo(requestInfo, err_code, HRIL_RESPONSE, flag); \
            report_func(slot_id, reportInfo, NULL, 0);                                                   \
        } while (0);                                                                                     \
    }

#define RESP_FAIL_WITHOUT_DATA(slot_id, requestInfo, report_func)                                                     \
    {                                                                                                                 \
        do                                                                                                            \
        {                                                                                                             \
            TELEPHONY_LOGD("RESP_FAIL_WITHOUT_DATA");                                                                 \
            struct ReportInfo reportInfo;                                                                             \
            memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));                           \
            reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_GENERIC_FAILURE, HRIL_RESPONSE, 0); \
            report_func(slot_id, reportInfo, NULL, 0);                                                                \
        } while (0);                                                                                                  \
    }

#define RESP_CODE_WITHOUT_DATA(slot_id, requestInfo, report_func, num)                           \
    {                                                                                            \
        do                                                                                       \
        {                                                                                        \
            TELEPHONY_LOGD("RESP_CODE_WITHOUT_DATA %{public}d", num);                            \
            struct ReportInfo reportInfo;                                                        \
            memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));      \
            reportInfo = CreateReportInfo(requestInfo, num, HRIL_RESPONSE, 0); \
            report_func(slot_id, reportInfo, NULL, 0);                                           \
        } while (0);                                                                             \
    }

#define RESP_SUCSS_WITHOUT_DATA(slot_id, requestInfo, report_func)                                            \
    {                                                                                                         \
        do                                                                                                    \
        {                                                                                                     \
            TELEPHONY_LOGD("RESP_SUCSS_WITHOUT_DATA");                                                        \
            struct ReportInfo reportInfo;                                                                     \
            memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));                   \
            reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_SUCCESS, HRIL_RESPONSE, 0); \
            report_func(slot_id, reportInfo, NULL, 0);                                                        \
        } while (0);                                                                                          \
    }

#define RESP_SUCSS_WITHOUT_DATA_EX(slot_id, requestInfo, report_func, num)                                      \
    {                                                                                                           \
        do                                                                                                      \
        {                                                                                                       \
            TELEPHONY_LOGD("RESP_SUCSS_WITHOUT_DATA");                                                          \
            struct ReportInfo reportInfo;                                                                       \
            memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo));                     \
            reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_SUCCESS, HRIL_RESPONSE, num); \
            report_func(slot_id, reportInfo, NULL, 0);                                                          \
        } while (0);                                                                                            \
    }

#define RESP_SUCSS_WITH_DATA(slot_id, requestInfo, report_func, data, dataLen)              \
    {                                                                                       \
        do                                                                                  \
        {                                                                                   \
            TELEPHONY_LOGD("RESP_SUCSS_WITH_DATA");                                         \
            struct ReportInfo reportInfo;                                                   \
            memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo)); \
            reportInfo = CreateReportInfo(requestInfo, HRIL_ERR_SUCCESS, HRIL_RESPONSE, 0); \
            report_func(slot_id, reportInfo, (void *)(data), dataLen);                      \
        } while (0);                                                                        \
    }

#define CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, src)         \
    {                                                      \
        do                                                 \
        {                                                  \
            strncpy_s(dst, sizeof(dst), src, strlen(src)); \
        } while (0);                                       \
    }

#define CLEAR_AND_COPY_FROM_DIRTY_BUFFER(dst, src, src_len) \
    {                                                       \
        do                                                  \
        {                                                   \
            strncpy_s(dst, sizeof(dst), src, src_len);      \
        } while (0);                                        \
    }

#define INIT_STRING_BUFF(dst, ch, size)    \
    {                                      \
        do                                 \
        {                                  \
            memset_s(dst, size, ch, size); \
        } while (0);                       \
    }

#endif // OHOS_TELEPHONY_MACRO_H