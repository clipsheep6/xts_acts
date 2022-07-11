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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004185_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004185_2 "s.array_arguments.local_in_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004185, VkglTestCase_004185_1, VkglTestCase_004185_2);

#define VkglTestCase_004186_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004186_2 ".array_arguments.local_in_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004186, VkglTestCase_004186_1, VkglTestCase_004186_2);

#define VkglTestCase_004187_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004187_2 ".array_arguments.global_in_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004187, VkglTestCase_004187_1, VkglTestCase_004187_2);

#define VkglTestCase_004188_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004188_2 "array_arguments.global_in_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004188, VkglTestCase_004188_1, VkglTestCase_004188_2);

#define VkglTestCase_004189_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004189_2 "ns.array_arguments.local_in_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004189, VkglTestCase_004189_1, VkglTestCase_004189_2);

#define VkglTestCase_004190_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004190_2 "s.array_arguments.local_in_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004190, VkglTestCase_004190_1, VkglTestCase_004190_2);

#define VkglTestCase_004191_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004191_2 "s.array_arguments.global_in_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004191, VkglTestCase_004191_1, VkglTestCase_004191_2);

#define VkglTestCase_004192_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004192_2 ".array_arguments.global_in_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004192, VkglTestCase_004192_1, VkglTestCase_004192_2);

#define VkglTestCase_004193_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004193_2 "s.array_arguments.local_in_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004193, VkglTestCase_004193_1, VkglTestCase_004193_2);

#define VkglTestCase_004194_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004194_2 ".array_arguments.local_in_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004194, VkglTestCase_004194_1, VkglTestCase_004194_2);

#define VkglTestCase_004195_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004195_2 "s.array_arguments.global_in_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004195, VkglTestCase_004195_1, VkglTestCase_004195_2);

#define VkglTestCase_004196_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004196_2 ".array_arguments.global_in_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004196, VkglTestCase_004196_1, VkglTestCase_004196_2);

#define VkglTestCase_004197_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004197_2 "ns.array_arguments.test_helpers_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004197, VkglTestCase_004197_1, VkglTestCase_004197_2);

#define VkglTestCase_004198_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004198_2 "s.array_arguments.test_helpers_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004198, VkglTestCase_004198_1, VkglTestCase_004198_2);

#define VkglTestCase_004199_1 "dEQP-GLES3.functional.shaders.functions.ar"
#define VkglTestCase_004199_2 "ray_arguments.copy_local_in_on_call_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004199, VkglTestCase_004199_1, VkglTestCase_004199_2);

#define VkglTestCase_004200_1 "dEQP-GLES3.functional.shaders.functions.arr"
#define VkglTestCase_004200_2 "ay_arguments.copy_local_in_on_call_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004200, VkglTestCase_004200_1, VkglTestCase_004200_2);

#define VkglTestCase_004201_1 "dEQP-GLES3.functional.shaders.functions.ar"
#define VkglTestCase_004201_2 "ray_arguments.copy_global_in_on_call_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004201, VkglTestCase_004201_1, VkglTestCase_004201_2);

#define VkglTestCase_004202_1 "dEQP-GLES3.functional.shaders.functions.arr"
#define VkglTestCase_004202_2 "ay_arguments.copy_global_in_on_call_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004202, VkglTestCase_004202_1, VkglTestCase_004202_2);

#define VkglTestCase_004203_1 "dEQP-GLES3.functional.shaders.functions.arr"
#define VkglTestCase_004203_2 "ay_arguments.copy_local_inout_on_call_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004203, VkglTestCase_004203_1, VkglTestCase_004203_2);

#define VkglTestCase_004204_1 "dEQP-GLES3.functional.shaders.functions.arra"
#define VkglTestCase_004204_2 "y_arguments.copy_local_inout_on_call_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004204, VkglTestCase_004204_1, VkglTestCase_004204_2);

#define VkglTestCase_004205_1 "dEQP-GLES3.functional.shaders.functions.arra"
#define VkglTestCase_004205_2 "y_arguments.copy_global_inout_on_call_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004205, VkglTestCase_004205_1, VkglTestCase_004205_2);

#define VkglTestCase_004206_1 "dEQP-GLES3.functional.shaders.functions.array"
#define VkglTestCase_004206_2 "_arguments.copy_global_inout_on_call_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004206, VkglTestCase_004206_1, VkglTestCase_004206_2);
