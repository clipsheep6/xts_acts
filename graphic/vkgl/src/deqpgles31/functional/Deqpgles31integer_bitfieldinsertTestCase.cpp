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
#include "../ActsDeqpgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001377_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001377_2 "tions.integer.bitfieldinsert.int_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001377, VkglTestCase_001377_1, VkglTestCase_001377_2);

#define VkglTestCase_001378_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001378_2 "ions.integer.bitfieldinsert.int_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001378, VkglTestCase_001378_1, VkglTestCase_001378_2);

#define VkglTestCase_001379_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001379_2 "ions.integer.bitfieldinsert.int_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001379, VkglTestCase_001379_1, VkglTestCase_001379_2);

#define VkglTestCase_001380_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001380_2 "ns.integer.bitfieldinsert.int_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001380, VkglTestCase_001380_1, VkglTestCase_001380_2);

#define VkglTestCase_001381_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001381_2 "ons.integer.bitfieldinsert.int_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001381, VkglTestCase_001381_1, VkglTestCase_001381_2);

#define VkglTestCase_001382_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001382_2 "ions.integer.bitfieldinsert.int_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001382, VkglTestCase_001382_1, VkglTestCase_001382_2);

#define VkglTestCase_001383_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001383_2 "ons.integer.bitfieldinsert.int_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001383, VkglTestCase_001383_1, VkglTestCase_001383_2);

#define VkglTestCase_001384_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001384_2 "ns.integer.bitfieldinsert.int_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001384, VkglTestCase_001384_1, VkglTestCase_001384_2);

#define VkglTestCase_001385_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001385_2 "ns.integer.bitfieldinsert.int_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001385, VkglTestCase_001385_1, VkglTestCase_001385_2);

#define VkglTestCase_001386_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001386_2 ".integer.bitfieldinsert.int_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001386, VkglTestCase_001386_1, VkglTestCase_001386_2);

#define VkglTestCase_001387_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001387_2 "ns.integer.bitfieldinsert.int_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001387, VkglTestCase_001387_1, VkglTestCase_001387_2);

#define VkglTestCase_001388_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001388_2 "ons.integer.bitfieldinsert.int_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001388, VkglTestCase_001388_1, VkglTestCase_001388_2);

#define VkglTestCase_001389_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001389_2 "ions.integer.bitfieldinsert.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001389, VkglTestCase_001389_1, VkglTestCase_001389_2);

#define VkglTestCase_001390_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001390_2 "ons.integer.bitfieldinsert.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001390, VkglTestCase_001390_1, VkglTestCase_001390_2);

#define VkglTestCase_001391_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001391_2 "ons.integer.bitfieldinsert.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001391, VkglTestCase_001391_1, VkglTestCase_001391_2);

#define VkglTestCase_001392_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001392_2 "s.integer.bitfieldinsert.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001392, VkglTestCase_001392_1, VkglTestCase_001392_2);

#define VkglTestCase_001393_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001393_2 "ons.integer.bitfieldinsert.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001393, VkglTestCase_001393_1, VkglTestCase_001393_2);

#define VkglTestCase_001394_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001394_2 "ions.integer.bitfieldinsert.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001394, VkglTestCase_001394_1, VkglTestCase_001394_2);

#define VkglTestCase_001395_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001395_2 "ions.integer.bitfieldinsert.ivec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001395, VkglTestCase_001395_1, VkglTestCase_001395_2);

#define VkglTestCase_001396_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001396_2 "ons.integer.bitfieldinsert.ivec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001396, VkglTestCase_001396_1, VkglTestCase_001396_2);

#define VkglTestCase_001397_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001397_2 "ons.integer.bitfieldinsert.ivec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001397, VkglTestCase_001397_1, VkglTestCase_001397_2);

#define VkglTestCase_001398_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001398_2 "s.integer.bitfieldinsert.ivec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001398, VkglTestCase_001398_1, VkglTestCase_001398_2);

#define VkglTestCase_001399_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001399_2 "ns.integer.bitfieldinsert.ivec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001399, VkglTestCase_001399_1, VkglTestCase_001399_2);

