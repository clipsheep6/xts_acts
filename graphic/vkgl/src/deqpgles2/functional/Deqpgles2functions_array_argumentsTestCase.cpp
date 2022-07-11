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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002115_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002115_2 "s.array_arguments.local_in_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002115, VkglTestCase_002115_1, VkglTestCase_002115_2);

#define VkglTestCase_002116_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002116_2 ".array_arguments.local_in_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002116, VkglTestCase_002116_1, VkglTestCase_002116_2);

#define VkglTestCase_002117_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002117_2 ".array_arguments.global_in_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002117, VkglTestCase_002117_1, VkglTestCase_002117_2);

#define VkglTestCase_002118_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002118_2 "array_arguments.global_in_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002118, VkglTestCase_002118_1, VkglTestCase_002118_2);

#define VkglTestCase_002119_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002119_2 "ns.array_arguments.local_in_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002119, VkglTestCase_002119_1, VkglTestCase_002119_2);

#define VkglTestCase_002120_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002120_2 "s.array_arguments.local_in_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002120, VkglTestCase_002120_1, VkglTestCase_002120_2);

#define VkglTestCase_002121_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002121_2 "s.array_arguments.global_in_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002121, VkglTestCase_002121_1, VkglTestCase_002121_2);

#define VkglTestCase_002122_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002122_2 ".array_arguments.global_in_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002122, VkglTestCase_002122_1, VkglTestCase_002122_2);

#define VkglTestCase_002123_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002123_2 "s.array_arguments.local_in_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002123, VkglTestCase_002123_1, VkglTestCase_002123_2);

#define VkglTestCase_002124_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002124_2 ".array_arguments.local_in_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002124, VkglTestCase_002124_1, VkglTestCase_002124_2);

#define VkglTestCase_002125_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002125_2 "s.array_arguments.global_in_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002125, VkglTestCase_002125_1, VkglTestCase_002125_2);

#define VkglTestCase_002126_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002126_2 ".array_arguments.global_in_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002126, VkglTestCase_002126_1, VkglTestCase_002126_2);

#define VkglTestCase_002127_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002127_2 "ns.array_arguments.test_helpers_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002127, VkglTestCase_002127_1, VkglTestCase_002127_2);

#define VkglTestCase_002128_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002128_2 "s.array_arguments.test_helpers_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002128, VkglTestCase_002128_1, VkglTestCase_002128_2);

#define VkglTestCase_002129_1 "dEQP-GLES2.functional.shaders.functions.ar"
#define VkglTestCase_002129_2 "ray_arguments.copy_local_in_on_call_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002129, VkglTestCase_002129_1, VkglTestCase_002129_2);

#define VkglTestCase_002130_1 "dEQP-GLES2.functional.shaders.functions.arr"
#define VkglTestCase_002130_2 "ay_arguments.copy_local_in_on_call_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002130, VkglTestCase_002130_1, VkglTestCase_002130_2);

#define VkglTestCase_002131_1 "dEQP-GLES2.functional.shaders.functions.ar"
#define VkglTestCase_002131_2 "ray_arguments.copy_global_in_on_call_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002131, VkglTestCase_002131_1, VkglTestCase_002131_2);

#define VkglTestCase_002132_1 "dEQP-GLES2.functional.shaders.functions.arr"
#define VkglTestCase_002132_2 "ay_arguments.copy_global_in_on_call_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002132, VkglTestCase_002132_1, VkglTestCase_002132_2);

#define VkglTestCase_002133_1 "dEQP-GLES2.functional.shaders.functions.arr"
#define VkglTestCase_002133_2 "ay_arguments.copy_local_inout_on_call_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002133, VkglTestCase_002133_1, VkglTestCase_002133_2);

#define VkglTestCase_002134_1 "dEQP-GLES2.functional.shaders.functions.arra"
#define VkglTestCase_002134_2 "y_arguments.copy_local_inout_on_call_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002134, VkglTestCase_002134_1, VkglTestCase_002134_2);

#define VkglTestCase_002135_1 "dEQP-GLES2.functional.shaders.functions.arra"
#define VkglTestCase_002135_2 "y_arguments.copy_global_inout_on_call_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002135, VkglTestCase_002135_1, VkglTestCase_002135_2);

#define VkglTestCase_002136_1 "dEQP-GLES2.functional.shaders.functions.array"
#define VkglTestCase_002136_2 "_arguments.copy_global_inout_on_call_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002136, VkglTestCase_002136_1, VkglTestCase_002136_2);
