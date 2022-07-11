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
#include "../ActsDeqpgles20012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011009_1 "dEQP-GLES2.functional.fr"
#define VkglTestCase_011009_2 "agment_ops.stencil.clear"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011009, VkglTestCase_011009_1, VkglTestCase_011009_2);

#define VkglTestCase_011010_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_011010_2 "ops.stencil.stencil_fail_replace"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011010, VkglTestCase_011010_1, VkglTestCase_011010_2);

#define VkglTestCase_011011_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_011011_2 "_ops.stencil.depth_fail_replace"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011011, VkglTestCase_011011_1, VkglTestCase_011011_2);

#define VkglTestCase_011012_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_011012_2 "_ops.stencil.depth_pass_replace"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011012, VkglTestCase_011012_1, VkglTestCase_011012_2);

#define VkglTestCase_011013_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_011013_2 "_ops.stencil.incr_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011013, VkglTestCase_011013_1, VkglTestCase_011013_2);

#define VkglTestCase_011014_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_011014_2 "_ops.stencil.decr_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011014, VkglTestCase_011014_1, VkglTestCase_011014_2);

#define VkglTestCase_011015_1 "dEQP-GLES2.functional.fragment_o"
#define VkglTestCase_011015_2 "ps.stencil.incr_wrap_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011015, VkglTestCase_011015_1, VkglTestCase_011015_2);

#define VkglTestCase_011016_1 "dEQP-GLES2.functional.fragment_o"
#define VkglTestCase_011016_2 "ps.stencil.decr_wrap_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011016, VkglTestCase_011016_1, VkglTestCase_011016_2);

#define VkglTestCase_011017_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_011017_2 "_ops.stencil.zero_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011017, VkglTestCase_011017_1, VkglTestCase_011017_2);

#define VkglTestCase_011018_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_011018_2 "ops.stencil.invert_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011018, VkglTestCase_011018_1, VkglTestCase_011018_2);

#define VkglTestCase_011019_1 "dEQP-GLES2.functional.frag"
#define VkglTestCase_011019_2 "ment_ops.stencil.cmp_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011019, VkglTestCase_011019_1, VkglTestCase_011019_2);

#define VkglTestCase_011020_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011020_2 "nt_ops.stencil.cmp_not_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011020, VkglTestCase_011020_1, VkglTestCase_011020_2);

#define VkglTestCase_011021_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011021_2 "nt_ops.stencil.cmp_less_than"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011021, VkglTestCase_011021_1, VkglTestCase_011021_2);

#define VkglTestCase_011022_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_011022_2 "_ops.stencil.cmp_less_or_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011022, VkglTestCase_011022_1, VkglTestCase_011022_2);

#define VkglTestCase_011023_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011023_2 "t_ops.stencil.cmp_greater_than"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011023, VkglTestCase_011023_1, VkglTestCase_011023_2);

#define VkglTestCase_011024_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_011024_2 "ops.stencil.cmp_greater_or_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011024, VkglTestCase_011024_1, VkglTestCase_011024_2);

#define VkglTestCase_011025_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011025_2 "nt_ops.stencil.cmp_mask_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011025, VkglTestCase_011025_1, VkglTestCase_011025_2);