#define VkglTestCase_001400_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001400_2 "ons.integer.bitfieldinsert.ivec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001400, VkglTestCase_001400_1, VkglTestCase_001400_2);

#define VkglTestCase_001401_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001401_2 "ns.integer.bitfieldinsert.ivec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001401, VkglTestCase_001401_1, VkglTestCase_001401_2);

#define VkglTestCase_001402_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001402_2 "s.integer.bitfieldinsert.ivec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001402, VkglTestCase_001402_1, VkglTestCase_001402_2);

#define VkglTestCase_001403_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001403_2 "s.integer.bitfieldinsert.ivec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001403, VkglTestCase_001403_1, VkglTestCase_001403_2);

#define VkglTestCase_001404_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001404_2 "integer.bitfieldinsert.ivec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001404, VkglTestCase_001404_1, VkglTestCase_001404_2);

#define VkglTestCase_001405_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001405_2 "s.integer.bitfieldinsert.ivec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001405, VkglTestCase_001405_1, VkglTestCase_001405_2);

#define VkglTestCase_001406_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001406_2 "ns.integer.bitfieldinsert.ivec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001406, VkglTestCase_001406_1, VkglTestCase_001406_2);

#define VkglTestCase_001407_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001407_2 "ons.integer.bitfieldinsert.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001407, VkglTestCase_001407_1, VkglTestCase_001407_2);

#define VkglTestCase_001408_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001408_2 "ns.integer.bitfieldinsert.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001408, VkglTestCase_001408_1, VkglTestCase_001408_2);

#define VkglTestCase_001409_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001409_2 "ns.integer.bitfieldinsert.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001409, VkglTestCase_001409_1, VkglTestCase_001409_2);

#define VkglTestCase_001410_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001410_2 ".integer.bitfieldinsert.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001410, VkglTestCase_001410_1, VkglTestCase_001410_2);

#define VkglTestCase_001411_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001411_2 "ns.integer.bitfieldinsert.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001411, VkglTestCase_001411_1, VkglTestCase_001411_2);

#define VkglTestCase_001412_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001412_2 "ons.integer.bitfieldinsert.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001412, VkglTestCase_001412_1, VkglTestCase_001412_2);

#define VkglTestCase_001413_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001413_2 "ions.integer.bitfieldinsert.ivec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001413, VkglTestCase_001413_1, VkglTestCase_001413_2);

#define VkglTestCase_001414_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001414_2 "ons.integer.bitfieldinsert.ivec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001414, VkglTestCase_001414_1, VkglTestCase_001414_2);

#define VkglTestCase_001415_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001415_2 "ons.integer.bitfieldinsert.ivec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001415, VkglTestCase_001415_1, VkglTestCase_001415_2);

#define VkglTestCase_001416_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001416_2 "s.integer.bitfieldinsert.ivec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001416, VkglTestCase_001416_1, VkglTestCase_001416_2);

#define VkglTestCase_001417_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001417_2 "ns.integer.bitfieldinsert.ivec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001417, VkglTestCase_001417_1, VkglTestCase_001417_2);

#define VkglTestCase_001418_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001418_2 "ons.integer.bitfieldinsert.ivec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001418, VkglTestCase_001418_1, VkglTestCase_001418_2);

#define VkglTestCase_001419_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001419_2 "ns.integer.bitfieldinsert.ivec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001419, VkglTestCase_001419_1, VkglTestCase_001419_2);

#define VkglTestCase_001420_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001420_2 "s.integer.bitfieldinsert.ivec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001420, VkglTestCase_001420_1, VkglTestCase_001420_2);

#define VkglTestCase_001421_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001421_2 "s.integer.bitfieldinsert.ivec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001421, VkglTestCase_001421_1, VkglTestCase_001421_2);

#define VkglTestCase_001422_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001422_2 "integer.bitfieldinsert.ivec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001422, VkglTestCase_001422_1, VkglTestCase_001422_2);

#define VkglTestCase_001423_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001423_2 "s.integer.bitfieldinsert.ivec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001423, VkglTestCase_001423_1, VkglTestCase_001423_2);

