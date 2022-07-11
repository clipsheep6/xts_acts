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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015985_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015985_2 "ternal_format.renderbuffer.r8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015985, VkglTestCase_015985_1, VkglTestCase_015985_2);

#define VkglTestCase_015986_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015986_2 "ternal_format.renderbuffer.rg8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015986, VkglTestCase_015986_1, VkglTestCase_015986_2);

#define VkglTestCase_015987_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015987_2 "ernal_format.renderbuffer.rgb8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015987, VkglTestCase_015987_1, VkglTestCase_015987_2);

#define VkglTestCase_015988_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015988_2 "rnal_format.renderbuffer.rgb565_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015988, VkglTestCase_015988_1, VkglTestCase_015988_2);

#define VkglTestCase_015989_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015989_2 "ernal_format.renderbuffer.rgba4_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015989, VkglTestCase_015989_1, VkglTestCase_015989_2);

#define VkglTestCase_015990_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_015990_2 "rnal_format.renderbuffer.rgb5_a1_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015990, VkglTestCase_015990_1, VkglTestCase_015990_2);

#define VkglTestCase_015991_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015991_2 "ernal_format.renderbuffer.rgba8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015991, VkglTestCase_015991_1, VkglTestCase_015991_2);

#define VkglTestCase_015992_1 "dEQP-GLES31.functional.state_query.inter"
#define VkglTestCase_015992_2 "nal_format.renderbuffer.rgb10_a2_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015992, VkglTestCase_015992_1, VkglTestCase_015992_2);

#define VkglTestCase_015993_1 "dEQP-GLES31.functional.state_query.intern"
#define VkglTestCase_015993_2 "al_format.renderbuffer.rgb10_a2ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015993, VkglTestCase_015993_1, VkglTestCase_015993_2);

#define VkglTestCase_015994_1 "dEQP-GLES31.functional.state_query.interna"
#define VkglTestCase_015994_2 "l_format.renderbuffer.srgb8_alpha8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015994, VkglTestCase_015994_1, VkglTestCase_015994_2);

#define VkglTestCase_015995_1 "dEQP-GLES31.functional.state_query.in"
#define VkglTestCase_015995_2 "ternal_format.renderbuffer.r8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015995, VkglTestCase_015995_1, VkglTestCase_015995_2);

#define VkglTestCase_015996_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015996_2 "ernal_format.renderbuffer.r8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015996, VkglTestCase_015996_1, VkglTestCase_015996_2);

#define VkglTestCase_015997_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015997_2 "ernal_format.renderbuffer.r16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015997, VkglTestCase_015997_1, VkglTestCase_015997_2);

#define VkglTestCase_015998_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015998_2 "ernal_format.renderbuffer.r16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015998, VkglTestCase_015998_1, VkglTestCase_015998_2);

#define VkglTestCase_015999_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_015999_2 "ernal_format.renderbuffer.r32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015999, VkglTestCase_015999_1, VkglTestCase_015999_2);

#define VkglTestCase_016000_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016000_2 "ernal_format.renderbuffer.r32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016000, VkglTestCase_016000_1, VkglTestCase_016000_2);

#define VkglTestCase_016001_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016001_2 "ernal_format.renderbuffer.rg8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016001, VkglTestCase_016001_1, VkglTestCase_016001_2);

#define VkglTestCase_016002_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016002_2 "ernal_format.renderbuffer.rg8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016002, VkglTestCase_016002_1, VkglTestCase_016002_2);

#define VkglTestCase_016003_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016003_2 "ernal_format.renderbuffer.rg16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016003, VkglTestCase_016003_1, VkglTestCase_016003_2);

#define VkglTestCase_016004_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_016004_2 "rnal_format.renderbuffer.rg16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016004, VkglTestCase_016004_1, VkglTestCase_016004_2);

#define VkglTestCase_016005_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016005_2 "ernal_format.renderbuffer.rg32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016005, VkglTestCase_016005_1, VkglTestCase_016005_2);

