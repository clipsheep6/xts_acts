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

#define VkglTestCase_011831_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011831_2 "oad_store.buffer.store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011831, VkglTestCase_011831_1, VkglTestCase_011831_2);

#define VkglTestCase_011832_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011832_2 "oad_store.buffer.store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011832, VkglTestCase_011832_1, VkglTestCase_011832_2);

#define VkglTestCase_011833_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011833_2 "_load_store.buffer.store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011833, VkglTestCase_011833_1, VkglTestCase_011833_2);

#define VkglTestCase_011834_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011834_2 "oad_store.buffer.store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011834, VkglTestCase_011834_1, VkglTestCase_011834_2);

#define VkglTestCase_011835_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011835_2 "oad_store.buffer.store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011835, VkglTestCase_011835_1, VkglTestCase_011835_2);

#define VkglTestCase_011836_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011836_2 "oad_store.buffer.store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011836, VkglTestCase_011836_1, VkglTestCase_011836_2);

#define VkglTestCase_011837_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011837_2 "load_store.buffer.store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011837, VkglTestCase_011837_1, VkglTestCase_011837_2);

#define VkglTestCase_011838_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011838_2 "oad_store.buffer.store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011838, VkglTestCase_011838_1, VkglTestCase_011838_2);

#define VkglTestCase_011839_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011839_2 "oad_store.buffer.store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011839, VkglTestCase_011839_1, VkglTestCase_011839_2);

#define VkglTestCase_011840_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011840_2 "load_store.buffer.store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011840, VkglTestCase_011840_1, VkglTestCase_011840_2);

#define VkglTestCase_011841_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011841_2 "_load_store.buffer.store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011841, VkglTestCase_011841_1, VkglTestCase_011841_2);

#define VkglTestCase_011842_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011842_2 "load_store.buffer.store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011842, VkglTestCase_011842_1, VkglTestCase_011842_2);
