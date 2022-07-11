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
#include "../ActsDeqpgles30032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031322_1 "dEQP-GLES3.functional.fbo.completeness.at"
#define VkglTestCase_031322_2 "tachment_combinations.none_none_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031322, VkglTestCase_031322_1, VkglTestCase_031322_2);

#define VkglTestCase_031323_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031323_2 "ttachment_combinations.none_none_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031323, VkglTestCase_031323_1, VkglTestCase_031323_2);

#define VkglTestCase_031324_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031324_2 "ttachment_combinations.none_none_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031324, VkglTestCase_031324_1, VkglTestCase_031324_2);

#define VkglTestCase_031325_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031325_2 "ttachment_combinations.none_none_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031325, VkglTestCase_031325_1, VkglTestCase_031325_2);

#define VkglTestCase_031326_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031326_2 "ttachment_combinations.none_none_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031326, VkglTestCase_031326_1, VkglTestCase_031326_2);

#define VkglTestCase_031327_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031327_2 "ttachment_combinations.none_none_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031327, VkglTestCase_031327_1, VkglTestCase_031327_2);

#define VkglTestCase_031328_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031328_2 "ttachment_combinations.none_none_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031328, VkglTestCase_031328_1, VkglTestCase_031328_2);

#define VkglTestCase_031329_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031329_2 "ttachment_combinations.none_none_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031329, VkglTestCase_031329_1, VkglTestCase_031329_2);

#define VkglTestCase_031330_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031330_2 "ttachment_combinations.none_none_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031330, VkglTestCase_031330_1, VkglTestCase_031330_2);

#define VkglTestCase_031331_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031331_2 "ttachment_combinations.none_rbo_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031331, VkglTestCase_031331_1, VkglTestCase_031331_2);

#define VkglTestCase_031332_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031332_2 "ttachment_combinations.none_rbo_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031332, VkglTestCase_031332_1, VkglTestCase_031332_2);

#define VkglTestCase_031333_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031333_2 "ttachment_combinations.none_rbo_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031333, VkglTestCase_031333_1, VkglTestCase_031333_2);

#define VkglTestCase_031334_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031334_2 "ttachment_combinations.none_rbo_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031334, VkglTestCase_031334_1, VkglTestCase_031334_2);

#define VkglTestCase_031335_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031335_2 "attachment_combinations.none_rbo_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031335, VkglTestCase_031335_1, VkglTestCase_031335_2);

#define VkglTestCase_031336_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031336_2 "attachment_combinations.none_rbo_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031336, VkglTestCase_031336_1, VkglTestCase_031336_2);

#define VkglTestCase_031337_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031337_2 "ttachment_combinations.none_rbo_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031337, VkglTestCase_031337_1, VkglTestCase_031337_2);

#define VkglTestCase_031338_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031338_2 "attachment_combinations.none_rbo_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031338, VkglTestCase_031338_1, VkglTestCase_031338_2);

#define VkglTestCase_031339_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031339_2 "attachment_combinations.none_rbo_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031339, VkglTestCase_031339_1, VkglTestCase_031339_2);

#define VkglTestCase_031340_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031340_2 "ttachment_combinations.none_tex_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031340, VkglTestCase_031340_1, VkglTestCase_031340_2);

#define VkglTestCase_031341_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031341_2 "ttachment_combinations.none_tex_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031341, VkglTestCase_031341_1, VkglTestCase_031341_2);

#define VkglTestCase_031342_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031342_2 "ttachment_combinations.none_tex_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031342, VkglTestCase_031342_1, VkglTestCase_031342_2);

#define VkglTestCase_031343_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031343_2 "ttachment_combinations.none_tex_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031343, VkglTestCase_031343_1, VkglTestCase_031343_2);

#define VkglTestCase_031344_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031344_2 "attachment_combinations.none_tex_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031344, VkglTestCase_031344_1, VkglTestCase_031344_2);

#define VkglTestCase_031345_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031345_2 "attachment_combinations.none_tex_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031345, VkglTestCase_031345_1, VkglTestCase_031345_2);

#define VkglTestCase_031346_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031346_2 "ttachment_combinations.none_tex_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031346, VkglTestCase_031346_1, VkglTestCase_031346_2);

#define VkglTestCase_031347_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031347_2 "attachment_combinations.none_tex_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031347, VkglTestCase_031347_1, VkglTestCase_031347_2);

#define VkglTestCase_031348_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031348_2 "attachment_combinations.none_tex_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031348, VkglTestCase_031348_1, VkglTestCase_031348_2);

