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
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006690_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006690_2 "_compare.greaterThanEqual.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006690, VkglTestCase_006690_1, VkglTestCase_006690_2);

#define VkglTestCase_006691_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006691_2 "compare.greaterThanEqual.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006691, VkglTestCase_006691_1, VkglTestCase_006691_2);

#define VkglTestCase_006692_1 "dEQP-GLES2.functional.shaders.operator.int_c"
#define VkglTestCase_006692_2 "ompare.greaterThanEqual.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006692, VkglTestCase_006692_1, VkglTestCase_006692_2);

#define VkglTestCase_006693_1 "dEQP-GLES2.functional.shaders.operator.int_co"
#define VkglTestCase_006693_2 "mpare.greaterThanEqual.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006693, VkglTestCase_006693_1, VkglTestCase_006693_2);

#define VkglTestCase_006694_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006694_2 "compare.greaterThanEqual.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006694, VkglTestCase_006694_1, VkglTestCase_006694_2);

#define VkglTestCase_006695_1 "dEQP-GLES2.functional.shaders.operator.int_c"
#define VkglTestCase_006695_2 "ompare.greaterThanEqual.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006695, VkglTestCase_006695_1, VkglTestCase_006695_2);

#define VkglTestCase_006696_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006696_2 "_compare.greaterThanEqual.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006696, VkglTestCase_006696_1, VkglTestCase_006696_2);

#define VkglTestCase_006697_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006697_2 "compare.greaterThanEqual.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006697, VkglTestCase_006697_1, VkglTestCase_006697_2);

#define VkglTestCase_006698_1 "dEQP-GLES2.functional.shaders.operator.int_c"
#define VkglTestCase_006698_2 "ompare.greaterThanEqual.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006698, VkglTestCase_006698_1, VkglTestCase_006698_2);

#define VkglTestCase_006699_1 "dEQP-GLES2.functional.shaders.operator.int_co"
#define VkglTestCase_006699_2 "mpare.greaterThanEqual.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006699, VkglTestCase_006699_1, VkglTestCase_006699_2);

#define VkglTestCase_006700_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006700_2 "compare.greaterThanEqual.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006700, VkglTestCase_006700_1, VkglTestCase_006700_2);

#define VkglTestCase_006701_1 "dEQP-GLES2.functional.shaders.operator.int_c"
#define VkglTestCase_006701_2 "ompare.greaterThanEqual.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006701, VkglTestCase_006701_1, VkglTestCase_006701_2);

#define VkglTestCase_006702_1 "dEQP-GLES2.functional.shaders.operator.int"
#define VkglTestCase_006702_2 "_compare.greaterThanEqual.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006702, VkglTestCase_006702_1, VkglTestCase_006702_2);

#define VkglTestCase_006703_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006703_2 "compare.greaterThanEqual.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006703, VkglTestCase_006703_1, VkglTestCase_006703_2);

#define VkglTestCase_006704_1 "dEQP-GLES2.functional.shaders.operator.int_c"
#define VkglTestCase_006704_2 "ompare.greaterThanEqual.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006704, VkglTestCase_006704_1, VkglTestCase_006704_2);

#define VkglTestCase_006705_1 "dEQP-GLES2.functional.shaders.operator.int_co"
#define VkglTestCase_006705_2 "mpare.greaterThanEqual.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006705, VkglTestCase_006705_1, VkglTestCase_006705_2);

#define VkglTestCase_006706_1 "dEQP-GLES2.functional.shaders.operator.int_"
#define VkglTestCase_006706_2 "compare.greaterThanEqual.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006706, VkglTestCase_006706_1, VkglTestCase_006706_2);

#define VkglTestCase_006707_1 "dEQP-GLES2.functional.shaders.operator.int_c"
#define VkglTestCase_006707_2 "ompare.greaterThanEqual.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006707, VkglTestCase_006707_1, VkglTestCase_006707_2);