#define VkglTestCase_016006_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_016006_2 "rnal_format.renderbuffer.rg32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016006, VkglTestCase_016006_1, VkglTestCase_016006_2);

#define VkglTestCase_016007_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_016007_2 "rnal_format.renderbuffer.rgba8i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016007, VkglTestCase_016007_1, VkglTestCase_016007_2);

#define VkglTestCase_016008_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_016008_2 "rnal_format.renderbuffer.rgba8ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016008, VkglTestCase_016008_1, VkglTestCase_016008_2);

#define VkglTestCase_016009_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_016009_2 "rnal_format.renderbuffer.rgba16i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016009, VkglTestCase_016009_1, VkglTestCase_016009_2);

#define VkglTestCase_016010_1 "dEQP-GLES31.functional.state_query.inter"
#define VkglTestCase_016010_2 "nal_format.renderbuffer.rgba16ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016010, VkglTestCase_016010_1, VkglTestCase_016010_2);

#define VkglTestCase_016011_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_016011_2 "rnal_format.renderbuffer.rgba32i_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016011, VkglTestCase_016011_1, VkglTestCase_016011_2);

#define VkglTestCase_016012_1 "dEQP-GLES31.functional.state_query.inter"
#define VkglTestCase_016012_2 "nal_format.renderbuffer.rgba32ui_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016012, VkglTestCase_016012_1, VkglTestCase_016012_2);

#define VkglTestCase_016013_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016013_2 "ernal_format.renderbuffer.r16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016013, VkglTestCase_016013_1, VkglTestCase_016013_2);

#define VkglTestCase_016014_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016014_2 "ernal_format.renderbuffer.rg16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016014, VkglTestCase_016014_1, VkglTestCase_016014_2);

#define VkglTestCase_016015_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_016015_2 "rnal_format.renderbuffer.rgba16f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016015, VkglTestCase_016015_1, VkglTestCase_016015_2);

#define VkglTestCase_016016_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016016_2 "ernal_format.renderbuffer.r32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016016, VkglTestCase_016016_1, VkglTestCase_016016_2);

#define VkglTestCase_016017_1 "dEQP-GLES31.functional.state_query.int"
#define VkglTestCase_016017_2 "ernal_format.renderbuffer.rg32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016017, VkglTestCase_016017_1, VkglTestCase_016017_2);

#define VkglTestCase_016018_1 "dEQP-GLES31.functional.state_query.inte"
#define VkglTestCase_016018_2 "rnal_format.renderbuffer.rgba32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016018, VkglTestCase_016018_1, VkglTestCase_016018_2);

#define VkglTestCase_016019_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016019_2 "_format.renderbuffer.r11f_g11f_b10f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016019, VkglTestCase_016019_1, VkglTestCase_016019_2);

#define VkglTestCase_016020_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016020_2 "format.renderbuffer.depth_component16_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016020, VkglTestCase_016020_1, VkglTestCase_016020_2);

#define VkglTestCase_016021_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016021_2 "format.renderbuffer.depth_component24_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016021, VkglTestCase_016021_1, VkglTestCase_016021_2);

#define VkglTestCase_016022_1 "dEQP-GLES31.functional.state_query.internal_f"
#define VkglTestCase_016022_2 "ormat.renderbuffer.depth_component32f_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016022, VkglTestCase_016022_1, VkglTestCase_016022_2);

#define VkglTestCase_016023_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016023_2 "format.renderbuffer.depth24_stencil8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016023, VkglTestCase_016023_1, VkglTestCase_016023_2);

#define VkglTestCase_016024_1 "dEQP-GLES31.functional.state_query.internal_"
#define VkglTestCase_016024_2 "format.renderbuffer.depth32f_stencil8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016024, VkglTestCase_016024_1, VkglTestCase_016024_2);

#define VkglTestCase_016025_1 "dEQP-GLES31.functional.state_query.internal"
#define VkglTestCase_016025_2 "_format.renderbuffer.stencil_index8_samples"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_016025, VkglTestCase_016025_1, VkglTestCase_016025_2);
