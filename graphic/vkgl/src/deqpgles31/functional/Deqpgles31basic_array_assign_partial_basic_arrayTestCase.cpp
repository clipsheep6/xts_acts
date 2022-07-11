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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017488_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017488_2 "array_assign_partial.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017488, VkglTestCase_017488_1, VkglTestCase_017488_2);

#define VkglTestCase_017489_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017489_2 "rray_assign_partial.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017489, VkglTestCase_017489_1, VkglTestCase_017489_2);

#define VkglTestCase_017490_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017490_2 "_array_assign_partial.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017490, VkglTestCase_017490_1, VkglTestCase_017490_2);

#define VkglTestCase_017491_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017491_2 "_array_assign_partial.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017491, VkglTestCase_017491_1, VkglTestCase_017491_2);

#define VkglTestCase_017492_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017492_2 "array_assign_partial.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017492, VkglTestCase_017492_1, VkglTestCase_017492_2);

#define VkglTestCase_017493_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017493_2 "c_array_assign_partial.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017493, VkglTestCase_017493_1, VkglTestCase_017493_2);

#define VkglTestCase_017494_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017494_2 "_array_assign_partial.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017494, VkglTestCase_017494_1, VkglTestCase_017494_2);

#define VkglTestCase_017495_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017495_2 "array_assign_partial.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017495, VkglTestCase_017495_1, VkglTestCase_017495_2);

#define VkglTestCase_017496_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017496_2 "c_array_assign_partial.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017496, VkglTestCase_017496_1, VkglTestCase_017496_2);

#define VkglTestCase_017497_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017497_2 "_array_assign_partial.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017497, VkglTestCase_017497_1, VkglTestCase_017497_2);

#define VkglTestCase_017498_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017498_2 "array_assign_partial.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017498, VkglTestCase_017498_1, VkglTestCase_017498_2);

#define VkglTestCase_017499_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017499_2 "c_array_assign_partial.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017499, VkglTestCase_017499_1, VkglTestCase_017499_2);

#define VkglTestCase_017500_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017500_2 "array_assign_partial.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017500, VkglTestCase_017500_1, VkglTestCase_017500_2);

#define VkglTestCase_017501_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017501_2 "rray_assign_partial.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017501, VkglTestCase_017501_1, VkglTestCase_017501_2);

#define VkglTestCase_017502_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017502_2 "_array_assign_partial.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017502, VkglTestCase_017502_1, VkglTestCase_017502_2);

#define VkglTestCase_017503_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017503_2 "_array_assign_partial.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017503, VkglTestCase_017503_1, VkglTestCase_017503_2);

#define VkglTestCase_017504_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017504_2 "array_assign_partial.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017504, VkglTestCase_017504_1, VkglTestCase_017504_2);

#define VkglTestCase_017505_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017505_2 "c_array_assign_partial.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017505, VkglTestCase_017505_1, VkglTestCase_017505_2);

#define VkglTestCase_017506_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017506_2 "array_assign_partial.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017506, VkglTestCase_017506_1, VkglTestCase_017506_2);

#define VkglTestCase_017507_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017507_2 "rray_assign_partial.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017507, VkglTestCase_017507_1, VkglTestCase_017507_2);

#define VkglTestCase_017508_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017508_2 "_array_assign_partial.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017508, VkglTestCase_017508_1, VkglTestCase_017508_2);

#define VkglTestCase_017509_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017509_2 "_array_assign_partial.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017509, VkglTestCase_017509_1, VkglTestCase_017509_2);

#define VkglTestCase_017510_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017510_2 "array_assign_partial.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017510, VkglTestCase_017510_1, VkglTestCase_017510_2);

#define VkglTestCase_017511_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017511_2 "c_array_assign_partial.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017511, VkglTestCase_017511_1, VkglTestCase_017511_2);

#define VkglTestCase_017512_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017512_2 "array_assign_partial.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017512, VkglTestCase_017512_1, VkglTestCase_017512_2);

#define VkglTestCase_017513_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017513_2 "rray_assign_partial.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017513, VkglTestCase_017513_1, VkglTestCase_017513_2);

#define VkglTestCase_017514_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017514_2 "_array_assign_partial.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017514, VkglTestCase_017514_1, VkglTestCase_017514_2);

#define VkglTestCase_017515_1 "dEQP-GLES31.functional.program_uniform.basic_ar"
#define VkglTestCase_017515_2 "ray_assign_partial.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017515, VkglTestCase_017515_1, VkglTestCase_017515_2);

#define VkglTestCase_017516_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017516_2 "ay_assign_partial.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017516, VkglTestCase_017516_1, VkglTestCase_017516_2);

#define VkglTestCase_017517_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017517_2 "rray_assign_partial.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017517, VkglTestCase_017517_1, VkglTestCase_017517_2);
