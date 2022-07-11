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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016448_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_016448_2 "rs.struct.local.basic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016448, VkglTestCase_016448_1, VkglTestCase_016448_2);

#define VkglTestCase_016449_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016449_2 "s.struct.local.basic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016449, VkglTestCase_016449_1, VkglTestCase_016449_2);

#define VkglTestCase_016450_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016450_2 "s.struct.local.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016450, VkglTestCase_016450_1, VkglTestCase_016450_2);

#define VkglTestCase_016451_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016451_2 ".struct.local.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016451, VkglTestCase_016451_1, VkglTestCase_016451_2);

#define VkglTestCase_016452_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016452_2 "truct.local.array_member_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016452, VkglTestCase_016452_1, VkglTestCase_016452_2);

#define VkglTestCase_016453_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016453_2 "ruct.local.array_member_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016453, VkglTestCase_016453_1, VkglTestCase_016453_2);

#define VkglTestCase_016454_1 "dEQP-GLES3.functional.shaders.struct.l"
#define VkglTestCase_016454_2 "ocal.array_member_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016454, VkglTestCase_016454_1, VkglTestCase_016454_2);

#define VkglTestCase_016455_1 "dEQP-GLES3.functional.shaders.struct.lo"
#define VkglTestCase_016455_2 "cal.array_member_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016455, VkglTestCase_016455_1, VkglTestCase_016455_2);

#define VkglTestCase_016456_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016456_2 "truct.local.struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016456, VkglTestCase_016456_1, VkglTestCase_016456_2);

#define VkglTestCase_016457_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016457_2 "ruct.local.struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016457, VkglTestCase_016457_1, VkglTestCase_016457_2);

#define VkglTestCase_016458_1 "dEQP-GLES3.functional.shaders.struct.l"
#define VkglTestCase_016458_2 "ocal.struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016458, VkglTestCase_016458_1, VkglTestCase_016458_2);

#define VkglTestCase_016459_1 "dEQP-GLES3.functional.shaders.struct.lo"
#define VkglTestCase_016459_2 "cal.struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016459, VkglTestCase_016459_1, VkglTestCase_016459_2);

#define VkglTestCase_016460_1 "dEQP-GLES3.functional.shaders.stru"
#define VkglTestCase_016460_2 "ct.local.nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016460, VkglTestCase_016460_1, VkglTestCase_016460_2);

#define VkglTestCase_016461_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016461_2 "t.local.nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016461, VkglTestCase_016461_1, VkglTestCase_016461_2);

#define VkglTestCase_016462_1 "dEQP-GLES3.functional.shaders.struct.loca"
#define VkglTestCase_016462_2 "l.nested_struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016462, VkglTestCase_016462_1, VkglTestCase_016462_2);

#define VkglTestCase_016463_1 "dEQP-GLES3.functional.shaders.struct.local"
#define VkglTestCase_016463_2 ".nested_struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016463, VkglTestCase_016463_1, VkglTestCase_016463_2);

#define VkglTestCase_016464_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016464_2 ".struct.local.parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016464, VkglTestCase_016464_1, VkglTestCase_016464_2);

#define VkglTestCase_016465_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016465_2 "struct.local.parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016465, VkglTestCase_016465_1, VkglTestCase_016465_2);

#define VkglTestCase_016466_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016466_2 "t.local.parameter_inout_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016466, VkglTestCase_016466_1, VkglTestCase_016466_2);

#define VkglTestCase_016467_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016467_2 ".local.parameter_inout_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016467, VkglTestCase_016467_1, VkglTestCase_016467_2);

#define VkglTestCase_016468_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016468_2 ".local.parameter_inout_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016468, VkglTestCase_016468_1, VkglTestCase_016468_2);

#define VkglTestCase_016469_1 "dEQP-GLES3.functional.shaders.struct."
#define VkglTestCase_016469_2 "local.parameter_inout_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016469, VkglTestCase_016469_1, VkglTestCase_016469_2);

#define VkglTestCase_016470_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016470_2 "t.local.parameter_inout_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016470, VkglTestCase_016470_1, VkglTestCase_016470_2);

