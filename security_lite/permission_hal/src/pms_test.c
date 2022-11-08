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

#include "pms_test.h"

PermissionTrans g_systemPers[] = {
    {
        "ohos.permission.LOCATION",
        "for LOCATION use",
        INUSE,
    },
    {
        "ohos.permission.ACTIVITY_MOTION",
        "for ACTIVITY_MOTION use",
        ALWAYS,
    },
    {
        "ohos.permission.READ_HEALTH_DATA",
        "for READ_MEDIA_AUDIO use",
        INUSE,
    },
    {
        "ohos.permission.ACCESS_DISTRIBUTED_ABILITY",
        "for ACCESS_DISTRIBUTED_ABILITY use",
        ALWAYS,
    },
    {
        "ohos.permission.MODIFY_AUDIO_SETTINGS",
        "for MODIFY_AUDIO_SETTINGS use",
        INUSE,
    },
    {
        "ohos.permission.VIBRATE",
        "for VIBRATE use",
        ALWAYS,
    },
    {
        "ohos.permission.ACCELEROMETER",
        "for ACCELEROMETER use",
        INUSE,
    },
    {
        "ohos.permission.GYROSCOPE",
        "for WRITE_MEDIA_VIDEO use",
        ALWAYS,
    }
};

PermissionTrans g_abnormalPers[] = {
    {
        PERMISSION_TOOLONG,
        "permission is too long",
        INUSE,
    },
    {
        PERMISSION_EMPTY,
        "permission is empty",
        INUSE,
    },
    {
        PERMISSION_UNSUPPORTED,
        "permission is not supported",
        INUSE,
    }
};

PermissionTrans g_unDefPers = {
    PERMISSION_UNDEFINED,
    "permission is undefined",
    INUSE,
};

void CreateAppDir(void)
{
    int ret = mkdir(ETC_PREFIX, DIR_MODE);
    if (ret != RET_OK) {
        LiteTestPrint("create dir %s error(%d)\n", ETC_PREFIX, ret);
    }
    ret = mkdir(PERMISSION_PREFIX, DIR_MODE);
    if (ret != RET_OK) {
        LiteTestPrint("create dir %s error(%d)\n", PERMISSION_PREFIX, ret);
    }
}

void ClearPermissions(PermissionSaved** permissions)
{
    if (permissions != NULL && *permissions != NULL) {
        HalFree((void*)*permissions);
        *permissions = NULL;
    }
}

bool CheckAppPermission(const char* identifier, int expRet, int expNum)
{
    PermissionSaved* permissions = NULL;
    int permNum = 0;
    int ret = QueryPermission(identifier, &permissions, &permNum);
    if (ret != expRet) {
        LiteTestPrint("query ret = %d, expect ret = %d\n", ret, expRet);
        ClearPermissions(&permissions);
        TEST_ASSERT_EQUAL_INT(0, 1);
        return false;
    }
    if (permNum != expNum) {
        LiteTestPrint("permNum = %d, expect permNum = %d\n", permNum, expNum);
        ClearPermissions(&permissions);
        TEST_ASSERT_EQUAL_INT(0, 1);
        return false;
    }
    ClearPermissions(&permissions);
    return true;
}