#define VkglTestCase_001424_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001424_2 "ns.integer.bitfieldinsert.ivec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001424, VkglTestCase_001424_1, VkglTestCase_001424_2);

#define VkglTestCase_001425_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001425_2 "ons.integer.bitfieldinsert.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001425, VkglTestCase_001425_1, VkglTestCase_001425_2);

#define VkglTestCase_001426_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001426_2 "ns.integer.bitfieldinsert.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001426, VkglTestCase_001426_1, VkglTestCase_001426_2);

#define VkglTestCase_001427_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001427_2 "ns.integer.bitfieldinsert.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001427, VkglTestCase_001427_1, VkglTestCase_001427_2);

#define VkglTestCase_001428_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001428_2 ".integer.bitfieldinsert.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001428, VkglTestCase_001428_1, VkglTestCase_001428_2);

#define VkglTestCase_001429_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001429_2 "ns.integer.bitfieldinsert.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001429, VkglTestCase_001429_1, VkglTestCase_001429_2);

#define VkglTestCase_001430_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001430_2 "ons.integer.bitfieldinsert.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001430, VkglTestCase_001430_1, VkglTestCase_001430_2);

#define VkglTestCase_001431_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001431_2 "ions.integer.bitfieldinsert.ivec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001431, VkglTestCase_001431_1, VkglTestCase_001431_2);

#define VkglTestCase_001432_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001432_2 "ons.integer.bitfieldinsert.ivec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001432, VkglTestCase_001432_1, VkglTestCase_001432_2);

#define VkglTestCase_001433_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001433_2 "ons.integer.bitfieldinsert.ivec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001433, VkglTestCase_001433_1, VkglTestCase_001433_2);

#define VkglTestCase_001434_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001434_2 "s.integer.bitfieldinsert.ivec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001434, VkglTestCase_001434_1, VkglTestCase_001434_2);

#define VkglTestCase_001435_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001435_2 "ns.integer.bitfieldinsert.ivec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001435, VkglTestCase_001435_1, VkglTestCase_001435_2);

#define VkglTestCase_001436_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001436_2 "ons.integer.bitfieldinsert.ivec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001436, VkglTestCase_001436_1, VkglTestCase_001436_2);

#define VkglTestCase_001437_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001437_2 "ns.integer.bitfieldinsert.ivec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001437, VkglTestCase_001437_1, VkglTestCase_001437_2);

#define VkglTestCase_001438_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001438_2 "s.integer.bitfieldinsert.ivec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001438, VkglTestCase_001438_1, VkglTestCase_001438_2);

#define VkglTestCase_001439_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001439_2 "s.integer.bitfieldinsert.ivec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001439, VkglTestCase_001439_1, VkglTestCase_001439_2);

#define VkglTestCase_001440_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001440_2 "integer.bitfieldinsert.ivec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001440, VkglTestCase_001440_1, VkglTestCase_001440_2);

#define VkglTestCase_001441_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001441_2 "s.integer.bitfieldinsert.ivec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001441, VkglTestCase_001441_1, VkglTestCase_001441_2);

#define VkglTestCase_001442_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001442_2 "ns.integer.bitfieldinsert.ivec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001442, VkglTestCase_001442_1, VkglTestCase_001442_2);

#define VkglTestCase_001443_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001443_2 "ons.integer.bitfieldinsert.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001443, VkglTestCase_001443_1, VkglTestCase_001443_2);

#define VkglTestCase_001444_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001444_2 "ns.integer.bitfieldinsert.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001444, VkglTestCase_001444_1, VkglTestCase_001444_2);

#define VkglTestCase_001445_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001445_2 "ns.integer.bitfieldinsert.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001445, VkglTestCase_001445_1, VkglTestCase_001445_2);

#define VkglTestCase_001446_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001446_2 ".integer.bitfieldinsert.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001446, VkglTestCase_001446_1, VkglTestCase_001446_2);

#define VkglTestCase_001447_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001447_2 "ns.integer.bitfieldinsert.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001447, VkglTestCase_001447_1, VkglTestCase_001447_2);

#define VkglTestCase_001448_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001448_2 "ons.integer.bitfieldinsert.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001448, VkglTestCase_001448_1, VkglTestCase_001448_2);

