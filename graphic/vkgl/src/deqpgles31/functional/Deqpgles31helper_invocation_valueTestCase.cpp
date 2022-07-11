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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005035_1 "dEQP-GLES31.functional.shaders.h"
#define VkglTestCase_005035_2 "elper_invocation.value.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005035, VkglTestCase_005035_1, VkglTestCase_005035_2);

#define VkglTestCase_005036_1 "dEQP-GLES31.functional.shaders"
#define VkglTestCase_005036_2 ".helper_invocation.value.lines"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005036, VkglTestCase_005036_1, VkglTestCase_005036_2);

#define VkglTestCase_005037_1 "dEQP-GLES31.functional.shaders.h"
#define VkglTestCase_005037_2 "elper_invocation.value.wide_lines"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005037, VkglTestCase_005037_1, VkglTestCase_005037_2);

#define VkglTestCase_005038_1 "dEQP-GLES31.functional.shaders"
#define VkglTestCase_005038_2 ".helper_invocation.value.points"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005038, VkglTestCase_005038_1, VkglTestCase_005038_2);

#define VkglTestCase_005039_1 "dEQP-GLES31.functional.shaders.he"
#define VkglTestCase_005039_2 "lper_invocation.value.wide_points"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005039, VkglTestCase_005039_1, VkglTestCase_005039_2);

#define VkglTestCase_005040_1 "dEQP-GLES31.functional.shaders.helper"
#define VkglTestCase_005040_2 "_invocation.value.triangles_4_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005040, VkglTestCase_005040_1, VkglTestCase_005040_2);

#define VkglTestCase_005041_1 "dEQP-GLES31.functional.shaders.help"
#define VkglTestCase_005041_2 "er_invocation.value.lines_4_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005041, VkglTestCase_005041_1, VkglTestCase_005041_2);

#define VkglTestCase_005042_1 "dEQP-GLES31.functional.shaders.helper"
#define VkglTestCase_005042_2 "_invocation.value.wide_lines_4_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005042, VkglTestCase_005042_1, VkglTestCase_005042_2);

#define VkglTestCase_005043_1 "dEQP-GLES31.functional.shaders.help"
#define VkglTestCase_005043_2 "er_invocation.value.points_4_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005043, VkglTestCase_005043_1, VkglTestCase_005043_2);

#define VkglTestCase_005044_1 "dEQP-GLES31.functional.shaders.helper_"
#define VkglTestCase_005044_2 "invocation.value.wide_points_4_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005044, VkglTestCase_005044_1, VkglTestCase_005044_2);

#define VkglTestCase_005045_1 "dEQP-GLES31.functional.shaders.helper"
#define VkglTestCase_005045_2 "_invocation.value.triangles_8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005045, VkglTestCase_005045_1, VkglTestCase_005045_2);

#define VkglTestCase_005046_1 "dEQP-GLES31.functional.shaders.help"
#define VkglTestCase_005046_2 "er_invocation.value.lines_8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005046, VkglTestCase_005046_1, VkglTestCase_005046_2);

#define VkglTestCase_005047_1 "dEQP-GLES31.functional.shaders.helper"
#define VkglTestCase_005047_2 "_invocation.value.wide_lines_8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005047, VkglTestCase_005047_1, VkglTestCase_005047_2);

#define VkglTestCase_005048_1 "dEQP-GLES31.functional.shaders.help"
#define VkglTestCase_005048_2 "er_invocation.value.points_8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005048, VkglTestCase_005048_1, VkglTestCase_005048_2);

#define VkglTestCase_005049_1 "dEQP-GLES31.functional.shaders.helper_"
#define VkglTestCase_005049_2 "invocation.value.wide_points_8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005049, VkglTestCase_005049_1, VkglTestCase_005049_2);

#define VkglTestCase_005050_1 "dEQP-GLES31.functional.shaders.helper_"
#define VkglTestCase_005050_2 "invocation.value.triangles_max_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005050, VkglTestCase_005050_1, VkglTestCase_005050_2);

#define VkglTestCase_005051_1 "dEQP-GLES31.functional.shaders.helpe"
#define VkglTestCase_005051_2 "r_invocation.value.lines_max_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005051, VkglTestCase_005051_1, VkglTestCase_005051_2);

#define VkglTestCase_005052_1 "dEQP-GLES31.functional.shaders.helper_"
#define VkglTestCase_005052_2 "invocation.value.wide_lines_max_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005052, VkglTestCase_005052_1, VkglTestCase_005052_2);

#define VkglTestCase_005053_1 "dEQP-GLES31.functional.shaders.helpe"
#define VkglTestCase_005053_2 "r_invocation.value.points_max_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005053, VkglTestCase_005053_1, VkglTestCase_005053_2);

#define VkglTestCase_005054_1 "dEQP-GLES31.functional.shaders.helper_i"
#define VkglTestCase_005054_2 "nvocation.value.wide_points_max_samples"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005054, VkglTestCase_005054_1, VkglTestCase_005054_2);
