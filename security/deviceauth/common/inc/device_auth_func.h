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

#include <stdbool.h>
#include <stdint.h>
// #include "common_defs.h"
// #include "json_utils.h"
#include "device_auth.h"
// #include "hc_condition.h"


#define REG 701
#define REGREG 702
#define BIND 101
#define ERRORFIRSTMESSAGE 102
#define ERRORSECONDMESSAGE 103
#define DUPLICATEMESSAGE 104
#define SETACCESSTOKEN 105
#define AUTH 201
#define AUTHERRMESSFIRST 202
#define AUTHERRMESSSECOND 203
#define AUTHATTACK 210
#define DELETE 301
#define SERVERDELETE 302
#define SERVERSUCCESS 303
#define SERVERDELETEGROUP 304
#define TOSERVERINIT 401
#define SERVERINITSUCC 402
// #define SERVERINITFAIL 003ß
#define SERVERDESTROY 501
#define SERVERDESTROYSUCC 502
#define GETSERVERPK 800
#define SERVERCREATE 801
#define STARTAUTH 802
#define GETPEERDEVICEID 1001

// 测试Demo
#define DEMOSIGN 1

typedef enum {
    ON_REQUEST = 1,
    ON_ERROR = 2,
    ON_FINISH = 3,
    ON_SESSION_KEY_RETURNED = 4,
    ON_TRANSMIT = 5
} CallbackType;

enum {
    GROUP_CREATED = 0,
    GROUP_DELETED,
    DEVICE_BOUND,
    DEVICE_UNBOUND,
    DEVICE_NOT_TRUSTED,
    LAST_GROUP_DELETED,
    TRUSTED_DEVICE_NUM_CHANGED
};



// Double device
void InitTest(const char *appId);
void DeInitTest();
const char *CreateSymmCroInfo(const char *groupId, int groupType);
const char *CreateAsymmInfo(const char *groupId, int groupType);
const char *CreateAsymmCroInfo(const char *groupId, int groupType);
const char *CreateMixInfo(const char *groupId, int groupType);
const char *CreateSymmErrorInfo(const char *groupId, int groupType);
const char *CreateAsymmErrorInfo(const char *groupId, int groupType);
const char *CreateAsymmErrorPKInfo(const char *groupId, int groupType);
const char *CreateSymmLocalInfo(const char *groupId, int groupType);
const char *CreateSymmMaxInfo(const char *groupId, int groupType);

// 辅助功能 - 环境配置
void SetAccessToken();
int InitEnv();
void Destory();
void InitResultPool(int requestId);
void SetSocketPool(int requestId, int sockfd);
const char *GetLocalDeviceId();
const char *GetPeerDeviceId(int sockfd);
void ClearTempValue();
void RemoveHuks();
int DeleteDatabase();
int32_t RemoveDir(const char *path);

// 辅助功能 - 返回值处理
int GetResultItemNum(char *groupVec);
const char *GetGroupIdfromData(char *groupVec);
int CompareInfo(char *groupVec, const char *key, const int index, const char *compareStr);
int CompareInfo1(char *groupVec, const char *key, const char *compareStr);
int64_t GetReqIdFromData(const char *data);
int GetOperCodeFromData(const char *data);
const char *GetMessageFromData(const char *data);
int GetErrorCode(const char *data);
int GetErrorMsg(const char *data);

// 辅助功能 - 其他工具
void FreeTmpStr();
void WaitTime(double sleepTime);
void PrintResult(int num);
const char *InputIp();

// 基本功能封装
void InitListener(const char *appId);
int DoubleCallBack(const char *appId);
int *CreateGroupTest(int32_t osAccountId, int32_t requestId, const char *groupOwner, const char *createParamsStr);
int *DeleteGroupTest(int32_t osAccountId, int32_t requestId, const char *groupOwner, const char *disbandParams);
int *AddMemberTest(int32_t osAccountId, int64_t requestId, const char *appId, const char *authParams, int code,
    int sockfd);
