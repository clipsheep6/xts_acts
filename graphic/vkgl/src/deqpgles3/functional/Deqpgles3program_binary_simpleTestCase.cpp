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
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041904_1 "dEQP-GLES3.functional.shader_api.program_bin"
#define VkglTestCase_041904_2 "ary.simple.get_program_binary_vertex_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041904, VkglTestCase_041904_1, VkglTestCase_041904_2);

#define VkglTestCase_041905_1 "dEQP-GLES3.functional.shader_api.program_"
#define VkglTestCase_041905_2 "binary.simple.uniform_reset_on_binary_load"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041905, VkglTestCase_041905_1, VkglTestCase_041905_2);
