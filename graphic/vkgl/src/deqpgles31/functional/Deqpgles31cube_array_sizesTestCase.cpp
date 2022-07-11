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
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012351_1 "dEQP-GLES31.functional.texture.filt"
#define VkglTestCase_012351_2 "ering.cube_array.sizes.8x8x6_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012351, VkglTestCase_012351_1, VkglTestCase_012351_2);

#define VkglTestCase_012352_1 "dEQP-GLES31.functional.texture.filt"
#define VkglTestCase_012352_2 "ering.cube_array.sizes.8x8x6_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012352, VkglTestCase_012352_1, VkglTestCase_012352_2);

#define VkglTestCase_012353_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012353_2 "be_array.sizes.8x8x6_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012353, VkglTestCase_012353_1, VkglTestCase_012353_2);

#define VkglTestCase_012354_1 "dEQP-GLES31.functional.texture.filtering.c"
#define VkglTestCase_012354_2 "ube_array.sizes.8x8x6_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012354, VkglTestCase_012354_1, VkglTestCase_012354_2);

#define VkglTestCase_012355_1 "dEQP-GLES31.functional.texture.filtering.c"
#define VkglTestCase_012355_2 "ube_array.sizes.8x8x6_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012355, VkglTestCase_012355_1, VkglTestCase_012355_2);

#define VkglTestCase_012356_1 "dEQP-GLES31.functional.texture.filtering.c"
#define VkglTestCase_012356_2 "ube_array.sizes.8x8x6_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012356, VkglTestCase_012356_1, VkglTestCase_012356_2);

#define VkglTestCase_012357_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012357_2 "ing.cube_array.sizes.64x64x12_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012357, VkglTestCase_012357_1, VkglTestCase_012357_2);

#define VkglTestCase_012358_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012358_2 "ring.cube_array.sizes.64x64x12_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012358, VkglTestCase_012358_1, VkglTestCase_012358_2);

#define VkglTestCase_012359_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012359_2 "e_array.sizes.64x64x12_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012359, VkglTestCase_012359_1, VkglTestCase_012359_2);

#define VkglTestCase_012360_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012360_2 "e_array.sizes.64x64x12_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012360, VkglTestCase_012360_1, VkglTestCase_012360_2);

#define VkglTestCase_012361_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012361_2 "e_array.sizes.64x64x12_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012361, VkglTestCase_012361_1, VkglTestCase_012361_2);

#define VkglTestCase_012362_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012362_2 "be_array.sizes.64x64x12_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012362, VkglTestCase_012362_1, VkglTestCase_012362_2);

#define VkglTestCase_012363_1 "dEQP-GLES31.functional.texture.filteri"
#define VkglTestCase_012363_2 "ng.cube_array.sizes.128x128x12_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012363, VkglTestCase_012363_1, VkglTestCase_012363_2);

#define VkglTestCase_012364_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012364_2 "ing.cube_array.sizes.128x128x12_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012364, VkglTestCase_012364_1, VkglTestCase_012364_2);

#define VkglTestCase_012365_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012365_2 "_array.sizes.128x128x12_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012365, VkglTestCase_012365_1, VkglTestCase_012365_2);

#define VkglTestCase_012366_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012366_2 "_array.sizes.128x128x12_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012366, VkglTestCase_012366_1, VkglTestCase_012366_2);

#define VkglTestCase_012367_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012367_2 "_array.sizes.128x128x12_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012367, VkglTestCase_012367_1, VkglTestCase_012367_2);

#define VkglTestCase_012368_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012368_2 "e_array.sizes.128x128x12_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012368, VkglTestCase_012368_1, VkglTestCase_012368_2);

#define VkglTestCase_012369_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012369_2 "ring.cube_array.sizes.7x7x12_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012369, VkglTestCase_012369_1, VkglTestCase_012369_2);

#define VkglTestCase_012370_1 "dEQP-GLES31.functional.texture.filt"
#define VkglTestCase_012370_2 "ering.cube_array.sizes.7x7x12_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012370, VkglTestCase_012370_1, VkglTestCase_012370_2);

#define VkglTestCase_012371_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012371_2 "be_array.sizes.7x7x12_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012371, VkglTestCase_012371_1, VkglTestCase_012371_2);

#define VkglTestCase_012372_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012372_2 "be_array.sizes.7x7x12_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012372, VkglTestCase_012372_1, VkglTestCase_012372_2);

#define VkglTestCase_012373_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012373_2 "be_array.sizes.7x7x12_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012373, VkglTestCase_012373_1, VkglTestCase_012373_2);

#define VkglTestCase_012374_1 "dEQP-GLES31.functional.texture.filtering.c"
#define VkglTestCase_012374_2 "ube_array.sizes.7x7x12_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012374, VkglTestCase_012374_1, VkglTestCase_012374_2);

#define VkglTestCase_012375_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012375_2 "ing.cube_array.sizes.63x63x18_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012375, VkglTestCase_012375_1, VkglTestCase_012375_2);

#define VkglTestCase_012376_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012376_2 "ring.cube_array.sizes.63x63x18_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012376, VkglTestCase_012376_1, VkglTestCase_012376_2);

#define VkglTestCase_012377_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012377_2 "e_array.sizes.63x63x18_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012377, VkglTestCase_012377_1, VkglTestCase_012377_2);

#define VkglTestCase_012378_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012378_2 "e_array.sizes.63x63x18_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012378, VkglTestCase_012378_1, VkglTestCase_012378_2);

#define VkglTestCase_012379_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012379_2 "e_array.sizes.63x63x18_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012379, VkglTestCase_012379_1, VkglTestCase_012379_2);

#define VkglTestCase_012380_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012380_2 "be_array.sizes.63x63x18_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012380, VkglTestCase_012380_1, VkglTestCase_012380_2);
