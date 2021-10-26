#include "napi_network_handler.h"
#include "napi_util.h"
#include "hilog/log.h"
#include <iostream>

NetworkStatus* parse(napi_env env, napi_callback_info info) {
    size_t argc  = 1;
    napi_value argv[1] = {0};
    napi_value thiz = nullptr;
    void * data = nullptr;
    napi_get_cb_info(env, info, &argc, argv,  &thiz, &data);
    NetworkStatus *networkStats = (NetworkStatus *)malloc(sizeof(NetworkStatus));
    if (networkStats == nullptr) {
        return nullptr;
    }
    GetStringProperty(networkStats->longOptName, env, argv[0], (char*)"longOperatorName");
    GetStringProperty(networkStats->shortOptName, env, argv[0], (char*)"shortOperatorName");
    GetStringProperty(networkStats->plmn, env, argv[0], (char*)"plmnNumeric");
    networkStats->isRoaming = GetIntProperty( env, argv[0], (char*)"isRoaming");
    GetStringProperty(networkStats->regStatus, env, argv[0],(char*)"regStatus");
    GetStringProperty(networkStats->nsaState, env, argv[0],(char*)"nsaState");
    networkStats->isCaActive = GetIntProperty( env, argv[0], (char*)"isCaActive");
    networkStats->isEmergency = GetIntProperty( env, argv[0], (char*)"isEmergency");

    HILOG_DEBUG(LOG_APP, "parse : src data: %{public}s %{public}s %{public}s ", 
    networkStats->longOptName,networkStats->shortOptName, networkStats->plmn);
    HILOG_DEBUG(LOG_APP, "parse : src data: %{public}s %{public}s ", 
    networkStats->regStatus,networkStats->nsaState);
    HILOG_DEBUG(LOG_APP, "parse : src data: %{public}d %{public}d %{public}d ", 
    networkStats->isRoaming,networkStats->isCaActive, networkStats->isEmergency);
    return networkStats;
}