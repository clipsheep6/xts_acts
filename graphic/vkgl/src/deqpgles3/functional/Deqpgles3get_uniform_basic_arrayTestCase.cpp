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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037006_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037006_2 "itial.get_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037006, VkglTestCase_037006_1, VkglTestCase_037006_2);

#define VkglTestCase_037007_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037007_2 "tial.get_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037007, VkglTestCase_037007_1, VkglTestCase_037007_2);

#define VkglTestCase_037008_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037008_2 "nitial.get_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037008, VkglTestCase_037008_1, VkglTestCase_037008_2);

#define VkglTestCase_037009_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037009_2 "nitial.get_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037009, VkglTestCase_037009_1, VkglTestCase_037009_2);

#define VkglTestCase_037010_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037010_2 "itial.get_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037010, VkglTestCase_037010_1, VkglTestCase_037010_2);

#define VkglTestCase_037011_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037011_2 "initial.get_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037011, VkglTestCase_037011_1, VkglTestCase_037011_2);

#define VkglTestCase_037012_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037012_2 "nitial.get_uniform.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037012, VkglTestCase_037012_1, VkglTestCase_037012_2);

#define VkglTestCase_037013_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037013_2 "itial.get_uniform.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037013, VkglTestCase_037013_1, VkglTestCase_037013_2);

#define VkglTestCase_037014_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037014_2 "initial.get_uniform.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037014, VkglTestCase_037014_1, VkglTestCase_037014_2);

#define VkglTestCase_037015_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037015_2 "nitial.get_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037015, VkglTestCase_037015_1, VkglTestCase_037015_2);

#define VkglTestCase_037016_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037016_2 "itial.get_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037016, VkglTestCase_037016_1, VkglTestCase_037016_2);

#define VkglTestCase_037017_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037017_2 "initial.get_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037017, VkglTestCase_037017_1, VkglTestCase_037017_2);

#define VkglTestCase_037018_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037018_2 "itial.get_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037018, VkglTestCase_037018_1, VkglTestCase_037018_2);

#define VkglTestCase_037019_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037019_2 "tial.get_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037019, VkglTestCase_037019_1, VkglTestCase_037019_2);

#define VkglTestCase_037020_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037020_2 "nitial.get_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037020, VkglTestCase_037020_1, VkglTestCase_037020_2);

#define VkglTestCase_037021_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037021_2 "nitial.get_uniform.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037021, VkglTestCase_037021_1, VkglTestCase_037021_2);

#define VkglTestCase_037022_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037022_2 "itial.get_uniform.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037022, VkglTestCase_037022_1, VkglTestCase_037022_2);

#define VkglTestCase_037023_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037023_2 "initial.get_uniform.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037023, VkglTestCase_037023_1, VkglTestCase_037023_2);

#define VkglTestCase_037024_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037024_2 "itial.get_uniform.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037024, VkglTestCase_037024_1, VkglTestCase_037024_2);

#define VkglTestCase_037025_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037025_2 "tial.get_uniform.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037025, VkglTestCase_037025_1, VkglTestCase_037025_2);

#define VkglTestCase_037026_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037026_2 "nitial.get_uniform.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037026, VkglTestCase_037026_1, VkglTestCase_037026_2);

#define VkglTestCase_037027_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037027_2 "l.get_uniform.basic_array.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037027, VkglTestCase_037027_1, VkglTestCase_037027_2);

#define VkglTestCase_037028_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037028_2 ".get_uniform.basic_array.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037028, VkglTestCase_037028_1, VkglTestCase_037028_2);

#define VkglTestCase_037029_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037029_2 "al.get_uniform.basic_array.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037029, VkglTestCase_037029_1, VkglTestCase_037029_2);

#define VkglTestCase_037030_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037030_2 "al.get_uniform.basic_array.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037030, VkglTestCase_037030_1, VkglTestCase_037030_2);

#define VkglTestCase_037031_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037031_2 "l.get_uniform.basic_array.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037031, VkglTestCase_037031_1, VkglTestCase_037031_2);

