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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000269_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000269_2 "essor.semantic.ops_as_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000269, VkglTestCase_000269_1, VkglTestCase_000269_2);

#define VkglTestCase_000270_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000270_2 "ssor.semantic.ops_as_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000270, VkglTestCase_000270_1, VkglTestCase_000270_2);

#define VkglTestCase_000271_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000271_2 "cessor.semantic.correct_order_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000271, VkglTestCase_000271_1, VkglTestCase_000271_2);

#define VkglTestCase_000272_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000272_2 "essor.semantic.correct_order_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000272, VkglTestCase_000272_1, VkglTestCase_000272_2);
