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

#define VkglTestCase_043327_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043327_2 "olygon.poly_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043327, VkglTestCase_043327_1, VkglTestCase_043327_2);

#define VkglTestCase_043328_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043328_2 "olygon.poly_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043328, VkglTestCase_043328_1, VkglTestCase_043328_2);

#define VkglTestCase_043329_1 "dEQP-GLES3.functional.cli"
#define VkglTestCase_043329_2 "pping.polygon.poly_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043329, VkglTestCase_043329_1, VkglTestCase_043329_2);

#define VkglTestCase_043330_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043330_2 "lygon.poly_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043330, VkglTestCase_043330_1, VkglTestCase_043330_2);

#define VkglTestCase_043331_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043331_2 "lygon.poly_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043331, VkglTestCase_043331_1, VkglTestCase_043331_2);

#define VkglTestCase_043332_1 "dEQP-GLES3.functional.clipping.poly"
#define VkglTestCase_043332_2 "gon.large_poly_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043332, VkglTestCase_043332_1, VkglTestCase_043332_2);

#define VkglTestCase_043333_1 "dEQP-GLES3.functional.clipping.poly"
#define VkglTestCase_043333_2 "gon.large_poly_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043333, VkglTestCase_043333_1, VkglTestCase_043333_2);

#define VkglTestCase_043334_1 "dEQP-GLES3.functional.clippi"
#define VkglTestCase_043334_2 "ng.polygon.large_poly_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043334, VkglTestCase_043334_1, VkglTestCase_043334_2);

#define VkglTestCase_043335_1 "dEQP-GLES3.functional.clipping.polyg"
#define VkglTestCase_043335_2 "on.large_poly_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043335, VkglTestCase_043335_1, VkglTestCase_043335_2);

#define VkglTestCase_043336_1 "dEQP-GLES3.functional.clipping.polyg"
#define VkglTestCase_043336_2 "on.large_poly_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043336, VkglTestCase_043336_1, VkglTestCase_043336_2);

#define VkglTestCase_043337_1 "dEQP-GLES3.functional.clipp"
#define VkglTestCase_043337_2 "ing.polygon.poly_attrib_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043337, VkglTestCase_043337_1, VkglTestCase_043337_2);

#define VkglTestCase_043338_1 "dEQP-GLES3.functional.clipping.poly"
#define VkglTestCase_043338_2 "gon.poly_attrib_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043338, VkglTestCase_043338_1, VkglTestCase_043338_2);

#define VkglTestCase_043339_1 "dEQP-GLES3.functional.clipping.poly"
#define VkglTestCase_043339_2 "gon.poly_attrib_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043339, VkglTestCase_043339_1, VkglTestCase_043339_2);

#define VkglTestCase_043340_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043340_2 "ipping.polygon.multiple_0"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043340, VkglTestCase_043340_1, VkglTestCase_043340_2);

#define VkglTestCase_043341_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043341_2 "olygon.multiple_0_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043341, VkglTestCase_043341_1, VkglTestCase_043341_2);

#define VkglTestCase_043342_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043342_2 "olygon.multiple_0_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043342, VkglTestCase_043342_1, VkglTestCase_043342_2);

#define VkglTestCase_043343_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043343_2 "ipping.polygon.multiple_1"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043343, VkglTestCase_043343_1, VkglTestCase_043343_2);

#define VkglTestCase_043344_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043344_2 "olygon.multiple_1_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043344, VkglTestCase_043344_1, VkglTestCase_043344_2);

#define VkglTestCase_043345_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043345_2 "olygon.multiple_1_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043345, VkglTestCase_043345_1, VkglTestCase_043345_2);

#define VkglTestCase_043346_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043346_2 "ipping.polygon.multiple_2"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043346, VkglTestCase_043346_1, VkglTestCase_043346_2);

#define VkglTestCase_043347_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043347_2 "olygon.multiple_2_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043347, VkglTestCase_043347_1, VkglTestCase_043347_2);

#define VkglTestCase_043348_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043348_2 "olygon.multiple_2_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043348, VkglTestCase_043348_1, VkglTestCase_043348_2);

#define VkglTestCase_043349_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043349_2 "ipping.polygon.multiple_3"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043349, VkglTestCase_043349_1, VkglTestCase_043349_2);

