/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include "log.h"

#define LOCK_NUM_WHILE_EQ(target, originVal, slipMs, timeoutMs)                          \
    {                                                                                    \
        do {                                                                             \
            int useTimeMs = 0;                                                           \
            while ((((target) == (originVal)) && ((useTimeMs) < (timeoutMs)))) {         \
                usleep(((slipMs)*1000));                                                 \
                (useTimeMs) += (slipMs);                                                 \
            }                                                                            \
            LOG("===========wait %d ms target:%d==============", (useTimeMs), (target)); \
            EXPECT_NE((target), (originVal));                                            \
        } while (0);                                                                     \
    }

#define LOCK_STRING_WHILE_EQ(target, originVal, slipMs, timeoutMs)                          \
    {                                                                                       \
        do {                                                                                \
            int(useTimeMs) = 0;                                                             \
            while (((strcmp((target), (originVal)) == 0) && ((useTimeMs) < (timeoutMs)))) { \
                usleep(((slipMs)*1000));                                                    \
                (useTimeMs) += (slipMs);                                                    \
            }                                                                               \
            LOG("===========wait %d ms target:%s==============", (useTimeMs), (target));    \
            EXPECT_STRNE(strcmp((target), (originVal)), 0);                                 \
        } while (0);                                                                        \
    }

#define LOCK_NUM_WHILE_NE(target, originVal, slipMs, timeoutMs)                          \
    {                                                                                    \
        do {                                                                             \
            int(useTimeMs) = 0;                                                          \
            while ((((target) != (originVal)) && ((useTimeMs) < (timeoutMs)))) {         \
                usleep(((slipMs)*1000));                                                 \
                (useTimeMs) += (slipMs);                                                 \
            }                                                                            \
            LOG("===========wait %d ms target:%d==============", (useTimeMs), (target)); \
            EXPECT_EQ((target), (originVal));                                            \
        } while (0);                                                                     \
    }

#define LOCK_NUM_WHILE_NE_WITHOUT_EXPECT(target, originVal, slipMs, timeoutMs)           \
    {                                                                                    \
        do {                                                                             \
            int useTimeMs = 0;                                                           \
            while ((((target) != (originVal)) && ((useTimeMs) < (timeoutMs)))) {         \
                usleep(((slipMs)*1000));                                                 \
                (useTimeMs) += (slipMs);                                                 \
            }                                                                            \
            LOG("===========wait %d ms target:%d==============", (useTimeMs), (target)); \
        } while (0);                                                                     \
    }

#define LOCK_STRING_WHILE_NE(target, originVal, slipMs, timeoutMs)                          \
    {                                                                                       \
        do {                                                                                \
            int(useTimeMs) = 0;                                                             \
            while (((strcmp((target), (originVal)) != 0) && ((useTimeMs) < (timeoutMs)))) { \
                usleep(((slipMs)*1000));                                                    \
                (useTimeMs) += (slipMs);                                                    \
            }                                                                               \
            LOG("===========wait %d ms target:%s==============", (useTimeMs), (target));    \
            EXPECT_STREQ((target), (originVal));                                            \
        } while (0);                                                                        \
    }

#endif // CONDITION_LOCK_H