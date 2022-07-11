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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019106_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019106_2 "overage.log.vertex_array.vertex_attribf"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019106, VkglTestCase_019106_1, VkglTestCase_019106_2);

#define VkglTestCase_019107_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019107_2 "overage.log.vertex_array.vertex_attribfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019107, VkglTestCase_019107_1, VkglTestCase_019107_2);

#define VkglTestCase_019108_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019108_2 "overage.log.vertex_array.vertex_attribi4"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019108, VkglTestCase_019108_1, VkglTestCase_019108_2);

#define VkglTestCase_019109_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019109_2 "verage.log.vertex_array.vertex_attribi4v"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019109, VkglTestCase_019109_1, VkglTestCase_019109_2);

#define VkglTestCase_019110_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019110_2 "rage.log.vertex_array.vertex_attrib_pointer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019110, VkglTestCase_019110_1, VkglTestCase_019110_2);

#define VkglTestCase_019111_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019111_2 "age.log.vertex_array.vertex_attrib_i_pointer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019111, VkglTestCase_019111_1, VkglTestCase_019111_2);

#define VkglTestCase_019112_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019112_2 "rage.log.vertex_array.vertex_attrib_format"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019112, VkglTestCase_019112_1, VkglTestCase_019112_2);

#define VkglTestCase_019113_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019113_2 "age.log.vertex_array.vertex_attrib_i_format"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019113, VkglTestCase_019113_1, VkglTestCase_019113_2);

#define VkglTestCase_019114_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019114_2 "e.log.vertex_array.enable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019114, VkglTestCase_019114_1, VkglTestCase_019114_2);

#define VkglTestCase_019115_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019115_2 "e.log.vertex_array.disable_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019115, VkglTestCase_019115_1, VkglTestCase_019115_2);

#define VkglTestCase_019116_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019116_2 "verage.log.vertex_array.gen_vertex_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019116, VkglTestCase_019116_1, VkglTestCase_019116_2);

#define VkglTestCase_019117_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019117_2 "verage.log.vertex_array.bind_vertex_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019117, VkglTestCase_019117_1, VkglTestCase_019117_2);

#define VkglTestCase_019118_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019118_2 "rage.log.vertex_array.delete_vertex_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019118, VkglTestCase_019118_1, VkglTestCase_019118_2);

#define VkglTestCase_019119_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019119_2 "rage.log.vertex_array.vertex_attrib_divisor"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019119, VkglTestCase_019119_1, VkglTestCase_019119_2);

#define VkglTestCase_019120_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019120_2 "_coverage.log.vertex_array.draw_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019120, VkglTestCase_019120_1, VkglTestCase_019120_2);

#define VkglTestCase_019121_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019121_2 "e.log.vertex_array.draw_arrays_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019121, VkglTestCase_019121_1, VkglTestCase_019121_2);

#define VkglTestCase_019122_1 "dEQP-GLES31.functional.debug.negative_coverage.l"
#define VkglTestCase_019122_2 "og.vertex_array.draw_arrays_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019122, VkglTestCase_019122_1, VkglTestCase_019122_2);

#define VkglTestCase_019123_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019123_2 "coverage.log.vertex_array.draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019123, VkglTestCase_019123_1, VkglTestCase_019123_2);

#define VkglTestCase_019124_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019124_2 "ge.log.vertex_array.draw_elements_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019124, VkglTestCase_019124_1, VkglTestCase_019124_2);

#define VkglTestCase_019125_1 "dEQP-GLES31.functional.debug.negative_coverage.log.verte"
#define VkglTestCase_019125_2 "x_array.draw_elements_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019125, VkglTestCase_019125_1, VkglTestCase_019125_2);

#define VkglTestCase_019126_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019126_2 ".log.vertex_array.draw_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019126, VkglTestCase_019126_1, VkglTestCase_019126_2);

#define VkglTestCase_019127_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_019127_2 "g.vertex_array.draw_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019127, VkglTestCase_019127_1, VkglTestCase_019127_2);

#define VkglTestCase_019128_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019128_2 "rage.log.vertex_array.draw_arrays_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019128, VkglTestCase_019128_1, VkglTestCase_019128_2);

#define VkglTestCase_019129_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_019129_2 ".vertex_array.draw_arrays_instanced_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019129, VkglTestCase_019129_1, VkglTestCase_019129_2);

#define VkglTestCase_019130_1 "dEQP-GLES31.functional.debug.negative_coverage.log.ve"
#define VkglTestCase_019130_2 "rtex_array.draw_arrays_instanced_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019130, VkglTestCase_019130_1, VkglTestCase_019130_2);

#define VkglTestCase_019131_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019131_2 "age.log.vertex_array.draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019131, VkglTestCase_019131_1, VkglTestCase_019131_2);

#define VkglTestCase_019132_1 "dEQP-GLES31.functional.debug.negative_coverage.log."
#define VkglTestCase_019132_2 "vertex_array.draw_elements_instanced_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019132, VkglTestCase_019132_1, VkglTestCase_019132_2);

#define VkglTestCase_019133_1 "dEQP-GLES31.functional.debug.negative_coverage.log.ver"
#define VkglTestCase_019133_2 "tex_array.draw_elements_instanced_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019133, VkglTestCase_019133_1, VkglTestCase_019133_2);

#define VkglTestCase_019134_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_019134_2 "g.vertex_array.draw_elements_instanced_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019134, VkglTestCase_019134_1, VkglTestCase_019134_2);

#define VkglTestCase_019135_1 "dEQP-GLES31.functional.debug.negative_coverage.log.vertex_arr"
#define VkglTestCase_019135_2 "ay.draw_elements_instanced_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019135, VkglTestCase_019135_1, VkglTestCase_019135_2);

#define VkglTestCase_019136_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019136_2 "erage.log.vertex_array.draw_range_elements"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019136, VkglTestCase_019136_1, VkglTestCase_019136_2);

#define VkglTestCase_019137_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_019137_2 "g.vertex_array.draw_range_elements_invalid_program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019137, VkglTestCase_019137_1, VkglTestCase_019137_2);

#define VkglTestCase_019138_1 "dEQP-GLES31.functional.debug.negative_coverage.log.v"
#define VkglTestCase_019138_2 "ertex_array.draw_range_elements_incomplete_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019138, VkglTestCase_019138_1, VkglTestCase_019138_2);

#define VkglTestCase_019139_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019139_2 "log.vertex_array.draw_range_elements_base_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019139, VkglTestCase_019139_1, VkglTestCase_019139_2);

#define VkglTestCase_019140_1 "dEQP-GLES31.functional.debug.negative_coverage.log.vertex_a"
#define VkglTestCase_019140_2 "rray.draw_range_elements_base_vertex_primitive_mode_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019140, VkglTestCase_019140_1, VkglTestCase_019140_2);
