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

#define VkglTestCase_004910_1 "dEQP-GLES3.functional.shaders.qualification_order.p"
#define VkglTestCase_004910_2 "arameters.invalid.storage_precision_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004910, VkglTestCase_004910_1, VkglTestCase_004910_2);

#define VkglTestCase_004911_1 "dEQP-GLES3.functional.shaders.qualification_order.pa"
#define VkglTestCase_004911_2 "rameters.invalid.storage_precision_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004911, VkglTestCase_004911_1, VkglTestCase_004911_2);

#define VkglTestCase_004912_1 "dEQP-GLES3.functional.shaders.qualification_order.p"
#define VkglTestCase_004912_2 "arameters.invalid.parameter_storage_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004912, VkglTestCase_004912_1, VkglTestCase_004912_2);

#define VkglTestCase_004913_1 "dEQP-GLES3.functional.shaders.qualification_order.pa"
#define VkglTestCase_004913_2 "rameters.invalid.parameter_storage_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004913, VkglTestCase_004913_1, VkglTestCase_004913_2);

#define VkglTestCase_004914_1 "dEQP-GLES3.functional.shaders.qualification_order.p"
#define VkglTestCase_004914_2 "arameters.invalid.parameter_precision_storage_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004914, VkglTestCase_004914_1, VkglTestCase_004914_2);

#define VkglTestCase_004915_1 "dEQP-GLES3.functional.shaders.qualification_order.pa"
#define VkglTestCase_004915_2 "rameters.invalid.parameter_precision_storage_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004915, VkglTestCase_004915_1, VkglTestCase_004915_2);

#define VkglTestCase_004916_1 "dEQP-GLES3.functional.shaders.qualification_order.p"
#define VkglTestCase_004916_2 "arameters.invalid.precision_storage_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004916, VkglTestCase_004916_1, VkglTestCase_004916_2);

#define VkglTestCase_004917_1 "dEQP-GLES3.functional.shaders.qualification_order.pa"
#define VkglTestCase_004917_2 "rameters.invalid.precision_storage_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004917, VkglTestCase_004917_1, VkglTestCase_004917_2);

#define VkglTestCase_004918_1 "dEQP-GLES3.functional.shaders.qualification_order.p"
#define VkglTestCase_004918_2 "arameters.invalid.precision_parameter_storage_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004918, VkglTestCase_004918_1, VkglTestCase_004918_2);

#define VkglTestCase_004919_1 "dEQP-GLES3.functional.shaders.qualification_order.pa"
#define VkglTestCase_004919_2 "rameters.invalid.precision_parameter_storage_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004919, VkglTestCase_004919_1, VkglTestCase_004919_2);

#define VkglTestCase_004920_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004920_2 "der.parameters.invalid.parameter_storage_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004920, VkglTestCase_004920_1, VkglTestCase_004920_2);

#define VkglTestCase_004921_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004921_2 "er.parameters.invalid.parameter_storage_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004921, VkglTestCase_004921_1, VkglTestCase_004921_2);

#define VkglTestCase_004922_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004922_2 "der.parameters.invalid.precision_storage_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004922, VkglTestCase_004922_1, VkglTestCase_004922_2);

#define VkglTestCase_004923_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004923_2 "er.parameters.invalid.precision_storage_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004923, VkglTestCase_004923_1, VkglTestCase_004923_2);

#define VkglTestCase_004924_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004924_2 "er.parameters.invalid.precision_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004924, VkglTestCase_004924_1, VkglTestCase_004924_2);

#define VkglTestCase_004925_1 "dEQP-GLES3.functional.shaders.qualification_orde"
#define VkglTestCase_004925_2 "r.parameters.invalid.precision_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004925, VkglTestCase_004925_1, VkglTestCase_004925_2);
