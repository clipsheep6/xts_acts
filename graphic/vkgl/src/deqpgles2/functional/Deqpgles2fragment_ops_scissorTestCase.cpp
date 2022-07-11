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

#define VkglTestCase_011135_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011135_2 "nt_ops.scissor.contained_tris"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011135, VkglTestCase_011135_1, VkglTestCase_011135_2);

#define VkglTestCase_011136_1 "dEQP-GLES2.functional.fragm"
#define VkglTestCase_011136_2 "ent_ops.scissor.partial_tris"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011136, VkglTestCase_011136_1, VkglTestCase_011136_2);

#define VkglTestCase_011137_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011137_2 "nt_ops.scissor.contained_tri"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011137, VkglTestCase_011137_1, VkglTestCase_011137_2);

#define VkglTestCase_011138_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011138_2 "nt_ops.scissor.enclosing_tri"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011138, VkglTestCase_011138_1, VkglTestCase_011138_2);

#define VkglTestCase_011139_1 "dEQP-GLES2.functional.fragm"
#define VkglTestCase_011139_2 "ent_ops.scissor.partial_tri"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011139, VkglTestCase_011139_1, VkglTestCase_011139_2);

#define VkglTestCase_011140_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_011140_2 "_ops.scissor.outside_render_tri"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011140, VkglTestCase_011140_1, VkglTestCase_011140_2);

#define VkglTestCase_011141_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011141_2 "nt_ops.scissor.partial_lines"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011141, VkglTestCase_011141_1, VkglTestCase_011141_2);

#define VkglTestCase_011142_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011142_2 "nt_ops.scissor.contained_line"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011142, VkglTestCase_011142_1, VkglTestCase_011142_2);

#define VkglTestCase_011143_1 "dEQP-GLES2.functional.fragm"
#define VkglTestCase_011143_2 "ent_ops.scissor.partial_line"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011143, VkglTestCase_011143_1, VkglTestCase_011143_2);

#define VkglTestCase_011144_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_011144_2 "ops.scissor.outside_render_line"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011144, VkglTestCase_011144_1, VkglTestCase_011144_2);

#define VkglTestCase_011145_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011145_2 "t_ops.scissor.contained_point"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011145, VkglTestCase_011145_1, VkglTestCase_011145_2);

#define VkglTestCase_011146_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011146_2 "nt_ops.scissor.partial_points"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011146, VkglTestCase_011146_1, VkglTestCase_011146_2);

#define VkglTestCase_011147_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011147_2 "nt_ops.scissor.outside_point"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011147, VkglTestCase_011147_1, VkglTestCase_011147_2);

#define VkglTestCase_011148_1 "dEQP-GLES2.functional.fragment_"
#define VkglTestCase_011148_2 "ops.scissor.outside_render_point"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011148, VkglTestCase_011148_1, VkglTestCase_011148_2);

#define VkglTestCase_011149_1 "dEQP-GLES2.functional.fragm"
#define VkglTestCase_011149_2 "ent_ops.scissor.clear_depth"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011149, VkglTestCase_011149_1, VkglTestCase_011149_2);

#define VkglTestCase_011150_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011150_2 "nt_ops.scissor.clear_stencil"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011150, VkglTestCase_011150_1, VkglTestCase_011150_2);

#define VkglTestCase_011151_1 "dEQP-GLES2.functional.fragm"
#define VkglTestCase_011151_2 "ent_ops.scissor.clear_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011151, VkglTestCase_011151_1, VkglTestCase_011151_2);
