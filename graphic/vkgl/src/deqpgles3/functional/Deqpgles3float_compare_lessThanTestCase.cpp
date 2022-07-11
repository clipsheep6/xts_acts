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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013390_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013390_2 "float_compare.lessThan.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013390, VkglTestCase_013390_1, VkglTestCase_013390_2);

#define VkglTestCase_013391_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013391_2 "loat_compare.lessThan.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013391, VkglTestCase_013391_1, VkglTestCase_013391_2);

#define VkglTestCase_013392_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013392_2 "loat_compare.lessThan.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013392, VkglTestCase_013392_1, VkglTestCase_013392_2);

#define VkglTestCase_013393_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013393_2 "oat_compare.lessThan.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013393, VkglTestCase_013393_1, VkglTestCase_013393_2);

#define VkglTestCase_013394_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013394_2 "float_compare.lessThan.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013394, VkglTestCase_013394_1, VkglTestCase_013394_2);

#define VkglTestCase_013395_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013395_2 "loat_compare.lessThan.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013395, VkglTestCase_013395_1, VkglTestCase_013395_2);

#define VkglTestCase_013396_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013396_2 "float_compare.lessThan.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013396, VkglTestCase_013396_1, VkglTestCase_013396_2);

#define VkglTestCase_013397_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013397_2 "loat_compare.lessThan.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013397, VkglTestCase_013397_1, VkglTestCase_013397_2);

#define VkglTestCase_013398_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013398_2 "loat_compare.lessThan.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013398, VkglTestCase_013398_1, VkglTestCase_013398_2);

#define VkglTestCase_013399_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013399_2 "oat_compare.lessThan.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013399, VkglTestCase_013399_1, VkglTestCase_013399_2);

#define VkglTestCase_013400_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013400_2 "float_compare.lessThan.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013400, VkglTestCase_013400_1, VkglTestCase_013400_2);

#define VkglTestCase_013401_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013401_2 "loat_compare.lessThan.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013401, VkglTestCase_013401_1, VkglTestCase_013401_2);

#define VkglTestCase_013402_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013402_2 "float_compare.lessThan.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013402, VkglTestCase_013402_1, VkglTestCase_013402_2);

#define VkglTestCase_013403_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013403_2 "loat_compare.lessThan.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013403, VkglTestCase_013403_1, VkglTestCase_013403_2);

#define VkglTestCase_013404_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013404_2 "loat_compare.lessThan.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013404, VkglTestCase_013404_1, VkglTestCase_013404_2);

#define VkglTestCase_013405_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013405_2 "oat_compare.lessThan.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013405, VkglTestCase_013405_1, VkglTestCase_013405_2);

#define VkglTestCase_013406_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013406_2 "float_compare.lessThan.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013406, VkglTestCase_013406_1, VkglTestCase_013406_2);

#define VkglTestCase_013407_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013407_2 "loat_compare.lessThan.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013407, VkglTestCase_013407_1, VkglTestCase_013407_2);
