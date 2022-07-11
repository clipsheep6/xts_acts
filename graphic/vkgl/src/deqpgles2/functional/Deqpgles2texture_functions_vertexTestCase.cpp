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

#define VkglTestCase_007806_1 "dEQP-GLES2.functional.shaders.te"
#define VkglTestCase_007806_2 "xture_functions.vertex.texture2d"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007806, VkglTestCase_007806_1, VkglTestCase_007806_2);

#define VkglTestCase_007807_1 "dEQP-GLES2.functional.shaders.textur"
#define VkglTestCase_007807_2 "e_functions.vertex.texture2dproj_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007807, VkglTestCase_007807_1, VkglTestCase_007807_2);

#define VkglTestCase_007808_1 "dEQP-GLES2.functional.shaders.textur"
#define VkglTestCase_007808_2 "e_functions.vertex.texture2dproj_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007808, VkglTestCase_007808_1, VkglTestCase_007808_2);

#define VkglTestCase_007809_1 "dEQP-GLES2.functional.shaders.tex"
#define VkglTestCase_007809_2 "ture_functions.vertex.texture2dlod"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007809, VkglTestCase_007809_1, VkglTestCase_007809_2);

#define VkglTestCase_007810_1 "dEQP-GLES2.functional.shaders.texture_"
#define VkglTestCase_007810_2 "functions.vertex.texture2dprojlod_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007810, VkglTestCase_007810_1, VkglTestCase_007810_2);

#define VkglTestCase_007811_1 "dEQP-GLES2.functional.shaders.texture_"
#define VkglTestCase_007811_2 "functions.vertex.texture2dprojlod_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007811, VkglTestCase_007811_1, VkglTestCase_007811_2);

#define VkglTestCase_007812_1 "dEQP-GLES2.functional.shaders.tex"
#define VkglTestCase_007812_2 "ture_functions.vertex.texturecube"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007812, VkglTestCase_007812_1, VkglTestCase_007812_2);

#define VkglTestCase_007813_1 "dEQP-GLES2.functional.shaders.text"
#define VkglTestCase_007813_2 "ure_functions.vertex.texturecubelod"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007813, VkglTestCase_007813_1, VkglTestCase_007813_2);
