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

#define VkglTestCase_003231_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003231_2 "nterpolate_at_offset.centroid_qualifier.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003231, VkglTestCase_003231_1, VkglTestCase_003231_2);

#define VkglTestCase_003232_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003232_2 "terpolate_at_offset.centroid_qualifier.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003232, VkglTestCase_003232_1, VkglTestCase_003232_2);

#define VkglTestCase_003233_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003233_2 "terpolate_at_offset.centroid_qualifier.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003233, VkglTestCase_003233_1, VkglTestCase_003233_2);

#define VkglTestCase_003234_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003234_2 "terpolate_at_offset.centroid_qualifier.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003234, VkglTestCase_003234_1, VkglTestCase_003234_2);

#define VkglTestCase_003235_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003235_2 "terpolate_at_offset.centroid_qualifier.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003235, VkglTestCase_003235_1, VkglTestCase_003235_2);

#define VkglTestCase_003236_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003236_2 "terpolate_at_offset.centroid_qualifier.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003236, VkglTestCase_003236_1, VkglTestCase_003236_2);

#define VkglTestCase_003237_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003237_2 "erpolate_at_offset.centroid_qualifier.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003237, VkglTestCase_003237_1, VkglTestCase_003237_2);

#define VkglTestCase_003238_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003238_2 "interpolate_at_offset.centroid_qualifier.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003238, VkglTestCase_003238_1, VkglTestCase_003238_2);

#define VkglTestCase_003239_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003239_2 "interpolate_at_offset.centroid_qualifier.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003239, VkglTestCase_003239_1, VkglTestCase_003239_2);

#define VkglTestCase_003240_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003240_2 "interpolate_at_offset.centroid_qualifier.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003240, VkglTestCase_003240_1, VkglTestCase_003240_2);

#define VkglTestCase_003241_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003241_2 "interpolate_at_offset.centroid_qualifier.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003241, VkglTestCase_003241_1, VkglTestCase_003241_2);

#define VkglTestCase_003242_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003242_2 "interpolate_at_offset.centroid_qualifier.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003242, VkglTestCase_003242_1, VkglTestCase_003242_2);

#define VkglTestCase_003243_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003243_2 "nterpolate_at_offset.centroid_qualifier.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003243, VkglTestCase_003243_1, VkglTestCase_003243_2);