#define VkglTestCase_016471_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016471_2 ".local.parameter_inout_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016471, VkglTestCase_016471_1, VkglTestCase_016471_2);

#define VkglTestCase_016472_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016472_2 "uct.local.parameter_nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016472, VkglTestCase_016472_1, VkglTestCase_016472_2);

#define VkglTestCase_016473_1 "dEQP-GLES3.functional.shaders.stru"
#define VkglTestCase_016473_2 "ct.local.parameter_nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016473, VkglTestCase_016473_1, VkglTestCase_016473_2);

#define VkglTestCase_016474_1 "dEQP-GLES3.functional.shaders.stru"
#define VkglTestCase_016474_2 "ct.local.parameter_out_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016474, VkglTestCase_016474_1, VkglTestCase_016474_2);

#define VkglTestCase_016475_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016475_2 "t.local.parameter_out_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016475, VkglTestCase_016475_1, VkglTestCase_016475_2);

#define VkglTestCase_016476_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016476_2 "t.local.parameter_out_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016476, VkglTestCase_016476_1, VkglTestCase_016476_2);

#define VkglTestCase_016477_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016477_2 ".local.parameter_out_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016477, VkglTestCase_016477_1, VkglTestCase_016477_2);

#define VkglTestCase_016478_1 "dEQP-GLES3.functional.shaders.stru"
#define VkglTestCase_016478_2 "ct.local.parameter_out_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016478, VkglTestCase_016478_1, VkglTestCase_016478_2);

#define VkglTestCase_016479_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016479_2 "t.local.parameter_out_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016479, VkglTestCase_016479_1, VkglTestCase_016479_2);

#define VkglTestCase_016480_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016480_2 "s.struct.local.return_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016480, VkglTestCase_016480_1, VkglTestCase_016480_2);

#define VkglTestCase_016481_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016481_2 ".struct.local.return_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016481, VkglTestCase_016481_1, VkglTestCase_016481_2);

#define VkglTestCase_016482_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016482_2 "truct.local.return_nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016482, VkglTestCase_016482_1, VkglTestCase_016482_2);

#define VkglTestCase_016483_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016483_2 "ruct.local.return_nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016483, VkglTestCase_016483_1, VkglTestCase_016483_2);

#define VkglTestCase_016484_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016484_2 ".local.conditional_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016484, VkglTestCase_016484_1, VkglTestCase_016484_2);

#define VkglTestCase_016485_1 "dEQP-GLES3.functional.shaders.struct."
#define VkglTestCase_016485_2 "local.conditional_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016485, VkglTestCase_016485_1, VkglTestCase_016485_2);

#define VkglTestCase_016486_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016486_2 "ruct.local.loop_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016486, VkglTestCase_016486_1, VkglTestCase_016486_2);

#define VkglTestCase_016487_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016487_2 "uct.local.loop_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016487, VkglTestCase_016487_1, VkglTestCase_016487_2);

#define VkglTestCase_016488_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016488_2 ".local.dynamic_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016488, VkglTestCase_016488_1, VkglTestCase_016488_2);

#define VkglTestCase_016489_1 "dEQP-GLES3.functional.shaders.struct."
#define VkglTestCase_016489_2 "local.dynamic_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016489, VkglTestCase_016489_1, VkglTestCase_016489_2);

#define VkglTestCase_016490_1 "dEQP-GLES3.functional.shaders.struct.lo"
#define VkglTestCase_016490_2 "cal.nested_conditional_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016490, VkglTestCase_016490_1, VkglTestCase_016490_2);

#define VkglTestCase_016491_1 "dEQP-GLES3.functional.shaders.struct.loc"
#define VkglTestCase_016491_2 "al.nested_conditional_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016491, VkglTestCase_016491_1, VkglTestCase_016491_2);

#define VkglTestCase_016492_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016492_2 ".local.nested_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016492, VkglTestCase_016492_1, VkglTestCase_016492_2);

