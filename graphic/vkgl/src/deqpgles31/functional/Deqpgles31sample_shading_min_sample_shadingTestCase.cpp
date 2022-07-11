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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016494_1 "dEQP-GLES31.functional.sample_shading.min"
#define VkglTestCase_016494_2 "_sample_shading.default_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016494, VkglTestCase_016494_1, VkglTestCase_016494_2);

#define VkglTestCase_016495_1 "dEQP-GLES31.functional.sample_shading.min_"
#define VkglTestCase_016495_2 "sample_shading.default_framebuffer_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016495, VkglTestCase_016495_1, VkglTestCase_016495_2);

#define VkglTestCase_016496_1 "dEQP-GLES31.functional.sample_shading.min_samp"
#define VkglTestCase_016496_2 "le_shading.multisample_texture_samples_2_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016496, VkglTestCase_016496_1, VkglTestCase_016496_2);

#define VkglTestCase_016497_1 "dEQP-GLES31.functional.sample_shading.min_sampl"
#define VkglTestCase_016497_2 "e_shading.multisample_texture_samples_2_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016497, VkglTestCase_016497_1, VkglTestCase_016497_2);

#define VkglTestCase_016498_1 "dEQP-GLES31.functional.sample_shading.min_samp"
#define VkglTestCase_016498_2 "le_shading.multisample_texture_samples_4_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016498, VkglTestCase_016498_1, VkglTestCase_016498_2);

#define VkglTestCase_016499_1 "dEQP-GLES31.functional.sample_shading.min_sampl"
#define VkglTestCase_016499_2 "e_shading.multisample_texture_samples_4_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016499, VkglTestCase_016499_1, VkglTestCase_016499_2);

#define VkglTestCase_016500_1 "dEQP-GLES31.functional.sample_shading.min_samp"
#define VkglTestCase_016500_2 "le_shading.multisample_texture_samples_8_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016500, VkglTestCase_016500_1, VkglTestCase_016500_2);

#define VkglTestCase_016501_1 "dEQP-GLES31.functional.sample_shading.min_sampl"
#define VkglTestCase_016501_2 "e_shading.multisample_texture_samples_8_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016501, VkglTestCase_016501_1, VkglTestCase_016501_2);

#define VkglTestCase_016502_1 "dEQP-GLES31.functional.sample_shading.min_samp"
#define VkglTestCase_016502_2 "le_shading.multisample_texture_samples_16_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016502, VkglTestCase_016502_1, VkglTestCase_016502_2);

#define VkglTestCase_016503_1 "dEQP-GLES31.functional.sample_shading.min_sampl"
#define VkglTestCase_016503_2 "e_shading.multisample_texture_samples_16_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016503, VkglTestCase_016503_1, VkglTestCase_016503_2);

#define VkglTestCase_016504_1 "dEQP-GLES31.functional.sample_shading.min_sample"
#define VkglTestCase_016504_2 "_shading.multisample_renderbuffer_samples_2_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016504, VkglTestCase_016504_1, VkglTestCase_016504_2);

#define VkglTestCase_016505_1 "dEQP-GLES31.functional.sample_shading.min_sample_"
#define VkglTestCase_016505_2 "shading.multisample_renderbuffer_samples_2_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016505, VkglTestCase_016505_1, VkglTestCase_016505_2);

#define VkglTestCase_016506_1 "dEQP-GLES31.functional.sample_shading.min_sample"
#define VkglTestCase_016506_2 "_shading.multisample_renderbuffer_samples_4_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016506, VkglTestCase_016506_1, VkglTestCase_016506_2);

#define VkglTestCase_016507_1 "dEQP-GLES31.functional.sample_shading.min_sample_"
#define VkglTestCase_016507_2 "shading.multisample_renderbuffer_samples_4_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016507, VkglTestCase_016507_1, VkglTestCase_016507_2);

#define VkglTestCase_016508_1 "dEQP-GLES31.functional.sample_shading.min_sample"
#define VkglTestCase_016508_2 "_shading.multisample_renderbuffer_samples_8_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016508, VkglTestCase_016508_1, VkglTestCase_016508_2);

#define VkglTestCase_016509_1 "dEQP-GLES31.functional.sample_shading.min_sample_"
#define VkglTestCase_016509_2 "shading.multisample_renderbuffer_samples_8_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016509, VkglTestCase_016509_1, VkglTestCase_016509_2);

#define VkglTestCase_016510_1 "dEQP-GLES31.functional.sample_shading.min_sample_"
#define VkglTestCase_016510_2 "shading.multisample_renderbuffer_samples_16_color"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016510, VkglTestCase_016510_1, VkglTestCase_016510_2);

#define VkglTestCase_016511_1 "dEQP-GLES31.functional.sample_shading.min_sample_s"
#define VkglTestCase_016511_2 "hading.multisample_renderbuffer_samples_16_discard"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016511, VkglTestCase_016511_1, VkglTestCase_016511_2);