#define VkglTestCase_037032_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037032_2 "ial.get_uniform.basic_array.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037032, VkglTestCase_037032_1, VkglTestCase_037032_2);

#define VkglTestCase_037033_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037033_2 "l.get_uniform.basic_array.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037033, VkglTestCase_037033_1, VkglTestCase_037033_2);

#define VkglTestCase_037034_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037034_2 ".get_uniform.basic_array.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037034, VkglTestCase_037034_1, VkglTestCase_037034_2);

#define VkglTestCase_037035_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037035_2 "al.get_uniform.basic_array.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037035, VkglTestCase_037035_1, VkglTestCase_037035_2);

#define VkglTestCase_037036_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037036_2 ".get_uniform.basic_array.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037036, VkglTestCase_037036_1, VkglTestCase_037036_2);

#define VkglTestCase_037037_1 "dEQP-GLES3.functional.uniform_api.value.initial."
#define VkglTestCase_037037_2 "get_uniform.basic_array.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037037, VkglTestCase_037037_1, VkglTestCase_037037_2);

#define VkglTestCase_037038_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037038_2 "l.get_uniform.basic_array.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037038, VkglTestCase_037038_1, VkglTestCase_037038_2);

#define VkglTestCase_037039_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037039_2 "l.get_uniform.basic_array.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037039, VkglTestCase_037039_1, VkglTestCase_037039_2);

#define VkglTestCase_037040_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037040_2 ".get_uniform.basic_array.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037040, VkglTestCase_037040_1, VkglTestCase_037040_2);

#define VkglTestCase_037041_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037041_2 "al.get_uniform.basic_array.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037041, VkglTestCase_037041_1, VkglTestCase_037041_2);

#define VkglTestCase_037042_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037042_2 "l.get_uniform.basic_array.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037042, VkglTestCase_037042_1, VkglTestCase_037042_2);

#define VkglTestCase_037043_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037043_2 ".get_uniform.basic_array.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037043, VkglTestCase_037043_1, VkglTestCase_037043_2);

#define VkglTestCase_037044_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037044_2 "al.get_uniform.basic_array.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037044, VkglTestCase_037044_1, VkglTestCase_037044_2);

#define VkglTestCase_037045_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037045_2 "ial.get_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037045, VkglTestCase_037045_1, VkglTestCase_037045_2);

#define VkglTestCase_037046_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037046_2 "al.get_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037046, VkglTestCase_037046_1, VkglTestCase_037046_2);

#define VkglTestCase_037047_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037047_2 "tial.get_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037047, VkglTestCase_037047_1, VkglTestCase_037047_2);

#define VkglTestCase_037441_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037441_2 ".by_pointer.get_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037441, VkglTestCase_037441_1, VkglTestCase_037441_2);

#define VkglTestCase_037442_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037442_2 "by_pointer.get_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037442, VkglTestCase_037442_1, VkglTestCase_037442_2);

#define VkglTestCase_037443_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037443_2 "d.by_pointer.get_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037443, VkglTestCase_037443_1, VkglTestCase_037443_2);

#define VkglTestCase_037444_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037444_2 "d.by_pointer.get_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037444, VkglTestCase_037444_1, VkglTestCase_037444_2);

#define VkglTestCase_037445_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037445_2 ".by_pointer.get_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037445, VkglTestCase_037445_1, VkglTestCase_037445_2);

#define VkglTestCase_037446_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037446_2 "ed.by_pointer.get_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037446, VkglTestCase_037446_1, VkglTestCase_037446_2);

#define VkglTestCase_037447_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037447_2 "d.by_pointer.get_uniform.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037447, VkglTestCase_037447_1, VkglTestCase_037447_2);

#define VkglTestCase_037448_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037448_2 ".by_pointer.get_uniform.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037448, VkglTestCase_037448_1, VkglTestCase_037448_2);

#define VkglTestCase_037449_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037449_2 "ed.by_pointer.get_uniform.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037449, VkglTestCase_037449_1, VkglTestCase_037449_2);

