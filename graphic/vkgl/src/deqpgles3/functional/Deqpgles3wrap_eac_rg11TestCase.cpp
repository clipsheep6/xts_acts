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
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022591_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022591_2 "p.eac_rg11.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022591, VkglTestCase_022591_1, VkglTestCase_022591_2);

#define VkglTestCase_022592_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022592_2 "p.eac_rg11.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022592, VkglTestCase_022592_1, VkglTestCase_022592_2);

#define VkglTestCase_022593_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022593_2 ".eac_rg11.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022593, VkglTestCase_022593_1, VkglTestCase_022593_2);

#define VkglTestCase_022594_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022594_2 "p.eac_rg11.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022594, VkglTestCase_022594_1, VkglTestCase_022594_2);

#define VkglTestCase_022595_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022595_2 ".eac_rg11.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022595, VkglTestCase_022595_1, VkglTestCase_022595_2);

#define VkglTestCase_022596_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022596_2 "p.eac_rg11.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022596, VkglTestCase_022596_1, VkglTestCase_022596_2);

#define VkglTestCase_022597_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022597_2 ".eac_rg11.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022597, VkglTestCase_022597_1, VkglTestCase_022597_2);

#define VkglTestCase_022598_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022598_2 "p.eac_rg11.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022598, VkglTestCase_022598_1, VkglTestCase_022598_2);

#define VkglTestCase_022599_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022599_2 ".eac_rg11.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022599, VkglTestCase_022599_1, VkglTestCase_022599_2);

#define VkglTestCase_022600_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022600_2 ".eac_rg11.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022600, VkglTestCase_022600_1, VkglTestCase_022600_2);

#define VkglTestCase_022601_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022601_2 ".eac_rg11.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022601, VkglTestCase_022601_1, VkglTestCase_022601_2);

#define VkglTestCase_022602_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022602_2 ".eac_rg11.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022602, VkglTestCase_022602_1, VkglTestCase_022602_2);

#define VkglTestCase_022603_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022603_2 ".eac_rg11.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022603, VkglTestCase_022603_1, VkglTestCase_022603_2);

#define VkglTestCase_022604_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022604_2 "p.eac_rg11.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022604, VkglTestCase_022604_1, VkglTestCase_022604_2);

#define VkglTestCase_022605_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022605_2 ".eac_rg11.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022605, VkglTestCase_022605_1, VkglTestCase_022605_2);

#define VkglTestCase_022606_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022606_2 ".eac_rg11.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022606, VkglTestCase_022606_1, VkglTestCase_022606_2);

#define VkglTestCase_022607_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022607_2 ".eac_rg11.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022607, VkglTestCase_022607_1, VkglTestCase_022607_2);

#define VkglTestCase_022608_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022608_2 ".eac_rg11.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022608, VkglTestCase_022608_1, VkglTestCase_022608_2);

#define VkglTestCase_022609_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022609_2 ".eac_rg11.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022609, VkglTestCase_022609_1, VkglTestCase_022609_2);

#define VkglTestCase_022610_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022610_2 "p.eac_rg11.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022610, VkglTestCase_022610_1, VkglTestCase_022610_2);

#define VkglTestCase_022611_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022611_2 ".eac_rg11.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022611, VkglTestCase_022611_1, VkglTestCase_022611_2);

#define VkglTestCase_022612_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022612_2 ".eac_rg11.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022612, VkglTestCase_022612_1, VkglTestCase_022612_2);

#define VkglTestCase_022613_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022613_2 ".eac_rg11.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022613, VkglTestCase_022613_1, VkglTestCase_022613_2);

#define VkglTestCase_022614_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022614_2 ".eac_rg11.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022614, VkglTestCase_022614_1, VkglTestCase_022614_2);

#define VkglTestCase_022615_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022615_2 ".eac_rg11.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022615, VkglTestCase_022615_1, VkglTestCase_022615_2);

#define VkglTestCase_022616_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022616_2 ".eac_rg11.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022616, VkglTestCase_022616_1, VkglTestCase_022616_2);

#define VkglTestCase_022617_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022617_2 "eac_rg11.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022617, VkglTestCase_022617_1, VkglTestCase_022617_2);

#define VkglTestCase_022618_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022618_2 ".eac_rg11.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022618, VkglTestCase_022618_1, VkglTestCase_022618_2);

#define VkglTestCase_022619_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022619_2 "eac_rg11.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022619, VkglTestCase_022619_1, VkglTestCase_022619_2);

#define VkglTestCase_022620_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022620_2 ".eac_rg11.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022620, VkglTestCase_022620_1, VkglTestCase_022620_2);

#define VkglTestCase_022621_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022621_2 ".eac_rg11.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022621, VkglTestCase_022621_1, VkglTestCase_022621_2);

#define VkglTestCase_022622_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022622_2 ".eac_rg11.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022622, VkglTestCase_022622_1, VkglTestCase_022622_2);

#define VkglTestCase_022623_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022623_2 "eac_rg11.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022623, VkglTestCase_022623_1, VkglTestCase_022623_2);

#define VkglTestCase_022624_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022624_2 ".eac_rg11.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022624, VkglTestCase_022624_1, VkglTestCase_022624_2);

#define VkglTestCase_022625_1 "dEQP-GLES3.functional.texture.wrap."
#define VkglTestCase_022625_2 "eac_rg11.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022625, VkglTestCase_022625_1, VkglTestCase_022625_2);

#define VkglTestCase_022626_1 "dEQP-GLES3.functional.texture.wrap"
#define VkglTestCase_022626_2 ".eac_rg11.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022626, VkglTestCase_022626_1, VkglTestCase_022626_2);
