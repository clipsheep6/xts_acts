/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "device_auth_func.h"
#include <unistd.h>
#include <getopt.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <sys/time.h>
#include "nativetoken_kit.h"
#include "token_setproc.h"
#include "hc_log.h"
#include "device_auth.h"
#include "securec.h"
#include "json_utils.h"
#include "string_util.h"
#include "hc_tlv_parser.h"
#include "account_module_defines.h"
#include "alg_loader.h"
// #include "broadcast_manager.h"
#include "common_defs.h"
#include <pthread.h>
#include "hc_condition.h"

// #include "device_auth_log.h"
#include "device_auth_socket.h"


// #define CONCURRENT_NUM 40
#define REQUEST_ID "requestId"
#define PEERDEVICEID "addId"
#define OS_ACCOUNT_ID "osAccountId"
#define PEERDEVICEIDSERVER "peerAuthId"
#define BUFFER_SIZE 2048

// 初始化参数
static const DeviceGroupManager *g_gmInstance = NULL;
static const GroupAuthManager *g_gaInstance = NULL;
static DeviceAuthCallback g_gmCallback = {NULL};
static DeviceAuthCallback g_gaCallback = {NULL};
static DataChangeListener g_testListener = {NULL};
static HcCondition g_testCondition;
static char *g_tmpStr = NULL;  //拷贝json中的string便于释放内存

// 群组相关参数
static const char *g_appName = "TestApp";
static const char *g_appName1 = "TestApp1";
static int32_t g_requestId = 123;
static int32_t g_osAccountId1 = 100;
// static int32_t g_osAccountId2 = 101;
char g_tempGroupId[128] = "FF9B5A053D74CC8835DB98FAADBCE1A8E4C441637A3A170CB95D4DDD83319C49";
// static int expireTime = 90;

// 绑定相关参数
static char g_pinCode[128] = "123456";
static const char *g_peerUdid;
static const char *g_peerDeviceId;
static const char *g_localDeviceId;
static char g_duplicateMessage[2048];
static int g_receivedMessageNum[7] = {0};
static int g_isAccepted = 1;
const char *g_serverAuthId = "CAF34E13190CBA510AA8DABB70CDFF8E9F623656DED400EF0D4CFD9E88FD6202";



static const int NUM0 = 0;
// static const int 2 = 2;
// static const int 3 = 3;
static const int NUM100 = 100;
// static const int NUM201 = 201;
// const int NUM601 = 601;
const int NUM1024 = 1024;


// 双设备组网相关参数
static int g_socketPool[100];
static int g_resultPool[200];
static int g_operCode[150];

// server端需要的参数
static int32_t g_osAccountServer = 100;
// static const int32_t BUFFER_SIZE = 2048;
// static bool g_isAuth = false;
// static bool g_isConcurrent = false;

// 执行结果相关参数
static int g_operationCode = -1;
static int g_errorCode = 1;
static int g_messageCode = -1;
static int g_result[4];

// char g_tempGroupId[128] = "FF9B5A053D74CC8835DB98FAADBCE1A8E4C441637A3A170CB95D4DDD83319C49";
// static int64_t g_requestId = 0L;





// static int g_isError = 0;



// account related
static char g_pkInfoStr[1024] = {0};
char g_data[BUFFER_SIZE] = {0};   //单设备模拟同账号认证，临时存储认证数据
const char *g_version = "1.0.0";
// const char *g_deviceId1 = "devA";
const char *g_serverDeviceId = "devB";
const char *g_userId1 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
const char *g_userId2 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3";
const char *g_croPK;

const char *g_queryCroParams = "{\"groupType\":1282,\"groupOwner\":\"TestApp\"}";
// server端同账号对称凭据
const char *g_serverAsymm = "{\"groupType\":1,\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809"
"A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
"\"authCode\":\"1234123412341234123412341234123412341234123412341234123412345678\"}}";



// Basic callback for deviceauth
// static char *OnRequest(int64_t requestId, int operationCode, const char *reqParams)
// {
//     g_messageCode = ON_REQUEST;
//     g_requestId = requestId;
//     g_operationCode = operationCode;
//     CJson *json = CreateJson();
//     AddIntToJson(json, FIELD_CONFIRMATION, REQUEST_ACCEPTED);
//     AddStringToJson(json, FIELD_PIN_CODE, "123456");
//     AddStringToJson(json, FIELD_DEVICE_ID, g_serverAuthId);
//     AddIntToJson(json, FIELD_USER_TYPE, DEVICE_TYPE_ACCESSORY);
//     AddIntToJson(json, FIELD_GROUP_VISIBILITY, GROUP_VISIBILITY_PUBLIC);
//     AddIntToJson(json, FIELD_EXPIRE_TIME, expireTime);
//     char *returnDataStr = PackJsonToString(json);
//     FreeJson(json);
//     return returnDataStr;
// }

static void OnError(int64_t requestId, int operationCode, int errorCode, const char *errorReturn)
{
    // (void)errorReturn;
    g_messageCode = ON_ERROR;
    g_requestId = requestId;
    g_operationCode = operationCode;
    g_errorCode = errorCode;
    g_testCondition.notify(&g_testCondition);
}

// static bool OnTransmit(int64_t requestId, const uint8_t *data, uint32_t dataLen)
// {
//     g_messageCode = ON_TRANSMIT;
//     g_requestId = requestId;
//     if (memset_s(g_data, BUFFER_SIZE, 0, BUFFER_SIZE) < 0) {
//         printf("memset_s failed");
//         return -1;
//     }
//     if (memcpy_s(g_data, BUFFER_SIZE, data, dataLen) < 0) {
//         printf("memcpy_s failed");
//         return -1;
//     }
//     return true;
// }

static void OnFinish(int64_t requestId, int operationCode, const char *returnData)
{
    g_messageCode = ON_FINISH;
    printf("data:%d\n", g_messageCode);
    g_requestId = requestId;
    g_operationCode = operationCode;
    if (operationCode == GROUP_CREATE)
    {
        CJson *json = CreateJsonFromString(returnData);
        const char *groupId = GetStringFromJson(json, FIELD_GROUP_ID);
        if (memcpy_s(g_data, BUFFER_SIZE, groupId, strlen(groupId)) < 0) {
            printf("memcpy_s failed");
        }
        FreeJson(json);
    }
    g_testCondition.notify(&g_testCondition);
}

static void OnSessionKeyReturned(int64_t requestId, const uint8_t *sessionKey, uint32_t sessionKeyLen)
{
    g_messageCode = ON_SESSION_KEY_RETURNED;
    g_requestId = requestId;
}

// Callback for double device authentication
static bool OnTransmitDouble(int64_t requestId, const uint8_t *data, uint32_t dataLen)
{
    printf("-------------OnTransmit---------------\n");
    printf("|  RequestId: %d  |\n", (int)requestId);
    printf("|  sendData: %s  |\n", (char *)data);

    if (g_socketPool[requestId] != -1)
    {
        CJson *json = CreateJsonFromString((char *)data);
        int64_t tmpReqId = 0;
        if (GetInt64FromJson(json, REQUEST_ID, &tmpReqId) != 0) {
            AddInt64StringToJson(json, REQUEST_ID, requestId);
        }
        AddIntToJson(json, "opercode", g_operCode[requestId]);
        char *sendData = PackJsonToString(json);
        SendData(g_socketPool[requestId], sendData);
        printf("finish send ");
        FreeJson(json);
        FreeJsonString(sendData);

        sleep(1);
        printf("send size %d, ", dataLen);
    }
    g_messageCode = ON_TRANSMIT;
    g_requestId = requestId;
    g_testCondition.notify(&g_testCondition);

    return true;
}

static bool OnTransmitDupMessDouble(int64_t requestId, const uint8_t *data, uint32_t dataLen)
{
    printf("-------------OnTransmit---------------\n");
    printf("|  RequestId: %d  |\n", (int)requestId);
    printf("|  sendData: %s  |\n", (char *)data);
    CJson *json = CreateJsonFromString((char *)data);
    int64_t tmpReqId = 0;
    if (GetInt64FromJson(json, REQUEST_ID, &tmpReqId) != 0) {
        AddInt64StringToJson(json, REQUEST_ID, requestId);
    }
    AddIntToJson(json, "opercode", DUPLICATEMESSAGE);
    char *sendData = PackJsonToString(json);
    if (strcpy_s(g_duplicateMessage, strlen(sendData) + 1, sendData) != 0) {
        printf("strcpy_s fail");
    }
    printf("g_duplicateMessage:%s\n", g_duplicateMessage);
    AddIntToJson(json, "opercode", g_operCode[requestId]);
    sendData = PackJsonToString(json);
    SendData(g_socketPool[requestId], sendData);
    printf("finish send ");
    FreeJson(json);
    FreeJsonString(sendData);
    sleep(1);
    printf("send size %d, ", dataLen);
    g_messageCode = ON_TRANSMIT;
    g_requestId = requestId;
    g_testCondition.notify(&g_testCondition);
    return true;
}

static bool OnTransmitDeleteDouble(int64_t requestId, const uint8_t *data, uint32_t dataLen)
{
    printf("-------------OnTransmit---------------\n");
    printf("|  RequestId: %d  |\n", (int)requestId);
    printf("|  sendData: %s  |\n", (char *)data);
    CJson *json = CreateJsonFromString((char *)data);
    int64_t tmpReqId = 0;
    if (GetInt64FromJson(json, REQUEST_ID, &tmpReqId) != 0) {
        AddInt64StringToJson(json, REQUEST_ID, requestId);
    }

    AddIntToJson(json, "opercode", g_operCode[requestId]);
    char *sendData = PackJsonToString(json);

    printf("deleteOnTransmitData:%s", sendData);
    printf("finish send ");
    FreeJson(json);
    FreeJsonString(sendData);

    printf("send size %d, ", dataLen);
    g_messageCode = ON_TRANSMIT;
    g_requestId = requestId;
    g_testCondition.notify(&g_testCondition);
    return true;
}

static void OnSessionKeyReturnedDouble(int64_t requestId, const uint8_t *sessionKey, uint32_t sessionKeyLen)
{
    printf("-------------OnSessionKeyReturned---------------\n");
    printf("|  RequestId: %d  |\n", (int)requestId);
    printf("|  SessionKey: %-36d  |\n", sessionKeyLen);
    printf("-------------OnSessionKeyReturned---------------\n");
    g_messageCode = ON_SESSION_KEY_RETURNED;
    g_requestId = requestId;
    g_testCondition.notify(&g_testCondition);
}

static void OnFinishDouble(int64_t requestId, int operationCode, const char *authReturn)
{
    printf("-------------OnFinish---------------\n");
    printf("|  RequestId: %-27d  |\n", (int)requestId);
    printf("|  OperationCode: %-23d  |\n", operationCode);
    printf("|  ReturnData: %-26s  |\n", authReturn);
    printf("-------------OnFinish---------------\n");
    if ((operationCode == NUM0 && g_operCode[requestId] < AUTH) || operationCode == 2) {
        CJson *dataJson = CreateJsonFromString(authReturn);
        const char *peerDeviceId = NULL;
        if (dataJson != NULL) {
            peerDeviceId = GetStringFromJson(dataJson, PEERDEVICEID);
            if (peerDeviceId != NULL) {
                
                // if (strcpy_s(g_peerUdid, strlen(peerDeviceId) + 1, peerDeviceId) != 0) {
                //     printf("strcpy_s fail");
                // }
                FreeJson(dataJson);
                printf("peerDeviceId:%s", g_peerUdid);
            }
        }
    } else {
        CJson *dataJson = CreateJsonFromString(authReturn);
        const char *peerDeviceId = NULL;
        if (dataJson != NULL) {
            peerDeviceId = GetStringFromJson(dataJson, PEERDEVICEIDSERVER);
            if (peerDeviceId != NULL) {                
                // if (strcpy_s(g_peerUdid, strlen(peerDeviceId) + 1, peerDeviceId) != 0) {
                //     printf("strcpy_s fail");
                // }
                g_peerUdid = peerDeviceId;
                FreeJson(dataJson);
                printf("peerDeviceId:%s", g_peerUdid);
            }
        }
    }

    g_resultPool[requestId]++;
    printf("peerDeviceId:%s", g_peerUdid);
    g_messageCode = ON_FINISH;
    printf("data:%d\n", g_messageCode);
    g_requestId = requestId;
    g_operationCode = operationCode;
    g_testCondition.notify(&g_testCondition);
}

