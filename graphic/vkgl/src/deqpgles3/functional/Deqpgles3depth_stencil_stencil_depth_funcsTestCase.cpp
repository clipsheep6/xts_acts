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

#define VkglTestCase_027693_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027693_2 "l.stencil_depth_funcs.stencil_never_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027693, VkglTestCase_027693_1, VkglTestCase_027693_2);

#define VkglTestCase_027694_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027694_2 "l.stencil_depth_funcs.stencil_never_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027694, VkglTestCase_027694_1, VkglTestCase_027694_2);

#define VkglTestCase_027695_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027695_2 "il.stencil_depth_funcs.stencil_never_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027695, VkglTestCase_027695_1, VkglTestCase_027695_2);

#define VkglTestCase_027696_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027696_2 "l.stencil_depth_funcs.stencil_never_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027696, VkglTestCase_027696_1, VkglTestCase_027696_2);

#define VkglTestCase_027697_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027697_2 "l.stencil_depth_funcs.stencil_never_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027697, VkglTestCase_027697_1, VkglTestCase_027697_2);

#define VkglTestCase_027698_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027698_2 "l.stencil_depth_funcs.stencil_never_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027698, VkglTestCase_027698_1, VkglTestCase_027698_2);

#define VkglTestCase_027699_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027699_2 ".stencil_depth_funcs.stencil_never_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027699, VkglTestCase_027699_1, VkglTestCase_027699_2);

#define VkglTestCase_027700_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027700_2 ".stencil_depth_funcs.stencil_never_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027700, VkglTestCase_027700_1, VkglTestCase_027700_2);

#define VkglTestCase_027701_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_027701_2 "cil.stencil_depth_funcs.stencil_never_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027701, VkglTestCase_027701_1, VkglTestCase_027701_2);

#define VkglTestCase_027702_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027702_2 "l.stencil_depth_funcs.stencil_always_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027702, VkglTestCase_027702_1, VkglTestCase_027702_2);

#define VkglTestCase_027703_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027703_2 ".stencil_depth_funcs.stencil_always_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027703, VkglTestCase_027703_1, VkglTestCase_027703_2);

#define VkglTestCase_027704_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027704_2 "l.stencil_depth_funcs.stencil_always_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027704, VkglTestCase_027704_1, VkglTestCase_027704_2);

#define VkglTestCase_027705_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027705_2 ".stencil_depth_funcs.stencil_always_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027705, VkglTestCase_027705_1, VkglTestCase_027705_2);

#define VkglTestCase_027706_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027706_2 "l.stencil_depth_funcs.stencil_always_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027706, VkglTestCase_027706_1, VkglTestCase_027706_2);

#define VkglTestCase_027707_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027707_2 ".stencil_depth_funcs.stencil_always_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027707, VkglTestCase_027707_1, VkglTestCase_027707_2);

#define VkglTestCase_027708_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027708_2 ".stencil_depth_funcs.stencil_always_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027708, VkglTestCase_027708_1, VkglTestCase_027708_2);

#define VkglTestCase_027709_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027709_2 "stencil_depth_funcs.stencil_always_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027709, VkglTestCase_027709_1, VkglTestCase_027709_2);

#define VkglTestCase_027710_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027710_2 "il.stencil_depth_funcs.stencil_always_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027710, VkglTestCase_027710_1, VkglTestCase_027710_2);

#define VkglTestCase_027711_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027711_2 "il.stencil_depth_funcs.stencil_less_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027711, VkglTestCase_027711_1, VkglTestCase_027711_2);

#define VkglTestCase_027712_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027712_2 "l.stencil_depth_funcs.stencil_less_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027712, VkglTestCase_027712_1, VkglTestCase_027712_2);

#define VkglTestCase_027713_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027713_2 "il.stencil_depth_funcs.stencil_less_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027713, VkglTestCase_027713_1, VkglTestCase_027713_2);

#define VkglTestCase_027714_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027714_2 "l.stencil_depth_funcs.stencil_less_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027714, VkglTestCase_027714_1, VkglTestCase_027714_2);

#define VkglTestCase_027715_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027715_2 "il.stencil_depth_funcs.stencil_less_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027715, VkglTestCase_027715_1, VkglTestCase_027715_2);

#define VkglTestCase_027716_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027716_2 "l.stencil_depth_funcs.stencil_less_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027716, VkglTestCase_027716_1, VkglTestCase_027716_2);

#define VkglTestCase_027717_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027717_2 "l.stencil_depth_funcs.stencil_less_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027717, VkglTestCase_027717_1, VkglTestCase_027717_2);

#define VkglTestCase_027718_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027718_2 ".stencil_depth_funcs.stencil_less_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027718, VkglTestCase_027718_1, VkglTestCase_027718_2);

#define VkglTestCase_027719_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_027719_2 "cil.stencil_depth_funcs.stencil_less_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027719, VkglTestCase_027719_1, VkglTestCase_027719_2);

#define VkglTestCase_027720_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027720_2 "l.stencil_depth_funcs.stencil_lequal_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027720, VkglTestCase_027720_1, VkglTestCase_027720_2);

