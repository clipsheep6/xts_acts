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

#define VkglTestCase_004847_1 "dEQP-GLES3.functional.shaders.qualification_order."
#define VkglTestCase_004847_2 "variables.valid.invariant_interp_storage_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004847, VkglTestCase_004847_1, VkglTestCase_004847_2);

#define VkglTestCase_004848_1 "dEQP-GLES3.functional.shaders.qualification_o"
#define VkglTestCase_004848_2 "rder.variables.valid.interp_storage_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004848, VkglTestCase_004848_1, VkglTestCase_004848_2);

#define VkglTestCase_004849_1 "dEQP-GLES3.functional.shaders.qualification_o"
#define VkglTestCase_004849_2 "rder.variables.valid.invariant_interp_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004849, VkglTestCase_004849_1, VkglTestCase_004849_2);

#define VkglTestCase_004850_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004850_2 "der.variables.valid.invariant_storage_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004850, VkglTestCase_004850_1, VkglTestCase_004850_2);

#define VkglTestCase_004851_1 "dEQP-GLES3.functional.shaders.qualificati"
#define VkglTestCase_004851_2 "on_order.variables.valid.storage_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004851, VkglTestCase_004851_1, VkglTestCase_004851_2);

#define VkglTestCase_004852_1 "dEQP-GLES3.functional.shaders.qualificat"
#define VkglTestCase_004852_2 "ion_order.variables.valid.interp_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004852, VkglTestCase_004852_1, VkglTestCase_004852_2);

#define VkglTestCase_004853_1 "dEQP-GLES3.functional.shaders.qualificati"
#define VkglTestCase_004853_2 "on_order.variables.valid.invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004853, VkglTestCase_004853_1, VkglTestCase_004853_2);
