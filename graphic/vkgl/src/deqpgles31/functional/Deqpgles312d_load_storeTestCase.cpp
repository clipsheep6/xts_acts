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

#define VkglTestCase_011242_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011242_2 "oad_store.2d.load_store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011242, VkglTestCase_011242_1, VkglTestCase_011242_2);

#define VkglTestCase_011243_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011243_2 "oad_store.2d.load_store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011243, VkglTestCase_011243_1, VkglTestCase_011243_2);

#define VkglTestCase_011244_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011244_2 "load_store.2d.load_store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011244, VkglTestCase_011244_1, VkglTestCase_011244_2);

#define VkglTestCase_011245_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011245_2 "ad_store.2d.load_store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011245, VkglTestCase_011245_1, VkglTestCase_011245_2);

#define VkglTestCase_011246_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011246_2 "ad_store.2d.load_store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011246, VkglTestCase_011246_1, VkglTestCase_011246_2);

#define VkglTestCase_011247_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011247_2 "oad_store.2d.load_store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011247, VkglTestCase_011247_1, VkglTestCase_011247_2);

#define VkglTestCase_011248_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011248_2 "load_store.2d.load_store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011248, VkglTestCase_011248_1, VkglTestCase_011248_2);

#define VkglTestCase_011249_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011249_2 "oad_store.2d.load_store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011249, VkglTestCase_011249_1, VkglTestCase_011249_2);

#define VkglTestCase_011250_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011250_2 "oad_store.2d.load_store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011250, VkglTestCase_011250_1, VkglTestCase_011250_2);

#define VkglTestCase_011251_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011251_2 "oad_store.2d.load_store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011251, VkglTestCase_011251_1, VkglTestCase_011251_2);

#define VkglTestCase_011252_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011252_2 "load_store.2d.load_store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011252, VkglTestCase_011252_1, VkglTestCase_011252_2);

#define VkglTestCase_011253_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011253_2 "load_store.2d.load_store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011253, VkglTestCase_011253_1, VkglTestCase_011253_2);

#define VkglTestCase_011254_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011254_2 "d_store.2d.load_store.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011254, VkglTestCase_011254_1, VkglTestCase_011254_2);