static void OnErrorDouble(int64_t requestId, int operationCode, int errorCode, const char *errorReturn)
{
    printf("-------------OnError---------------\n");
    printf("|  RequestId: %-27d  |\n", (int)requestId);
    printf("|  OperationCode: %-23d  |\n", operationCode);
    printf("|  ErrorCode: %-27d  |\n", errorCode);
    printf("-------------OnError---------------\n");
    // g_isError = 1;
    g_resultPool[requestId + NUM100]++;
    g_messageCode = ON_ERROR;
    g_requestId = requestId;
    g_operationCode = operationCode;
    g_errorCode = errorCode;
    g_testCondition.notify(&g_testCondition);
}

static char *OnBindRequestControllerDouble(int64_t requestId, int operationCode, const char *reqParam)
{
    printf("-------------OnBindRequestController---------------\n");
    printf("|  RequestId: %-29d  |\n", (int)requestId);
    printf("|  OperationCode: %-25d  |\n", operationCode);
    printf("|  reqParam: %s  |\n", reqParam);
    CJson *json = CreateJson();
    if (g_isAccepted == 1) {
        AddIntToJson(json, FIELD_CONFIRMATION, REQUEST_ACCEPTED);
    } else {
        AddIntToJson(json, FIELD_CONFIRMATION, REQUEST_REJECTED);
    }
    g_localDeviceId = GetLocalDeviceId();
    AddIntToJson(json, OS_ACCOUNT_ID, g_osAccountServer);
    AddStringToJson(json, FIELD_PIN_CODE, g_pinCode);
    AddStringToJson(json, FIELD_DEVICE_ID, g_localDeviceId);

    g_tmpStr = PackJsonToString(json);
    FreeJson(json);
    printf("|  returnDataStr: %s  |\n", g_tmpStr);
    printf("-------------OnBindRequestController---------------\n");
    return g_tmpStr;
}

static char *OnAuthRequestControllerDouble(int64_t requestId, int operationCode, const char *reqParam)
{
    printf("-------------OnAuthRequestController---------------\n");
    printf("|  RequestId: %-29d  |\n", (int)requestId);
    printf("|  OperationCode: %-25d  |\n", operationCode);
    printf("|  reqParam: %s  |\n", reqParam);
    printf("-------------OnAuthRequestController---------------\n");
    CJson *json = CreateJson();
    if (g_isAccepted == 1) {
        AddIntToJson(json, FIELD_CONFIRMATION, REQUEST_ACCEPTED);
    } else {
        AddIntToJson(json, FIELD_CONFIRMATION, REQUEST_REJECTED);
    }
    CJson *dataJson = CreateJsonFromString(reqParam);
    const char *peerDeviceId = NULL;
    if (dataJson != NULL) {
        peerDeviceId = GetStringFromJson(dataJson, PEERDEVICEIDSERVER);
    }
    if (peerDeviceId == NULL)
    {
        peerDeviceId = GetStringFromJson(dataJson, FIELD_DEVICE_ID);
    }
    // const char *userId = g_userId2;
    const char *userId = GetStringFromJson(dataJson, FIELD_USER_ID);
    if (userId != NULL)
    {
        printf("userId:%s", userId);
        AddStringToJson(json, FIELD_USER_ID, userId);
    }
    
    AddIntToJson(json, OS_ACCOUNT_ID, g_osAccountServer);
    AddStringToJson(json, FIELD_PEER_CONN_DEVICE_ID, peerDeviceId);
    AddStringToJson(json, FIELD_SERVICE_PKG_NAME, g_appName);

    g_tmpStr = PackJsonToString(json);
    FreeJson(json);
    FreeJson(dataJson);
    return g_tmpStr;
}

// Listener callback
static void OnGroupCreated(const char *groupInfo)
{
    if (groupInfo == NULL) {
        printf("not expected\n");
        return;
    }
    g_receivedMessageNum[GROUP_CREATED]++;
    printf("-------------OnGroupCreated---------------\n");
    printf("GroupInfo:\n%s\n", groupInfo);
    printf("-------------OnGroupCreated---------------\n");
}

static void OnGroupDeleted(const char *groupInfo)
{
    if (groupInfo == NULL) {
        printf("not expected\n");
        return;
    }
    g_receivedMessageNum[GROUP_DELETED]++;
    printf("-------------OnGroupDeleted---------------\n");
    printf("GroupInfo:\n%s\n", groupInfo);
    printf("-------------OnGroupDeleted---------------\n");
}

static void OnDeviceBound(const char *peerUdid, const char *groupInfo)
{
    printf("-------------OnDeviceBound---------------\n");
    printf("PeerUdid:\n%s\n", peerUdid);
    // if (strcpy_s(g_peerUdid, strlen(peerUdid) + 1, peerUdid) != 0) {
    //     printf("strcpy_s fail");
    // }
    g_peerUdid = peerUdid;
    g_receivedMessageNum[DEVICE_BOUND]++;
    printf("GroupInfo:\n%s\n", groupInfo);
    printf("-------------OnDeviceBound---------------\n");
}
static void OnDeviceUnBound(const char *peerUdid, const char *groupInfo)
{
    printf("-------------OnDeviceUnBound---------------\n");
    printf("PeerUdid:\n%s\n", peerUdid);
    printf("GroupInfo:\n%s\n", groupInfo);
    g_receivedMessageNum[DEVICE_UNBOUND]++;
    printf("-------------OnDeviceUnBound---------------\n");
}
static void OnDeviceNotTrusted(const char *peerUdid)
{
    printf("-------------OnDeviceNotTrusted---------------\n");
    printf("PeerUdid:\n%s\n", peerUdid);
    g_receivedMessageNum[DEVICE_NOT_TRUSTED]++;
    printf("-------------OnDeviceNotTrusted---------------\n");
}
static void OnLastGroupDeleted(const char *peerUdid, int groupType)
{
    printf("-------------OnLastGroupDeleted---------------\n");
    printf("PeerUdid:\n%s\n", peerUdid);
    printf("GroupType:\n%d\n", groupType);
    g_receivedMessageNum[LAST_GROUP_DELETED]++;
    printf("-------------OnLastGroupDeleted---------------\n");
}
static void OnTrustedDeviceNumChanged(int curTrustedDeviceNum)
{
    printf("-------------OnTrustedDeviceNumChanged---------------\n");
    printf("CurTrustedDeviceNum:\n%d\n", curTrustedDeviceNum);
    g_receivedMessageNum[TRUSTED_DEVICE_NUM_CHANGED]++;
    printf("-------------OnTrustedDeviceNumChanged---------------\n");
}


// // Listen Callback
// static void OnGroupCreated(const char *groupInfo)
// {
//     g_receivedMessageNum[GROUP_CREATED]++;
// }

// static void OnGroupDeleted(const char *groupInfo)
// {
//     g_receivedMessageNum[GROUP_DELETED]++;
// }

// static void OnDeviceBound(const char *peerUdid, const char *groupInfo)
// {
//     g_receivedMessageNum[DEVICE_BOUND]++;
// }

// static void OnDeviceUnBound(const char *peerUdid, const char *groupInfo)
// {
//     g_receivedMessageNum[DEVICE_UNBOUND]++;
// }

// static void OnDeviceNotTrusted(const char *peerUdid)
// {
//     g_receivedMessageNum[DEVICE_NOT_TRUSTED]++;
// }

// static void OnLastGroupDeleted(const char *peerUdid, int groupType)
// {
//     g_receivedMessageNum[LAST_GROUP_DELETED]++;
// }

// static void OnTrustedDeviceNumChanged(int curTrustedDeviceNum)
// {
//     g_receivedMessageNum[TRUSTED_DEVICE_NUM_CHANGED]++;
// }


//base utils
const char *InputIp()
{
    char temp[128] = {"192.168.0.0"};
    printf("Please input peer ip: ");
    fflush(stdout);
    if (scanf_s("%s", temp, sizeof(temp)) < 0) {
        printf("scanf_s failed");
    }
    const char *ip = temp;
    return ip;
}

void FreeTmpStr()
{
    if (g_tmpStr != NULL) {
        FreeJsonString(g_tmpStr);
    }
}

void WaitTime(double sleepTime)
{
    clock_t start, finish;
    double duration;
    start = clock();
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    while (duration < sleepTime) {
        finish = clock();
        duration = (double)(finish - start) / CLOCKS_PER_SEC;
    }
}

// basic function

void InitTest(const char *appId)
{
    InitDeviceAuthService();
    InitHcCond(&g_testCondition, NULL);
    g_gmInstance = GetGmInstance();
    DoubleCallBack(appId);
}

void DeInitTest(void)
{
    DestroyDeviceAuthService();
    ClearTempValue();
    DestroyHcCond(&g_testCondition);
    g_gmInstance = NULL;
    DeleteDatabase();
}

void ClearTempValue()
{
    g_requestId = 0L;
    g_operationCode = -1;
    g_errorCode = 1;
    g_tmpStr = NULL;
    g_messageCode = -1;
}

int32_t RemoveDir(const char *path)
{
    char strBuf[BUFFER_SIZE] = {0};
    if (path == NULL) {
        return -1;
    }
    if (sprintf_s(strBuf, sizeof(strBuf) - 1, "rm -rf %s", path) < 0) {
        printf("sprintf_s failed");
        return -1;
    }
    system(strBuf);
    return 0;
}

void RemoveHuks()
{
    RemoveDir("/data/data/maindata");
    RemoveDir("/data/data/bakdata");
}

int DeleteDatabase()
{
    const char *groupPath = "/data/service/el1/public/deviceauth/";
    int ret;
    ret = RemoveDir(groupPath);
    RemoveHuks();
    return 0;
}

int InitEnv()
{
    printf("start to init env.\n");
    InitHcCond(&g_testCondition, NULL);
    InitDeviceAuthService();
    g_gmInstance = GetGmInstance();
    g_gaInstance = GetGaInstance();
    // InitListener(g_appName);
    DoubleCallBack(g_appName);

    g_gaCallback.onError = OnErrorDouble;
    g_gaCallback.onFinish = OnFinishDouble;
    g_gaCallback.onSessionKeyReturned = OnSessionKeyReturnedDouble;
    g_gaCallback.onTransmit = OnTransmitDouble;
    g_gaCallback.onRequest = OnAuthRequestControllerDouble;
    printf("init env success.\n");
    return 0;
}

int DoubleCallBack(const char *appId)
{
    g_gmCallback.onError = OnErrorDouble;
    g_gmCallback.onFinish = OnFinishDouble;
    g_gmCallback.onSessionKeyReturned = OnSessionKeyReturnedDouble;
    g_gmCallback.onTransmit = OnTransmitDouble;
    g_gmCallback.onRequest = OnBindRequestControllerDouble;
    // g_gmInstance->regCallback(appId, &g_gmCallback);
    return g_gmInstance->regCallback(appId, &g_gmCallback);
}

void Destory()
{
    ClearTempValue();
    DestroyDeviceAuthService();
    DestroyHcCond(&g_testCondition);
}

// mutil thread test
void InitResultPool(int requestId)
{
    g_resultPool[requestId] = 0;
    g_resultPool[requestId + NUM100] = 0;
}

void SetSocketPool(int requestId, int sockfd)
{
    g_socketPool[requestId] = sockfd;
}

void PrintResult(int num)
{
    for (int i = 1; i < num + 1; i++) {
        printf("第%d个线程,认证成功%d,认证失败%d\n", i, g_resultPool[i], g_resultPool[i + NUM100]);
    }
}

// Test reg listener
void InitListener(const char *appId)
{
    g_testListener.onGroupCreated = OnGroupCreated;
    g_testListener.onGroupDeleted = OnGroupDeleted;
    g_testListener.onDeviceBound = OnDeviceBound;
    g_testListener.onDeviceUnBound = OnDeviceUnBound;
    g_testListener.onDeviceNotTrusted = OnDeviceNotTrusted;
    g_testListener.onLastGroupDeleted = OnLastGroupDeleted;
    g_testListener.onTrustedDeviceNumChanged = OnTrustedDeviceNumChanged;
    g_gmInstance->regDataChangeListener(appId, &g_testListener);
}

// int RegListenerTest(const char *appId, const DataChangeListener *listener)
// {
//     return g_gmInstance->regDataChangeListener(appId, listener);
// }

// int UnRegListenerTest(const char *appId)
// {
//     return g_gmInstance->unRegDataChangeListener(appId);
// }

