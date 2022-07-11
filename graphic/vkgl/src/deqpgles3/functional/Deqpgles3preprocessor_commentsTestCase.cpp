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

#define VkglTestCase_000854_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000854_2 "r.comments.multiline_comment_define_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000854, VkglTestCase_000854_1, VkglTestCase_000854_2);

#define VkglTestCase_000855_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_000855_2 ".comments.multiline_comment_define_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000855, VkglTestCase_000855_1, VkglTestCase_000855_2);

#define VkglTestCase_000856_1 "dEQP-GLES3.functional.shaders.prepro"
#define VkglTestCase_000856_2 "cessor.comments.nested_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000856, VkglTestCase_000856_1, VkglTestCase_000856_2);

#define VkglTestCase_000857_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000857_2 "essor.comments.nested_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000857, VkglTestCase_000857_1, VkglTestCase_000857_2);

#define VkglTestCase_000858_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000858_2 "essor.comments.comment_trick_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000858, VkglTestCase_000858_1, VkglTestCase_000858_2);

#define VkglTestCase_000859_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000859_2 "ssor.comments.comment_trick_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000859, VkglTestCase_000859_1, VkglTestCase_000859_2);

#define VkglTestCase_000860_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000860_2 "essor.comments.comment_trick_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000860, VkglTestCase_000860_1, VkglTestCase_000860_2);

#define VkglTestCase_000861_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000861_2 "ssor.comments.comment_trick_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000861, VkglTestCase_000861_1, VkglTestCase_000861_2);

#define VkglTestCase_000862_1 "dEQP-GLES3.functional.shaders.preproc"
#define VkglTestCase_000862_2 "essor.comments.invalid_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000862, VkglTestCase_000862_1, VkglTestCase_000862_2);

#define VkglTestCase_000863_1 "dEQP-GLES3.functional.shaders.preproce"
#define VkglTestCase_000863_2 "ssor.comments.invalid_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000863, VkglTestCase_000863_1, VkglTestCase_000863_2);

#define VkglTestCase_000864_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000864_2 "or.comments.unterminated_comment_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000864, VkglTestCase_000864_1, VkglTestCase_000864_2);

#define VkglTestCase_000865_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000865_2 "r.comments.unterminated_comment_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000865, VkglTestCase_000865_1, VkglTestCase_000865_2);

#define VkglTestCase_000866_1 "dEQP-GLES3.functional.shaders.preprocess"
#define VkglTestCase_000866_2 "or.comments.unterminated_comment_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000866, VkglTestCase_000866_1, VkglTestCase_000866_2);

#define VkglTestCase_000867_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000867_2 "r.comments.unterminated_comment_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000867, VkglTestCase_000867_1, VkglTestCase_000867_2);

#define VkglTestCase_000868_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000868_2 "r.comments.backslash_in_a_comment_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000868, VkglTestCase_000868_1, VkglTestCase_000868_2);

#define VkglTestCase_000869_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_000869_2 ".comments.backslash_in_a_comment_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000869, VkglTestCase_000869_1, VkglTestCase_000869_2);

#define VkglTestCase_000870_1 "dEQP-GLES3.functional.shaders.preprocesso"
#define VkglTestCase_000870_2 "r.comments.backslash_in_a_comment_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000870, VkglTestCase_000870_1, VkglTestCase_000870_2);

#define VkglTestCase_000871_1 "dEQP-GLES3.functional.shaders.preprocessor"
#define VkglTestCase_000871_2 ".comments.backslash_in_a_comment_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000871, VkglTestCase_000871_1, VkglTestCase_000871_2);
