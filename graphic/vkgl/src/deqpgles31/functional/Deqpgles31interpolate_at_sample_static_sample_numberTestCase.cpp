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

#define VkglTestCase_003138_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003138_2 "terpolate_at_sample.static_sample_number.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003138, VkglTestCase_003138_1, VkglTestCase_003138_2);

#define VkglTestCase_003139_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003139_2 "erpolate_at_sample.static_sample_number.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003139, VkglTestCase_003139_1, VkglTestCase_003139_2);

#define VkglTestCase_003140_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003140_2 "erpolate_at_sample.static_sample_number.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003140, VkglTestCase_003140_1, VkglTestCase_003140_2);

#define VkglTestCase_003141_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003141_2 "erpolate_at_sample.static_sample_number.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003141, VkglTestCase_003141_1, VkglTestCase_003141_2);

#define VkglTestCase_003142_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003142_2 "erpolate_at_sample.static_sample_number.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003142, VkglTestCase_003142_1, VkglTestCase_003142_2);

#define VkglTestCase_003143_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003143_2 "erpolate_at_sample.static_sample_number.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003143, VkglTestCase_003143_1, VkglTestCase_003143_2);

#define VkglTestCase_003144_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.inte"
#define VkglTestCase_003144_2 "rpolate_at_sample.static_sample_number.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003144, VkglTestCase_003144_1, VkglTestCase_003144_2);

#define VkglTestCase_003145_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003145_2 "nterpolate_at_sample.static_sample_number.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003145, VkglTestCase_003145_1, VkglTestCase_003145_2);

#define VkglTestCase_003146_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003146_2 "nterpolate_at_sample.static_sample_number.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003146, VkglTestCase_003146_1, VkglTestCase_003146_2);

#define VkglTestCase_003147_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003147_2 "nterpolate_at_sample.static_sample_number.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003147, VkglTestCase_003147_1, VkglTestCase_003147_2);

#define VkglTestCase_003148_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003148_2 "nterpolate_at_sample.static_sample_number.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003148, VkglTestCase_003148_1, VkglTestCase_003148_2);

#define VkglTestCase_003149_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003149_2 "nterpolate_at_sample.static_sample_number.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003149, VkglTestCase_003149_1, VkglTestCase_003149_2);

#define VkglTestCase_003150_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003150_2 "terpolate_at_sample.static_sample_number.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003150, VkglTestCase_003150_1, VkglTestCase_003150_2);