int *GMProcessData(int64_t requestId, const char *data, int code, int sockfd);
int *AuthDeviceTest(int32_t osAccountId, int64_t authReqId, const char *authParams, int code, int sockfd);
int *ProcessAuthData(int64_t authReqId, const char *data, int code, int sockfd);
int *DeleteMemberTest(int32_t osAccountId, int64_t requestId, const char *appId, const char *deleteParams, int sockfd);
char *GetGroupInfoByIdTest(int32_t osAccountId, const char *appId, const char *groupId);
char *GetGroupInfoTest(int32_t osAccountId, const char *groupOwner, const char *queryParams);
char *GetJoinedGroupsTest(int32_t osAccountId, const char *appId, int groupType);
char *GetRelatedGroupsTest(int32_t osAccountId, const char *appId, const char *peerDeviceId);
char *GetDeviceInfoByIdTest(int32_t osAccountId, const char *appId, const char *deviceId, const char *groupId);
uint32_t GetTrustedDevicesTest(int32_t osAccountId, const char *appId, const char *groupId);
int CheckAccessToGroupTest(int32_t osAccountId, const char *appId, const char *groupId);
bool IsDeviceInGroupTest(int32_t osAccountId, const char *appId, const char *groupId, const char *deviceId);
void DestoryTest(char *returnInfo);
const char *TestGetRegisterInfo(const char *reqJsonStr);
int *LocalAccountAuth(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams);
int *addMultiMembersTest(int32_t osAccountId, const char *appId, const char *addParams);
int *delMultiMembersTest(int32_t osAccountId, const char *appId, const char *deleteParams);

// 核心功能（二次封装）
int *TestBind(int32_t osAccountId, int64_t requestId, const char *appId, const char *authParams, int sockfd);
int *TestAuth(int32_t osAccountId, int64_t authReqId, const char *authParams, int sockfd);
int *TestCoDelete(int32_t osAccountId, int64_t requestId, const char *appId, const char *deleteParams, int sockfd);

// 数据生成
char *CreateGroupParams(const int groupType, const char *deviceId, const char *groupName, const int groupVisibility);
char *DeleteGroupParams(const char *groupId);
char *AddParams(const char *groupId, const int groupType, const char *pincode, const char *connectParams);
char *AuthParams(const char *peerConnDeviceId, const char *pkgName, bool isClient, bool level, const char *groupId, int keyLength, const char *userId);
char *DeleteParams(const char *peerAuthId, const char *groupId, bool isForceDelete);
void PrepareQueryData();
const char *CreateAccoutCG(int64_t requestId, int osAccountId, const char *userId, const char *pkInfoStr);
const char *CreateDiffAccoutCG(int64_t requestId, const char * userId, const char *peerUserId);
const char *CreateImportData(const char *baseInfo, const char *groupId, int groupType);
const char *CreateReqJson(const char *version, const char *deviceId, const char *userId);
const char *CreateLocalCred(const char *baseInfo, const char *deviceId);
const char *CreateSymmInfo(const char *info1, const char *info2, const char *groupId, int groupType);
const char * DelSymmInfo(const char *groupId, int groupType);

// 异常场景构造
int DuplicateMessage(int32_t osAccountId, int64_t requestId, const char *appId, const char *authParams, int sockfd);
char *AuthParamsError(const char *peerConnDeviceId, const char *pkgName, bool isClient, bool level, const char *groupId, int keyLength, const char *userId);
const char *CreateAccoutError(int64_t requestId, int osAccountId, const char *userId, const char *pkInfoStr);
const char *CreateAccoutPK(int64_t requestId, int osAccountId, const char *userId, const char *pkInfoStr);
const char *CreateCroAccoutCG(int64_t requestId, int osAccountId, const char *userId, const char *pkInfoStr);
const char *GetCroPKInfo(const char *groupId, int groupType);
const char *CreatAsyCroAccount(int sockfd, const char *deviceId);
const char *CreateSymmCroAcount(int sockfd, const char *groupId, const char *info);
const char *FixPkInfoStr(const char *pkInfoStr);
int *LocalAccountClientDup(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams);
int *LocalAccountServerDup(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams);
int *LocalClientSame(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams);
int *LocalServerSame(int32_t osAccountId, int64_t clientReqId, int64_t serverReqId, const char *authParams);

// server端逻辑
void SwitchCase(int64_t requestId, int operCode, const char *data, int sockfd);
void ToServerReg(int sockfd, const char *appId);
void ToServerDeleteGroup(int sockfd);
void ToServerDelete(int sockfd);
void TestServerDelete(int sockfd);
void ToServerInit(int sockfd);
void ServerInit(int sockfd);
void ToServerDestroy(int sockfd);
void ServerDestroy(int sockfd);
const char *ToServerCreateGroup(int sockfd, const char *credential);
const char *ToGetServerPK(int sockfd);
int *ToServerAuth(int sockfd, const char *deviceId, const char *userId, int type);