#define VkglTestCase_037450_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037450_2 "pointer.get_uniform.basic_array.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037450, VkglTestCase_037450_1, VkglTestCase_037450_2);

#define VkglTestCase_037451_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037451_2 "ointer.get_uniform.basic_array.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037451, VkglTestCase_037451_1, VkglTestCase_037451_2);

#define VkglTestCase_037452_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037452_2 "_pointer.get_uniform.basic_array.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037452, VkglTestCase_037452_1, VkglTestCase_037452_2);

#define VkglTestCase_037453_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037453_2 "d.by_pointer.get_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037453, VkglTestCase_037453_1, VkglTestCase_037453_2);

#define VkglTestCase_037454_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037454_2 ".by_pointer.get_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037454, VkglTestCase_037454_1, VkglTestCase_037454_2);

#define VkglTestCase_037455_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037455_2 "ed.by_pointer.get_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037455, VkglTestCase_037455_1, VkglTestCase_037455_2);

#define VkglTestCase_037456_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037456_2 ".by_pointer.get_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037456, VkglTestCase_037456_1, VkglTestCase_037456_2);

#define VkglTestCase_037457_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037457_2 "by_pointer.get_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037457, VkglTestCase_037457_1, VkglTestCase_037457_2);

#define VkglTestCase_037458_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037458_2 "d.by_pointer.get_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037458, VkglTestCase_037458_1, VkglTestCase_037458_2);

#define VkglTestCase_037459_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037459_2 "d.by_pointer.get_uniform.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037459, VkglTestCase_037459_1, VkglTestCase_037459_2);

#define VkglTestCase_037460_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037460_2 ".by_pointer.get_uniform.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037460, VkglTestCase_037460_1, VkglTestCase_037460_2);

#define VkglTestCase_037461_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037461_2 "ed.by_pointer.get_uniform.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037461, VkglTestCase_037461_1, VkglTestCase_037461_2);

#define VkglTestCase_037462_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037462_2 ".by_pointer.get_uniform.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037462, VkglTestCase_037462_1, VkglTestCase_037462_2);

#define VkglTestCase_037463_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037463_2 "by_pointer.get_uniform.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037463, VkglTestCase_037463_1, VkglTestCase_037463_2);

#define VkglTestCase_037464_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037464_2 "d.by_pointer.get_uniform.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037464, VkglTestCase_037464_1, VkglTestCase_037464_2);

#define VkglTestCase_037465_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037465_2 "pointer.get_uniform.basic_array.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037465, VkglTestCase_037465_1, VkglTestCase_037465_2);

#define VkglTestCase_037466_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037466_2 "ointer.get_uniform.basic_array.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037466, VkglTestCase_037466_1, VkglTestCase_037466_2);

#define VkglTestCase_037467_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037467_2 "_pointer.get_uniform.basic_array.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037467, VkglTestCase_037467_1, VkglTestCase_037467_2);

#define VkglTestCase_037468_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037468_2 "_pointer.get_uniform.basic_array.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037468, VkglTestCase_037468_1, VkglTestCase_037468_2);

#define VkglTestCase_037469_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037469_2 "pointer.get_uniform.basic_array.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037469, VkglTestCase_037469_1, VkglTestCase_037469_2);

#define VkglTestCase_037470_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037470_2 "y_pointer.get_uniform.basic_array.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037470, VkglTestCase_037470_1, VkglTestCase_037470_2);

#define VkglTestCase_037471_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037471_2 "pointer.get_uniform.basic_array.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037471, VkglTestCase_037471_1, VkglTestCase_037471_2);

#define VkglTestCase_037472_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037472_2 "ointer.get_uniform.basic_array.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037472, VkglTestCase_037472_1, VkglTestCase_037472_2);

#define VkglTestCase_037473_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037473_2 "_pointer.get_uniform.basic_array.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037473, VkglTestCase_037473_1, VkglTestCase_037473_2);

