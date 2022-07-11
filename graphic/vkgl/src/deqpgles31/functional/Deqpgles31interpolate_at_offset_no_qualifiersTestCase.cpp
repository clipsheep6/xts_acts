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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003218_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003218_2 ".interpolate_at_offset.no_qualifiers.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003218, VkglTestCase_003218_1, VkglTestCase_003218_2);

#define VkglTestCase_003219_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003219_2 ".interpolate_at_offset.no_qualifiers.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003219, VkglTestCase_003219_1, VkglTestCase_003219_2);

#define VkglTestCase_003220_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003220_2 "interpolate_at_offset.no_qualifiers.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003220, VkglTestCase_003220_1, VkglTestCase_003220_2);

#define VkglTestCase_003221_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003221_2 "interpolate_at_offset.no_qualifiers.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003221, VkglTestCase_003221_1, VkglTestCase_003221_2);

#define VkglTestCase_003222_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003222_2 "interpolate_at_offset.no_qualifiers.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003222, VkglTestCase_003222_1, VkglTestCase_003222_2);

#define VkglTestCase_003223_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003223_2 "interpolate_at_offset.no_qualifiers.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003223, VkglTestCase_003223_1, VkglTestCase_003223_2);

#define VkglTestCase_003224_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003224_2 "interpolate_at_offset.no_qualifiers.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003224, VkglTestCase_003224_1, VkglTestCase_003224_2);

#define VkglTestCase_003225_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003225_2 "on.interpolate_at_offset.no_qualifiers.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003225, VkglTestCase_003225_1, VkglTestCase_003225_2);

#define VkglTestCase_003226_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003226_2 "n.interpolate_at_offset.no_qualifiers.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003226, VkglTestCase_003226_1, VkglTestCase_003226_2);

#define VkglTestCase_003227_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003227_2 "n.interpolate_at_offset.no_qualifiers.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003227, VkglTestCase_003227_1, VkglTestCase_003227_2);

#define VkglTestCase_003228_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003228_2 "n.interpolate_at_offset.no_qualifiers.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003228, VkglTestCase_003228_1, VkglTestCase_003228_2);

#define VkglTestCase_003229_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003229_2 "n.interpolate_at_offset.no_qualifiers.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003229, VkglTestCase_003229_1, VkglTestCase_003229_2);

#define VkglTestCase_003230_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003230_2 "n.interpolate_at_offset.no_qualifiers.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003230, VkglTestCase_003230_1, VkglTestCase_003230_2);
