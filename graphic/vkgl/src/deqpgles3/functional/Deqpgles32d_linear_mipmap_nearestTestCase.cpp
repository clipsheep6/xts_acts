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

#define VkglTestCase_025352_1 "dEQP-GLES3.functional.texture.shadow.2d.linear"
#define VkglTestCase_025352_2 "_mipmap_nearest.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025352, VkglTestCase_025352_1, VkglTestCase_025352_2);

#define VkglTestCase_025353_1 "dEQP-GLES3.functional.texture.shadow.2d.linear_"
#define VkglTestCase_025353_2 "mipmap_nearest.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025353, VkglTestCase_025353_1, VkglTestCase_025353_2);

#define VkglTestCase_025354_1 "dEQP-GLES3.functional.texture.shadow.2d.linear"
#define VkglTestCase_025354_2 "_mipmap_nearest.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025354, VkglTestCase_025354_1, VkglTestCase_025354_2);

#define VkglTestCase_025355_1 "dEQP-GLES3.functional.texture.shadow.2d.linear_m"
#define VkglTestCase_025355_2 "ipmap_nearest.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025355, VkglTestCase_025355_1, VkglTestCase_025355_2);

#define VkglTestCase_025356_1 "dEQP-GLES3.functional.texture.shadow.2d.linear_m"
#define VkglTestCase_025356_2 "ipmap_nearest.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025356, VkglTestCase_025356_1, VkglTestCase_025356_2);

#define VkglTestCase_025357_1 "dEQP-GLES3.functional.texture.shadow.2d.linear_"
#define VkglTestCase_025357_2 "mipmap_nearest.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025357, VkglTestCase_025357_1, VkglTestCase_025357_2);

#define VkglTestCase_025358_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025358_2 "near_mipmap_nearest.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025358, VkglTestCase_025358_1, VkglTestCase_025358_2);

#define VkglTestCase_025359_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025359_2 "near_mipmap_nearest.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025359, VkglTestCase_025359_1, VkglTestCase_025359_2);

#define VkglTestCase_025360_1 "dEQP-GLES3.functional.texture.shadow.2d.l"
#define VkglTestCase_025360_2 "inear_mipmap_nearest.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025360, VkglTestCase_025360_1, VkglTestCase_025360_2);

#define VkglTestCase_025361_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025361_2 "ear_mipmap_nearest.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025361, VkglTestCase_025361_1, VkglTestCase_025361_2);

#define VkglTestCase_025362_1 "dEQP-GLES3.functional.texture.shadow.2d.line"
#define VkglTestCase_025362_2 "ar_mipmap_nearest.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025362, VkglTestCase_025362_1, VkglTestCase_025362_2);

#define VkglTestCase_025363_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025363_2 "ear_mipmap_nearest.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025363, VkglTestCase_025363_1, VkglTestCase_025363_2);

#define VkglTestCase_025364_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025364_2 "near_mipmap_nearest.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025364, VkglTestCase_025364_1, VkglTestCase_025364_2);

#define VkglTestCase_025365_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025365_2 "ear_mipmap_nearest.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025365, VkglTestCase_025365_1, VkglTestCase_025365_2);

#define VkglTestCase_025366_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025366_2 "near_mipmap_nearest.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025366, VkglTestCase_025366_1, VkglTestCase_025366_2);

#define VkglTestCase_025367_1 "dEQP-GLES3.functional.texture.shadow.2d.line"
#define VkglTestCase_025367_2 "ar_mipmap_nearest.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025367, VkglTestCase_025367_1, VkglTestCase_025367_2);

#define VkglTestCase_025368_1 "dEQP-GLES3.functional.texture.shadow.2d.linea"
#define VkglTestCase_025368_2 "r_mipmap_nearest.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025368, VkglTestCase_025368_1, VkglTestCase_025368_2);

#define VkglTestCase_025369_1 "dEQP-GLES3.functional.texture.shadow.2d.line"
#define VkglTestCase_025369_2 "ar_mipmap_nearest.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025369, VkglTestCase_025369_1, VkglTestCase_025369_2);

#define VkglTestCase_025370_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025370_2 "ear_mipmap_nearest.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025370, VkglTestCase_025370_1, VkglTestCase_025370_2);

#define VkglTestCase_025371_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025371_2 "ear_mipmap_nearest.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025371, VkglTestCase_025371_1, VkglTestCase_025371_2);

#define VkglTestCase_025372_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025372_2 "near_mipmap_nearest.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025372, VkglTestCase_025372_1, VkglTestCase_025372_2);

#define VkglTestCase_025373_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025373_2 "near_mipmap_nearest.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025373, VkglTestCase_025373_1, VkglTestCase_025373_2);

#define VkglTestCase_025374_1 "dEQP-GLES3.functional.texture.shadow.2d.lin"
#define VkglTestCase_025374_2 "ear_mipmap_nearest.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025374, VkglTestCase_025374_1, VkglTestCase_025374_2);

#define VkglTestCase_025375_1 "dEQP-GLES3.functional.texture.shadow.2d.li"
#define VkglTestCase_025375_2 "near_mipmap_nearest.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025375, VkglTestCase_025375_1, VkglTestCase_025375_2);
