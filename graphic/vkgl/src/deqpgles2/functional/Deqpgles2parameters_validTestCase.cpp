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

#define VkglTestCase_002381_1 "dEQP-GLES2.functional.shaders.qualification_order."
#define VkglTestCase_002381_2 "parameters.valid.storage_parameter_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002381, VkglTestCase_002381_1, VkglTestCase_002381_2);

#define VkglTestCase_002382_1 "dEQP-GLES2.functional.shaders.qualification_order.p"
#define VkglTestCase_002382_2 "arameters.valid.storage_parameter_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002382, VkglTestCase_002382_1, VkglTestCase_002382_2);

#define VkglTestCase_002383_1 "dEQP-GLES2.functional.shaders.qualification_o"
#define VkglTestCase_002383_2 "rder.parameters.valid.storage_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002383, VkglTestCase_002383_1, VkglTestCase_002383_2);

#define VkglTestCase_002384_1 "dEQP-GLES2.functional.shaders.qualification_or"
#define VkglTestCase_002384_2 "der.parameters.valid.storage_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002384, VkglTestCase_002384_1, VkglTestCase_002384_2);

#define VkglTestCase_002385_1 "dEQP-GLES2.functional.shaders.qualification_o"
#define VkglTestCase_002385_2 "rder.parameters.valid.storage_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002385, VkglTestCase_002385_1, VkglTestCase_002385_2);

#define VkglTestCase_002386_1 "dEQP-GLES2.functional.shaders.qualification_or"
#define VkglTestCase_002386_2 "der.parameters.valid.storage_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002386, VkglTestCase_002386_1, VkglTestCase_002386_2);

#define VkglTestCase_002387_1 "dEQP-GLES2.functional.shaders.qualification_or"
#define VkglTestCase_002387_2 "der.parameters.valid.parameter_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002387, VkglTestCase_002387_1, VkglTestCase_002387_2);

#define VkglTestCase_002388_1 "dEQP-GLES2.functional.shaders.qualification_ord"
#define VkglTestCase_002388_2 "er.parameters.valid.parameter_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002388, VkglTestCase_002388_1, VkglTestCase_002388_2);
