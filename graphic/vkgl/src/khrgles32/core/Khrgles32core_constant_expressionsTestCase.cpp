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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000325_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000325_2 "ions.basic_radians_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000325, VkglTestCase_000325_1, VkglTestCase_000325_2);

#define VkglTestCase_000326_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000326_2 "ns.basic_radians_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000326, VkglTestCase_000326_1, VkglTestCase_000326_2);

#define VkglTestCase_000327_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000327_2 "ons.basic_radians_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000327, VkglTestCase_000327_1, VkglTestCase_000327_2);

#define VkglTestCase_000328_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000328_2 "ions.basic_radians_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000328, VkglTestCase_000328_1, VkglTestCase_000328_2);

#define VkglTestCase_000329_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000329_2 "ns.basic_radians_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000329, VkglTestCase_000329_1, VkglTestCase_000329_2);

#define VkglTestCase_000330_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000330_2 "ions.basic_radians_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000330, VkglTestCase_000330_1, VkglTestCase_000330_2);

#define VkglTestCase_000331_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000331_2 "ions.basic_radians_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000331, VkglTestCase_000331_1, VkglTestCase_000331_2);

#define VkglTestCase_000332_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000332_2 "ns.basic_radians_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000332, VkglTestCase_000332_1, VkglTestCase_000332_2);

#define VkglTestCase_000333_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000333_2 "ions.basic_radians_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000333, VkglTestCase_000333_1, VkglTestCase_000333_2);

#define VkglTestCase_000334_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000334_2 "ions.basic_radians_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000334, VkglTestCase_000334_1, VkglTestCase_000334_2);

#define VkglTestCase_000335_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000335_2 "ns.basic_radians_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000335, VkglTestCase_000335_1, VkglTestCase_000335_2);

#define VkglTestCase_000336_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000336_2 "ions.basic_radians_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000336, VkglTestCase_000336_1, VkglTestCase_000336_2);

#define VkglTestCase_000337_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000337_2 "ions.basic_degrees_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000337, VkglTestCase_000337_1, VkglTestCase_000337_2);

#define VkglTestCase_000338_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000338_2 "ns.basic_degrees_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000338, VkglTestCase_000338_1, VkglTestCase_000338_2);

#define VkglTestCase_000339_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000339_2 "ons.basic_degrees_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000339, VkglTestCase_000339_1, VkglTestCase_000339_2);

#define VkglTestCase_000340_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000340_2 "ions.basic_degrees_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000340, VkglTestCase_000340_1, VkglTestCase_000340_2);

#define VkglTestCase_000341_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000341_2 "ns.basic_degrees_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000341, VkglTestCase_000341_1, VkglTestCase_000341_2);

#define VkglTestCase_000342_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000342_2 "ions.basic_degrees_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000342, VkglTestCase_000342_1, VkglTestCase_000342_2);

#define VkglTestCase_000343_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000343_2 "ions.basic_degrees_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000343, VkglTestCase_000343_1, VkglTestCase_000343_2);

#define VkglTestCase_000344_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000344_2 "ns.basic_degrees_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000344, VkglTestCase_000344_1, VkglTestCase_000344_2);

#define VkglTestCase_000345_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000345_2 "ions.basic_degrees_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000345, VkglTestCase_000345_1, VkglTestCase_000345_2);

#define VkglTestCase_000346_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000346_2 "ions.basic_degrees_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000346, VkglTestCase_000346_1, VkglTestCase_000346_2);

#define VkglTestCase_000347_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000347_2 "ns.basic_degrees_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000347, VkglTestCase_000347_1, VkglTestCase_000347_2);

#define VkglTestCase_000348_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000348_2 "ions.basic_degrees_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000348, VkglTestCase_000348_1, VkglTestCase_000348_2);

#define VkglTestCase_000349_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000349_2 "ssions.basic_sin_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000349, VkglTestCase_000349_1, VkglTestCase_000349_2);

#define VkglTestCase_000350_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000350_2 "ions.basic_sin_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000350, VkglTestCase_000350_1, VkglTestCase_000350_2);

#define VkglTestCase_000351_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000351_2 "sions.basic_sin_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000351, VkglTestCase_000351_1, VkglTestCase_000351_2);

#define VkglTestCase_000352_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000352_2 "ssions.basic_sin_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000352, VkglTestCase_000352_1, VkglTestCase_000352_2);

#define VkglTestCase_000353_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000353_2 "ions.basic_sin_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000353, VkglTestCase_000353_1, VkglTestCase_000353_2);

#define VkglTestCase_000354_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000354_2 "ssions.basic_sin_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000354, VkglTestCase_000354_1, VkglTestCase_000354_2);

#define VkglTestCase_000355_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000355_2 "ssions.basic_sin_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000355, VkglTestCase_000355_1, VkglTestCase_000355_2);

#define VkglTestCase_000356_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000356_2 "ions.basic_sin_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000356, VkglTestCase_000356_1, VkglTestCase_000356_2);

#define VkglTestCase_000357_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000357_2 "ssions.basic_sin_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000357, VkglTestCase_000357_1, VkglTestCase_000357_2);

#define VkglTestCase_000358_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000358_2 "ssions.basic_sin_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000358, VkglTestCase_000358_1, VkglTestCase_000358_2);

#define VkglTestCase_000359_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000359_2 "ions.basic_sin_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000359, VkglTestCase_000359_1, VkglTestCase_000359_2);

#define VkglTestCase_000360_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000360_2 "ssions.basic_sin_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000360, VkglTestCase_000360_1, VkglTestCase_000360_2);

#define VkglTestCase_000361_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000361_2 "ssions.basic_cos_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000361, VkglTestCase_000361_1, VkglTestCase_000361_2);

#define VkglTestCase_000362_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000362_2 "ions.basic_cos_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000362, VkglTestCase_000362_1, VkglTestCase_000362_2);

#define VkglTestCase_000363_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000363_2 "sions.basic_cos_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000363, VkglTestCase_000363_1, VkglTestCase_000363_2);

#define VkglTestCase_000364_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000364_2 "ssions.basic_cos_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000364, VkglTestCase_000364_1, VkglTestCase_000364_2);

#define VkglTestCase_000365_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000365_2 "ions.basic_cos_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000365, VkglTestCase_000365_1, VkglTestCase_000365_2);

#define VkglTestCase_000366_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000366_2 "ssions.basic_cos_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000366, VkglTestCase_000366_1, VkglTestCase_000366_2);

#define VkglTestCase_000367_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000367_2 "ssions.basic_cos_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000367, VkglTestCase_000367_1, VkglTestCase_000367_2);

#define VkglTestCase_000368_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000368_2 "ions.basic_cos_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000368, VkglTestCase_000368_1, VkglTestCase_000368_2);

#define VkglTestCase_000369_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000369_2 "ssions.basic_cos_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000369, VkglTestCase_000369_1, VkglTestCase_000369_2);

#define VkglTestCase_000370_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000370_2 "ssions.basic_cos_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000370, VkglTestCase_000370_1, VkglTestCase_000370_2);

#define VkglTestCase_000371_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000371_2 "ions.basic_cos_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000371, VkglTestCase_000371_1, VkglTestCase_000371_2);

#define VkglTestCase_000372_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000372_2 "ssions.basic_cos_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000372, VkglTestCase_000372_1, VkglTestCase_000372_2);

#define VkglTestCase_000373_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000373_2 "sions.basic_asin_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000373, VkglTestCase_000373_1, VkglTestCase_000373_2);

#define VkglTestCase_000374_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000374_2 "ons.basic_asin_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000374, VkglTestCase_000374_1, VkglTestCase_000374_2);

#define VkglTestCase_000375_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000375_2 "sions.basic_asin_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000375, VkglTestCase_000375_1, VkglTestCase_000375_2);

#define VkglTestCase_000376_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000376_2 "ssions.basic_asin_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000376, VkglTestCase_000376_1, VkglTestCase_000376_2);

#define VkglTestCase_000377_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000377_2 "ions.basic_asin_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000377, VkglTestCase_000377_1, VkglTestCase_000377_2);

#define VkglTestCase_000378_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000378_2 "sions.basic_asin_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000378, VkglTestCase_000378_1, VkglTestCase_000378_2);

#define VkglTestCase_000379_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000379_2 "ssions.basic_asin_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000379, VkglTestCase_000379_1, VkglTestCase_000379_2);

#define VkglTestCase_000380_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000380_2 "ions.basic_asin_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000380, VkglTestCase_000380_1, VkglTestCase_000380_2);

#define VkglTestCase_000381_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000381_2 "sions.basic_asin_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000381, VkglTestCase_000381_1, VkglTestCase_000381_2);

#define VkglTestCase_000382_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000382_2 "ssions.basic_asin_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000382, VkglTestCase_000382_1, VkglTestCase_000382_2);

#define VkglTestCase_000383_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000383_2 "ions.basic_asin_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000383, VkglTestCase_000383_1, VkglTestCase_000383_2);

#define VkglTestCase_000384_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000384_2 "sions.basic_asin_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000384, VkglTestCase_000384_1, VkglTestCase_000384_2);

#define VkglTestCase_000385_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000385_2 "sions.basic_acos_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000385, VkglTestCase_000385_1, VkglTestCase_000385_2);

#define VkglTestCase_000386_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000386_2 "ons.basic_acos_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000386, VkglTestCase_000386_1, VkglTestCase_000386_2);

#define VkglTestCase_000387_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000387_2 "sions.basic_acos_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000387, VkglTestCase_000387_1, VkglTestCase_000387_2);

#define VkglTestCase_000388_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000388_2 "ssions.basic_acos_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000388, VkglTestCase_000388_1, VkglTestCase_000388_2);

#define VkglTestCase_000389_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000389_2 "ions.basic_acos_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000389, VkglTestCase_000389_1, VkglTestCase_000389_2);

#define VkglTestCase_000390_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000390_2 "sions.basic_acos_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000390, VkglTestCase_000390_1, VkglTestCase_000390_2);

#define VkglTestCase_000391_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000391_2 "ssions.basic_acos_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000391, VkglTestCase_000391_1, VkglTestCase_000391_2);

#define VkglTestCase_000392_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000392_2 "ions.basic_acos_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000392, VkglTestCase_000392_1, VkglTestCase_000392_2);

#define VkglTestCase_000393_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000393_2 "sions.basic_acos_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000393, VkglTestCase_000393_1, VkglTestCase_000393_2);

#define VkglTestCase_000394_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000394_2 "ssions.basic_acos_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000394, VkglTestCase_000394_1, VkglTestCase_000394_2);

#define VkglTestCase_000395_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000395_2 "ions.basic_acos_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000395, VkglTestCase_000395_1, VkglTestCase_000395_2);

#define VkglTestCase_000396_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000396_2 "sions.basic_acos_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000396, VkglTestCase_000396_1, VkglTestCase_000396_2);

#define VkglTestCase_000397_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000397_2 "ssions.basic_pow_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000397, VkglTestCase_000397_1, VkglTestCase_000397_2);

#define VkglTestCase_000398_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000398_2 "ions.basic_pow_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000398, VkglTestCase_000398_1, VkglTestCase_000398_2);

#define VkglTestCase_000399_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000399_2 "sions.basic_pow_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000399, VkglTestCase_000399_1, VkglTestCase_000399_2);

#define VkglTestCase_000400_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000400_2 "ssions.basic_pow_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000400, VkglTestCase_000400_1, VkglTestCase_000400_2);

#define VkglTestCase_000401_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000401_2 "ions.basic_pow_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000401, VkglTestCase_000401_1, VkglTestCase_000401_2);

#define VkglTestCase_000402_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000402_2 "ssions.basic_pow_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000402, VkglTestCase_000402_1, VkglTestCase_000402_2);

#define VkglTestCase_000403_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000403_2 "ssions.basic_pow_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000403, VkglTestCase_000403_1, VkglTestCase_000403_2);

#define VkglTestCase_000404_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000404_2 "ions.basic_pow_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000404, VkglTestCase_000404_1, VkglTestCase_000404_2);

#define VkglTestCase_000405_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000405_2 "ssions.basic_pow_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000405, VkglTestCase_000405_1, VkglTestCase_000405_2);

#define VkglTestCase_000406_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000406_2 "ssions.basic_pow_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000406, VkglTestCase_000406_1, VkglTestCase_000406_2);

#define VkglTestCase_000407_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000407_2 "ions.basic_pow_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000407, VkglTestCase_000407_1, VkglTestCase_000407_2);

#define VkglTestCase_000408_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000408_2 "ssions.basic_pow_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000408, VkglTestCase_000408_1, VkglTestCase_000408_2);

#define VkglTestCase_000409_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000409_2 "ssions.basic_exp_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000409, VkglTestCase_000409_1, VkglTestCase_000409_2);

#define VkglTestCase_000410_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000410_2 "ions.basic_exp_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000410, VkglTestCase_000410_1, VkglTestCase_000410_2);

#define VkglTestCase_000411_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000411_2 "sions.basic_exp_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000411, VkglTestCase_000411_1, VkglTestCase_000411_2);

