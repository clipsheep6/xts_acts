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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004397_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004397_2 "ays.unnamed_parameter.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004397, VkglTestCase_004397_1, VkglTestCase_004397_2);

#define VkglTestCase_004398_1 "dEQP-GLES3.functional.shaders.arra"
#define VkglTestCase_004398_2 "ys.unnamed_parameter.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004398, VkglTestCase_004398_1, VkglTestCase_004398_2);

#define VkglTestCase_004399_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004399_2 "rays.unnamed_parameter.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004399, VkglTestCase_004399_1, VkglTestCase_004399_2);

#define VkglTestCase_004400_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004400_2 "ays.unnamed_parameter.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004400, VkglTestCase_004400_1, VkglTestCase_004400_2);

#define VkglTestCase_004401_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004401_2 "ays.unnamed_parameter.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004401, VkglTestCase_004401_1, VkglTestCase_004401_2);

#define VkglTestCase_004402_1 "dEQP-GLES3.functional.shaders.arra"
#define VkglTestCase_004402_2 "ys.unnamed_parameter.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004402, VkglTestCase_004402_1, VkglTestCase_004402_2);

#define VkglTestCase_004403_1 "dEQP-GLES3.functional.shaders.arra"
#define VkglTestCase_004403_2 "ys.unnamed_parameter.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004403, VkglTestCase_004403_1, VkglTestCase_004403_2);

#define VkglTestCase_004404_1 "dEQP-GLES3.functional.shaders.array"
#define VkglTestCase_004404_2 "s.unnamed_parameter.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004404, VkglTestCase_004404_1, VkglTestCase_004404_2);

#define VkglTestCase_004405_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004405_2 ".unnamed_parameter.float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004405, VkglTestCase_004405_1, VkglTestCase_004405_2);

#define VkglTestCase_004406_1 "dEQP-GLES3.functional.shaders.arrays."
#define VkglTestCase_004406_2 "unnamed_parameter.float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004406, VkglTestCase_004406_1, VkglTestCase_004406_2);

#define VkglTestCase_004407_1 "dEQP-GLES3.functional.shaders.array"
#define VkglTestCase_004407_2 "s.unnamed_parameter.int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004407, VkglTestCase_004407_1, VkglTestCase_004407_2);

#define VkglTestCase_004408_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004408_2 ".unnamed_parameter.int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004408, VkglTestCase_004408_1, VkglTestCase_004408_2);

#define VkglTestCase_004409_1 "dEQP-GLES3.functional.shaders.array"
#define VkglTestCase_004409_2 "s.unnamed_parameter.bool_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004409, VkglTestCase_004409_1, VkglTestCase_004409_2);

#define VkglTestCase_004410_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004410_2 ".unnamed_parameter.bool_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004410, VkglTestCase_004410_1, VkglTestCase_004410_2);

#define VkglTestCase_004411_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004411_2 ".unnamed_parameter.float_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004411, VkglTestCase_004411_1, VkglTestCase_004411_2);

#define VkglTestCase_004412_1 "dEQP-GLES3.functional.shaders.arrays."
#define VkglTestCase_004412_2 "unnamed_parameter.float_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004412, VkglTestCase_004412_1, VkglTestCase_004412_2);

#define VkglTestCase_004413_1 "dEQP-GLES3.functional.shaders.array"
#define VkglTestCase_004413_2 "s.unnamed_parameter.int_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004413, VkglTestCase_004413_1, VkglTestCase_004413_2);

#define VkglTestCase_004414_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004414_2 ".unnamed_parameter.int_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004414, VkglTestCase_004414_1, VkglTestCase_004414_2);

#define VkglTestCase_004415_1 "dEQP-GLES3.functional.shaders.array"
#define VkglTestCase_004415_2 "s.unnamed_parameter.bool_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004415, VkglTestCase_004415_1, VkglTestCase_004415_2);

#define VkglTestCase_004416_1 "dEQP-GLES3.functional.shaders.arrays"
#define VkglTestCase_004416_2 ".unnamed_parameter.bool_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004416, VkglTestCase_004416_1, VkglTestCase_004416_2);