// Testting groupmanage of no-account deviceauth 
char *CreateGroupParams(const int groupType, const char *deviceId, const char *groupName, const int groupVisibility)
{
    CJson *createParams = CreateJson();
    AddIntToJson(createParams, FIELD_GROUP_TYPE, groupType);
    AddStringToJson(createParams, FIELD_GROUP_NAME, groupName);
    AddIntToJson(createParams, FIELD_GROUP_VISIBILITY, groupVisibility);
    char *createParamsStr = PackJsonToString(createParams);
    FreeJson(createParams);
    return createParamsStr;
}

int *CreateGroupTest(int32_t osAccountId, int32_t requestId, const char *groupOwner, const char *createParamsStr)
{
    LOGI("start createGroup ...");
    int ret = g_gmInstance->createGroup(osAccountId, requestId, groupOwner, createParamsStr);
    if (ret == 0)
    {
        g_testCondition.wait(&g_testCondition);
    }
    sleep(1);
    g_result[0] = g_operationCode;
    g_result[1] = g_errorCode;
    g_result[2] = g_messageCode;
    g_result[3] = ret;
    printf("g_messageCode%d\n", g_result[2]);
    printf("ret:%d\n", g_result[3]);
    return g_result;
}

char *DeleteGroupParams(const char *groupId)
{
    CJson *deleteParams = CreateJson();
    AddStringToJson(deleteParams, "groupId", groupId);
    char *deleteParamsStr = PackJsonToString(deleteParams);
    FreeJson(deleteParams);
    return deleteParamsStr;
}

int *DeleteGroupTest(int32_t osAccountId, int32_t requestId, const char *groupOwner, const char *disbandParams)
{
    LOGI("start deletGroup ...");
    int ret = g_gmInstance->deleteGroup(osAccountId, requestId, groupOwner, disbandParams);
    if (ret == 0)
    {
        g_testCondition.wait(&g_testCondition);
    }
    g_result[0] = g_operationCode;
    g_result[1] = g_errorCode;
    g_result[2] = g_messageCode;
    g_result[3] = ret;
    printf("deletgroup\n");
    printf("g_messageCode:%d\n", g_result[2]);
    printf("ret:%d\n", ret);
    return g_result;
}

// Test addmember devices
char *AddParams(const char *groupId, const int groupType, const char *pincode, const char *connectParams)
{
    CJson *data = CreateJson();
    AddStringToJson(data, FIELD_GROUP_ID, groupId);
    AddIntToJson(data, FIELD_GROUP_TYPE, groupType);
    AddStringToJson(data, FIELD_PIN_CODE, pincode);
    AddStringToJson(data, FIELD_CONNECT_PARAMS, connectParams);
    g_tmpStr = PackJsonToString(data);
    FreeJson(data);
    printf("data:%s\n", g_tmpStr);
    return g_tmpStr;
}

int *AddMemberTest(int32_t osAccountId, int64_t requestId, const char *appId, const char *authParams, int code,
    int sockfd)
{
    g_operCode[requestId] = code;
    g_socketPool[requestId] = sockfd;
    LOGI("start addMenm ...");
    int ret = g_gmInstance->addMemberToGroup(osAccountId, requestId, appId, authParams);
    if (ret == 0) {
        // g_testCondition.wait(&g_testCondition);
        sleep(1);
    }
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    printf("%d", g_result[2]);
    return g_result;
}

int *GMProcessData(int64_t requestId, const char *data, int code, int sockfd)
{
    g_operCode[requestId] = code;
    g_socketPool[requestId] = sockfd;
    LOGI("start process GM Data ...");
    printf("start process GM Data ...");
    int ret = g_gmInstance->processData(requestId, (uint8_t *)data, strlen(data) + 1);
    printf("ret:%d", ret);
    double sleepTime = 1.0;
    WaitTime(sleepTime);
    if (ret == 0) {
        // g_testCondition.wait(&g_testCondition);
        sleep(1);
    }
    printf("ret:%d", ret);
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    printf("%d", g_result[2]);
    return g_result;
}

int *TestBind(int32_t osAccountId, int64_t requestId, const char *appId, const char *authParams, int sockfd)
{
    int *ret = AddMemberTest(osAccountId, requestId, appId, authParams, BIND, sockfd);
    const char *serverData = RecvData(sockfd);
    ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, BIND, sockfd);
    serverData = RecvData(sockfd);
    ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, BIND, sockfd);
    serverData = RecvData(sockfd);
    ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, BIND, sockfd);
    return ret;
}

void ReturnFirstMessage(int sockfd)
{
    const char *serverFirstMessage = "{\"payload\":{\"salt\":\"3AFB3F5165C0E308DD59357F7A508E50\",\"epk\":\"7E3D8F2CCA"
    "5FFB9749F50F62B3EE5C7EA35E0F2E017209F53DA75B8482508B7D\",\"challenge\":\"9075F44D5811F636C476F0348F317B75\","
    "\"version\":{\"minVersion\":\"1.0.0\",\"currentVersion\":\"2.0.26\"}},\"message\":32769,"
    "\"groupAndModuleVersion\":\"2.0.1\",\"groupId\":\"BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54D"
    "C0B\",\"groupName\":\"P2PGroup\",\"groupOp\":2,\"groupType\":256,\"peerDeviceId\":\"004FB07744533F00E763EEBB3194F"
    "9E183989AAF1502D3C86F31251973CB8F7F\",\"connDeviceId\":\"004FB07744533F00E763EEBB3194F9E183989AAF1502D3C86F312519"
    "73CB8F7F\",\"appId\":\"TestApp\",\"requestId\":\"10\",\"ownerName\":\"\"}";
    SendData(sockfd, serverFirstMessage);
}

void ReturnSecondMessage(int sockfd)
{
    const char *serverSecondMessage = "{\"payload\":{\"kcfData\":\"3550BE669F8ACD172087A7F62B146725D5EB70231CF8666A28"
    "AB301CD10D7123\",\"version\":{\"minVersion\":\"1.0.0\",\"currentVersion\":\"2.0.26\"}},\"message\":32770,\"group"
    "AndModuleVersion\":\"2.0.1\",\"groupId\":\"BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54DC0B\","
    "\"groupName\":\"P2PGroup\",\"groupOp\":2,\"groupType\":256,\"peerDeviceId\":\"004FB07744533F00E763EEBB3194F9E183"
    "989AAF1502D3C86F31251973CB8F7F\",\"connDeviceId\":\"004FB07744533F00E763EEBB3194F9E183989AAF1502D3C86F31251973CB"
    "8F7F\",\"appId\":\"TestApp\",\"requestId\":\"10\",\"ownerName\":\"\"}";
    SendData(sockfd, serverSecondMessage);
}

int DuplicateMessage(int32_t osAccountId, int64_t requestId, const char *appId, const char *authParams, int sockfd)
{
    g_gmCallback.onTransmit = OnTransmitDupMessDouble;
    g_gmInstance->regCallback(g_appName, &g_gmCallback);
    int *ret = AddMemberTest(osAccountId, requestId, appId, authParams, BIND, sockfd);
    printf("ret:%d\n", ret[2]);
    const char *recvData = RecvData(sockfd);
    SendData(g_socketPool[requestId], g_duplicateMessage);
    recvData = RecvData(sockfd);
    CJson *data = CreateJsonFromString(recvData);
    int result;
    GetIntFromJson(data, "serverResult", &result);
    FreeJson(data);
    return result;
}

void DoDuplicateMessage(int64_t requestId, const char *data, int code, int sockfd)
{
    g_operCode[requestId] = code;
    g_socketPool[requestId] = sockfd;
    LOGI("start process GM Data ...");
    int ret = g_gmInstance->processData(requestId, (uint8_t *)data, strlen(data) + 1);
    CJson *json = CreateJson();
    AddIntToJson(json, "serverResult", ret);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJsonString(sendData);
    FreeJson(json);
}

// Test device auth
char *AuthParams(const char *peerConnDeviceId, const char *pkgName, bool isClient, bool level, const char *groupId, int keyLength, const char *userId)
{
    CJson *data = CreateJson();//创建json对象
    if(peerConnDeviceId != NULL)
    {
        AddStringToJson(data, FIELD_PEER_CONN_DEVICE_ID, peerConnDeviceId);
    }  
    AddStringToJson(data, FIELD_SERVICE_PKG_NAME, pkgName);
    AddBoolToJson(data, FIELD_IS_CLIENT, isClient);
    AddBoolToJson(data, FIELD_IS_DEVICE_LEVEL, level);
    if(groupId != NULL)
    {
        AddStringToJson(data, FIELD_GROUP_ID, groupId);
    }
    if(keyLength != 0)
    {
        AddIntToJson(data, FIELD_KEY_LENGTH, keyLength);
    }
    if(userId != NULL)
    {
        AddStringToJson(data, FIELD_USER_ID, userId);
    }
    g_tmpStr = PackJsonToString(data);
    FreeJson(data);
    return g_tmpStr;
}

char *AuthParamsError(const char *peerConnDeviceId, const char *pkgName, bool isClient, bool level, const char *groupId, int keyLength, const char *userId)
{
    CJson *data = CreateJson();//创建json对象
    if(peerConnDeviceId != NULL)
    {
        AddStringToJson(data, FIELD_PEER_CONN_DEVICE_ID, peerConnDeviceId);
    }  
    AddStringToJson(data, FIELD_SERVICE_PKG_NAME, pkgName);
    AddBoolToJson(data, FIELD_IS_DEVICE_LEVEL, level);
    if(groupId != NULL)
    {
        AddStringToJson(data, FIELD_GROUP_ID, groupId);
    }
    if(keyLength != 0)
    {
        AddIntToJson(data, FIELD_KEY_LENGTH, keyLength);
    }
    if(userId != NULL)
    {
        AddStringToJson(data, FIELD_USER_ID, userId);
    }
    g_tmpStr = PackJsonToString(data);
    FreeJson(data);
    return g_tmpStr;
}

int *AuthDeviceTest(int32_t osAccountId, int64_t requestId, const char *authParams, int code, int sockfd)
{
    g_operCode[requestId] = code;
    g_socketPool[requestId] = sockfd;
    LOGI("start AuthDevice ... requestId:%ld", requestId);
    int ret = g_gaInstance->authDevice(osAccountId, requestId, authParams, &g_gaCallback);
    double sleepTime = 1.0;
    WaitTime(sleepTime);
    // printf("%d\n", ret);
    // if (ret == 0) {
    //     g_testCondition.wait(&g_testCondition);
    // }
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    
    printf("auth end");
    return g_result;
}

int *ProcessAuthData(int64_t requestId, const char *data, int code, int sockfd)
{
    g_operCode[requestId] = code;
    g_socketPool[requestId] = sockfd;
    LOGI("start process auth data ...requestId:%ld", requestId);
    int ret = g_gaInstance->processData(requestId, (uint8_t *)data, strlen(data) + 1, &g_gaCallback);
    double sleepTime = 1.0;
    WaitTime(sleepTime);
    if (ret == 0) {
        g_testCondition.wait(&g_testCondition);
    }
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    printf("auth end");
    return g_result;
}

int *TestAuth(int32_t osAccountId, int64_t requestId, const char *authParams, int sockfd)
{
    int *ret = AuthDeviceTest(osAccountId, requestId, authParams, AUTH, sockfd);
    const char *serverData = RecvData(sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(serverData), serverData, AUTH, sockfd);
    serverData = RecvData(sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(serverData), serverData, AUTH, sockfd);
    double sleepTime = 1.0;
    WaitTime(sleepTime);
    return ret;
}

void ReturnFirstAuthMessage(int sockfd)
{
    const char *serverFirstMessage = "{\"authForm\":0,\"payload\":{\"salt\":\"870C7A62DE79F45BC7BE1922806F31D9\","
    "\"epk\":\"BAF848B091DA4FA319FF609CB1E70DD48337FE91CD7B3EE9EF27CA2884CD6A5E\",\"nonce\":\"B4CCECC8E23970986CC27"
    "BBD702D726301DF2AD6BC4823B0E16F999C1EFE0E06\",\"peerUserType\":0,\"challenge\":\"F1C921D1DDD3673BFABB0EB6294C3"
    "E60\",\"peerAuthId\":\"303034464230373734343533334630304537363345454242333139344639453138333938394141463135303"
    "24433433836463331323531393733434238463746\",\"version\":{\"minVersion\":\"1.0.0\","
    "\"currentVersion\":\"2.0.26\"}},\"message\":32785,\"groupAndModuleVersion\":\"2.0.1\",\"isDeviceLevel\":false}";
    SendData(sockfd, serverFirstMessage);
}

