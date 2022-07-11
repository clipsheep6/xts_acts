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
#include "../ActsDeqpgles30024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023347_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023347_2 "tc_12x12.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023347, VkglTestCase_023347_1, VkglTestCase_023347_2);

#define VkglTestCase_023348_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023348_2 "tc_12x12.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023348, VkglTestCase_023348_1, VkglTestCase_023348_2);

#define VkglTestCase_023349_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023349_2 "c_12x12.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023349, VkglTestCase_023349_1, VkglTestCase_023349_2);

#define VkglTestCase_023350_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023350_2 "tc_12x12.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023350, VkglTestCase_023350_1, VkglTestCase_023350_2);

#define VkglTestCase_023351_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023351_2 "c_12x12.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023351, VkglTestCase_023351_1, VkglTestCase_023351_2);

#define VkglTestCase_023352_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023352_2 "tc_12x12.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023352, VkglTestCase_023352_1, VkglTestCase_023352_2);

#define VkglTestCase_023353_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023353_2 "c_12x12.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023353, VkglTestCase_023353_1, VkglTestCase_023353_2);

#define VkglTestCase_023354_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023354_2 "tc_12x12.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023354, VkglTestCase_023354_1, VkglTestCase_023354_2);

#define VkglTestCase_023355_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023355_2 "c_12x12.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023355, VkglTestCase_023355_1, VkglTestCase_023355_2);

#define VkglTestCase_023356_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023356_2 "c_12x12.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023356, VkglTestCase_023356_1, VkglTestCase_023356_2);

#define VkglTestCase_023357_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023357_2 "c_12x12.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023357, VkglTestCase_023357_1, VkglTestCase_023357_2);

#define VkglTestCase_023358_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023358_2 "c_12x12.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023358, VkglTestCase_023358_1, VkglTestCase_023358_2);

#define VkglTestCase_023359_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023359_2 "c_12x12.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023359, VkglTestCase_023359_1, VkglTestCase_023359_2);

#define VkglTestCase_023360_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023360_2 "tc_12x12.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023360, VkglTestCase_023360_1, VkglTestCase_023360_2);

#define VkglTestCase_023361_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023361_2 "c_12x12.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023361, VkglTestCase_023361_1, VkglTestCase_023361_2);

#define VkglTestCase_023362_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023362_2 "c_12x12.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023362, VkglTestCase_023362_1, VkglTestCase_023362_2);

#define VkglTestCase_023363_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023363_2 "c_12x12.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023363, VkglTestCase_023363_1, VkglTestCase_023363_2);

#define VkglTestCase_023364_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023364_2 "c_12x12.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023364, VkglTestCase_023364_1, VkglTestCase_023364_2);

#define VkglTestCase_023365_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023365_2 "_12x12.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023365, VkglTestCase_023365_1, VkglTestCase_023365_2);

#define VkglTestCase_023366_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023366_2 "_12x12.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023366, VkglTestCase_023366_1, VkglTestCase_023366_2);

#define VkglTestCase_023367_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023367_2 "12x12.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023367, VkglTestCase_023367_1, VkglTestCase_023367_2);

#define VkglTestCase_023368_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023368_2 "_12x12.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023368, VkglTestCase_023368_1, VkglTestCase_023368_2);

#define VkglTestCase_023369_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023369_2 "12x12.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023369, VkglTestCase_023369_1, VkglTestCase_023369_2);

#define VkglTestCase_023370_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023370_2 "_12x12.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023370, VkglTestCase_023370_1, VkglTestCase_023370_2);

#define VkglTestCase_023371_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023371_2 "12x12.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023371, VkglTestCase_023371_1, VkglTestCase_023371_2);

#define VkglTestCase_023372_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023372_2 "_12x12.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023372, VkglTestCase_023372_1, VkglTestCase_023372_2);

#define VkglTestCase_023373_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023373_2 "12x12.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023373, VkglTestCase_023373_1, VkglTestCase_023373_2);

#define VkglTestCase_023374_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023374_2 "12x12.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023374, VkglTestCase_023374_1, VkglTestCase_023374_2);

#define VkglTestCase_023375_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023375_2 "12x12.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023375, VkglTestCase_023375_1, VkglTestCase_023375_2);

#define VkglTestCase_023376_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023376_2 "12x12.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023376, VkglTestCase_023376_1, VkglTestCase_023376_2);

#define VkglTestCase_023377_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023377_2 "12x12.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023377, VkglTestCase_023377_1, VkglTestCase_023377_2);

#define VkglTestCase_023378_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023378_2 "_12x12.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023378, VkglTestCase_023378_1, VkglTestCase_023378_2);

#define VkglTestCase_023379_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023379_2 "12x12.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023379, VkglTestCase_023379_1, VkglTestCase_023379_2);

#define VkglTestCase_023380_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023380_2 "12x12.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023380, VkglTestCase_023380_1, VkglTestCase_023380_2);

#define VkglTestCase_023381_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023381_2 "12x12.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023381, VkglTestCase_023381_1, VkglTestCase_023381_2);

#define VkglTestCase_023382_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023382_2 "12x12.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023382, VkglTestCase_023382_1, VkglTestCase_023382_2);
