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

#define VkglTestCase_027640_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027640_2 "essed.astc.block_size_remainder.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027640, VkglTestCase_027640_1, VkglTestCase_027640_2);

#define VkglTestCase_027641_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027641_2 "essed.astc.block_size_remainder.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027641, VkglTestCase_027641_1, VkglTestCase_027641_2);

#define VkglTestCase_027642_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027642_2 "essed.astc.block_size_remainder.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027642, VkglTestCase_027642_1, VkglTestCase_027642_2);

#define VkglTestCase_027643_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027643_2 "essed.astc.block_size_remainder.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027643, VkglTestCase_027643_1, VkglTestCase_027643_2);

#define VkglTestCase_027644_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027644_2 "essed.astc.block_size_remainder.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027644, VkglTestCase_027644_1, VkglTestCase_027644_2);

#define VkglTestCase_027645_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027645_2 "essed.astc.block_size_remainder.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027645, VkglTestCase_027645_1, VkglTestCase_027645_2);

#define VkglTestCase_027646_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027646_2 "essed.astc.block_size_remainder.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027646, VkglTestCase_027646_1, VkglTestCase_027646_2);

#define VkglTestCase_027647_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027647_2 "essed.astc.block_size_remainder.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027647, VkglTestCase_027647_1, VkglTestCase_027647_2);

#define VkglTestCase_027648_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027648_2 "essed.astc.block_size_remainder.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027648, VkglTestCase_027648_1, VkglTestCase_027648_2);

#define VkglTestCase_027649_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027649_2 "essed.astc.block_size_remainder.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027649, VkglTestCase_027649_1, VkglTestCase_027649_2);

#define VkglTestCase_027650_1 "dEQP-GLES3.functional.texture.compr"
#define VkglTestCase_027650_2 "essed.astc.block_size_remainder.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027650, VkglTestCase_027650_1, VkglTestCase_027650_2);

#define VkglTestCase_027651_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027651_2 "ssed.astc.block_size_remainder.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027651, VkglTestCase_027651_1, VkglTestCase_027651_2);

#define VkglTestCase_027652_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027652_2 "ssed.astc.block_size_remainder.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027652, VkglTestCase_027652_1, VkglTestCase_027652_2);

#define VkglTestCase_027653_1 "dEQP-GLES3.functional.texture.compre"
#define VkglTestCase_027653_2 "ssed.astc.block_size_remainder.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027653, VkglTestCase_027653_1, VkglTestCase_027653_2);

#define VkglTestCase_027654_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027654_2 "sed.astc.block_size_remainder.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027654, VkglTestCase_027654_1, VkglTestCase_027654_2);

#define VkglTestCase_027655_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027655_2 "sed.astc.block_size_remainder.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027655, VkglTestCase_027655_1, VkglTestCase_027655_2);

#define VkglTestCase_027656_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027656_2 "sed.astc.block_size_remainder.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027656, VkglTestCase_027656_1, VkglTestCase_027656_2);

#define VkglTestCase_027657_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027657_2 "sed.astc.block_size_remainder.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027657, VkglTestCase_027657_1, VkglTestCase_027657_2);

#define VkglTestCase_027658_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027658_2 "sed.astc.block_size_remainder.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027658, VkglTestCase_027658_1, VkglTestCase_027658_2);

#define VkglTestCase_027659_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027659_2 "sed.astc.block_size_remainder.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027659, VkglTestCase_027659_1, VkglTestCase_027659_2);

#define VkglTestCase_027660_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027660_2 "sed.astc.block_size_remainder.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027660, VkglTestCase_027660_1, VkglTestCase_027660_2);

#define VkglTestCase_027661_1 "dEQP-GLES3.functional.texture.compres"
#define VkglTestCase_027661_2 "sed.astc.block_size_remainder.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027661, VkglTestCase_027661_1, VkglTestCase_027661_2);

#define VkglTestCase_027662_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027662_2 "ed.astc.block_size_remainder.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027662, VkglTestCase_027662_1, VkglTestCase_027662_2);

#define VkglTestCase_027663_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027663_2 "ed.astc.block_size_remainder.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027663, VkglTestCase_027663_1, VkglTestCase_027663_2);

#define VkglTestCase_027664_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027664_2 "ed.astc.block_size_remainder.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027664, VkglTestCase_027664_1, VkglTestCase_027664_2);

#define VkglTestCase_027665_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027665_2 "ed.astc.block_size_remainder.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027665, VkglTestCase_027665_1, VkglTestCase_027665_2);

#define VkglTestCase_027666_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027666_2 "ed.astc.block_size_remainder.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027666, VkglTestCase_027666_1, VkglTestCase_027666_2);

#define VkglTestCase_027667_1 "dEQP-GLES3.functional.texture.compress"
#define VkglTestCase_027667_2 "ed.astc.block_size_remainder.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027667, VkglTestCase_027667_1, VkglTestCase_027667_2);
