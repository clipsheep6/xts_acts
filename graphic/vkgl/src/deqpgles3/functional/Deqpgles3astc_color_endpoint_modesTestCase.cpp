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

#define VkglTestCase_027444_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027444_2 "essed.astc.color_endpoint_modes.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027444, VkglTestCase_027444_1, VkglTestCase_027444_2);

#define VkglTestCase_027445_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027445_2 "essed.astc.color_endpoint_modes.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027445, VkglTestCase_027445_1, VkglTestCase_027445_2);

#define VkglTestCase_027446_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027446_2 "essed.astc.color_endpoint_modes.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027446, VkglTestCase_027446_1, VkglTestCase_027446_2);

#define VkglTestCase_027447_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027447_2 "essed.astc.color_endpoint_modes.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027447, VkglTestCase_027447_1, VkglTestCase_027447_2);

#define VkglTestCase_027448_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027448_2 "essed.astc.color_endpoint_modes.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027448, VkglTestCase_027448_1, VkglTestCase_027448_2);

#define VkglTestCase_027449_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027449_2 "essed.astc.color_endpoint_modes.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027449, VkglTestCase_027449_1, VkglTestCase_027449_2);

#define VkglTestCase_027450_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027450_2 "essed.astc.color_endpoint_modes.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027450, VkglTestCase_027450_1, VkglTestCase_027450_2);

#define VkglTestCase_027451_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027451_2 "essed.astc.color_endpoint_modes.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027451, VkglTestCase_027451_1, VkglTestCase_027451_2);

#define VkglTestCase_027452_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027452_2 "essed.astc.color_endpoint_modes.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027452, VkglTestCase_027452_1, VkglTestCase_027452_2);

#define VkglTestCase_027453_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027453_2 "essed.astc.color_endpoint_modes.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027453, VkglTestCase_027453_1, VkglTestCase_027453_2);

#define VkglTestCase_027454_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027454_2 "essed.astc.color_endpoint_modes.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027454, VkglTestCase_027454_1, VkglTestCase_027454_2);

#define VkglTestCase_027455_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027455_2 "ssed.astc.color_endpoint_modes.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027455, VkglTestCase_027455_1, VkglTestCase_027455_2);

#define VkglTestCase_027456_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027456_2 "ssed.astc.color_endpoint_modes.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027456, VkglTestCase_027456_1, VkglTestCase_027456_2);

#define VkglTestCase_027457_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027457_2 "ssed.astc.color_endpoint_modes.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027457, VkglTestCase_027457_1, VkglTestCase_027457_2);

#define VkglTestCase_027458_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027458_2 "sed.astc.color_endpoint_modes.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027458, VkglTestCase_027458_1, VkglTestCase_027458_2);

#define VkglTestCase_027459_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027459_2 "sed.astc.color_endpoint_modes.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027459, VkglTestCase_027459_1, VkglTestCase_027459_2);

#define VkglTestCase_027460_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027460_2 "sed.astc.color_endpoint_modes.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027460, VkglTestCase_027460_1, VkglTestCase_027460_2);

#define VkglTestCase_027461_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027461_2 "sed.astc.color_endpoint_modes.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027461, VkglTestCase_027461_1, VkglTestCase_027461_2);

#define VkglTestCase_027462_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027462_2 "sed.astc.color_endpoint_modes.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027462, VkglTestCase_027462_1, VkglTestCase_027462_2);

#define VkglTestCase_027463_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027463_2 "sed.astc.color_endpoint_modes.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027463, VkglTestCase_027463_1, VkglTestCase_027463_2);

#define VkglTestCase_027464_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027464_2 "sed.astc.color_endpoint_modes.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027464, VkglTestCase_027464_1, VkglTestCase_027464_2);

#define VkglTestCase_027465_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027465_2 "sed.astc.color_endpoint_modes.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027465, VkglTestCase_027465_1, VkglTestCase_027465_2);

#define VkglTestCase_027466_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027466_2 "ed.astc.color_endpoint_modes.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027466, VkglTestCase_027466_1, VkglTestCase_027466_2);

#define VkglTestCase_027467_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027467_2 "ed.astc.color_endpoint_modes.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027467, VkglTestCase_027467_1, VkglTestCase_027467_2);

#define VkglTestCase_027468_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027468_2 "ed.astc.color_endpoint_modes.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027468, VkglTestCase_027468_1, VkglTestCase_027468_2);

#define VkglTestCase_027469_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027469_2 "ed.astc.color_endpoint_modes.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027469, VkglTestCase_027469_1, VkglTestCase_027469_2);

#define VkglTestCase_027470_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027470_2 "ed.astc.color_endpoint_modes.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027470, VkglTestCase_027470_1, VkglTestCase_027470_2);

#define VkglTestCase_027471_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027471_2 "ed.astc.color_endpoint_modes.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027471, VkglTestCase_027471_1, VkglTestCase_027471_2);
