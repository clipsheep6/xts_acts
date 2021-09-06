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

#define RESP_FAIL_WITHOUT_DATA(report_func)                                                         \
    {                                                                                               \
        do {                                                                                        \
            TELEPHONY_LOGD("RESP_FAIL_WITHOUT_DATA");                                               \
            struct ReportInfo reportInfo;                                                           \
            reportInfo = ReportDataChange(requestInfo, HRIL_ERR_GENERIC_FAILURE, HRIL_RESPONSE, 0); \
            report_func(reportInfo, NULL, 0);                                                       \
        } while (0);                                                                                \
    }

#define RESP_CODE_WITHOUT_DATA(report_func, num)                               \
    {                                                                          \
        do {                                                                   \
            TELEPHONY_LOGD("RESP_CODE_WITHOUT_DATA %{public}d", num);          \
            struct ReportInfo reportInfo;                                      \
            reportInfo = ReportDataChange(requestInfo, num, HRIL_RESPONSE, 0); \
            report_func(reportInfo, NULL, 0);                                  \
        } while (0);                                                           \
    }

#define RESP_SUCSS_WITHOUT_DATA(report_func)                                                \
    {                                                                                       \
        do {                                                                                \
            TELEPHONY_LOGD("RESP_SUCSS_WITHOUT_DATA");                                      \
            struct ReportInfo reportInfo;                                                   \
            reportInfo = ReportDataChange(requestInfo, HRIL_ERR_SUCCESS, HRIL_RESPONSE, 0); \
            report_func(reportInfo, NULL, 0);                                               \
        } while (0);                                                                        \
    }

#define RESP_SUCSS_WITHOUT_DATA_EX(report_func, num)                                                \
    {                                                                                       \
        do {                                                                                \
            TELEPHONY_LOGD("RESP_SUCSS_WITHOUT_DATA");                                      \
            struct ReportInfo reportInfo;                                                   \
            reportInfo = ReportDataChange(requestInfo, HRIL_ERR_SUCCESS, HRIL_RESPONSE, num); \
            report_func(reportInfo, NULL, 0);                                               \
        } while (0);                                                                        \
    }

#define RESP_SUCSS_WITH_DATA(report_func, data, dataLen)                                    \
    {                                                                                       \
        do {                                                                                \
            TELEPHONY_LOGD("RESP_SUCSS_WITH_DATA");                                         \
            struct ReportInfo reportInfo;                                                   \
            reportInfo = ReportDataChange(requestInfo, HRIL_ERR_SUCCESS, HRIL_RESPONSE, 0); \
            report_func(reportInfo, (void*)(data), dataLen);                                \
        } while (0);                                                                        \
    }

#define CLEAR_AND_COPY_FROM_CLEAN_BUFFER(dst, src)         \
    {                                                      \
        do {                                               \
            strncpy_s(dst, sizeof(dst), src, strlen(src)); \
        } while (0);                                       \
    }

#define CLEAR_AND_COPY_FROM_DIRTY_BUFFER(dst, src, src_len) \
    {                                                       \
        do {                                                \
            strncpy_s(dst, sizeof(dst), src, src_len);      \
        } while (0);                                        \
    }

#define NOTIFY_SUCSS_WITHOUT_DATA(report_func, notify_id)                                         \
    {                                                                                             \
        do {                                                                                      \
            struct ReportInfo reportInfo;                                                         \
            (void)memset_s(&reportInfo, sizeof(struct ReportInfo), 0, sizeof(struct ReportInfo)); \
            reportInfo.notifyId = notify_id;                                                      \
            reportInfo.type = HRIL_NOTIFICATION;                                                  \
            reportInfo.error = HRIL_ERR_SUCCESS;                                                  \
            report_func(reportInfo, NULL, 0);                                                     \
            TELEPHONY_LOGD("NOTIFY_SUCSS_WITHOUT_DATA id：%{public}d", notify_id);                                               \
        } while (0);                                                                              \
    }

#define INIT_STRING_BUFF(dst, ch, size)    \
    {                                      \
        do {                               \
            memset_s(dst, size, ch, size); \
        } while (0);                       \
    }

#endif // OHOS_TELEPHONY_MACRO_H