#define VkglTestCase_037474_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037474_2 "ointer.get_uniform.basic_array.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037474, VkglTestCase_037474_1, VkglTestCase_037474_2);

#define VkglTestCase_037475_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037475_2 "inter.get_uniform.basic_array.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037475, VkglTestCase_037475_1, VkglTestCase_037475_2);

#define VkglTestCase_037476_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037476_2 "pointer.get_uniform.basic_array.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037476, VkglTestCase_037476_1, VkglTestCase_037476_2);

#define VkglTestCase_037477_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037477_2 "pointer.get_uniform.basic_array.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037477, VkglTestCase_037477_1, VkglTestCase_037477_2);

#define VkglTestCase_037478_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037478_2 "ointer.get_uniform.basic_array.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037478, VkglTestCase_037478_1, VkglTestCase_037478_2);

#define VkglTestCase_037479_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037479_2 "_pointer.get_uniform.basic_array.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037479, VkglTestCase_037479_1, VkglTestCase_037479_2);

#define VkglTestCase_037480_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037480_2 "pointer.get_uniform.basic_array.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037480, VkglTestCase_037480_1, VkglTestCase_037480_2);

#define VkglTestCase_037481_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037481_2 "ointer.get_uniform.basic_array.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037481, VkglTestCase_037481_1, VkglTestCase_037481_2);

#define VkglTestCase_037482_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037482_2 "_pointer.get_uniform.basic_array.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037482, VkglTestCase_037482_1, VkglTestCase_037482_2);

#define VkglTestCase_037483_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037483_2 "y_pointer.get_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037483, VkglTestCase_037483_1, VkglTestCase_037483_2);

#define VkglTestCase_037484_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037484_2 "_pointer.get_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037484, VkglTestCase_037484_1, VkglTestCase_037484_2);

#define VkglTestCase_037485_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037485_2 "by_pointer.get_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037485, VkglTestCase_037485_1, VkglTestCase_037485_2);

#define VkglTestCase_037912_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037912_2 "d.by_value.get_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037912, VkglTestCase_037912_1, VkglTestCase_037912_2);

#define VkglTestCase_037913_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037913_2 ".by_value.get_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037913, VkglTestCase_037913_1, VkglTestCase_037913_2);

#define VkglTestCase_037914_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037914_2 "ed.by_value.get_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037914, VkglTestCase_037914_1, VkglTestCase_037914_2);

#define VkglTestCase_037915_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037915_2 "ed.by_value.get_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037915, VkglTestCase_037915_1, VkglTestCase_037915_2);

#define VkglTestCase_037916_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037916_2 "d.by_value.get_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037916, VkglTestCase_037916_1, VkglTestCase_037916_2);

#define VkglTestCase_037917_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037917_2 "ned.by_value.get_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037917, VkglTestCase_037917_1, VkglTestCase_037917_2);

#define VkglTestCase_037918_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037918_2 "ed.by_value.get_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037918, VkglTestCase_037918_1, VkglTestCase_037918_2);

#define VkglTestCase_037919_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037919_2 "d.by_value.get_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037919, VkglTestCase_037919_1, VkglTestCase_037919_2);

#define VkglTestCase_037920_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037920_2 "ned.by_value.get_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037920, VkglTestCase_037920_1, VkglTestCase_037920_2);

#define VkglTestCase_037921_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037921_2 "d.by_value.get_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037921, VkglTestCase_037921_1, VkglTestCase_037921_2);

#define VkglTestCase_037922_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037922_2 ".by_value.get_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037922, VkglTestCase_037922_1, VkglTestCase_037922_2);

#define VkglTestCase_037923_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037923_2 "ed.by_value.get_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037923, VkglTestCase_037923_1, VkglTestCase_037923_2);

#define VkglTestCase_037924_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037924_2 "ed.by_value.get_uniform.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037924, VkglTestCase_037924_1, VkglTestCase_037924_2);

#define VkglTestCase_037925_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037925_2 "d.by_value.get_uniform.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037925, VkglTestCase_037925_1, VkglTestCase_037925_2);

