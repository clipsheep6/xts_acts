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

#define VkglTestCase_017679_1 "dEQP-GLES31.functional.separate_shad"
#define VkglTestCase_017679_2 "er.program_uniform.separate_programs"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017679, VkglTestCase_017679_1, VkglTestCase_017679_2);

#define VkglTestCase_017680_1 "dEQP-GLES31.functional.separate_shader.pro"
#define VkglTestCase_017680_2 "gram_uniform.separate_programs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017680, VkglTestCase_017680_1, VkglTestCase_017680_2);

#define VkglTestCase_017681_1 "dEQP-GLES31.functional.separate_shader.pr"
#define VkglTestCase_017681_2 "ogram_uniform.separate_programs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017681, VkglTestCase_017681_1, VkglTestCase_017681_2);

#define VkglTestCase_017682_1 "dEQP-GLES31.functional.separate_shader.p"
#define VkglTestCase_017682_2 "rogram_uniform.separate_programs_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017682, VkglTestCase_017682_1, VkglTestCase_017682_2);

#define VkglTestCase_017683_1 "dEQP-GLES31.functional.separate_sh"
#define VkglTestCase_017683_2 "ader.program_uniform.single_program"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017683, VkglTestCase_017683_1, VkglTestCase_017683_2);

#define VkglTestCase_017684_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017684_2 "program_uniform.single_program_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017684, VkglTestCase_017684_1, VkglTestCase_017684_2);
