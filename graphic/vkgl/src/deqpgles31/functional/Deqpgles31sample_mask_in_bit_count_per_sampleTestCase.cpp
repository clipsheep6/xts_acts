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

#define VkglTestCase_003009_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_003009_2 "ple_mask_in.bit_count_per_sample.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003009, VkglTestCase_003009_1, VkglTestCase_003009_2);

#define VkglTestCase_003010_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003010_2 "le_mask_in.bit_count_per_sample.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003010, VkglTestCase_003010_1, VkglTestCase_003010_2);

#define VkglTestCase_003011_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003011_2 "le_mask_in.bit_count_per_sample.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003011, VkglTestCase_003011_1, VkglTestCase_003011_2);

#define VkglTestCase_003012_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003012_2 "le_mask_in.bit_count_per_sample.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003012, VkglTestCase_003012_1, VkglTestCase_003012_2);

#define VkglTestCase_003013_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003013_2 "le_mask_in.bit_count_per_sample.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003013, VkglTestCase_003013_1, VkglTestCase_003013_2);

#define VkglTestCase_003014_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003014_2 "le_mask_in.bit_count_per_sample.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003014, VkglTestCase_003014_1, VkglTestCase_003014_2);

#define VkglTestCase_003015_1 "dEQP-GLES31.functional.shaders.sample_variables.sampl"
#define VkglTestCase_003015_2 "e_mask_in.bit_count_per_sample.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003015, VkglTestCase_003015_1, VkglTestCase_003015_2);

#define VkglTestCase_003016_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003016_2 "mple_mask_in.bit_count_per_sample.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003016, VkglTestCase_003016_1, VkglTestCase_003016_2);

#define VkglTestCase_003017_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003017_2 "mple_mask_in.bit_count_per_sample.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003017, VkglTestCase_003017_1, VkglTestCase_003017_2);

#define VkglTestCase_003018_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003018_2 "mple_mask_in.bit_count_per_sample.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003018, VkglTestCase_003018_1, VkglTestCase_003018_2);

#define VkglTestCase_003019_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003019_2 "mple_mask_in.bit_count_per_sample.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003019, VkglTestCase_003019_1, VkglTestCase_003019_2);

#define VkglTestCase_003020_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003020_2 "mple_mask_in.bit_count_per_sample.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003020, VkglTestCase_003020_1, VkglTestCase_003020_2);

#define VkglTestCase_003021_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_003021_2 "ple_mask_in.bit_count_per_sample.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003021, VkglTestCase_003021_1, VkglTestCase_003021_2);
