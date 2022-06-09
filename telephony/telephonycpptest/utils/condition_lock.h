/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CONDITION_LOCK_H
#define CONDITION_LOCK_H
#include <gtest/gtest.h>
#include "log.h"

constexpr int MICROSECOND = 1000;
namespace OHOS {
void LockNumWhiteEq(int target, int originVal, int slipMs, int timeoutMs)
{
    int useTimeMs = 0;
    while ((((target) == (originVal)) && ((useTimeMs) < (timeoutMs)))) {
        usleep(((slipMs)*MICROSECOND));
        (useTimeMs) += (slipMs);
    }
    LOG("===========wait %d ms target:%d==============", (useTimeMs), (target));
    EXPECT_NE((target), (originVal));
}

template<typename T>
void LockNumWHhileNe(T target, T originVal, int slipMs, int timeoutMs)
{
    int(useTimeMs) = 0;
    while ((((target) != (originVal)) && ((useTimeMs) < (timeoutMs)))) {
        usleep(((slipMs)*MICROSECOND));
        (useTimeMs) += (slipMs);
    }
    LOG("===========wait %d ms target:%d==============", (useTimeMs), (target));
    EXPECT_EQ((target), (originVal));
}

void LockNumWHhileNe(bool target, bool originVal, int slipMs, int timeoutMs)
{
    int(useTimeMs) = 0;
    while ((((target) != (originVal)) && ((useTimeMs) < (timeoutMs)))) {
        usleep(((slipMs)*MICROSECOND));
        (useTimeMs) += (slipMs);
    }
    LOG("===========wait %d ms target:%d==============", (useTimeMs), (target));
    EXPECT_EQ((target), (originVal));
}

void LockNumWhiteNeWithoutExpect(bool target, bool originVal, int slipMs, int timeoutMs)
{
    int useTimeMs = 0;
    while ((((target) != (originVal)) && ((useTimeMs) < (timeoutMs)))) {
        usleep(((slipMs)*MICROSECOND));
        (useTimeMs) += (slipMs);
    }
    LOG("===========wait %d ms target:%d==============", (useTimeMs), (target));
}

void LockStringWhiteNe(const char *target, const char *originVal, int slipMs, int timeoutMs)
{
    int(useTimeMs) = 0;
    while (((strcmp((target), (originVal)) != 0) && ((useTimeMs) < (timeoutMs)))) {
        usleep(((slipMs)*MICROSECOND));
        (useTimeMs) += (slipMs);
    }
    LOG("===========wait %d ms target:%s==============", (useTimeMs), (target));
    EXPECT_STREQ((target), (originVal));
}
} // namespace OHOS
#endif // CONDITION_LOCK_H