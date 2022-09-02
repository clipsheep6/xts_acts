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

#include <gtest/gtest.h>
#include <string>
#include <iostream>
#include <unistd.h>
extern "C" {
// #include "json_utils.h"
// #include "device_auth.h"
// #include "devauth_defines.h"
// #include "devauth_test_log.h"
// #include "devauth_peer_to_peer.h"
#include "devauth_socket.h"
// #include "devauth_P2P_distribute.h"
}


using namespace testing::ext;
using namespace std;
namespace {

// // // env
const char *ip = "192.168.0.157";
// int multNum = 2;
// int presNum = 1000;
// Basic parameters for creating groups
int32_t TEST_OSACCOUNT_UID1 =10024;
int32_t TEMP_REQUEST_ID = 123;
const char *TEST_APP_NAME = "TestApp";
const char *pinCode = "123456";
const int groupTypeP2P = 256;
// const char *connectParams = NULL;
const char *groupName1 = "P2PGroup";
const int groupVisibilityPublic = -1;
const char *queryParams = "{\"groupOwner\":\"TestApp\"}";
const char *groupId;
// //Parameters for authing device
// const char *authId;
// bool isClient = true;

int sockfd;


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

    // fflush(stdout);
    // InitClient(ip,15051);

    // printf("Please input multNum: ");
    // fflush(stdout);
    // scanf("%d", &multNum);

    // printf("Please input number of pressure test: ");
    // fflush(stdout);
    // scanf("%d", &presNum);

    DeleteDatabase();
}

void Distribute_P2P::TearDownTestCase() {
}

void Distribute_P2P::SetUp() { 
    InitEnv();
    const char *createParamsStr = CreateGroupParams(groupTypeP2P, NULL, groupName1, groupVisibilityPublic);
    createGroupTest(TEST_OSACCOUNT_UID1, TEMP_REQUEST_ID, TEST_APP_NAME ,createParamsStr);
    FreeTmpStr();
    char *groupInfo = TestGetGroupInfo(TEST_OSACCOUNT_UID1, TEST_APP_NAME, queryParams);
    groupId = GetGroupIdfromData(groupInfo);
    
}

void Distribute_P2P::TearDown() {
    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(TEST_OSACCOUNT_UID1, TEMP_REQUEST_ID, TEST_APP_NAME, deletParamsStr);
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

// void EXIT(int sig)
// {
//     printf("程序退出，信号值=%d\n",sig);
//     exit(0);
// }

// void *pth_main(void *arg)
// {
//     int sockfd = InitClient(ip,5051);
//     if (sockfd == false)
//     { printf("TcpClient.ConnectToServer(\"172.16.0.15\",5051) failed,exit...\n"); }

//     char strbuffer[1024];
//     int ii = 0;
//     while (1)
//     {
//         ii++;
//         memset(strbuffer,0,sizeof(strbuffer));
//         sprintf(strbuffer,"这是第%d个超级女生，编号%03d。",ii,ii);
//         SendData(sockfd, strbuffer);
    
//         memset(strbuffer,0,sizeof(strbuffer));
//         RecvData(sockfd);

//     sleep(1);  // sleep一秒，方便观察程序的运行。
//     }
//     CloseClient(sockfd);

//     printf("客户端已断开连接。\n");
//     //     CloseClient();
//     pthread_exit(0);
// }

HWTEST_F(Distribute_P2P, P2P_DeviceBand_0101, TestSize.Level0)
{
    // signal(SIGINT,EXIT); signal(SIGTERM,EXIT);

    // int j = 7;
    // while (j < 10)
    // {
    //     j++;
    //     // 向服务器发起连接请求
    //     pthread_t pthid;   // 创建一线程，与新连接上来的客户端通信
    //     // if (fork()>0) { continue; }  // 父进程回到while，继续Accept。
    //     // pth_main((void*)((long)j));
    //     if (pthread_create(&pthid,NULL,pth_main,(void*)((long)j))!=0)
    //     { printf("创建线程失败，程序退出。n");  }
    
    //     printf("与客户端通信的线程已创建。\n");
    // }
    // sleep(1000);
    int sockfd = InitClient(ip,5051);
    if (sockfd == -1) { printf("TcpClient.ConnectToServer(\"172.16.0.15\",5051) failed,exit...\n"); }
    printf("start add member");
    printf("groupId:%s",groupId);
    const char *addParamsStr = AddParams(groupId, groupTypeP2P, pinCode, connectParams);  
    int *ret = TestBind(TEST_OSACCOUNT_UID1, TEMP_REQUEST_ID, TEST_APP_NAME, addParamsStr, sockfd);
    uint32_t deviceNum = TestGetTrustedDevices(TEST_OSACCOUNT_UID1, TEST_APP_NAME,groupId);
    ASSERT_EQ(deviceNum == 2, true);
    printf("deviceNum:%d\n",deviceNum);
}
}