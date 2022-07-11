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

#define VkglTestCase_022627_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022627_2 "c_signed_rg11.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022627, VkglTestCase_022627_1, VkglTestCase_022627_2);

#define VkglTestCase_022628_1 "dEQP-GLES3.functional.texture.wrap.e"
#define VkglTestCase_022628_2 "ac_signed_rg11.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022628, VkglTestCase_022628_1, VkglTestCase_022628_2);

#define VkglTestCase_022629_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022629_2 "c_signed_rg11.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022629, VkglTestCase_022629_1, VkglTestCase_022629_2);

#define VkglTestCase_022630_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022630_2 "c_signed_rg11.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022630, VkglTestCase_022630_1, VkglTestCase_022630_2);

#define VkglTestCase_022631_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022631_2 "c_signed_rg11.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022631, VkglTestCase_022631_1, VkglTestCase_022631_2);

#define VkglTestCase_022632_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022632_2 "c_signed_rg11.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022632, VkglTestCase_022632_1, VkglTestCase_022632_2);

#define VkglTestCase_022633_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022633_2 "c_signed_rg11.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022633, VkglTestCase_022633_1, VkglTestCase_022633_2);

#define VkglTestCase_022634_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022634_2 "c_signed_rg11.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022634, VkglTestCase_022634_1, VkglTestCase_022634_2);

#define VkglTestCase_022635_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022635_2 "_signed_rg11.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022635, VkglTestCase_022635_1, VkglTestCase_022635_2);

#define VkglTestCase_022636_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022636_2 "c_signed_rg11.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022636, VkglTestCase_022636_1, VkglTestCase_022636_2);

#define VkglTestCase_022637_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022637_2 "_signed_rg11.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022637, VkglTestCase_022637_1, VkglTestCase_022637_2);

#define VkglTestCase_022638_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022638_2 "c_signed_rg11.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022638, VkglTestCase_022638_1, VkglTestCase_022638_2);

#define VkglTestCase_022639_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022639_2 "c_signed_rg11.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022639, VkglTestCase_022639_1, VkglTestCase_022639_2);

#define VkglTestCase_022640_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022640_2 "c_signed_rg11.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022640, VkglTestCase_022640_1, VkglTestCase_022640_2);

#define VkglTestCase_022641_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022641_2 "_signed_rg11.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022641, VkglTestCase_022641_1, VkglTestCase_022641_2);

#define VkglTestCase_022642_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022642_2 "c_signed_rg11.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022642, VkglTestCase_022642_1, VkglTestCase_022642_2);

#define VkglTestCase_022643_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022643_2 "_signed_rg11.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022643, VkglTestCase_022643_1, VkglTestCase_022643_2);

#define VkglTestCase_022644_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022644_2 "c_signed_rg11.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022644, VkglTestCase_022644_1, VkglTestCase_022644_2);

#define VkglTestCase_022645_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022645_2 "c_signed_rg11.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022645, VkglTestCase_022645_1, VkglTestCase_022645_2);

#define VkglTestCase_022646_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022646_2 "c_signed_rg11.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022646, VkglTestCase_022646_1, VkglTestCase_022646_2);

#define VkglTestCase_022647_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022647_2 "_signed_rg11.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022647, VkglTestCase_022647_1, VkglTestCase_022647_2);

#define VkglTestCase_022648_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022648_2 "c_signed_rg11.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022648, VkglTestCase_022648_1, VkglTestCase_022648_2);

#define VkglTestCase_022649_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022649_2 "_signed_rg11.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022649, VkglTestCase_022649_1, VkglTestCase_022649_2);

#define VkglTestCase_022650_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022650_2 "c_signed_rg11.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022650, VkglTestCase_022650_1, VkglTestCase_022650_2);

#define VkglTestCase_022651_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022651_2 "_signed_rg11.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022651, VkglTestCase_022651_1, VkglTestCase_022651_2);

#define VkglTestCase_022652_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022652_2 "c_signed_rg11.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022652, VkglTestCase_022652_1, VkglTestCase_022652_2);

#define VkglTestCase_022653_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022653_2 "_signed_rg11.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022653, VkglTestCase_022653_1, VkglTestCase_022653_2);

#define VkglTestCase_022654_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022654_2 "_signed_rg11.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022654, VkglTestCase_022654_1, VkglTestCase_022654_2);

#define VkglTestCase_022655_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022655_2 "_signed_rg11.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022655, VkglTestCase_022655_1, VkglTestCase_022655_2);

#define VkglTestCase_022656_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022656_2 "_signed_rg11.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022656, VkglTestCase_022656_1, VkglTestCase_022656_2);

#define VkglTestCase_022657_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022657_2 "_signed_rg11.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022657, VkglTestCase_022657_1, VkglTestCase_022657_2);

#define VkglTestCase_022658_1 "dEQP-GLES3.functional.texture.wrap.ea"
#define VkglTestCase_022658_2 "c_signed_rg11.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022658, VkglTestCase_022658_1, VkglTestCase_022658_2);

#define VkglTestCase_022659_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022659_2 "_signed_rg11.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022659, VkglTestCase_022659_1, VkglTestCase_022659_2);

#define VkglTestCase_022660_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022660_2 "_signed_rg11.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022660, VkglTestCase_022660_1, VkglTestCase_022660_2);

#define VkglTestCase_022661_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022661_2 "_signed_rg11.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022661, VkglTestCase_022661_1, VkglTestCase_022661_2);

#define VkglTestCase_022662_1 "dEQP-GLES3.functional.texture.wrap.eac"
#define VkglTestCase_022662_2 "_signed_rg11.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022662, VkglTestCase_022662_1, VkglTestCase_022662_2);