void ReturnSecondAuthMessage(int sockfd)
{
    const char *serverSecondMessage = "{\"authForm\":0,\"payload\":{\"kcfData\":\"26D3FC1F63492E415424F10D91DBD6E52"
    "DAEB2BFBA3DA87B7C6E16EF331092C1\",\"version\":{\"minVersion\":\"1.0.0\",\"currentVersion\":\"2.0.26\"}},"
    "\"message\":32786,\"groupAndModuleVersion\":\"2.0.1\"}";

    SendData(sockfd, serverSecondMessage);
}

void AuthAttack(int64_t requestId, const char *data, int code, int sockfd)
{
    g_operCode[requestId] = code;
    g_socketPool[requestId] = sockfd;
    LOGI("start process auth data ...");
    int ret = g_gaInstance->processData(requestId, (uint8_t *)data, strlen(data) + 1, &g_gaCallback);
    double sleepTime = 1.0;
    WaitTime(sleepTime);
    if (ret == 0) {
        g_testCondition.wait(&g_testCondition);
    }
}

// Test query function
void PrepareQueryData()
{
    InitTest(g_appName);
    const char *createParamsStr = "{\"groupType\":256,\"deviceId\":\"3C58C27533D8\",\""
                                  "groupVisibility\":-1,\"groupName\":\"P2PGroup\"}";
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName, createParamsStr);
    const char *createParamsStr1 = "{\"groupType\":256,\"deviceId\":\"3C58C27533D8\",\""
                                   "groupVisibility\":0,\"groupName\":\"P2PGroup1\"}";
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName, createParamsStr1);
    const char *createParamsStr2 = "{\"groupType\":256,\"deviceId\":\"3C58C27533D8\",\""
                                   "groupVisibility \":-1,\"groupName\":\"P2PGroup\"}";
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName1, createParamsStr2);
    DeInitTest();
}

int CompareInfo(char *groupVec, const char *key, const int index, const char *compareStr)
{
    LOGI("get groupId");
    printf("groupVec:%s\n",groupVec);
    if (strlen(groupVec) > 10){
        printf("1031\n");
        CJson *groupVecJson = CreateJsonFromString(groupVec);
        CJson *groupInfo = GetItemFromArray(groupVecJson, index);
        LOGI("print json");
        char *jsondata = cJSON_Print(groupInfo);
        printf("data:%s\n", jsondata);
        LOGI("get groupId from json");
        const char *groupId = GetStringFromJson(groupInfo, key);
        int ret;
        if (groupId != NULL) {
            ret = strcmp(groupId, compareStr);
            FreeJson(groupVecJson);
            return ret;
        } else {
            FreeJson(groupVecJson);
            return -1;
        }
    } else{
        return -1;
    }

}

int GetResultItemNum(char *groupVec)
{
    LOGI("get groupId");
    CJson *groupVecJson = CreateJsonFromString(groupVec);
    return GetItemNum(groupVecJson);
}

int CompareInfo1(char *groupVec, const char *key, const char *compareStr)
{
    LOGI("get groupId");
    CJson *groupVecJson = CreateJsonFromString(groupVec);
    LOGI("print json");
    // char *jsondata = cJSON_Print(groupVecJson);
    printf("data:%s\n", groupVec);
    LOGI("get groupId from json");
    const char *groupId = GetStringFromJson(groupVecJson, key);
    int ret;
    if (groupId != NULL) {
        ret = strcmp(groupId, compareStr);
        FreeJson(groupVecJson);
        return ret;
    } else {
        FreeJson(groupVecJson);
        return -1;
    }
}

void DestoryTest(char *returnInfo)
{
    g_gmInstance->destroyInfo(&returnInfo);
}

char *GetGroupInfoByIdTest(int32_t osAccountId, const char *appId, const char *groupId)
{
    char *returnGroupInfo = NULL;
    g_gmInstance->getGroupInfoById(osAccountId, appId, groupId, &returnGroupInfo);
    printf("groupInfo:%s", returnGroupInfo);
    return returnGroupInfo;
}

char *GetGroupInfoTest(int32_t osAccountId, const char *groupOwner, const char *queryParams)
{
    uint32_t num = 0;
    LOGI("start getGroupInfo");
    char *groupVec = NULL;
    g_gmInstance->getGroupInfo(osAccountId, groupOwner, queryParams, &groupVec, &num);
    return groupVec;
}

char *GetJoinedGroupsTest(int32_t osAccountId, const char *appId, int groupType)
{
    uint32_t num = 0;
    LOGI("start getJoinedGroups");
    char *groupVec = NULL;
    g_gmInstance->getJoinedGroups(osAccountId, appId, groupType, &groupVec, &num);
    return groupVec;
}

char *GetRelatedGroupsTest(int32_t osAccountId, const char *appId, const char *peerDeviceId)
{
    uint32_t num = 0;
    LOGI("start getRelatedGroups");
    char *groupVec = NULL;
    g_gmInstance->getRelatedGroups(osAccountId, appId, peerDeviceId, &groupVec, &num);
    return groupVec;
}

char *GetDeviceInfoByIdTest(int32_t osAccountId, const char *appId, const char *deviceId, const char *groupId)
{
    char *returnDeviceInfo = NULL;
    int res = g_gmInstance->getDeviceInfoById(osAccountId, appId, deviceId, groupId, &returnDeviceInfo);
    if (res == 0) {
        printf("[RESULT][GetDeviceInfoById]: SUCCESS\n");
        printf("Return device infos: %s\n", returnDeviceInfo);
    }
    return returnDeviceInfo;
}

uint32_t GetTrustedDevicesTest(int32_t osAccountId, const char *appId, const char *groupId)
{
    // sleep(3);
    char *returnDevices = NULL;
    uint32_t resultNum = 0;
    int res = g_gmInstance->getTrustedDevices(osAccountId, appId, groupId, &returnDevices, &resultNum);
    if (res == 0) {
        printf("[RESULT][GetTrustedDevices]: SUCCESS\n");
        printf("Return device infos: %s\n", returnDevices);
        printf("Devices count: %d\n", resultNum);
        g_gmInstance->destroyInfo(&returnDevices);
    }
    return resultNum;
}

bool IsDeviceInGroupTest(int32_t osAccountId, const char *appId, const char *groupId, const char *deviceId)
{
    return g_gmInstance->isDeviceInGroup(osAccountId, appId, groupId, deviceId);
}

int CheckAccessToGroupTest(int32_t osAccountId, const char *appId, const char *groupId)
{
    return g_gmInstance->checkAccessToGroup(osAccountId, appId, groupId);
}

















// void ServerReg1(int sockfd)
// {
//     DoubleCallBack(g_appName);
//     sleep(1);
//     CJson *json = CreateJson();
//     AddIntToJson(json, "opercode", REGREG);
//     char *sendData = PackJsonToString(json);
//     FreeJsonString(sendData);
//     SendData(sockfd, sendData);
//     FreeJson(json);
// }


int64_t GetReqIdFromData(const char *data)
{
    CJson *json = CreateJsonFromString(data);
    int64_t reqId = 10;
    GetInt64FromJson(json, REQUEST_ID, &reqId);
    FreeJson(json);
    return reqId;
}

int GetOperCodeFromData(const char *data)
{
    CJson *json = CreateJsonFromString(data);
    int code;
    GetIntFromJson(json, "opercode", &code);
    FreeJson(json);
    return code;
}

const char *GetMessageFromData(const char *data)
{
    CJson *json = CreateJsonFromString(data);
    const char *message = GetStringFromJson(json, "message");
    FreeJson(json);
    return message;
}

const char *GetGroupIdfromData(char *groupVec)
{
    LOGI("get groupId");
    if (strlen(groupVec) > 2){
        printf("data:%s\n", groupVec);
        CJson *groupVecJson = CreateJsonFromString(groupVec);
        CJson *groupInfo = GetItemFromArray(groupVecJson, 0);
        LOGI("print json");
        char *jsondata = cJSON_Print(groupInfo);
        printf("data:%s\n", jsondata);
        LOGI("get groupId from json");
        const char *groupId = GetStringFromJson(groupInfo, FIELD_GROUP_ID);
        // const char *tempGroupId[128] = "0";
        if (strcpy_s(g_tempGroupId, strlen(groupId) + 1, groupId) != 0) {
            printf("strcpy_s fail");
        }
        printf("groupId:%s\n", g_tempGroupId);
        FreeJson(groupVecJson);
        FreeJsonString(jsondata);
        printf("groupId:%s\n", g_tempGroupId);
        return g_tempGroupId;
    } else{
        return "null groupId";
    }
    
}

int GetErrorCode(const char *data)
{
    CJson *createParams = CreateJsonFromString(data);
    CJson *tmp = GetObjFromJson(createParams, "payload");
    int errorCode;
    if (tmp !=NULL)
    {
        GetIntFromJson(tmp, "errorCode", &errorCode);
    }else{
        GetIntFromJson(createParams, "errorCode", &errorCode);
    }
    
    FreeJson(createParams);
    return errorCode;
}

int GetErrorMsg(const char *data)
{
    CJson *createParams = CreateJsonFromString(data);
    int errorCode;
    GetIntFromJson(createParams, "groupErrorMsg", &errorCode);
    FreeJson(createParams);
    return errorCode;
}

const char *GetPeerDeviceId(int sockfd)
{
    if(g_peerDeviceId == NULL){
        CJson *json = CreateJson();
        AddIntToJson(json, "opercode", GETPEERDEVICEID);
        char *sendData = PackJsonToString(json);
        SendData(sockfd, sendData);
        FreeJson(json);
        FreeJsonString(sendData);
        const char *recvData = RecvData(sockfd);
        CJson *data = CreateJsonFromString(recvData);
        g_peerDeviceId = GetStringFromJson(data, "deviceId");
        // FreeJson(data);
    }
    return g_peerDeviceId;
}

void SendDeviceId(int sockfd)
{
    CJson *json = CreateJson();
    const char *deviceId = GetLocalDeviceId();
    AddStringToJson(json, "deviceId", deviceId);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJsonString(sendData);
}

const char *GetLocalDeviceId()
{
    char sysline[256];
    char bufps[1024];
    // const char *result = NULL;
    FILE *ptr = NULL;
    printf("get local device");
    if (sprintf_s(sysline, sizeof(sysline), "bm get -u") < 0) {
        printf("sprintf_s failed");
    }
    printf("res[%d]:%s :\n", (int)strlen(bufps), sysline);
    if ((ptr = popen(sysline, "r")) != NULL) {
        rewind(ptr);
        while (!feof(ptr)) {
            fgets(bufps, NUM1024, ptr);
            printf("%s", bufps);
        }
        pclose(ptr);
        ptr = NULL;
    } else {
        printf("popen %s error\n", sysline);
        return NULL;
    }
    if (bufps[strlen(bufps) - 1] == '\n') {
        bufps[strlen(bufps) - 1] = 0;
    }
    // if (strcpy_s(g_localDeviceId, strlen(bufps) + 1, bufps) != 0) {
    //     printf("strcpy_s fail");
    // }
    g_localDeviceId = bufps;
    printf("%s", g_localDeviceId);
    // result = bufps;
    return g_localDeviceId;
}

char *DeleteParams(const char *peerAuthId, const char *groupId, bool isForceDelete)
{
    CJson *json = CreateJson();
    AddStringToJson(json, FIELD_DELETE_ID, peerAuthId);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddBoolToJson(json, FIELD_IS_FORCE_DELETE, isForceDelete);
    g_tmpStr = PackJsonToString(json);
    FreeJson(json);
    return g_tmpStr;
}
int *DeleteMemberTest(int32_t osAccountId, int64_t requestId, const char *appId, const char *deleteParams, int sockfd)
{
    g_operCode[requestId] = 101;
    g_socketPool[requestId] = sockfd;
    LOGI("start process delete member ...");
    int ret = g_gmInstance->deleteMemberFromGroup(osAccountId, requestId, appId, deleteParams);
    double sleepTime = 1.0;
    WaitTime(sleepTime);
    if (ret == 0) {
        g_testCondition.wait(&g_testCondition);
    }
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    return g_result;
}

int *TestCoDelete(int32_t osAccountId, int64_t requestId, const char *appId, const char *deleteParams, int sockfd)
{
    int *ret = DeleteMemberTest(osAccountId, requestId, appId, deleteParams, sockfd);
    const char *serverData = RecvData(sockfd);
    ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, DELETE, sockfd);
    serverData = RecvData(sockfd);
    ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, DELETE, sockfd);
    serverData = RecvData(sockfd);
    ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, DELETE, sockfd);
    return ret;
}



