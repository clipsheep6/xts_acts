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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000816_1 "dEQP-GLES3.functional.shaders.preprocessor.in"
#define VkglTestCase_000816_2 "valid_definitions.define_non_identifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000816, VkglTestCase_000816_1, VkglTestCase_000816_2);

#define VkglTestCase_000817_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000817_2 "alid_definitions.define_non_identifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000817, VkglTestCase_000817_1, VkglTestCase_000817_2);

#define VkglTestCase_000818_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000818_2 "alid_definitions.undef_non_identifier_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000818, VkglTestCase_000818_1, VkglTestCase_000818_2);

#define VkglTestCase_000819_1 "dEQP-GLES3.functional.shaders.preprocessor.inva"
#define VkglTestCase_000819_2 "lid_definitions.undef_non_identifier_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000819, VkglTestCase_000819_1, VkglTestCase_000819_2);

#define VkglTestCase_000820_1 "dEQP-GLES3.functional.shaders.preprocessor.inv"
#define VkglTestCase_000820_2 "alid_definitions.undef_non_identifier_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000820, VkglTestCase_000820_1, VkglTestCase_000820_2);

#define VkglTestCase_000821_1 "dEQP-GLES3.functional.shaders.preprocessor.inva"
#define VkglTestCase_000821_2 "lid_definitions.undef_non_identifier_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000821, VkglTestCase_000821_1, VkglTestCase_000821_2);
