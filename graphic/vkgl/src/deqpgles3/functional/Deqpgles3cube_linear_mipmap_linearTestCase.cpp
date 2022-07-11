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

#define VkglTestCase_025544_1 "dEQP-GLES3.functional.texture.shadow.cube.linea"
#define VkglTestCase_025544_2 "r_mipmap_linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025544, VkglTestCase_025544_1, VkglTestCase_025544_2);

#define VkglTestCase_025545_1 "dEQP-GLES3.functional.texture.shadow.cube.linea"
#define VkglTestCase_025545_2 "r_mipmap_linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025545, VkglTestCase_025545_1, VkglTestCase_025545_2);

#define VkglTestCase_025546_1 "dEQP-GLES3.functional.texture.shadow.cube.line"
#define VkglTestCase_025546_2 "ar_mipmap_linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025546, VkglTestCase_025546_1, VkglTestCase_025546_2);

#define VkglTestCase_025547_1 "dEQP-GLES3.functional.texture.shadow.cube.linear"
#define VkglTestCase_025547_2 "_mipmap_linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025547, VkglTestCase_025547_1, VkglTestCase_025547_2);

#define VkglTestCase_025548_1 "dEQP-GLES3.functional.texture.shadow.cube.linear_"
#define VkglTestCase_025548_2 "mipmap_linear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025548, VkglTestCase_025548_1, VkglTestCase_025548_2);

#define VkglTestCase_025549_1 "dEQP-GLES3.functional.texture.shadow.cube.linear"
#define VkglTestCase_025549_2 "_mipmap_linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025549, VkglTestCase_025549_1, VkglTestCase_025549_2);

#define VkglTestCase_025550_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025550_2 "linear_mipmap_linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025550, VkglTestCase_025550_1, VkglTestCase_025550_2);

#define VkglTestCase_025551_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025551_2 "inear_mipmap_linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025551, VkglTestCase_025551_1, VkglTestCase_025551_2);

#define VkglTestCase_025552_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025552_2 "linear_mipmap_linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025552, VkglTestCase_025552_1, VkglTestCase_025552_2);

#define VkglTestCase_025553_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025553_2 "near_mipmap_linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025553, VkglTestCase_025553_1, VkglTestCase_025553_2);

#define VkglTestCase_025554_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025554_2 "near_mipmap_linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025554, VkglTestCase_025554_1, VkglTestCase_025554_2);

#define VkglTestCase_025555_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025555_2 "inear_mipmap_linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025555, VkglTestCase_025555_1, VkglTestCase_025555_2);

#define VkglTestCase_025556_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025556_2 "inear_mipmap_linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025556, VkglTestCase_025556_1, VkglTestCase_025556_2);

#define VkglTestCase_025557_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025557_2 "inear_mipmap_linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025557, VkglTestCase_025557_1, VkglTestCase_025557_2);

#define VkglTestCase_025558_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025558_2 "linear_mipmap_linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025558, VkglTestCase_025558_1, VkglTestCase_025558_2);

#define VkglTestCase_025559_1 "dEQP-GLES3.functional.texture.shadow.cube.lin"
#define VkglTestCase_025559_2 "ear_mipmap_linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025559, VkglTestCase_025559_1, VkglTestCase_025559_2);

#define VkglTestCase_025560_1 "dEQP-GLES3.functional.texture.shadow.cube.lin"
#define VkglTestCase_025560_2 "ear_mipmap_linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025560, VkglTestCase_025560_1, VkglTestCase_025560_2);

#define VkglTestCase_025561_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025561_2 "near_mipmap_linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025561, VkglTestCase_025561_1, VkglTestCase_025561_2);

#define VkglTestCase_025562_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025562_2 "inear_mipmap_linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025562, VkglTestCase_025562_1, VkglTestCase_025562_2);

#define VkglTestCase_025563_1 "dEQP-GLES3.functional.texture.shadow.cube.li"
#define VkglTestCase_025563_2 "near_mipmap_linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025563, VkglTestCase_025563_1, VkglTestCase_025563_2);

#define VkglTestCase_025564_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025564_2 "inear_mipmap_linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025564, VkglTestCase_025564_1, VkglTestCase_025564_2);

#define VkglTestCase_025565_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025565_2 "inear_mipmap_linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025565, VkglTestCase_025565_1, VkglTestCase_025565_2);

#define VkglTestCase_025566_1 "dEQP-GLES3.functional.texture.shadow.cube.l"
#define VkglTestCase_025566_2 "inear_mipmap_linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025566, VkglTestCase_025566_1, VkglTestCase_025566_2);

#define VkglTestCase_025567_1 "dEQP-GLES3.functional.texture.shadow.cube."
#define VkglTestCase_025567_2 "linear_mipmap_linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025567, VkglTestCase_025567_1, VkglTestCase_025567_2);
