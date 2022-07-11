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

#define VkglTestCase_024963_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024963_2 "map.2d.basic.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024963, VkglTestCase_024963_1, VkglTestCase_024963_2);

#define VkglTestCase_024964_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_024964_2 ".2d.basic.nearest_nearest_clamp_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024964, VkglTestCase_024964_1, VkglTestCase_024964_2);

#define VkglTestCase_024965_1 "dEQP-GLES3.functional.texture.mipmap.2d"
#define VkglTestCase_024965_2 ".basic.nearest_nearest_clamp_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024965, VkglTestCase_024965_1, VkglTestCase_024965_2);

#define VkglTestCase_024966_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_024966_2 "ap.2d.basic.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024966, VkglTestCase_024966_1, VkglTestCase_024966_2);

#define VkglTestCase_024967_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_024967_2 ".2d.basic.nearest_nearest_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024967, VkglTestCase_024967_1, VkglTestCase_024967_2);

#define VkglTestCase_024968_1 "dEQP-GLES3.functional.texture.mipmap.2d"
#define VkglTestCase_024968_2 ".basic.nearest_nearest_repeat_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024968, VkglTestCase_024968_1, VkglTestCase_024968_2);

#define VkglTestCase_024969_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_024969_2 "ap.2d.basic.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024969, VkglTestCase_024969_1, VkglTestCase_024969_2);

#define VkglTestCase_024970_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_024970_2 ".2d.basic.nearest_nearest_mirror_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024970, VkglTestCase_024970_1, VkglTestCase_024970_2);

#define VkglTestCase_024971_1 "dEQP-GLES3.functional.texture.mipmap.2d"
#define VkglTestCase_024971_2 ".basic.nearest_nearest_mirror_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024971, VkglTestCase_024971_1, VkglTestCase_024971_2);

#define VkglTestCase_024972_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024972_2 "map.2d.basic.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024972, VkglTestCase_024972_1, VkglTestCase_024972_2);

#define VkglTestCase_024973_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_024973_2 "p.2d.basic.linear_nearest_clamp_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024973, VkglTestCase_024973_1, VkglTestCase_024973_2);

#define VkglTestCase_024974_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_024974_2 "d.basic.linear_nearest_clamp_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024974, VkglTestCase_024974_1, VkglTestCase_024974_2);

#define VkglTestCase_024975_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024975_2 "map.2d.basic.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024975, VkglTestCase_024975_1, VkglTestCase_024975_2);

#define VkglTestCase_024976_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_024976_2 ".2d.basic.linear_nearest_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024976, VkglTestCase_024976_1, VkglTestCase_024976_2);

#define VkglTestCase_024977_1 "dEQP-GLES3.functional.texture.mipmap.2d"
#define VkglTestCase_024977_2 ".basic.linear_nearest_repeat_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024977, VkglTestCase_024977_1, VkglTestCase_024977_2);

#define VkglTestCase_024978_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024978_2 "map.2d.basic.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024978, VkglTestCase_024978_1, VkglTestCase_024978_2);

#define VkglTestCase_024979_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_024979_2 ".2d.basic.linear_nearest_mirror_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024979, VkglTestCase_024979_1, VkglTestCase_024979_2);

#define VkglTestCase_024980_1 "dEQP-GLES3.functional.texture.mipmap.2d"
#define VkglTestCase_024980_2 ".basic.linear_nearest_mirror_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024980, VkglTestCase_024980_1, VkglTestCase_024980_2);

#define VkglTestCase_024981_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024981_2 "map.2d.basic.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024981, VkglTestCase_024981_1, VkglTestCase_024981_2);

#define VkglTestCase_024982_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_024982_2 "p.2d.basic.nearest_linear_clamp_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024982, VkglTestCase_024982_1, VkglTestCase_024982_2);

#define VkglTestCase_024983_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_024983_2 "d.basic.nearest_linear_clamp_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024983, VkglTestCase_024983_1, VkglTestCase_024983_2);

#define VkglTestCase_024984_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024984_2 "map.2d.basic.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024984, VkglTestCase_024984_1, VkglTestCase_024984_2);

#define VkglTestCase_024985_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_024985_2 ".2d.basic.nearest_linear_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024985, VkglTestCase_024985_1, VkglTestCase_024985_2);

#define VkglTestCase_024986_1 "dEQP-GLES3.functional.texture.mipmap.2d"
#define VkglTestCase_024986_2 ".basic.nearest_linear_repeat_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024986, VkglTestCase_024986_1, VkglTestCase_024986_2);

#define VkglTestCase_024987_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024987_2 "map.2d.basic.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024987, VkglTestCase_024987_1, VkglTestCase_024987_2);

#define VkglTestCase_024988_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_024988_2 ".2d.basic.nearest_linear_mirror_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024988, VkglTestCase_024988_1, VkglTestCase_024988_2);

#define VkglTestCase_024989_1 "dEQP-GLES3.functional.texture.mipmap.2d"
#define VkglTestCase_024989_2 ".basic.nearest_linear_mirror_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024989, VkglTestCase_024989_1, VkglTestCase_024989_2);

#define VkglTestCase_024990_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_024990_2 "pmap.2d.basic.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024990, VkglTestCase_024990_1, VkglTestCase_024990_2);

#define VkglTestCase_024991_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_024991_2 "p.2d.basic.linear_linear_clamp_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024991, VkglTestCase_024991_1, VkglTestCase_024991_2);

#define VkglTestCase_024992_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_024992_2 "d.basic.linear_linear_clamp_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024992, VkglTestCase_024992_1, VkglTestCase_024992_2);

#define VkglTestCase_024993_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024993_2 "map.2d.basic.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024993, VkglTestCase_024993_1, VkglTestCase_024993_2);

#define VkglTestCase_024994_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_024994_2 "p.2d.basic.linear_linear_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024994, VkglTestCase_024994_1, VkglTestCase_024994_2);

#define VkglTestCase_024995_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_024995_2 "d.basic.linear_linear_repeat_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024995, VkglTestCase_024995_1, VkglTestCase_024995_2);

#define VkglTestCase_024996_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_024996_2 "map.2d.basic.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024996, VkglTestCase_024996_1, VkglTestCase_024996_2);

#define VkglTestCase_024997_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_024997_2 "p.2d.basic.linear_linear_mirror_npot"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024997, VkglTestCase_024997_1, VkglTestCase_024997_2);

#define VkglTestCase_024998_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_024998_2 "d.basic.linear_linear_mirror_non_square"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024998, VkglTestCase_024998_1, VkglTestCase_024998_2);
