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
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002996_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_002996_2 "ple_mask_in.bit_count_per_pixel.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002996, VkglTestCase_002996_1, VkglTestCase_002996_2);

#define VkglTestCase_002997_1 "dEQP-GLES31.functional.shaders.sample_variables.sam"
#define VkglTestCase_002997_2 "ple_mask_in.bit_count_per_pixel.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002997, VkglTestCase_002997_1, VkglTestCase_002997_2);

#define VkglTestCase_002998_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_002998_2 "le_mask_in.bit_count_per_pixel.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002998, VkglTestCase_002998_1, VkglTestCase_002998_2);

#define VkglTestCase_002999_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_002999_2 "le_mask_in.bit_count_per_pixel.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002999, VkglTestCase_002999_1, VkglTestCase_002999_2);

#define VkglTestCase_003000_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003000_2 "le_mask_in.bit_count_per_pixel.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003000, VkglTestCase_003000_1, VkglTestCase_003000_2);

#define VkglTestCase_003001_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003001_2 "le_mask_in.bit_count_per_pixel.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003001, VkglTestCase_003001_1, VkglTestCase_003001_2);

#define VkglTestCase_003002_1 "dEQP-GLES31.functional.shaders.sample_variables.samp"
#define VkglTestCase_003002_2 "le_mask_in.bit_count_per_pixel.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003002, VkglTestCase_003002_1, VkglTestCase_003002_2);

#define VkglTestCase_003003_1 "dEQP-GLES31.functional.shaders.sample_variables.s"
#define VkglTestCase_003003_2 "ample_mask_in.bit_count_per_pixel.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003003, VkglTestCase_003003_1, VkglTestCase_003003_2);

#define VkglTestCase_003004_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003004_2 "mple_mask_in.bit_count_per_pixel.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003004, VkglTestCase_003004_1, VkglTestCase_003004_2);

#define VkglTestCase_003005_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003005_2 "mple_mask_in.bit_count_per_pixel.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003005, VkglTestCase_003005_1, VkglTestCase_003005_2);

#define VkglTestCase_003006_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003006_2 "mple_mask_in.bit_count_per_pixel.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003006, VkglTestCase_003006_1, VkglTestCase_003006_2);

#define VkglTestCase_003007_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003007_2 "mple_mask_in.bit_count_per_pixel.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003007, VkglTestCase_003007_1, VkglTestCase_003007_2);

#define VkglTestCase_003008_1 "dEQP-GLES31.functional.shaders.sample_variables.sa"
#define VkglTestCase_003008_2 "mple_mask_in.bit_count_per_pixel.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_003008, VkglTestCase_003008_1, VkglTestCase_003008_2);
