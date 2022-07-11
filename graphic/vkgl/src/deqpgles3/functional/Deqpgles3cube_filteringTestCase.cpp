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

#define VkglTestCase_026993_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_026993_2 ".cube.filtering.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026993, VkglTestCase_026993_1, VkglTestCase_026993_2);

#define VkglTestCase_026994_1 "dEQP-GLES3.functional.texture.vertex."
#define VkglTestCase_026994_2 "cube.filtering.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026994, VkglTestCase_026994_1, VkglTestCase_026994_2);

#define VkglTestCase_026995_1 "dEQP-GLES3.functional.texture.vertex."
#define VkglTestCase_026995_2 "cube.filtering.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026995, VkglTestCase_026995_1, VkglTestCase_026995_2);

#define VkglTestCase_026996_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_026996_2 ".cube.filtering.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026996, VkglTestCase_026996_1, VkglTestCase_026996_2);

#define VkglTestCase_026997_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_026997_2 ".cube.filtering.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026997, VkglTestCase_026997_1, VkglTestCase_026997_2);

#define VkglTestCase_026998_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_026998_2 ".cube.filtering.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026998, VkglTestCase_026998_1, VkglTestCase_026998_2);

#define VkglTestCase_026999_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_026999_2 ".cube.filtering.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026999, VkglTestCase_026999_1, VkglTestCase_026999_2);

#define VkglTestCase_027000_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_027000_2 ".cube.filtering.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027000, VkglTestCase_027000_1, VkglTestCase_027000_2);

#define VkglTestCase_027001_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_027001_2 ".cube.filtering.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027001, VkglTestCase_027001_1, VkglTestCase_027001_2);

#define VkglTestCase_027002_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027002_2 "x.cube.filtering.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027002, VkglTestCase_027002_1, VkglTestCase_027002_2);

#define VkglTestCase_027003_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_027003_2 ".cube.filtering.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027003, VkglTestCase_027003_1, VkglTestCase_027003_2);

#define VkglTestCase_027004_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_027004_2 ".cube.filtering.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027004, VkglTestCase_027004_1, VkglTestCase_027004_2);

#define VkglTestCase_027005_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027005_2 "ltering.nearest_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027005, VkglTestCase_027005_1, VkglTestCase_027005_2);

#define VkglTestCase_027006_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027006_2 "ltering.nearest_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027006, VkglTestCase_027006_1, VkglTestCase_027006_2);

#define VkglTestCase_027007_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027007_2 "ltering.nearest_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027007, VkglTestCase_027007_1, VkglTestCase_027007_2);

#define VkglTestCase_027008_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027008_2 "iltering.nearest_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027008, VkglTestCase_027008_1, VkglTestCase_027008_2);

#define VkglTestCase_027009_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027009_2 "ltering.nearest_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027009, VkglTestCase_027009_1, VkglTestCase_027009_2);

#define VkglTestCase_027010_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027010_2 "ltering.nearest_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027010, VkglTestCase_027010_1, VkglTestCase_027010_2);

#define VkglTestCase_027011_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027011_2 "iltering.linear_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027011, VkglTestCase_027011_1, VkglTestCase_027011_2);

#define VkglTestCase_027012_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027012_2 "ltering.linear_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027012, VkglTestCase_027012_1, VkglTestCase_027012_2);

#define VkglTestCase_027013_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027013_2 "ltering.linear_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027013, VkglTestCase_027013_1, VkglTestCase_027013_2);

#define VkglTestCase_027014_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027014_2 "iltering.linear_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027014, VkglTestCase_027014_1, VkglTestCase_027014_2);

#define VkglTestCase_027015_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027015_2 "iltering.linear_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027015, VkglTestCase_027015_1, VkglTestCase_027015_2);

#define VkglTestCase_027016_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027016_2 "iltering.linear_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027016, VkglTestCase_027016_1, VkglTestCase_027016_2);

#define VkglTestCase_027017_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027017_2 "iltering.nearest_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027017, VkglTestCase_027017_1, VkglTestCase_027017_2);

#define VkglTestCase_027018_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027018_2 "ltering.nearest_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027018, VkglTestCase_027018_1, VkglTestCase_027018_2);

#define VkglTestCase_027019_1 "dEQP-GLES3.functional.texture.vertex.cube.fi"
#define VkglTestCase_027019_2 "ltering.nearest_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027019, VkglTestCase_027019_1, VkglTestCase_027019_2);

#define VkglTestCase_027020_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027020_2 "iltering.nearest_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027020, VkglTestCase_027020_1, VkglTestCase_027020_2);

#define VkglTestCase_027021_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027021_2 "iltering.nearest_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027021, VkglTestCase_027021_1, VkglTestCase_027021_2);

#define VkglTestCase_027022_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027022_2 "iltering.nearest_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027022, VkglTestCase_027022_1, VkglTestCase_027022_2);

#define VkglTestCase_027023_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027023_2 "iltering.linear_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027023, VkglTestCase_027023_1, VkglTestCase_027023_2);

#define VkglTestCase_027024_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027024_2 "iltering.linear_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027024, VkglTestCase_027024_1, VkglTestCase_027024_2);

#define VkglTestCase_027025_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027025_2 "iltering.linear_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027025, VkglTestCase_027025_1, VkglTestCase_027025_2);

#define VkglTestCase_027026_1 "dEQP-GLES3.functional.texture.vertex.cube."
#define VkglTestCase_027026_2 "filtering.linear_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027026, VkglTestCase_027026_1, VkglTestCase_027026_2);

#define VkglTestCase_027027_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027027_2 "iltering.linear_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027027, VkglTestCase_027027_1, VkglTestCase_027027_2);

#define VkglTestCase_027028_1 "dEQP-GLES3.functional.texture.vertex.cube.f"
#define VkglTestCase_027028_2 "iltering.linear_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_027028, VkglTestCase_027028_1, VkglTestCase_027028_2);