#define VkglTestCase_001449_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001449_2 "ions.integer.bitfieldinsert.uint_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001449, VkglTestCase_001449_1, VkglTestCase_001449_2);

#define VkglTestCase_001450_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001450_2 "ons.integer.bitfieldinsert.uint_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001450, VkglTestCase_001450_1, VkglTestCase_001450_2);

#define VkglTestCase_001451_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001451_2 "ons.integer.bitfieldinsert.uint_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001451, VkglTestCase_001451_1, VkglTestCase_001451_2);

#define VkglTestCase_001452_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001452_2 "s.integer.bitfieldinsert.uint_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001452, VkglTestCase_001452_1, VkglTestCase_001452_2);

#define VkglTestCase_001453_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001453_2 "ons.integer.bitfieldinsert.uint_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001453, VkglTestCase_001453_1, VkglTestCase_001453_2);

#define VkglTestCase_001454_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001454_2 "ions.integer.bitfieldinsert.uint_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001454, VkglTestCase_001454_1, VkglTestCase_001454_2);

#define VkglTestCase_001455_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001455_2 "ons.integer.bitfieldinsert.uint_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001455, VkglTestCase_001455_1, VkglTestCase_001455_2);

#define VkglTestCase_001456_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001456_2 "ns.integer.bitfieldinsert.uint_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001456, VkglTestCase_001456_1, VkglTestCase_001456_2);

#define VkglTestCase_001457_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001457_2 "ns.integer.bitfieldinsert.uint_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001457, VkglTestCase_001457_1, VkglTestCase_001457_2);

#define VkglTestCase_001458_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001458_2 ".integer.bitfieldinsert.uint_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001458, VkglTestCase_001458_1, VkglTestCase_001458_2);

#define VkglTestCase_001459_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001459_2 "s.integer.bitfieldinsert.uint_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001459, VkglTestCase_001459_1, VkglTestCase_001459_2);

#define VkglTestCase_001460_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001460_2 "ns.integer.bitfieldinsert.uint_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001460, VkglTestCase_001460_1, VkglTestCase_001460_2);

#define VkglTestCase_001461_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001461_2 "ions.integer.bitfieldinsert.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001461, VkglTestCase_001461_1, VkglTestCase_001461_2);

#define VkglTestCase_001462_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001462_2 "ons.integer.bitfieldinsert.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001462, VkglTestCase_001462_1, VkglTestCase_001462_2);

#define VkglTestCase_001463_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001463_2 "ons.integer.bitfieldinsert.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001463, VkglTestCase_001463_1, VkglTestCase_001463_2);

#define VkglTestCase_001464_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001464_2 "s.integer.bitfieldinsert.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001464, VkglTestCase_001464_1, VkglTestCase_001464_2);

#define VkglTestCase_001465_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001465_2 "ns.integer.bitfieldinsert.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001465, VkglTestCase_001465_1, VkglTestCase_001465_2);

#define VkglTestCase_001466_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001466_2 "ons.integer.bitfieldinsert.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001466, VkglTestCase_001466_1, VkglTestCase_001466_2);

#define VkglTestCase_001467_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001467_2 "ions.integer.bitfieldinsert.uvec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001467, VkglTestCase_001467_1, VkglTestCase_001467_2);

#define VkglTestCase_001468_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001468_2 "ons.integer.bitfieldinsert.uvec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001468, VkglTestCase_001468_1, VkglTestCase_001468_2);

#define VkglTestCase_001469_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001469_2 "ons.integer.bitfieldinsert.uvec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001469, VkglTestCase_001469_1, VkglTestCase_001469_2);

#define VkglTestCase_001470_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001470_2 "s.integer.bitfieldinsert.uvec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001470, VkglTestCase_001470_1, VkglTestCase_001470_2);

#define VkglTestCase_001471_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001471_2 "ns.integer.bitfieldinsert.uvec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001471, VkglTestCase_001471_1, VkglTestCase_001471_2);

#define VkglTestCase_001472_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001472_2 "ons.integer.bitfieldinsert.uvec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001472, VkglTestCase_001472_1, VkglTestCase_001472_2);

