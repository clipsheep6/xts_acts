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
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020744_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020744_2 "andom.comparison_ops.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020744, VkglTestCase_020744_1, VkglTestCase_020744_2);

#define VkglTestCase_020745_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020745_2 "andom.comparison_ops.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020745, VkglTestCase_020745_1, VkglTestCase_020745_2);

#define VkglTestCase_020746_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020746_2 "andom.comparison_ops.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020746, VkglTestCase_020746_1, VkglTestCase_020746_2);

#define VkglTestCase_020747_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020747_2 "andom.comparison_ops.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020747, VkglTestCase_020747_1, VkglTestCase_020747_2);

#define VkglTestCase_020748_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020748_2 "andom.comparison_ops.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020748, VkglTestCase_020748_1, VkglTestCase_020748_2);

#define VkglTestCase_020749_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020749_2 "andom.comparison_ops.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020749, VkglTestCase_020749_1, VkglTestCase_020749_2);

#define VkglTestCase_020750_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020750_2 "andom.comparison_ops.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020750, VkglTestCase_020750_1, VkglTestCase_020750_2);

#define VkglTestCase_020751_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020751_2 "andom.comparison_ops.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020751, VkglTestCase_020751_1, VkglTestCase_020751_2);

#define VkglTestCase_020752_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020752_2 "andom.comparison_ops.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020752, VkglTestCase_020752_1, VkglTestCase_020752_2);

#define VkglTestCase_020753_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020753_2 "andom.comparison_ops.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020753, VkglTestCase_020753_1, VkglTestCase_020753_2);

#define VkglTestCase_020754_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020754_2 "andom.comparison_ops.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020754, VkglTestCase_020754_1, VkglTestCase_020754_2);

#define VkglTestCase_020755_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020755_2 "andom.comparison_ops.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020755, VkglTestCase_020755_1, VkglTestCase_020755_2);

#define VkglTestCase_020756_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020756_2 "andom.comparison_ops.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020756, VkglTestCase_020756_1, VkglTestCase_020756_2);

#define VkglTestCase_020757_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020757_2 "andom.comparison_ops.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020757, VkglTestCase_020757_1, VkglTestCase_020757_2);

#define VkglTestCase_020758_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020758_2 "andom.comparison_ops.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020758, VkglTestCase_020758_1, VkglTestCase_020758_2);

#define VkglTestCase_020759_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020759_2 "andom.comparison_ops.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020759, VkglTestCase_020759_1, VkglTestCase_020759_2);

#define VkglTestCase_020760_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020760_2 "andom.comparison_ops.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020760, VkglTestCase_020760_1, VkglTestCase_020760_2);

#define VkglTestCase_020761_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020761_2 "andom.comparison_ops.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020761, VkglTestCase_020761_1, VkglTestCase_020761_2);

#define VkglTestCase_020762_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020762_2 "andom.comparison_ops.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020762, VkglTestCase_020762_1, VkglTestCase_020762_2);

#define VkglTestCase_020763_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020763_2 "andom.comparison_ops.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020763, VkglTestCase_020763_1, VkglTestCase_020763_2);

#define VkglTestCase_020764_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020764_2 "andom.comparison_ops.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020764, VkglTestCase_020764_1, VkglTestCase_020764_2);

#define VkglTestCase_020765_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020765_2 "andom.comparison_ops.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020765, VkglTestCase_020765_1, VkglTestCase_020765_2);

#define VkglTestCase_020766_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020766_2 "andom.comparison_ops.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020766, VkglTestCase_020766_1, VkglTestCase_020766_2);

#define VkglTestCase_020767_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020767_2 "andom.comparison_ops.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020767, VkglTestCase_020767_1, VkglTestCase_020767_2);

#define VkglTestCase_020768_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020768_2 "andom.comparison_ops.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020768, VkglTestCase_020768_1, VkglTestCase_020768_2);

#define VkglTestCase_020769_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020769_2 "andom.comparison_ops.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020769, VkglTestCase_020769_1, VkglTestCase_020769_2);

#define VkglTestCase_020770_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020770_2 "andom.comparison_ops.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020770, VkglTestCase_020770_1, VkglTestCase_020770_2);

#define VkglTestCase_020771_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020771_2 "andom.comparison_ops.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020771, VkglTestCase_020771_1, VkglTestCase_020771_2);

#define VkglTestCase_020772_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020772_2 "andom.comparison_ops.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020772, VkglTestCase_020772_1, VkglTestCase_020772_2);

#define VkglTestCase_020773_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020773_2 "andom.comparison_ops.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020773, VkglTestCase_020773_1, VkglTestCase_020773_2);

#define VkglTestCase_020774_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020774_2 "andom.comparison_ops.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020774, VkglTestCase_020774_1, VkglTestCase_020774_2);

#define VkglTestCase_020775_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020775_2 "andom.comparison_ops.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020775, VkglTestCase_020775_1, VkglTestCase_020775_2);

#define VkglTestCase_020776_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020776_2 "andom.comparison_ops.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020776, VkglTestCase_020776_1, VkglTestCase_020776_2);

#define VkglTestCase_020777_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020777_2 "andom.comparison_ops.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020777, VkglTestCase_020777_1, VkglTestCase_020777_2);

#define VkglTestCase_020778_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020778_2 "andom.comparison_ops.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020778, VkglTestCase_020778_1, VkglTestCase_020778_2);

#define VkglTestCase_020779_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020779_2 "andom.comparison_ops.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020779, VkglTestCase_020779_1, VkglTestCase_020779_2);

#define VkglTestCase_020780_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020780_2 "andom.comparison_ops.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020780, VkglTestCase_020780_1, VkglTestCase_020780_2);

#define VkglTestCase_020781_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020781_2 "andom.comparison_ops.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020781, VkglTestCase_020781_1, VkglTestCase_020781_2);

#define VkglTestCase_020782_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020782_2 "andom.comparison_ops.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020782, VkglTestCase_020782_1, VkglTestCase_020782_2);

#define VkglTestCase_020783_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020783_2 "andom.comparison_ops.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020783, VkglTestCase_020783_1, VkglTestCase_020783_2);

#define VkglTestCase_020784_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020784_2 "andom.comparison_ops.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020784, VkglTestCase_020784_1, VkglTestCase_020784_2);

#define VkglTestCase_020785_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020785_2 "andom.comparison_ops.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020785, VkglTestCase_020785_1, VkglTestCase_020785_2);

#define VkglTestCase_020786_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020786_2 "andom.comparison_ops.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020786, VkglTestCase_020786_1, VkglTestCase_020786_2);

#define VkglTestCase_020787_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020787_2 "andom.comparison_ops.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020787, VkglTestCase_020787_1, VkglTestCase_020787_2);

#define VkglTestCase_020788_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020788_2 "andom.comparison_ops.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020788, VkglTestCase_020788_1, VkglTestCase_020788_2);

#define VkglTestCase_020789_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020789_2 "andom.comparison_ops.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020789, VkglTestCase_020789_1, VkglTestCase_020789_2);

#define VkglTestCase_020790_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020790_2 "andom.comparison_ops.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020790, VkglTestCase_020790_1, VkglTestCase_020790_2);

#define VkglTestCase_020791_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020791_2 "andom.comparison_ops.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020791, VkglTestCase_020791_1, VkglTestCase_020791_2);

#define VkglTestCase_020792_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020792_2 "andom.comparison_ops.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020792, VkglTestCase_020792_1, VkglTestCase_020792_2);

#define VkglTestCase_020793_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_020793_2 "andom.comparison_ops.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020793, VkglTestCase_020793_1, VkglTestCase_020793_2);