void ReturnMessage(int sockfd)
{
    const char *tmp = "{\"opercode\":601}";
    SendData(sockfd, tmp);
}


// Single device testing account deviceauth 
const char *CreateReqJson(const char *version, const char *deviceId, const char *userId)
{
    CJson *json = CreateJson();
    printf("start to get register info\n");
    // AddStringToJson(json, FIELD_VERSION, version);
    AddStringToJson(json, "version", version);
    AddStringToJson(json, FIELD_DEVICE_ID, deviceId);
    AddStringToJson(json, FIELD_USER_ID, userId);
    AddIntToJson(json, "credentialType", 2);

    g_tmpStr = PackJsonToString(json);
    printf("reqJsonStr: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *TestGetRegisterInfo(const char *reqJsonStr)
{
    char *returnJsonStr = NULL;
    // printf("reqJsonStr: %s\n", reqJsonStr);
    int res = g_gmInstance->getRegisterInfo(reqJsonStr, &returnJsonStr);
    if (res == 0) {
        memcpy_s(g_pkInfoStr, 1024, 0, 1024);
        memcpy_s(g_pkInfoStr, 1024, returnJsonStr, strlen(returnJsonStr) + 1);
        printf("get register info success\nregister info: %s\n", returnJsonStr);
        g_gmInstance->destroyInfo(&returnJsonStr);
    } else {
        printf("get register info fail\nret: %d\n", res);
    }
    const char *pkInfoStr = g_pkInfoStr;
    return pkInfoStr;
}

const char *FixPkInfoStr(const char *pkInfoStr)
{
    CJson *json = CreateJsonFromString(pkInfoStr);
    AddStringToJson(json, FIELD_USER_ID, "123456");
    g_tmpStr = PackJsonToString(json);
    FreeJson(json);
    return g_tmpStr;
}

// static void SignPkInfo()
// {
//     Uint8Buff keyAliasTemp = {
//         (uint8_t *)SERVER_PUBLIC_KEY_ALIAS_TEMP,
//         (uint32_t)strlen(SERVER_PUBLIC_KEY_ALIAS_TEMP)
//     };
// }

const char *CreateAccoutCG(int64_t requestId, int osAccountId, const char *userId, const char *pkInfoStr)
{
    const char *keyAliasValue = "TestKeyPair";
    Uint8Buff keyAlias = {
        .val = (uint8_t *)keyAliasValue,
        .length = strlen(keyAliasValue) + 1
    };
    int ret = GetLoaderInstance()->checkKeyExist(&keyAlias);
    if (ret != HC_SUCCESS) {
        LOGI("Key pair not exist, start to generate");
        int32_t authId = 0;
        Uint8Buff authIdBuff = { (uint8_t *)&authId, sizeof(int32_t) };
        ExtraInfo extInfo = { authIdBuff, -1, -1 };
        ret = GetLoaderInstance()->generateKeyPairWithStorage(&keyAlias, 32, P256, KEY_PURPOSE_SIGN_VERIFY, &extInfo);
    } else {
        LOGI("Key pair already exists");
    }
    if (ret != HC_SUCCESS) {
        LOGE("Generate key pair failed");
        return "null";
    }
    uint8_t *serverPkVal = (uint8_t *)HcMalloc(SERVER_PK_SIZE, 0);
    Uint8Buff serverPk = {
        .val = serverPkVal,
        .length = SERVER_PK_SIZE
    };
    ret = GetLoaderInstance()->exportPublicKey(&keyAlias, &serverPk);
    if (ret != HC_SUCCESS) {
        LOGE("exportPublicKey failed");
        HcFree(serverPkVal);
        return "null";
    }
    // sign begin
    Uint8Buff messageBuff = {
        .val = (uint8_t *)pkInfoStr,
        .length = strlen(pkInfoStr) + 1
    };
    uint8_t *signatureValue = (uint8_t *)HcMalloc(SIGNATURE_SIZE, 0);
    Uint8Buff signature = {
        .val = signatureValue,
        .length = SIGNATURE_SIZE
    };
    int32_t result = GetLoaderInstance()->sign(&keyAlias, &messageBuff, P256, &signature, true);
    if (result != HC_SUCCESS) {
        LOGE("Sign pkInfo failed");
        HcFree(serverPkVal);
        HcFree(signatureValue);
        return "null";
    }
    //sign end
    CJson *json = CreateJson();
    AddIntToJson(json, FIELD_GROUP_TYPE, IDENTICAL_ACCOUNT_GROUP);
    AddStringToJson(json, FIELD_USER_ID, userId);
    printf("pkInfoStr: %s\n", pkInfoStr);
    LOGE("pkinfo length:%u", strlen(pkInfoStr));
    CJson *credJson = CreateJson();
    (void)AddByteToJson(credJson, "serverPk", serverPkVal, serverPk.length);
    (void)AddByteToJson(credJson, "pkInfoSignature", signatureValue, signature.length);
    CJson *pkInfoJson = CreateJsonFromString(pkInfoStr);
    (void)AddObjToJson(credJson, "pkInfo", pkInfoJson);
    FreeJson(pkInfoJson);
    (void)AddIntToJson(credJson, "credentialType", 2);
    char *credStr = PackJsonToString(credJson);
    printf("credentialStr: %s\n", credStr);
    (void)AddObjToJson(json, "credential", credJson);
    FreeJson(credJson);
    g_tmpStr = PackJsonToString(json);
    // printf("createParamsStr: %s\n", g_tmpStr);
    FreeJson(json);
    HcFree(serverPkVal);
    HcFree(signatureValue);
    FreeJsonString(credStr);
    return g_tmpStr;
}

const char *CreateCroAccoutCG(int64_t requestId, int osAccountId, const char *userId, const char *pkInfoStr)
{
    const char *keyAliasValue = "TestKeyPair";
    Uint8Buff keyAlias = {
        .val = (uint8_t *)keyAliasValue,
        .length = strlen(keyAliasValue) + 1
    };
    int ret = GetLoaderInstance()->checkKeyExist(&keyAlias);
    if (ret != HC_SUCCESS) {
        LOGI("Key pair not exist, start to generate");
        int32_t authId = 0;
        Uint8Buff authIdBuff = { (uint8_t *)&authId, sizeof(int32_t) };
        ExtraInfo extInfo = { authIdBuff, -1, -1 };
        ret = GetLoaderInstance()->generateKeyPairWithStorage(&keyAlias, 32, P256, KEY_PURPOSE_SIGN_VERIFY, &extInfo);
    } else {
        LOGI("Key pair already exists");
    }
    if (ret != HC_SUCCESS) {
        LOGE("Generate key pair failed");
        return "null";
    }
    uint8_t *serverPkVal = (uint8_t *)HcMalloc(SERVER_PK_SIZE, 0);
    Uint8Buff serverPk = {
        .val = serverPkVal,
        .length = SERVER_PK_SIZE
    };
    ret = GetLoaderInstance()->exportPublicKey(&keyAlias, &serverPk);
    if (ret != HC_SUCCESS) {
        LOGE("exportPublicKey failed");
        HcFree(serverPkVal);
        return "null";
    }
    // sign begin
    Uint8Buff messageBuff = {
        .val = (uint8_t *)pkInfoStr,
        .length = strlen(pkInfoStr) + 1
    };
    uint8_t *signatureValue = (uint8_t *)HcMalloc(SIGNATURE_SIZE, 0);
    Uint8Buff signature = {
        .val = signatureValue,
        .length = SIGNATURE_SIZE
    };
    int32_t result = GetLoaderInstance()->sign(&keyAlias, &messageBuff, P256, &signature, true);
    if (result != HC_SUCCESS) {
        LOGE("Sign pkInfo failed");
        HcFree(serverPkVal);
        HcFree(signatureValue);
        return "null";
    }
    //sign end
    CJson *json = CreateJson();
    AddIntToJson(json, FIELD_GROUP_TYPE, IDENTICAL_ACCOUNT_GROUP);
    AddStringToJson(json, FIELD_USER_ID, userId);
    printf("pkInfoStr: %s\n", pkInfoStr);
    LOGE("pkinfo length:%u", strlen(pkInfoStr));

    // 封装同账号数据
    CJson *credJson = CreateJson();
    (void)AddByteToJson(credJson, "serverPk", serverPkVal, serverPk.length);
    (void)AddByteToJson(credJson, "pkInfoSignature", signatureValue, signature.length);
    CJson *pkInfoJson = CreateJsonFromString(pkInfoStr);
    (void)AddObjToJson(credJson, "pkInfo", pkInfoJson);
    FreeJson(pkInfoJson);
    (void)AddIntToJson(credJson, "credentialType", 2);
    char *credStr = PackJsonToString(credJson);
    printf("credentialStr: %s\n", credStr);
    (void)AddObjToJson(json, "credential", credJson);
    
    g_tmpStr = PackJsonToString(json);

    // 封装跨账号数据
    // const char *baseInfo = "{\"deviceList\":["
    // "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
    // "\"credential\":{\"TmpServerSignedInfo\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004638BCF778DEE"
    // "24111AB15D2D4DC6A5194B781193E1855BFF681528C985539D489A5BE709120C949D8C6750D42F3A34D98DB329701D3D2A84EF64B0B7F2FAC18E\","
    // "\"pkInfoSignature\":\"30450220373702022CDBEE6E072F18ABC960B80D8E3E5EEA3E6B17D00123BC624E10194E022100A9788F2E5F48B8CEE163"
    // "52BE0ECFD01EC4B307362274C5B199542CBD1451DF3A\"},\"credentialType\":2}},"

    const char *baseInfo = "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\"}";
    printf("1\n");
    CJson *credentialJson = CreateJsonFromString(baseInfo);
    AddObjToJson(credentialJson, "credential", credJson);
    CJson *deviceList = CreateJsonArray();
    AddObjToArray(deviceList, credentialJson);
    CJson *mutliData = CreateJson();
    AddObjToJson(mutliData, "deviceList", deviceList);
    AddStringToJson(mutliData, "udid", "devB");
    g_croPK = PackJsonToString(mutliData);
    FreeJson(credJson);
    FreeJson(credentialJson);
    // FreeJson(deviceList);
    FreeJson(mutliData);
    FreeJson(json);
    HcFree(serverPkVal);
    HcFree(signatureValue);
    FreeJsonString(credStr);
    return g_tmpStr;
}

const char *GetCroPKInfo(const char *groupId, int groupType)
{
    const char *tempStr = CreateImportData(g_croPK, groupId, groupType);
    return tempStr;
}

const char *CreateAccoutPK(int64_t requestId, int osAccountId, const char *userId, const char *pkInfoStr)
{
    const char *keyAliasValue = "TestKeyPair";
    Uint8Buff keyAlias = {
        .val = (uint8_t *)keyAliasValue,
        .length = strlen(keyAliasValue) + 1
    };
    int ret = GetLoaderInstance()->checkKeyExist(&keyAlias);
    if (ret != HC_SUCCESS) {
        LOGI("Key pair not exist, start to generate");
        int32_t authId = 0;
        Uint8Buff authIdBuff = { (uint8_t *)&authId, sizeof(int32_t) };
        ExtraInfo extInfo = { authIdBuff, -1, -1 };
        ret = GetLoaderInstance()->generateKeyPairWithStorage(&keyAlias, 32, P256, KEY_PURPOSE_SIGN_VERIFY, &extInfo);
    } else {
        LOGI("Key pair already exists");
    }
    if (ret != HC_SUCCESS) {
        LOGE("Generate key pair failed");
        return "null";
    }
    uint8_t *serverPkVal = (uint8_t *)HcMalloc(SERVER_PK_SIZE, 0);
    Uint8Buff serverPk = {
        .val = serverPkVal,
        .length = SERVER_PK_SIZE
    };
    ret = GetLoaderInstance()->exportPublicKey(&keyAlias, &serverPk);
    if (ret != HC_SUCCESS) {
        LOGE("exportPublicKey failed");
        HcFree(serverPkVal);
        return "null";
    }
    // sign begin
    Uint8Buff messageBuff = {
        .val = (uint8_t *)pkInfoStr,
        .length = strlen(pkInfoStr) + 1
    };
    uint8_t *signatureValue = (uint8_t *)HcMalloc(SIGNATURE_SIZE, 0);
    Uint8Buff signature = {
        .val = signatureValue,
        .length = SIGNATURE_SIZE
    };
    int32_t result = GetLoaderInstance()->sign(&keyAlias, &messageBuff, P256, &signature, true);
    if (result != HC_SUCCESS) {
        LOGE("Sign pkInfo failed");
        HcFree(serverPkVal);
        HcFree(signatureValue);
        return "null";
    }
    //sign end
    CJson *json = CreateJson();
    AddIntToJson(json, FIELD_GROUP_TYPE, IDENTICAL_ACCOUNT_GROUP);
    AddStringToJson(json, FIELD_USER_ID, userId);
    printf("pkInfoStr: %s\n", pkInfoStr);
    LOGE("pkinfo length:%u", strlen(pkInfoStr));
    CJson *credJson = CreateJson();

    serverPkVal = (uint8_t *)"1234567";
    (void)AddByteToJson(credJson, "serverPk", serverPkVal, serverPk.length);
    (void)AddByteToJson(credJson, "pkInfoSignature", signatureValue, signature.length);
    CJson *pkInfoJson = CreateJsonFromString(pkInfoStr);
    (void)AddObjToJson(credJson, "pkInfo", pkInfoJson);
    FreeJson(pkInfoJson);
    (void)AddIntToJson(credJson, "credentialType", 2);
    char *credStr = PackJsonToString(credJson);
    printf("credentialStr: %s\n", credStr);
    (void)AddObjToJson(json, "credential", credJson);
    FreeJson(credJson);
    g_tmpStr = PackJsonToString(json);
    // printf("createParamsStr: %s\n", g_tmpStr);
    FreeJson(json);
    // HcFree(serverPkVal);
    HcFree(signatureValue);
    FreeJsonString(credStr);
    return g_tmpStr;
}

const char *CreateAccoutError(int64_t requestId, int osAccountId, const char *userId, const char *pkInfoStr)
{
    const char *keyAliasValue = "TestKeyPair";
    Uint8Buff keyAlias = {
        .val = (uint8_t *)keyAliasValue,
        .length = strlen(keyAliasValue) + 1
    };
    int ret = GetLoaderInstance()->checkKeyExist(&keyAlias);
    if (ret != HC_SUCCESS) {
        LOGI("Key pair not exist, start to generate");
        int32_t authId = 0;
        Uint8Buff authIdBuff = { (uint8_t *)&authId, sizeof(int32_t) };
        ExtraInfo extInfo = { authIdBuff, -1, -1 };
        ret = GetLoaderInstance()->generateKeyPairWithStorage(&keyAlias, 32, P256, KEY_PURPOSE_SIGN_VERIFY, &extInfo);
    } else {
        LOGI("Key pair already exists");
    }
    if (ret != HC_SUCCESS) {
        LOGE("Generate key pair failed");
        return "null";
    }
    uint8_t *serverPkVal = (uint8_t *)HcMalloc(SERVER_PK_SIZE, 0);
    Uint8Buff serverPk = {
        .val = serverPkVal,
        .length = SERVER_PK_SIZE
    };
    ret = GetLoaderInstance()->exportPublicKey(&keyAlias, &serverPk);
    if (ret != HC_SUCCESS) {
        LOGE("exportPublicKey failed");
        HcFree(serverPkVal);
        return "null";
    }
    // sign begin
    Uint8Buff messageBuff = {
        .val = (uint8_t *)pkInfoStr,
        .length = strlen(pkInfoStr) + 1
    };
    uint8_t *signatureValue = (uint8_t *)HcMalloc(SIGNATURE_SIZE, 0);
    Uint8Buff signature = {
        .val = signatureValue,
        .length = SIGNATURE_SIZE
    };
    int32_t result = GetLoaderInstance()->sign(&keyAlias, &messageBuff, P256, &signature, true);
    if (result != HC_SUCCESS) {
        LOGE("Sign pkInfo failed");
        HcFree(serverPkVal);
        HcFree(signatureValue);
        return "null";
    }
    //sign end
    CJson *json = CreateJson();
    AddIntToJson(json, FIELD_GROUP_TYPE, IDENTICAL_ACCOUNT_GROUP);
    AddStringToJson(json, FIELD_USER_ID, userId);
    printf("pkInfoStr: %s\n", pkInfoStr);
    LOGE("pkinfo length:%u", strlen(pkInfoStr));
    CJson *credJson = CreateJson();
    (void)AddByteToJson(credJson, "serverPk", serverPkVal, serverPk.length);
    (void)AddByteToJson(credJson, "pkInfoSignature", signatureValue, signature.length);

    (void)AddIntToJson(credJson, "credentialType", 2);
    char *credStr = PackJsonToString(credJson);
    printf("credentialStr: %s\n", credStr);
    (void)AddObjToJson(json, "credential", credJson);
    FreeJson(credJson);
    g_tmpStr = PackJsonToString(json);

    FreeJson(json);
    HcFree(serverPkVal);
    HcFree(signatureValue);
    FreeJsonString(credStr);
    return g_tmpStr;
}

const char *CreateDiffAccoutCG(int64_t requestId, const char * userId, const char *peerUserId)
{
    CJson *json = CreateJson();
    // const char *baseInfo = "{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"1234567812345678123456781234567812345678123456781234567812345678\"}";
    // AddStringToJson(json, "credential", baseInfo);
    AddIntToJson(json, FIELD_GROUP_TYPE, ACROSS_ACCOUNT_AUTHORIZE_GROUP);
    AddStringToJson(json, FIELD_USER_ID, userId);
    AddStringToJson(json, FIELD_PEER_USER_ID, peerUserId);
    g_tmpStr = PackJsonToString(json);
    printf("createParamsStr: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreatAsyCroAccount(int sockfd, const char *deviceId)
{
    const char *queryAccParams = "{\"groupType\":1,\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryAccParams);
    const char *groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    // 在用户空间1创建user2的同账号群组
    // deviceId = GetLocalDeviceId();
    const char *reqJsonStr = CreateReqJson(g_version, GetLocalDeviceId(), g_userId2);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId2, pkInfoStr);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    // 在用户空间1创建user1的跨账号群组
    accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId2, g_userId1);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryCroParams);
    groupId = GetGroupIdfromData(groupInfo);
    // 通知对端创建跨账号群组
    accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId1, g_userId2);
    ToServerCreateGroup(sockfd, accoutGroup);
    return groupId;
}

