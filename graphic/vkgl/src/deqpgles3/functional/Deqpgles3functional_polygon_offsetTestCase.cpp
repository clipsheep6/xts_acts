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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043903_1 "dEQP-GLES3.functional.pol"
#define VkglTestCase_043903_2 "ygon_offset.default_enable"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043903, VkglTestCase_043903_1, VkglTestCase_043903_2);

#define VkglTestCase_043904_1 "dEQP-GLES3.functional.polygon_offs"
#define VkglTestCase_043904_2 "et.default_displacement_with_units"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043904, VkglTestCase_043904_1, VkglTestCase_043904_2);

#define VkglTestCase_043905_1 "dEQP-GLES3.functional.polygon_o"
#define VkglTestCase_043905_2 "ffset.default_render_with_units"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043905, VkglTestCase_043905_1, VkglTestCase_043905_2);

#define VkglTestCase_043906_1 "dEQP-GLES3.functional.polygon_o"
#define VkglTestCase_043906_2 "ffset.default_render_with_factor"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043906, VkglTestCase_043906_1, VkglTestCase_043906_2);

#define VkglTestCase_043907_1 "dEQP-GLES3.functional.polygon"
#define VkglTestCase_043907_2 "_offset.default_factor_0_slope"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043907, VkglTestCase_043907_1, VkglTestCase_043907_2);

#define VkglTestCase_043908_1 "dEQP-GLES3.functional.pol"
#define VkglTestCase_043908_2 "ygon_offset.fixed16_enable"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043908, VkglTestCase_043908_1, VkglTestCase_043908_2);

#define VkglTestCase_043909_1 "dEQP-GLES3.functional.polygon_offs"
#define VkglTestCase_043909_2 "et.fixed16_displacement_with_units"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043909, VkglTestCase_043909_1, VkglTestCase_043909_2);

#define VkglTestCase_043910_1 "dEQP-GLES3.functional.polygon_o"
#define VkglTestCase_043910_2 "ffset.fixed16_render_with_units"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043910, VkglTestCase_043910_1, VkglTestCase_043910_2);

#define VkglTestCase_043911_1 "dEQP-GLES3.functional.polygon_o"
#define VkglTestCase_043911_2 "ffset.fixed16_render_with_factor"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043911, VkglTestCase_043911_1, VkglTestCase_043911_2);

#define VkglTestCase_043912_1 "dEQP-GLES3.functional.polygon"
#define VkglTestCase_043912_2 "_offset.fixed16_factor_0_slope"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043912, VkglTestCase_043912_1, VkglTestCase_043912_2);

#define VkglTestCase_043913_1 "dEQP-GLES3.functional.pol"
#define VkglTestCase_043913_2 "ygon_offset.fixed24_enable"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043913, VkglTestCase_043913_1, VkglTestCase_043913_2);

#define VkglTestCase_043914_1 "dEQP-GLES3.functional.polygon_offs"
#define VkglTestCase_043914_2 "et.fixed24_displacement_with_units"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043914, VkglTestCase_043914_1, VkglTestCase_043914_2);

#define VkglTestCase_043915_1 "dEQP-GLES3.functional.polygon_o"
#define VkglTestCase_043915_2 "ffset.fixed24_render_with_units"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043915, VkglTestCase_043915_1, VkglTestCase_043915_2);

#define VkglTestCase_043916_1 "dEQP-GLES3.functional.polygon_o"
#define VkglTestCase_043916_2 "ffset.fixed24_render_with_factor"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043916, VkglTestCase_043916_1, VkglTestCase_043916_2);

#define VkglTestCase_043917_1 "dEQP-GLES3.functional.polygon"
#define VkglTestCase_043917_2 "_offset.fixed24_factor_0_slope"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043917, VkglTestCase_043917_1, VkglTestCase_043917_2);

#define VkglTestCase_043918_1 "dEQP-GLES3.functional.pol"
#define VkglTestCase_043918_2 "ygon_offset.float32_enable"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043918, VkglTestCase_043918_1, VkglTestCase_043918_2);

#define VkglTestCase_043919_1 "dEQP-GLES3.functional.polygon_offs"
#define VkglTestCase_043919_2 "et.float32_displacement_with_units"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043919, VkglTestCase_043919_1, VkglTestCase_043919_2);

#define VkglTestCase_043920_1 "dEQP-GLES3.functional.polygon_o"
#define VkglTestCase_043920_2 "ffset.float32_render_with_units"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043920, VkglTestCase_043920_1, VkglTestCase_043920_2);

#define VkglTestCase_043921_1 "dEQP-GLES3.functional.polygon_o"
#define VkglTestCase_043921_2 "ffset.float32_render_with_factor"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043921, VkglTestCase_043921_1, VkglTestCase_043921_2);

#define VkglTestCase_043922_1 "dEQP-GLES3.functional.polygon"
#define VkglTestCase_043922_2 "_offset.float32_factor_0_slope"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043922, VkglTestCase_043922_1, VkglTestCase_043922_2);
