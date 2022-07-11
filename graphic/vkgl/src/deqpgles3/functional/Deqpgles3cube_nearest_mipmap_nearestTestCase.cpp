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

#define VkglTestCase_025472_1 "dEQP-GLES3.functional.texture.shadow.cube.neares"
#define VkglTestCase_025472_2 "t_mipmap_nearest.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025472, VkglTestCase_025472_1, VkglTestCase_025472_2);

#define VkglTestCase_025473_1 "dEQP-GLES3.functional.texture.shadow.cube.neares"
#define VkglTestCase_025473_2 "t_mipmap_nearest.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025473, VkglTestCase_025473_1, VkglTestCase_025473_2);

#define VkglTestCase_025474_1 "dEQP-GLES3.functional.texture.shadow.cube.neare"
#define VkglTestCase_025474_2 "st_mipmap_nearest.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025474, VkglTestCase_025474_1, VkglTestCase_025474_2);

#define VkglTestCase_025475_1 "dEQP-GLES3.functional.texture.shadow.cube.nearest"
#define VkglTestCase_025475_2 "_mipmap_nearest.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025475, VkglTestCase_025475_1, VkglTestCase_025475_2);

#define VkglTestCase_025476_1 "dEQP-GLES3.functional.texture.shadow.cube.nearest_"
#define VkglTestCase_025476_2 "mipmap_nearest.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025476, VkglTestCase_025476_1, VkglTestCase_025476_2);

#define VkglTestCase_025477_1 "dEQP-GLES3.functional.texture.shadow.cube.nearest"
#define VkglTestCase_025477_2 "_mipmap_nearest.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025477, VkglTestCase_025477_1, VkglTestCase_025477_2);

#define VkglTestCase_025478_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025478_2 "earest_mipmap_nearest.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025478, VkglTestCase_025478_1, VkglTestCase_025478_2);

#define VkglTestCase_025479_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025479_2 "arest_mipmap_nearest.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025479, VkglTestCase_025479_1, VkglTestCase_025479_2);

#define VkglTestCase_025480_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025480_2 "earest_mipmap_nearest.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025480, VkglTestCase_025480_1, VkglTestCase_025480_2);

#define VkglTestCase_025481_1 "dEQP-GLES3.functional.texture.shadow.cube.nea"
#define VkglTestCase_025481_2 "rest_mipmap_nearest.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025481, VkglTestCase_025481_1, VkglTestCase_025481_2);

#define VkglTestCase_025482_1 "dEQP-GLES3.functional.texture.shadow.cube.nea"
#define VkglTestCase_025482_2 "rest_mipmap_nearest.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025482, VkglTestCase_025482_1, VkglTestCase_025482_2);

#define VkglTestCase_025483_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025483_2 "arest_mipmap_nearest.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025483, VkglTestCase_025483_1, VkglTestCase_025483_2);

#define VkglTestCase_025484_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025484_2 "arest_mipmap_nearest.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025484, VkglTestCase_025484_1, VkglTestCase_025484_2);

#define VkglTestCase_025485_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025485_2 "arest_mipmap_nearest.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025485, VkglTestCase_025485_1, VkglTestCase_025485_2);

#define VkglTestCase_025486_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025486_2 "earest_mipmap_nearest.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025486, VkglTestCase_025486_1, VkglTestCase_025486_2);

#define VkglTestCase_025487_1 "dEQP-GLES3.functional.texture.shadow.cube.near"
#define VkglTestCase_025487_2 "est_mipmap_nearest.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025487, VkglTestCase_025487_1, VkglTestCase_025487_2);

#define VkglTestCase_025488_1 "dEQP-GLES3.functional.texture.shadow.cube.near"
#define VkglTestCase_025488_2 "est_mipmap_nearest.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025488, VkglTestCase_025488_1, VkglTestCase_025488_2);

#define VkglTestCase_025489_1 "dEQP-GLES3.functional.texture.shadow.cube.nea"
#define VkglTestCase_025489_2 "rest_mipmap_nearest.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025489, VkglTestCase_025489_1, VkglTestCase_025489_2);

#define VkglTestCase_025490_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025490_2 "arest_mipmap_nearest.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025490, VkglTestCase_025490_1, VkglTestCase_025490_2);

#define VkglTestCase_025491_1 "dEQP-GLES3.functional.texture.shadow.cube.nea"
#define VkglTestCase_025491_2 "rest_mipmap_nearest.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025491, VkglTestCase_025491_1, VkglTestCase_025491_2);

#define VkglTestCase_025492_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025492_2 "arest_mipmap_nearest.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025492, VkglTestCase_025492_1, VkglTestCase_025492_2);

#define VkglTestCase_025493_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025493_2 "arest_mipmap_nearest.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025493, VkglTestCase_025493_1, VkglTestCase_025493_2);

#define VkglTestCase_025494_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025494_2 "arest_mipmap_nearest.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025494, VkglTestCase_025494_1, VkglTestCase_025494_2);

#define VkglTestCase_025495_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025495_2 "earest_mipmap_nearest.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025495, VkglTestCase_025495_1, VkglTestCase_025495_2);
