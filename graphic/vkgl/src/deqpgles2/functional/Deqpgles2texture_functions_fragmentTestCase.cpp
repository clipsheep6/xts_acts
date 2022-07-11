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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007814_1 "dEQP-GLES2.functional.shaders.tex"
#define VkglTestCase_007814_2 "ture_functions.fragment.texture2d"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007814, VkglTestCase_007814_1, VkglTestCase_007814_2);

#define VkglTestCase_007815_1 "dEQP-GLES2.functional.shaders.textu"
#define VkglTestCase_007815_2 "re_functions.fragment.texture2d_bias"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007815, VkglTestCase_007815_1, VkglTestCase_007815_2);

#define VkglTestCase_007816_1 "dEQP-GLES2.functional.shaders.texture"
#define VkglTestCase_007816_2 "_functions.fragment.texture2dproj_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007816, VkglTestCase_007816_1, VkglTestCase_007816_2);

#define VkglTestCase_007817_1 "dEQP-GLES2.functional.shaders.texture"
#define VkglTestCase_007817_2 "_functions.fragment.texture2dproj_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007817, VkglTestCase_007817_1, VkglTestCase_007817_2);

#define VkglTestCase_007818_1 "dEQP-GLES2.functional.shaders.texture_fu"
#define VkglTestCase_007818_2 "nctions.fragment.texture2dproj_vec3_bias"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007818, VkglTestCase_007818_1, VkglTestCase_007818_2);

#define VkglTestCase_007819_1 "dEQP-GLES2.functional.shaders.texture_fu"
#define VkglTestCase_007819_2 "nctions.fragment.texture2dproj_vec4_bias"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007819, VkglTestCase_007819_1, VkglTestCase_007819_2);

#define VkglTestCase_007820_1 "dEQP-GLES2.functional.shaders.text"
#define VkglTestCase_007820_2 "ure_functions.fragment.texturecube"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007820, VkglTestCase_007820_1, VkglTestCase_007820_2);

#define VkglTestCase_007821_1 "dEQP-GLES2.functional.shaders.textur"
#define VkglTestCase_007821_2 "e_functions.fragment.texturecube_bias"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007821, VkglTestCase_007821_1, VkglTestCase_007821_2);
