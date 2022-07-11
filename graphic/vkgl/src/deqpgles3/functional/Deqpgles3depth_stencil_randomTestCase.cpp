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
#include "../ActsDeqpgles30029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028289_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028289_2 "nt_ops.depth_stencil.random.0"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028289, VkglTestCase_028289_1, VkglTestCase_028289_2);

#define VkglTestCase_028290_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028290_2 "nt_ops.depth_stencil.random.1"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028290, VkglTestCase_028290_1, VkglTestCase_028290_2);

#define VkglTestCase_028291_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028291_2 "nt_ops.depth_stencil.random.2"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028291, VkglTestCase_028291_1, VkglTestCase_028291_2);

#define VkglTestCase_028292_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028292_2 "nt_ops.depth_stencil.random.3"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028292, VkglTestCase_028292_1, VkglTestCase_028292_2);

#define VkglTestCase_028293_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028293_2 "nt_ops.depth_stencil.random.4"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028293, VkglTestCase_028293_1, VkglTestCase_028293_2);

#define VkglTestCase_028294_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028294_2 "nt_ops.depth_stencil.random.5"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028294, VkglTestCase_028294_1, VkglTestCase_028294_2);

#define VkglTestCase_028295_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028295_2 "nt_ops.depth_stencil.random.6"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028295, VkglTestCase_028295_1, VkglTestCase_028295_2);

#define VkglTestCase_028296_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028296_2 "nt_ops.depth_stencil.random.7"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028296, VkglTestCase_028296_1, VkglTestCase_028296_2);

#define VkglTestCase_028297_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028297_2 "nt_ops.depth_stencil.random.8"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028297, VkglTestCase_028297_1, VkglTestCase_028297_2);

#define VkglTestCase_028298_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_028298_2 "nt_ops.depth_stencil.random.9"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028298, VkglTestCase_028298_1, VkglTestCase_028298_2);

#define VkglTestCase_028299_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028299_2 "t_ops.depth_stencil.random.10"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028299, VkglTestCase_028299_1, VkglTestCase_028299_2);

#define VkglTestCase_028300_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028300_2 "t_ops.depth_stencil.random.11"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028300, VkglTestCase_028300_1, VkglTestCase_028300_2);

#define VkglTestCase_028301_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028301_2 "t_ops.depth_stencil.random.12"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028301, VkglTestCase_028301_1, VkglTestCase_028301_2);

#define VkglTestCase_028302_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028302_2 "t_ops.depth_stencil.random.13"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028302, VkglTestCase_028302_1, VkglTestCase_028302_2);

#define VkglTestCase_028303_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028303_2 "t_ops.depth_stencil.random.14"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028303, VkglTestCase_028303_1, VkglTestCase_028303_2);

#define VkglTestCase_028304_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028304_2 "t_ops.depth_stencil.random.15"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028304, VkglTestCase_028304_1, VkglTestCase_028304_2);

#define VkglTestCase_028305_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028305_2 "t_ops.depth_stencil.random.16"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028305, VkglTestCase_028305_1, VkglTestCase_028305_2);

#define VkglTestCase_028306_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028306_2 "t_ops.depth_stencil.random.17"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028306, VkglTestCase_028306_1, VkglTestCase_028306_2);

#define VkglTestCase_028307_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028307_2 "t_ops.depth_stencil.random.18"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028307, VkglTestCase_028307_1, VkglTestCase_028307_2);

#define VkglTestCase_028308_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028308_2 "t_ops.depth_stencil.random.19"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028308, VkglTestCase_028308_1, VkglTestCase_028308_2);

#define VkglTestCase_028309_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028309_2 "t_ops.depth_stencil.random.20"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028309, VkglTestCase_028309_1, VkglTestCase_028309_2);

#define VkglTestCase_028310_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028310_2 "t_ops.depth_stencil.random.21"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028310, VkglTestCase_028310_1, VkglTestCase_028310_2);

#define VkglTestCase_028311_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028311_2 "t_ops.depth_stencil.random.22"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028311, VkglTestCase_028311_1, VkglTestCase_028311_2);

#define VkglTestCase_028312_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028312_2 "t_ops.depth_stencil.random.23"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028312, VkglTestCase_028312_1, VkglTestCase_028312_2);

#define VkglTestCase_028313_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_028313_2 "t_ops.depth_stencil.random.24"
SHRINK_HWTEST_F(ActsDeqpgles30029TestSuite, TestCase_028313, VkglTestCase_028313_1, VkglTestCase_028313_2);
