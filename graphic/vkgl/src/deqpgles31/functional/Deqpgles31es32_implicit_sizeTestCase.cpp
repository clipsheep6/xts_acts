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

#define VkglTestCase_004282_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004282_2 "arrays.es32.implicit_size.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004282, VkglTestCase_004282_1, VkglTestCase_004282_2);

#define VkglTestCase_004283_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004283_2 "rrays.es32.implicit_size.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004283, VkglTestCase_004283_1, VkglTestCase_004283_2);

#define VkglTestCase_004284_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_004284_2 "_arrays.es32.implicit_size.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004284, VkglTestCase_004284_1, VkglTestCase_004284_2);

#define VkglTestCase_004285_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004285_2 "arrays.es32.implicit_size.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004285, VkglTestCase_004285_1, VkglTestCase_004285_2);

#define VkglTestCase_004286_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004286_2 "rrays.es32.implicit_size.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004286, VkglTestCase_004286_1, VkglTestCase_004286_2);

#define VkglTestCase_004287_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004287_2 "rays.es32.implicit_size.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004287, VkglTestCase_004287_1, VkglTestCase_004287_2);

#define VkglTestCase_004288_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004288_2 "rays.es32.implicit_size.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004288, VkglTestCase_004288_1, VkglTestCase_004288_2);

#define VkglTestCase_004289_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004289_2 "ays.es32.implicit_size.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004289, VkglTestCase_004289_1, VkglTestCase_004289_2);

#define VkglTestCase_004290_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004290_2 "arrays.es32.implicit_size.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004290, VkglTestCase_004290_1, VkglTestCase_004290_2);

#define VkglTestCase_004291_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004291_2 "rrays.es32.implicit_size.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004291, VkglTestCase_004291_1, VkglTestCase_004291_2);

#define VkglTestCase_004292_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004292_2 "rrays.es32.implicit_size.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004292, VkglTestCase_004292_1, VkglTestCase_004292_2);

#define VkglTestCase_004293_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004293_2 "rays.es32.implicit_size.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004293, VkglTestCase_004293_1, VkglTestCase_004293_2);

#define VkglTestCase_004294_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004294_2 "arrays.es32.implicit_size.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004294, VkglTestCase_004294_1, VkglTestCase_004294_2);

#define VkglTestCase_004295_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004295_2 "rrays.es32.implicit_size.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004295, VkglTestCase_004295_1, VkglTestCase_004295_2);

#define VkglTestCase_004296_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004296_2 "arrays.es32.implicit_size.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004296, VkglTestCase_004296_1, VkglTestCase_004296_2);

#define VkglTestCase_004297_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004297_2 "rrays.es32.implicit_size.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004297, VkglTestCase_004297_1, VkglTestCase_004297_2);

#define VkglTestCase_004298_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004298_2 "rrays.es32.implicit_size.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004298, VkglTestCase_004298_1, VkglTestCase_004298_2);

#define VkglTestCase_004299_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004299_2 "rays.es32.implicit_size.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004299, VkglTestCase_004299_1, VkglTestCase_004299_2);

#define VkglTestCase_004300_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004300_2 "arrays.es32.implicit_size.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004300, VkglTestCase_004300_1, VkglTestCase_004300_2);

#define VkglTestCase_004301_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004301_2 "rrays.es32.implicit_size.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004301, VkglTestCase_004301_1, VkglTestCase_004301_2);
