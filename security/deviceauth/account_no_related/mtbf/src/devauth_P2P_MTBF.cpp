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
#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdbool.h>


#include <stdlib.h>
#include <signal.h>
#include <pthread.h>
#include <thread>

#include <gtest/gtest.h>
#include <string>
#include <iostream>
#include <unistd.h>
extern "C" {
#include "hc_log.h"
#include "device_auth_socket.h"
#include "device_auth_func.h"
}


using namespace testing::ext;
using namespace std;
namespace {

// env
const char *ip = "192.168.0.157";
int multNum = 1;
int presNum = 100;
// Basic parameters for creating groups
int32_t g_osAccountId =100;
int32_t g_requestId = 10;
const char *g_appName = "TestApp";
const char *g_pinCode = "123456";
const int g_groupTypeP2P = 256;
const char *connectParams = NULL;
const char *g_groupName = "TestApp";
const int g_groupVisibilityPublic = -1;
const char *g_queryParams = "{\"groupOwner\":\"TestApp\"}";
const char *g_groupId;
const char * g_authParamsStr;
//Parameters for authing device
const char *g_authId;
bool g_isClient = true;

class Distribute_P2P : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

/* test suit - GroupManage_P2P */
void Distribute_P2P::SetUpTestCase() {
    // char input[128] = { 0 };
    // printf("Please input peer ip: ");
    // fflush(stdout);
    // scanf("%s", input);
    // ip = input;

    printf("Please input multNum: ");
    fflush(stdout);
    scanf("%d", &multNum);

    // printf("Please input number of pressure test: ");
    // fflush(stdout);
    // scanf("%d", &presNum);

    DeleteDatabase();
}

void Distribute_P2P::TearDownTestCase() {
}

void Distribute_P2P::SetUp() { 
    InitEnv();
    InitResultPool(g_requestId);
    const char *createParamsStr = CreateGroupParams(g_groupTypeP2P, NULL, g_groupName, g_groupVisibilityPublic);
    CreateGroupTest(g_osAccountId, g_requestId, g_appName ,createParamsStr);
    FreeTmpStr();
    char *groupInfo = GetGroupInfoTest(g_osAccountId, g_appName, g_queryParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    
}

void Distribute_P2P::TearDown() {
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId, g_requestId, g_appName, deletParamsStr);
    FreeTmpStr();
    // // if (InitClient(ip,15051)==false)
    // // {
    // //     printf("connect server succes.");
    // // } else{
    // //     printf("connect server fail.");
    // // }
    // // double sleepTime = 1.0;
    // // waitTime(sleepTime);
    // // ToServerDestroy();
    Destory();
}

void EXIT(int sig)
{
    printf("程序退出，信号值=%d\n",sig);
    exit(0);
}

void *pth_main(void *arg)
{
    
    int requestId = (long)arg;
    int sockfd = InitClient(ip,15051);
    if (sockfd == false) { printf("TcpClient.ConnectToServer(\"172.16.0.15\",5051) failed,exit...\n"); }
    SetSocketPool(requestId, sockfd);

    for(int i = 0; i < presNum; i++)
    {
        LOGI("star auth thread:%d, test num:%d \n", requestId, i);
        // printf("end add member");
        
        // printf("g_authId:%s", g_authId);
        
        int *ret = TestAuth(g_osAccountId, requestId, g_authParamsStr, sockfd);
        printf("ret:%d",ret[2]);
        // sleep(1);
        // FreeTmpStr(); 
    }

    CloseClient(sockfd);
    printf("客户端已断开连接, requestId: %d。\n", requestId);
    pthread_exit(0);
}

HWTEST_F(Distribute_P2P, P2P_DeviceBand_0101, TestSize.Level0)
{
    signal(SIGINT,EXIT); signal(SIGTERM,EXIT);
    int sockfd = InitClient(ip,15051);
    if (sockfd == -1) { printf("TcpClient.ConnectToServer(\"172.16.0.15\",5051) failed,exit...\n"); }
    printf("start add member");
    printf("g_groupId:%s",g_groupId);
    ToServerInit(sockfd);
    const char *addParamsStr = AddParams(g_groupId, g_groupTypeP2P, g_pinCode, connectParams);  
    int *ret = TestBind(g_osAccountId, g_requestId, g_appName, addParamsStr, sockfd);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId, g_appName,g_groupId);
    ASSERT_EQ(deviceNum == 2, true);
    printf("deviceNum:%d\n",deviceNum);
    printf("ret:%d",ret[2]);
    CloseClient(sockfd);
    g_authId = GetPeerDeviceId();
    g_authParamsStr = AuthParams(g_authId, g_appName, g_isClient, "NULL");

    InitResultPool(multNum);

    // for (int i = 1; i < presNum + 1; i++)
    // {
	    // thread *th = new thread[multNum];
        // for (int j = 1; j < multNum + 1; j++) {th[j] = thread(pth_main, j);}
	    // for (int j = 1; j < multNum + 1; j++)th[j].join();

    pthread_t thread[multNum];
    for (int j = 1; j < multNum + 1; j++)
    {
        // 向服务器发起连接请求
        // 创建一线程，与新连接上来的客户端通信
        if (pthread_create(&thread[j], NULL, pth_main, (void*)((long)j))!=0)
        { printf("创建线程失败, 程序退出。n");  }
        printf("与客户端通信的线程已创建。\n");
    }

        // while (GetAuthResult(multNum) < presNum)
        // {
        //     printf("GetAuthResult:%d, %d", GetAuthResult(multNum) /10 , i);
        //     double sleepTime = 15.0;
        //     waitTime(sleepTime);
        // }

        // for(int m = 1; m < multNum + 1; m++) {
        //     int result = pthread_kill(thread[m], SIGALRM);
        //     printf("pthread_kill()%d\n", result);
        // }

        // printf
        // double sleepTime = 3.0;
        // waitTime(sleepTime);
    // }
    
    PrintResult(multNum);
}
}