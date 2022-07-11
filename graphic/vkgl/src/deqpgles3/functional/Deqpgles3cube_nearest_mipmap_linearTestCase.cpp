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

#define VkglTestCase_025520_1 "dEQP-GLES3.functional.texture.shadow.cube.neare"
#define VkglTestCase_025520_2 "st_mipmap_linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025520, VkglTestCase_025520_1, VkglTestCase_025520_2);

#define VkglTestCase_025521_1 "dEQP-GLES3.functional.texture.shadow.cube.neares"
#define VkglTestCase_025521_2 "t_mipmap_linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025521, VkglTestCase_025521_1, VkglTestCase_025521_2);

#define VkglTestCase_025522_1 "dEQP-GLES3.functional.texture.shadow.cube.neare"
#define VkglTestCase_025522_2 "st_mipmap_linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025522, VkglTestCase_025522_1, VkglTestCase_025522_2);

#define VkglTestCase_025523_1 "dEQP-GLES3.functional.texture.shadow.cube.nearest"
#define VkglTestCase_025523_2 "_mipmap_linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025523, VkglTestCase_025523_1, VkglTestCase_025523_2);

#define VkglTestCase_025524_1 "dEQP-GLES3.functional.texture.shadow.cube.nearest"
#define VkglTestCase_025524_2 "_mipmap_linear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025524, VkglTestCase_025524_1, VkglTestCase_025524_2);

#define VkglTestCase_025525_1 "dEQP-GLES3.functional.texture.shadow.cube.neares"
#define VkglTestCase_025525_2 "t_mipmap_linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025525, VkglTestCase_025525_1, VkglTestCase_025525_2);

#define VkglTestCase_025526_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025526_2 "earest_mipmap_linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025526, VkglTestCase_025526_1, VkglTestCase_025526_2);

#define VkglTestCase_025527_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025527_2 "earest_mipmap_linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025527, VkglTestCase_025527_1, VkglTestCase_025527_2);

#define VkglTestCase_025528_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025528_2 "nearest_mipmap_linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025528, VkglTestCase_025528_1, VkglTestCase_025528_2);

#define VkglTestCase_025529_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025529_2 "arest_mipmap_linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025529, VkglTestCase_025529_1, VkglTestCase_025529_2);

#define VkglTestCase_025530_1 "dEQP-GLES3.functional.texture.shadow.cube.nea"
#define VkglTestCase_025530_2 "rest_mipmap_linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025530, VkglTestCase_025530_1, VkglTestCase_025530_2);

#define VkglTestCase_025531_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025531_2 "arest_mipmap_linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025531, VkglTestCase_025531_1, VkglTestCase_025531_2);

#define VkglTestCase_025532_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025532_2 "earest_mipmap_linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025532, VkglTestCase_025532_1, VkglTestCase_025532_2);

#define VkglTestCase_025533_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025533_2 "arest_mipmap_linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025533, VkglTestCase_025533_1, VkglTestCase_025533_2);

#define VkglTestCase_025534_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025534_2 "earest_mipmap_linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025534, VkglTestCase_025534_1, VkglTestCase_025534_2);

#define VkglTestCase_025535_1 "dEQP-GLES3.functional.texture.shadow.cube.nea"
#define VkglTestCase_025535_2 "rest_mipmap_linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025535, VkglTestCase_025535_1, VkglTestCase_025535_2);

#define VkglTestCase_025536_1 "dEQP-GLES3.functional.texture.shadow.cube.near"
#define VkglTestCase_025536_2 "est_mipmap_linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025536, VkglTestCase_025536_1, VkglTestCase_025536_2);

#define VkglTestCase_025537_1 "dEQP-GLES3.functional.texture.shadow.cube.nea"
#define VkglTestCase_025537_2 "rest_mipmap_linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025537, VkglTestCase_025537_1, VkglTestCase_025537_2);

#define VkglTestCase_025538_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025538_2 "arest_mipmap_linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025538, VkglTestCase_025538_1, VkglTestCase_025538_2);

#define VkglTestCase_025539_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025539_2 "arest_mipmap_linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025539, VkglTestCase_025539_1, VkglTestCase_025539_2);

#define VkglTestCase_025540_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025540_2 "earest_mipmap_linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025540, VkglTestCase_025540_1, VkglTestCase_025540_2);

#define VkglTestCase_025541_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025541_2 "earest_mipmap_linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025541, VkglTestCase_025541_1, VkglTestCase_025541_2);

#define VkglTestCase_025542_1 "dEQP-GLES3.functional.texture.shadow.cube.ne"
#define VkglTestCase_025542_2 "arest_mipmap_linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025542, VkglTestCase_025542_1, VkglTestCase_025542_2);

#define VkglTestCase_025543_1 "dEQP-GLES3.functional.texture.shadow.cube.n"
#define VkglTestCase_025543_2 "earest_mipmap_linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025543, VkglTestCase_025543_1, VkglTestCase_025543_2);
