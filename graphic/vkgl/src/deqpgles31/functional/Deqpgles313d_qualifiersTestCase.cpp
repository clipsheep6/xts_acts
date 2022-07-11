/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011601_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011601_2 "_store.3d.qualifiers.coherent_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011601, VkglTestCase_011601_1, VkglTestCase_011601_2);

#define VkglTestCase_011602_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011602_2 "_store.3d.qualifiers.volatile_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011602, VkglTestCase_011602_1, VkglTestCase_011602_2);

#define VkglTestCase_011603_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011603_2 "store.3d.qualifiers.coherent_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011603, VkglTestCase_011603_1, VkglTestCase_011603_2);

#define VkglTestCase_011604_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011604_2 "store.3d.qualifiers.volatile_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011604, VkglTestCase_011604_1, VkglTestCase_011604_2);

#define VkglTestCase_011605_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011605_2 "_store.3d.qualifiers.coherent_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011605, VkglTestCase_011605_1, VkglTestCase_011605_2);

#define VkglTestCase_011606_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011606_2 "_store.3d.qualifiers.volatile_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011606, VkglTestCase_011606_1, VkglTestCase_011606_2);

#define VkglTestCase_011607_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011607_2 "ad_store.3d.qualifiers.restrict"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011607, VkglTestCase_011607_1, VkglTestCase_011607_2);
