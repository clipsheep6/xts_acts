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

#define VkglTestCase_011758_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011758_2 "ore.2d_array.qualifiers.coherent_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011758, VkglTestCase_011758_1, VkglTestCase_011758_2);

#define VkglTestCase_011759_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011759_2 "ore.2d_array.qualifiers.volatile_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011759, VkglTestCase_011759_1, VkglTestCase_011759_2);

#define VkglTestCase_011760_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011760_2 "re.2d_array.qualifiers.coherent_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011760, VkglTestCase_011760_1, VkglTestCase_011760_2);

#define VkglTestCase_011761_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011761_2 "re.2d_array.qualifiers.volatile_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011761, VkglTestCase_011761_1, VkglTestCase_011761_2);

#define VkglTestCase_011762_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011762_2 "ore.2d_array.qualifiers.coherent_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011762, VkglTestCase_011762_1, VkglTestCase_011762_2);

#define VkglTestCase_011763_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011763_2 "ore.2d_array.qualifiers.volatile_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011763, VkglTestCase_011763_1, VkglTestCase_011763_2);

#define VkglTestCase_011764_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011764_2 "store.2d_array.qualifiers.restrict"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011764, VkglTestCase_011764_1, VkglTestCase_011764_2);
