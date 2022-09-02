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

#include "device_auth_socket.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <securec.h>

// char g_strbuffer[2048];

// int InitClient(const char *serverip, const int port)
// {
//     int sockfd = socket(AF_INET, SOCK_STREAM, 0);
//     printf("sockfd:%d\n", sockfd);
//     struct hostent *h;
//     if ((h = gethostbyname(serverip)) == 0) {
//         perror("gethostbyname");
//         close(sockfd);
//         return -1;
//     }

//     struct sockaddr_in servaddr;
//     memset_s(&servaddr, sizeof(servaddr), 0, sizeof(servaddr));
//     servaddr.sin_family = AF_INET;
//     servaddr.sin_port = htons(port);
//     memcpy_s(&servaddr.sin_addr, sizeof(servaddr.sin_addr), h->h_addr, h->h_length);

//     if (connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) != 0) {
//         perror("connect");
//         close(sockfd);
//         return -1;
//     }

//     if (sockfd <= 0) {
//         printf("Failed to connect to server.\n");
//         return -1;
//     } else {
//         printf("Succeed to connect to server.\n");
//         printf("Succeed sockfd:%d\n", sockfd);
//         return sockfd;
//     }
// }

// int InitServer(int port)
// {
//     int listenfd = socket(AF_INET, SOCK_STREAM, 0);
//     int num5 = 5;
//     struct sockaddr_in servaddr;
//     memset_s(&servaddr, sizeof(servaddr), 0, sizeof(servaddr));
//     servaddr.sin_family = AF_INET;
//     servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
//     servaddr.sin_port = htons(port);
//     if (bind(listenfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) != 0) {
//         perror("bind");
//         close(listenfd);
//         return -1;
//     }

//     if (listen(listenfd, num5) != 0) {
//         perror("listen");
//         close(listenfd);
//         return -1;
//     }

//     return listenfd;
// }

// int Accept(int listenClient)
// {
//     int sockfd;
//     if ((sockfd = accept(listenClient, 0, 0)) <= 0) {
//         printf("The server failed to accept.\n");
//         return -1;
//     } else {
//         printf("accept sockfd:%d\n", sockfd);
//         return sockfd;
//     }
// }

// void SendData(int sockfd, const char *buf)
// {
//     memset_s(g_strbuffer, sizeof(g_strbuffer), 0, sizeof(g_strbuffer));
//     if (sprintf_s(g_strbuffer, sizeof(g_strbuffer), "%s", buf) < 0) {
//         printf("sprintf_s failed");
//     }
//     printf("start send\n");
//     if (send(sockfd, g_strbuffer, strlen(g_strbuffer), 0) <= 0) {
//         printf("Send filed:%s\n", g_strbuffer);
//     } else {
//         printf("sockfd:%d, send:%s\n", sockfd, g_strbuffer);
//     }
//     printf("send");
// }

// char *RecvData(int sockfd)
// {
//     memset_s(g_strbuffer, sizeof(g_strbuffer), 0, sizeof(g_strbuffer));
//     if (recv(sockfd, g_strbuffer, sizeof(g_strbuffer), 0) <= 0) {
//         return "";
//     } else {
//         printf("sockfd:%d, recv:%s\n", sockfd, g_strbuffer);
//         return g_strbuffer;
//     }
// }

// void CloseClient(int sockfd)
// {
//     close(sockfd);
// }

// void CloseListen(int listenClient)
// {
//     printf("The client is disconnected。\n");
//     close(listenClient);
//     listenClient = 0;
// }


char strbuffer1[2048];

int sbuflen = 8192*2;
void SetSocket(int listenClient)
{
    setsockopt(listenClient, SOL_SOCKET, SO_SNDBUF, (const char*)&sbuflen, sizeof(int));
}

int InitClient(const char *serverip,const int port)
{
    // 创建客户端的socket
    
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    printf("sockfd:%d\n", sockfd);
    // ip地址信息的数据结构
    struct hostent* h;
    if ( (h = gethostbyname(serverip)) == 0 )
    { perror("gethostbyname"); close(sockfd); return -1; }

    // 把服务器的地址和端口转换为数据结构
    struct sockaddr_in servaddr;
    memset(&servaddr,0,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(port);
    memcpy(&servaddr.sin_addr,h->h_addr,h->h_length);

    // 向服务器发起连接请求
    if (connect(sockfd, (struct sockaddr *)&servaddr,sizeof(servaddr)) != 0)
    { perror("connect"); close(sockfd); return -1; }

    if (sockfd<=0) {
        printf("Failed to connect to server.\n");
        return -1;
//        break;
    } else{
        printf("Succeed to connect to server.\n");
        printf("Succeed sockfd:%d\n", sockfd);
        return sockfd;
    }
    
}

int InitServer(int port)
{
    int listenfd = socket(AF_INET,SOCK_STREAM,0);  // 创建服务端的socket

    // 把服务端用于通信的地址和端口绑定到socket上
    struct sockaddr_in servaddr;    // 服务端地址信息的数据结构
    memset(&servaddr,0,sizeof(servaddr));
    servaddr.sin_family = AF_INET;  // 协议族，在socket编程中只能是AF_INET
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);  // 本主机的任意ip地址
    servaddr.sin_port = htons(port);  // 绑定通信端口
    if (bind(listenfd,(struct sockaddr *)&servaddr,sizeof(servaddr)) != 0 )
    { perror("bind"); close(listenfd); return -1; }

    // 把socket设置为监听模式
    if (listen(listenfd,5) != 0 ) { perror("listen"); close(listenfd); return -1; }

    return listenfd;
}

int Accept(int listenClient)
{
    int sockfd;
    // 接受客户端的连接。
    printf("start accept\n");
    if ( (sockfd=accept(listenClient,0,0)) <= 0) {
        printf("The server failed to accept.\n");
        return -1;
    } else{
        printf("accept sockfd:%d\n", sockfd);
        return sockfd;
    }
}

void SendData(int sockfd, const char *buf)
{
    char strbuffer[2048];
    memset(strbuffer,0,sizeof(strbuffer));
    sprintf(strbuffer, "%s", buf);
    printf("start send\n");
    // printf("send sockfd:%d", sockfd);
    if (send(sockfd, strbuffer,strlen(strbuffer)+1,0)<=0){
        printf("Send filed:%s\n", strbuffer);
    } else{
        printf("sockfd:%d, send:%s\n",sockfd, strbuffer);
    }
    printf("send");
}

char *RecvData(int sockfd)
{
    
    memset(strbuffer1,0,sizeof(strbuffer1));
    if (recv(sockfd, strbuffer1,sizeof(strbuffer1),0)<=0){
        return "";
    } else{
        printf("sockfd:%d, recv:%s\n",sockfd, strbuffer1);
        return strbuffer1;
    }
}

void CloseClient(int sockfd)
{
    close(sockfd);
}

void CloseListen(int listenClient)
{
    printf("The client is disconnected。\n");
    close(listenClient);
    listenClient = 0;
}