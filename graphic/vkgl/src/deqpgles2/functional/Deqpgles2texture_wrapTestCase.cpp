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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010340_1 "dEQP-GLES2.functional.texture.wra"
#define VkglTestCase_010340_2 "p.clamp_clamp_nearest_npot_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010340, VkglTestCase_010340_1, VkglTestCase_010340_2);

#define VkglTestCase_010341_1 "dEQP-GLES2.functional.texture.w"
#define VkglTestCase_010341_2 "rap.clamp_clamp_nearest_npot_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010341, VkglTestCase_010341_1, VkglTestCase_010341_2);

#define VkglTestCase_010342_1 "dEQP-GLES2.functional.texture.wra"
#define VkglTestCase_010342_2 "p.clamp_clamp_linear_pot_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010342, VkglTestCase_010342_1, VkglTestCase_010342_2);

#define VkglTestCase_010343_1 "dEQP-GLES2.functional.texture.wr"
#define VkglTestCase_010343_2 "ap.clamp_clamp_linear_pot_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010343, VkglTestCase_010343_1, VkglTestCase_010343_2);

#define VkglTestCase_010344_1 "dEQP-GLES2.functional.texture.wra"
#define VkglTestCase_010344_2 "p.clamp_clamp_linear_pot_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010344, VkglTestCase_010344_1, VkglTestCase_010344_2);

#define VkglTestCase_010345_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010345_2 "wrap.clamp_clamp_linear_pot_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010345, VkglTestCase_010345_1, VkglTestCase_010345_2);

#define VkglTestCase_010346_1 "dEQP-GLES2.functional.texture.wra"
#define VkglTestCase_010346_2 "p.clamp_clamp_linear_npot_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010346, VkglTestCase_010346_1, VkglTestCase_010346_2);

#define VkglTestCase_010347_1 "dEQP-GLES2.functional.texture.wr"
#define VkglTestCase_010347_2 "ap.clamp_clamp_linear_npot_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010347, VkglTestCase_010347_1, VkglTestCase_010347_2);

#define VkglTestCase_010348_1 "dEQP-GLES2.functional.texture.wra"
#define VkglTestCase_010348_2 "p.clamp_clamp_linear_npot_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010348, VkglTestCase_010348_1, VkglTestCase_010348_2);

#define VkglTestCase_010349_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010349_2 "wrap.clamp_clamp_linear_npot_l8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010349, VkglTestCase_010349_1, VkglTestCase_010349_2);

#define VkglTestCase_010350_1 "dEQP-GLES2.functional.texture.wra"
#define VkglTestCase_010350_2 "p.clamp_mirror_linear_pot_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010350, VkglTestCase_010350_1, VkglTestCase_010350_2);

#define VkglTestCase_010351_1 "dEQP-GLES2.functional.texture.wra"
#define VkglTestCase_010351_2 "p.mirror_clamp_linear_pot_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010351, VkglTestCase_010351_1, VkglTestCase_010351_2);

#define VkglTestCase_010352_1 "dEQP-GLES2.functional.texture.wrap"
#define VkglTestCase_010352_2 ".mirror_mirror_linear_pot_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010352, VkglTestCase_010352_1, VkglTestCase_010352_2);

#define VkglTestCase_010353_1 "dEQP-GLES2.functional.texture.wr"
#define VkglTestCase_010353_2 "ap.clamp_clamp_nearest_npot_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010353, VkglTestCase_010353_1, VkglTestCase_010353_2);

#define VkglTestCase_010354_1 "dEQP-GLES2.functional.texture.w"
#define VkglTestCase_010354_2 "rap.clamp_clamp_linear_npot_etc1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010354, VkglTestCase_010354_1, VkglTestCase_010354_2);
