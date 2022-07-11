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

#define VkglTestCase_016514_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016514_2 "s.struct.uniform.basic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016514, VkglTestCase_016514_1, VkglTestCase_016514_2);

#define VkglTestCase_016515_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016515_2 ".struct.uniform.basic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016515, VkglTestCase_016515_1, VkglTestCase_016515_2);

#define VkglTestCase_016516_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016516_2 ".struct.uniform.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016516, VkglTestCase_016516_1, VkglTestCase_016516_2);

#define VkglTestCase_016517_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016517_2 "struct.uniform.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016517, VkglTestCase_016517_1, VkglTestCase_016517_2);

#define VkglTestCase_016518_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016518_2 "ruct.uniform.array_member_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016518, VkglTestCase_016518_1, VkglTestCase_016518_2);

#define VkglTestCase_016519_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016519_2 "uct.uniform.array_member_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016519, VkglTestCase_016519_1, VkglTestCase_016519_2);

#define VkglTestCase_016520_1 "dEQP-GLES3.functional.shaders.struct.un"
#define VkglTestCase_016520_2 "iform.array_member_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016520, VkglTestCase_016520_1, VkglTestCase_016520_2);

#define VkglTestCase_016521_1 "dEQP-GLES3.functional.shaders.struct.uni"
#define VkglTestCase_016521_2 "form.array_member_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016521, VkglTestCase_016521_1, VkglTestCase_016521_2);

#define VkglTestCase_016522_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016522_2 "ruct.uniform.struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016522, VkglTestCase_016522_1, VkglTestCase_016522_2);

#define VkglTestCase_016523_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016523_2 "uct.uniform.struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016523, VkglTestCase_016523_1, VkglTestCase_016523_2);

#define VkglTestCase_016524_1 "dEQP-GLES3.functional.shaders.struct.un"
#define VkglTestCase_016524_2 "iform.struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016524, VkglTestCase_016524_1, VkglTestCase_016524_2);

#define VkglTestCase_016525_1 "dEQP-GLES3.functional.shaders.struct.uni"
#define VkglTestCase_016525_2 "form.struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016525, VkglTestCase_016525_1, VkglTestCase_016525_2);

#define VkglTestCase_016526_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016526_2 "t.uniform.nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016526, VkglTestCase_016526_1, VkglTestCase_016526_2);

#define VkglTestCase_016527_1 "dEQP-GLES3.functional.shaders.struct"
#define VkglTestCase_016527_2 ".uniform.nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016527, VkglTestCase_016527_1, VkglTestCase_016527_2);

#define VkglTestCase_016528_1 "dEQP-GLES3.functional.shaders.struct.unifo"
#define VkglTestCase_016528_2 "rm.nested_struct_array_dynamic_index_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016528, VkglTestCase_016528_1, VkglTestCase_016528_2);

#define VkglTestCase_016529_1 "dEQP-GLES3.functional.shaders.struct.unifor"
#define VkglTestCase_016529_2 "m.nested_struct_array_dynamic_index_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016529, VkglTestCase_016529_1, VkglTestCase_016529_2);

#define VkglTestCase_016530_1 "dEQP-GLES3.functional.shaders.stru"
#define VkglTestCase_016530_2 "ct.uniform.loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016530, VkglTestCase_016530_1, VkglTestCase_016530_2);

#define VkglTestCase_016531_1 "dEQP-GLES3.functional.shaders.struc"
#define VkglTestCase_016531_2 "t.uniform.loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016531, VkglTestCase_016531_1, VkglTestCase_016531_2);

#define VkglTestCase_016532_1 "dEQP-GLES3.functional.shaders.struct.u"
#define VkglTestCase_016532_2 "niform.loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016532, VkglTestCase_016532_1, VkglTestCase_016532_2);

#define VkglTestCase_016533_1 "dEQP-GLES3.functional.shaders.struct.un"
#define VkglTestCase_016533_2 "iform.loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016533, VkglTestCase_016533_1, VkglTestCase_016533_2);

#define VkglTestCase_016534_1 "dEQP-GLES3.functional.shaders.struct.u"
#define VkglTestCase_016534_2 "niform.dynamic_loop_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016534, VkglTestCase_016534_1, VkglTestCase_016534_2);

#define VkglTestCase_016535_1 "dEQP-GLES3.functional.shaders.struct.un"
#define VkglTestCase_016535_2 "iform.dynamic_loop_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016535, VkglTestCase_016535_1, VkglTestCase_016535_2);

#define VkglTestCase_016536_1 "dEQP-GLES3.functional.shaders.struct.unifo"
#define VkglTestCase_016536_2 "rm.dynamic_loop_nested_struct_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016536, VkglTestCase_016536_1, VkglTestCase_016536_2);

#define VkglTestCase_016537_1 "dEQP-GLES3.functional.shaders.struct.unifor"
#define VkglTestCase_016537_2 "m.dynamic_loop_nested_struct_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016537, VkglTestCase_016537_1, VkglTestCase_016537_2);

#define VkglTestCase_016538_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016538_2 ".struct.uniform.sampler_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016538, VkglTestCase_016538_1, VkglTestCase_016538_2);

#define VkglTestCase_016539_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016539_2 "struct.uniform.sampler_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016539, VkglTestCase_016539_1, VkglTestCase_016539_2);

#define VkglTestCase_016540_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016540_2 "uct.uniform.sampler_nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016540, VkglTestCase_016540_1, VkglTestCase_016540_2);

#define VkglTestCase_016541_1 "dEQP-GLES3.functional.shaders.stru"
#define VkglTestCase_016541_2 "ct.uniform.sampler_nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016541, VkglTestCase_016541_1, VkglTestCase_016541_2);

#define VkglTestCase_016542_1 "dEQP-GLES3.functional.shaders.st"
#define VkglTestCase_016542_2 "ruct.uniform.sampler_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016542, VkglTestCase_016542_1, VkglTestCase_016542_2);

#define VkglTestCase_016543_1 "dEQP-GLES3.functional.shaders.str"
#define VkglTestCase_016543_2 "uct.uniform.sampler_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016543, VkglTestCase_016543_1, VkglTestCase_016543_2);

#define VkglTestCase_016544_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_016544_2 "s.struct.uniform.equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016544, VkglTestCase_016544_1, VkglTestCase_016544_2);

#define VkglTestCase_016545_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016545_2 ".struct.uniform.equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016545, VkglTestCase_016545_1, VkglTestCase_016545_2);

#define VkglTestCase_016546_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016546_2 "struct.uniform.not_equal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016546, VkglTestCase_016546_1, VkglTestCase_016546_2);

#define VkglTestCase_016547_1 "dEQP-GLES3.functional.shaders.s"
#define VkglTestCase_016547_2 "truct.uniform.not_equal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016547, VkglTestCase_016547_1, VkglTestCase_016547_2);