#define VkglTestCase_031349_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031349_2 "ttachment_combinations.rbo_none_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031349, VkglTestCase_031349_1, VkglTestCase_031349_2);

#define VkglTestCase_031350_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031350_2 "ttachment_combinations.rbo_none_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031350, VkglTestCase_031350_1, VkglTestCase_031350_2);

#define VkglTestCase_031351_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031351_2 "ttachment_combinations.rbo_none_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031351, VkglTestCase_031351_1, VkglTestCase_031351_2);

#define VkglTestCase_031352_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031352_2 "ttachment_combinations.rbo_none_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031352, VkglTestCase_031352_1, VkglTestCase_031352_2);

#define VkglTestCase_031353_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031353_2 "attachment_combinations.rbo_none_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031353, VkglTestCase_031353_1, VkglTestCase_031353_2);

#define VkglTestCase_031354_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031354_2 "attachment_combinations.rbo_none_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031354, VkglTestCase_031354_1, VkglTestCase_031354_2);

#define VkglTestCase_031355_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031355_2 "ttachment_combinations.rbo_none_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031355, VkglTestCase_031355_1, VkglTestCase_031355_2);

#define VkglTestCase_031356_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031356_2 "attachment_combinations.rbo_none_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031356, VkglTestCase_031356_1, VkglTestCase_031356_2);

#define VkglTestCase_031357_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031357_2 "attachment_combinations.rbo_none_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031357, VkglTestCase_031357_1, VkglTestCase_031357_2);

#define VkglTestCase_031358_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031358_2 "ttachment_combinations.rbo_rbo_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031358, VkglTestCase_031358_1, VkglTestCase_031358_2);

#define VkglTestCase_031359_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031359_2 "attachment_combinations.rbo_rbo_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031359, VkglTestCase_031359_1, VkglTestCase_031359_2);

#define VkglTestCase_031360_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031360_2 "attachment_combinations.rbo_rbo_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031360, VkglTestCase_031360_1, VkglTestCase_031360_2);

#define VkglTestCase_031361_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031361_2 "attachment_combinations.rbo_rbo_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031361, VkglTestCase_031361_1, VkglTestCase_031361_2);

#define VkglTestCase_031362_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031362_2 "attachment_combinations.rbo_rbo_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031362, VkglTestCase_031362_1, VkglTestCase_031362_2);

#define VkglTestCase_031363_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031363_2 "attachment_combinations.rbo_rbo_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031363, VkglTestCase_031363_1, VkglTestCase_031363_2);

#define VkglTestCase_031364_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031364_2 "attachment_combinations.rbo_rbo_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031364, VkglTestCase_031364_1, VkglTestCase_031364_2);

#define VkglTestCase_031365_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031365_2 "attachment_combinations.rbo_rbo_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031365, VkglTestCase_031365_1, VkglTestCase_031365_2);

#define VkglTestCase_031366_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031366_2 "attachment_combinations.rbo_rbo_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031366, VkglTestCase_031366_1, VkglTestCase_031366_2);

#define VkglTestCase_031367_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031367_2 "ttachment_combinations.rbo_tex_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031367, VkglTestCase_031367_1, VkglTestCase_031367_2);

#define VkglTestCase_031368_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031368_2 "attachment_combinations.rbo_tex_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031368, VkglTestCase_031368_1, VkglTestCase_031368_2);

#define VkglTestCase_031369_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031369_2 "attachment_combinations.rbo_tex_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031369, VkglTestCase_031369_1, VkglTestCase_031369_2);

#define VkglTestCase_031370_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031370_2 "attachment_combinations.rbo_tex_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031370, VkglTestCase_031370_1, VkglTestCase_031370_2);

#define VkglTestCase_031371_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031371_2 "attachment_combinations.rbo_tex_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031371, VkglTestCase_031371_1, VkglTestCase_031371_2);

#define VkglTestCase_031372_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031372_2 "attachment_combinations.rbo_tex_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031372, VkglTestCase_031372_1, VkglTestCase_031372_2);

#define VkglTestCase_031373_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031373_2 "attachment_combinations.rbo_tex_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031373, VkglTestCase_031373_1, VkglTestCase_031373_2);

#define VkglTestCase_031374_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031374_2 "attachment_combinations.rbo_tex_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031374, VkglTestCase_031374_1, VkglTestCase_031374_2);

#define VkglTestCase_031375_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031375_2 "attachment_combinations.rbo_tex_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031375, VkglTestCase_031375_1, VkglTestCase_031375_2);

#define VkglTestCase_031376_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031376_2 "ttachment_combinations.tex_none_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031376, VkglTestCase_031376_1, VkglTestCase_031376_2);