#define VkglTestCase_000412_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000412_2 "ssions.basic_exp_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000412, VkglTestCase_000412_1, VkglTestCase_000412_2);

#define VkglTestCase_000413_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000413_2 "ions.basic_exp_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000413, VkglTestCase_000413_1, VkglTestCase_000413_2);

#define VkglTestCase_000414_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000414_2 "ssions.basic_exp_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000414, VkglTestCase_000414_1, VkglTestCase_000414_2);

#define VkglTestCase_000415_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000415_2 "ssions.basic_exp_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000415, VkglTestCase_000415_1, VkglTestCase_000415_2);

#define VkglTestCase_000416_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000416_2 "ions.basic_exp_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000416, VkglTestCase_000416_1, VkglTestCase_000416_2);

#define VkglTestCase_000417_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000417_2 "ssions.basic_exp_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000417, VkglTestCase_000417_1, VkglTestCase_000417_2);

#define VkglTestCase_000418_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000418_2 "ssions.basic_exp_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000418, VkglTestCase_000418_1, VkglTestCase_000418_2);

#define VkglTestCase_000419_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000419_2 "ions.basic_exp_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000419, VkglTestCase_000419_1, VkglTestCase_000419_2);

#define VkglTestCase_000420_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000420_2 "ssions.basic_exp_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000420, VkglTestCase_000420_1, VkglTestCase_000420_2);

#define VkglTestCase_000421_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000421_2 "ssions.basic_log_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000421, VkglTestCase_000421_1, VkglTestCase_000421_2);

#define VkglTestCase_000422_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000422_2 "ions.basic_log_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000422, VkglTestCase_000422_1, VkglTestCase_000422_2);

#define VkglTestCase_000423_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000423_2 "sions.basic_log_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000423, VkglTestCase_000423_1, VkglTestCase_000423_2);

#define VkglTestCase_000424_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000424_2 "ssions.basic_log_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000424, VkglTestCase_000424_1, VkglTestCase_000424_2);

#define VkglTestCase_000425_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000425_2 "ions.basic_log_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000425, VkglTestCase_000425_1, VkglTestCase_000425_2);

#define VkglTestCase_000426_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000426_2 "ssions.basic_log_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000426, VkglTestCase_000426_1, VkglTestCase_000426_2);

#define VkglTestCase_000427_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000427_2 "ssions.basic_log_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000427, VkglTestCase_000427_1, VkglTestCase_000427_2);

#define VkglTestCase_000428_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000428_2 "ions.basic_log_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000428, VkglTestCase_000428_1, VkglTestCase_000428_2);

#define VkglTestCase_000429_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000429_2 "ssions.basic_log_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000429, VkglTestCase_000429_1, VkglTestCase_000429_2);

#define VkglTestCase_000430_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000430_2 "ssions.basic_log_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000430, VkglTestCase_000430_1, VkglTestCase_000430_2);

#define VkglTestCase_000431_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000431_2 "ions.basic_log_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000431, VkglTestCase_000431_1, VkglTestCase_000431_2);

#define VkglTestCase_000432_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000432_2 "ssions.basic_log_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000432, VkglTestCase_000432_1, VkglTestCase_000432_2);

#define VkglTestCase_000433_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000433_2 "sions.basic_exp2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000433, VkglTestCase_000433_1, VkglTestCase_000433_2);

#define VkglTestCase_000434_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000434_2 "ons.basic_exp2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000434, VkglTestCase_000434_1, VkglTestCase_000434_2);

#define VkglTestCase_000435_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000435_2 "sions.basic_exp2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000435, VkglTestCase_000435_1, VkglTestCase_000435_2);

#define VkglTestCase_000436_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000436_2 "ssions.basic_exp2_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000436, VkglTestCase_000436_1, VkglTestCase_000436_2);

#define VkglTestCase_000437_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000437_2 "ions.basic_exp2_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000437, VkglTestCase_000437_1, VkglTestCase_000437_2);

#define VkglTestCase_000438_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000438_2 "sions.basic_exp2_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000438, VkglTestCase_000438_1, VkglTestCase_000438_2);

#define VkglTestCase_000439_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000439_2 "ssions.basic_exp2_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000439, VkglTestCase_000439_1, VkglTestCase_000439_2);

#define VkglTestCase_000440_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000440_2 "ions.basic_exp2_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000440, VkglTestCase_000440_1, VkglTestCase_000440_2);

#define VkglTestCase_000441_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000441_2 "sions.basic_exp2_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000441, VkglTestCase_000441_1, VkglTestCase_000441_2);

#define VkglTestCase_000442_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000442_2 "ssions.basic_exp2_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000442, VkglTestCase_000442_1, VkglTestCase_000442_2);

#define VkglTestCase_000443_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000443_2 "ions.basic_exp2_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000443, VkglTestCase_000443_1, VkglTestCase_000443_2);

#define VkglTestCase_000444_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000444_2 "sions.basic_exp2_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000444, VkglTestCase_000444_1, VkglTestCase_000444_2);

#define VkglTestCase_000445_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000445_2 "sions.basic_log2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000445, VkglTestCase_000445_1, VkglTestCase_000445_2);

#define VkglTestCase_000446_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000446_2 "ons.basic_log2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000446, VkglTestCase_000446_1, VkglTestCase_000446_2);

#define VkglTestCase_000447_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000447_2 "sions.basic_log2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000447, VkglTestCase_000447_1, VkglTestCase_000447_2);

#define VkglTestCase_000448_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000448_2 "ssions.basic_log2_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000448, VkglTestCase_000448_1, VkglTestCase_000448_2);

#define VkglTestCase_000449_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000449_2 "ions.basic_log2_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000449, VkglTestCase_000449_1, VkglTestCase_000449_2);

#define VkglTestCase_000450_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000450_2 "sions.basic_log2_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000450, VkglTestCase_000450_1, VkglTestCase_000450_2);

#define VkglTestCase_000451_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000451_2 "ssions.basic_log2_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000451, VkglTestCase_000451_1, VkglTestCase_000451_2);

#define VkglTestCase_000452_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000452_2 "ions.basic_log2_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000452, VkglTestCase_000452_1, VkglTestCase_000452_2);

#define VkglTestCase_000453_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000453_2 "sions.basic_log2_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000453, VkglTestCase_000453_1, VkglTestCase_000453_2);

#define VkglTestCase_000454_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000454_2 "ssions.basic_log2_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000454, VkglTestCase_000454_1, VkglTestCase_000454_2);

#define VkglTestCase_000455_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000455_2 "ions.basic_log2_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000455, VkglTestCase_000455_1, VkglTestCase_000455_2);

#define VkglTestCase_000456_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000456_2 "sions.basic_log2_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000456, VkglTestCase_000456_1, VkglTestCase_000456_2);

#define VkglTestCase_000457_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000457_2 "sions.basic_sqrt_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000457, VkglTestCase_000457_1, VkglTestCase_000457_2);

#define VkglTestCase_000458_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000458_2 "ons.basic_sqrt_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000458, VkglTestCase_000458_1, VkglTestCase_000458_2);

#define VkglTestCase_000459_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000459_2 "sions.basic_sqrt_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000459, VkglTestCase_000459_1, VkglTestCase_000459_2);

#define VkglTestCase_000460_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000460_2 "ssions.basic_sqrt_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000460, VkglTestCase_000460_1, VkglTestCase_000460_2);

#define VkglTestCase_000461_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000461_2 "ions.basic_sqrt_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000461, VkglTestCase_000461_1, VkglTestCase_000461_2);

#define VkglTestCase_000462_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000462_2 "sions.basic_sqrt_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000462, VkglTestCase_000462_1, VkglTestCase_000462_2);

#define VkglTestCase_000463_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000463_2 "ssions.basic_sqrt_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000463, VkglTestCase_000463_1, VkglTestCase_000463_2);

#define VkglTestCase_000464_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000464_2 "ions.basic_sqrt_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000464, VkglTestCase_000464_1, VkglTestCase_000464_2);

#define VkglTestCase_000465_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000465_2 "sions.basic_sqrt_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000465, VkglTestCase_000465_1, VkglTestCase_000465_2);

#define VkglTestCase_000466_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000466_2 "ssions.basic_sqrt_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000466, VkglTestCase_000466_1, VkglTestCase_000466_2);

#define VkglTestCase_000467_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000467_2 "ions.basic_sqrt_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000467, VkglTestCase_000467_1, VkglTestCase_000467_2);

#define VkglTestCase_000468_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000468_2 "sions.basic_sqrt_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000468, VkglTestCase_000468_1, VkglTestCase_000468_2);

#define VkglTestCase_000469_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000469_2 "ns.basic_inversesqrt_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000469, VkglTestCase_000469_1, VkglTestCase_000469_2);

#define VkglTestCase_000470_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000470_2 ".basic_inversesqrt_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000470, VkglTestCase_000470_1, VkglTestCase_000470_2);

#define VkglTestCase_000471_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000471_2 "s.basic_inversesqrt_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000471, VkglTestCase_000471_1, VkglTestCase_000471_2);

#define VkglTestCase_000472_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000472_2 "ns.basic_inversesqrt_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000472, VkglTestCase_000472_1, VkglTestCase_000472_2);

#define VkglTestCase_000473_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000473_2 ".basic_inversesqrt_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000473, VkglTestCase_000473_1, VkglTestCase_000473_2);

#define VkglTestCase_000474_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000474_2 "ns.basic_inversesqrt_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000474, VkglTestCase_000474_1, VkglTestCase_000474_2);

#define VkglTestCase_000475_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000475_2 "ns.basic_inversesqrt_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000475, VkglTestCase_000475_1, VkglTestCase_000475_2);

#define VkglTestCase_000476_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000476_2 ".basic_inversesqrt_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000476, VkglTestCase_000476_1, VkglTestCase_000476_2);

#define VkglTestCase_000477_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000477_2 "ns.basic_inversesqrt_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000477, VkglTestCase_000477_1, VkglTestCase_000477_2);

#define VkglTestCase_000478_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000478_2 "ns.basic_inversesqrt_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000478, VkglTestCase_000478_1, VkglTestCase_000478_2);

#define VkglTestCase_000479_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000479_2 ".basic_inversesqrt_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000479, VkglTestCase_000479_1, VkglTestCase_000479_2);

#define VkglTestCase_000480_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000480_2 "ns.basic_inversesqrt_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000480, VkglTestCase_000480_1, VkglTestCase_000480_2);

#define VkglTestCase_000481_1 "KHR-GLES32.core.constant_expr"
#define VkglTestCase_000481_2 "essions.basic_abs_int_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000481, VkglTestCase_000481_1, VkglTestCase_000481_2);

#define VkglTestCase_000482_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000482_2 "sions.basic_abs_int_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000482, VkglTestCase_000482_1, VkglTestCase_000482_2);

#define VkglTestCase_000483_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000483_2 "ssions.basic_abs_int_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000483, VkglTestCase_000483_1, VkglTestCase_000483_2);

#define VkglTestCase_000484_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000484_2 "ssions.basic_abs_ivec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000484, VkglTestCase_000484_1, VkglTestCase_000484_2);

#define VkglTestCase_000485_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000485_2 "ions.basic_abs_ivec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000485, VkglTestCase_000485_1, VkglTestCase_000485_2);

#define VkglTestCase_000486_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000486_2 "sions.basic_abs_ivec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000486, VkglTestCase_000486_1, VkglTestCase_000486_2);

#define VkglTestCase_000487_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000487_2 "ssions.basic_abs_ivec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000487, VkglTestCase_000487_1, VkglTestCase_000487_2);

#define VkglTestCase_000488_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000488_2 "ions.basic_abs_ivec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000488, VkglTestCase_000488_1, VkglTestCase_000488_2);

#define VkglTestCase_000489_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000489_2 "sions.basic_abs_ivec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000489, VkglTestCase_000489_1, VkglTestCase_000489_2);

#define VkglTestCase_000490_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000490_2 "ssions.basic_abs_ivec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000490, VkglTestCase_000490_1, VkglTestCase_000490_2);

#define VkglTestCase_000491_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000491_2 "ions.basic_abs_ivec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000491, VkglTestCase_000491_1, VkglTestCase_000491_2);

#define VkglTestCase_000492_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000492_2 "sions.basic_abs_ivec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000492, VkglTestCase_000492_1, VkglTestCase_000492_2);

#define VkglTestCase_000493_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000493_2 "sions.basic_sign_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000493, VkglTestCase_000493_1, VkglTestCase_000493_2);

#define VkglTestCase_000494_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000494_2 "ons.basic_sign_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000494, VkglTestCase_000494_1, VkglTestCase_000494_2);

#define VkglTestCase_000495_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000495_2 "sions.basic_sign_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000495, VkglTestCase_000495_1, VkglTestCase_000495_2);

#define VkglTestCase_000496_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000496_2 "ssions.basic_sign_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000496, VkglTestCase_000496_1, VkglTestCase_000496_2);

