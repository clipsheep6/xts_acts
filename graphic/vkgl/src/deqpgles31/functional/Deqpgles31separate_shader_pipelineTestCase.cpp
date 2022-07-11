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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017659_1 "dEQP-GLES31.functional.separate_shader.pip"
#define VkglTestCase_017659_2 "eline.different_constant_separate_programs"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017659, VkglTestCase_017659_1, VkglTestCase_017659_2);

#define VkglTestCase_017660_1 "dEQP-GLES31.functional.separate_shader.pipeline."
#define VkglTestCase_017660_2 "different_constant_separate_programs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017660, VkglTestCase_017660_1, VkglTestCase_017660_2);

#define VkglTestCase_017661_1 "dEQP-GLES31.functional.separate_shader.pipeline"
#define VkglTestCase_017661_2 ".different_constant_separate_programs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017661, VkglTestCase_017661_1, VkglTestCase_017661_2);

#define VkglTestCase_017662_1 "dEQP-GLES31.functional.separate_shader.pipelin"
#define VkglTestCase_017662_2 "e.different_constant_separate_programs_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017662, VkglTestCase_017662_1, VkglTestCase_017662_2);

#define VkglTestCase_017663_1 "dEQP-GLES31.functional.separate_shader.p"
#define VkglTestCase_017663_2 "ipeline.different_constant_single_program"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017663, VkglTestCase_017663_1, VkglTestCase_017663_2);

#define VkglTestCase_017664_1 "dEQP-GLES31.functional.separate_shader.pipeli"
#define VkglTestCase_017664_2 "ne.different_constant_single_program_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017664, VkglTestCase_017664_1, VkglTestCase_017664_2);

#define VkglTestCase_017665_1 "dEQP-GLES31.functional.separate_shader.pi"
#define VkglTestCase_017665_2 "peline.different_uniform_separate_programs"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017665, VkglTestCase_017665_1, VkglTestCase_017665_2);

#define VkglTestCase_017666_1 "dEQP-GLES31.functional.separate_shader.pipeline."
#define VkglTestCase_017666_2 "different_uniform_separate_programs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017666, VkglTestCase_017666_1, VkglTestCase_017666_2);

#define VkglTestCase_017667_1 "dEQP-GLES31.functional.separate_shader.pipeline"
#define VkglTestCase_017667_2 ".different_uniform_separate_programs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017667, VkglTestCase_017667_1, VkglTestCase_017667_2);

#define VkglTestCase_017668_1 "dEQP-GLES31.functional.separate_shader.pipelin"
#define VkglTestCase_017668_2 "e.different_uniform_separate_programs_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017668, VkglTestCase_017668_1, VkglTestCase_017668_2);

#define VkglTestCase_017669_1 "dEQP-GLES31.functional.separate_shader.p"
#define VkglTestCase_017669_2 "ipeline.different_uniform_single_program"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017669, VkglTestCase_017669_1, VkglTestCase_017669_2);

#define VkglTestCase_017670_1 "dEQP-GLES31.functional.separate_shader.pipel"
#define VkglTestCase_017670_2 "ine.different_uniform_single_program_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017670, VkglTestCase_017670_1, VkglTestCase_017670_2);

#define VkglTestCase_017671_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017671_2 "pipeline.same_constant_separate_programs"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017671, VkglTestCase_017671_1, VkglTestCase_017671_2);

#define VkglTestCase_017672_1 "dEQP-GLES31.functional.separate_shader.pipelin"
#define VkglTestCase_017672_2 "e.same_constant_separate_programs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017672, VkglTestCase_017672_1, VkglTestCase_017672_2);

#define VkglTestCase_017673_1 "dEQP-GLES31.functional.separate_shader.pipeli"
#define VkglTestCase_017673_2 "ne.same_constant_separate_programs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017673, VkglTestCase_017673_1, VkglTestCase_017673_2);

#define VkglTestCase_017674_1 "dEQP-GLES31.functional.separate_shader.pipel"
#define VkglTestCase_017674_2 "ine.same_constant_separate_programs_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017674, VkglTestCase_017674_1, VkglTestCase_017674_2);

#define VkglTestCase_017675_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017675_2 "pipeline.same_uniform_separate_programs"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017675, VkglTestCase_017675_1, VkglTestCase_017675_2);

#define VkglTestCase_017676_1 "dEQP-GLES31.functional.separate_shader.pipeli"
#define VkglTestCase_017676_2 "ne.same_uniform_separate_programs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017676, VkglTestCase_017676_1, VkglTestCase_017676_2);

#define VkglTestCase_017677_1 "dEQP-GLES31.functional.separate_shader.pipel"
#define VkglTestCase_017677_2 "ine.same_uniform_separate_programs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017677, VkglTestCase_017677_1, VkglTestCase_017677_2);

#define VkglTestCase_017678_1 "dEQP-GLES31.functional.separate_shader.pipe"
#define VkglTestCase_017678_2 "line.same_uniform_separate_programs_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017678, VkglTestCase_017678_1, VkglTestCase_017678_2);