#define VkglTestCase_037926_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037926_2 "ned.by_value.get_uniform.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037926, VkglTestCase_037926_1, VkglTestCase_037926_2);

#define VkglTestCase_037927_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037927_2 "d.by_value.get_uniform.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037927, VkglTestCase_037927_1, VkglTestCase_037927_2);

#define VkglTestCase_037928_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037928_2 ".by_value.get_uniform.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037928, VkglTestCase_037928_1, VkglTestCase_037928_2);

#define VkglTestCase_037929_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037929_2 "ed.by_value.get_uniform.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037929, VkglTestCase_037929_1, VkglTestCase_037929_2);

#define VkglTestCase_037930_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037930_2 "_value.get_uniform.basic_array.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037930, VkglTestCase_037930_1, VkglTestCase_037930_2);

#define VkglTestCase_037931_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037931_2 "value.get_uniform.basic_array.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037931, VkglTestCase_037931_1, VkglTestCase_037931_2);

#define VkglTestCase_037932_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037932_2 "y_value.get_uniform.basic_array.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037932, VkglTestCase_037932_1, VkglTestCase_037932_2);

#define VkglTestCase_037933_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037933_2 "y_value.get_uniform.basic_array.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037933, VkglTestCase_037933_1, VkglTestCase_037933_2);

#define VkglTestCase_037934_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037934_2 "_value.get_uniform.basic_array.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037934, VkglTestCase_037934_1, VkglTestCase_037934_2);

#define VkglTestCase_037935_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037935_2 "by_value.get_uniform.basic_array.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037935, VkglTestCase_037935_1, VkglTestCase_037935_2);

#define VkglTestCase_037936_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037936_2 "_value.get_uniform.basic_array.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037936, VkglTestCase_037936_1, VkglTestCase_037936_2);

#define VkglTestCase_037937_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037937_2 "value.get_uniform.basic_array.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037937, VkglTestCase_037937_1, VkglTestCase_037937_2);

#define VkglTestCase_037938_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037938_2 "y_value.get_uniform.basic_array.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037938, VkglTestCase_037938_1, VkglTestCase_037938_2);

#define VkglTestCase_037939_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037939_2 "value.get_uniform.basic_array.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037939, VkglTestCase_037939_1, VkglTestCase_037939_2);

#define VkglTestCase_037940_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_037940_2 "alue.get_uniform.basic_array.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037940, VkglTestCase_037940_1, VkglTestCase_037940_2);

#define VkglTestCase_037941_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037941_2 "_value.get_uniform.basic_array.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037941, VkglTestCase_037941_1, VkglTestCase_037941_2);

#define VkglTestCase_037942_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037942_2 "_value.get_uniform.basic_array.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037942, VkglTestCase_037942_1, VkglTestCase_037942_2);

#define VkglTestCase_037943_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037943_2 "value.get_uniform.basic_array.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037943, VkglTestCase_037943_1, VkglTestCase_037943_2);

#define VkglTestCase_037944_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037944_2 "y_value.get_uniform.basic_array.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037944, VkglTestCase_037944_1, VkglTestCase_037944_2);

#define VkglTestCase_037945_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037945_2 "_value.get_uniform.basic_array.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037945, VkglTestCase_037945_1, VkglTestCase_037945_2);

#define VkglTestCase_037946_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037946_2 "value.get_uniform.basic_array.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037946, VkglTestCase_037946_1, VkglTestCase_037946_2);

#define VkglTestCase_037947_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037947_2 "y_value.get_uniform.basic_array.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037947, VkglTestCase_037947_1, VkglTestCase_037947_2);

#define VkglTestCase_037948_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037948_2 "by_value.get_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037948, VkglTestCase_037948_1, VkglTestCase_037948_2);

#define VkglTestCase_037949_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037949_2 "y_value.get_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037949, VkglTestCase_037949_1, VkglTestCase_037949_2);

#define VkglTestCase_037950_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037950_2 ".by_value.get_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037950, VkglTestCase_037950_1, VkglTestCase_037950_2);
