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
#include "../ActsDeqpgles30024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023311_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023311_2 "tc_12x10.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023311, VkglTestCase_023311_1, VkglTestCase_023311_2);

#define VkglTestCase_023312_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023312_2 "tc_12x10.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023312, VkglTestCase_023312_1, VkglTestCase_023312_2);

#define VkglTestCase_023313_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023313_2 "c_12x10.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023313, VkglTestCase_023313_1, VkglTestCase_023313_2);

#define VkglTestCase_023314_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023314_2 "tc_12x10.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023314, VkglTestCase_023314_1, VkglTestCase_023314_2);

#define VkglTestCase_023315_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023315_2 "c_12x10.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023315, VkglTestCase_023315_1, VkglTestCase_023315_2);

#define VkglTestCase_023316_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023316_2 "tc_12x10.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023316, VkglTestCase_023316_1, VkglTestCase_023316_2);

#define VkglTestCase_023317_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023317_2 "c_12x10.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023317, VkglTestCase_023317_1, VkglTestCase_023317_2);

#define VkglTestCase_023318_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023318_2 "tc_12x10.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023318, VkglTestCase_023318_1, VkglTestCase_023318_2);

#define VkglTestCase_023319_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023319_2 "c_12x10.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023319, VkglTestCase_023319_1, VkglTestCase_023319_2);

#define VkglTestCase_023320_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023320_2 "c_12x10.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023320, VkglTestCase_023320_1, VkglTestCase_023320_2);

#define VkglTestCase_023321_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023321_2 "c_12x10.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023321, VkglTestCase_023321_1, VkglTestCase_023321_2);

#define VkglTestCase_023322_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023322_2 "c_12x10.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023322, VkglTestCase_023322_1, VkglTestCase_023322_2);

#define VkglTestCase_023323_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023323_2 "c_12x10.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023323, VkglTestCase_023323_1, VkglTestCase_023323_2);

#define VkglTestCase_023324_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023324_2 "tc_12x10.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023324, VkglTestCase_023324_1, VkglTestCase_023324_2);

#define VkglTestCase_023325_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023325_2 "c_12x10.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023325, VkglTestCase_023325_1, VkglTestCase_023325_2);

#define VkglTestCase_023326_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023326_2 "c_12x10.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023326, VkglTestCase_023326_1, VkglTestCase_023326_2);

#define VkglTestCase_023327_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023327_2 "c_12x10.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023327, VkglTestCase_023327_1, VkglTestCase_023327_2);

#define VkglTestCase_023328_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023328_2 "c_12x10.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023328, VkglTestCase_023328_1, VkglTestCase_023328_2);

#define VkglTestCase_023329_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023329_2 "_12x10.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023329, VkglTestCase_023329_1, VkglTestCase_023329_2);

#define VkglTestCase_023330_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023330_2 "_12x10.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023330, VkglTestCase_023330_1, VkglTestCase_023330_2);

#define VkglTestCase_023331_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023331_2 "12x10.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023331, VkglTestCase_023331_1, VkglTestCase_023331_2);

#define VkglTestCase_023332_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023332_2 "_12x10.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023332, VkglTestCase_023332_1, VkglTestCase_023332_2);

#define VkglTestCase_023333_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023333_2 "12x10.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023333, VkglTestCase_023333_1, VkglTestCase_023333_2);

#define VkglTestCase_023334_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023334_2 "_12x10.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023334, VkglTestCase_023334_1, VkglTestCase_023334_2);

#define VkglTestCase_023335_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023335_2 "12x10.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023335, VkglTestCase_023335_1, VkglTestCase_023335_2);

#define VkglTestCase_023336_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023336_2 "_12x10.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023336, VkglTestCase_023336_1, VkglTestCase_023336_2);

#define VkglTestCase_023337_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023337_2 "12x10.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023337, VkglTestCase_023337_1, VkglTestCase_023337_2);

#define VkglTestCase_023338_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023338_2 "12x10.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023338, VkglTestCase_023338_1, VkglTestCase_023338_2);

#define VkglTestCase_023339_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023339_2 "12x10.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023339, VkglTestCase_023339_1, VkglTestCase_023339_2);

#define VkglTestCase_023340_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023340_2 "12x10.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023340, VkglTestCase_023340_1, VkglTestCase_023340_2);

#define VkglTestCase_023341_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023341_2 "12x10.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023341, VkglTestCase_023341_1, VkglTestCase_023341_2);

#define VkglTestCase_023342_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023342_2 "_12x10.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023342, VkglTestCase_023342_1, VkglTestCase_023342_2);

#define VkglTestCase_023343_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023343_2 "12x10.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023343, VkglTestCase_023343_1, VkglTestCase_023343_2);

#define VkglTestCase_023344_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023344_2 "12x10.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023344, VkglTestCase_023344_1, VkglTestCase_023344_2);

#define VkglTestCase_023345_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023345_2 "12x10.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023345, VkglTestCase_023345_1, VkglTestCase_023345_2);

#define VkglTestCase_023346_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023346_2 "12x10.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023346, VkglTestCase_023346_1, VkglTestCase_023346_2);