#define VkglTestCase_031377_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031377_2 "ttachment_combinations.tex_none_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031377, VkglTestCase_031377_1, VkglTestCase_031377_2);

#define VkglTestCase_031378_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031378_2 "ttachment_combinations.tex_none_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031378, VkglTestCase_031378_1, VkglTestCase_031378_2);

#define VkglTestCase_031379_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031379_2 "ttachment_combinations.tex_none_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031379, VkglTestCase_031379_1, VkglTestCase_031379_2);

#define VkglTestCase_031380_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031380_2 "attachment_combinations.tex_none_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031380, VkglTestCase_031380_1, VkglTestCase_031380_2);

#define VkglTestCase_031381_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031381_2 "attachment_combinations.tex_none_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031381, VkglTestCase_031381_1, VkglTestCase_031381_2);

#define VkglTestCase_031382_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031382_2 "ttachment_combinations.tex_none_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031382, VkglTestCase_031382_1, VkglTestCase_031382_2);

#define VkglTestCase_031383_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031383_2 "attachment_combinations.tex_none_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031383, VkglTestCase_031383_1, VkglTestCase_031383_2);

#define VkglTestCase_031384_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031384_2 "attachment_combinations.tex_none_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031384, VkglTestCase_031384_1, VkglTestCase_031384_2);

#define VkglTestCase_031385_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031385_2 "ttachment_combinations.tex_rbo_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031385, VkglTestCase_031385_1, VkglTestCase_031385_2);

#define VkglTestCase_031386_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031386_2 "attachment_combinations.tex_rbo_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031386, VkglTestCase_031386_1, VkglTestCase_031386_2);

#define VkglTestCase_031387_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031387_2 "attachment_combinations.tex_rbo_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031387, VkglTestCase_031387_1, VkglTestCase_031387_2);

#define VkglTestCase_031388_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031388_2 "attachment_combinations.tex_rbo_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031388, VkglTestCase_031388_1, VkglTestCase_031388_2);

#define VkglTestCase_031389_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031389_2 "attachment_combinations.tex_rbo_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031389, VkglTestCase_031389_1, VkglTestCase_031389_2);

#define VkglTestCase_031390_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031390_2 "attachment_combinations.tex_rbo_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031390, VkglTestCase_031390_1, VkglTestCase_031390_2);

#define VkglTestCase_031391_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031391_2 "attachment_combinations.tex_rbo_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031391, VkglTestCase_031391_1, VkglTestCase_031391_2);

#define VkglTestCase_031392_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031392_2 "attachment_combinations.tex_rbo_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031392, VkglTestCase_031392_1, VkglTestCase_031392_2);

#define VkglTestCase_031393_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031393_2 "attachment_combinations.tex_rbo_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031393, VkglTestCase_031393_1, VkglTestCase_031393_2);

#define VkglTestCase_031394_1 "dEQP-GLES3.functional.fbo.completeness.a"
#define VkglTestCase_031394_2 "ttachment_combinations.tex_tex_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031394, VkglTestCase_031394_1, VkglTestCase_031394_2);

#define VkglTestCase_031395_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031395_2 "attachment_combinations.tex_tex_none_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031395, VkglTestCase_031395_1, VkglTestCase_031395_2);

#define VkglTestCase_031396_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031396_2 "attachment_combinations.tex_tex_none_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031396, VkglTestCase_031396_1, VkglTestCase_031396_2);

#define VkglTestCase_031397_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031397_2 "attachment_combinations.tex_tex_rbo_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031397, VkglTestCase_031397_1, VkglTestCase_031397_2);

#define VkglTestCase_031398_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031398_2 "attachment_combinations.tex_tex_rbo_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031398, VkglTestCase_031398_1, VkglTestCase_031398_2);

#define VkglTestCase_031399_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031399_2 "attachment_combinations.tex_tex_rbo_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031399, VkglTestCase_031399_1, VkglTestCase_031399_2);

#define VkglTestCase_031400_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031400_2 "attachment_combinations.tex_tex_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031400, VkglTestCase_031400_1, VkglTestCase_031400_2);

#define VkglTestCase_031401_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031401_2 "attachment_combinations.tex_tex_tex_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031401, VkglTestCase_031401_1, VkglTestCase_031401_2);

#define VkglTestCase_031402_1 "dEQP-GLES3.functional.fbo.completeness."
#define VkglTestCase_031402_2 "attachment_combinations.tex_tex_tex_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031402, VkglTestCase_031402_1, VkglTestCase_031402_2);