#define VkglTestCase_000497_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000497_2 "ions.basic_sign_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000497, VkglTestCase_000497_1, VkglTestCase_000497_2);

#define VkglTestCase_000498_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000498_2 "sions.basic_sign_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000498, VkglTestCase_000498_1, VkglTestCase_000498_2);

#define VkglTestCase_000499_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000499_2 "ssions.basic_sign_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000499, VkglTestCase_000499_1, VkglTestCase_000499_2);

#define VkglTestCase_000500_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000500_2 "ions.basic_sign_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000500, VkglTestCase_000500_1, VkglTestCase_000500_2);

#define VkglTestCase_000501_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000501_2 "sions.basic_sign_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000501, VkglTestCase_000501_1, VkglTestCase_000501_2);

#define VkglTestCase_000502_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000502_2 "ssions.basic_sign_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000502, VkglTestCase_000502_1, VkglTestCase_000502_2);

#define VkglTestCase_000503_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000503_2 "ions.basic_sign_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000503, VkglTestCase_000503_1, VkglTestCase_000503_2);

#define VkglTestCase_000504_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000504_2 "sions.basic_sign_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000504, VkglTestCase_000504_1, VkglTestCase_000504_2);

#define VkglTestCase_000505_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000505_2 "sions.basic_floor_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000505, VkglTestCase_000505_1, VkglTestCase_000505_2);

#define VkglTestCase_000506_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000506_2 "ons.basic_floor_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000506, VkglTestCase_000506_1, VkglTestCase_000506_2);

#define VkglTestCase_000507_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000507_2 "ions.basic_floor_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000507, VkglTestCase_000507_1, VkglTestCase_000507_2);

#define VkglTestCase_000508_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000508_2 "sions.basic_floor_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000508, VkglTestCase_000508_1, VkglTestCase_000508_2);

#define VkglTestCase_000509_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000509_2 "ons.basic_floor_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000509, VkglTestCase_000509_1, VkglTestCase_000509_2);

#define VkglTestCase_000510_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000510_2 "sions.basic_floor_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000510, VkglTestCase_000510_1, VkglTestCase_000510_2);

#define VkglTestCase_000511_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000511_2 "sions.basic_floor_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000511, VkglTestCase_000511_1, VkglTestCase_000511_2);

#define VkglTestCase_000512_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000512_2 "ons.basic_floor_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000512, VkglTestCase_000512_1, VkglTestCase_000512_2);

#define VkglTestCase_000513_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000513_2 "sions.basic_floor_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000513, VkglTestCase_000513_1, VkglTestCase_000513_2);

#define VkglTestCase_000514_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000514_2 "sions.basic_floor_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000514, VkglTestCase_000514_1, VkglTestCase_000514_2);

#define VkglTestCase_000515_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000515_2 "ons.basic_floor_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000515, VkglTestCase_000515_1, VkglTestCase_000515_2);

#define VkglTestCase_000516_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000516_2 "sions.basic_floor_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000516, VkglTestCase_000516_1, VkglTestCase_000516_2);

#define VkglTestCase_000517_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000517_2 "sions.basic_trunc_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000517, VkglTestCase_000517_1, VkglTestCase_000517_2);

#define VkglTestCase_000518_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000518_2 "ons.basic_trunc_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000518, VkglTestCase_000518_1, VkglTestCase_000518_2);

#define VkglTestCase_000519_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000519_2 "ions.basic_trunc_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000519, VkglTestCase_000519_1, VkglTestCase_000519_2);

#define VkglTestCase_000520_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000520_2 "sions.basic_trunc_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000520, VkglTestCase_000520_1, VkglTestCase_000520_2);

#define VkglTestCase_000521_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000521_2 "ons.basic_trunc_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000521, VkglTestCase_000521_1, VkglTestCase_000521_2);

#define VkglTestCase_000522_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000522_2 "sions.basic_trunc_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000522, VkglTestCase_000522_1, VkglTestCase_000522_2);

#define VkglTestCase_000523_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000523_2 "sions.basic_trunc_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000523, VkglTestCase_000523_1, VkglTestCase_000523_2);

#define VkglTestCase_000524_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000524_2 "ons.basic_trunc_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000524, VkglTestCase_000524_1, VkglTestCase_000524_2);

#define VkglTestCase_000525_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000525_2 "sions.basic_trunc_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000525, VkglTestCase_000525_1, VkglTestCase_000525_2);

#define VkglTestCase_000526_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000526_2 "sions.basic_trunc_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000526, VkglTestCase_000526_1, VkglTestCase_000526_2);

#define VkglTestCase_000527_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000527_2 "ons.basic_trunc_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000527, VkglTestCase_000527_1, VkglTestCase_000527_2);

#define VkglTestCase_000528_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000528_2 "sions.basic_trunc_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000528, VkglTestCase_000528_1, VkglTestCase_000528_2);

#define VkglTestCase_000529_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000529_2 "sions.basic_round_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000529, VkglTestCase_000529_1, VkglTestCase_000529_2);

#define VkglTestCase_000530_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000530_2 "ons.basic_round_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000530, VkglTestCase_000530_1, VkglTestCase_000530_2);

#define VkglTestCase_000531_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000531_2 "ions.basic_round_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000531, VkglTestCase_000531_1, VkglTestCase_000531_2);

#define VkglTestCase_000532_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000532_2 "sions.basic_round_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000532, VkglTestCase_000532_1, VkglTestCase_000532_2);

#define VkglTestCase_000533_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000533_2 "ons.basic_round_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000533, VkglTestCase_000533_1, VkglTestCase_000533_2);

#define VkglTestCase_000534_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000534_2 "sions.basic_round_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000534, VkglTestCase_000534_1, VkglTestCase_000534_2);

#define VkglTestCase_000535_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000535_2 "sions.basic_round_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000535, VkglTestCase_000535_1, VkglTestCase_000535_2);

#define VkglTestCase_000536_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000536_2 "ons.basic_round_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000536, VkglTestCase_000536_1, VkglTestCase_000536_2);

#define VkglTestCase_000537_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000537_2 "sions.basic_round_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000537, VkglTestCase_000537_1, VkglTestCase_000537_2);

#define VkglTestCase_000538_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000538_2 "sions.basic_round_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000538, VkglTestCase_000538_1, VkglTestCase_000538_2);

#define VkglTestCase_000539_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000539_2 "ons.basic_round_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000539, VkglTestCase_000539_1, VkglTestCase_000539_2);

#define VkglTestCase_000540_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000540_2 "sions.basic_round_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000540, VkglTestCase_000540_1, VkglTestCase_000540_2);

#define VkglTestCase_000541_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000541_2 "sions.basic_ceil_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000541, VkglTestCase_000541_1, VkglTestCase_000541_2);

#define VkglTestCase_000542_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000542_2 "ons.basic_ceil_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000542, VkglTestCase_000542_1, VkglTestCase_000542_2);

#define VkglTestCase_000543_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000543_2 "sions.basic_ceil_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000543, VkglTestCase_000543_1, VkglTestCase_000543_2);

#define VkglTestCase_000544_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000544_2 "ssions.basic_ceil_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000544, VkglTestCase_000544_1, VkglTestCase_000544_2);

#define VkglTestCase_000545_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000545_2 "ions.basic_ceil_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000545, VkglTestCase_000545_1, VkglTestCase_000545_2);

#define VkglTestCase_000546_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000546_2 "sions.basic_ceil_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000546, VkglTestCase_000546_1, VkglTestCase_000546_2);

#define VkglTestCase_000547_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000547_2 "ssions.basic_ceil_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000547, VkglTestCase_000547_1, VkglTestCase_000547_2);

#define VkglTestCase_000548_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000548_2 "ions.basic_ceil_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000548, VkglTestCase_000548_1, VkglTestCase_000548_2);

#define VkglTestCase_000549_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000549_2 "sions.basic_ceil_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000549, VkglTestCase_000549_1, VkglTestCase_000549_2);

#define VkglTestCase_000550_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000550_2 "ssions.basic_ceil_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000550, VkglTestCase_000550_1, VkglTestCase_000550_2);

#define VkglTestCase_000551_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000551_2 "ions.basic_ceil_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000551, VkglTestCase_000551_1, VkglTestCase_000551_2);

#define VkglTestCase_000552_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000552_2 "sions.basic_ceil_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000552, VkglTestCase_000552_1, VkglTestCase_000552_2);

#define VkglTestCase_000553_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000553_2 "ssions.basic_mod_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000553, VkglTestCase_000553_1, VkglTestCase_000553_2);

#define VkglTestCase_000554_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000554_2 "ions.basic_mod_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000554, VkglTestCase_000554_1, VkglTestCase_000554_2);

#define VkglTestCase_000555_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000555_2 "sions.basic_mod_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000555, VkglTestCase_000555_1, VkglTestCase_000555_2);

#define VkglTestCase_000556_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000556_2 "ssions.basic_mod_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000556, VkglTestCase_000556_1, VkglTestCase_000556_2);

#define VkglTestCase_000557_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000557_2 "ions.basic_mod_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000557, VkglTestCase_000557_1, VkglTestCase_000557_2);

#define VkglTestCase_000558_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000558_2 "ssions.basic_mod_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000558, VkglTestCase_000558_1, VkglTestCase_000558_2);

#define VkglTestCase_000559_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000559_2 "ons.basic_mod_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000559, VkglTestCase_000559_1, VkglTestCase_000559_2);

#define VkglTestCase_000560_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000560_2 "s.basic_mod_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000560, VkglTestCase_000560_1, VkglTestCase_000560_2);

#define VkglTestCase_000561_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000561_2 "ons.basic_mod_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000561, VkglTestCase_000561_1, VkglTestCase_000561_2);

#define VkglTestCase_000562_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000562_2 "ssions.basic_mod_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000562, VkglTestCase_000562_1, VkglTestCase_000562_2);

#define VkglTestCase_000563_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000563_2 "ions.basic_mod_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000563, VkglTestCase_000563_1, VkglTestCase_000563_2);

#define VkglTestCase_000564_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000564_2 "ssions.basic_mod_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000564, VkglTestCase_000564_1, VkglTestCase_000564_2);

#define VkglTestCase_000565_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000565_2 "ons.basic_mod_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000565, VkglTestCase_000565_1, VkglTestCase_000565_2);

#define VkglTestCase_000566_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000566_2 "s.basic_mod_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000566, VkglTestCase_000566_1, VkglTestCase_000566_2);

#define VkglTestCase_000567_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000567_2 "ons.basic_mod_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000567, VkglTestCase_000567_1, VkglTestCase_000567_2);

#define VkglTestCase_000568_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000568_2 "ssions.basic_mod_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000568, VkglTestCase_000568_1, VkglTestCase_000568_2);

#define VkglTestCase_000569_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000569_2 "ions.basic_mod_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000569, VkglTestCase_000569_1, VkglTestCase_000569_2);

#define VkglTestCase_000570_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000570_2 "ssions.basic_mod_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000570, VkglTestCase_000570_1, VkglTestCase_000570_2);

#define VkglTestCase_000571_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000571_2 "ons.basic_mod_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000571, VkglTestCase_000571_1, VkglTestCase_000571_2);

#define VkglTestCase_000572_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000572_2 "s.basic_mod_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000572, VkglTestCase_000572_1, VkglTestCase_000572_2);

#define VkglTestCase_000573_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000573_2 "ons.basic_mod_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000573, VkglTestCase_000573_1, VkglTestCase_000573_2);

#define VkglTestCase_000574_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000574_2 "ssions.basic_min_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000574, VkglTestCase_000574_1, VkglTestCase_000574_2);

#define VkglTestCase_000575_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000575_2 "ions.basic_min_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000575, VkglTestCase_000575_1, VkglTestCase_000575_2);

#define VkglTestCase_000576_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000576_2 "sions.basic_min_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000576, VkglTestCase_000576_1, VkglTestCase_000576_2);

#define VkglTestCase_000577_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000577_2 "ssions.basic_min_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000577, VkglTestCase_000577_1, VkglTestCase_000577_2);

#define VkglTestCase_000578_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000578_2 "ions.basic_min_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000578, VkglTestCase_000578_1, VkglTestCase_000578_2);

#define VkglTestCase_000579_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000579_2 "ssions.basic_min_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000579, VkglTestCase_000579_1, VkglTestCase_000579_2);

#define VkglTestCase_000580_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000580_2 "ons.basic_min_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000580, VkglTestCase_000580_1, VkglTestCase_000580_2);

#define VkglTestCase_000581_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000581_2 "s.basic_min_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000581, VkglTestCase_000581_1, VkglTestCase_000581_2);

#define VkglTestCase_000582_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000582_2 "ons.basic_min_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000582, VkglTestCase_000582_1, VkglTestCase_000582_2);

#define VkglTestCase_000583_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000583_2 "ssions.basic_min_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000583, VkglTestCase_000583_1, VkglTestCase_000583_2);