#define VkglTestCase_001473_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001473_2 "ns.integer.bitfieldinsert.uvec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001473, VkglTestCase_001473_1, VkglTestCase_001473_2);

#define VkglTestCase_001474_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001474_2 "s.integer.bitfieldinsert.uvec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001474, VkglTestCase_001474_1, VkglTestCase_001474_2);

#define VkglTestCase_001475_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001475_2 "s.integer.bitfieldinsert.uvec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001475, VkglTestCase_001475_1, VkglTestCase_001475_2);

#define VkglTestCase_001476_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001476_2 "integer.bitfieldinsert.uvec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001476, VkglTestCase_001476_1, VkglTestCase_001476_2);

#define VkglTestCase_001477_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001477_2 "s.integer.bitfieldinsert.uvec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001477, VkglTestCase_001477_1, VkglTestCase_001477_2);

#define VkglTestCase_001478_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001478_2 "ns.integer.bitfieldinsert.uvec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001478, VkglTestCase_001478_1, VkglTestCase_001478_2);

#define VkglTestCase_001479_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001479_2 "ons.integer.bitfieldinsert.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001479, VkglTestCase_001479_1, VkglTestCase_001479_2);

#define VkglTestCase_001480_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001480_2 "ns.integer.bitfieldinsert.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001480, VkglTestCase_001480_1, VkglTestCase_001480_2);

#define VkglTestCase_001481_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001481_2 "ns.integer.bitfieldinsert.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001481, VkglTestCase_001481_1, VkglTestCase_001481_2);

#define VkglTestCase_001482_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001482_2 ".integer.bitfieldinsert.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001482, VkglTestCase_001482_1, VkglTestCase_001482_2);

#define VkglTestCase_001483_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001483_2 "ns.integer.bitfieldinsert.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001483, VkglTestCase_001483_1, VkglTestCase_001483_2);

#define VkglTestCase_001484_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001484_2 "ons.integer.bitfieldinsert.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001484, VkglTestCase_001484_1, VkglTestCase_001484_2);

#define VkglTestCase_001485_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001485_2 "ions.integer.bitfieldinsert.uvec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001485, VkglTestCase_001485_1, VkglTestCase_001485_2);

#define VkglTestCase_001486_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001486_2 "ons.integer.bitfieldinsert.uvec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001486, VkglTestCase_001486_1, VkglTestCase_001486_2);

#define VkglTestCase_001487_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001487_2 "ons.integer.bitfieldinsert.uvec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001487, VkglTestCase_001487_1, VkglTestCase_001487_2);

#define VkglTestCase_001488_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001488_2 "s.integer.bitfieldinsert.uvec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001488, VkglTestCase_001488_1, VkglTestCase_001488_2);

#define VkglTestCase_001489_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001489_2 "ns.integer.bitfieldinsert.uvec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001489, VkglTestCase_001489_1, VkglTestCase_001489_2);

#define VkglTestCase_001490_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001490_2 "ons.integer.bitfieldinsert.uvec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001490, VkglTestCase_001490_1, VkglTestCase_001490_2);

#define VkglTestCase_001491_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001491_2 "ns.integer.bitfieldinsert.uvec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001491, VkglTestCase_001491_1, VkglTestCase_001491_2);

#define VkglTestCase_001492_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001492_2 "s.integer.bitfieldinsert.uvec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001492, VkglTestCase_001492_1, VkglTestCase_001492_2);

#define VkglTestCase_001493_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001493_2 "s.integer.bitfieldinsert.uvec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001493, VkglTestCase_001493_1, VkglTestCase_001493_2);

#define VkglTestCase_001494_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001494_2 "integer.bitfieldinsert.uvec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001494, VkglTestCase_001494_1, VkglTestCase_001494_2);

#define VkglTestCase_001495_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001495_2 "s.integer.bitfieldinsert.uvec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001495, VkglTestCase_001495_1, VkglTestCase_001495_2);

#define VkglTestCase_001496_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001496_2 "ns.integer.bitfieldinsert.uvec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001496, VkglTestCase_001496_1, VkglTestCase_001496_2);