#define VkglTestCase_043350_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043350_2 "olygon.multiple_3_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043350, VkglTestCase_043350_1, VkglTestCase_043350_2);

#define VkglTestCase_043351_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043351_2 "olygon.multiple_3_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043351, VkglTestCase_043351_1, VkglTestCase_043351_2);

#define VkglTestCase_043352_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043352_2 "ipping.polygon.multiple_4"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043352, VkglTestCase_043352_1, VkglTestCase_043352_2);

#define VkglTestCase_043353_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043353_2 "olygon.multiple_4_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043353, VkglTestCase_043353_1, VkglTestCase_043353_2);

#define VkglTestCase_043354_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043354_2 "olygon.multiple_4_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043354, VkglTestCase_043354_1, VkglTestCase_043354_2);

#define VkglTestCase_043355_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043355_2 "ipping.polygon.multiple_5"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043355, VkglTestCase_043355_1, VkglTestCase_043355_2);

#define VkglTestCase_043356_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043356_2 "olygon.multiple_5_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043356, VkglTestCase_043356_1, VkglTestCase_043356_2);

#define VkglTestCase_043357_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043357_2 "olygon.multiple_5_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043357, VkglTestCase_043357_1, VkglTestCase_043357_2);

#define VkglTestCase_043358_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043358_2 "ipping.polygon.multiple_6"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043358, VkglTestCase_043358_1, VkglTestCase_043358_2);

#define VkglTestCase_043359_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043359_2 "olygon.multiple_6_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043359, VkglTestCase_043359_1, VkglTestCase_043359_2);

#define VkglTestCase_043360_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043360_2 "olygon.multiple_6_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043360, VkglTestCase_043360_1, VkglTestCase_043360_2);

#define VkglTestCase_043361_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043361_2 "ipping.polygon.multiple_7"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043361, VkglTestCase_043361_1, VkglTestCase_043361_2);

#define VkglTestCase_043362_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043362_2 "olygon.multiple_7_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043362, VkglTestCase_043362_1, VkglTestCase_043362_2);

#define VkglTestCase_043363_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043363_2 "olygon.multiple_7_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043363, VkglTestCase_043363_1, VkglTestCase_043363_2);

#define VkglTestCase_043364_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043364_2 "ipping.polygon.multiple_8"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043364, VkglTestCase_043364_1, VkglTestCase_043364_2);

#define VkglTestCase_043365_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043365_2 "olygon.multiple_8_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043365, VkglTestCase_043365_1, VkglTestCase_043365_2);

#define VkglTestCase_043366_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043366_2 "olygon.multiple_8_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043366, VkglTestCase_043366_1, VkglTestCase_043366_2);

#define VkglTestCase_043367_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043367_2 "ipping.polygon.multiple_9"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043367, VkglTestCase_043367_1, VkglTestCase_043367_2);

#define VkglTestCase_043368_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043368_2 "olygon.multiple_9_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043368, VkglTestCase_043368_1, VkglTestCase_043368_2);

#define VkglTestCase_043369_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043369_2 "olygon.multiple_9_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043369, VkglTestCase_043369_1, VkglTestCase_043369_2);

#define VkglTestCase_043370_1 "dEQP-GLES3.functional.cli"
#define VkglTestCase_043370_2 "pping.polygon.multiple_10"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043370, VkglTestCase_043370_1, VkglTestCase_043370_2);

#define VkglTestCase_043371_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043371_2 "lygon.multiple_10_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043371, VkglTestCase_043371_1, VkglTestCase_043371_2);

#define VkglTestCase_043372_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043372_2 "lygon.multiple_10_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043372, VkglTestCase_043372_1, VkglTestCase_043372_2);

#define VkglTestCase_043373_1 "dEQP-GLES3.functional.cli"
#define VkglTestCase_043373_2 "pping.polygon.multiple_11"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043373, VkglTestCase_043373_1, VkglTestCase_043373_2);

#define VkglTestCase_043374_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043374_2 "lygon.multiple_11_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043374, VkglTestCase_043374_1, VkglTestCase_043374_2);

#define VkglTestCase_043375_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043375_2 "lygon.multiple_11_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043375, VkglTestCase_043375_1, VkglTestCase_043375_2);