const char *CreateSymmCroAcount(int sockfd, const char *groupId, const char *info)
{
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId1, g_userId2);
    ToServerCreateGroup(sockfd, accoutGroup);
    // 重置本端凭据
    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    g_localDeviceId = GetLocalDeviceId();
    const char *clientCredential = CreateLocalCred(info, g_localDeviceId);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,clientCredential);
    accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId2, g_userId1);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);

    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryCroParams);
    const char *groupId1 = GetGroupIdfromData(groupInfo);
    return groupId1;
}
static char *GaOnRequestIdenticalAuth(int64_t requestId, int operationCode, const char *reqParams)
{
    printf("\n----------------GaOnRequestIdenticalAuth---------------\n");
    printf("|  RequestId: %-29d  |\n", (int)requestId);
    printf("|  OperationCode: %-25d  |\n", operationCode);
    printf("|  reqParams:  %s  |\n", (char *)reqParams);
    printf("\n----------------GaOnRequestIdenticalAuth---------------\n");
    CJson *json = CreateJson();
    // int confirm = REQUEST_ACCEPTED;
    AddIntToJson(json, FIELD_CONFIRMATION, 1);
    AddIntToJson(json, FIELD_OS_ACCOUNT_ID, 100);
    AddStringToJson(json, FIELD_SERVICE_PKG_NAME, g_appName);
    AddStringToJson(json, FIELD_PEER_CONN_DEVICE_ID, "udid1");
    char *returnDataStr = PackJsonToString(json);
    FreeJson(json);
    return returnDataStr;
}

static bool GaOnTransmitLocal(int64_t requestId, const uint8_t *data, uint32_t dataLen)
{
    printf("\n----------------GaOnTransmitLocal---------------\n");
    printf("|  RequestId: %-29d  |\n", (int)requestId);
    printf("|  SendData:  %s  |\n", (char *)data);
    printf("\n----------------GaOnTransmitLocal---------------\n");
    memset_s(g_data, BUFFER_SIZE, 0, BUFFER_SIZE);
    strcpy_s(g_data, dataLen, (char *)data);
    return true;
}

// 初始化单设备模拟gaCallback
int *LocalAccountAuth(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams)
{
    DeviceAuthCallback gaCallbackIdentical;
    gaCallbackIdentical.onRequest = GaOnRequestIdenticalAuth;
    gaCallbackIdentical.onError = OnError;
    gaCallbackIdentical.onFinish = OnFinish;
    gaCallbackIdentical.onSessionKeyReturned = OnSessionKeyReturned;
    gaCallbackIdentical.onTransmit = GaOnTransmitLocal;
    
    int ret = g_gaInstance->authDevice(osAccountId, clientReqId, authParams, &gaCallbackIdentical);
    sleep(2);
    ret = g_gaInstance->processData(serverReqId, (const uint8_t *)g_data, (uint32_t)strlen(g_data) + 1, &gaCallbackIdentical);
    sleep(2);
    ret = g_gaInstance->processData(clientReqId, (const uint8_t *)g_data, (uint32_t)strlen(g_data) + 1, &gaCallbackIdentical);
    sleep(2);
    ret = g_gaInstance->processData(serverReqId, (const uint8_t *)g_data, (uint32_t)strlen(g_data) + 1, &gaCallbackIdentical);
    sleep(2);
    ret = g_gaInstance->processData(clientReqId, (const uint8_t *)g_data, (uint32_t)strlen(g_data) + 1, &gaCallbackIdentical);
    sleep(2);
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    printf("auth end");
    return g_result;
}

int *LocalAccountClientDup(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams)
{
    DeviceAuthCallback gaCallbackIdentical;
    gaCallbackIdentical.onRequest = GaOnRequestIdenticalAuth;
    gaCallbackIdentical.onError = OnError;
    gaCallbackIdentical.onFinish = OnFinish;
    gaCallbackIdentical.onSessionKeyReturned = OnSessionKeyReturned;
    gaCallbackIdentical.onTransmit = GaOnTransmitLocal;
    
    // client 1
    char clientFirst[BUFFER_SIZE] = "{\"supportedVersion\":\"1\",\"authForm\":1,\"userId\":\"123456\",\"step\":48,\"deviceId\":\"3CC8BEEABE527FE1DA9CD5E086D8E2A3A79F1D92611BADCFD47DA4C18CBCC877\",\"devId\":\"null\",\"data\":{\"authKeyAlgEncode\":0,\"authPkInfo\":\"{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D030107034200046C77C69CCCA07ACF505134FAEB7EF143F5E9262C27D0DC22F1822B04E5B049F7EF58CD7C4D34686A1BBADD190B286B1952885DC7C54D9B0FEE84AB88FAD0509E\",\"userId\":\"123456\",\"deviceId\":\"null\",\"version\":\"null\"}\",\"authPkInfoSign\":\"30450220023A5D8EEAD2288FAFAAAA3A9BAB52056A382258B27D02D45A18B88AE66E0598022100D48EEB061DB7249AF47448EDEA66C43EAEC1B8DFB9A54C4331EE154705ECAD21\"},\"groupAndModuleVersion\":\"2.0.17\",\"isDeviceLevel\":false}";
    // client 2
    char clientSecond[BUFFER_SIZE] = "{\"authForm\":1,\"step\":50,\"data\":{\"kcfData\":\"75809EA611ECC825F51E22261C5416322C46B75F7FB60B5E490869E1692077C1\",\"deviceId\":\"3CC8BEEABE527FE1DA9CD5E086D8E2A3A79F1D92611BADCFD47DA4C18CBCC877\",\"epk\":\"C1800D6D487E7AD9C2411AD48140AD41E1ADDD277B2910EBF91C7AA719348EA6A6CD67BF1E3F87E31023615D73F2F0AD48580B9CB9129D64135E89DDB8E42884\"},\"groupAndModuleVersion\":\"2.0.17\",\"isDeviceLevel\":false}";

    int ret = g_gaInstance->processData(serverReqId, (const uint8_t *)clientFirst, (uint32_t)strlen(clientFirst) + 1, &gaCallbackIdentical);
    sleep(2);
    ret = g_gaInstance->processData(serverReqId, (const uint8_t *)clientSecond, (uint32_t)strlen(clientSecond) + 1, &gaCallbackIdentical);
    sleep(2);
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    printf("auth end");
    return g_result;
}

