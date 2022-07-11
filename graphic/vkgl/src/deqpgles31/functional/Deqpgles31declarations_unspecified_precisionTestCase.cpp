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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004414_1 "dEQP-GLES31.functional.shaders.linkage.es31.declarations"
#define VkglTestCase_004414_2 ".unspecified_precision.float_partially_specified_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004414, VkglTestCase_004414_1, VkglTestCase_004414_2);

#define VkglTestCase_004415_1 "dEQP-GLES31.functional.shaders.linkage.es31.de"
#define VkglTestCase_004415_2 "clarations.unspecified_precision.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004415, VkglTestCase_004415_1, VkglTestCase_004415_2);

#define VkglTestCase_004416_1 "dEQP-GLES31.functional.shaders.linkage.es31.de"
#define VkglTestCase_004416_2 "clarations.unspecified_precision.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004416, VkglTestCase_004416_1, VkglTestCase_004416_2);

#define VkglTestCase_004417_1 "dEQP-GLES31.functional.shaders.linkage.es31.de"
#define VkglTestCase_004417_2 "clarations.unspecified_precision.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004417, VkglTestCase_004417_1, VkglTestCase_004417_2);

#define VkglTestCase_004418_1 "dEQP-GLES31.functional.shaders.linkage.es31.de"
#define VkglTestCase_004418_2 "clarations.unspecified_precision.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004418, VkglTestCase_004418_1, VkglTestCase_004418_2);

#define VkglTestCase_004419_1 "dEQP-GLES31.functional.shaders.linkage.es31.dec"
#define VkglTestCase_004419_2 "larations.unspecified_precision.sampler3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004419, VkglTestCase_004419_1, VkglTestCase_004419_2);

#define VkglTestCase_004420_1 "dEQP-GLES31.functional.shaders.linkage.es31.decl"
#define VkglTestCase_004420_2 "arations.unspecified_precision.sampler3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004420, VkglTestCase_004420_1, VkglTestCase_004420_2);

#define VkglTestCase_004421_1 "dEQP-GLES31.functional.shaders.linkage.es31.declara"
#define VkglTestCase_004421_2 "tions.unspecified_precision.samplerCubeShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004421, VkglTestCase_004421_1, VkglTestCase_004421_2);

#define VkglTestCase_004422_1 "dEQP-GLES31.functional.shaders.linkage.es31.declarat"
#define VkglTestCase_004422_2 "ions.unspecified_precision.samplerCubeShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004422, VkglTestCase_004422_1, VkglTestCase_004422_2);

#define VkglTestCase_004423_1 "dEQP-GLES31.functional.shaders.linkage.es31.declar"
#define VkglTestCase_004423_2 "ations.unspecified_precision.sampler2DShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004423, VkglTestCase_004423_1, VkglTestCase_004423_2);

#define VkglTestCase_004424_1 "dEQP-GLES31.functional.shaders.linkage.es31.declara"
#define VkglTestCase_004424_2 "tions.unspecified_precision.sampler2DShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004424, VkglTestCase_004424_1, VkglTestCase_004424_2);

#define VkglTestCase_004425_1 "dEQP-GLES31.functional.shaders.linkage.es31.declar"
#define VkglTestCase_004425_2 "ations.unspecified_precision.sampler2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004425, VkglTestCase_004425_1, VkglTestCase_004425_2);

#define VkglTestCase_004426_1 "dEQP-GLES31.functional.shaders.linkage.es31.declara"
#define VkglTestCase_004426_2 "tions.unspecified_precision.sampler2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004426, VkglTestCase_004426_1, VkglTestCase_004426_2);

#define VkglTestCase_004427_1 "dEQP-GLES31.functional.shaders.linkage.es31.declarati"
#define VkglTestCase_004427_2 "ons.unspecified_precision.sampler2DArrayShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004427, VkglTestCase_004427_1, VkglTestCase_004427_2);

#define VkglTestCase_004428_1 "dEQP-GLES31.functional.shaders.linkage.es31.declaratio"
#define VkglTestCase_004428_2 "ns.unspecified_precision.sampler2DArrayShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004428, VkglTestCase_004428_1, VkglTestCase_004428_2);