#define VkglTestCase_000584_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000584_2 "ions.basic_min_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000584, VkglTestCase_000584_1, VkglTestCase_000584_2);

#define VkglTestCase_000585_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000585_2 "ssions.basic_min_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000585, VkglTestCase_000585_1, VkglTestCase_000585_2);

#define VkglTestCase_000586_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000586_2 "ons.basic_min_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000586, VkglTestCase_000586_1, VkglTestCase_000586_2);

#define VkglTestCase_000587_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000587_2 "s.basic_min_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000587, VkglTestCase_000587_1, VkglTestCase_000587_2);

#define VkglTestCase_000588_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000588_2 "ons.basic_min_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000588, VkglTestCase_000588_1, VkglTestCase_000588_2);

#define VkglTestCase_000589_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000589_2 "ssions.basic_min_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000589, VkglTestCase_000589_1, VkglTestCase_000589_2);

#define VkglTestCase_000590_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000590_2 "ions.basic_min_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000590, VkglTestCase_000590_1, VkglTestCase_000590_2);

#define VkglTestCase_000591_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000591_2 "ssions.basic_min_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000591, VkglTestCase_000591_1, VkglTestCase_000591_2);

#define VkglTestCase_000592_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000592_2 "ons.basic_min_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000592, VkglTestCase_000592_1, VkglTestCase_000592_2);

#define VkglTestCase_000593_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000593_2 "s.basic_min_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000593, VkglTestCase_000593_1, VkglTestCase_000593_2);

#define VkglTestCase_000594_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000594_2 "ons.basic_min_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000594, VkglTestCase_000594_1, VkglTestCase_000594_2);

#define VkglTestCase_000595_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000595_2 "ssions.basic_max_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000595, VkglTestCase_000595_1, VkglTestCase_000595_2);

#define VkglTestCase_000596_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000596_2 "ions.basic_max_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000596, VkglTestCase_000596_1, VkglTestCase_000596_2);

#define VkglTestCase_000597_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000597_2 "sions.basic_max_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000597, VkglTestCase_000597_1, VkglTestCase_000597_2);

#define VkglTestCase_000598_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000598_2 "ssions.basic_max_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000598, VkglTestCase_000598_1, VkglTestCase_000598_2);

#define VkglTestCase_000599_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000599_2 "ions.basic_max_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000599, VkglTestCase_000599_1, VkglTestCase_000599_2);

#define VkglTestCase_000600_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000600_2 "ssions.basic_max_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000600, VkglTestCase_000600_1, VkglTestCase_000600_2);

#define VkglTestCase_000601_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000601_2 "ons.basic_max_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000601, VkglTestCase_000601_1, VkglTestCase_000601_2);

#define VkglTestCase_000602_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000602_2 "s.basic_max_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000602, VkglTestCase_000602_1, VkglTestCase_000602_2);

#define VkglTestCase_000603_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000603_2 "ons.basic_max_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000603, VkglTestCase_000603_1, VkglTestCase_000603_2);

#define VkglTestCase_000604_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000604_2 "ssions.basic_max_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000604, VkglTestCase_000604_1, VkglTestCase_000604_2);

#define VkglTestCase_000605_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000605_2 "ions.basic_max_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000605, VkglTestCase_000605_1, VkglTestCase_000605_2);

#define VkglTestCase_000606_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000606_2 "ssions.basic_max_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000606, VkglTestCase_000606_1, VkglTestCase_000606_2);

#define VkglTestCase_000607_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000607_2 "ons.basic_max_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000607, VkglTestCase_000607_1, VkglTestCase_000607_2);

#define VkglTestCase_000608_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000608_2 "s.basic_max_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000608, VkglTestCase_000608_1, VkglTestCase_000608_2);

#define VkglTestCase_000609_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000609_2 "ons.basic_max_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000609, VkglTestCase_000609_1, VkglTestCase_000609_2);

#define VkglTestCase_000610_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000610_2 "ssions.basic_max_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000610, VkglTestCase_000610_1, VkglTestCase_000610_2);

#define VkglTestCase_000611_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000611_2 "ions.basic_max_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000611, VkglTestCase_000611_1, VkglTestCase_000611_2);

#define VkglTestCase_000612_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000612_2 "ssions.basic_max_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000612, VkglTestCase_000612_1, VkglTestCase_000612_2);

#define VkglTestCase_000613_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000613_2 "ons.basic_max_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000613, VkglTestCase_000613_1, VkglTestCase_000613_2);

#define VkglTestCase_000614_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000614_2 "s.basic_max_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000614, VkglTestCase_000614_1, VkglTestCase_000614_2);

#define VkglTestCase_000615_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000615_2 "ons.basic_max_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000615, VkglTestCase_000615_1, VkglTestCase_000615_2);

#define VkglTestCase_000616_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000616_2 "sions.basic_clamp_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000616, VkglTestCase_000616_1, VkglTestCase_000616_2);

#define VkglTestCase_000617_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000617_2 "ons.basic_clamp_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000617, VkglTestCase_000617_1, VkglTestCase_000617_2);

#define VkglTestCase_000618_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000618_2 "ions.basic_clamp_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000618, VkglTestCase_000618_1, VkglTestCase_000618_2);

#define VkglTestCase_000619_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000619_2 "sions.basic_clamp_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000619, VkglTestCase_000619_1, VkglTestCase_000619_2);

#define VkglTestCase_000620_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000620_2 "ons.basic_clamp_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000620, VkglTestCase_000620_1, VkglTestCase_000620_2);

#define VkglTestCase_000621_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000621_2 "sions.basic_clamp_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000621, VkglTestCase_000621_1, VkglTestCase_000621_2);

#define VkglTestCase_000622_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000622_2 "ns.basic_clamp_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000622, VkglTestCase_000622_1, VkglTestCase_000622_2);

#define VkglTestCase_000623_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000623_2 ".basic_clamp_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000623, VkglTestCase_000623_1, VkglTestCase_000623_2);

#define VkglTestCase_000624_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000624_2 "ns.basic_clamp_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000624, VkglTestCase_000624_1, VkglTestCase_000624_2);

#define VkglTestCase_000625_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000625_2 "sions.basic_clamp_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000625, VkglTestCase_000625_1, VkglTestCase_000625_2);

#define VkglTestCase_000626_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000626_2 "ons.basic_clamp_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000626, VkglTestCase_000626_1, VkglTestCase_000626_2);

#define VkglTestCase_000627_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000627_2 "sions.basic_clamp_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000627, VkglTestCase_000627_1, VkglTestCase_000627_2);

#define VkglTestCase_000628_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000628_2 "ns.basic_clamp_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000628, VkglTestCase_000628_1, VkglTestCase_000628_2);

#define VkglTestCase_000629_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000629_2 ".basic_clamp_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000629, VkglTestCase_000629_1, VkglTestCase_000629_2);

#define VkglTestCase_000630_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000630_2 "ns.basic_clamp_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000630, VkglTestCase_000630_1, VkglTestCase_000630_2);

#define VkglTestCase_000631_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000631_2 "sions.basic_clamp_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000631, VkglTestCase_000631_1, VkglTestCase_000631_2);

#define VkglTestCase_000632_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000632_2 "ons.basic_clamp_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000632, VkglTestCase_000632_1, VkglTestCase_000632_2);

#define VkglTestCase_000633_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000633_2 "sions.basic_clamp_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000633, VkglTestCase_000633_1, VkglTestCase_000633_2);

#define VkglTestCase_000634_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000634_2 "ns.basic_clamp_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000634, VkglTestCase_000634_1, VkglTestCase_000634_2);

#define VkglTestCase_000635_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000635_2 ".basic_clamp_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000635, VkglTestCase_000635_1, VkglTestCase_000635_2);

#define VkglTestCase_000636_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000636_2 "ns.basic_clamp_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000636, VkglTestCase_000636_1, VkglTestCase_000636_2);

#define VkglTestCase_000637_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000637_2 "ions.basic_length_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000637, VkglTestCase_000637_1, VkglTestCase_000637_2);

#define VkglTestCase_000638_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000638_2 "ns.basic_length_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000638, VkglTestCase_000638_1, VkglTestCase_000638_2);

#define VkglTestCase_000639_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000639_2 "ions.basic_length_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000639, VkglTestCase_000639_1, VkglTestCase_000639_2);

#define VkglTestCase_000640_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000640_2 "sions.basic_length_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000640, VkglTestCase_000640_1, VkglTestCase_000640_2);

#define VkglTestCase_000641_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000641_2 "ons.basic_length_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000641, VkglTestCase_000641_1, VkglTestCase_000641_2);

#define VkglTestCase_000642_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000642_2 "ions.basic_length_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000642, VkglTestCase_000642_1, VkglTestCase_000642_2);

#define VkglTestCase_000643_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000643_2 "sions.basic_length_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000643, VkglTestCase_000643_1, VkglTestCase_000643_2);

#define VkglTestCase_000644_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000644_2 "ons.basic_length_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000644, VkglTestCase_000644_1, VkglTestCase_000644_2);

#define VkglTestCase_000645_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000645_2 "ions.basic_length_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000645, VkglTestCase_000645_1, VkglTestCase_000645_2);

#define VkglTestCase_000646_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000646_2 "sions.basic_length_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000646, VkglTestCase_000646_1, VkglTestCase_000646_2);

#define VkglTestCase_000647_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000647_2 "ons.basic_length_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000647, VkglTestCase_000647_1, VkglTestCase_000647_2);

#define VkglTestCase_000648_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000648_2 "ions.basic_length_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000648, VkglTestCase_000648_1, VkglTestCase_000648_2);

#define VkglTestCase_000649_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000649_2 "ssions.basic_dot_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000649, VkglTestCase_000649_1, VkglTestCase_000649_2);

#define VkglTestCase_000650_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000650_2 "ions.basic_dot_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000650, VkglTestCase_000650_1, VkglTestCase_000650_2);

#define VkglTestCase_000651_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000651_2 "sions.basic_dot_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000651, VkglTestCase_000651_1, VkglTestCase_000651_2);

#define VkglTestCase_000652_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000652_2 "ssions.basic_dot_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000652, VkglTestCase_000652_1, VkglTestCase_000652_2);

#define VkglTestCase_000653_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000653_2 "ions.basic_dot_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000653, VkglTestCase_000653_1, VkglTestCase_000653_2);

#define VkglTestCase_000654_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000654_2 "ssions.basic_dot_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000654, VkglTestCase_000654_1, VkglTestCase_000654_2);

#define VkglTestCase_000655_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000655_2 "ssions.basic_dot_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000655, VkglTestCase_000655_1, VkglTestCase_000655_2);

#define VkglTestCase_000656_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000656_2 "ions.basic_dot_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000656, VkglTestCase_000656_1, VkglTestCase_000656_2);

#define VkglTestCase_000657_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000657_2 "ssions.basic_dot_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000657, VkglTestCase_000657_1, VkglTestCase_000657_2);

#define VkglTestCase_000658_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000658_2 "ssions.basic_dot_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000658, VkglTestCase_000658_1, VkglTestCase_000658_2);

#define VkglTestCase_000659_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000659_2 "ions.basic_dot_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000659, VkglTestCase_000659_1, VkglTestCase_000659_2);

#define VkglTestCase_000660_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000660_2 "ssions.basic_dot_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000660, VkglTestCase_000660_1, VkglTestCase_000660_2);

#define VkglTestCase_000661_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000661_2 "ons.basic_normalize_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000661, VkglTestCase_000661_1, VkglTestCase_000661_2);

#define VkglTestCase_000662_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000662_2 "s.basic_normalize_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000662, VkglTestCase_000662_1, VkglTestCase_000662_2);

#define VkglTestCase_000663_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000663_2 "ns.basic_normalize_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000663, VkglTestCase_000663_1, VkglTestCase_000663_2);

#define VkglTestCase_000664_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000664_2 "ons.basic_normalize_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000664, VkglTestCase_000664_1, VkglTestCase_000664_2);

#define VkglTestCase_000665_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000665_2 "s.basic_normalize_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000665, VkglTestCase_000665_1, VkglTestCase_000665_2);

#define VkglTestCase_000666_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000666_2 "ons.basic_normalize_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000666, VkglTestCase_000666_1, VkglTestCase_000666_2);

#define VkglTestCase_000667_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000667_2 "ons.basic_normalize_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000667, VkglTestCase_000667_1, VkglTestCase_000667_2);

#define VkglTestCase_000668_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000668_2 "s.basic_normalize_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000668, VkglTestCase_000668_1, VkglTestCase_000668_2);

#define VkglTestCase_000669_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000669_2 "ons.basic_normalize_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000669, VkglTestCase_000669_1, VkglTestCase_000669_2);

#define VkglTestCase_000670_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000670_2 "ons.basic_normalize_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000670, VkglTestCase_000670_1, VkglTestCase_000670_2);

#define VkglTestCase_000671_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000671_2 "s.basic_normalize_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000671, VkglTestCase_000671_1, VkglTestCase_000671_2);

