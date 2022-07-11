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

#define VkglTestCase_011843_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011843_2 "d_store.buffer.load_store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011843, VkglTestCase_011843_1, VkglTestCase_011843_2);

#define VkglTestCase_011844_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011844_2 "d_store.buffer.load_store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011844, VkglTestCase_011844_1, VkglTestCase_011844_2);

#define VkglTestCase_011845_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011845_2 "ad_store.buffer.load_store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011845, VkglTestCase_011845_1, VkglTestCase_011845_2);

#define VkglTestCase_011846_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011846_2 "_store.buffer.load_store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011846, VkglTestCase_011846_1, VkglTestCase_011846_2);

#define VkglTestCase_011847_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011847_2 "_store.buffer.load_store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011847, VkglTestCase_011847_1, VkglTestCase_011847_2);

#define VkglTestCase_011848_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011848_2 "d_store.buffer.load_store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011848, VkglTestCase_011848_1, VkglTestCase_011848_2);

#define VkglTestCase_011849_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011849_2 "ad_store.buffer.load_store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011849, VkglTestCase_011849_1, VkglTestCase_011849_2);

#define VkglTestCase_011850_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011850_2 "d_store.buffer.load_store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011850, VkglTestCase_011850_1, VkglTestCase_011850_2);

#define VkglTestCase_011851_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011851_2 "d_store.buffer.load_store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011851, VkglTestCase_011851_1, VkglTestCase_011851_2);

#define VkglTestCase_011852_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011852_2 "d_store.buffer.load_store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011852, VkglTestCase_011852_1, VkglTestCase_011852_2);

#define VkglTestCase_011853_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011853_2 "ad_store.buffer.load_store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011853, VkglTestCase_011853_1, VkglTestCase_011853_2);

#define VkglTestCase_011854_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011854_2 "ad_store.buffer.load_store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011854, VkglTestCase_011854_1, VkglTestCase_011854_2);
