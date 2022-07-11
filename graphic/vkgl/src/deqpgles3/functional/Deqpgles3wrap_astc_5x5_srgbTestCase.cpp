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
#include "../ActsDeqpgles30024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023455_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023455_2 "_5x5_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023455, VkglTestCase_023455_1, VkglTestCase_023455_2);

#define VkglTestCase_023456_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023456_2 "c_5x5_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023456, VkglTestCase_023456_1, VkglTestCase_023456_2);

#define VkglTestCase_023457_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023457_2 "_5x5_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023457, VkglTestCase_023457_1, VkglTestCase_023457_2);

#define VkglTestCase_023458_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023458_2 "_5x5_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023458, VkglTestCase_023458_1, VkglTestCase_023458_2);

#define VkglTestCase_023459_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023459_2 "_5x5_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023459, VkglTestCase_023459_1, VkglTestCase_023459_2);

#define VkglTestCase_023460_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023460_2 "_5x5_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023460, VkglTestCase_023460_1, VkglTestCase_023460_2);

#define VkglTestCase_023461_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023461_2 "_5x5_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023461, VkglTestCase_023461_1, VkglTestCase_023461_2);

#define VkglTestCase_023462_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023462_2 "_5x5_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023462, VkglTestCase_023462_1, VkglTestCase_023462_2);

#define VkglTestCase_023463_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023463_2 "5x5_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023463, VkglTestCase_023463_1, VkglTestCase_023463_2);

#define VkglTestCase_023464_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023464_2 "_5x5_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023464, VkglTestCase_023464_1, VkglTestCase_023464_2);

#define VkglTestCase_023465_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023465_2 "5x5_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023465, VkglTestCase_023465_1, VkglTestCase_023465_2);

#define VkglTestCase_023466_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023466_2 "_5x5_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023466, VkglTestCase_023466_1, VkglTestCase_023466_2);

#define VkglTestCase_023467_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023467_2 "_5x5_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023467, VkglTestCase_023467_1, VkglTestCase_023467_2);

#define VkglTestCase_023468_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023468_2 "_5x5_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023468, VkglTestCase_023468_1, VkglTestCase_023468_2);

#define VkglTestCase_023469_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023469_2 "5x5_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023469, VkglTestCase_023469_1, VkglTestCase_023469_2);

#define VkglTestCase_023470_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023470_2 "_5x5_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023470, VkglTestCase_023470_1, VkglTestCase_023470_2);

#define VkglTestCase_023471_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023471_2 "5x5_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023471, VkglTestCase_023471_1, VkglTestCase_023471_2);

#define VkglTestCase_023472_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023472_2 "_5x5_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023472, VkglTestCase_023472_1, VkglTestCase_023472_2);

#define VkglTestCase_023473_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023473_2 "x5_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023473, VkglTestCase_023473_1, VkglTestCase_023473_2);

#define VkglTestCase_023474_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023474_2 "5x5_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023474, VkglTestCase_023474_1, VkglTestCase_023474_2);

#define VkglTestCase_023475_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023475_2 "x5_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023475, VkglTestCase_023475_1, VkglTestCase_023475_2);

#define VkglTestCase_023476_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023476_2 "x5_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023476, VkglTestCase_023476_1, VkglTestCase_023476_2);

#define VkglTestCase_023477_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023477_2 "x5_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023477, VkglTestCase_023477_1, VkglTestCase_023477_2);

#define VkglTestCase_023478_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023478_2 "x5_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023478, VkglTestCase_023478_1, VkglTestCase_023478_2);

#define VkglTestCase_023479_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023479_2 "x5_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023479, VkglTestCase_023479_1, VkglTestCase_023479_2);

#define VkglTestCase_023480_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023480_2 "x5_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023480, VkglTestCase_023480_1, VkglTestCase_023480_2);

#define VkglTestCase_023481_1 "dEQP-GLES3.functional.texture.wrap.astc_5x"
#define VkglTestCase_023481_2 "5_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023481, VkglTestCase_023481_1, VkglTestCase_023481_2);

#define VkglTestCase_023482_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023482_2 "x5_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023482, VkglTestCase_023482_1, VkglTestCase_023482_2);

#define VkglTestCase_023483_1 "dEQP-GLES3.functional.texture.wrap.astc_5x"
#define VkglTestCase_023483_2 "5_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023483, VkglTestCase_023483_1, VkglTestCase_023483_2);

#define VkglTestCase_023484_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023484_2 "x5_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023484, VkglTestCase_023484_1, VkglTestCase_023484_2);

#define VkglTestCase_023485_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023485_2 "x5_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023485, VkglTestCase_023485_1, VkglTestCase_023485_2);

#define VkglTestCase_023486_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023486_2 "x5_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023486, VkglTestCase_023486_1, VkglTestCase_023486_2);

#define VkglTestCase_023487_1 "dEQP-GLES3.functional.texture.wrap.astc_5x"
#define VkglTestCase_023487_2 "5_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023487, VkglTestCase_023487_1, VkglTestCase_023487_2);

#define VkglTestCase_023488_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023488_2 "x5_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023488, VkglTestCase_023488_1, VkglTestCase_023488_2);

#define VkglTestCase_023489_1 "dEQP-GLES3.functional.texture.wrap.astc_5x"
#define VkglTestCase_023489_2 "5_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023489, VkglTestCase_023489_1, VkglTestCase_023489_2);

#define VkglTestCase_023490_1 "dEQP-GLES3.functional.texture.wrap.astc_5"
#define VkglTestCase_023490_2 "x5_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023490, VkglTestCase_023490_1, VkglTestCase_023490_2);
