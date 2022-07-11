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
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027676_1 "dEQP-GLES3.functional.fr"
#define VkglTestCase_027676_2 "agment_ops.stencil.clear"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027676, VkglTestCase_027676_1, VkglTestCase_027676_2);

#define VkglTestCase_027677_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_027677_2 "ops.stencil.stencil_fail_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027677, VkglTestCase_027677_1, VkglTestCase_027677_2);

#define VkglTestCase_027678_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_027678_2 "_ops.stencil.depth_fail_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027678, VkglTestCase_027678_1, VkglTestCase_027678_2);

#define VkglTestCase_027679_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_027679_2 "_ops.stencil.depth_pass_replace"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027679, VkglTestCase_027679_1, VkglTestCase_027679_2);

#define VkglTestCase_027680_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_027680_2 "_ops.stencil.incr_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027680, VkglTestCase_027680_1, VkglTestCase_027680_2);

#define VkglTestCase_027681_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_027681_2 "_ops.stencil.decr_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027681, VkglTestCase_027681_1, VkglTestCase_027681_2);

#define VkglTestCase_027682_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_027682_2 "ps.stencil.incr_wrap_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027682, VkglTestCase_027682_1, VkglTestCase_027682_2);

#define VkglTestCase_027683_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_027683_2 "ps.stencil.decr_wrap_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027683, VkglTestCase_027683_1, VkglTestCase_027683_2);

#define VkglTestCase_027684_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_027684_2 "_ops.stencil.zero_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027684, VkglTestCase_027684_1, VkglTestCase_027684_2);

#define VkglTestCase_027685_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_027685_2 "ops.stencil.invert_stencil_fail"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027685, VkglTestCase_027685_1, VkglTestCase_027685_2);

#define VkglTestCase_027686_1 "dEQP-GLES3.functional.frag"
#define VkglTestCase_027686_2 "ment_ops.stencil.cmp_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027686, VkglTestCase_027686_1, VkglTestCase_027686_2);

#define VkglTestCase_027687_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_027687_2 "nt_ops.stencil.cmp_not_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027687, VkglTestCase_027687_1, VkglTestCase_027687_2);

#define VkglTestCase_027688_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_027688_2 "nt_ops.stencil.cmp_less_than"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027688, VkglTestCase_027688_1, VkglTestCase_027688_2);

#define VkglTestCase_027689_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_027689_2 "_ops.stencil.cmp_less_or_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027689, VkglTestCase_027689_1, VkglTestCase_027689_2);

#define VkglTestCase_027690_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_027690_2 "t_ops.stencil.cmp_greater_than"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027690, VkglTestCase_027690_1, VkglTestCase_027690_2);

#define VkglTestCase_027691_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_027691_2 "ops.stencil.cmp_greater_or_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027691, VkglTestCase_027691_1, VkglTestCase_027691_2);

#define VkglTestCase_027692_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_027692_2 "nt_ops.stencil.cmp_mask_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027692, VkglTestCase_027692_1, VkglTestCase_027692_2);