int *LocalAccountServerDup(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams)
{
    DeviceAuthCallback gaCallbackIdentical;
    gaCallbackIdentical.onRequest = GaOnRequestIdenticalAuth;
    gaCallbackIdentical.onError = OnError;
    gaCallbackIdentical.onFinish = OnFinish;
    gaCallbackIdentical.onSessionKeyReturned = OnSessionKeyReturned;
    gaCallbackIdentical.onTransmit = GaOnTransmitLocal;
    
    // server 1
    char serverFirst[BUFFER_SIZE] = "{\"supportedVersion\":\"1\",\"userId\":\"123456\",\"step\":49,\"deviceId\":\"3CC8BEEABE527FE1DA9CD5E086D8E2A3A79F1D92611BADCFD47DA4C18CBCC877\",\"authForm\":1,\"devId\":\"null\",\"data\":{\"authKeyAlgEncode\":0,\"authPkInfo\":\"{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D030107034200046C77C69CCCA07ACF505134FAEB7EF143F5E9262C27D0DC22F1822B04E5B049F7EF58CD7C4D34686A1BBADD190B286B1952885DC7C54D9B0FEE84AB88FAD0509E\",\"userId\":\"123456\",\"deviceId\":\"null\",\"version\":\"null\"}\",\"authPkInfoSign\":\"30450220023A5D8EEAD2288FAFAAAA3A9BAB52056A382258B27D02D45A18B88AE66E0598022100D48EEB061DB7249AF47448EDEA66C43EAEC1B8DFB9A54C4331EE154705ECAD21\",\"epk\":\"0D6D8B5C6745B1C48989BE7E597280F05BC0FACC6AC7116D78C78095235F979B4E71AAD381F92F0E4A5D6BDDF678953BCA264300F3A33069C2F49F9A157F4F32\",\"salt\":\"98208FE16FB539998E65DB8595A11D2E\"},\"groupAndModuleVersion\":\"2.0.17\",\"isDeviceLevel\":false}";
    // server 2
    char serverSecond[BUFFER_SIZE] = "{\"authForm\":1,\"step\":51,\"data\":{\"kcfData\":\"A662EC75CC8E371625EBEEDF9FB35728EF96321E7D1FA052AB3199883DEB3C62\"},\"groupAndModuleVersion\":\"2.0.17\"}";

    int ret = g_gaInstance->authDevice(osAccountId, clientReqId, authParams, &gaCallbackIdentical);
    sleep(2);
    ret = g_gaInstance->processData(clientReqId, (const uint8_t *)serverFirst, (uint32_t)strlen(serverFirst) + 1, &gaCallbackIdentical);
    sleep(2);
    ret = g_gaInstance->processData(clientReqId, (const uint8_t *)serverSecond, (uint32_t)strlen(serverSecond) + 1, &gaCallbackIdentical);
    sleep(2);
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    printf("auth end");
    return g_result;
}

int *LocalClientSame(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams)
{
    DeviceAuthCallback gaCallbackIdentical;
    gaCallbackIdentical.onRequest = GaOnRequestIdenticalAuth;
    gaCallbackIdentical.onError = OnError;
    gaCallbackIdentical.onFinish = OnFinish;
    gaCallbackIdentical.onSessionKeyReturned = OnSessionKeyReturned;
    gaCallbackIdentical.onTransmit = GaOnTransmitLocal;
    

    int ret = g_gaInstance->authDevice(osAccountId, clientReqId, authParams, &gaCallbackIdentical);
    sleep(2);
    char sameMessage[BUFFER_SIZE] = {0};
    memset_s(sameMessage, BUFFER_SIZE, 0, BUFFER_SIZE);
    strcpy_s(sameMessage, strlen(g_data) + 1, g_data);
    LOGI("LocalClientSame\n");
    printf("sameMessage:%s\n", sameMessage);
    ret = g_gaInstance->processData(serverReqId, (const uint8_t *)g_data, (uint32_t)strlen(g_data) + 1, &gaCallbackIdentical);
    sleep(2);
    printf("sameMessage:%s\n", sameMessage);
    ret = g_gaInstance->processData(serverReqId, (const uint8_t *)sameMessage, (uint32_t)strlen(sameMessage) + 1, &gaCallbackIdentical);
    sleep(2);

    g_result[0] = ret;
    g_result[2] = g_messageCode;
    printf("auth end");
    return g_result;
}

int *LocalServerSame(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams)
{
    DeviceAuthCallback gaCallbackIdentical;
    gaCallbackIdentical.onRequest = GaOnRequestIdenticalAuth;
    gaCallbackIdentical.onError = OnError;
    gaCallbackIdentical.onFinish = OnFinish;
    gaCallbackIdentical.onSessionKeyReturned = OnSessionKeyReturned;
    gaCallbackIdentical.onTransmit = GaOnTransmitLocal;
    
    int ret = g_gaInstance->authDevice(osAccountId, clientReqId, authParams, &gaCallbackIdentical);
    sleep(2);
    ret = g_gaInstance->processData(serverReqId, (const uint8_t *)g_data, (uint32_t)strlen(g_data) + 1, &gaCallbackIdentical);
    sleep(2);
    char sameMessage[BUFFER_SIZE] = {0};
    memset_s(sameMessage, BUFFER_SIZE, 0, BUFFER_SIZE);
    strcpy_s(sameMessage, strlen(g_data) + 1, g_data);

    ret = g_gaInstance->processData(clientReqId, (const uint8_t *)g_data, (uint32_t)strlen(g_data) + 1, &gaCallbackIdentical);
    sleep(2);

    ret = g_gaInstance->processData(clientReqId, (const uint8_t *)g_data, (uint32_t)strlen(g_data) + 1, &gaCallbackIdentical);
    sleep(2);
    g_result[0] = ret;
    g_result[2] = g_messageCode;
    printf("auth end");
    return g_result;
}

const char *CreateLocalCred(const char *baseInfo, const char *deviceId)
{
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_DEVICE_ID, deviceId);
    g_tmpStr = PackJsonToString(json);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateSymmInfo(const char *info1, const char *info2, const char *groupId, int groupType)
{ 
    CJson *device1 = CreateJsonFromString(info1);
    if (g_peerDeviceId != NULL)
    {
        AddStringToJson(device1, FIELD_UDID, g_peerDeviceId);
        AddStringToJson(device1, FIELD_DEVICE_ID, g_peerDeviceId);
    } else{
        AddStringToJson(device1, FIELD_UDID, "devB");
        AddStringToJson(device1, FIELD_DEVICE_ID, "devB");
    }
    
    CJson *device2 = CreateJsonFromString(info2);
    // [{},{}]
    CJson *deviceList = CreateJsonArray();
    AddObjToArray(deviceList, device1);
    AddObjToArray(deviceList, device2);

    // {deviceList:[]}
    CJson *json = CreateJson();
    AddObjToJson(json, FIELD_DEVICE_LIST, deviceList);
    AddStringToJson(json, FIELD_UDID, "devB"); // 待删除

    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    printf("1\n");
    FreeJson(deviceList);
    return g_tmpStr;
}

const char *CreateSymmCroInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"deviceList\":["
    "{\"udid\":\"EB436BFFEC2E0DF8065865DCE7620A33C6CCC1FF505F5B6B6FE388D640D70546\",\"deviceId\":\"EB436BFFEC2E0DF8065865DCE7620A33C6CCC1FF505F5B6B6FE388D640D70546\",\"userId\":\"2222222222222222222222222222222222222222222222222222222222222222\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"554869710F869256197A57BC57A3320032632D7741F66C84FEA3E4D3D55923F0\"}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"2222222222222222222222222222222222222222222222222222222222222222\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341233\"}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateAsymmInfo(const char *groupId, int groupType)
{   
    const char *baseInfo = "{\"udid\":\"devB\",\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":2,\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D030107034200041971364D21CB"
    "6EC3BB4EBCD67603A2230FF1AAE7545ED2080DD38E14B106DC40F45E37E71B1128D54396D899F7C2ADC277476FF6738CED2725085FDB256958EB\","
    "\"pkInfoSignature\":\"3046022100AF98D6A5812B8A5C14C3BD6B3642F22941F2E0BCE50CAE249ADDA5FCE702A033022100FA70C5795AB944F6"
    "DB1FCAA860ACC4B1876D0C01D2DDFDC08ACBB2467434F072\",\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D0"
    "301070342000470C804C2D1D805CD063E5C2AC62D0AAFE65DC6F2E2771A7B18CCC5631EC238333666F211DBDE62139FC38CB1D5AD8738AAD9426E3B"
    "8009BF87A51FD2216A5E7A\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"deviceId\":\"devB\",\"version\":\"1.0.0\"}}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004FD065BECA2B0116C81F534389A1F7F504F"
    "616C3ECDFF83AE36A6A509F07B470B72440B5213FCF8EA461547150B2DB5C7BBFBE581B1D5A734939782C7A07567EE\","
    "\"pkInfoSignature\":\"3046022100DAC381E355560D2AA13017C7D01D5637F5EED24A1861841AB3CB8EC727AC17FF022100E0B37CD275421B70C"
    "7D81B3C91C34614EFB0A6ADBC04A664B628F282B2A3BE8A\",\"credentialType\":2,\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3"
    "D020106082A8648CE3D03010703420004E0B675367CCC32EAC7DB7DAD769C1C901BAC887DF8041119CE3A8DDBC580CDAC3017045EBE8D61BF87A79F"
    "2990EE24056FA1E00070FF935F417342903446D96B\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"deviceId\":\"devC\",\"version\":\"1.0.0\"}}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateAsymmCroInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"udid\":\"devB\",\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
    "\"credential\":{\"credentialType\":2,\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004FD065BECA2B011"
    "6C81F534389A1F7F504F616C3ECDFF83AE36A6A509F07B470B72440B5213FCF8EA461547150B2DB5C7BBFBE581B1D5A734939782C7A07567EE\","
    "\"pkInfoSignature\":\"3046022100CF3E24AFFD44BBEC689CA2834E08E7D8C04090780B3C0A4D6FB6A3A1885550BA022100B0D239737D8036938"
    "97B7D7F3BC8A59FB27E868176F268AC9D1C3A8C658217C3\",\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D03"
    "010703420004129EB615B423DE45874CFC10F9536AD8336A4315AA20C6099FA113627A95358E1F134931CC38327F80E568F2912E3D3E3EB489D6C54"
    "3682D5E26BF2283307E3D\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\",\"deviceId\":\"devB\",\"version\":\"1.0.0\"}}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
    "\"credential\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004FD065BECA2B0116C81F534389A1F7F504F"
    "616C3ECDFF83AE36A6A509F07B470B72440B5213FCF8EA461547150B2DB5C7BBFBE581B1D5A734939782C7A07567EE\","
    "\"pkInfoSignature\":\"304602210088637776231DFD866A9898EC25C990C437EE10159BE3CC747F40BB0D459C2D93022100B73B53DC0F8285E20"
    "36FD962E4589B2BC2F81FF25C7FAE87A3E299CD0B3E8ACF\",\"credentialType\":2,\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3"
    "D020106082A8648CE3D03010703420004E0B675367CCC32EAC7DB7DAD769C1C901BAC887DF8041119CE3A8DDBC580CDAC3017045EBE8D61BF87A79F"
    "2990EE24056FA1E00070FF935F417342903446D96B\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\",\"deviceId\":\"devC\",\"version\":\"1.0.0\"}}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateMixInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"udid\":\"devB\",\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":2,\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D030107034200041971364D21CB"
    "6EC3BB4EBCD67603A2230FF1AAE7545ED2080DD38E14B106DC40F45E37E71B1128D54396D899F7C2ADC277476FF6738CED2725085FDB256958EB\","
    "\"pkInfoSignature\":\"3046022100AF98D6A5812B8A5C14C3BD6B3642F22941F2E0BCE50CAE249ADDA5FCE702A033022100FA70C5795AB944F6"
    "DB1FCAA860ACC4B1876D0C01D2DDFDC08ACBB2467434F072\",\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D0"
    "301070342000470C804C2D1D805CD063E5C2AC62D0AAFE65DC6F2E2771A7B18CCC5631EC238333666F211DBDE62139FC38CB1D5AD8738AAD9426E3B"
    "8009BF87A51FD2216A5E7A\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"deviceId\":\"devB\",\"version\":\"1.0.0\"}}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004FD065BECA2B0116C81F534389A1F7F504F"
    "616C3ECDFF83AE36A6A509F07B470B72440B5213FCF8EA461547150B2DB5C7BBFBE581B1D5A734939782C7A07567EE\","
    "\"pkInfoSignature\":\"3046022100DAC381E355560D2AA13017C7D01D5637F5EED24A1861841AB3CB8EC727AC17FF022100E0B37CD275421B70C"
    "7D81B3C91C34614EFB0A6ADBC04A664B628F282B2A3BE8A\",\"credentialType\":2,\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3"
    "D020106082A8648CE3D03010703420004E0B675367CCC32EAC7DB7DAD769C1C901BAC887DF8041119CE3A8DDBC580CDAC3017045EBE8D61BF87A79F"
    "2990EE24056FA1E00070FF935F417342903446D96B\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"deviceId\":\"devC\",\"version\":\"1.0.0\"}}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateSymmErrorInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"udid\":\"devB\",\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":2,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateAsymmErrorInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"udid\":\"devB\",\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"TmpServerSignedInfo\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004638BCF778DEE"
    "24111AB15D2D4DC6A5194B781193E1855BFF681528C985539D489A5BE709120C949D8C6750D42F3A34D98DB329701D3D2A84EF64B0B7F2FAC18E\","
    "\"pkInfoSignature\":\"3045022100B6B308521E75B38CADC9F74E9D0A40FE382C71DB6939E8918202C09D8757AFB3022045D2BC8E9B8D27423C80E96"
    "E474A1B0F0F172EFDD70CA0C5760338C902DC0837\"},\"credentialType\":1}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateAsymmErrorPKInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"udid\":\"devB\",\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":2,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateSymmLocalInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"udid\":\"devB\",\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":2,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateSymmMaxInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"udid\":\"devB\",\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":2,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
    "]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;
}

