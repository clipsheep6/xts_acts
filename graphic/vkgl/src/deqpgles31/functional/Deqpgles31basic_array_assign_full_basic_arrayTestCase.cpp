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

#define VkglTestCase_017437_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017437_2 "c_array_assign_full.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017437, VkglTestCase_017437_1, VkglTestCase_017437_2);

#define VkglTestCase_017438_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017438_2 "_array_assign_full.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017438, VkglTestCase_017438_1, VkglTestCase_017438_2);

#define VkglTestCase_017439_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017439_2 "ic_array_assign_full.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017439, VkglTestCase_017439_1, VkglTestCase_017439_2);

#define VkglTestCase_017440_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017440_2 "c_array_assign_full.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017440, VkglTestCase_017440_1, VkglTestCase_017440_2);

#define VkglTestCase_017441_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017441_2 "_array_assign_full.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017441, VkglTestCase_017441_1, VkglTestCase_017441_2);

#define VkglTestCase_017442_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017442_2 "ic_array_assign_full.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017442, VkglTestCase_017442_1, VkglTestCase_017442_2);

#define VkglTestCase_017443_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017443_2 "c_array_assign_full.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017443, VkglTestCase_017443_1, VkglTestCase_017443_2);

#define VkglTestCase_017444_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017444_2 "_array_assign_full.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017444, VkglTestCase_017444_1, VkglTestCase_017444_2);

#define VkglTestCase_017445_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017445_2 "ic_array_assign_full.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017445, VkglTestCase_017445_1, VkglTestCase_017445_2);

#define VkglTestCase_017446_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017446_2 "ic_array_assign_full.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017446, VkglTestCase_017446_1, VkglTestCase_017446_2);

#define VkglTestCase_017447_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017447_2 "c_array_assign_full.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017447, VkglTestCase_017447_1, VkglTestCase_017447_2);

#define VkglTestCase_017448_1 "dEQP-GLES31.functional.program_uniform.ba"
#define VkglTestCase_017448_2 "sic_array_assign_full.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017448, VkglTestCase_017448_1, VkglTestCase_017448_2);

#define VkglTestCase_017449_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017449_2 "c_array_assign_full.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017449, VkglTestCase_017449_1, VkglTestCase_017449_2);

#define VkglTestCase_017450_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017450_2 "_array_assign_full.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017450, VkglTestCase_017450_1, VkglTestCase_017450_2);

#define VkglTestCase_017451_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017451_2 "ic_array_assign_full.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017451, VkglTestCase_017451_1, VkglTestCase_017451_2);

#define VkglTestCase_017452_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017452_2 "c_array_assign_full.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017452, VkglTestCase_017452_1, VkglTestCase_017452_2);

#define VkglTestCase_017453_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017453_2 "_array_assign_full.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017453, VkglTestCase_017453_1, VkglTestCase_017453_2);

#define VkglTestCase_017454_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017454_2 "ic_array_assign_full.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017454, VkglTestCase_017454_1, VkglTestCase_017454_2);

#define VkglTestCase_017455_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017455_2 "c_array_assign_full.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017455, VkglTestCase_017455_1, VkglTestCase_017455_2);

#define VkglTestCase_017456_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017456_2 "_array_assign_full.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017456, VkglTestCase_017456_1, VkglTestCase_017456_2);

#define VkglTestCase_017457_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017457_2 "ic_array_assign_full.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017457, VkglTestCase_017457_1, VkglTestCase_017457_2);

#define VkglTestCase_017458_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017458_2 "c_array_assign_full.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017458, VkglTestCase_017458_1, VkglTestCase_017458_2);

#define VkglTestCase_017459_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017459_2 "_array_assign_full.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017459, VkglTestCase_017459_1, VkglTestCase_017459_2);

#define VkglTestCase_017460_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017460_2 "ic_array_assign_full.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017460, VkglTestCase_017460_1, VkglTestCase_017460_2);

#define VkglTestCase_017461_1 "dEQP-GLES31.functional.program_uniform.basi"
#define VkglTestCase_017461_2 "c_array_assign_full.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017461, VkglTestCase_017461_1, VkglTestCase_017461_2);

#define VkglTestCase_017462_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017462_2 "_array_assign_full.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017462, VkglTestCase_017462_1, VkglTestCase_017462_2);

#define VkglTestCase_017463_1 "dEQP-GLES31.functional.program_uniform.bas"
#define VkglTestCase_017463_2 "ic_array_assign_full.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017463, VkglTestCase_017463_1, VkglTestCase_017463_2);

#define VkglTestCase_017464_1 "dEQP-GLES31.functional.program_uniform.basic_"
#define VkglTestCase_017464_2 "array_assign_full.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017464, VkglTestCase_017464_1, VkglTestCase_017464_2);

#define VkglTestCase_017465_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017465_2 "rray_assign_full.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017465, VkglTestCase_017465_1, VkglTestCase_017465_2);

#define VkglTestCase_017466_1 "dEQP-GLES31.functional.program_uniform.basic"
#define VkglTestCase_017466_2 "_array_assign_full.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017466, VkglTestCase_017466_1, VkglTestCase_017466_2);
