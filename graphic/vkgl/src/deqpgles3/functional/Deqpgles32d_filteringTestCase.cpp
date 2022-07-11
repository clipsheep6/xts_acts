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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026948_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026948_2 "x.2d.filtering.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026948, VkglTestCase_026948_1, VkglTestCase_026948_2);

#define VkglTestCase_026949_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_026949_2 ".2d.filtering.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026949, VkglTestCase_026949_1, VkglTestCase_026949_2);

#define VkglTestCase_026950_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_026950_2 ".2d.filtering.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026950, VkglTestCase_026950_1, VkglTestCase_026950_2);

#define VkglTestCase_026951_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026951_2 "x.2d.filtering.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026951, VkglTestCase_026951_1, VkglTestCase_026951_2);

#define VkglTestCase_026952_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026952_2 "x.2d.filtering.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026952, VkglTestCase_026952_1, VkglTestCase_026952_2);

#define VkglTestCase_026953_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026953_2 "x.2d.filtering.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026953, VkglTestCase_026953_1, VkglTestCase_026953_2);

#define VkglTestCase_026954_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026954_2 "x.2d.filtering.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026954, VkglTestCase_026954_1, VkglTestCase_026954_2);

#define VkglTestCase_026955_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026955_2 "x.2d.filtering.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026955, VkglTestCase_026955_1, VkglTestCase_026955_2);

#define VkglTestCase_026956_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026956_2 "x.2d.filtering.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026956, VkglTestCase_026956_1, VkglTestCase_026956_2);

#define VkglTestCase_026957_1 "dEQP-GLES3.functional.texture.vert"
#define VkglTestCase_026957_2 "ex.2d.filtering.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026957, VkglTestCase_026957_1, VkglTestCase_026957_2);

#define VkglTestCase_026958_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026958_2 "x.2d.filtering.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026958, VkglTestCase_026958_1, VkglTestCase_026958_2);

#define VkglTestCase_026959_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_026959_2 "x.2d.filtering.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026959, VkglTestCase_026959_1, VkglTestCase_026959_2);

#define VkglTestCase_026960_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026960_2 "tering.nearest_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026960, VkglTestCase_026960_1, VkglTestCase_026960_2);

#define VkglTestCase_026961_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026961_2 "tering.nearest_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026961, VkglTestCase_026961_1, VkglTestCase_026961_2);

#define VkglTestCase_026962_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026962_2 "tering.nearest_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026962, VkglTestCase_026962_1, VkglTestCase_026962_2);

#define VkglTestCase_026963_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026963_2 "ltering.nearest_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026963, VkglTestCase_026963_1, VkglTestCase_026963_2);

#define VkglTestCase_026964_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026964_2 "tering.nearest_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026964, VkglTestCase_026964_1, VkglTestCase_026964_2);

#define VkglTestCase_026965_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026965_2 "tering.nearest_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026965, VkglTestCase_026965_1, VkglTestCase_026965_2);

#define VkglTestCase_026966_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026966_2 "ltering.linear_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026966, VkglTestCase_026966_1, VkglTestCase_026966_2);

#define VkglTestCase_026967_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026967_2 "tering.linear_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026967, VkglTestCase_026967_1, VkglTestCase_026967_2);

#define VkglTestCase_026968_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026968_2 "tering.linear_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026968, VkglTestCase_026968_1, VkglTestCase_026968_2);

#define VkglTestCase_026969_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026969_2 "ltering.linear_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026969, VkglTestCase_026969_1, VkglTestCase_026969_2);

#define VkglTestCase_026970_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026970_2 "ltering.linear_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026970, VkglTestCase_026970_1, VkglTestCase_026970_2);

#define VkglTestCase_026971_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026971_2 "ltering.linear_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026971, VkglTestCase_026971_1, VkglTestCase_026971_2);

#define VkglTestCase_026972_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026972_2 "ltering.nearest_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026972, VkglTestCase_026972_1, VkglTestCase_026972_2);

#define VkglTestCase_026973_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026973_2 "tering.nearest_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026973, VkglTestCase_026973_1, VkglTestCase_026973_2);

#define VkglTestCase_026974_1 "dEQP-GLES3.functional.texture.vertex.2d.fil"
#define VkglTestCase_026974_2 "tering.nearest_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026974, VkglTestCase_026974_1, VkglTestCase_026974_2);

#define VkglTestCase_026975_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026975_2 "ltering.nearest_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026975, VkglTestCase_026975_1, VkglTestCase_026975_2);

#define VkglTestCase_026976_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026976_2 "ltering.nearest_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026976, VkglTestCase_026976_1, VkglTestCase_026976_2);

#define VkglTestCase_026977_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026977_2 "ltering.nearest_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026977, VkglTestCase_026977_1, VkglTestCase_026977_2);

#define VkglTestCase_026978_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026978_2 "ltering.linear_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026978, VkglTestCase_026978_1, VkglTestCase_026978_2);

#define VkglTestCase_026979_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026979_2 "ltering.linear_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026979, VkglTestCase_026979_1, VkglTestCase_026979_2);

#define VkglTestCase_026980_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026980_2 "ltering.linear_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026980, VkglTestCase_026980_1, VkglTestCase_026980_2);

#define VkglTestCase_026981_1 "dEQP-GLES3.functional.texture.vertex.2d.f"
#define VkglTestCase_026981_2 "iltering.linear_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026981, VkglTestCase_026981_1, VkglTestCase_026981_2);

#define VkglTestCase_026982_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026982_2 "ltering.linear_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026982, VkglTestCase_026982_1, VkglTestCase_026982_2);

#define VkglTestCase_026983_1 "dEQP-GLES3.functional.texture.vertex.2d.fi"
#define VkglTestCase_026983_2 "ltering.linear_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026983, VkglTestCase_026983_1, VkglTestCase_026983_2);
