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

#define VkglTestCase_000467_1 "dEQP-GLES2.functional.shaders.pre"
#define VkglTestCase_000467_2 "processor.extensions.basic_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000467, VkglTestCase_000467_1, VkglTestCase_000467_2);

#define VkglTestCase_000468_1 "dEQP-GLES2.functional.shaders.prep"
#define VkglTestCase_000468_2 "rocessor.extensions.basic_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000468, VkglTestCase_000468_1, VkglTestCase_000468_2);

#define VkglTestCase_000469_1 "dEQP-GLES2.functional.shaders.prepr"
#define VkglTestCase_000469_2 "ocessor.extensions.macro_exp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000469, VkglTestCase_000469_1, VkglTestCase_000469_2);

#define VkglTestCase_000470_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000470_2 "cessor.extensions.macro_exp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000470, VkglTestCase_000470_1, VkglTestCase_000470_2);

#define VkglTestCase_000471_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000471_2 "r.extensions.missing_extension_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000471, VkglTestCase_000471_1, VkglTestCase_000471_2);

#define VkglTestCase_000472_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000472_2 ".extensions.missing_extension_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000472, VkglTestCase_000472_1, VkglTestCase_000472_2);

#define VkglTestCase_000473_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000473_2 "r.extensions.invalid_extension_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000473, VkglTestCase_000473_1, VkglTestCase_000473_2);

#define VkglTestCase_000474_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000474_2 ".extensions.invalid_extension_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000474, VkglTestCase_000474_1, VkglTestCase_000474_2);

#define VkglTestCase_000475_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000475_2 "essor.extensions.missing_colon_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000475, VkglTestCase_000475_1, VkglTestCase_000475_2);

#define VkglTestCase_000476_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000476_2 "ssor.extensions.missing_colon_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000476, VkglTestCase_000476_1, VkglTestCase_000476_2);

#define VkglTestCase_000477_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000477_2 "essor.extensions.expected_colon_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000477, VkglTestCase_000477_1, VkglTestCase_000477_2);

#define VkglTestCase_000478_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000478_2 "ssor.extensions.expected_colon_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000478, VkglTestCase_000478_1, VkglTestCase_000478_2);

#define VkglTestCase_000479_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000479_2 "ssor.extensions.missing_behavior_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000479, VkglTestCase_000479_1, VkglTestCase_000479_2);

#define VkglTestCase_000480_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000480_2 "sor.extensions.missing_behavior_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000480, VkglTestCase_000480_1, VkglTestCase_000480_2);

#define VkglTestCase_000481_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000481_2 "sor.extensions.invalid_behavior_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000481, VkglTestCase_000481_1, VkglTestCase_000481_2);

#define VkglTestCase_000482_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000482_2 "or.extensions.invalid_behavior_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000482, VkglTestCase_000482_1, VkglTestCase_000482_2);

#define VkglTestCase_000483_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000483_2 "sor.extensions.invalid_behavior_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000483, VkglTestCase_000483_1, VkglTestCase_000483_2);

#define VkglTestCase_000484_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000484_2 "or.extensions.invalid_behavior_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000484, VkglTestCase_000484_1, VkglTestCase_000484_2);

#define VkglTestCase_000485_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000485_2 "or.extensions.invalid_char_in_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000485, VkglTestCase_000485_1, VkglTestCase_000485_2);

#define VkglTestCase_000486_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000486_2 "r.extensions.invalid_char_in_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000486, VkglTestCase_000486_1, VkglTestCase_000486_2);

#define VkglTestCase_000487_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000487_2 ".extensions.invalid_char_in_behavior_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000487, VkglTestCase_000487_1, VkglTestCase_000487_2);

#define VkglTestCase_000488_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000488_2 "extensions.invalid_char_in_behavior_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000488, VkglTestCase_000488_1, VkglTestCase_000488_2);

#define VkglTestCase_000489_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000489_2 "or.extensions.unterminated_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000489, VkglTestCase_000489_1, VkglTestCase_000489_2);

#define VkglTestCase_000490_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000490_2 "r.extensions.unterminated_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000490, VkglTestCase_000490_1, VkglTestCase_000490_2);
