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

#define VkglTestCase_011887_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011887_2 "tore.buffer.qualifiers.coherent_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011887, VkglTestCase_011887_1, VkglTestCase_011887_2);

#define VkglTestCase_011888_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011888_2 "tore.buffer.qualifiers.volatile_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011888, VkglTestCase_011888_1, VkglTestCase_011888_2);

#define VkglTestCase_011889_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011889_2 "ore.buffer.qualifiers.coherent_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011889, VkglTestCase_011889_1, VkglTestCase_011889_2);

#define VkglTestCase_011890_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011890_2 "ore.buffer.qualifiers.volatile_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011890, VkglTestCase_011890_1, VkglTestCase_011890_2);

#define VkglTestCase_011891_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011891_2 "tore.buffer.qualifiers.coherent_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011891, VkglTestCase_011891_1, VkglTestCase_011891_2);

#define VkglTestCase_011892_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011892_2 "tore.buffer.qualifiers.volatile_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011892, VkglTestCase_011892_1, VkglTestCase_011892_2);

#define VkglTestCase_011893_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011893_2 "_store.buffer.qualifiers.restrict"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011893, VkglTestCase_011893_1, VkglTestCase_011893_2);
