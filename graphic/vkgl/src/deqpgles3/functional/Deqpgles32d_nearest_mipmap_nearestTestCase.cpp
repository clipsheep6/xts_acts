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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025328_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest"
#define VkglTestCase_025328_2 "_mipmap_nearest.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025328, VkglTestCase_025328_1, VkglTestCase_025328_2);

#define VkglTestCase_025329_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest"
#define VkglTestCase_025329_2 "_mipmap_nearest.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025329, VkglTestCase_025329_1, VkglTestCase_025329_2);

#define VkglTestCase_025330_1 "dEQP-GLES3.functional.texture.shadow.2d.neares"
#define VkglTestCase_025330_2 "t_mipmap_nearest.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025330, VkglTestCase_025330_1, VkglTestCase_025330_2);

#define VkglTestCase_025331_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest_"
#define VkglTestCase_025331_2 "mipmap_nearest.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025331, VkglTestCase_025331_1, VkglTestCase_025331_2);

#define VkglTestCase_025332_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest_m"
#define VkglTestCase_025332_2 "ipmap_nearest.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025332, VkglTestCase_025332_1, VkglTestCase_025332_2);

#define VkglTestCase_025333_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest_"
#define VkglTestCase_025333_2 "mipmap_nearest.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025333, VkglTestCase_025333_1, VkglTestCase_025333_2);

#define VkglTestCase_025334_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025334_2 "arest_mipmap_nearest.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025334, VkglTestCase_025334_1, VkglTestCase_025334_2);

#define VkglTestCase_025335_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025335_2 "rest_mipmap_nearest.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025335, VkglTestCase_025335_1, VkglTestCase_025335_2);

#define VkglTestCase_025336_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025336_2 "arest_mipmap_nearest.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025336, VkglTestCase_025336_1, VkglTestCase_025336_2);

#define VkglTestCase_025337_1 "dEQP-GLES3.functional.texture.shadow.2d.near"
#define VkglTestCase_025337_2 "est_mipmap_nearest.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025337, VkglTestCase_025337_1, VkglTestCase_025337_2);

#define VkglTestCase_025338_1 "dEQP-GLES3.functional.texture.shadow.2d.near"
#define VkglTestCase_025338_2 "est_mipmap_nearest.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025338, VkglTestCase_025338_1, VkglTestCase_025338_2);

#define VkglTestCase_025339_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025339_2 "rest_mipmap_nearest.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025339, VkglTestCase_025339_1, VkglTestCase_025339_2);

#define VkglTestCase_025340_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025340_2 "rest_mipmap_nearest.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025340, VkglTestCase_025340_1, VkglTestCase_025340_2);

#define VkglTestCase_025341_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025341_2 "rest_mipmap_nearest.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025341, VkglTestCase_025341_1, VkglTestCase_025341_2);

#define VkglTestCase_025342_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025342_2 "arest_mipmap_nearest.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025342, VkglTestCase_025342_1, VkglTestCase_025342_2);

#define VkglTestCase_025343_1 "dEQP-GLES3.functional.texture.shadow.2d.neare"
#define VkglTestCase_025343_2 "st_mipmap_nearest.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025343, VkglTestCase_025343_1, VkglTestCase_025343_2);

#define VkglTestCase_025344_1 "dEQP-GLES3.functional.texture.shadow.2d.neare"
#define VkglTestCase_025344_2 "st_mipmap_nearest.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025344, VkglTestCase_025344_1, VkglTestCase_025344_2);

#define VkglTestCase_025345_1 "dEQP-GLES3.functional.texture.shadow.2d.near"
#define VkglTestCase_025345_2 "est_mipmap_nearest.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025345, VkglTestCase_025345_1, VkglTestCase_025345_2);

#define VkglTestCase_025346_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025346_2 "rest_mipmap_nearest.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025346, VkglTestCase_025346_1, VkglTestCase_025346_2);

#define VkglTestCase_025347_1 "dEQP-GLES3.functional.texture.shadow.2d.near"
#define VkglTestCase_025347_2 "est_mipmap_nearest.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025347, VkglTestCase_025347_1, VkglTestCase_025347_2);

#define VkglTestCase_025348_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025348_2 "rest_mipmap_nearest.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025348, VkglTestCase_025348_1, VkglTestCase_025348_2);

#define VkglTestCase_025349_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025349_2 "rest_mipmap_nearest.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025349, VkglTestCase_025349_1, VkglTestCase_025349_2);

#define VkglTestCase_025350_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025350_2 "rest_mipmap_nearest.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025350, VkglTestCase_025350_1, VkglTestCase_025350_2);

#define VkglTestCase_025351_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025351_2 "arest_mipmap_nearest.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025351, VkglTestCase_025351_1, VkglTestCase_025351_2);
