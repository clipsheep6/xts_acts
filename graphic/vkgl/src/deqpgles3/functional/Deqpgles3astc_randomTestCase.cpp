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

#define VkglTestCase_027612_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027612_2 "e.compressed.astc.random.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027612, VkglTestCase_027612_1, VkglTestCase_027612_2);

#define VkglTestCase_027613_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027613_2 "e.compressed.astc.random.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027613, VkglTestCase_027613_1, VkglTestCase_027613_2);

#define VkglTestCase_027614_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027614_2 "e.compressed.astc.random.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027614, VkglTestCase_027614_1, VkglTestCase_027614_2);

#define VkglTestCase_027615_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027615_2 "e.compressed.astc.random.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027615, VkglTestCase_027615_1, VkglTestCase_027615_2);

#define VkglTestCase_027616_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027616_2 "e.compressed.astc.random.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027616, VkglTestCase_027616_1, VkglTestCase_027616_2);

#define VkglTestCase_027617_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027617_2 "e.compressed.astc.random.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027617, VkglTestCase_027617_1, VkglTestCase_027617_2);

#define VkglTestCase_027618_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027618_2 "e.compressed.astc.random.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027618, VkglTestCase_027618_1, VkglTestCase_027618_2);

#define VkglTestCase_027619_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027619_2 "e.compressed.astc.random.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027619, VkglTestCase_027619_1, VkglTestCase_027619_2);

#define VkglTestCase_027620_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027620_2 "e.compressed.astc.random.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027620, VkglTestCase_027620_1, VkglTestCase_027620_2);

#define VkglTestCase_027621_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027621_2 "e.compressed.astc.random.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027621, VkglTestCase_027621_1, VkglTestCase_027621_2);

#define VkglTestCase_027622_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_027622_2 "e.compressed.astc.random.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027622, VkglTestCase_027622_1, VkglTestCase_027622_2);

#define VkglTestCase_027623_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_027623_2 ".compressed.astc.random.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027623, VkglTestCase_027623_1, VkglTestCase_027623_2);

#define VkglTestCase_027624_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_027624_2 ".compressed.astc.random.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027624, VkglTestCase_027624_1, VkglTestCase_027624_2);

#define VkglTestCase_027625_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_027625_2 ".compressed.astc.random.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027625, VkglTestCase_027625_1, VkglTestCase_027625_2);

#define VkglTestCase_027626_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027626_2 "compressed.astc.random.4x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027626, VkglTestCase_027626_1, VkglTestCase_027626_2);

#define VkglTestCase_027627_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027627_2 "compressed.astc.random.5x4_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027627, VkglTestCase_027627_1, VkglTestCase_027627_2);

#define VkglTestCase_027628_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027628_2 "compressed.astc.random.5x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027628, VkglTestCase_027628_1, VkglTestCase_027628_2);

#define VkglTestCase_027629_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027629_2 "compressed.astc.random.6x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027629, VkglTestCase_027629_1, VkglTestCase_027629_2);

#define VkglTestCase_027630_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027630_2 "compressed.astc.random.6x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027630, VkglTestCase_027630_1, VkglTestCase_027630_2);

#define VkglTestCase_027631_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027631_2 "compressed.astc.random.8x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027631, VkglTestCase_027631_1, VkglTestCase_027631_2);

#define VkglTestCase_027632_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027632_2 "compressed.astc.random.8x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027632, VkglTestCase_027632_1, VkglTestCase_027632_2);

#define VkglTestCase_027633_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_027633_2 "compressed.astc.random.8x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027633, VkglTestCase_027633_1, VkglTestCase_027633_2);

#define VkglTestCase_027634_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027634_2 "ompressed.astc.random.10x5_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027634, VkglTestCase_027634_1, VkglTestCase_027634_2);

#define VkglTestCase_027635_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027635_2 "ompressed.astc.random.10x6_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027635, VkglTestCase_027635_1, VkglTestCase_027635_2);

#define VkglTestCase_027636_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027636_2 "ompressed.astc.random.10x8_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027636, VkglTestCase_027636_1, VkglTestCase_027636_2);

#define VkglTestCase_027637_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027637_2 "ompressed.astc.random.10x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027637, VkglTestCase_027637_1, VkglTestCase_027637_2);

#define VkglTestCase_027638_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027638_2 "ompressed.astc.random.12x10_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027638, VkglTestCase_027638_1, VkglTestCase_027638_2);

#define VkglTestCase_027639_1 "dEQP-GLES3.functional.texture.c"
#define VkglTestCase_027639_2 "ompressed.astc.random.12x12_srgb"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027639, VkglTestCase_027639_1, VkglTestCase_027639_2);