const char *CreateImportData(const char *baseInfo, const char *groupId, int groupType)
{
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    char *tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", tmpStr);
    FreeJson(json);
    return tmpStr;
}

int *addMultiMembersTest(int32_t osAccountId, const char *appId, const char *addParams)
{
    LOGI("start addMultiMembersToGroup ...");
    int ret = g_gmInstance->addMultiMembersToGroup(osAccountId, appId, addParams);
    g_result[0] = g_operationCode;
    g_result[1] = g_errorCode;
    g_result[2] = g_messageCode;
    g_result[3] = ret;
    printf("%d", g_result[3]);
    return g_result;
}

const char *DelSymmInfo(const char *groupId, int groupType)
{
    const char *baseInfo = "{\"deviceList\":["
    "{\"udid\":\"devB\",\"deviceId\":\"devB\"},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\"}]}";
    CJson *json = CreateJsonFromString(baseInfo);
    AddStringToJson(json, FIELD_GROUP_ID, groupId);
    AddIntToJson(json, FIELD_GROUP_TYPE, groupType);
    g_tmpStr = PackJsonToString(json);
    printf("CreateSymmInfo: %s\n", g_tmpStr);
    FreeJson(json);
    return g_tmpStr;

}

int *delMultiMembersTest(int32_t osAccountId, const char *appId, const char *deleteParams)
{
    LOGI("start delMultiMembersFromGroup ...");
    int ret = g_gmInstance->delMultiMembersFromGroup(osAccountId, appId, deleteParams);
    g_result[0] = g_operationCode;
    g_result[1] = g_errorCode;
    g_result[2] = g_messageCode;
    g_result[3] = ret;
    printf("%d", g_result[3]);
    return g_result;
}

const char *ToGetServerPK(int sockfd)
{
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", GETSERVERPK);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJsonString(sendData);
    const char *recvData = RecvData(sockfd);
    return recvData;
}

void GetServerPK(int sockfd)
{
    const char *deviceId = GetLocalDeviceId();
    const char *reqJsonStr = CreateReqJson(g_version, deviceId, g_userId1);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    SendData(sockfd, pkInfoStr);
}


void SetAccessToken()
{
    static const char *ACLS[] = {"ACCESS_IDS"};
    static const char *PERMS[] = {
        "ohos.permission.PLACE_CALL",
        "ohos.permission.ACCESS_IDS"
    };
    uint64_t tokenId;
    NativeTokenInfoParams infoInstance = {
        .dcapsNum = 0,
        .permsNum = 2,
        .aclsNum = 1,
        .dcaps = NULL,
        .perms = PERMS,
        .acls = ACLS,
        .processName = "dslm_service",
        .aplStr = "system_core",
    };
    tokenId = GetAccessTokenId(&infoInstance);
    SetSelfTokenID(tokenId);
}

// client端通知server端，server端处理逻辑
void ToServerInit(int sockfd)
{
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", TOSERVERINIT);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJsonString(sendData);
    FreeJson(json);
    const char *recvData = RecvData(sockfd);
    if (GetOperCodeFromData(recvData) != SERVERINITSUCC) {
        LOGE("Server init fail");
    }
}
void ServerInit(int sockfd)
{
    InitEnv();
    double sleepTime = 2.0;
    WaitTime(sleepTime);
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", SERVERINITSUCC);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJsonString(sendData);
    FreeJson(json);
}

void ToServerDestroy(int sockfd)
{
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", SERVERDESTROY);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJsonString(sendData);
    FreeJson(json);
    const char *recvData = RecvData(sockfd);
    if (GetOperCodeFromData(recvData) != SERVERDESTROYSUCC) {
        LOGE("Server destroy fail");
    }
}

void ServerDestroy(int sockfd)
{
    Destory();
    sleep(1);
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", SERVERDESTROYSUCC);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJsonString(sendData);
    FreeJson(json);
}

void ToServerReg(int sockfd, const char *appId)
{
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", REG);
    AddStringToJson(json, "pkg", appId);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJsonString(sendData);
    FreeJson(json);
    const char *recvData = RecvData(sockfd);
    if (GetOperCodeFromData(recvData) != REG) {
        LOGE("Server destroy fail");
    }
}

void ServerReg(int sockfd, const char *data)
{
    CJson *clientJson = CreateJsonFromString(data);
    // int64_t reqId = 10;
    const char *appId = GetStringFromJson(clientJson, "pkg");
    DoubleCallBack(appId);
    
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", REG);
    char *sendData = PackJsonToString(json);
    FreeJsonString(sendData);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJson(clientJson);
}


void ToServerDeleteGroup(int sockfd)
{
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", SERVERDELETEGROUP);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJsonString(sendData);
    const char *recvData = RecvData(sockfd);
    if (GetOperCodeFromData(recvData) != SERVERSUCCESS) {
        LOGE("Server deleteGroup fail");
    }
}

void ServerDeleteGroup(int sockfd)
{
    const char *queryParams = "{\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountServer, g_appName, queryParams);
    printf("groupInfo:%s\n", groupInfo);
    // printf("len:%u\n", (int)strlen(groupInfo));
    if (strlen(groupInfo) > 2) {
        const char *groupId = GetGroupIdfromData(groupInfo);
        char *deletParamsStr = DeleteGroupParams(groupId);
        int *ret = DeleteGroupTest(g_osAccountServer, g_requestId, g_appName, deletParamsStr);
        printf("ret:%d\n", ret[2]);
    }
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", SERVERSUCCESS);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJsonString(sendData);
}


void ToServerDelete(int sockfd)
{
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", SERVERDELETE);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJsonString(sendData);
    const char *recvData = RecvData(sockfd);
    if (GetOperCodeFromData(recvData) != SERVERSUCCESS) {
        LOGE("Server deleteGroup fail");
    }
}

void TestServerDelete(int sockfd)
{
    const char *queryParams = "{\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountServer, g_appName, queryParams);
    printf("groupInfo:%s", groupInfo);
    if (strlen(groupInfo) > 2) {
        g_gmCallback.onTransmit = OnTransmitDeleteDouble;
        g_gmInstance->regCallback(g_appName, &g_gmCallback);
        const char *groupId = GetGroupIdfromData(groupInfo);
        const char *peerDeviceId = GetPeerDeviceId(sockfd);
        char *deletParamsStr = DeleteParams(peerDeviceId, groupId, true);
        DeleteMemberTest(g_osAccountServer, g_requestId, g_appName, deletParamsStr, sockfd);
        double sleepTime = 3.0;
        WaitTime(sleepTime);
    }
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", SERVERSUCCESS);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJsonString(sendData);
}


const char *ToServerCreateGroup(int sockfd, const char *credential)
{
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", SERVERCREATE);
    AddStringToJson(json, "credential", credential);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJsonString(sendData);
    const char *recvData = RecvData(sockfd);
    return recvData;
}

void ServerCreateGroup(const char *data, int sockfd)
{   
    CJson *json = CreateJsonFromString(data);
    const char *params = GetStringFromJson(json, "credential");
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,params);
    if(ret[2] == ON_FINISH){
        SendData(sockfd, "ON_FINISH");
    } else{
        SendData(sockfd, "ON_ERROR");
    }
    FreeJson(json);
}

int *ToServerAuth(int sockfd, const char *deviceId, const char *userId, int type)
{
    // 通知对端发起认证
    CJson *json = CreateJson();
    AddIntToJson(json, "opercode", STARTAUTH);
    AddStringToJson(json, FIELD_DEVICE_ID, deviceId);
    AddStringToJson(json, FIELD_USER_ID, userId);
    AddIntToJson(json, "type", type);
    char *sendData = PackJsonToString(json);
    SendData(sockfd, sendData);
    FreeJson(json);
    FreeJsonString(sendData);
    const char *serverData = RecvData(sockfd);
    // 处理对端报文
    int *ret = ProcessAuthData((int64_t)GetReqIdFromData(serverData), serverData, AUTH, sockfd);
    serverData = RecvData(sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(serverData), serverData, AUTH, sockfd);
    return ret;
}

void ServerAuth(const char *data, int sockfd)
{   
    CJson *json = CreateJsonFromString(data);
    const char *deviceId = GetStringFromJson(json, FIELD_DEVICE_ID);
    const char *userId = GetStringFromJson(json, FIELD_USER_ID);
    int type;
    GetIntFromJson(json, "type", &type);
    const char *groupId;
    if (type == 1)
    {
        const char *queryAccParams = "{\"groupType\":1,\"groupOwner\":\"TestApp\"}";
        char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryAccParams);
        groupId = GetGroupIdfromData(groupInfo);
    } else{
        const char *queryCroParams = "{\"groupType\":1282,\"groupOwner\":\"TestApp\"}";
        char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryCroParams);
        groupId = GetGroupIdfromData(groupInfo);
    }
    char *authParams = AuthParams(deviceId, g_appName, true, false, groupId, 0, userId);
    AuthDeviceTest(g_osAccountId1, g_requestId, authParams, AUTH, sockfd);
    FreeJson(json); 
}

void SwitchCase(int64_t requestId, int code, const char *data, int sockfd){
    switch (code)
    {  
    case 701:
        ServerReg(sockfd, data);
        break;
    case 702:
        ServerReg(sockfd, data);
        break;
    case 101:
        // GetLocalDeviceId();
        GMProcessData(requestId, data, code, sockfd);
        break;
    case 102:
        ReturnFirstMessage(sockfd);
        break;
    case 103:
        ReturnSecondMessage(sockfd);
        break;
    case 104:
        DoDuplicateMessage(requestId, data, code, sockfd);
        break;
    case 201:
        ProcessAuthData(requestId, data, code, sockfd);
        break;
    case 202:
        ReturnFirstAuthMessage(sockfd);
        break;
    case 203:
        ReturnSecondAuthMessage(sockfd);
        break;
    case 210:
        AuthAttack(requestId, data, code, sockfd);
        break;
    case 301:
        GMProcessData(requestId, data, code, sockfd);
        break;
    case 302:
        TestServerDelete(sockfd);
        break;
    case 304:
        ServerDeleteGroup(sockfd);
        break;
    case 401:
        ServerInit(sockfd);
        break; 
    case 501:
        ServerDestroy(sockfd);
        break;
    case 601:
        ReturnMessage(sockfd);
        break;
    case GETSERVERPK:
        GetServerPK(sockfd);
        break;
    case SERVERCREATE:
        ServerCreateGroup(data, sockfd);
        break;
    case STARTAUTH:
        ServerAuth(data, sockfd);
        break;
    case GETPEERDEVICEID:
        SendDeviceId(sockfd);
        break;
    default:
        break;
    }
}