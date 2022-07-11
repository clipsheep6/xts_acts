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

#define VkglTestCase_024399_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024399_2 "ering.2d_array.sizes.4x8x8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024399, VkglTestCase_024399_1, VkglTestCase_024399_2);

#define VkglTestCase_024400_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024400_2 "tering.2d_array.sizes.4x8x8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024400, VkglTestCase_024400_1, VkglTestCase_024400_2);

#define VkglTestCase_024401_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024401_2 "d_array.sizes.4x8x8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024401, VkglTestCase_024401_1, VkglTestCase_024401_2);

#define VkglTestCase_024402_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024402_2 "d_array.sizes.4x8x8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024402, VkglTestCase_024402_1, VkglTestCase_024402_2);

#define VkglTestCase_024403_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024403_2 "d_array.sizes.4x8x8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024403, VkglTestCase_024403_1, VkglTestCase_024403_2);

#define VkglTestCase_024404_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024404_2 "2d_array.sizes.4x8x8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024404, VkglTestCase_024404_1, VkglTestCase_024404_2);

#define VkglTestCase_024405_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024405_2 "ring.2d_array.sizes.32x64x16_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024405, VkglTestCase_024405_1, VkglTestCase_024405_2);

#define VkglTestCase_024406_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024406_2 "ring.2d_array.sizes.32x64x16_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024406, VkglTestCase_024406_1, VkglTestCase_024406_2);

#define VkglTestCase_024407_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024407_2 "array.sizes.32x64x16_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024407, VkglTestCase_024407_1, VkglTestCase_024407_2);

#define VkglTestCase_024408_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024408_2 "_array.sizes.32x64x16_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024408, VkglTestCase_024408_1, VkglTestCase_024408_2);

#define VkglTestCase_024409_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024409_2 "_array.sizes.32x64x16_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024409, VkglTestCase_024409_1, VkglTestCase_024409_2);

#define VkglTestCase_024410_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024410_2 "_array.sizes.32x64x16_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024410, VkglTestCase_024410_1, VkglTestCase_024410_2);

#define VkglTestCase_024411_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_024411_2 "ing.2d_array.sizes.128x32x64_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024411, VkglTestCase_024411_1, VkglTestCase_024411_2);

#define VkglTestCase_024412_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024412_2 "ring.2d_array.sizes.128x32x64_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024412, VkglTestCase_024412_1, VkglTestCase_024412_2);

#define VkglTestCase_024413_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024413_2 "array.sizes.128x32x64_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024413, VkglTestCase_024413_1, VkglTestCase_024413_2);

#define VkglTestCase_024414_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024414_2 "array.sizes.128x32x64_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024414, VkglTestCase_024414_1, VkglTestCase_024414_2);

#define VkglTestCase_024415_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024415_2 "array.sizes.128x32x64_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024415, VkglTestCase_024415_1, VkglTestCase_024415_2);

#define VkglTestCase_024416_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024416_2 "_array.sizes.128x32x64_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024416, VkglTestCase_024416_1, VkglTestCase_024416_2);

#define VkglTestCase_024417_1 "dEQP-GLES3.functional.texture.filt"
#define VkglTestCase_024417_2 "ering.2d_array.sizes.3x7x5_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024417, VkglTestCase_024417_1, VkglTestCase_024417_2);

#define VkglTestCase_024418_1 "dEQP-GLES3.functional.texture.fil"
#define VkglTestCase_024418_2 "tering.2d_array.sizes.3x7x5_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024418, VkglTestCase_024418_1, VkglTestCase_024418_2);

#define VkglTestCase_024419_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024419_2 "d_array.sizes.3x7x5_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024419, VkglTestCase_024419_1, VkglTestCase_024419_2);

#define VkglTestCase_024420_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024420_2 "d_array.sizes.3x7x5_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024420, VkglTestCase_024420_1, VkglTestCase_024420_2);

#define VkglTestCase_024421_1 "dEQP-GLES3.functional.texture.filtering.2"
#define VkglTestCase_024421_2 "d_array.sizes.3x7x5_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024421, VkglTestCase_024421_1, VkglTestCase_024421_2);

#define VkglTestCase_024422_1 "dEQP-GLES3.functional.texture.filtering."
#define VkglTestCase_024422_2 "2d_array.sizes.3x7x5_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024422, VkglTestCase_024422_1, VkglTestCase_024422_2);

#define VkglTestCase_024423_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024423_2 "ring.2d_array.sizes.63x63x63_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024423, VkglTestCase_024423_1, VkglTestCase_024423_2);

#define VkglTestCase_024424_1 "dEQP-GLES3.functional.texture.filte"
#define VkglTestCase_024424_2 "ring.2d_array.sizes.63x63x63_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024424, VkglTestCase_024424_1, VkglTestCase_024424_2);

#define VkglTestCase_024425_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024425_2 "array.sizes.63x63x63_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024425, VkglTestCase_024425_1, VkglTestCase_024425_2);

#define VkglTestCase_024426_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024426_2 "_array.sizes.63x63x63_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024426, VkglTestCase_024426_1, VkglTestCase_024426_2);

#define VkglTestCase_024427_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024427_2 "_array.sizes.63x63x63_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024427, VkglTestCase_024427_1, VkglTestCase_024427_2);

#define VkglTestCase_024428_1 "dEQP-GLES3.functional.texture.filtering.2d"
#define VkglTestCase_024428_2 "_array.sizes.63x63x63_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024428, VkglTestCase_024428_1, VkglTestCase_024428_2);
