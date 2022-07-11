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

#define VkglTestCase_027500_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027500_2 "ressed.astc.endpoint_value_ldr.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027500, VkglTestCase_027500_1, VkglTestCase_027500_2);

#define VkglTestCase_027501_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027501_2 "ressed.astc.endpoint_value_ldr.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027501, VkglTestCase_027501_1, VkglTestCase_027501_2);

#define VkglTestCase_027502_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027502_2 "ressed.astc.endpoint_value_ldr.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027502, VkglTestCase_027502_1, VkglTestCase_027502_2);

#define VkglTestCase_027503_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027503_2 "ressed.astc.endpoint_value_ldr.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027503, VkglTestCase_027503_1, VkglTestCase_027503_2);

#define VkglTestCase_027504_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027504_2 "ressed.astc.endpoint_value_ldr.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027504, VkglTestCase_027504_1, VkglTestCase_027504_2);

#define VkglTestCase_027505_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027505_2 "ressed.astc.endpoint_value_ldr.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027505, VkglTestCase_027505_1, VkglTestCase_027505_2);

#define VkglTestCase_027506_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027506_2 "ressed.astc.endpoint_value_ldr.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027506, VkglTestCase_027506_1, VkglTestCase_027506_2);

#define VkglTestCase_027507_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027507_2 "ressed.astc.endpoint_value_ldr.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027507, VkglTestCase_027507_1, VkglTestCase_027507_2);

#define VkglTestCase_027508_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027508_2 "ressed.astc.endpoint_value_ldr.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027508, VkglTestCase_027508_1, VkglTestCase_027508_2);

#define VkglTestCase_027509_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027509_2 "ressed.astc.endpoint_value_ldr.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027509, VkglTestCase_027509_1, VkglTestCase_027509_2);

#define VkglTestCase_027510_1 "dEQP-GLES3.functional.texture.comp"
#define VkglTestCase_027510_2 "ressed.astc.endpoint_value_ldr.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027510, VkglTestCase_027510_1, VkglTestCase_027510_2);

#define VkglTestCase_027511_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027511_2 "essed.astc.endpoint_value_ldr.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027511, VkglTestCase_027511_1, VkglTestCase_027511_2);

#define VkglTestCase_027512_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027512_2 "essed.astc.endpoint_value_ldr.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027512, VkglTestCase_027512_1, VkglTestCase_027512_2);

#define VkglTestCase_027513_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027513_2 "essed.astc.endpoint_value_ldr.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027513, VkglTestCase_027513_1, VkglTestCase_027513_2);

#define VkglTestCase_027514_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027514_2 "ssed.astc.endpoint_value_ldr.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027514, VkglTestCase_027514_1, VkglTestCase_027514_2);

#define VkglTestCase_027515_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027515_2 "ssed.astc.endpoint_value_ldr.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027515, VkglTestCase_027515_1, VkglTestCase_027515_2);

#define VkglTestCase_027516_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027516_2 "ssed.astc.endpoint_value_ldr.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027516, VkglTestCase_027516_1, VkglTestCase_027516_2);

#define VkglTestCase_027517_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027517_2 "ssed.astc.endpoint_value_ldr.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027517, VkglTestCase_027517_1, VkglTestCase_027517_2);

#define VkglTestCase_027518_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027518_2 "ssed.astc.endpoint_value_ldr.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027518, VkglTestCase_027518_1, VkglTestCase_027518_2);

#define VkglTestCase_027519_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027519_2 "ssed.astc.endpoint_value_ldr.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027519, VkglTestCase_027519_1, VkglTestCase_027519_2);

#define VkglTestCase_027520_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027520_2 "ssed.astc.endpoint_value_ldr.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027520, VkglTestCase_027520_1, VkglTestCase_027520_2);

#define VkglTestCase_027521_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027521_2 "ssed.astc.endpoint_value_ldr.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027521, VkglTestCase_027521_1, VkglTestCase_027521_2);

#define VkglTestCase_027522_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027522_2 "sed.astc.endpoint_value_ldr.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027522, VkglTestCase_027522_1, VkglTestCase_027522_2);

#define VkglTestCase_027523_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027523_2 "sed.astc.endpoint_value_ldr.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027523, VkglTestCase_027523_1, VkglTestCase_027523_2);

#define VkglTestCase_027524_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027524_2 "sed.astc.endpoint_value_ldr.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027524, VkglTestCase_027524_1, VkglTestCase_027524_2);

#define VkglTestCase_027525_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027525_2 "sed.astc.endpoint_value_ldr.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027525, VkglTestCase_027525_1, VkglTestCase_027525_2);

#define VkglTestCase_027526_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027526_2 "sed.astc.endpoint_value_ldr.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027526, VkglTestCase_027526_1, VkglTestCase_027526_2);

#define VkglTestCase_027527_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027527_2 "sed.astc.endpoint_value_ldr.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027527, VkglTestCase_027527_1, VkglTestCase_027527_2);