#define VkglTestCase_000672_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000672_2 "ons.basic_normalize_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000672, VkglTestCase_000672_1, VkglTestCase_000672_2);

#define VkglTestCase_000673_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000673_2 "ions.array_radians_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000673, VkglTestCase_000673_1, VkglTestCase_000673_2);

#define VkglTestCase_000674_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000674_2 "ns.array_radians_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000674, VkglTestCase_000674_1, VkglTestCase_000674_2);

#define VkglTestCase_000675_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000675_2 "ons.array_radians_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000675, VkglTestCase_000675_1, VkglTestCase_000675_2);

#define VkglTestCase_000676_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000676_2 "ions.array_radians_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000676, VkglTestCase_000676_1, VkglTestCase_000676_2);

#define VkglTestCase_000677_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000677_2 "ns.array_radians_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000677, VkglTestCase_000677_1, VkglTestCase_000677_2);

#define VkglTestCase_000678_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000678_2 "ions.array_radians_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000678, VkglTestCase_000678_1, VkglTestCase_000678_2);

#define VkglTestCase_000679_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000679_2 "ions.array_radians_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000679, VkglTestCase_000679_1, VkglTestCase_000679_2);

#define VkglTestCase_000680_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000680_2 "ns.array_radians_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000680, VkglTestCase_000680_1, VkglTestCase_000680_2);

#define VkglTestCase_000681_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000681_2 "ions.array_radians_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000681, VkglTestCase_000681_1, VkglTestCase_000681_2);

#define VkglTestCase_000682_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000682_2 "ions.array_radians_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000682, VkglTestCase_000682_1, VkglTestCase_000682_2);

#define VkglTestCase_000683_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000683_2 "ns.array_radians_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000683, VkglTestCase_000683_1, VkglTestCase_000683_2);

#define VkglTestCase_000684_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000684_2 "ions.array_radians_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000684, VkglTestCase_000684_1, VkglTestCase_000684_2);

#define VkglTestCase_000685_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000685_2 "ions.array_degrees_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000685, VkglTestCase_000685_1, VkglTestCase_000685_2);

#define VkglTestCase_000686_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000686_2 "ns.array_degrees_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000686, VkglTestCase_000686_1, VkglTestCase_000686_2);

#define VkglTestCase_000687_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000687_2 "ons.array_degrees_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000687, VkglTestCase_000687_1, VkglTestCase_000687_2);

#define VkglTestCase_000688_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000688_2 "ions.array_degrees_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000688, VkglTestCase_000688_1, VkglTestCase_000688_2);

#define VkglTestCase_000689_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000689_2 "ns.array_degrees_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000689, VkglTestCase_000689_1, VkglTestCase_000689_2);

#define VkglTestCase_000690_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000690_2 "ions.array_degrees_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000690, VkglTestCase_000690_1, VkglTestCase_000690_2);

#define VkglTestCase_000691_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000691_2 "ions.array_degrees_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000691, VkglTestCase_000691_1, VkglTestCase_000691_2);

#define VkglTestCase_000692_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000692_2 "ns.array_degrees_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000692, VkglTestCase_000692_1, VkglTestCase_000692_2);

#define VkglTestCase_000693_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000693_2 "ions.array_degrees_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000693, VkglTestCase_000693_1, VkglTestCase_000693_2);

#define VkglTestCase_000694_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000694_2 "ions.array_degrees_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000694, VkglTestCase_000694_1, VkglTestCase_000694_2);

#define VkglTestCase_000695_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000695_2 "ns.array_degrees_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000695, VkglTestCase_000695_1, VkglTestCase_000695_2);

#define VkglTestCase_000696_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000696_2 "ions.array_degrees_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000696, VkglTestCase_000696_1, VkglTestCase_000696_2);

#define VkglTestCase_000697_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000697_2 "ssions.array_sin_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000697, VkglTestCase_000697_1, VkglTestCase_000697_2);

#define VkglTestCase_000698_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000698_2 "ions.array_sin_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000698, VkglTestCase_000698_1, VkglTestCase_000698_2);

#define VkglTestCase_000699_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000699_2 "sions.array_sin_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000699, VkglTestCase_000699_1, VkglTestCase_000699_2);

#define VkglTestCase_000700_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000700_2 "ssions.array_sin_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000700, VkglTestCase_000700_1, VkglTestCase_000700_2);

#define VkglTestCase_000701_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000701_2 "ions.array_sin_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000701, VkglTestCase_000701_1, VkglTestCase_000701_2);

#define VkglTestCase_000702_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000702_2 "ssions.array_sin_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000702, VkglTestCase_000702_1, VkglTestCase_000702_2);

#define VkglTestCase_000703_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000703_2 "ssions.array_sin_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000703, VkglTestCase_000703_1, VkglTestCase_000703_2);

#define VkglTestCase_000704_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000704_2 "ions.array_sin_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000704, VkglTestCase_000704_1, VkglTestCase_000704_2);

#define VkglTestCase_000705_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000705_2 "ssions.array_sin_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000705, VkglTestCase_000705_1, VkglTestCase_000705_2);

#define VkglTestCase_000706_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000706_2 "ssions.array_sin_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000706, VkglTestCase_000706_1, VkglTestCase_000706_2);

#define VkglTestCase_000707_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000707_2 "ions.array_sin_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000707, VkglTestCase_000707_1, VkglTestCase_000707_2);

#define VkglTestCase_000708_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000708_2 "ssions.array_sin_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000708, VkglTestCase_000708_1, VkglTestCase_000708_2);

#define VkglTestCase_000709_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000709_2 "ssions.array_cos_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000709, VkglTestCase_000709_1, VkglTestCase_000709_2);

#define VkglTestCase_000710_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000710_2 "ions.array_cos_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000710, VkglTestCase_000710_1, VkglTestCase_000710_2);

#define VkglTestCase_000711_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000711_2 "sions.array_cos_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000711, VkglTestCase_000711_1, VkglTestCase_000711_2);

#define VkglTestCase_000712_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000712_2 "ssions.array_cos_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000712, VkglTestCase_000712_1, VkglTestCase_000712_2);

#define VkglTestCase_000713_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000713_2 "ions.array_cos_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000713, VkglTestCase_000713_1, VkglTestCase_000713_2);

#define VkglTestCase_000714_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000714_2 "ssions.array_cos_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000714, VkglTestCase_000714_1, VkglTestCase_000714_2);

#define VkglTestCase_000715_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000715_2 "ssions.array_cos_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000715, VkglTestCase_000715_1, VkglTestCase_000715_2);

#define VkglTestCase_000716_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000716_2 "ions.array_cos_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000716, VkglTestCase_000716_1, VkglTestCase_000716_2);

#define VkglTestCase_000717_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000717_2 "ssions.array_cos_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000717, VkglTestCase_000717_1, VkglTestCase_000717_2);

#define VkglTestCase_000718_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000718_2 "ssions.array_cos_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000718, VkglTestCase_000718_1, VkglTestCase_000718_2);

#define VkglTestCase_000719_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000719_2 "ions.array_cos_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000719, VkglTestCase_000719_1, VkglTestCase_000719_2);

#define VkglTestCase_000720_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000720_2 "ssions.array_cos_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000720, VkglTestCase_000720_1, VkglTestCase_000720_2);

#define VkglTestCase_000721_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000721_2 "sions.array_asin_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000721, VkglTestCase_000721_1, VkglTestCase_000721_2);

#define VkglTestCase_000722_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000722_2 "ons.array_asin_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000722, VkglTestCase_000722_1, VkglTestCase_000722_2);

#define VkglTestCase_000723_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000723_2 "sions.array_asin_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000723, VkglTestCase_000723_1, VkglTestCase_000723_2);

#define VkglTestCase_000724_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000724_2 "ssions.array_asin_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000724, VkglTestCase_000724_1, VkglTestCase_000724_2);

#define VkglTestCase_000725_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000725_2 "ions.array_asin_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000725, VkglTestCase_000725_1, VkglTestCase_000725_2);

#define VkglTestCase_000726_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000726_2 "sions.array_asin_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000726, VkglTestCase_000726_1, VkglTestCase_000726_2);

#define VkglTestCase_000727_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000727_2 "ssions.array_asin_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000727, VkglTestCase_000727_1, VkglTestCase_000727_2);

#define VkglTestCase_000728_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000728_2 "ions.array_asin_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000728, VkglTestCase_000728_1, VkglTestCase_000728_2);

#define VkglTestCase_000729_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000729_2 "sions.array_asin_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000729, VkglTestCase_000729_1, VkglTestCase_000729_2);

#define VkglTestCase_000730_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000730_2 "ssions.array_asin_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000730, VkglTestCase_000730_1, VkglTestCase_000730_2);

#define VkglTestCase_000731_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000731_2 "ions.array_asin_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000731, VkglTestCase_000731_1, VkglTestCase_000731_2);

#define VkglTestCase_000732_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000732_2 "sions.array_asin_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000732, VkglTestCase_000732_1, VkglTestCase_000732_2);

#define VkglTestCase_000733_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000733_2 "sions.array_acos_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000733, VkglTestCase_000733_1, VkglTestCase_000733_2);

#define VkglTestCase_000734_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000734_2 "ons.array_acos_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000734, VkglTestCase_000734_1, VkglTestCase_000734_2);

#define VkglTestCase_000735_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000735_2 "sions.array_acos_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000735, VkglTestCase_000735_1, VkglTestCase_000735_2);

#define VkglTestCase_000736_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000736_2 "ssions.array_acos_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000736, VkglTestCase_000736_1, VkglTestCase_000736_2);

#define VkglTestCase_000737_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000737_2 "ions.array_acos_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000737, VkglTestCase_000737_1, VkglTestCase_000737_2);

#define VkglTestCase_000738_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000738_2 "sions.array_acos_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000738, VkglTestCase_000738_1, VkglTestCase_000738_2);

#define VkglTestCase_000739_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000739_2 "ssions.array_acos_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000739, VkglTestCase_000739_1, VkglTestCase_000739_2);

#define VkglTestCase_000740_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000740_2 "ions.array_acos_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000740, VkglTestCase_000740_1, VkglTestCase_000740_2);

#define VkglTestCase_000741_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000741_2 "sions.array_acos_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000741, VkglTestCase_000741_1, VkglTestCase_000741_2);

#define VkglTestCase_000742_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000742_2 "ssions.array_acos_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000742, VkglTestCase_000742_1, VkglTestCase_000742_2);

#define VkglTestCase_000743_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000743_2 "ions.array_acos_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000743, VkglTestCase_000743_1, VkglTestCase_000743_2);

#define VkglTestCase_000744_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000744_2 "sions.array_acos_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000744, VkglTestCase_000744_1, VkglTestCase_000744_2);

#define VkglTestCase_000745_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000745_2 "ssions.array_pow_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000745, VkglTestCase_000745_1, VkglTestCase_000745_2);

#define VkglTestCase_000746_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000746_2 "ions.array_pow_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000746, VkglTestCase_000746_1, VkglTestCase_000746_2);

#define VkglTestCase_000747_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000747_2 "sions.array_pow_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000747, VkglTestCase_000747_1, VkglTestCase_000747_2);

#define VkglTestCase_000748_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000748_2 "ssions.array_pow_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000748, VkglTestCase_000748_1, VkglTestCase_000748_2);

#define VkglTestCase_000749_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000749_2 "ions.array_pow_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000749, VkglTestCase_000749_1, VkglTestCase_000749_2);

#define VkglTestCase_000750_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000750_2 "ssions.array_pow_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000750, VkglTestCase_000750_1, VkglTestCase_000750_2);

#define VkglTestCase_000751_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000751_2 "ssions.array_pow_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000751, VkglTestCase_000751_1, VkglTestCase_000751_2);

#define VkglTestCase_000752_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000752_2 "ions.array_pow_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000752, VkglTestCase_000752_1, VkglTestCase_000752_2);

#define VkglTestCase_000753_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000753_2 "ssions.array_pow_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000753, VkglTestCase_000753_1, VkglTestCase_000753_2);

#define VkglTestCase_000754_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000754_2 "ssions.array_pow_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000754, VkglTestCase_000754_1, VkglTestCase_000754_2);

#define VkglTestCase_000755_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000755_2 "ions.array_pow_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000755, VkglTestCase_000755_1, VkglTestCase_000755_2);

#define VkglTestCase_000756_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000756_2 "ssions.array_pow_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000756, VkglTestCase_000756_1, VkglTestCase_000756_2);

#define VkglTestCase_000757_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000757_2 "ssions.array_exp_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000757, VkglTestCase_000757_1, VkglTestCase_000757_2);

#define VkglTestCase_000758_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000758_2 "ions.array_exp_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000758, VkglTestCase_000758_1, VkglTestCase_000758_2);

#define VkglTestCase_000759_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000759_2 "sions.array_exp_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000759, VkglTestCase_000759_1, VkglTestCase_000759_2);

#define VkglTestCase_000760_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000760_2 "ssions.array_exp_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000760, VkglTestCase_000760_1, VkglTestCase_000760_2);

