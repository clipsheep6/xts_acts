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

#define VkglTestCase_017685_1 "dEQP-GLES31.functional.separate_shader."
#define VkglTestCase_017685_2 "create_shader_program.separate_programs"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017685, VkglTestCase_017685_1, VkglTestCase_017685_2);

#define VkglTestCase_017686_1 "dEQP-GLES31.functional.separate_shader.create"
#define VkglTestCase_017686_2 "_shader_program.separate_programs_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017686, VkglTestCase_017686_1, VkglTestCase_017686_2);

#define VkglTestCase_017687_1 "dEQP-GLES31.functional.separate_shader.creat"
#define VkglTestCase_017687_2 "e_shader_program.separate_programs_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017687, VkglTestCase_017687_1, VkglTestCase_017687_2);

#define VkglTestCase_017688_1 "dEQP-GLES31.functional.separate_shader.crea"
#define VkglTestCase_017688_2 "te_shader_program.separate_programs_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017688, VkglTestCase_017688_1, VkglTestCase_017688_2);

#define VkglTestCase_017689_1 "dEQP-GLES31.functional.separate_shader.cre"
#define VkglTestCase_017689_2 "ate_shader_program.single_program_add_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017689, VkglTestCase_017689_1, VkglTestCase_017689_2);
