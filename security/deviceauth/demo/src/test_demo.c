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
#include <stdlib.h>
#include <signal.h>
#include <pthread.h>

#include "device_auth_func.h"

void EXIT(int sig)
{
    printf("程序退出，信号值=%d\n",sig); 
    exit(0);
}
 
 
int main()
{
    SetAccessToken();
    InitEnv();
    int command = 0;
    while (1)
    {
        printf("\n");
        printf("|-----------------------|\n");
        printf("| %-30s |\n", "01-cloud sign");
        fflush(stdout);
        scanf("%d", &command);
        SwitchCase(10, command, NULL, 0);
    }
    return 0;
}