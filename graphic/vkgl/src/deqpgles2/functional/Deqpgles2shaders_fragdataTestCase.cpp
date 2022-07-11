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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007859_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_007859_2 "s.fragdata.valid_static_index"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007859, VkglTestCase_007859_1, VkglTestCase_007859_2);

#define VkglTestCase_007860_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007860_2 ".fragdata.valid_uniform_index"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007860, VkglTestCase_007860_1, VkglTestCase_007860_2);

#define VkglTestCase_007861_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007861_2 ".fragdata.valid_dynamic_index"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007861, VkglTestCase_007861_1, VkglTestCase_007861_2);

#define VkglTestCase_007862_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_007862_2 ".fragdata.invalid_assign_to_1"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007862, VkglTestCase_007862_1, VkglTestCase_007862_2);

#define VkglTestCase_007863_1 "dEQP-GLES2.functional.shaders.fragdat"
#define VkglTestCase_007863_2 "a.write_fragcolor_and_fragdata_simple"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007863, VkglTestCase_007863_1, VkglTestCase_007863_2);

#define VkglTestCase_007864_1 "dEQP-GLES2.functional.shaders.fragdata"
#define VkglTestCase_007864_2 ".write_fragcolor_and_fragdata_static_if"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007864, VkglTestCase_007864_1, VkglTestCase_007864_2);

#define VkglTestCase_007865_1 "dEQP-GLES2.functional.shaders.fragdata."
#define VkglTestCase_007865_2 "write_fragcolor_and_fragdata_unused_func"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007865, VkglTestCase_007865_1, VkglTestCase_007865_2);
