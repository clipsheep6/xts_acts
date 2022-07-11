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

#define VkglTestCase_017557_1 "dEQP-GLES31.functional.blend_equation_advanced"
#define VkglTestCase_017557_2 ".state_query.blend_advanced_coherent_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017557, VkglTestCase_017557_1, VkglTestCase_017557_2);

#define VkglTestCase_017558_1 "dEQP-GLES31.functional.blend_equation_advanced"
#define VkglTestCase_017558_2 ".state_query.blend_advanced_coherent_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017558, VkglTestCase_017558_1, VkglTestCase_017558_2);

#define VkglTestCase_017559_1 "dEQP-GLES31.functional.blend_equation_advanced"
#define VkglTestCase_017559_2 ".state_query.blend_advanced_coherent_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017559, VkglTestCase_017559_1, VkglTestCase_017559_2);

#define VkglTestCase_017560_1 "dEQP-GLES31.functional.blend_equation_advanced."
#define VkglTestCase_017560_2 "state_query.blend_advanced_coherent_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017560, VkglTestCase_017560_1, VkglTestCase_017560_2);

#define VkglTestCase_017561_1 "dEQP-GLES31.functional.blend_equation_advance"
#define VkglTestCase_017561_2 "d.state_query.blend_advanced_coherent_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017561, VkglTestCase_017561_1, VkglTestCase_017561_2);

#define VkglTestCase_017562_1 "dEQP-GLES31.functional.blend_equation_adva"
#define VkglTestCase_017562_2 "nced.state_query.blend_equation_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017562, VkglTestCase_017562_1, VkglTestCase_017562_2);

#define VkglTestCase_017563_1 "dEQP-GLES31.functional.blend_equation_adva"
#define VkglTestCase_017563_2 "nced.state_query.blend_equation_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017563, VkglTestCase_017563_1, VkglTestCase_017563_2);

#define VkglTestCase_017564_1 "dEQP-GLES31.functional.blend_equation_advan"
#define VkglTestCase_017564_2 "ced.state_query.blend_equation_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017564, VkglTestCase_017564_1, VkglTestCase_017564_2);

#define VkglTestCase_017565_1 "dEQP-GLES31.functional.blend_equation_adv"
#define VkglTestCase_017565_2 "anced.state_query.blend_equation_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017565, VkglTestCase_017565_1, VkglTestCase_017565_2);

#define VkglTestCase_017566_1 "dEQP-GLES31.functional.blend_equation_advan"
#define VkglTestCase_017566_2 "ced.state_query.blend_equation_getbooleani_v"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017566, VkglTestCase_017566_1, VkglTestCase_017566_2);

#define VkglTestCase_017567_1 "dEQP-GLES31.functional.blend_equation_advan"
#define VkglTestCase_017567_2 "ced.state_query.blend_equation_getintegeri_v"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017567, VkglTestCase_017567_1, VkglTestCase_017567_2);

#define VkglTestCase_017568_1 "dEQP-GLES31.functional.blend_equation_advanc"
#define VkglTestCase_017568_2 "ed.state_query.blend_equation_getinteger64i_v"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017568, VkglTestCase_017568_1, VkglTestCase_017568_2);