#define VkglTestCase_016493_1 "dEQP-GLES3.functional.shaders.struct."
#define VkglTestCase_016493_2 "local.nested_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016493, VkglTestCase_016493_1, VkglTestCase_016493_2);

#define VkglTestCase_016494_1 "dEQP-GLES3.functional.shaders.struct.loc"
#define VkglTestCase_016494_2 "al.nested_dynamic_loop_assignment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016494, VkglTestCase_016494_1, VkglTestCase_016494_2);

#define VkglTestCase_016495_1 "dEQP-GLES3.functional.shaders.struct.loca"
#define VkglTestCase_016495_2 "l.nested_dynamic_loop_assignment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016495, VkglTestCase_016495_1, VkglTestCase_016495_2);

#define VkglTestCase_016496_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016496_2 "uct.local.loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016496, VkglTestCase_016496_1, VkglTestCase_016496_2);

#define VkglTestCase_016497_1 "dEQP-GLES3.functional.shaders.stru"
#define VkglTestCase_016497_2 "ct.local.loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016497, VkglTestCase_016497_1, VkglTestCase_016497_2);

#define VkglTestCase_016498_1 "dEQP-GLES3.functional.shaders.struct."
#define VkglTestCase_016498_2 "local.loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016498, VkglTestCase_016498_1, VkglTestCase_016498_2);

#define VkglTestCase_016499_1 "dEQP-GLES3.functional.shaders.struct.l"
#define VkglTestCase_016499_2 "ocal.loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016499, VkglTestCase_016499_1, VkglTestCase_016499_2);

#define VkglTestCase_016500_1 "dEQP-GLES3.functional.shaders.struct."
#define VkglTestCase_016500_2 "local.dynamic_loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016500, VkglTestCase_016500_1, VkglTestCase_016500_2);

#define VkglTestCase_016501_1 "dEQP-GLES3.functional.shaders.struct.l"
#define VkglTestCase_016501_2 "ocal.dynamic_loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016501, VkglTestCase_016501_1, VkglTestCase_016501_2);

#define VkglTestCase_016502_1 "dEQP-GLES3.functional.shaders.struct.loca"
#define VkglTestCase_016502_2 "l.dynamic_loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016502, VkglTestCase_016502_1, VkglTestCase_016502_2);

#define VkglTestCase_016503_1 "dEQP-GLES3.functional.shaders.struct.local"
#define VkglTestCase_016503_2 ".dynamic_loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016503, VkglTestCase_016503_1, VkglTestCase_016503_2);

#define VkglTestCase_016504_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016504_2 "struct.local.basic_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016504, VkglTestCase_016504_1, VkglTestCase_016504_2);

#define VkglTestCase_016505_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016505_2 "truct.local.basic_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016505, VkglTestCase_016505_1, VkglTestCase_016505_2);

#define VkglTestCase_016506_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016506_2 "ruct.local.basic_not_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016506, VkglTestCase_016506_1, VkglTestCase_016506_2);

#define VkglTestCase_016507_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016507_2 "uct.local.basic_not_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016507, VkglTestCase_016507_1, VkglTestCase_016507_2);

#define VkglTestCase_016508_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016508_2 "truct.local.nested_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016508, VkglTestCase_016508_1, VkglTestCase_016508_2);

#define VkglTestCase_016509_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016509_2 "ruct.local.nested_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016509, VkglTestCase_016509_1, VkglTestCase_016509_2);

#define VkglTestCase_016510_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016510_2 "uct.local.nested_not_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016510, VkglTestCase_016510_1, VkglTestCase_016510_2);

#define VkglTestCase_016511_1 "dEQP-GLES3.functional.shaders.stru"
#define VkglTestCase_016511_2 "ct.local.nested_not_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016511, VkglTestCase_016511_1, VkglTestCase_016511_2);

#define VkglTestCase_016512_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016512_2 "t.local.array_member_equality_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016512, VkglTestCase_016512_1, VkglTestCase_016512_2);

#define VkglTestCase_016513_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016513_2 ".local.array_member_equality_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016513, VkglTestCase_016513_1, VkglTestCase_016513_2);
