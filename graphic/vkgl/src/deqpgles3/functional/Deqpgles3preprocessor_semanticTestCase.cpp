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

#define VkglTestCase_000942_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000942_2 "essor.semantic.ops_as_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000942, VkglTestCase_000942_1, VkglTestCase_000942_2);

#define VkglTestCase_000943_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000943_2 "ssor.semantic.ops_as_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000943, VkglTestCase_000943_1, VkglTestCase_000943_2);

#define VkglTestCase_000944_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000944_2 "cessor.semantic.correct_order_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000944, VkglTestCase_000944_1, VkglTestCase_000944_2);

#define VkglTestCase_000945_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000945_2 "essor.semantic.correct_order_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000945, VkglTestCase_000945_1, VkglTestCase_000945_2);
