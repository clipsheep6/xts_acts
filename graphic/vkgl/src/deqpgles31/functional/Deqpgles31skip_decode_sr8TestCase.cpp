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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037734_1 "dEQP-GLES31.functional.srgb_textu"
#define VkglTestCase_037734_2 "re_decode.skip_decode.sr8.skipped"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037734, VkglTestCase_037734_1, VkglTestCase_037734_2);

#define VkglTestCase_037735_1 "dEQP-GLES31.functional.srgb_textu"
#define VkglTestCase_037735_2 "re_decode.skip_decode.sr8.enabled"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037735, VkglTestCase_037735_1, VkglTestCase_037735_2);

#define VkglTestCase_037736_1 "dEQP-GLES31.functional.srgb_texture"
#define VkglTestCase_037736_2 "_decode.skip_decode.sr8.texel_fetch"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037736, VkglTestCase_037736_1, VkglTestCase_037736_2);

#define VkglTestCase_037737_1 "dEQP-GLES31.functional.srgb_texture_"
#define VkglTestCase_037737_2 "decode.skip_decode.sr8.conversion_gpu"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037737, VkglTestCase_037737_1, VkglTestCase_037737_2);

#define VkglTestCase_037738_1 "dEQP-GLES31.functional.srgb_textu"
#define VkglTestCase_037738_2 "re_decode.skip_decode.sr8.toggled"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037738, VkglTestCase_037738_1, VkglTestCase_037738_2);

#define VkglTestCase_037739_1 "dEQP-GLES31.functional.srgb_texture_de"
#define VkglTestCase_037739_2 "code.skip_decode.sr8.multiple_textures"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037739, VkglTestCase_037739_1, VkglTestCase_037739_2);

#define VkglTestCase_037740_1 "dEQP-GLES31.functional.srgb_texture_"
#define VkglTestCase_037740_2 "decode.skip_decode.sr8.using_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037740, VkglTestCase_037740_1, VkglTestCase_037740_2);
