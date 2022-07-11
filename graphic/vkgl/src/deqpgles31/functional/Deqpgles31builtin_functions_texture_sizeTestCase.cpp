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
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002169_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002169_2 "nctions.texture_size.samples_1_texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002169, VkglTestCase_002169_1, VkglTestCase_002169_2);

#define VkglTestCase_002170_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002170_2 "nctions.texture_size.samples_4_texture_2d"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002170, VkglTestCase_002170_1, VkglTestCase_002170_2);

#define VkglTestCase_002171_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002171_2 "ions.texture_size.samples_1_texture_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002171, VkglTestCase_002171_1, VkglTestCase_002171_2);

#define VkglTestCase_002172_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002172_2 "ions.texture_size.samples_4_texture_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002172, VkglTestCase_002172_1, VkglTestCase_002172_2);

#define VkglTestCase_002173_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002173_2 "tions.texture_size.samples_1_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002173, VkglTestCase_002173_1, VkglTestCase_002173_2);

#define VkglTestCase_002174_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002174_2 "tions.texture_size.samples_4_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002174, VkglTestCase_002174_1, VkglTestCase_002174_2);

#define VkglTestCase_002175_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002175_2 "ns.texture_size.samples_1_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002175, VkglTestCase_002175_1, VkglTestCase_002175_2);

#define VkglTestCase_002176_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002176_2 "ns.texture_size.samples_4_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002176, VkglTestCase_002176_1, VkglTestCase_002176_2);

#define VkglTestCase_002177_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002177_2 "tions.texture_size.samples_1_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002177, VkglTestCase_002177_1, VkglTestCase_002177_2);

#define VkglTestCase_002178_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002178_2 "tions.texture_size.samples_4_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002178, VkglTestCase_002178_1, VkglTestCase_002178_2);

#define VkglTestCase_002179_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002179_2 "ns.texture_size.samples_1_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002179, VkglTestCase_002179_1, VkglTestCase_002179_2);

#define VkglTestCase_002180_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_002180_2 "ns.texture_size.samples_4_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002180, VkglTestCase_002180_1, VkglTestCase_002180_2);
