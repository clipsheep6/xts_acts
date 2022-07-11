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

#define VkglTestCase_003170_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003170_2 "nterpolate_at_sample.centroid_qualified.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003170, VkglTestCase_003170_1, VkglTestCase_003170_2);

#define VkglTestCase_003171_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003171_2 "terpolate_at_sample.centroid_qualified.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003171, VkglTestCase_003171_1, VkglTestCase_003171_2);

#define VkglTestCase_003172_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003172_2 "terpolate_at_sample.centroid_qualified.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003172, VkglTestCase_003172_1, VkglTestCase_003172_2);

#define VkglTestCase_003173_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003173_2 "terpolate_at_sample.centroid_qualified.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003173, VkglTestCase_003173_1, VkglTestCase_003173_2);

#define VkglTestCase_003174_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003174_2 "terpolate_at_sample.centroid_qualified.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003174, VkglTestCase_003174_1, VkglTestCase_003174_2);

#define VkglTestCase_003175_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003175_2 "terpolate_at_sample.centroid_qualified.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003175, VkglTestCase_003175_1, VkglTestCase_003175_2);

#define VkglTestCase_003176_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003176_2 "erpolate_at_sample.centroid_qualified.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003176, VkglTestCase_003176_1, VkglTestCase_003176_2);

#define VkglTestCase_003177_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003177_2 "interpolate_at_sample.centroid_qualified.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003177, VkglTestCase_003177_1, VkglTestCase_003177_2);

#define VkglTestCase_003178_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003178_2 "interpolate_at_sample.centroid_qualified.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003178, VkglTestCase_003178_1, VkglTestCase_003178_2);

#define VkglTestCase_003179_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003179_2 "interpolate_at_sample.centroid_qualified.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003179, VkglTestCase_003179_1, VkglTestCase_003179_2);

#define VkglTestCase_003180_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003180_2 "interpolate_at_sample.centroid_qualified.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003180, VkglTestCase_003180_1, VkglTestCase_003180_2);

#define VkglTestCase_003181_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003181_2 "interpolate_at_sample.centroid_qualified.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003181, VkglTestCase_003181_1, VkglTestCase_003181_2);

#define VkglTestCase_003182_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003182_2 "nterpolate_at_sample.centroid_qualified.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003182, VkglTestCase_003182_1, VkglTestCase_003182_2);
