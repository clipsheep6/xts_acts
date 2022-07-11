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

#define VkglTestCase_017065_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_017065_2 "er.render.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017065, VkglTestCase_017065_1, VkglTestCase_017065_2);

#define VkglTestCase_017066_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_017066_2 "r.render.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017066, VkglTestCase_017066_1, VkglTestCase_017066_2);

#define VkglTestCase_017067_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017067_2 "ter.render.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017067, VkglTestCase_017067_1, VkglTestCase_017067_2);

#define VkglTestCase_017434_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017434_2 "e.render.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017434, VkglTestCase_017434_1, VkglTestCase_017434_2);

#define VkglTestCase_017435_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017435_2 ".render.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017435, VkglTestCase_017435_1, VkglTestCase_017435_2);

#define VkglTestCase_017436_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017436_2 "ue.render.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017436, VkglTestCase_017436_1, VkglTestCase_017436_2);