#define VkglTestCase_000761_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000761_2 "ions.array_exp_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000761, VkglTestCase_000761_1, VkglTestCase_000761_2);

#define VkglTestCase_000762_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000762_2 "ssions.array_exp_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000762, VkglTestCase_000762_1, VkglTestCase_000762_2);

#define VkglTestCase_000763_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000763_2 "ssions.array_exp_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000763, VkglTestCase_000763_1, VkglTestCase_000763_2);

#define VkglTestCase_000764_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000764_2 "ions.array_exp_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000764, VkglTestCase_000764_1, VkglTestCase_000764_2);

#define VkglTestCase_000765_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000765_2 "ssions.array_exp_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000765, VkglTestCase_000765_1, VkglTestCase_000765_2);

#define VkglTestCase_000766_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000766_2 "ssions.array_exp_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000766, VkglTestCase_000766_1, VkglTestCase_000766_2);

#define VkglTestCase_000767_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000767_2 "ions.array_exp_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000767, VkglTestCase_000767_1, VkglTestCase_000767_2);

#define VkglTestCase_000768_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000768_2 "ssions.array_exp_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000768, VkglTestCase_000768_1, VkglTestCase_000768_2);

#define VkglTestCase_000769_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000769_2 "ssions.array_log_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000769, VkglTestCase_000769_1, VkglTestCase_000769_2);

#define VkglTestCase_000770_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000770_2 "ions.array_log_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000770, VkglTestCase_000770_1, VkglTestCase_000770_2);

#define VkglTestCase_000771_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000771_2 "sions.array_log_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000771, VkglTestCase_000771_1, VkglTestCase_000771_2);

#define VkglTestCase_000772_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000772_2 "ssions.array_log_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000772, VkglTestCase_000772_1, VkglTestCase_000772_2);

#define VkglTestCase_000773_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000773_2 "ions.array_log_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000773, VkglTestCase_000773_1, VkglTestCase_000773_2);

#define VkglTestCase_000774_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000774_2 "ssions.array_log_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000774, VkglTestCase_000774_1, VkglTestCase_000774_2);

#define VkglTestCase_000775_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000775_2 "ssions.array_log_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000775, VkglTestCase_000775_1, VkglTestCase_000775_2);

#define VkglTestCase_000776_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000776_2 "ions.array_log_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000776, VkglTestCase_000776_1, VkglTestCase_000776_2);

#define VkglTestCase_000777_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000777_2 "ssions.array_log_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000777, VkglTestCase_000777_1, VkglTestCase_000777_2);

#define VkglTestCase_000778_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000778_2 "ssions.array_log_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000778, VkglTestCase_000778_1, VkglTestCase_000778_2);

#define VkglTestCase_000779_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000779_2 "ions.array_log_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000779, VkglTestCase_000779_1, VkglTestCase_000779_2);

#define VkglTestCase_000780_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000780_2 "ssions.array_log_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000780, VkglTestCase_000780_1, VkglTestCase_000780_2);

#define VkglTestCase_000781_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000781_2 "sions.array_exp2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000781, VkglTestCase_000781_1, VkglTestCase_000781_2);

#define VkglTestCase_000782_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000782_2 "ons.array_exp2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000782, VkglTestCase_000782_1, VkglTestCase_000782_2);

#define VkglTestCase_000783_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000783_2 "sions.array_exp2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000783, VkglTestCase_000783_1, VkglTestCase_000783_2);

#define VkglTestCase_000784_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000784_2 "ssions.array_exp2_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000784, VkglTestCase_000784_1, VkglTestCase_000784_2);

#define VkglTestCase_000785_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000785_2 "ions.array_exp2_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000785, VkglTestCase_000785_1, VkglTestCase_000785_2);

#define VkglTestCase_000786_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000786_2 "sions.array_exp2_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000786, VkglTestCase_000786_1, VkglTestCase_000786_2);

#define VkglTestCase_000787_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000787_2 "ssions.array_exp2_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000787, VkglTestCase_000787_1, VkglTestCase_000787_2);

#define VkglTestCase_000788_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000788_2 "ions.array_exp2_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000788, VkglTestCase_000788_1, VkglTestCase_000788_2);

#define VkglTestCase_000789_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000789_2 "sions.array_exp2_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000789, VkglTestCase_000789_1, VkglTestCase_000789_2);

#define VkglTestCase_000790_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000790_2 "ssions.array_exp2_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000790, VkglTestCase_000790_1, VkglTestCase_000790_2);

#define VkglTestCase_000791_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000791_2 "ions.array_exp2_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000791, VkglTestCase_000791_1, VkglTestCase_000791_2);

#define VkglTestCase_000792_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000792_2 "sions.array_exp2_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000792, VkglTestCase_000792_1, VkglTestCase_000792_2);

#define VkglTestCase_000793_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000793_2 "sions.array_log2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000793, VkglTestCase_000793_1, VkglTestCase_000793_2);

#define VkglTestCase_000794_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000794_2 "ons.array_log2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000794, VkglTestCase_000794_1, VkglTestCase_000794_2);

#define VkglTestCase_000795_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000795_2 "sions.array_log2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000795, VkglTestCase_000795_1, VkglTestCase_000795_2);

#define VkglTestCase_000796_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000796_2 "ssions.array_log2_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000796, VkglTestCase_000796_1, VkglTestCase_000796_2);

#define VkglTestCase_000797_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000797_2 "ions.array_log2_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000797, VkglTestCase_000797_1, VkglTestCase_000797_2);

#define VkglTestCase_000798_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000798_2 "sions.array_log2_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000798, VkglTestCase_000798_1, VkglTestCase_000798_2);

#define VkglTestCase_000799_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000799_2 "ssions.array_log2_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000799, VkglTestCase_000799_1, VkglTestCase_000799_2);

#define VkglTestCase_000800_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000800_2 "ions.array_log2_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000800, VkglTestCase_000800_1, VkglTestCase_000800_2);

#define VkglTestCase_000801_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000801_2 "sions.array_log2_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000801, VkglTestCase_000801_1, VkglTestCase_000801_2);

#define VkglTestCase_000802_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000802_2 "ssions.array_log2_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000802, VkglTestCase_000802_1, VkglTestCase_000802_2);

#define VkglTestCase_000803_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000803_2 "ions.array_log2_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000803, VkglTestCase_000803_1, VkglTestCase_000803_2);

#define VkglTestCase_000804_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000804_2 "sions.array_log2_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000804, VkglTestCase_000804_1, VkglTestCase_000804_2);

#define VkglTestCase_000805_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000805_2 "sions.array_sqrt_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000805, VkglTestCase_000805_1, VkglTestCase_000805_2);

#define VkglTestCase_000806_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000806_2 "ons.array_sqrt_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000806, VkglTestCase_000806_1, VkglTestCase_000806_2);

#define VkglTestCase_000807_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000807_2 "sions.array_sqrt_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000807, VkglTestCase_000807_1, VkglTestCase_000807_2);

#define VkglTestCase_000808_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000808_2 "ssions.array_sqrt_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000808, VkglTestCase_000808_1, VkglTestCase_000808_2);

#define VkglTestCase_000809_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000809_2 "ions.array_sqrt_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000809, VkglTestCase_000809_1, VkglTestCase_000809_2);

#define VkglTestCase_000810_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000810_2 "sions.array_sqrt_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000810, VkglTestCase_000810_1, VkglTestCase_000810_2);

#define VkglTestCase_000811_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000811_2 "ssions.array_sqrt_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000811, VkglTestCase_000811_1, VkglTestCase_000811_2);

#define VkglTestCase_000812_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000812_2 "ions.array_sqrt_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000812, VkglTestCase_000812_1, VkglTestCase_000812_2);

#define VkglTestCase_000813_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000813_2 "sions.array_sqrt_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000813, VkglTestCase_000813_1, VkglTestCase_000813_2);

#define VkglTestCase_000814_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000814_2 "ssions.array_sqrt_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000814, VkglTestCase_000814_1, VkglTestCase_000814_2);

#define VkglTestCase_000815_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000815_2 "ions.array_sqrt_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000815, VkglTestCase_000815_1, VkglTestCase_000815_2);

#define VkglTestCase_000816_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000816_2 "sions.array_sqrt_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000816, VkglTestCase_000816_1, VkglTestCase_000816_2);

#define VkglTestCase_000817_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000817_2 "ns.array_inversesqrt_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000817, VkglTestCase_000817_1, VkglTestCase_000817_2);

#define VkglTestCase_000818_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000818_2 ".array_inversesqrt_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000818, VkglTestCase_000818_1, VkglTestCase_000818_2);

#define VkglTestCase_000819_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000819_2 "s.array_inversesqrt_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000819, VkglTestCase_000819_1, VkglTestCase_000819_2);

#define VkglTestCase_000820_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000820_2 "ns.array_inversesqrt_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000820, VkglTestCase_000820_1, VkglTestCase_000820_2);

#define VkglTestCase_000821_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000821_2 ".array_inversesqrt_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000821, VkglTestCase_000821_1, VkglTestCase_000821_2);

#define VkglTestCase_000822_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000822_2 "ns.array_inversesqrt_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000822, VkglTestCase_000822_1, VkglTestCase_000822_2);

#define VkglTestCase_000823_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000823_2 "ns.array_inversesqrt_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000823, VkglTestCase_000823_1, VkglTestCase_000823_2);

#define VkglTestCase_000824_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000824_2 ".array_inversesqrt_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000824, VkglTestCase_000824_1, VkglTestCase_000824_2);

#define VkglTestCase_000825_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000825_2 "ns.array_inversesqrt_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000825, VkglTestCase_000825_1, VkglTestCase_000825_2);

#define VkglTestCase_000826_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000826_2 "ns.array_inversesqrt_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000826, VkglTestCase_000826_1, VkglTestCase_000826_2);

#define VkglTestCase_000827_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000827_2 ".array_inversesqrt_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000827, VkglTestCase_000827_1, VkglTestCase_000827_2);

#define VkglTestCase_000828_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000828_2 "ns.array_inversesqrt_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000828, VkglTestCase_000828_1, VkglTestCase_000828_2);

#define VkglTestCase_000829_1 "KHR-GLES32.core.constant_expr"
#define VkglTestCase_000829_2 "essions.array_abs_int_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000829, VkglTestCase_000829_1, VkglTestCase_000829_2);

#define VkglTestCase_000830_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000830_2 "sions.array_abs_int_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000830, VkglTestCase_000830_1, VkglTestCase_000830_2);

#define VkglTestCase_000831_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000831_2 "ssions.array_abs_int_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000831, VkglTestCase_000831_1, VkglTestCase_000831_2);

#define VkglTestCase_000832_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000832_2 "ssions.array_abs_ivec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000832, VkglTestCase_000832_1, VkglTestCase_000832_2);

#define VkglTestCase_000833_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000833_2 "ions.array_abs_ivec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000833, VkglTestCase_000833_1, VkglTestCase_000833_2);

#define VkglTestCase_000834_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000834_2 "sions.array_abs_ivec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000834, VkglTestCase_000834_1, VkglTestCase_000834_2);

#define VkglTestCase_000835_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000835_2 "ssions.array_abs_ivec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000835, VkglTestCase_000835_1, VkglTestCase_000835_2);

#define VkglTestCase_000836_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000836_2 "ions.array_abs_ivec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000836, VkglTestCase_000836_1, VkglTestCase_000836_2);

#define VkglTestCase_000837_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000837_2 "sions.array_abs_ivec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000837, VkglTestCase_000837_1, VkglTestCase_000837_2);

#define VkglTestCase_000838_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000838_2 "ssions.array_abs_ivec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000838, VkglTestCase_000838_1, VkglTestCase_000838_2);

#define VkglTestCase_000839_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000839_2 "ions.array_abs_ivec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000839, VkglTestCase_000839_1, VkglTestCase_000839_2);

#define VkglTestCase_000840_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000840_2 "sions.array_abs_ivec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000840, VkglTestCase_000840_1, VkglTestCase_000840_2);

#define VkglTestCase_000841_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000841_2 "sions.array_sign_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000841, VkglTestCase_000841_1, VkglTestCase_000841_2);

#define VkglTestCase_000842_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000842_2 "ons.array_sign_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000842, VkglTestCase_000842_1, VkglTestCase_000842_2);

#define VkglTestCase_000843_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000843_2 "sions.array_sign_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000843, VkglTestCase_000843_1, VkglTestCase_000843_2);

#define VkglTestCase_000844_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000844_2 "ssions.array_sign_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000844, VkglTestCase_000844_1, VkglTestCase_000844_2);

#define VkglTestCase_000845_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000845_2 "ions.array_sign_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000845, VkglTestCase_000845_1, VkglTestCase_000845_2);

#define VkglTestCase_000846_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000846_2 "sions.array_sign_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000846, VkglTestCase_000846_1, VkglTestCase_000846_2);

#define VkglTestCase_000847_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000847_2 "ssions.array_sign_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000847, VkglTestCase_000847_1, VkglTestCase_000847_2);

