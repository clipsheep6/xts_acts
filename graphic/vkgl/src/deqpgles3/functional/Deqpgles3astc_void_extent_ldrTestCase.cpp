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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027346_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027346_2 "mpressed.astc.void_extent_ldr.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027346, VkglTestCase_027346_1, VkglTestCase_027346_2);

#define VkglTestCase_027347_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027347_2 "mpressed.astc.void_extent_ldr.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027347, VkglTestCase_027347_1, VkglTestCase_027347_2);

#define VkglTestCase_027348_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027348_2 "mpressed.astc.void_extent_ldr.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027348, VkglTestCase_027348_1, VkglTestCase_027348_2);

#define VkglTestCase_027349_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027349_2 "mpressed.astc.void_extent_ldr.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027349, VkglTestCase_027349_1, VkglTestCase_027349_2);

#define VkglTestCase_027350_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027350_2 "mpressed.astc.void_extent_ldr.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027350, VkglTestCase_027350_1, VkglTestCase_027350_2);

#define VkglTestCase_027351_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027351_2 "mpressed.astc.void_extent_ldr.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027351, VkglTestCase_027351_1, VkglTestCase_027351_2);

#define VkglTestCase_027352_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027352_2 "mpressed.astc.void_extent_ldr.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027352, VkglTestCase_027352_1, VkglTestCase_027352_2);

#define VkglTestCase_027353_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027353_2 "mpressed.astc.void_extent_ldr.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027353, VkglTestCase_027353_1, VkglTestCase_027353_2);

#define VkglTestCase_027354_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027354_2 "pressed.astc.void_extent_ldr.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027354, VkglTestCase_027354_1, VkglTestCase_027354_2);

#define VkglTestCase_027355_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027355_2 "pressed.astc.void_extent_ldr.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027355, VkglTestCase_027355_1, VkglTestCase_027355_2);

#define VkglTestCase_027356_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027356_2 "pressed.astc.void_extent_ldr.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027356, VkglTestCase_027356_1, VkglTestCase_027356_2);

#define VkglTestCase_027357_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027357_2 "pressed.astc.void_extent_ldr.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027357, VkglTestCase_027357_1, VkglTestCase_027357_2);

#define VkglTestCase_027358_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027358_2 "pressed.astc.void_extent_ldr.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027358, VkglTestCase_027358_1, VkglTestCase_027358_2);

#define VkglTestCase_027359_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027359_2 "pressed.astc.void_extent_ldr.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027359, VkglTestCase_027359_1, VkglTestCase_027359_2);

#define VkglTestCase_027360_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027360_2 "essed.astc.void_extent_ldr.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027360, VkglTestCase_027360_1, VkglTestCase_027360_2);

#define VkglTestCase_027361_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027361_2 "essed.astc.void_extent_ldr.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027361, VkglTestCase_027361_1, VkglTestCase_027361_2);

#define VkglTestCase_027362_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027362_2 "essed.astc.void_extent_ldr.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027362, VkglTestCase_027362_1, VkglTestCase_027362_2);

#define VkglTestCase_027363_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027363_2 "essed.astc.void_extent_ldr.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027363, VkglTestCase_027363_1, VkglTestCase_027363_2);

#define VkglTestCase_027364_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027364_2 "essed.astc.void_extent_ldr.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027364, VkglTestCase_027364_1, VkglTestCase_027364_2);

#define VkglTestCase_027365_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027365_2 "essed.astc.void_extent_ldr.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027365, VkglTestCase_027365_1, VkglTestCase_027365_2);

#define VkglTestCase_027366_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027366_2 "essed.astc.void_extent_ldr.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027366, VkglTestCase_027366_1, VkglTestCase_027366_2);

#define VkglTestCase_027367_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027367_2 "essed.astc.void_extent_ldr.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027367, VkglTestCase_027367_1, VkglTestCase_027367_2);

#define VkglTestCase_027368_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027368_2 "essed.astc.void_extent_ldr.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027368, VkglTestCase_027368_1, VkglTestCase_027368_2);

#define VkglTestCase_027369_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027369_2 "essed.astc.void_extent_ldr.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027369, VkglTestCase_027369_1, VkglTestCase_027369_2);

#define VkglTestCase_027370_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027370_2 "essed.astc.void_extent_ldr.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027370, VkglTestCase_027370_1, VkglTestCase_027370_2);

#define VkglTestCase_027371_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027371_2 "ssed.astc.void_extent_ldr.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027371, VkglTestCase_027371_1, VkglTestCase_027371_2);

#define VkglTestCase_027372_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027372_2 "ssed.astc.void_extent_ldr.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027372, VkglTestCase_027372_1, VkglTestCase_027372_2);

#define VkglTestCase_027373_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027373_2 "ssed.astc.void_extent_ldr.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027373, VkglTestCase_027373_1, VkglTestCase_027373_2);
