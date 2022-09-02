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
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdbool.h>


#include <stdlib.h>
#include <signal.h>
#include <pthread.h>

// #include "hc_log.h"
#include "device_auth_socket.h"
#include "device_auth_func.h"

int listenfd;
// SIGINT和SIGTERM的处理函数
void EXIT(int sig)
{
    printf("程序退出，信号值=%d\n",sig);
  
    CloseListen(listenfd);  // 手动关闭m_listenfd，释放资源
  
    exit(0);
}
 
// 与客户端通信线程的主函数
void *pth_main(void *arg);
 
int main()
{
    SetAccessToken();
    // 忽略全部的信号
    for (int ii=0;ii<50;ii++) signal(ii,SIG_IGN);
    printf("start\n");
    // 设置SIGINT和SIGTERM的处理函数
    signal(SIGINT,EXIT); signal(SIGTERM,EXIT);
    listenfd = InitServer(15051);
       
    if (listenfd==-1)
    { printf("服务端初始化失败，程序退出。\n"); return -1; }
    printf("init sucess\n");
    SetSocket(listenfd); 
    while (1)
    {
        printf("wait accept:%d\n", listenfd);
        int sockfd = Accept(listenfd);
        if (sockfd == -1) continue;
    
        pthread_t pthid;   // 创建一线程，与新连接上来的客户端通信
        if (pthread_create(&pthid,NULL,pth_main,(void*)((long)sockfd))!=0)
        { printf("创建线程失败,程序退出。n"); return -1; }
    
        printf("与客户端通信的线程已创建。\n");
    }
}

// 与客户端通信线程的主函数
void *pth_main(void *arg)
{
    int sockfd=(long) arg; // arg参数为新客户端的socket。
    while (1)
    {
        const char *recvData = RecvData(sockfd);
        if (strlen(recvData) <= 2)
        {
          CloseClient(sockfd);
          pthread_exit(0);
          break;
        }
        
        printf("recvData");
        int64_t tmpReqId = GetReqIdFromData(recvData);
        int opercode = GetOperCodeFromData(recvData);
        printf("chose function");
        SwitchCase(tmpReqId, opercode, recvData, sockfd);
    }

    printf("客户端已断开连接。\n");
    pthread_exit(0);
}