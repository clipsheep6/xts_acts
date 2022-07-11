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

#define VkglTestCase_017838_1 "dEQP-GLES31.functional.separate_s"
#define VkglTestCase_017838_2 "hader.api.current_program_priority"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017838, VkglTestCase_017838_1, VkglTestCase_017838_2);

#define VkglTestCase_017839_1 "dEQP-GLES31.functional.separate_"
#define VkglTestCase_017839_2 "shader.api.active_program_uniform"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017839, VkglTestCase_017839_1, VkglTestCase_017839_2);

#define VkglTestCase_017840_1 "dEQP-GLES31.functional.separat"
#define VkglTestCase_017840_2 "e_shader.api.pipeline_programs"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017840, VkglTestCase_017840_1, VkglTestCase_017840_2);

#define VkglTestCase_017841_1 "dEQP-GLES31.functional.separa"
#define VkglTestCase_017841_2 "te_shader.api.pipeline_active"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017841, VkglTestCase_017841_1, VkglTestCase_017841_2);
