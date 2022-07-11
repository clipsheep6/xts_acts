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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001402_1 "KHR-GLES3.shaders.str"
#define VkglTestCase_001402_2 "uct.local.basic_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001402, VkglTestCase_001402_1, VkglTestCase_001402_2);

#define VkglTestCase_001403_1 "KHR-GLES3.shaders.stru"
#define VkglTestCase_001403_2 "ct.local.basic_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001403, VkglTestCase_001403_1, VkglTestCase_001403_2);

#define VkglTestCase_001404_1 "KHR-GLES3.shaders.stru"
#define VkglTestCase_001404_2 "ct.local.nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001404, VkglTestCase_001404_1, VkglTestCase_001404_2);

#define VkglTestCase_001405_1 "KHR-GLES3.shaders.struc"
#define VkglTestCase_001405_2 "t.local.nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001405, VkglTestCase_001405_1, VkglTestCase_001405_2);

#define VkglTestCase_001406_1 "KHR-GLES3.shaders.struct."
#define VkglTestCase_001406_2 "local.array_member_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001406, VkglTestCase_001406_1, VkglTestCase_001406_2);

#define VkglTestCase_001407_1 "KHR-GLES3.shaders.struct.l"
#define VkglTestCase_001407_2 "ocal.array_member_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001407, VkglTestCase_001407_1, VkglTestCase_001407_2);

#define VkglTestCase_001408_1 "KHR-GLES3.shaders.struct.local.a"
#define VkglTestCase_001408_2 "rray_member_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001408, VkglTestCase_001408_1, VkglTestCase_001408_2);

#define VkglTestCase_001409_1 "KHR-GLES3.shaders.struct.local.ar"
#define VkglTestCase_001409_2 "ray_member_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001409, VkglTestCase_001409_1, VkglTestCase_001409_2);

#define VkglTestCase_001410_1 "KHR-GLES3.shaders.struct."
#define VkglTestCase_001410_2 "local.struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001410, VkglTestCase_001410_1, VkglTestCase_001410_2);

#define VkglTestCase_001411_1 "KHR-GLES3.shaders.struct.l"
#define VkglTestCase_001411_2 "ocal.struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001411, VkglTestCase_001411_1, VkglTestCase_001411_2);

#define VkglTestCase_001412_1 "KHR-GLES3.shaders.struct.local.s"
#define VkglTestCase_001412_2 "truct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001412, VkglTestCase_001412_1, VkglTestCase_001412_2);

#define VkglTestCase_001413_1 "KHR-GLES3.shaders.struct.local.st"
#define VkglTestCase_001413_2 "ruct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001413, VkglTestCase_001413_1, VkglTestCase_001413_2);

#define VkglTestCase_001414_1 "KHR-GLES3.shaders.struct.loc"
#define VkglTestCase_001414_2 "al.nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001414, VkglTestCase_001414_1, VkglTestCase_001414_2);

#define VkglTestCase_001415_1 "KHR-GLES3.shaders.struct.loca"
#define VkglTestCase_001415_2 "l.nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001415, VkglTestCase_001415_1, VkglTestCase_001415_2);

#define VkglTestCase_001416_1 "KHR-GLES3.shaders.struct.local.nest"
#define VkglTestCase_001416_2 "ed_struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001416, VkglTestCase_001416_1, VkglTestCase_001416_2);

#define VkglTestCase_001417_1 "KHR-GLES3.shaders.struct.local.neste"
#define VkglTestCase_001417_2 "d_struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001417, VkglTestCase_001417_1, VkglTestCase_001417_2);

#define VkglTestCase_001418_1 "KHR-GLES3.shaders.struc"
#define VkglTestCase_001418_2 "t.local.parameter_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001418, VkglTestCase_001418_1, VkglTestCase_001418_2);

#define VkglTestCase_001419_1 "KHR-GLES3.shaders.struct"
#define VkglTestCase_001419_2 ".local.parameter_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001419, VkglTestCase_001419_1, VkglTestCase_001419_2);

#define VkglTestCase_001420_1 "KHR-GLES3.shaders.struct.lo"
#define VkglTestCase_001420_2 "cal.parameter_nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001420, VkglTestCase_001420_1, VkglTestCase_001420_2);

#define VkglTestCase_001421_1 "KHR-GLES3.shaders.struct.loc"
#define VkglTestCase_001421_2 "al.parameter_nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001421, VkglTestCase_001421_1, VkglTestCase_001421_2);

#define VkglTestCase_001422_1 "KHR-GLES3.shaders.stru"
#define VkglTestCase_001422_2 "ct.local.return_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001422, VkglTestCase_001422_1, VkglTestCase_001422_2);

#define VkglTestCase_001423_1 "KHR-GLES3.shaders.struc"
#define VkglTestCase_001423_2 "t.local.return_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001423, VkglTestCase_001423_1, VkglTestCase_001423_2);

