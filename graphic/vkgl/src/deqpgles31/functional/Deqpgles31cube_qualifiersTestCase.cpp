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

#define VkglTestCase_011444_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011444_2 "store.cube.qualifiers.coherent_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011444, VkglTestCase_011444_1, VkglTestCase_011444_2);

#define VkglTestCase_011445_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011445_2 "store.cube.qualifiers.volatile_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011445, VkglTestCase_011445_1, VkglTestCase_011445_2);

#define VkglTestCase_011446_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011446_2 "tore.cube.qualifiers.coherent_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011446, VkglTestCase_011446_1, VkglTestCase_011446_2);

#define VkglTestCase_011447_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011447_2 "tore.cube.qualifiers.volatile_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011447, VkglTestCase_011447_1, VkglTestCase_011447_2);

#define VkglTestCase_011448_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011448_2 "store.cube.qualifiers.coherent_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011448, VkglTestCase_011448_1, VkglTestCase_011448_2);

#define VkglTestCase_011449_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011449_2 "store.cube.qualifiers.volatile_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011449, VkglTestCase_011449_1, VkglTestCase_011449_2);

#define VkglTestCase_011450_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011450_2 "d_store.cube.qualifiers.restrict"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011450, VkglTestCase_011450_1, VkglTestCase_011450_2);