#define VkglTestCase_027721_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027721_2 ".stencil_depth_funcs.stencil_lequal_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027721, VkglTestCase_027721_1, VkglTestCase_027721_2);

#define VkglTestCase_027722_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027722_2 "l.stencil_depth_funcs.stencil_lequal_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027722, VkglTestCase_027722_1, VkglTestCase_027722_2);

#define VkglTestCase_027723_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027723_2 ".stencil_depth_funcs.stencil_lequal_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027723, VkglTestCase_027723_1, VkglTestCase_027723_2);

#define VkglTestCase_027724_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027724_2 "l.stencil_depth_funcs.stencil_lequal_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027724, VkglTestCase_027724_1, VkglTestCase_027724_2);

#define VkglTestCase_027725_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027725_2 ".stencil_depth_funcs.stencil_lequal_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027725, VkglTestCase_027725_1, VkglTestCase_027725_2);

#define VkglTestCase_027726_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027726_2 ".stencil_depth_funcs.stencil_lequal_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027726, VkglTestCase_027726_1, VkglTestCase_027726_2);

#define VkglTestCase_027727_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027727_2 "stencil_depth_funcs.stencil_lequal_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027727, VkglTestCase_027727_1, VkglTestCase_027727_2);

#define VkglTestCase_027728_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027728_2 "il.stencil_depth_funcs.stencil_lequal_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027728, VkglTestCase_027728_1, VkglTestCase_027728_2);

#define VkglTestCase_027729_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027729_2 "l.stencil_depth_funcs.stencil_equal_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027729, VkglTestCase_027729_1, VkglTestCase_027729_2);

#define VkglTestCase_027730_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027730_2 "l.stencil_depth_funcs.stencil_equal_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027730, VkglTestCase_027730_1, VkglTestCase_027730_2);

#define VkglTestCase_027731_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027731_2 "il.stencil_depth_funcs.stencil_equal_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027731, VkglTestCase_027731_1, VkglTestCase_027731_2);

#define VkglTestCase_027732_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027732_2 "l.stencil_depth_funcs.stencil_equal_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027732, VkglTestCase_027732_1, VkglTestCase_027732_2);

#define VkglTestCase_027733_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027733_2 "l.stencil_depth_funcs.stencil_equal_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027733, VkglTestCase_027733_1, VkglTestCase_027733_2);

#define VkglTestCase_027734_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027734_2 "l.stencil_depth_funcs.stencil_equal_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027734, VkglTestCase_027734_1, VkglTestCase_027734_2);

#define VkglTestCase_027735_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027735_2 ".stencil_depth_funcs.stencil_equal_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027735, VkglTestCase_027735_1, VkglTestCase_027735_2);

#define VkglTestCase_027736_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027736_2 ".stencil_depth_funcs.stencil_equal_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027736, VkglTestCase_027736_1, VkglTestCase_027736_2);

#define VkglTestCase_027737_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_027737_2 "cil.stencil_depth_funcs.stencil_equal_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027737, VkglTestCase_027737_1, VkglTestCase_027737_2);

#define VkglTestCase_027738_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027738_2 "l.stencil_depth_funcs.stencil_gequal_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027738, VkglTestCase_027738_1, VkglTestCase_027738_2);

#define VkglTestCase_027739_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027739_2 ".stencil_depth_funcs.stencil_gequal_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027739, VkglTestCase_027739_1, VkglTestCase_027739_2);

#define VkglTestCase_027740_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027740_2 "l.stencil_depth_funcs.stencil_gequal_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027740, VkglTestCase_027740_1, VkglTestCase_027740_2);

#define VkglTestCase_027741_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027741_2 ".stencil_depth_funcs.stencil_gequal_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027741, VkglTestCase_027741_1, VkglTestCase_027741_2);

#define VkglTestCase_027742_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027742_2 "l.stencil_depth_funcs.stencil_gequal_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027742, VkglTestCase_027742_1, VkglTestCase_027742_2);

#define VkglTestCase_027743_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027743_2 ".stencil_depth_funcs.stencil_gequal_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027743, VkglTestCase_027743_1, VkglTestCase_027743_2);

#define VkglTestCase_027744_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027744_2 ".stencil_depth_funcs.stencil_gequal_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027744, VkglTestCase_027744_1, VkglTestCase_027744_2);

#define VkglTestCase_027745_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027745_2 "stencil_depth_funcs.stencil_gequal_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027745, VkglTestCase_027745_1, VkglTestCase_027745_2);

#define VkglTestCase_027746_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027746_2 "il.stencil_depth_funcs.stencil_gequal_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027746, VkglTestCase_027746_1, VkglTestCase_027746_2);

#define VkglTestCase_027747_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027747_2 ".stencil_depth_funcs.stencil_greater_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027747, VkglTestCase_027747_1, VkglTestCase_027747_2);

#define VkglTestCase_027748_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027748_2 ".stencil_depth_funcs.stencil_greater_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027748, VkglTestCase_027748_1, VkglTestCase_027748_2);