#define VkglTestCase_001497_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001497_2 "ons.integer.bitfieldinsert.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001497, VkglTestCase_001497_1, VkglTestCase_001497_2);

#define VkglTestCase_001498_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001498_2 "ns.integer.bitfieldinsert.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001498, VkglTestCase_001498_1, VkglTestCase_001498_2);

#define VkglTestCase_001499_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001499_2 "ns.integer.bitfieldinsert.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001499, VkglTestCase_001499_1, VkglTestCase_001499_2);

#define VkglTestCase_001500_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001500_2 ".integer.bitfieldinsert.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001500, VkglTestCase_001500_1, VkglTestCase_001500_2);

#define VkglTestCase_001501_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001501_2 "ns.integer.bitfieldinsert.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001501, VkglTestCase_001501_1, VkglTestCase_001501_2);

#define VkglTestCase_001502_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001502_2 "ons.integer.bitfieldinsert.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001502, VkglTestCase_001502_1, VkglTestCase_001502_2);

#define VkglTestCase_001503_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001503_2 "ions.integer.bitfieldinsert.uvec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001503, VkglTestCase_001503_1, VkglTestCase_001503_2);

#define VkglTestCase_001504_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001504_2 "ons.integer.bitfieldinsert.uvec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001504, VkglTestCase_001504_1, VkglTestCase_001504_2);

#define VkglTestCase_001505_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001505_2 "ons.integer.bitfieldinsert.uvec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001505, VkglTestCase_001505_1, VkglTestCase_001505_2);

#define VkglTestCase_001506_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001506_2 "s.integer.bitfieldinsert.uvec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001506, VkglTestCase_001506_1, VkglTestCase_001506_2);

#define VkglTestCase_001507_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001507_2 "ns.integer.bitfieldinsert.uvec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001507, VkglTestCase_001507_1, VkglTestCase_001507_2);

#define VkglTestCase_001508_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001508_2 "ons.integer.bitfieldinsert.uvec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001508, VkglTestCase_001508_1, VkglTestCase_001508_2);

#define VkglTestCase_001509_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001509_2 "ns.integer.bitfieldinsert.uvec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001509, VkglTestCase_001509_1, VkglTestCase_001509_2);

#define VkglTestCase_001510_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001510_2 "s.integer.bitfieldinsert.uvec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001510, VkglTestCase_001510_1, VkglTestCase_001510_2);

#define VkglTestCase_001511_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001511_2 "s.integer.bitfieldinsert.uvec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001511, VkglTestCase_001511_1, VkglTestCase_001511_2);

#define VkglTestCase_001512_1 "dEQP-GLES31.functional.shaders.builtin_functions."
#define VkglTestCase_001512_2 "integer.bitfieldinsert.uvec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001512, VkglTestCase_001512_1, VkglTestCase_001512_2);

#define VkglTestCase_001513_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001513_2 "s.integer.bitfieldinsert.uvec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001513, VkglTestCase_001513_1, VkglTestCase_001513_2);

#define VkglTestCase_001514_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001514_2 "ns.integer.bitfieldinsert.uvec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001514, VkglTestCase_001514_1, VkglTestCase_001514_2);

#define VkglTestCase_001515_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001515_2 "ons.integer.bitfieldinsert.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001515, VkglTestCase_001515_1, VkglTestCase_001515_2);

#define VkglTestCase_001516_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001516_2 "ns.integer.bitfieldinsert.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001516, VkglTestCase_001516_1, VkglTestCase_001516_2);

#define VkglTestCase_001517_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001517_2 "ns.integer.bitfieldinsert.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001517, VkglTestCase_001517_1, VkglTestCase_001517_2);

#define VkglTestCase_001518_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_001518_2 ".integer.bitfieldinsert.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001518, VkglTestCase_001518_1, VkglTestCase_001518_2);

#define VkglTestCase_001519_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001519_2 "ns.integer.bitfieldinsert.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001519, VkglTestCase_001519_1, VkglTestCase_001519_2);

#define VkglTestCase_001520_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001520_2 "ons.integer.bitfieldinsert.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001520, VkglTestCase_001520_1, VkglTestCase_001520_2);
