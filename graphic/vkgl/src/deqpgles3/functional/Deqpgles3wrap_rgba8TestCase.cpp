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

#define VkglTestCase_022447_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022447_2 "ap.rgba8.clamp_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022447, VkglTestCase_022447_1, VkglTestCase_022447_2);

#define VkglTestCase_022448_1 "dEQP-GLES3.functional.texture.w"
#define VkglTestCase_022448_2 "rap.rgba8.clamp_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022448, VkglTestCase_022448_1, VkglTestCase_022448_2);

#define VkglTestCase_022449_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022449_2 "ap.rgba8.clamp_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022449, VkglTestCase_022449_1, VkglTestCase_022449_2);

#define VkglTestCase_022450_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022450_2 "ap.rgba8.clamp_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022450, VkglTestCase_022450_1, VkglTestCase_022450_2);

#define VkglTestCase_022451_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022451_2 "ap.rgba8.clamp_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022451, VkglTestCase_022451_1, VkglTestCase_022451_2);

#define VkglTestCase_022452_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022452_2 "ap.rgba8.clamp_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022452, VkglTestCase_022452_1, VkglTestCase_022452_2);

#define VkglTestCase_022453_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022453_2 "ap.rgba8.repeat_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022453, VkglTestCase_022453_1, VkglTestCase_022453_2);

#define VkglTestCase_022454_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022454_2 "ap.rgba8.repeat_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022454, VkglTestCase_022454_1, VkglTestCase_022454_2);

#define VkglTestCase_022455_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022455_2 "p.rgba8.repeat_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022455, VkglTestCase_022455_1, VkglTestCase_022455_2);

#define VkglTestCase_022456_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022456_2 "ap.rgba8.repeat_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022456, VkglTestCase_022456_1, VkglTestCase_022456_2);

#define VkglTestCase_022457_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022457_2 "p.rgba8.repeat_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022457, VkglTestCase_022457_1, VkglTestCase_022457_2);

#define VkglTestCase_022458_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022458_2 "ap.rgba8.repeat_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022458, VkglTestCase_022458_1, VkglTestCase_022458_2);

#define VkglTestCase_022459_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022459_2 "ap.rgba8.mirror_clamp_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022459, VkglTestCase_022459_1, VkglTestCase_022459_2);

#define VkglTestCase_022460_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022460_2 "ap.rgba8.mirror_clamp_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022460, VkglTestCase_022460_1, VkglTestCase_022460_2);

#define VkglTestCase_022461_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022461_2 "p.rgba8.mirror_repeat_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022461, VkglTestCase_022461_1, VkglTestCase_022461_2);

#define VkglTestCase_022462_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022462_2 "ap.rgba8.mirror_repeat_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022462, VkglTestCase_022462_1, VkglTestCase_022462_2);

#define VkglTestCase_022463_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022463_2 "p.rgba8.mirror_mirror_nearest_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022463, VkglTestCase_022463_1, VkglTestCase_022463_2);

#define VkglTestCase_022464_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022464_2 "ap.rgba8.mirror_mirror_linear_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022464, VkglTestCase_022464_1, VkglTestCase_022464_2);

#define VkglTestCase_022465_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022465_2 "ap.rgba8.clamp_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022465, VkglTestCase_022465_1, VkglTestCase_022465_2);

#define VkglTestCase_022466_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022466_2 "ap.rgba8.clamp_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022466, VkglTestCase_022466_1, VkglTestCase_022466_2);

#define VkglTestCase_022467_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022467_2 "p.rgba8.clamp_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022467, VkglTestCase_022467_1, VkglTestCase_022467_2);

#define VkglTestCase_022468_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022468_2 "ap.rgba8.clamp_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022468, VkglTestCase_022468_1, VkglTestCase_022468_2);

#define VkglTestCase_022469_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022469_2 "p.rgba8.clamp_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022469, VkglTestCase_022469_1, VkglTestCase_022469_2);

#define VkglTestCase_022470_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022470_2 "ap.rgba8.clamp_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022470, VkglTestCase_022470_1, VkglTestCase_022470_2);

#define VkglTestCase_022471_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022471_2 "p.rgba8.repeat_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022471, VkglTestCase_022471_1, VkglTestCase_022471_2);

#define VkglTestCase_022472_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022472_2 "ap.rgba8.repeat_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022472, VkglTestCase_022472_1, VkglTestCase_022472_2);

#define VkglTestCase_022473_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022473_2 "p.rgba8.repeat_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022473, VkglTestCase_022473_1, VkglTestCase_022473_2);

#define VkglTestCase_022474_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022474_2 "p.rgba8.repeat_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022474, VkglTestCase_022474_1, VkglTestCase_022474_2);

#define VkglTestCase_022475_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022475_2 "p.rgba8.repeat_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022475, VkglTestCase_022475_1, VkglTestCase_022475_2);

#define VkglTestCase_022476_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022476_2 "p.rgba8.repeat_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022476, VkglTestCase_022476_1, VkglTestCase_022476_2);

#define VkglTestCase_022477_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022477_2 "p.rgba8.mirror_clamp_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022477, VkglTestCase_022477_1, VkglTestCase_022477_2);

#define VkglTestCase_022478_1 "dEQP-GLES3.functional.texture.wr"
#define VkglTestCase_022478_2 "ap.rgba8.mirror_clamp_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022478, VkglTestCase_022478_1, VkglTestCase_022478_2);

#define VkglTestCase_022479_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022479_2 "p.rgba8.mirror_repeat_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022479, VkglTestCase_022479_1, VkglTestCase_022479_2);

#define VkglTestCase_022480_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022480_2 "p.rgba8.mirror_repeat_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022480, VkglTestCase_022480_1, VkglTestCase_022480_2);

#define VkglTestCase_022481_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022481_2 "p.rgba8.mirror_mirror_nearest_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022481, VkglTestCase_022481_1, VkglTestCase_022481_2);

#define VkglTestCase_022482_1 "dEQP-GLES3.functional.texture.wra"
#define VkglTestCase_022482_2 "p.rgba8.mirror_mirror_linear_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022482, VkglTestCase_022482_1, VkglTestCase_022482_2);