#define VkglTestCase_027749_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027749_2 "l.stencil_depth_funcs.stencil_greater_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027749, VkglTestCase_027749_1, VkglTestCase_027749_2);

#define VkglTestCase_027750_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027750_2 ".stencil_depth_funcs.stencil_greater_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027750, VkglTestCase_027750_1, VkglTestCase_027750_2);

#define VkglTestCase_027751_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027751_2 ".stencil_depth_funcs.stencil_greater_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027751, VkglTestCase_027751_1, VkglTestCase_027751_2);

#define VkglTestCase_027752_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027752_2 ".stencil_depth_funcs.stencil_greater_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027752, VkglTestCase_027752_1, VkglTestCase_027752_2);

#define VkglTestCase_027753_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027753_2 "stencil_depth_funcs.stencil_greater_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027753, VkglTestCase_027753_1, VkglTestCase_027753_2);

#define VkglTestCase_027754_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027754_2 "stencil_depth_funcs.stencil_greater_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027754, VkglTestCase_027754_1, VkglTestCase_027754_2);

#define VkglTestCase_027755_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027755_2 "il.stencil_depth_funcs.stencil_greater_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027755, VkglTestCase_027755_1, VkglTestCase_027755_2);

#define VkglTestCase_027756_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027756_2 ".stencil_depth_funcs.stencil_notequal_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027756, VkglTestCase_027756_1, VkglTestCase_027756_2);

#define VkglTestCase_027757_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027757_2 "stencil_depth_funcs.stencil_notequal_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027757, VkglTestCase_027757_1, VkglTestCase_027757_2);

#define VkglTestCase_027758_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027758_2 ".stencil_depth_funcs.stencil_notequal_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027758, VkglTestCase_027758_1, VkglTestCase_027758_2);

#define VkglTestCase_027759_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027759_2 "stencil_depth_funcs.stencil_notequal_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027759, VkglTestCase_027759_1, VkglTestCase_027759_2);

#define VkglTestCase_027760_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil"
#define VkglTestCase_027760_2 ".stencil_depth_funcs.stencil_notequal_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027760, VkglTestCase_027760_1, VkglTestCase_027760_2);

#define VkglTestCase_027761_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027761_2 "stencil_depth_funcs.stencil_notequal_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027761, VkglTestCase_027761_1, VkglTestCase_027761_2);

#define VkglTestCase_027762_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil."
#define VkglTestCase_027762_2 "stencil_depth_funcs.stencil_notequal_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027762, VkglTestCase_027762_1, VkglTestCase_027762_2);

#define VkglTestCase_027763_1 "dEQP-GLES3.functional.fragment_ops.depth_stencil.s"
#define VkglTestCase_027763_2 "tencil_depth_funcs.stencil_notequal_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027763, VkglTestCase_027763_1, VkglTestCase_027763_2);

#define VkglTestCase_027764_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027764_2 "l.stencil_depth_funcs.stencil_notequal_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027764, VkglTestCase_027764_1, VkglTestCase_027764_2);

#define VkglTestCase_027765_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_027765_2 "cil.stencil_depth_funcs.no_stencil_depth_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027765, VkglTestCase_027765_1, VkglTestCase_027765_2);

#define VkglTestCase_027766_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027766_2 "il.stencil_depth_funcs.no_stencil_depth_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027766, VkglTestCase_027766_1, VkglTestCase_027766_2);

#define VkglTestCase_027767_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_027767_2 "cil.stencil_depth_funcs.no_stencil_depth_less"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027767, VkglTestCase_027767_1, VkglTestCase_027767_2);

#define VkglTestCase_027768_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027768_2 "il.stencil_depth_funcs.no_stencil_depth_lequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027768, VkglTestCase_027768_1, VkglTestCase_027768_2);

#define VkglTestCase_027769_1 "dEQP-GLES3.functional.fragment_ops.depth_sten"
#define VkglTestCase_027769_2 "cil.stencil_depth_funcs.no_stencil_depth_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027769, VkglTestCase_027769_1, VkglTestCase_027769_2);

#define VkglTestCase_027770_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027770_2 "il.stencil_depth_funcs.no_stencil_depth_gequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027770, VkglTestCase_027770_1, VkglTestCase_027770_2);

#define VkglTestCase_027771_1 "dEQP-GLES3.functional.fragment_ops.depth_stenc"
#define VkglTestCase_027771_2 "il.stencil_depth_funcs.no_stencil_depth_greater"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027771, VkglTestCase_027771_1, VkglTestCase_027771_2);

#define VkglTestCase_027772_1 "dEQP-GLES3.functional.fragment_ops.depth_stenci"
#define VkglTestCase_027772_2 "l.stencil_depth_funcs.no_stencil_depth_notequal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027772, VkglTestCase_027772_1, VkglTestCase_027772_2);

#define VkglTestCase_027773_1 "dEQP-GLES3.functional.fragment_ops.depth_ste"
#define VkglTestCase_027773_2 "ncil.stencil_depth_funcs.no_stencil_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027773, VkglTestCase_027773_1, VkglTestCase_027773_2);
