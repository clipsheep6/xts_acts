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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010956_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010956_2 ".cube.filtering.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010956, VkglTestCase_010956_1, VkglTestCase_010956_2);

#define VkglTestCase_010957_1 "dEQP-GLES2.functional.texture.vertex."
#define VkglTestCase_010957_2 "cube.filtering.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010957, VkglTestCase_010957_1, VkglTestCase_010957_2);

#define VkglTestCase_010958_1 "dEQP-GLES2.functional.texture.vertex."
#define VkglTestCase_010958_2 "cube.filtering.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010958, VkglTestCase_010958_1, VkglTestCase_010958_2);

#define VkglTestCase_010959_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010959_2 ".cube.filtering.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010959, VkglTestCase_010959_1, VkglTestCase_010959_2);

#define VkglTestCase_010960_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010960_2 ".cube.filtering.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010960, VkglTestCase_010960_1, VkglTestCase_010960_2);

#define VkglTestCase_010961_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010961_2 ".cube.filtering.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010961, VkglTestCase_010961_1, VkglTestCase_010961_2);

#define VkglTestCase_010962_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010962_2 ".cube.filtering.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010962, VkglTestCase_010962_1, VkglTestCase_010962_2);

#define VkglTestCase_010963_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010963_2 ".cube.filtering.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010963, VkglTestCase_010963_1, VkglTestCase_010963_2);

#define VkglTestCase_010964_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010964_2 ".cube.filtering.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010964, VkglTestCase_010964_1, VkglTestCase_010964_2);

#define VkglTestCase_010965_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010965_2 "x.cube.filtering.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010965, VkglTestCase_010965_1, VkglTestCase_010965_2);

#define VkglTestCase_010966_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010966_2 ".cube.filtering.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010966, VkglTestCase_010966_1, VkglTestCase_010966_2);

#define VkglTestCase_010967_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010967_2 ".cube.filtering.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010967, VkglTestCase_010967_1, VkglTestCase_010967_2);

#define VkglTestCase_010968_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010968_2 "ltering.nearest_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010968, VkglTestCase_010968_1, VkglTestCase_010968_2);

#define VkglTestCase_010969_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010969_2 "ltering.nearest_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010969, VkglTestCase_010969_1, VkglTestCase_010969_2);

#define VkglTestCase_010970_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010970_2 "ltering.nearest_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010970, VkglTestCase_010970_1, VkglTestCase_010970_2);

#define VkglTestCase_010971_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010971_2 "iltering.nearest_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010971, VkglTestCase_010971_1, VkglTestCase_010971_2);

#define VkglTestCase_010972_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010972_2 "ltering.nearest_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010972, VkglTestCase_010972_1, VkglTestCase_010972_2);

#define VkglTestCase_010973_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010973_2 "ltering.nearest_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010973, VkglTestCase_010973_1, VkglTestCase_010973_2);

#define VkglTestCase_010974_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010974_2 "iltering.linear_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010974, VkglTestCase_010974_1, VkglTestCase_010974_2);

#define VkglTestCase_010975_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010975_2 "ltering.linear_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010975, VkglTestCase_010975_1, VkglTestCase_010975_2);

#define VkglTestCase_010976_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010976_2 "ltering.linear_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010976, VkglTestCase_010976_1, VkglTestCase_010976_2);

#define VkglTestCase_010977_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010977_2 "iltering.linear_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010977, VkglTestCase_010977_1, VkglTestCase_010977_2);

#define VkglTestCase_010978_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010978_2 "iltering.linear_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010978, VkglTestCase_010978_1, VkglTestCase_010978_2);

#define VkglTestCase_010979_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010979_2 "iltering.linear_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010979, VkglTestCase_010979_1, VkglTestCase_010979_2);

#define VkglTestCase_010980_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010980_2 "iltering.nearest_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010980, VkglTestCase_010980_1, VkglTestCase_010980_2);

#define VkglTestCase_010981_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010981_2 "ltering.nearest_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010981, VkglTestCase_010981_1, VkglTestCase_010981_2);

#define VkglTestCase_010982_1 "dEQP-GLES2.functional.texture.vertex.cube.fi"
#define VkglTestCase_010982_2 "ltering.nearest_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010982, VkglTestCase_010982_1, VkglTestCase_010982_2);

#define VkglTestCase_010983_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010983_2 "iltering.nearest_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010983, VkglTestCase_010983_1, VkglTestCase_010983_2);

#define VkglTestCase_010984_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010984_2 "iltering.nearest_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010984, VkglTestCase_010984_1, VkglTestCase_010984_2);

#define VkglTestCase_010985_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010985_2 "iltering.nearest_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010985, VkglTestCase_010985_1, VkglTestCase_010985_2);

#define VkglTestCase_010986_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010986_2 "iltering.linear_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010986, VkglTestCase_010986_1, VkglTestCase_010986_2);

#define VkglTestCase_010987_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010987_2 "iltering.linear_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010987, VkglTestCase_010987_1, VkglTestCase_010987_2);

#define VkglTestCase_010988_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010988_2 "iltering.linear_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010988, VkglTestCase_010988_1, VkglTestCase_010988_2);

#define VkglTestCase_010989_1 "dEQP-GLES2.functional.texture.vertex.cube."
#define VkglTestCase_010989_2 "filtering.linear_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010989, VkglTestCase_010989_1, VkglTestCase_010989_2);

#define VkglTestCase_010990_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010990_2 "iltering.linear_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010990, VkglTestCase_010990_1, VkglTestCase_010990_2);

#define VkglTestCase_010991_1 "dEQP-GLES2.functional.texture.vertex.cube.f"
#define VkglTestCase_010991_2 "iltering.linear_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010991, VkglTestCase_010991_1, VkglTestCase_010991_2);
