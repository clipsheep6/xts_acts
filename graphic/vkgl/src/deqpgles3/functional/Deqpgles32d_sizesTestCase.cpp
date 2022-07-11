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

#define VkglTestCase_023965_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_023965_2 "filtering.2d.sizes.4x8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023965, VkglTestCase_023965_1, VkglTestCase_023965_2);

#define VkglTestCase_023966_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_023966_2 ".filtering.2d.sizes.4x8_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023966, VkglTestCase_023966_1, VkglTestCase_023966_2);

#define VkglTestCase_023967_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_023967_2 "ng.2d.sizes.4x8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023967, VkglTestCase_023967_1, VkglTestCase_023967_2);

#define VkglTestCase_023968_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_023968_2 "ng.2d.sizes.4x8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023968, VkglTestCase_023968_1, VkglTestCase_023968_2);

#define VkglTestCase_023969_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_023969_2 "ng.2d.sizes.4x8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023969, VkglTestCase_023969_1, VkglTestCase_023969_2);

#define VkglTestCase_023970_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_023970_2 "ing.2d.sizes.4x8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023970, VkglTestCase_023970_1, VkglTestCase_023970_2);

#define VkglTestCase_023971_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_023971_2 "iltering.2d.sizes.32x64_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023971, VkglTestCase_023971_1, VkglTestCase_023971_2);

#define VkglTestCase_023972_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_023972_2 "filtering.2d.sizes.32x64_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023972, VkglTestCase_023972_1, VkglTestCase_023972_2);

#define VkglTestCase_023973_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023973_2 "g.2d.sizes.32x64_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023973, VkglTestCase_023973_1, VkglTestCase_023973_2);

#define VkglTestCase_023974_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023974_2 "g.2d.sizes.32x64_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023974, VkglTestCase_023974_1, VkglTestCase_023974_2);

#define VkglTestCase_023975_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023975_2 "g.2d.sizes.32x64_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023975, VkglTestCase_023975_1, VkglTestCase_023975_2);

#define VkglTestCase_023976_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_023976_2 "ng.2d.sizes.32x64_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023976, VkglTestCase_023976_1, VkglTestCase_023976_2);

#define VkglTestCase_023977_1 "dEQP-GLES3.functional.texture.fi"
#define VkglTestCase_023977_2 "ltering.2d.sizes.128x128_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023977, VkglTestCase_023977_1, VkglTestCase_023977_2);

#define VkglTestCase_023978_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_023978_2 "iltering.2d.sizes.128x128_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023978, VkglTestCase_023978_1, VkglTestCase_023978_2);

#define VkglTestCase_023979_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023979_2 ".2d.sizes.128x128_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023979, VkglTestCase_023979_1, VkglTestCase_023979_2);

#define VkglTestCase_023980_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023980_2 ".2d.sizes.128x128_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023980, VkglTestCase_023980_1, VkglTestCase_023980_2);

#define VkglTestCase_023981_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023981_2 ".2d.sizes.128x128_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023981, VkglTestCase_023981_1, VkglTestCase_023981_2);

#define VkglTestCase_023982_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023982_2 "g.2d.sizes.128x128_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023982, VkglTestCase_023982_1, VkglTestCase_023982_2);

#define VkglTestCase_023983_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_023983_2 "filtering.2d.sizes.3x7_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023983, VkglTestCase_023983_1, VkglTestCase_023983_2);

#define VkglTestCase_023984_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_023984_2 ".filtering.2d.sizes.3x7_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023984, VkglTestCase_023984_1, VkglTestCase_023984_2);

#define VkglTestCase_023985_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_023985_2 "ng.2d.sizes.3x7_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023985, VkglTestCase_023985_1, VkglTestCase_023985_2);

#define VkglTestCase_023986_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_023986_2 "ng.2d.sizes.3x7_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023986, VkglTestCase_023986_1, VkglTestCase_023986_2);

#define VkglTestCase_023987_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_023987_2 "ng.2d.sizes.3x7_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023987, VkglTestCase_023987_1, VkglTestCase_023987_2);

#define VkglTestCase_023988_1 "dEQP-GLES3.functional.texture.filter"
#define VkglTestCase_023988_2 "ing.2d.sizes.3x7_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023988, VkglTestCase_023988_1, VkglTestCase_023988_2);

#define VkglTestCase_023989_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_023989_2 "iltering.2d.sizes.31x55_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023989, VkglTestCase_023989_1, VkglTestCase_023989_2);

#define VkglTestCase_023990_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_023990_2 "filtering.2d.sizes.31x55_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023990, VkglTestCase_023990_1, VkglTestCase_023990_2);

#define VkglTestCase_023991_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023991_2 "g.2d.sizes.31x55_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023991, VkglTestCase_023991_1, VkglTestCase_023991_2);

#define VkglTestCase_023992_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023992_2 "g.2d.sizes.31x55_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023992, VkglTestCase_023992_1, VkglTestCase_023992_2);

#define VkglTestCase_023993_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023993_2 "g.2d.sizes.31x55_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023993, VkglTestCase_023993_1, VkglTestCase_023993_2);

#define VkglTestCase_023994_1 "dEQP-GLES3.functional.texture.filteri"
#define VkglTestCase_023994_2 "ng.2d.sizes.31x55_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023994, VkglTestCase_023994_1, VkglTestCase_023994_2);

#define VkglTestCase_023995_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_023995_2 "iltering.2d.sizes.127x99_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023995, VkglTestCase_023995_1, VkglTestCase_023995_2);

#define VkglTestCase_023996_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_023996_2 "iltering.2d.sizes.127x99_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023996, VkglTestCase_023996_1, VkglTestCase_023996_2);

#define VkglTestCase_023997_1 "dEQP-GLES3.functional.texture.filtering"
#define VkglTestCase_023997_2 ".2d.sizes.127x99_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023997, VkglTestCase_023997_1, VkglTestCase_023997_2);

#define VkglTestCase_023998_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023998_2 "g.2d.sizes.127x99_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023998, VkglTestCase_023998_1, VkglTestCase_023998_2);

#define VkglTestCase_023999_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_023999_2 "g.2d.sizes.127x99_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023999, VkglTestCase_023999_1, VkglTestCase_023999_2);

#define VkglTestCase_024000_1 "dEQP-GLES3.functional.texture.filterin"
#define VkglTestCase_024000_2 "g.2d.sizes.127x99_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_024000, VkglTestCase_024000_1, VkglTestCase_024000_2);
