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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004090_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004090_2 "s_of_arrays.es31.length.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004090, VkglTestCase_004090_1, VkglTestCase_004090_2);

#define VkglTestCase_004091_1 "dEQP-GLES31.functional.shaders.arrays"
#define VkglTestCase_004091_2 "_of_arrays.es31.length.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004091, VkglTestCase_004091_1, VkglTestCase_004091_2);

#define VkglTestCase_004092_1 "dEQP-GLES31.functional.shaders.arra"
#define VkglTestCase_004092_2 "ys_of_arrays.es31.length.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004092, VkglTestCase_004092_1, VkglTestCase_004092_2);

#define VkglTestCase_004093_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004093_2 "s_of_arrays.es31.length.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004093, VkglTestCase_004093_1, VkglTestCase_004093_2);

#define VkglTestCase_004094_1 "dEQP-GLES31.functional.shaders.arra"
#define VkglTestCase_004094_2 "ys_of_arrays.es31.length.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004094, VkglTestCase_004094_1, VkglTestCase_004094_2);

#define VkglTestCase_004095_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004095_2 "s_of_arrays.es31.length.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004095, VkglTestCase_004095_1, VkglTestCase_004095_2);

#define VkglTestCase_004096_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004096_2 "s_of_arrays.es31.length.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004096, VkglTestCase_004096_1, VkglTestCase_004096_2);

#define VkglTestCase_004097_1 "dEQP-GLES31.functional.shaders.arrays"
#define VkglTestCase_004097_2 "_of_arrays.es31.length.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004097, VkglTestCase_004097_1, VkglTestCase_004097_2);

#define VkglTestCase_004098_1 "dEQP-GLES31.functional.shaders.arra"
#define VkglTestCase_004098_2 "ys_of_arrays.es31.length.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004098, VkglTestCase_004098_1, VkglTestCase_004098_2);

#define VkglTestCase_004099_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004099_2 "s_of_arrays.es31.length.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004099, VkglTestCase_004099_1, VkglTestCase_004099_2);

#define VkglTestCase_004100_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004100_2 "rays.es31.length.constant_expression_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004100, VkglTestCase_004100_1, VkglTestCase_004100_2);

#define VkglTestCase_004101_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004101_2 "ays.es31.length.constant_expression_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004101, VkglTestCase_004101_1, VkglTestCase_004101_2);
