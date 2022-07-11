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
#include "../ActsDeqpgles30025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024187_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_024187_2 "iltering.cube.sizes.8x8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024187, VkglTestCase_024187_1, VkglTestCase_024187_2);

#define VkglTestCase_024188_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_024188_2 "filtering.cube.sizes.8x8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024188, VkglTestCase_024188_1, VkglTestCase_024188_2);

#define VkglTestCase_024189_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024189_2 "g.cube.sizes.8x8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024189, VkglTestCase_024189_1, VkglTestCase_024189_2);

#define VkglTestCase_024190_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024190_2 "g.cube.sizes.8x8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024190, VkglTestCase_024190_1, VkglTestCase_024190_2);

#define VkglTestCase_024191_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024191_2 "g.cube.sizes.8x8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024191, VkglTestCase_024191_1, VkglTestCase_024191_2);

#define VkglTestCase_024192_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_024192_2 "ng.cube.sizes.8x8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024192, VkglTestCase_024192_1, VkglTestCase_024192_2);

#define VkglTestCase_024193_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024193_2 "ltering.cube.sizes.64x64_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024193, VkglTestCase_024193_1, VkglTestCase_024193_2);

#define VkglTestCase_024194_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_024194_2 "iltering.cube.sizes.64x64_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024194, VkglTestCase_024194_1, VkglTestCase_024194_2);

#define VkglTestCase_024195_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024195_2 ".cube.sizes.64x64_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024195, VkglTestCase_024195_1, VkglTestCase_024195_2);

#define VkglTestCase_024196_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024196_2 ".cube.sizes.64x64_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024196, VkglTestCase_024196_1, VkglTestCase_024196_2);

#define VkglTestCase_024197_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024197_2 ".cube.sizes.64x64_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024197, VkglTestCase_024197_1, VkglTestCase_024197_2);

#define VkglTestCase_024198_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024198_2 "g.cube.sizes.64x64_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024198, VkglTestCase_024198_1, VkglTestCase_024198_2);

#define VkglTestCase_024199_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024199_2 "tering.cube.sizes.128x128_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024199, VkglTestCase_024199_1, VkglTestCase_024199_2);

#define VkglTestCase_024200_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024200_2 "ltering.cube.sizes.128x128_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024200, VkglTestCase_024200_1, VkglTestCase_024200_2);

#define VkglTestCase_024201_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024201_2 "cube.sizes.128x128_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024201, VkglTestCase_024201_1, VkglTestCase_024201_2);

#define VkglTestCase_024202_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024202_2 "cube.sizes.128x128_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024202, VkglTestCase_024202_1, VkglTestCase_024202_2);

#define VkglTestCase_024203_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024203_2 "cube.sizes.128x128_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024203, VkglTestCase_024203_1, VkglTestCase_024203_2);

#define VkglTestCase_024204_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024204_2 ".cube.sizes.128x128_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024204, VkglTestCase_024204_1, VkglTestCase_024204_2);

#define VkglTestCase_024205_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_024205_2 "iltering.cube.sizes.7x7_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024205, VkglTestCase_024205_1, VkglTestCase_024205_2);

#define VkglTestCase_024206_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_024206_2 "filtering.cube.sizes.7x7_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024206, VkglTestCase_024206_1, VkglTestCase_024206_2);

#define VkglTestCase_024207_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024207_2 "g.cube.sizes.7x7_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024207, VkglTestCase_024207_1, VkglTestCase_024207_2);

#define VkglTestCase_024208_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024208_2 "g.cube.sizes.7x7_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024208, VkglTestCase_024208_1, VkglTestCase_024208_2);

#define VkglTestCase_024209_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024209_2 "g.cube.sizes.7x7_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024209, VkglTestCase_024209_1, VkglTestCase_024209_2);

#define VkglTestCase_024210_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_024210_2 "ng.cube.sizes.7x7_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024210, VkglTestCase_024210_1, VkglTestCase_024210_2);

#define VkglTestCase_024211_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_024211_2 "ltering.cube.sizes.63x63_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024211, VkglTestCase_024211_1, VkglTestCase_024211_2);

#define VkglTestCase_024212_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_024212_2 "iltering.cube.sizes.63x63_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024212, VkglTestCase_024212_1, VkglTestCase_024212_2);

#define VkglTestCase_024213_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024213_2 ".cube.sizes.63x63_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024213, VkglTestCase_024213_1, VkglTestCase_024213_2);

#define VkglTestCase_024214_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024214_2 ".cube.sizes.63x63_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024214, VkglTestCase_024214_1, VkglTestCase_024214_2);

#define VkglTestCase_024215_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_024215_2 ".cube.sizes.63x63_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024215, VkglTestCase_024215_1, VkglTestCase_024215_2);

#define VkglTestCase_024216_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024216_2 "g.cube.sizes.63x63_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024216, VkglTestCase_024216_1, VkglTestCase_024216_2);
