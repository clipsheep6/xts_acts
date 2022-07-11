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

#define VkglTestCase_004902_1 "dEQP-GLES3.functional.shaders.qualification_order."
#define VkglTestCase_004902_2 "parameters.valid.storage_parameter_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004902, VkglTestCase_004902_1, VkglTestCase_004902_2);

#define VkglTestCase_004903_1 "dEQP-GLES3.functional.shaders.qualification_order.p"
#define VkglTestCase_004903_2 "arameters.valid.storage_parameter_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004903, VkglTestCase_004903_1, VkglTestCase_004903_2);

#define VkglTestCase_004904_1 "dEQP-GLES3.functional.shaders.qualification_o"
#define VkglTestCase_004904_2 "rder.parameters.valid.storage_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004904, VkglTestCase_004904_1, VkglTestCase_004904_2);

#define VkglTestCase_004905_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004905_2 "der.parameters.valid.storage_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004905, VkglTestCase_004905_1, VkglTestCase_004905_2);

#define VkglTestCase_004906_1 "dEQP-GLES3.functional.shaders.qualification_o"
#define VkglTestCase_004906_2 "rder.parameters.valid.storage_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004906, VkglTestCase_004906_1, VkglTestCase_004906_2);

#define VkglTestCase_004907_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004907_2 "der.parameters.valid.storage_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004907, VkglTestCase_004907_1, VkglTestCase_004907_2);

#define VkglTestCase_004908_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004908_2 "der.parameters.valid.parameter_precision_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004908, VkglTestCase_004908_1, VkglTestCase_004908_2);

#define VkglTestCase_004909_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004909_2 "er.parameters.valid.parameter_precision_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004909, VkglTestCase_004909_1, VkglTestCase_004909_2);
