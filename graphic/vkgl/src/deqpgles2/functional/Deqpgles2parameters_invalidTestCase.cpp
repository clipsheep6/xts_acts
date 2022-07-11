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

#define VkglTestCase_002389_1 "dEQP-GLES2.functional.shaders.qualification_order.p"
#define VkglTestCase_002389_2 "arameters.invalid.storage_precision_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002389, VkglTestCase_002389_1, VkglTestCase_002389_2);

#define VkglTestCase_002390_1 "dEQP-GLES2.functional.shaders.qualification_order.pa"
#define VkglTestCase_002390_2 "rameters.invalid.storage_precision_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002390, VkglTestCase_002390_1, VkglTestCase_002390_2);

#define VkglTestCase_002391_1 "dEQP-GLES2.functional.shaders.qualification_order.p"
#define VkglTestCase_002391_2 "arameters.invalid.parameter_storage_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002391, VkglTestCase_002391_1, VkglTestCase_002391_2);

#define VkglTestCase_002392_1 "dEQP-GLES2.functional.shaders.qualification_order.pa"
#define VkglTestCase_002392_2 "rameters.invalid.parameter_storage_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002392, VkglTestCase_002392_1, VkglTestCase_002392_2);

#define VkglTestCase_002393_1 "dEQP-GLES2.functional.shaders.qualification_order.p"
#define VkglTestCase_002393_2 "arameters.invalid.parameter_precision_storage_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002393, VkglTestCase_002393_1, VkglTestCase_002393_2);

#define VkglTestCase_002394_1 "dEQP-GLES2.functional.shaders.qualification_order.pa"
#define VkglTestCase_002394_2 "rameters.invalid.parameter_precision_storage_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002394, VkglTestCase_002394_1, VkglTestCase_002394_2);

#define VkglTestCase_002395_1 "dEQP-GLES2.functional.shaders.qualification_order.p"
#define VkglTestCase_002395_2 "arameters.invalid.precision_storage_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002395, VkglTestCase_002395_1, VkglTestCase_002395_2);

#define VkglTestCase_002396_1 "dEQP-GLES2.functional.shaders.qualification_order.pa"
#define VkglTestCase_002396_2 "rameters.invalid.precision_storage_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002396, VkglTestCase_002396_1, VkglTestCase_002396_2);

#define VkglTestCase_002397_1 "dEQP-GLES2.functional.shaders.qualification_order.p"
#define VkglTestCase_002397_2 "arameters.invalid.precision_parameter_storage_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002397, VkglTestCase_002397_1, VkglTestCase_002397_2);

#define VkglTestCase_002398_1 "dEQP-GLES2.functional.shaders.qualification_order.pa"
#define VkglTestCase_002398_2 "rameters.invalid.precision_parameter_storage_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002398, VkglTestCase_002398_1, VkglTestCase_002398_2);

#define VkglTestCase_002399_1 "dEQP-GLES2.functional.shaders.qualification_or"
#define VkglTestCase_002399_2 "der.parameters.invalid.parameter_storage_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002399, VkglTestCase_002399_1, VkglTestCase_002399_2);

#define VkglTestCase_002400_1 "dEQP-GLES2.functional.shaders.qualification_ord"
#define VkglTestCase_002400_2 "er.parameters.invalid.parameter_storage_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002400, VkglTestCase_002400_1, VkglTestCase_002400_2);

#define VkglTestCase_002401_1 "dEQP-GLES2.functional.shaders.qualification_or"
#define VkglTestCase_002401_2 "der.parameters.invalid.precision_storage_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002401, VkglTestCase_002401_1, VkglTestCase_002401_2);

#define VkglTestCase_002402_1 "dEQP-GLES2.functional.shaders.qualification_ord"
#define VkglTestCase_002402_2 "er.parameters.invalid.precision_storage_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002402, VkglTestCase_002402_1, VkglTestCase_002402_2);

#define VkglTestCase_002403_1 "dEQP-GLES2.functional.shaders.qualification_ord"
#define VkglTestCase_002403_2 "er.parameters.invalid.precision_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002403, VkglTestCase_002403_1, VkglTestCase_002403_2);

#define VkglTestCase_002404_1 "dEQP-GLES2.functional.shaders.qualification_orde"
#define VkglTestCase_002404_2 "r.parameters.invalid.precision_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002404, VkglTestCase_002404_1, VkglTestCase_002404_2);
