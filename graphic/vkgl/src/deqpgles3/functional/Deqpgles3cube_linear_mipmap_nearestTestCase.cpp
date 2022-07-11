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

#define VkglTestCase_025496_1 "dEQP-GLES3.functional.texture.shadow.cube.linea"
#define VkglTestCase_025496_2 "r_mipmap_nearest.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025496, VkglTestCase_025496_1, VkglTestCase_025496_2);

#define VkglTestCase_025497_1 "dEQP-GLES3.functional.texture.shadow.cube.linear"
#define VkglTestCase_025497_2 "_mipmap_nearest.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025497, VkglTestCase_025497_1, VkglTestCase_025497_2);

#define VkglTestCase_025498_1 "dEQP-GLES3.functional.texture.shadow.cube.linea"
#define VkglTestCase_025498_2 "r_mipmap_nearest.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025498, VkglTestCase_025498_1, VkglTestCase_025498_2);

#define VkglTestCase_025499_1 "dEQP-GLES3.functional.texture.shadow.cube.linear_"
#define VkglTestCase_025499_2 "mipmap_nearest.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025499, VkglTestCase_025499_1, VkglTestCase_025499_2);

#define VkglTestCase_025500_1 "dEQP-GLES3.functional.texture.shadow.cube.linear_"
#define VkglTestCase_025500_2 "mipmap_nearest.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025500, VkglTestCase_025500_1, VkglTestCase_025500_2);

#define VkglTestCase_025501_1 "dEQP-GLES3.functional.texture.shadow.cube.linear"
#define VkglTestCase_025501_2 "_mipmap_nearest.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025501, VkglTestCase_025501_1, VkglTestCase_025501_2);

#define VkglTestCase_025502_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025502_2 "inear_mipmap_nearest.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025502, VkglTestCase_025502_1, VkglTestCase_025502_2);

#define VkglTestCase_025503_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025503_2 "inear_mipmap_nearest.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025503, VkglTestCase_025503_1, VkglTestCase_025503_2);

#define VkglTestCase_025504_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025504_2 "linear_mipmap_nearest.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025504, VkglTestCase_025504_1, VkglTestCase_025504_2);

#define VkglTestCase_025505_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025505_2 "near_mipmap_nearest.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025505, VkglTestCase_025505_1, VkglTestCase_025505_2);

#define VkglTestCase_025506_1 "dEQP-GLES3.functional.texture.shadow.cube.lin"
#define VkglTestCase_025506_2 "ear_mipmap_nearest.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025506, VkglTestCase_025506_1, VkglTestCase_025506_2);

#define VkglTestCase_025507_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025507_2 "near_mipmap_nearest.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025507, VkglTestCase_025507_1, VkglTestCase_025507_2);

#define VkglTestCase_025508_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025508_2 "inear_mipmap_nearest.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025508, VkglTestCase_025508_1, VkglTestCase_025508_2);

#define VkglTestCase_025509_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025509_2 "near_mipmap_nearest.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025509, VkglTestCase_025509_1, VkglTestCase_025509_2);

#define VkglTestCase_025510_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025510_2 "inear_mipmap_nearest.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025510, VkglTestCase_025510_1, VkglTestCase_025510_2);

#define VkglTestCase_025511_1 "dEQP-GLES3.functional.texture.shadow.cube.lin"
#define VkglTestCase_025511_2 "ear_mipmap_nearest.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025511, VkglTestCase_025511_1, VkglTestCase_025511_2);

#define VkglTestCase_025512_1 "dEQP-GLES3.functional.texture.shadow.cube.line"
#define VkglTestCase_025512_2 "ar_mipmap_nearest.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025512, VkglTestCase_025512_1, VkglTestCase_025512_2);

#define VkglTestCase_025513_1 "dEQP-GLES3.functional.texture.shadow.cube.lin"
#define VkglTestCase_025513_2 "ear_mipmap_nearest.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025513, VkglTestCase_025513_1, VkglTestCase_025513_2);

#define VkglTestCase_025514_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025514_2 "near_mipmap_nearest.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025514, VkglTestCase_025514_1, VkglTestCase_025514_2);

#define VkglTestCase_025515_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025515_2 "near_mipmap_nearest.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025515, VkglTestCase_025515_1, VkglTestCase_025515_2);

#define VkglTestCase_025516_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025516_2 "inear_mipmap_nearest.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025516, VkglTestCase_025516_1, VkglTestCase_025516_2);

#define VkglTestCase_025517_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025517_2 "inear_mipmap_nearest.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025517, VkglTestCase_025517_1, VkglTestCase_025517_2);

#define VkglTestCase_025518_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025518_2 "near_mipmap_nearest.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025518, VkglTestCase_025518_1, VkglTestCase_025518_2);

#define VkglTestCase_025519_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025519_2 "inear_mipmap_nearest.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025519, VkglTestCase_025519_1, VkglTestCase_025519_2);
