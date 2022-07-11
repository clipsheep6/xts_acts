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

#define VkglTestCase_011229_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011229_2 "_load_store.2d.store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011229, VkglTestCase_011229_1, VkglTestCase_011229_2);

#define VkglTestCase_011230_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011230_2 "_load_store.2d.store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011230, VkglTestCase_011230_1, VkglTestCase_011230_2);

#define VkglTestCase_011231_1 "dEQP-GLES31.functional.ima"
#define VkglTestCase_011231_2 "ge_load_store.2d.store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011231, VkglTestCase_011231_1, VkglTestCase_011231_2);

#define VkglTestCase_011232_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011232_2 "_load_store.2d.store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011232, VkglTestCase_011232_1, VkglTestCase_011232_2);

#define VkglTestCase_011233_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011233_2 "_load_store.2d.store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011233, VkglTestCase_011233_1, VkglTestCase_011233_2);

#define VkglTestCase_011234_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011234_2 "_load_store.2d.store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011234, VkglTestCase_011234_1, VkglTestCase_011234_2);

#define VkglTestCase_011235_1 "dEQP-GLES31.functional.imag"
#define VkglTestCase_011235_2 "e_load_store.2d.store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011235, VkglTestCase_011235_1, VkglTestCase_011235_2);

#define VkglTestCase_011236_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011236_2 "_load_store.2d.store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011236, VkglTestCase_011236_1, VkglTestCase_011236_2);

#define VkglTestCase_011237_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011237_2 "_load_store.2d.store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011237, VkglTestCase_011237_1, VkglTestCase_011237_2);

#define VkglTestCase_011238_1 "dEQP-GLES31.functional.imag"
#define VkglTestCase_011238_2 "e_load_store.2d.store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011238, VkglTestCase_011238_1, VkglTestCase_011238_2);

#define VkglTestCase_011239_1 "dEQP-GLES31.functional.ima"
#define VkglTestCase_011239_2 "ge_load_store.2d.store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011239, VkglTestCase_011239_1, VkglTestCase_011239_2);

#define VkglTestCase_011240_1 "dEQP-GLES31.functional.imag"
#define VkglTestCase_011240_2 "e_load_store.2d.store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011240, VkglTestCase_011240_1, VkglTestCase_011240_2);

#define VkglTestCase_011241_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011241_2 "oad_store.2d.store.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011241, VkglTestCase_011241_1, VkglTestCase_011241_2);
