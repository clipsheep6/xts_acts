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
#include "at_modem.h"
#include "macro.h"
#include <assert.h>
#include <stdlib.h>

void ReqSetRadioStatus(void *requestInfo, int fun, int rst)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    int ret = -1;
    g_radioState = fun;
    ret = SetRadioState(fun, rst);
    if (ret != 0) {
        TELEPHONY_LOGD("ReqSetRadioStatus failed");
        RESP_FAIL_WITHOUT_DATA(OnModemReport);
    }
    RESP_SUCSS_WITHOUT_DATA(OnModemReport);
    return;
}

void ReqGetRadioStatus(void *requestInfo)
{
    TELEPHONY_LOGD("enter to [%{public}s]:%{public}d", __func__, __LINE__);
    RESP_SUCSS_WITH_DATA(OnModemReport, &g_radioState, sizeof(HRilRadioState));
}