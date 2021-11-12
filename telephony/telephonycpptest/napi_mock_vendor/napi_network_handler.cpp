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

#include <cstdlib>
#include <cstring>
#include "napi_network_handler.h"
#include "napi_util.h"
#include "hilog/log.h"

NetworkStatus *ParseNetworkStats(napi_env env, napi_callback_info info) {
    size_t argc = 1;
    napi_value argv[1] = {0};
    napi_value thiz;
    void *data;
    napi_get_cb_info(env, info, &argc, argv, &thiz, &data);
    NetworkStatus *networkStats = (NetworkStatus *)malloc(sizeof(NetworkStatus));
    if (networkStats == nullptr) {
        return nullptr;
    }
    GetStringProperty(networkStats->longOptName, env, argv[0], (char *)"longOperatorName");
    GetStringProperty(networkStats->shortOptName, env, argv[0], (char *)"shortOperatorName");
    GetStringProperty(networkStats->plmn, env, argv[0], (char *)"plmnNumeric");
    networkStats->isRoaming = GetIntProperty(env, argv[0], (char *)"isRoaming");
    GetStringProperty(networkStats->regStatus, env, argv[0], (char *)"regStatus");
    GetStringProperty(networkStats->nsaState, env, argv[0], (char *)"nsaState");
    networkStats->isCaActive = GetIntProperty(env, argv[0], (char *)"isCaActive");
    networkStats->isEmergency = GetIntProperty(env, argv[0], (char *)"isEmergency");

    HILOG_DEBUG(LOG_APP, "parse : src data: %{public}s %{public}s %{public}s ",
                networkStats->longOptName, networkStats->shortOptName, networkStats->plmn);
    HILOG_DEBUG(LOG_APP, "parse : src data: %{public}s %{public}s ",
                networkStats->regStatus, networkStats->nsaState);
    HILOG_DEBUG(LOG_APP, "parse : src data: %{public}d %{public}d %{public}d ",
                networkStats->isRoaming, networkStats->isCaActive, networkStats->isEmergency);
    return networkStats;
}

SignalInfo* ParseSignal(napi_env env, napi_callback_info info) {
    
    size_t argc = 1;
    napi_value argv[1];
    napi_value thiz;
    void * data;
    napi_get_cb_info(env, info, &argc, argv,  &thiz, &data);

    SignalInfo* signalInfo = (SignalInfo* )malloc(sizeof(SignalInfo));
    char buf[20];
    GetStringProperty(buf, env, argv[0],  (char*)"signalType");
    GetStringProperty(signalInfo->signalLevel, env, argv[0],  (char*)"signalLevel");
    HILOG_DEBUG(LOG_APP, "ParseSignal : buf: %{public}s  ", buf);
    signalInfo->signalType = SIGNAL_TYPE_UNKNOWN;
    if(strcmp("NETWORK_TYPE_GSM",buf) == 0) {
        signalInfo->signalType = SIGNAL_TYPE_GSM;
    }
    if (strcmp("NETWORK_TYPE_LTE",buf) == 0) {
        signalInfo->signalType = SIGNAL_TYPE_LTE;
    }
    if (strcmp("NETWORK_TYPE_WCDMA",buf) == 0) {
       signalInfo->signalType = SIGNAL_TYPE_WCDMA;
    }
    return signalInfo;
}