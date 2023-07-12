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

#ifndef HKS_TEST_LOG_H
#define HKS_TEST_LOG_H

#include "stdint.h"
#include "stdbool.h"

#if defined(__LITEOS_M__) && __LITEOS_M__
#include "hctest.h"
#else
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>

#define TEST_ASSERT_EQUAL_HEX8_ARRAY(expected, actual, num_elements)        \
    EXPECT_THAT(std::vector<uint8_t>((actual), (actual) + (num_elements)),  \
                ::testing::ElementsAreArray((expected), (num_elements)))
#define TEST_ASSERT_EQUAL(expected, actual) EXPECT_EQ((actual), (expected))
#define TEST_ASSERT_EQUAL_MESSAGE(expected, actual, message) EXPECT_EQ((actual), (expected)) << (message)
#define TEST_ASSERT_EQUAL_STRING(expected, actual) EXPECT_STREQ((actual), (expected))
#define TEST_ASSERT_GREATER_OR_EQUAL(threshold, actual) EXPECT_GE((actual), (threshold))
#define TEST_ASSERT_GREATER_THAN(threshold, actual) EXPECT_GT((actual), (threshold))
#define TEST_ASSERT_LESS_OR_EQUAL(threshold, actual) EXPECT_LE((actual), (threshold))
#define TEST_ASSERT_LESS_THAN(threshold, actual) EXPECT_LT((actual), (threshold))
#define TEST_ASSERT_MESSAGE(condition, message) EXPECT_TRUE((condition)) << (message)
#define TEST_ASSERT_NOT_EQUAL(expected, actual) EXPECT_NE((actual), (expected))
#define TEST_ASSERT_NOT_EQUAL_MESSAGE(expected, actual, message) EXPECT_NE((actual), (expected)) << (message)
#define TEST_ASSERT_NOT_NULL(pointer) EXPECT_NE((pointer), nullptr)
#define TEST_ASSERT_TRUE(condition) EXPECT_TRUE((condition))
#define TEST_ASSERT_TRUE_MESSAGE(condition, message) EXPECT_TRUE((condition)) << (message)
#endif

#ifndef _CUT_LOG_
#define HKS_TEST_LOG_E(fmt...) \
do { \
    printf("[ERROR]\t[%s](%d): ", __func__, __LINE__); \
    printf(fmt); \
    printf("\r\n"); \
} while (0)

#define HKS_TEST_LOG_I(fmt...) \
do { \
    printf("[INFO]\t[%s](%d): ", __func__, __LINE__); \
    printf(fmt); \
    printf("\r\n"); \
} while (0)

#define HKS_TEST_LOG_W(fmt...) \
do { \
    printf("[WARN]\t[%s](%d): ", __func__, __LINE__); \
    printf(fmt); \
    printf("\r\n"); \
} while (0)

#define HKS_TEST_LOG_D(fmt...) \
do { \
    printf("[DEBUG]\t[%s](%d): ", __func__, __LINE__); \
    printf(fmt); \
    printf("\r\n"); \
} while (0)
#else
#define HKS_TEST_LOG_E(...)
#define HKS_TEST_LOG_I(...)
#define HKS_TEST_LOG_W(...)
#define HKS_TEST_LOG_D(...)
#endif

#endif /* HKS_TEST_LOG_H */
