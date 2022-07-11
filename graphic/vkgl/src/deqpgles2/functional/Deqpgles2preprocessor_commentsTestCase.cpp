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

#define VkglTestCase_000195_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000195_2 "r.comments.multiline_comment_define_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000195, VkglTestCase_000195_1, VkglTestCase_000195_2);

#define VkglTestCase_000196_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000196_2 ".comments.multiline_comment_define_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000196, VkglTestCase_000196_1, VkglTestCase_000196_2);

#define VkglTestCase_000197_1 "dEQP-GLES2.functional.shaders.prepro"
#define VkglTestCase_000197_2 "cessor.comments.nested_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000197, VkglTestCase_000197_1, VkglTestCase_000197_2);

#define VkglTestCase_000198_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000198_2 "essor.comments.nested_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000198, VkglTestCase_000198_1, VkglTestCase_000198_2);

#define VkglTestCase_000199_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000199_2 "essor.comments.comment_trick_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000199, VkglTestCase_000199_1, VkglTestCase_000199_2);

#define VkglTestCase_000200_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000200_2 "ssor.comments.comment_trick_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000200, VkglTestCase_000200_1, VkglTestCase_000200_2);

#define VkglTestCase_000201_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000201_2 "essor.comments.comment_trick_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000201, VkglTestCase_000201_1, VkglTestCase_000201_2);

#define VkglTestCase_000202_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000202_2 "ssor.comments.comment_trick_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000202, VkglTestCase_000202_1, VkglTestCase_000202_2);

#define VkglTestCase_000203_1 "dEQP-GLES2.functional.shaders.preproc"
#define VkglTestCase_000203_2 "essor.comments.invalid_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000203, VkglTestCase_000203_1, VkglTestCase_000203_2);

#define VkglTestCase_000204_1 "dEQP-GLES2.functional.shaders.preproce"
#define VkglTestCase_000204_2 "ssor.comments.invalid_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000204, VkglTestCase_000204_1, VkglTestCase_000204_2);

#define VkglTestCase_000205_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000205_2 "or.comments.unterminated_comment_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000205, VkglTestCase_000205_1, VkglTestCase_000205_2);

#define VkglTestCase_000206_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000206_2 "r.comments.unterminated_comment_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000206, VkglTestCase_000206_1, VkglTestCase_000206_2);

#define VkglTestCase_000207_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000207_2 "or.comments.unterminated_comment_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000207, VkglTestCase_000207_1, VkglTestCase_000207_2);

#define VkglTestCase_000208_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000208_2 "r.comments.unterminated_comment_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000208, VkglTestCase_000208_1, VkglTestCase_000208_2);
