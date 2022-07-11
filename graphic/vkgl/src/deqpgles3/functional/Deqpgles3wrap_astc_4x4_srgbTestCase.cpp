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

#define VkglTestCase_023383_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023383_2 "_4x4_srgb.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023383, VkglTestCase_023383_1, VkglTestCase_023383_2);

#define VkglTestCase_023384_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023384_2 "c_4x4_srgb.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023384, VkglTestCase_023384_1, VkglTestCase_023384_2);

#define VkglTestCase_023385_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023385_2 "_4x4_srgb.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023385, VkglTestCase_023385_1, VkglTestCase_023385_2);

#define VkglTestCase_023386_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023386_2 "_4x4_srgb.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023386, VkglTestCase_023386_1, VkglTestCase_023386_2);

#define VkglTestCase_023387_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023387_2 "_4x4_srgb.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023387, VkglTestCase_023387_1, VkglTestCase_023387_2);

#define VkglTestCase_023388_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023388_2 "_4x4_srgb.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023388, VkglTestCase_023388_1, VkglTestCase_023388_2);

#define VkglTestCase_023389_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023389_2 "_4x4_srgb.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023389, VkglTestCase_023389_1, VkglTestCase_023389_2);

#define VkglTestCase_023390_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023390_2 "_4x4_srgb.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023390, VkglTestCase_023390_1, VkglTestCase_023390_2);

#define VkglTestCase_023391_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023391_2 "4x4_srgb.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023391, VkglTestCase_023391_1, VkglTestCase_023391_2);

#define VkglTestCase_023392_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023392_2 "_4x4_srgb.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023392, VkglTestCase_023392_1, VkglTestCase_023392_2);

#define VkglTestCase_023393_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023393_2 "4x4_srgb.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023393, VkglTestCase_023393_1, VkglTestCase_023393_2);

#define VkglTestCase_023394_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023394_2 "_4x4_srgb.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023394, VkglTestCase_023394_1, VkglTestCase_023394_2);

#define VkglTestCase_023395_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023395_2 "_4x4_srgb.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023395, VkglTestCase_023395_1, VkglTestCase_023395_2);

#define VkglTestCase_023396_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023396_2 "_4x4_srgb.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023396, VkglTestCase_023396_1, VkglTestCase_023396_2);

#define VkglTestCase_023397_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023397_2 "4x4_srgb.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023397, VkglTestCase_023397_1, VkglTestCase_023397_2);

#define VkglTestCase_023398_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023398_2 "_4x4_srgb.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023398, VkglTestCase_023398_1, VkglTestCase_023398_2);

#define VkglTestCase_023399_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023399_2 "4x4_srgb.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023399, VkglTestCase_023399_1, VkglTestCase_023399_2);

#define VkglTestCase_023400_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023400_2 "_4x4_srgb.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023400, VkglTestCase_023400_1, VkglTestCase_023400_2);

#define VkglTestCase_023401_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023401_2 "x4_srgb.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023401, VkglTestCase_023401_1, VkglTestCase_023401_2);

#define VkglTestCase_023402_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023402_2 "4x4_srgb.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023402, VkglTestCase_023402_1, VkglTestCase_023402_2);

#define VkglTestCase_023403_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023403_2 "x4_srgb.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023403, VkglTestCase_023403_1, VkglTestCase_023403_2);

#define VkglTestCase_023404_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023404_2 "x4_srgb.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023404, VkglTestCase_023404_1, VkglTestCase_023404_2);

#define VkglTestCase_023405_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023405_2 "x4_srgb.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023405, VkglTestCase_023405_1, VkglTestCase_023405_2);

#define VkglTestCase_023406_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023406_2 "x4_srgb.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023406, VkglTestCase_023406_1, VkglTestCase_023406_2);

#define VkglTestCase_023407_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023407_2 "x4_srgb.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023407, VkglTestCase_023407_1, VkglTestCase_023407_2);

#define VkglTestCase_023408_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023408_2 "x4_srgb.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023408, VkglTestCase_023408_1, VkglTestCase_023408_2);

#define VkglTestCase_023409_1 "dEQP-GLES3.functional.texture.wrap.astc_4x"
#define VkglTestCase_023409_2 "4_srgb.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023409, VkglTestCase_023409_1, VkglTestCase_023409_2);

#define VkglTestCase_023410_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023410_2 "x4_srgb.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023410, VkglTestCase_023410_1, VkglTestCase_023410_2);

#define VkglTestCase_023411_1 "dEQP-GLES3.functional.texture.wrap.astc_4x"
#define VkglTestCase_023411_2 "4_srgb.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023411, VkglTestCase_023411_1, VkglTestCase_023411_2);

#define VkglTestCase_023412_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023412_2 "x4_srgb.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023412, VkglTestCase_023412_1, VkglTestCase_023412_2);

#define VkglTestCase_023413_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023413_2 "x4_srgb.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023413, VkglTestCase_023413_1, VkglTestCase_023413_2);

#define VkglTestCase_023414_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023414_2 "x4_srgb.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023414, VkglTestCase_023414_1, VkglTestCase_023414_2);

#define VkglTestCase_023415_1 "dEQP-GLES3.functional.texture.wrap.astc_4x"
#define VkglTestCase_023415_2 "4_srgb.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023415, VkglTestCase_023415_1, VkglTestCase_023415_2);

#define VkglTestCase_023416_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023416_2 "x4_srgb.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023416, VkglTestCase_023416_1, VkglTestCase_023416_2);

#define VkglTestCase_023417_1 "dEQP-GLES3.functional.texture.wrap.astc_4x"
#define VkglTestCase_023417_2 "4_srgb.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023417, VkglTestCase_023417_1, VkglTestCase_023417_2);

#define VkglTestCase_023418_1 "dEQP-GLES3.functional.texture.wrap.astc_4"
#define VkglTestCase_023418_2 "x4_srgb.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023418, VkglTestCase_023418_1, VkglTestCase_023418_2);