#define VkglTestCase_004429_1 "dEQP-GLES31.functional.shaders.linkage.es31.decl"
#define VkglTestCase_004429_2 "arations.unspecified_precision.isampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004429, VkglTestCase_004429_1, VkglTestCase_004429_2);

#define VkglTestCase_004430_1 "dEQP-GLES31.functional.shaders.linkage.es31.decla"
#define VkglTestCase_004430_2 "rations.unspecified_precision.isampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004430, VkglTestCase_004430_1, VkglTestCase_004430_2);

#define VkglTestCase_004431_1 "dEQP-GLES31.functional.shaders.linkage.es31.decl"
#define VkglTestCase_004431_2 "arations.unspecified_precision.isampler3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004431, VkglTestCase_004431_1, VkglTestCase_004431_2);

#define VkglTestCase_004432_1 "dEQP-GLES31.functional.shaders.linkage.es31.decla"
#define VkglTestCase_004432_2 "rations.unspecified_precision.isampler3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004432, VkglTestCase_004432_1, VkglTestCase_004432_2);

#define VkglTestCase_004433_1 "dEQP-GLES31.functional.shaders.linkage.es31.decla"
#define VkglTestCase_004433_2 "rations.unspecified_precision.isamplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004433, VkglTestCase_004433_1, VkglTestCase_004433_2);

#define VkglTestCase_004434_1 "dEQP-GLES31.functional.shaders.linkage.es31.declar"
#define VkglTestCase_004434_2 "ations.unspecified_precision.isamplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004434, VkglTestCase_004434_1, VkglTestCase_004434_2);

#define VkglTestCase_004435_1 "dEQP-GLES31.functional.shaders.linkage.es31.declar"
#define VkglTestCase_004435_2 "ations.unspecified_precision.isampler2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004435, VkglTestCase_004435_1, VkglTestCase_004435_2);

#define VkglTestCase_004436_1 "dEQP-GLES31.functional.shaders.linkage.es31.declara"
#define VkglTestCase_004436_2 "tions.unspecified_precision.isampler2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004436, VkglTestCase_004436_1, VkglTestCase_004436_2);

#define VkglTestCase_004437_1 "dEQP-GLES31.functional.shaders.linkage.es31.decl"
#define VkglTestCase_004437_2 "arations.unspecified_precision.usampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004437, VkglTestCase_004437_1, VkglTestCase_004437_2);

#define VkglTestCase_004438_1 "dEQP-GLES31.functional.shaders.linkage.es31.decla"
#define VkglTestCase_004438_2 "rations.unspecified_precision.usampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004438, VkglTestCase_004438_1, VkglTestCase_004438_2);

#define VkglTestCase_004439_1 "dEQP-GLES31.functional.shaders.linkage.es31.decl"
#define VkglTestCase_004439_2 "arations.unspecified_precision.usampler3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004439, VkglTestCase_004439_1, VkglTestCase_004439_2);

#define VkglTestCase_004440_1 "dEQP-GLES31.functional.shaders.linkage.es31.decla"
#define VkglTestCase_004440_2 "rations.unspecified_precision.usampler3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004440, VkglTestCase_004440_1, VkglTestCase_004440_2);

#define VkglTestCase_004441_1 "dEQP-GLES31.functional.shaders.linkage.es31.decla"
#define VkglTestCase_004441_2 "rations.unspecified_precision.usamplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004441, VkglTestCase_004441_1, VkglTestCase_004441_2);

#define VkglTestCase_004442_1 "dEQP-GLES31.functional.shaders.linkage.es31.declar"
#define VkglTestCase_004442_2 "ations.unspecified_precision.usamplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004442, VkglTestCase_004442_1, VkglTestCase_004442_2);

#define VkglTestCase_004443_1 "dEQP-GLES31.functional.shaders.linkage.es31.declar"
#define VkglTestCase_004443_2 "ations.unspecified_precision.usampler2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004443, VkglTestCase_004443_1, VkglTestCase_004443_2);

#define VkglTestCase_004444_1 "dEQP-GLES31.functional.shaders.linkage.es31.declara"
#define VkglTestCase_004444_2 "tions.unspecified_precision.usampler2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004444, VkglTestCase_004444_1, VkglTestCase_004444_2);