#define VkglTestCase_001424_1 "KHR-GLES3.shaders.struct."
#define VkglTestCase_001424_2 "local.return_nested_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001424, VkglTestCase_001424_1, VkglTestCase_001424_2);

#define VkglTestCase_001425_1 "KHR-GLES3.shaders.struct.l"
#define VkglTestCase_001425_2 "ocal.return_nested_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001425, VkglTestCase_001425_1, VkglTestCase_001425_2);

#define VkglTestCase_001426_1 "KHR-GLES3.shaders.struct.local"
#define VkglTestCase_001426_2 ".conditional_assignment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001426, VkglTestCase_001426_1, VkglTestCase_001426_2);

#define VkglTestCase_001427_1 "KHR-GLES3.shaders.struct.local."
#define VkglTestCase_001427_2 "conditional_assignment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001427, VkglTestCase_001427_1, VkglTestCase_001427_2);

#define VkglTestCase_001428_1 "KHR-GLES3.shaders.struct.l"
#define VkglTestCase_001428_2 "ocal.loop_assignment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001428, VkglTestCase_001428_1, VkglTestCase_001428_2);

#define VkglTestCase_001429_1 "KHR-GLES3.shaders.struct.lo"
#define VkglTestCase_001429_2 "cal.loop_assignment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001429, VkglTestCase_001429_1, VkglTestCase_001429_2);

#define VkglTestCase_001430_1 "KHR-GLES3.shaders.struct.local"
#define VkglTestCase_001430_2 ".dynamic_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001430, VkglTestCase_001430_1, VkglTestCase_001430_2);

#define VkglTestCase_001431_1 "KHR-GLES3.shaders.struct.local."
#define VkglTestCase_001431_2 "dynamic_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001431, VkglTestCase_001431_1, VkglTestCase_001431_2);

#define VkglTestCase_001432_1 "KHR-GLES3.shaders.struct.local.ne"
#define VkglTestCase_001432_2 "sted_conditional_assignment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001432, VkglTestCase_001432_1, VkglTestCase_001432_2);

#define VkglTestCase_001433_1 "KHR-GLES3.shaders.struct.local.nes"
#define VkglTestCase_001433_2 "ted_conditional_assignment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001433, VkglTestCase_001433_1, VkglTestCase_001433_2);

#define VkglTestCase_001434_1 "KHR-GLES3.shaders.struct.local"
#define VkglTestCase_001434_2 ".nested_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001434, VkglTestCase_001434_1, VkglTestCase_001434_2);

#define VkglTestCase_001435_1 "KHR-GLES3.shaders.struct.local."
#define VkglTestCase_001435_2 "nested_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001435, VkglTestCase_001435_1, VkglTestCase_001435_2);

#define VkglTestCase_001436_1 "KHR-GLES3.shaders.struct.local.nes"
#define VkglTestCase_001436_2 "ted_dynamic_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001436, VkglTestCase_001436_1, VkglTestCase_001436_2);

#define VkglTestCase_001437_1 "KHR-GLES3.shaders.struct.local.nest"
#define VkglTestCase_001437_2 "ed_dynamic_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001437, VkglTestCase_001437_1, VkglTestCase_001437_2);

#define VkglTestCase_001438_1 "KHR-GLES3.shaders.struct.lo"
#define VkglTestCase_001438_2 "cal.loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001438, VkglTestCase_001438_1, VkglTestCase_001438_2);

#define VkglTestCase_001439_1 "KHR-GLES3.shaders.struct.loc"
#define VkglTestCase_001439_2 "al.loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001439, VkglTestCase_001439_1, VkglTestCase_001439_2);

#define VkglTestCase_001440_1 "KHR-GLES3.shaders.struct.local."
#define VkglTestCase_001440_2 "loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001440, VkglTestCase_001440_1, VkglTestCase_001440_2);

#define VkglTestCase_001441_1 "KHR-GLES3.shaders.struct.local.l"
#define VkglTestCase_001441_2 "oop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001441, VkglTestCase_001441_1, VkglTestCase_001441_2);

#define VkglTestCase_001442_1 "KHR-GLES3.shaders.struct.local."
#define VkglTestCase_001442_2 "dynamic_loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001442, VkglTestCase_001442_1, VkglTestCase_001442_2);

#define VkglTestCase_001443_1 "KHR-GLES3.shaders.struct.local.d"
#define VkglTestCase_001443_2 "ynamic_loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001443, VkglTestCase_001443_1, VkglTestCase_001443_2);

#define VkglTestCase_001444_1 "KHR-GLES3.shaders.struct.local.dyna"
#define VkglTestCase_001444_2 "mic_loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001444, VkglTestCase_001444_1, VkglTestCase_001444_2);

#define VkglTestCase_001445_1 "KHR-GLES3.shaders.struct.local.dynam"
#define VkglTestCase_001445_2 "ic_loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001445, VkglTestCase_001445_1, VkglTestCase_001445_2);