#define VkglTestCase_000848_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000848_2 "ions.array_sign_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000848, VkglTestCase_000848_1, VkglTestCase_000848_2);

#define VkglTestCase_000849_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000849_2 "sions.array_sign_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000849, VkglTestCase_000849_1, VkglTestCase_000849_2);

#define VkglTestCase_000850_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000850_2 "ssions.array_sign_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000850, VkglTestCase_000850_1, VkglTestCase_000850_2);

#define VkglTestCase_000851_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000851_2 "ions.array_sign_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000851, VkglTestCase_000851_1, VkglTestCase_000851_2);

#define VkglTestCase_000852_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000852_2 "sions.array_sign_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000852, VkglTestCase_000852_1, VkglTestCase_000852_2);

#define VkglTestCase_000853_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000853_2 "sions.array_floor_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000853, VkglTestCase_000853_1, VkglTestCase_000853_2);

#define VkglTestCase_000854_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000854_2 "ons.array_floor_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000854, VkglTestCase_000854_1, VkglTestCase_000854_2);

#define VkglTestCase_000855_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000855_2 "ions.array_floor_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000855, VkglTestCase_000855_1, VkglTestCase_000855_2);

#define VkglTestCase_000856_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000856_2 "sions.array_floor_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000856, VkglTestCase_000856_1, VkglTestCase_000856_2);

#define VkglTestCase_000857_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000857_2 "ons.array_floor_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000857, VkglTestCase_000857_1, VkglTestCase_000857_2);

#define VkglTestCase_000858_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000858_2 "sions.array_floor_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000858, VkglTestCase_000858_1, VkglTestCase_000858_2);

#define VkglTestCase_000859_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000859_2 "sions.array_floor_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000859, VkglTestCase_000859_1, VkglTestCase_000859_2);

#define VkglTestCase_000860_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000860_2 "ons.array_floor_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000860, VkglTestCase_000860_1, VkglTestCase_000860_2);

#define VkglTestCase_000861_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000861_2 "sions.array_floor_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000861, VkglTestCase_000861_1, VkglTestCase_000861_2);

#define VkglTestCase_000862_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000862_2 "sions.array_floor_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000862, VkglTestCase_000862_1, VkglTestCase_000862_2);

#define VkglTestCase_000863_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000863_2 "ons.array_floor_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000863, VkglTestCase_000863_1, VkglTestCase_000863_2);

#define VkglTestCase_000864_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000864_2 "sions.array_floor_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000864, VkglTestCase_000864_1, VkglTestCase_000864_2);

#define VkglTestCase_000865_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000865_2 "sions.array_trunc_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000865, VkglTestCase_000865_1, VkglTestCase_000865_2);

#define VkglTestCase_000866_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000866_2 "ons.array_trunc_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000866, VkglTestCase_000866_1, VkglTestCase_000866_2);

#define VkglTestCase_000867_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000867_2 "ions.array_trunc_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000867, VkglTestCase_000867_1, VkglTestCase_000867_2);

#define VkglTestCase_000868_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000868_2 "sions.array_trunc_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000868, VkglTestCase_000868_1, VkglTestCase_000868_2);

#define VkglTestCase_000869_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000869_2 "ons.array_trunc_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000869, VkglTestCase_000869_1, VkglTestCase_000869_2);

#define VkglTestCase_000870_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000870_2 "sions.array_trunc_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000870, VkglTestCase_000870_1, VkglTestCase_000870_2);

#define VkglTestCase_000871_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000871_2 "sions.array_trunc_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000871, VkglTestCase_000871_1, VkglTestCase_000871_2);

#define VkglTestCase_000872_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000872_2 "ons.array_trunc_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000872, VkglTestCase_000872_1, VkglTestCase_000872_2);

#define VkglTestCase_000873_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000873_2 "sions.array_trunc_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000873, VkglTestCase_000873_1, VkglTestCase_000873_2);

#define VkglTestCase_000874_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000874_2 "sions.array_trunc_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000874, VkglTestCase_000874_1, VkglTestCase_000874_2);

#define VkglTestCase_000875_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000875_2 "ons.array_trunc_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000875, VkglTestCase_000875_1, VkglTestCase_000875_2);

#define VkglTestCase_000876_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000876_2 "sions.array_trunc_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000876, VkglTestCase_000876_1, VkglTestCase_000876_2);

#define VkglTestCase_000877_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000877_2 "sions.array_round_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000877, VkglTestCase_000877_1, VkglTestCase_000877_2);

#define VkglTestCase_000878_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000878_2 "ons.array_round_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000878, VkglTestCase_000878_1, VkglTestCase_000878_2);

#define VkglTestCase_000879_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000879_2 "ions.array_round_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000879, VkglTestCase_000879_1, VkglTestCase_000879_2);

#define VkglTestCase_000880_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000880_2 "sions.array_round_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000880, VkglTestCase_000880_1, VkglTestCase_000880_2);

#define VkglTestCase_000881_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000881_2 "ons.array_round_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000881, VkglTestCase_000881_1, VkglTestCase_000881_2);

#define VkglTestCase_000882_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000882_2 "sions.array_round_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000882, VkglTestCase_000882_1, VkglTestCase_000882_2);

#define VkglTestCase_000883_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000883_2 "sions.array_round_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000883, VkglTestCase_000883_1, VkglTestCase_000883_2);

#define VkglTestCase_000884_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000884_2 "ons.array_round_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000884, VkglTestCase_000884_1, VkglTestCase_000884_2);

#define VkglTestCase_000885_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000885_2 "sions.array_round_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000885, VkglTestCase_000885_1, VkglTestCase_000885_2);

#define VkglTestCase_000886_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000886_2 "sions.array_round_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000886, VkglTestCase_000886_1, VkglTestCase_000886_2);

#define VkglTestCase_000887_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000887_2 "ons.array_round_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000887, VkglTestCase_000887_1, VkglTestCase_000887_2);

#define VkglTestCase_000888_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000888_2 "sions.array_round_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000888, VkglTestCase_000888_1, VkglTestCase_000888_2);

#define VkglTestCase_000889_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000889_2 "sions.array_ceil_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000889, VkglTestCase_000889_1, VkglTestCase_000889_2);

#define VkglTestCase_000890_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000890_2 "ons.array_ceil_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000890, VkglTestCase_000890_1, VkglTestCase_000890_2);

#define VkglTestCase_000891_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000891_2 "sions.array_ceil_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000891, VkglTestCase_000891_1, VkglTestCase_000891_2);

#define VkglTestCase_000892_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000892_2 "ssions.array_ceil_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000892, VkglTestCase_000892_1, VkglTestCase_000892_2);

#define VkglTestCase_000893_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000893_2 "ions.array_ceil_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000893, VkglTestCase_000893_1, VkglTestCase_000893_2);

#define VkglTestCase_000894_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000894_2 "sions.array_ceil_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000894, VkglTestCase_000894_1, VkglTestCase_000894_2);

#define VkglTestCase_000895_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000895_2 "ssions.array_ceil_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000895, VkglTestCase_000895_1, VkglTestCase_000895_2);

#define VkglTestCase_000896_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000896_2 "ions.array_ceil_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000896, VkglTestCase_000896_1, VkglTestCase_000896_2);

#define VkglTestCase_000897_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000897_2 "sions.array_ceil_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000897, VkglTestCase_000897_1, VkglTestCase_000897_2);

#define VkglTestCase_000898_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000898_2 "ssions.array_ceil_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000898, VkglTestCase_000898_1, VkglTestCase_000898_2);

#define VkglTestCase_000899_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000899_2 "ions.array_ceil_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000899, VkglTestCase_000899_1, VkglTestCase_000899_2);

#define VkglTestCase_000900_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000900_2 "sions.array_ceil_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000900, VkglTestCase_000900_1, VkglTestCase_000900_2);

#define VkglTestCase_000901_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000901_2 "ssions.array_mod_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000901, VkglTestCase_000901_1, VkglTestCase_000901_2);

#define VkglTestCase_000902_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000902_2 "ions.array_mod_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000902, VkglTestCase_000902_1, VkglTestCase_000902_2);

#define VkglTestCase_000903_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000903_2 "sions.array_mod_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000903, VkglTestCase_000903_1, VkglTestCase_000903_2);

#define VkglTestCase_000904_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000904_2 "ssions.array_mod_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000904, VkglTestCase_000904_1, VkglTestCase_000904_2);

#define VkglTestCase_000905_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000905_2 "ions.array_mod_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000905, VkglTestCase_000905_1, VkglTestCase_000905_2);

#define VkglTestCase_000906_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000906_2 "ssions.array_mod_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000906, VkglTestCase_000906_1, VkglTestCase_000906_2);

#define VkglTestCase_000907_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000907_2 "ons.array_mod_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000907, VkglTestCase_000907_1, VkglTestCase_000907_2);

#define VkglTestCase_000908_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000908_2 "s.array_mod_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000908, VkglTestCase_000908_1, VkglTestCase_000908_2);

#define VkglTestCase_000909_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000909_2 "ons.array_mod_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000909, VkglTestCase_000909_1, VkglTestCase_000909_2);

#define VkglTestCase_000910_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000910_2 "ssions.array_mod_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000910, VkglTestCase_000910_1, VkglTestCase_000910_2);

#define VkglTestCase_000911_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000911_2 "ions.array_mod_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000911, VkglTestCase_000911_1, VkglTestCase_000911_2);

#define VkglTestCase_000912_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000912_2 "ssions.array_mod_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000912, VkglTestCase_000912_1, VkglTestCase_000912_2);

#define VkglTestCase_000913_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000913_2 "ons.array_mod_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000913, VkglTestCase_000913_1, VkglTestCase_000913_2);

#define VkglTestCase_000914_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000914_2 "s.array_mod_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000914, VkglTestCase_000914_1, VkglTestCase_000914_2);

#define VkglTestCase_000915_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000915_2 "ons.array_mod_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000915, VkglTestCase_000915_1, VkglTestCase_000915_2);

#define VkglTestCase_000916_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000916_2 "ssions.array_mod_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000916, VkglTestCase_000916_1, VkglTestCase_000916_2);

#define VkglTestCase_000917_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000917_2 "ions.array_mod_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000917, VkglTestCase_000917_1, VkglTestCase_000917_2);

#define VkglTestCase_000918_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000918_2 "ssions.array_mod_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000918, VkglTestCase_000918_1, VkglTestCase_000918_2);

#define VkglTestCase_000919_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000919_2 "ons.array_mod_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000919, VkglTestCase_000919_1, VkglTestCase_000919_2);

#define VkglTestCase_000920_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000920_2 "s.array_mod_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000920, VkglTestCase_000920_1, VkglTestCase_000920_2);

#define VkglTestCase_000921_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000921_2 "ons.array_mod_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000921, VkglTestCase_000921_1, VkglTestCase_000921_2);

#define VkglTestCase_000922_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000922_2 "ssions.array_min_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000922, VkglTestCase_000922_1, VkglTestCase_000922_2);

#define VkglTestCase_000923_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000923_2 "ions.array_min_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000923, VkglTestCase_000923_1, VkglTestCase_000923_2);

#define VkglTestCase_000924_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000924_2 "sions.array_min_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000924, VkglTestCase_000924_1, VkglTestCase_000924_2);

#define VkglTestCase_000925_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000925_2 "ssions.array_min_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000925, VkglTestCase_000925_1, VkglTestCase_000925_2);

#define VkglTestCase_000926_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000926_2 "ions.array_min_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000926, VkglTestCase_000926_1, VkglTestCase_000926_2);

#define VkglTestCase_000927_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000927_2 "ssions.array_min_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000927, VkglTestCase_000927_1, VkglTestCase_000927_2);

#define VkglTestCase_000928_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000928_2 "ons.array_min_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000928, VkglTestCase_000928_1, VkglTestCase_000928_2);

#define VkglTestCase_000929_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000929_2 "s.array_min_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000929, VkglTestCase_000929_1, VkglTestCase_000929_2);

#define VkglTestCase_000930_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000930_2 "ons.array_min_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000930, VkglTestCase_000930_1, VkglTestCase_000930_2);

#define VkglTestCase_000931_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000931_2 "ssions.array_min_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000931, VkglTestCase_000931_1, VkglTestCase_000931_2);

#define VkglTestCase_000932_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000932_2 "ions.array_min_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000932, VkglTestCase_000932_1, VkglTestCase_000932_2);

#define VkglTestCase_000933_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000933_2 "ssions.array_min_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000933, VkglTestCase_000933_1, VkglTestCase_000933_2);

#define VkglTestCase_000934_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000934_2 "ons.array_min_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000934, VkglTestCase_000934_1, VkglTestCase_000934_2);

#define VkglTestCase_000935_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000935_2 "s.array_min_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000935, VkglTestCase_000935_1, VkglTestCase_000935_2);

#define VkglTestCase_000936_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000936_2 "ons.array_min_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000936, VkglTestCase_000936_1, VkglTestCase_000936_2);

