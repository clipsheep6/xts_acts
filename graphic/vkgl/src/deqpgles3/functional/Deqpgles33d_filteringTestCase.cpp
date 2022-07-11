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
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027083_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027083_2 "x.3d.filtering.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027083, VkglTestCase_027083_1, VkglTestCase_027083_2);

#define VkglTestCase_027084_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_027084_2 ".3d.filtering.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027084, VkglTestCase_027084_1, VkglTestCase_027084_2);

#define VkglTestCase_027085_1 "dEQP-GLES3.functional.texture.vertex"
#define VkglTestCase_027085_2 ".3d.filtering.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027085, VkglTestCase_027085_1, VkglTestCase_027085_2);

#define VkglTestCase_027086_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027086_2 "x.3d.filtering.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027086, VkglTestCase_027086_1, VkglTestCase_027086_2);

#define VkglTestCase_027087_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027087_2 "x.3d.filtering.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027087, VkglTestCase_027087_1, VkglTestCase_027087_2);

#define VkglTestCase_027088_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027088_2 "x.3d.filtering.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027088, VkglTestCase_027088_1, VkglTestCase_027088_2);

#define VkglTestCase_027089_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027089_2 "x.3d.filtering.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027089, VkglTestCase_027089_1, VkglTestCase_027089_2);

#define VkglTestCase_027090_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027090_2 "x.3d.filtering.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027090, VkglTestCase_027090_1, VkglTestCase_027090_2);

#define VkglTestCase_027091_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027091_2 "x.3d.filtering.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027091, VkglTestCase_027091_1, VkglTestCase_027091_2);

#define VkglTestCase_027092_1 "dEQP-GLES3.functional.texture.vert"
#define VkglTestCase_027092_2 "ex.3d.filtering.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027092, VkglTestCase_027092_1, VkglTestCase_027092_2);

#define VkglTestCase_027093_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027093_2 "x.3d.filtering.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027093, VkglTestCase_027093_1, VkglTestCase_027093_2);

#define VkglTestCase_027094_1 "dEQP-GLES3.functional.texture.verte"
#define VkglTestCase_027094_2 "x.3d.filtering.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027094, VkglTestCase_027094_1, VkglTestCase_027094_2);

#define VkglTestCase_027095_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027095_2 "tering.nearest_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027095, VkglTestCase_027095_1, VkglTestCase_027095_2);

#define VkglTestCase_027096_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027096_2 "tering.nearest_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027096, VkglTestCase_027096_1, VkglTestCase_027096_2);

#define VkglTestCase_027097_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027097_2 "tering.nearest_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027097, VkglTestCase_027097_1, VkglTestCase_027097_2);

#define VkglTestCase_027098_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027098_2 "ltering.nearest_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027098, VkglTestCase_027098_1, VkglTestCase_027098_2);

#define VkglTestCase_027099_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027099_2 "tering.nearest_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027099, VkglTestCase_027099_1, VkglTestCase_027099_2);

#define VkglTestCase_027100_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027100_2 "tering.nearest_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027100, VkglTestCase_027100_1, VkglTestCase_027100_2);

#define VkglTestCase_027101_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027101_2 "ltering.linear_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027101, VkglTestCase_027101_1, VkglTestCase_027101_2);

#define VkglTestCase_027102_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027102_2 "tering.linear_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027102, VkglTestCase_027102_1, VkglTestCase_027102_2);

#define VkglTestCase_027103_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027103_2 "tering.linear_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027103, VkglTestCase_027103_1, VkglTestCase_027103_2);

#define VkglTestCase_027104_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027104_2 "ltering.linear_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027104, VkglTestCase_027104_1, VkglTestCase_027104_2);

#define VkglTestCase_027105_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027105_2 "ltering.linear_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027105, VkglTestCase_027105_1, VkglTestCase_027105_2);

#define VkglTestCase_027106_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027106_2 "ltering.linear_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027106, VkglTestCase_027106_1, VkglTestCase_027106_2);

#define VkglTestCase_027107_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027107_2 "ltering.nearest_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027107, VkglTestCase_027107_1, VkglTestCase_027107_2);

#define VkglTestCase_027108_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027108_2 "tering.nearest_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027108, VkglTestCase_027108_1, VkglTestCase_027108_2);

#define VkglTestCase_027109_1 "dEQP-GLES3.functional.texture.vertex.3d.fil"
#define VkglTestCase_027109_2 "tering.nearest_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027109, VkglTestCase_027109_1, VkglTestCase_027109_2);

#define VkglTestCase_027110_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027110_2 "ltering.nearest_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027110, VkglTestCase_027110_1, VkglTestCase_027110_2);

#define VkglTestCase_027111_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027111_2 "ltering.nearest_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027111, VkglTestCase_027111_1, VkglTestCase_027111_2);

#define VkglTestCase_027112_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027112_2 "ltering.nearest_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027112, VkglTestCase_027112_1, VkglTestCase_027112_2);

#define VkglTestCase_027113_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027113_2 "ltering.linear_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027113, VkglTestCase_027113_1, VkglTestCase_027113_2);

#define VkglTestCase_027114_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027114_2 "ltering.linear_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027114, VkglTestCase_027114_1, VkglTestCase_027114_2);

#define VkglTestCase_027115_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027115_2 "ltering.linear_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027115, VkglTestCase_027115_1, VkglTestCase_027115_2);

#define VkglTestCase_027116_1 "dEQP-GLES3.functional.texture.vertex.3d.f"
#define VkglTestCase_027116_2 "iltering.linear_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027116, VkglTestCase_027116_1, VkglTestCase_027116_2);

#define VkglTestCase_027117_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027117_2 "ltering.linear_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027117, VkglTestCase_027117_1, VkglTestCase_027117_2);

#define VkglTestCase_027118_1 "dEQP-GLES3.functional.texture.vertex.3d.fi"
#define VkglTestCase_027118_2 "ltering.linear_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027118, VkglTestCase_027118_1, VkglTestCase_027118_2);
