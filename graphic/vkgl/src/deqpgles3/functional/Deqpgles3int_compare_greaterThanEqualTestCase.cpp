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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013552_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013552_2 "_compare.greaterThanEqual.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013552, VkglTestCase_013552_1, VkglTestCase_013552_2);

#define VkglTestCase_013553_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013553_2 "compare.greaterThanEqual.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013553, VkglTestCase_013553_1, VkglTestCase_013553_2);

#define VkglTestCase_013554_1 "dEQP-GLES3.functional.shaders.operator.int_c"
#define VkglTestCase_013554_2 "ompare.greaterThanEqual.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013554, VkglTestCase_013554_1, VkglTestCase_013554_2);

#define VkglTestCase_013555_1 "dEQP-GLES3.functional.shaders.operator.int_co"
#define VkglTestCase_013555_2 "mpare.greaterThanEqual.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013555, VkglTestCase_013555_1, VkglTestCase_013555_2);

#define VkglTestCase_013556_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013556_2 "compare.greaterThanEqual.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013556, VkglTestCase_013556_1, VkglTestCase_013556_2);

#define VkglTestCase_013557_1 "dEQP-GLES3.functional.shaders.operator.int_c"
#define VkglTestCase_013557_2 "ompare.greaterThanEqual.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013557, VkglTestCase_013557_1, VkglTestCase_013557_2);

#define VkglTestCase_013558_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013558_2 "_compare.greaterThanEqual.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013558, VkglTestCase_013558_1, VkglTestCase_013558_2);

#define VkglTestCase_013559_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013559_2 "compare.greaterThanEqual.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013559, VkglTestCase_013559_1, VkglTestCase_013559_2);

#define VkglTestCase_013560_1 "dEQP-GLES3.functional.shaders.operator.int_c"
#define VkglTestCase_013560_2 "ompare.greaterThanEqual.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013560, VkglTestCase_013560_1, VkglTestCase_013560_2);

#define VkglTestCase_013561_1 "dEQP-GLES3.functional.shaders.operator.int_co"
#define VkglTestCase_013561_2 "mpare.greaterThanEqual.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013561, VkglTestCase_013561_1, VkglTestCase_013561_2);

#define VkglTestCase_013562_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013562_2 "compare.greaterThanEqual.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013562, VkglTestCase_013562_1, VkglTestCase_013562_2);

#define VkglTestCase_013563_1 "dEQP-GLES3.functional.shaders.operator.int_c"
#define VkglTestCase_013563_2 "ompare.greaterThanEqual.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013563, VkglTestCase_013563_1, VkglTestCase_013563_2);

#define VkglTestCase_013564_1 "dEQP-GLES3.functional.shaders.operator.int"
#define VkglTestCase_013564_2 "_compare.greaterThanEqual.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013564, VkglTestCase_013564_1, VkglTestCase_013564_2);

#define VkglTestCase_013565_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013565_2 "compare.greaterThanEqual.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013565, VkglTestCase_013565_1, VkglTestCase_013565_2);

#define VkglTestCase_013566_1 "dEQP-GLES3.functional.shaders.operator.int_c"
#define VkglTestCase_013566_2 "ompare.greaterThanEqual.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013566, VkglTestCase_013566_1, VkglTestCase_013566_2);

#define VkglTestCase_013567_1 "dEQP-GLES3.functional.shaders.operator.int_co"
#define VkglTestCase_013567_2 "mpare.greaterThanEqual.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013567, VkglTestCase_013567_1, VkglTestCase_013567_2);

#define VkglTestCase_013568_1 "dEQP-GLES3.functional.shaders.operator.int_"
#define VkglTestCase_013568_2 "compare.greaterThanEqual.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013568, VkglTestCase_013568_1, VkglTestCase_013568_2);

#define VkglTestCase_013569_1 "dEQP-GLES3.functional.shaders.operator.int_c"
#define VkglTestCase_013569_2 "ompare.greaterThanEqual.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013569, VkglTestCase_013569_1, VkglTestCase_013569_2);