#define VkglTestCase_000937_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000937_2 "ssions.array_min_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000937, VkglTestCase_000937_1, VkglTestCase_000937_2);

#define VkglTestCase_000938_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000938_2 "ions.array_min_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000938, VkglTestCase_000938_1, VkglTestCase_000938_2);

#define VkglTestCase_000939_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000939_2 "ssions.array_min_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000939, VkglTestCase_000939_1, VkglTestCase_000939_2);

#define VkglTestCase_000940_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000940_2 "ons.array_min_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000940, VkglTestCase_000940_1, VkglTestCase_000940_2);

#define VkglTestCase_000941_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000941_2 "s.array_min_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000941, VkglTestCase_000941_1, VkglTestCase_000941_2);

#define VkglTestCase_000942_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000942_2 "ons.array_min_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000942, VkglTestCase_000942_1, VkglTestCase_000942_2);

#define VkglTestCase_000943_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000943_2 "ssions.array_max_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000943, VkglTestCase_000943_1, VkglTestCase_000943_2);

#define VkglTestCase_000944_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000944_2 "ions.array_max_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000944, VkglTestCase_000944_1, VkglTestCase_000944_2);

#define VkglTestCase_000945_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000945_2 "sions.array_max_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000945, VkglTestCase_000945_1, VkglTestCase_000945_2);

#define VkglTestCase_000946_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000946_2 "ssions.array_max_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000946, VkglTestCase_000946_1, VkglTestCase_000946_2);

#define VkglTestCase_000947_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000947_2 "ions.array_max_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000947, VkglTestCase_000947_1, VkglTestCase_000947_2);

#define VkglTestCase_000948_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000948_2 "ssions.array_max_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000948, VkglTestCase_000948_1, VkglTestCase_000948_2);

#define VkglTestCase_000949_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000949_2 "ons.array_max_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000949, VkglTestCase_000949_1, VkglTestCase_000949_2);

#define VkglTestCase_000950_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000950_2 "s.array_max_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000950, VkglTestCase_000950_1, VkglTestCase_000950_2);

#define VkglTestCase_000951_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000951_2 "ons.array_max_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000951, VkglTestCase_000951_1, VkglTestCase_000951_2);

#define VkglTestCase_000952_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000952_2 "ssions.array_max_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000952, VkglTestCase_000952_1, VkglTestCase_000952_2);

#define VkglTestCase_000953_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000953_2 "ions.array_max_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000953, VkglTestCase_000953_1, VkglTestCase_000953_2);

#define VkglTestCase_000954_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000954_2 "ssions.array_max_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000954, VkglTestCase_000954_1, VkglTestCase_000954_2);

#define VkglTestCase_000955_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000955_2 "ons.array_max_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000955, VkglTestCase_000955_1, VkglTestCase_000955_2);

#define VkglTestCase_000956_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000956_2 "s.array_max_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000956, VkglTestCase_000956_1, VkglTestCase_000956_2);

#define VkglTestCase_000957_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000957_2 "ons.array_max_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000957, VkglTestCase_000957_1, VkglTestCase_000957_2);

#define VkglTestCase_000958_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000958_2 "ssions.array_max_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000958, VkglTestCase_000958_1, VkglTestCase_000958_2);

#define VkglTestCase_000959_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000959_2 "ions.array_max_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000959, VkglTestCase_000959_1, VkglTestCase_000959_2);

#define VkglTestCase_000960_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000960_2 "ssions.array_max_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000960, VkglTestCase_000960_1, VkglTestCase_000960_2);

#define VkglTestCase_000961_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000961_2 "ons.array_max_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000961, VkglTestCase_000961_1, VkglTestCase_000961_2);

#define VkglTestCase_000962_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_000962_2 "s.array_max_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000962, VkglTestCase_000962_1, VkglTestCase_000962_2);

#define VkglTestCase_000963_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000963_2 "ons.array_max_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000963, VkglTestCase_000963_1, VkglTestCase_000963_2);

#define VkglTestCase_000964_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000964_2 "sions.array_clamp_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000964, VkglTestCase_000964_1, VkglTestCase_000964_2);

#define VkglTestCase_000965_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000965_2 "ons.array_clamp_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000965, VkglTestCase_000965_1, VkglTestCase_000965_2);

#define VkglTestCase_000966_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000966_2 "ions.array_clamp_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000966, VkglTestCase_000966_1, VkglTestCase_000966_2);

#define VkglTestCase_000967_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000967_2 "sions.array_clamp_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000967, VkglTestCase_000967_1, VkglTestCase_000967_2);

#define VkglTestCase_000968_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000968_2 "ons.array_clamp_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000968, VkglTestCase_000968_1, VkglTestCase_000968_2);

#define VkglTestCase_000969_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000969_2 "sions.array_clamp_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000969, VkglTestCase_000969_1, VkglTestCase_000969_2);

#define VkglTestCase_000970_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000970_2 "ns.array_clamp_vec2_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000970, VkglTestCase_000970_1, VkglTestCase_000970_2);

#define VkglTestCase_000971_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000971_2 ".array_clamp_vec2_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000971, VkglTestCase_000971_1, VkglTestCase_000971_2);

#define VkglTestCase_000972_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000972_2 "ns.array_clamp_vec2_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000972, VkglTestCase_000972_1, VkglTestCase_000972_2);

#define VkglTestCase_000973_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000973_2 "sions.array_clamp_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000973, VkglTestCase_000973_1, VkglTestCase_000973_2);

#define VkglTestCase_000974_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000974_2 "ons.array_clamp_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000974, VkglTestCase_000974_1, VkglTestCase_000974_2);

#define VkglTestCase_000975_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000975_2 "sions.array_clamp_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000975, VkglTestCase_000975_1, VkglTestCase_000975_2);

#define VkglTestCase_000976_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000976_2 "ns.array_clamp_vec3_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000976, VkglTestCase_000976_1, VkglTestCase_000976_2);

#define VkglTestCase_000977_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000977_2 ".array_clamp_vec3_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000977, VkglTestCase_000977_1, VkglTestCase_000977_2);

#define VkglTestCase_000978_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000978_2 "ns.array_clamp_vec3_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000978, VkglTestCase_000978_1, VkglTestCase_000978_2);

#define VkglTestCase_000979_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000979_2 "sions.array_clamp_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000979, VkglTestCase_000979_1, VkglTestCase_000979_2);

#define VkglTestCase_000980_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000980_2 "ons.array_clamp_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000980, VkglTestCase_000980_1, VkglTestCase_000980_2);

#define VkglTestCase_000981_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000981_2 "sions.array_clamp_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000981, VkglTestCase_000981_1, VkglTestCase_000981_2);

#define VkglTestCase_000982_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000982_2 "ns.array_clamp_vec4_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000982, VkglTestCase_000982_1, VkglTestCase_000982_2);

#define VkglTestCase_000983_1 "KHR-GLES32.core.constant_expressions"
#define VkglTestCase_000983_2 ".array_clamp_vec4_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000983, VkglTestCase_000983_1, VkglTestCase_000983_2);

#define VkglTestCase_000984_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000984_2 "ns.array_clamp_vec4_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000984, VkglTestCase_000984_1, VkglTestCase_000984_2);

#define VkglTestCase_000985_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000985_2 "ions.array_length_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000985, VkglTestCase_000985_1, VkglTestCase_000985_2);

#define VkglTestCase_000986_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_000986_2 "ns.array_length_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000986, VkglTestCase_000986_1, VkglTestCase_000986_2);

#define VkglTestCase_000987_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000987_2 "ions.array_length_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000987, VkglTestCase_000987_1, VkglTestCase_000987_2);

#define VkglTestCase_000988_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000988_2 "sions.array_length_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000988, VkglTestCase_000988_1, VkglTestCase_000988_2);

#define VkglTestCase_000989_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000989_2 "ons.array_length_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000989, VkglTestCase_000989_1, VkglTestCase_000989_2);

#define VkglTestCase_000990_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000990_2 "ions.array_length_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000990, VkglTestCase_000990_1, VkglTestCase_000990_2);

#define VkglTestCase_000991_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000991_2 "sions.array_length_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000991, VkglTestCase_000991_1, VkglTestCase_000991_2);

#define VkglTestCase_000992_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000992_2 "ons.array_length_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000992, VkglTestCase_000992_1, VkglTestCase_000992_2);

#define VkglTestCase_000993_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000993_2 "ions.array_length_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000993, VkglTestCase_000993_1, VkglTestCase_000993_2);

#define VkglTestCase_000994_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000994_2 "sions.array_length_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000994, VkglTestCase_000994_1, VkglTestCase_000994_2);

#define VkglTestCase_000995_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_000995_2 "ons.array_length_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000995, VkglTestCase_000995_1, VkglTestCase_000995_2);

#define VkglTestCase_000996_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000996_2 "ions.array_length_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000996, VkglTestCase_000996_1, VkglTestCase_000996_2);

#define VkglTestCase_000997_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_000997_2 "ssions.array_dot_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000997, VkglTestCase_000997_1, VkglTestCase_000997_2);

#define VkglTestCase_000998_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_000998_2 "ions.array_dot_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000998, VkglTestCase_000998_1, VkglTestCase_000998_2);

#define VkglTestCase_000999_1 "KHR-GLES32.core.constant_expres"
#define VkglTestCase_000999_2 "sions.array_dot_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000999, VkglTestCase_000999_1, VkglTestCase_000999_2);

#define VkglTestCase_001000_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_001000_2 "ssions.array_dot_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001000, VkglTestCase_001000_1, VkglTestCase_001000_2);

#define VkglTestCase_001001_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_001001_2 "ions.array_dot_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001001, VkglTestCase_001001_1, VkglTestCase_001001_2);

#define VkglTestCase_001002_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_001002_2 "ssions.array_dot_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001002, VkglTestCase_001002_1, VkglTestCase_001002_2);

#define VkglTestCase_001003_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_001003_2 "ssions.array_dot_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001003, VkglTestCase_001003_1, VkglTestCase_001003_2);

#define VkglTestCase_001004_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_001004_2 "ions.array_dot_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001004, VkglTestCase_001004_1, VkglTestCase_001004_2);

#define VkglTestCase_001005_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_001005_2 "ssions.array_dot_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001005, VkglTestCase_001005_1, VkglTestCase_001005_2);

#define VkglTestCase_001006_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_001006_2 "ssions.array_dot_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001006, VkglTestCase_001006_1, VkglTestCase_001006_2);

#define VkglTestCase_001007_1 "KHR-GLES32.core.constant_express"
#define VkglTestCase_001007_2 "ions.array_dot_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001007, VkglTestCase_001007_1, VkglTestCase_001007_2);

#define VkglTestCase_001008_1 "KHR-GLES32.core.constant_expre"
#define VkglTestCase_001008_2 "ssions.array_dot_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001008, VkglTestCase_001008_1, VkglTestCase_001008_2);

#define VkglTestCase_001009_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_001009_2 "ons.array_normalize_float_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001009, VkglTestCase_001009_1, VkglTestCase_001009_2);

#define VkglTestCase_001010_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_001010_2 "s.array_normalize_float_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001010, VkglTestCase_001010_1, VkglTestCase_001010_2);

#define VkglTestCase_001011_1 "KHR-GLES32.core.constant_expressio"
#define VkglTestCase_001011_2 "ns.array_normalize_float_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001011, VkglTestCase_001011_1, VkglTestCase_001011_2);

#define VkglTestCase_001012_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_001012_2 "ons.array_normalize_vec2_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001012, VkglTestCase_001012_1, VkglTestCase_001012_2);

#define VkglTestCase_001013_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_001013_2 "s.array_normalize_vec2_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001013, VkglTestCase_001013_1, VkglTestCase_001013_2);

#define VkglTestCase_001014_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_001014_2 "ons.array_normalize_vec2_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001014, VkglTestCase_001014_1, VkglTestCase_001014_2);

#define VkglTestCase_001015_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_001015_2 "ons.array_normalize_vec3_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001015, VkglTestCase_001015_1, VkglTestCase_001015_2);

#define VkglTestCase_001016_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_001016_2 "s.array_normalize_vec3_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001016, VkglTestCase_001016_1, VkglTestCase_001016_2);

#define VkglTestCase_001017_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_001017_2 "ons.array_normalize_vec3_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001017, VkglTestCase_001017_1, VkglTestCase_001017_2);

#define VkglTestCase_001018_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_001018_2 "ons.array_normalize_vec4_geometry"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001018, VkglTestCase_001018_1, VkglTestCase_001018_2);

#define VkglTestCase_001019_1 "KHR-GLES32.core.constant_expression"
#define VkglTestCase_001019_2 "s.array_normalize_vec4_tess_control"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001019, VkglTestCase_001019_1, VkglTestCase_001019_2);

#define VkglTestCase_001020_1 "KHR-GLES32.core.constant_expressi"
#define VkglTestCase_001020_2 "ons.array_normalize_vec4_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_001020, VkglTestCase_001020_1, VkglTestCase_001020_2);
