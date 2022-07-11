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
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015870_1 "dEQP-GLES3.functional.shaders.matrix.de"
#define VkglTestCase_015870_2 "terminant.dynamic.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015870, VkglTestCase_015870_1, VkglTestCase_015870_2);

#define VkglTestCase_015871_1 "dEQP-GLES3.functional.shaders.matrix.det"
#define VkglTestCase_015871_2 "erminant.dynamic.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015871, VkglTestCase_015871_1, VkglTestCase_015871_2);

#define VkglTestCase_015872_1 "dEQP-GLES3.functional.shaders.matrix.dete"
#define VkglTestCase_015872_2 "rminant.dynamic.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015872, VkglTestCase_015872_1, VkglTestCase_015872_2);

#define VkglTestCase_015873_1 "dEQP-GLES3.functional.shaders.matrix.deter"
#define VkglTestCase_015873_2 "minant.dynamic.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015873, VkglTestCase_015873_1, VkglTestCase_015873_2);

#define VkglTestCase_015874_1 "dEQP-GLES3.functional.shaders.matrix.det"
#define VkglTestCase_015874_2 "erminant.dynamic.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015874, VkglTestCase_015874_1, VkglTestCase_015874_2);

#define VkglTestCase_015875_1 "dEQP-GLES3.functional.shaders.matrix.dete"
#define VkglTestCase_015875_2 "rminant.dynamic.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015875, VkglTestCase_015875_1, VkglTestCase_015875_2);

#define VkglTestCase_015876_1 "dEQP-GLES3.functional.shaders.matrix.de"
#define VkglTestCase_015876_2 "terminant.dynamic.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015876, VkglTestCase_015876_1, VkglTestCase_015876_2);

#define VkglTestCase_015877_1 "dEQP-GLES3.functional.shaders.matrix.det"
#define VkglTestCase_015877_2 "erminant.dynamic.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015877, VkglTestCase_015877_1, VkglTestCase_015877_2);

#define VkglTestCase_015878_1 "dEQP-GLES3.functional.shaders.matrix.dete"
#define VkglTestCase_015878_2 "rminant.dynamic.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015878, VkglTestCase_015878_1, VkglTestCase_015878_2);

#define VkglTestCase_015879_1 "dEQP-GLES3.functional.shaders.matrix.deter"
#define VkglTestCase_015879_2 "minant.dynamic.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015879, VkglTestCase_015879_1, VkglTestCase_015879_2);

#define VkglTestCase_015880_1 "dEQP-GLES3.functional.shaders.matrix.det"
#define VkglTestCase_015880_2 "erminant.dynamic.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015880, VkglTestCase_015880_1, VkglTestCase_015880_2);

#define VkglTestCase_015881_1 "dEQP-GLES3.functional.shaders.matrix.dete"
#define VkglTestCase_015881_2 "rminant.dynamic.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015881, VkglTestCase_015881_1, VkglTestCase_015881_2);

#define VkglTestCase_015882_1 "dEQP-GLES3.functional.shaders.matrix.de"
#define VkglTestCase_015882_2 "terminant.dynamic.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015882, VkglTestCase_015882_1, VkglTestCase_015882_2);

#define VkglTestCase_015883_1 "dEQP-GLES3.functional.shaders.matrix.det"
#define VkglTestCase_015883_2 "erminant.dynamic.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015883, VkglTestCase_015883_1, VkglTestCase_015883_2);

#define VkglTestCase_015884_1 "dEQP-GLES3.functional.shaders.matrix.dete"
#define VkglTestCase_015884_2 "rminant.dynamic.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015884, VkglTestCase_015884_1, VkglTestCase_015884_2);

#define VkglTestCase_015885_1 "dEQP-GLES3.functional.shaders.matrix.deter"
#define VkglTestCase_015885_2 "minant.dynamic.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015885, VkglTestCase_015885_1, VkglTestCase_015885_2);

#define VkglTestCase_015886_1 "dEQP-GLES3.functional.shaders.matrix.det"
#define VkglTestCase_015886_2 "erminant.dynamic.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015886, VkglTestCase_015886_1, VkglTestCase_015886_2);

#define VkglTestCase_015887_1 "dEQP-GLES3.functional.shaders.matrix.dete"
#define VkglTestCase_015887_2 "rminant.dynamic.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015887, VkglTestCase_015887_1, VkglTestCase_015887_2);
