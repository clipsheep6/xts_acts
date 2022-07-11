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
#include "../ActsDeqpgles30007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006015_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006015_2 ".uniform_array.float_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006015, VkglTestCase_006015_1, VkglTestCase_006015_2);

#define VkglTestCase_006016_1 "dEQP-GLES3.functional.shaders.indexing."
#define VkglTestCase_006016_2 "uniform_array.float_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006016, VkglTestCase_006016_1, VkglTestCase_006016_2);

#define VkglTestCase_006017_1 "dEQP-GLES3.functional.shaders.indexing."
#define VkglTestCase_006017_2 "uniform_array.float_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006017, VkglTestCase_006017_1, VkglTestCase_006017_2);

#define VkglTestCase_006018_1 "dEQP-GLES3.functional.shaders.indexing.u"
#define VkglTestCase_006018_2 "niform_array.float_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006018, VkglTestCase_006018_1, VkglTestCase_006018_2);

#define VkglTestCase_006019_1 "dEQP-GLES3.functional.shaders.indexing.un"
#define VkglTestCase_006019_2 "iform_array.float_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006019, VkglTestCase_006019_1, VkglTestCase_006019_2);

#define VkglTestCase_006020_1 "dEQP-GLES3.functional.shaders.indexing.uni"
#define VkglTestCase_006020_2 "form_array.float_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006020, VkglTestCase_006020_1, VkglTestCase_006020_2);

#define VkglTestCase_006021_1 "dEQP-GLES3.functional.shaders.indexing.un"
#define VkglTestCase_006021_2 "iform_array.float_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006021, VkglTestCase_006021_1, VkglTestCase_006021_2);

#define VkglTestCase_006022_1 "dEQP-GLES3.functional.shaders.indexing.uni"
#define VkglTestCase_006022_2 "form_array.float_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006022, VkglTestCase_006022_1, VkglTestCase_006022_2);

#define VkglTestCase_006023_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006023_2 ".uniform_array.vec2_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006023, VkglTestCase_006023_1, VkglTestCase_006023_2);

#define VkglTestCase_006024_1 "dEQP-GLES3.functional.shaders.indexing."
#define VkglTestCase_006024_2 "uniform_array.vec2_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006024, VkglTestCase_006024_1, VkglTestCase_006024_2);

#define VkglTestCase_006025_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006025_2 ".uniform_array.vec2_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006025, VkglTestCase_006025_1, VkglTestCase_006025_2);

#define VkglTestCase_006026_1 "dEQP-GLES3.functional.shaders.indexing."
#define VkglTestCase_006026_2 "uniform_array.vec2_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006026, VkglTestCase_006026_1, VkglTestCase_006026_2);

#define VkglTestCase_006027_1 "dEQP-GLES3.functional.shaders.indexing.u"
#define VkglTestCase_006027_2 "niform_array.vec2_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006027, VkglTestCase_006027_1, VkglTestCase_006027_2);

#define VkglTestCase_006028_1 "dEQP-GLES3.functional.shaders.indexing.un"
#define VkglTestCase_006028_2 "iform_array.vec2_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006028, VkglTestCase_006028_1, VkglTestCase_006028_2);

#define VkglTestCase_006029_1 "dEQP-GLES3.functional.shaders.indexing.un"
#define VkglTestCase_006029_2 "iform_array.vec2_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006029, VkglTestCase_006029_1, VkglTestCase_006029_2);

#define VkglTestCase_006030_1 "dEQP-GLES3.functional.shaders.indexing.uni"
#define VkglTestCase_006030_2 "form_array.vec2_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006030, VkglTestCase_006030_1, VkglTestCase_006030_2);

#define VkglTestCase_006031_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006031_2 ".uniform_array.vec3_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006031, VkglTestCase_006031_1, VkglTestCase_006031_2);

#define VkglTestCase_006032_1 "dEQP-GLES3.functional.shaders.indexing."
#define VkglTestCase_006032_2 "uniform_array.vec3_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006032, VkglTestCase_006032_1, VkglTestCase_006032_2);

#define VkglTestCase_006033_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006033_2 ".uniform_array.vec3_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006033, VkglTestCase_006033_1, VkglTestCase_006033_2);

#define VkglTestCase_006034_1 "dEQP-GLES3.functional.shaders.indexing."
#define VkglTestCase_006034_2 "uniform_array.vec3_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006034, VkglTestCase_006034_1, VkglTestCase_006034_2);

#define VkglTestCase_006035_1 "dEQP-GLES3.functional.shaders.indexing.u"
#define VkglTestCase_006035_2 "niform_array.vec3_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006035, VkglTestCase_006035_1, VkglTestCase_006035_2);

#define VkglTestCase_006036_1 "dEQP-GLES3.functional.shaders.indexing.un"
#define VkglTestCase_006036_2 "iform_array.vec3_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006036, VkglTestCase_006036_1, VkglTestCase_006036_2);

#define VkglTestCase_006037_1 "dEQP-GLES3.functional.shaders.indexing.un"
#define VkglTestCase_006037_2 "iform_array.vec3_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006037, VkglTestCase_006037_1, VkglTestCase_006037_2);

#define VkglTestCase_006038_1 "dEQP-GLES3.functional.shaders.indexing.uni"
#define VkglTestCase_006038_2 "form_array.vec3_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006038, VkglTestCase_006038_1, VkglTestCase_006038_2);

#define VkglTestCase_006039_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006039_2 ".uniform_array.vec4_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006039, VkglTestCase_006039_1, VkglTestCase_006039_2);

#define VkglTestCase_006040_1 "dEQP-GLES3.functional.shaders.indexing."
#define VkglTestCase_006040_2 "uniform_array.vec4_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006040, VkglTestCase_006040_1, VkglTestCase_006040_2);

#define VkglTestCase_006041_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006041_2 ".uniform_array.vec4_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006041, VkglTestCase_006041_1, VkglTestCase_006041_2);

#define VkglTestCase_006042_1 "dEQP-GLES3.functional.shaders.indexing."
#define VkglTestCase_006042_2 "uniform_array.vec4_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006042, VkglTestCase_006042_1, VkglTestCase_006042_2);

#define VkglTestCase_006043_1 "dEQP-GLES3.functional.shaders.indexing.u"
#define VkglTestCase_006043_2 "niform_array.vec4_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006043, VkglTestCase_006043_1, VkglTestCase_006043_2);

#define VkglTestCase_006044_1 "dEQP-GLES3.functional.shaders.indexing.un"
#define VkglTestCase_006044_2 "iform_array.vec4_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006044, VkglTestCase_006044_1, VkglTestCase_006044_2);

#define VkglTestCase_006045_1 "dEQP-GLES3.functional.shaders.indexing.un"
#define VkglTestCase_006045_2 "iform_array.vec4_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006045, VkglTestCase_006045_1, VkglTestCase_006045_2);

#define VkglTestCase_006046_1 "dEQP-GLES3.functional.shaders.indexing.uni"
#define VkglTestCase_006046_2 "form_array.vec4_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006046, VkglTestCase_006046_1, VkglTestCase_006046_2);
