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

// int InitClient(const char *ip, int port);
// int InitServer(int port);

// int Accept(int listenClient);
// void SendData(int sockfd, const char *buf);
// char *RecvData(int sockfd);

// void CloseClient(int sockfd);
// void CloseListen(int listenfd);

void SetSocket(int listenClient);
int InitClient(const char *ip, int port);
int InitServer(int port);

int Accept(int listenClient);
void SendData(int sockfd, const char *buf);
char *RecvData(int sockfd);
// int GetFd();

void CloseClient(int sockfd);
void CloseListen(int listenfd);