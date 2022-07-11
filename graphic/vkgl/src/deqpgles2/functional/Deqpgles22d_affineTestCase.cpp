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

#define VkglTestCase_010611_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010611_2 "ap.2d.affine.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010611, VkglTestCase_010611_1, VkglTestCase_010611_2);

#define VkglTestCase_010612_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010612_2 "ap.2d.affine.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010612, VkglTestCase_010612_1, VkglTestCase_010612_2);

#define VkglTestCase_010613_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010613_2 "ap.2d.affine.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010613, VkglTestCase_010613_1, VkglTestCase_010613_2);

#define VkglTestCase_010614_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010614_2 "map.2d.affine.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010614, VkglTestCase_010614_1, VkglTestCase_010614_2);

#define VkglTestCase_010615_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010615_2 "ap.2d.affine.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010615, VkglTestCase_010615_1, VkglTestCase_010615_2);

#define VkglTestCase_010616_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010616_2 "ap.2d.affine.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010616, VkglTestCase_010616_1, VkglTestCase_010616_2);

#define VkglTestCase_010617_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010617_2 "map.2d.affine.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010617, VkglTestCase_010617_1, VkglTestCase_010617_2);

#define VkglTestCase_010618_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010618_2 "ap.2d.affine.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010618, VkglTestCase_010618_1, VkglTestCase_010618_2);

#define VkglTestCase_010619_1 "dEQP-GLES2.functional.texture.mipm"
#define VkglTestCase_010619_2 "ap.2d.affine.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010619, VkglTestCase_010619_1, VkglTestCase_010619_2);

#define VkglTestCase_010620_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010620_2 "map.2d.affine.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010620, VkglTestCase_010620_1, VkglTestCase_010620_2);
