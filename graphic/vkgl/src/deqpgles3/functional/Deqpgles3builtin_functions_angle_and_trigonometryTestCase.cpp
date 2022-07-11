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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019686_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019686_2 "ltin_functions.angle_and_trigonometry.sin_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019686, VkglTestCase_019686_1, VkglTestCase_019686_2);

#define VkglTestCase_019687_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019687_2 "tin_functions.angle_and_trigonometry.sin_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019687, VkglTestCase_019687_1, VkglTestCase_019687_2);

#define VkglTestCase_019688_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019688_2 "iltin_functions.angle_and_trigonometry.sin_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019688, VkglTestCase_019688_1, VkglTestCase_019688_2);

#define VkglTestCase_019689_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019689_2 "ltin_functions.angle_and_trigonometry.sin_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019689, VkglTestCase_019689_1, VkglTestCase_019689_2);

#define VkglTestCase_019690_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019690_2 "iltin_functions.angle_and_trigonometry.sin_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019690, VkglTestCase_019690_1, VkglTestCase_019690_2);

#define VkglTestCase_019691_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019691_2 "ltin_functions.angle_and_trigonometry.sin_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019691, VkglTestCase_019691_1, VkglTestCase_019691_2);

#define VkglTestCase_019692_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019692_2 "iltin_functions.angle_and_trigonometry.sin_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019692, VkglTestCase_019692_1, VkglTestCase_019692_2);

#define VkglTestCase_019693_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019693_2 "ltin_functions.angle_and_trigonometry.sin_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019693, VkglTestCase_019693_1, VkglTestCase_019693_2);

#define VkglTestCase_019694_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019694_2 "ltin_functions.angle_and_trigonometry.cos_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019694, VkglTestCase_019694_1, VkglTestCase_019694_2);

#define VkglTestCase_019695_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019695_2 "tin_functions.angle_and_trigonometry.cos_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019695, VkglTestCase_019695_1, VkglTestCase_019695_2);

#define VkglTestCase_019696_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019696_2 "iltin_functions.angle_and_trigonometry.cos_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019696, VkglTestCase_019696_1, VkglTestCase_019696_2);

#define VkglTestCase_019697_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019697_2 "ltin_functions.angle_and_trigonometry.cos_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019697, VkglTestCase_019697_1, VkglTestCase_019697_2);

#define VkglTestCase_019698_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019698_2 "iltin_functions.angle_and_trigonometry.cos_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019698, VkglTestCase_019698_1, VkglTestCase_019698_2);

#define VkglTestCase_019699_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019699_2 "ltin_functions.angle_and_trigonometry.cos_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019699, VkglTestCase_019699_1, VkglTestCase_019699_2);

#define VkglTestCase_019700_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019700_2 "iltin_functions.angle_and_trigonometry.cos_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019700, VkglTestCase_019700_1, VkglTestCase_019700_2);

#define VkglTestCase_019701_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019701_2 "ltin_functions.angle_and_trigonometry.cos_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019701, VkglTestCase_019701_1, VkglTestCase_019701_2);

#define VkglTestCase_019702_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019702_2 "ltin_functions.angle_and_trigonometry.asin_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019702, VkglTestCase_019702_1, VkglTestCase_019702_2);

#define VkglTestCase_019703_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019703_2 "tin_functions.angle_and_trigonometry.asin_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019703, VkglTestCase_019703_1, VkglTestCase_019703_2);

#define VkglTestCase_019704_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019704_2 "ltin_functions.angle_and_trigonometry.asin_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019704, VkglTestCase_019704_1, VkglTestCase_019704_2);

#define VkglTestCase_019705_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019705_2 "tin_functions.angle_and_trigonometry.asin_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019705, VkglTestCase_019705_1, VkglTestCase_019705_2);

#define VkglTestCase_019706_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019706_2 "ltin_functions.angle_and_trigonometry.asin_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019706, VkglTestCase_019706_1, VkglTestCase_019706_2);

#define VkglTestCase_019707_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019707_2 "tin_functions.angle_and_trigonometry.asin_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019707, VkglTestCase_019707_1, VkglTestCase_019707_2);

#define VkglTestCase_019708_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019708_2 "ltin_functions.angle_and_trigonometry.asin_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019708, VkglTestCase_019708_1, VkglTestCase_019708_2);

#define VkglTestCase_019709_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019709_2 "tin_functions.angle_and_trigonometry.asin_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019709, VkglTestCase_019709_1, VkglTestCase_019709_2);

#define VkglTestCase_019710_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019710_2 "ltin_functions.angle_and_trigonometry.acos_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019710, VkglTestCase_019710_1, VkglTestCase_019710_2);

#define VkglTestCase_019711_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019711_2 "tin_functions.angle_and_trigonometry.acos_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019711, VkglTestCase_019711_1, VkglTestCase_019711_2);

#define VkglTestCase_019712_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019712_2 "ltin_functions.angle_and_trigonometry.acos_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019712, VkglTestCase_019712_1, VkglTestCase_019712_2);

#define VkglTestCase_019713_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019713_2 "tin_functions.angle_and_trigonometry.acos_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019713, VkglTestCase_019713_1, VkglTestCase_019713_2);

#define VkglTestCase_019714_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019714_2 "ltin_functions.angle_and_trigonometry.acos_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019714, VkglTestCase_019714_1, VkglTestCase_019714_2);

#define VkglTestCase_019715_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019715_2 "tin_functions.angle_and_trigonometry.acos_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019715, VkglTestCase_019715_1, VkglTestCase_019715_2);

#define VkglTestCase_019716_1 "dEQP-GLES3.functional.shaders.constant_expressions.bui"
#define VkglTestCase_019716_2 "ltin_functions.angle_and_trigonometry.acos_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019716, VkglTestCase_019716_1, VkglTestCase_019716_2);

#define VkglTestCase_019717_1 "dEQP-GLES3.functional.shaders.constant_expressions.buil"
#define VkglTestCase_019717_2 "tin_functions.angle_and_trigonometry.acos_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019717, VkglTestCase_019717_1, VkglTestCase_019717_2);
