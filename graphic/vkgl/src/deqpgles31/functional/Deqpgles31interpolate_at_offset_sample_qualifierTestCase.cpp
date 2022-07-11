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

#define VkglTestCase_003244_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003244_2 "interpolate_at_offset.sample_qualifier.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003244, VkglTestCase_003244_1, VkglTestCase_003244_2);

#define VkglTestCase_003245_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003245_2 "nterpolate_at_offset.sample_qualifier.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003245, VkglTestCase_003245_1, VkglTestCase_003245_2);

#define VkglTestCase_003246_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003246_2 "nterpolate_at_offset.sample_qualifier.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003246, VkglTestCase_003246_1, VkglTestCase_003246_2);

#define VkglTestCase_003247_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003247_2 "nterpolate_at_offset.sample_qualifier.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003247, VkglTestCase_003247_1, VkglTestCase_003247_2);

#define VkglTestCase_003248_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003248_2 "nterpolate_at_offset.sample_qualifier.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003248, VkglTestCase_003248_1, VkglTestCase_003248_2);

#define VkglTestCase_003249_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003249_2 "nterpolate_at_offset.sample_qualifier.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003249, VkglTestCase_003249_1, VkglTestCase_003249_2);

#define VkglTestCase_003250_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003250_2 "terpolate_at_offset.sample_qualifier.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003250, VkglTestCase_003250_1, VkglTestCase_003250_2);

#define VkglTestCase_003251_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003251_2 ".interpolate_at_offset.sample_qualifier.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003251, VkglTestCase_003251_1, VkglTestCase_003251_2);

#define VkglTestCase_003252_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003252_2 ".interpolate_at_offset.sample_qualifier.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003252, VkglTestCase_003252_1, VkglTestCase_003252_2);

#define VkglTestCase_003253_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003253_2 ".interpolate_at_offset.sample_qualifier.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003253, VkglTestCase_003253_1, VkglTestCase_003253_2);

#define VkglTestCase_003254_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003254_2 ".interpolate_at_offset.sample_qualifier.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003254, VkglTestCase_003254_1, VkglTestCase_003254_2);

#define VkglTestCase_003255_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003255_2 ".interpolate_at_offset.sample_qualifier.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003255, VkglTestCase_003255_1, VkglTestCase_003255_2);

#define VkglTestCase_003256_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003256_2 "interpolate_at_offset.sample_qualifier.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003256, VkglTestCase_003256_1, VkglTestCase_003256_2);
