/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef XTS_ACTS_PERMISSION_LITE_HAL_H
#define XTS_ACTS_PERMISSION_LITE_HAL_H
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <hctest.h>
#include "hal_pms.h"
#include "pms.h"
#include "pms_types.h"
#include "perm_define.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#define TEST_APP_ID "com.permission.test"
#define TEST_APP_ID2 "com.permission.test2"

#define TEST_APP_NOT_EXIST "com.permission.onetwothree"

#define PERMISSION_UNDEFINED "ohos.permission.TEST"
#define PERMISSION_TOOLONG "ohos.permission.balabalabalabalabalabalabalabalabalabala"
#define PERMISSION_EMPTY ""
#define PERMISSION_UNSUPPORTED "!@#$%^&*()_+"
#define ETC_PREFIX "user/ace/etc"
#define PERMISSION_PREFIX "user/ace/etc/permissions"

#define MAX_PID 0x7fffffff
#define MIN_PID 0
#define TEST_TASKID 1000
#define TEST_TASKID2 1002

#define ABNORMAL_TASKID -1

#define SYS_PERM_NUM 8
#define ABNORMAL_PERM_NUM 3
#define MAX_PERM_NUM 1024

#define RET_OK 0
#define RET_NOK (-1)

#define SLEEP_TIME 5
#define RELI_TEST_TIME 1000

#define DIR_MODE 777
#define FLAG_NOT_EXIST 123
#define PERFORMANCE_RUN_TIMES 10000
#define MILLISECOND 1000

extern PermissionTrans g_systemPers[SYS_PERM_NUM];
extern PermissionTrans g_abnormalPers[ABNORMAL_PERM_NUM];
extern PermissionTrans g_unDefPers;

void CreateAppDir(void);
void ClearPermissions(PermissionSaved** permissions);
bool CheckAppPermission(const char* identifier, int expRet, int expNum);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */
#endif // XTS_ACTS_PERMISSION_LITE_HAL_H
