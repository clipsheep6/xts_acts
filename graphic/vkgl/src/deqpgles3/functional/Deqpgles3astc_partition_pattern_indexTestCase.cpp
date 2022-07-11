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

#define VkglTestCase_027472_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027472_2 "ssed.astc.partition_pattern_index.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027472, VkglTestCase_027472_1, VkglTestCase_027472_2);

#define VkglTestCase_027473_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027473_2 "ssed.astc.partition_pattern_index.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027473, VkglTestCase_027473_1, VkglTestCase_027473_2);

#define VkglTestCase_027474_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027474_2 "ssed.astc.partition_pattern_index.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027474, VkglTestCase_027474_1, VkglTestCase_027474_2);

#define VkglTestCase_027475_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027475_2 "ssed.astc.partition_pattern_index.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027475, VkglTestCase_027475_1, VkglTestCase_027475_2);

#define VkglTestCase_027476_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027476_2 "ssed.astc.partition_pattern_index.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027476, VkglTestCase_027476_1, VkglTestCase_027476_2);

#define VkglTestCase_027477_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027477_2 "ssed.astc.partition_pattern_index.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027477, VkglTestCase_027477_1, VkglTestCase_027477_2);

#define VkglTestCase_027478_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027478_2 "ssed.astc.partition_pattern_index.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027478, VkglTestCase_027478_1, VkglTestCase_027478_2);

#define VkglTestCase_027479_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027479_2 "ssed.astc.partition_pattern_index.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027479, VkglTestCase_027479_1, VkglTestCase_027479_2);

#define VkglTestCase_027480_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027480_2 "sed.astc.partition_pattern_index.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027480, VkglTestCase_027480_1, VkglTestCase_027480_2);

#define VkglTestCase_027481_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027481_2 "sed.astc.partition_pattern_index.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027481, VkglTestCase_027481_1, VkglTestCase_027481_2);

#define VkglTestCase_027482_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027482_2 "sed.astc.partition_pattern_index.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027482, VkglTestCase_027482_1, VkglTestCase_027482_2);

#define VkglTestCase_027483_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027483_2 "sed.astc.partition_pattern_index.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027483, VkglTestCase_027483_1, VkglTestCase_027483_2);

#define VkglTestCase_027484_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027484_2 "sed.astc.partition_pattern_index.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027484, VkglTestCase_027484_1, VkglTestCase_027484_2);

#define VkglTestCase_027485_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027485_2 "sed.astc.partition_pattern_index.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027485, VkglTestCase_027485_1, VkglTestCase_027485_2);

#define VkglTestCase_027486_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027486_2 "d.astc.partition_pattern_index.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027486, VkglTestCase_027486_1, VkglTestCase_027486_2);

#define VkglTestCase_027487_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027487_2 "d.astc.partition_pattern_index.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027487, VkglTestCase_027487_1, VkglTestCase_027487_2);

#define VkglTestCase_027488_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027488_2 "d.astc.partition_pattern_index.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027488, VkglTestCase_027488_1, VkglTestCase_027488_2);

#define VkglTestCase_027489_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027489_2 "d.astc.partition_pattern_index.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027489, VkglTestCase_027489_1, VkglTestCase_027489_2);

#define VkglTestCase_027490_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027490_2 "d.astc.partition_pattern_index.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027490, VkglTestCase_027490_1, VkglTestCase_027490_2);

#define VkglTestCase_027491_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027491_2 "d.astc.partition_pattern_index.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027491, VkglTestCase_027491_1, VkglTestCase_027491_2);

#define VkglTestCase_027492_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027492_2 "d.astc.partition_pattern_index.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027492, VkglTestCase_027492_1, VkglTestCase_027492_2);

#define VkglTestCase_027493_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027493_2 "d.astc.partition_pattern_index.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027493, VkglTestCase_027493_1, VkglTestCase_027493_2);

#define VkglTestCase_027494_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027494_2 "d.astc.partition_pattern_index.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027494, VkglTestCase_027494_1, VkglTestCase_027494_2);

#define VkglTestCase_027495_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027495_2 "d.astc.partition_pattern_index.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027495, VkglTestCase_027495_1, VkglTestCase_027495_2);

#define VkglTestCase_027496_1 "dEQP-GLES3.functional.texture.compresse"
#define VkglTestCase_027496_2 "d.astc.partition_pattern_index.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027496, VkglTestCase_027496_1, VkglTestCase_027496_2);

#define VkglTestCase_027497_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027497_2 ".astc.partition_pattern_index.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027497, VkglTestCase_027497_1, VkglTestCase_027497_2);

#define VkglTestCase_027498_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027498_2 ".astc.partition_pattern_index.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027498, VkglTestCase_027498_1, VkglTestCase_027498_2);

#define VkglTestCase_027499_1 "dEQP-GLES3.functional.texture.compressed"
#define VkglTestCase_027499_2 ".astc.partition_pattern_index.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027499, VkglTestCase_027499_1, VkglTestCase_027499_2);
