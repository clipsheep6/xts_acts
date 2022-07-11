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

#define VkglTestCase_037727_1 "dEQP-GLES31.functional.srgb_textu"
#define VkglTestCase_037727_2 "re_decode.skip_decode.srg8.skipped"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037727, VkglTestCase_037727_1, VkglTestCase_037727_2);

#define VkglTestCase_037728_1 "dEQP-GLES31.functional.srgb_textu"
#define VkglTestCase_037728_2 "re_decode.skip_decode.srg8.enabled"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037728, VkglTestCase_037728_1, VkglTestCase_037728_2);

#define VkglTestCase_037729_1 "dEQP-GLES31.functional.srgb_texture"
#define VkglTestCase_037729_2 "_decode.skip_decode.srg8.texel_fetch"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037729, VkglTestCase_037729_1, VkglTestCase_037729_2);

#define VkglTestCase_037730_1 "dEQP-GLES31.functional.srgb_texture_d"
#define VkglTestCase_037730_2 "ecode.skip_decode.srg8.conversion_gpu"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037730, VkglTestCase_037730_1, VkglTestCase_037730_2);

#define VkglTestCase_037731_1 "dEQP-GLES31.functional.srgb_textu"
#define VkglTestCase_037731_2 "re_decode.skip_decode.srg8.toggled"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037731, VkglTestCase_037731_1, VkglTestCase_037731_2);

#define VkglTestCase_037732_1 "dEQP-GLES31.functional.srgb_texture_de"
#define VkglTestCase_037732_2 "code.skip_decode.srg8.multiple_textures"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037732, VkglTestCase_037732_1, VkglTestCase_037732_2);

#define VkglTestCase_037733_1 "dEQP-GLES31.functional.srgb_texture_"
#define VkglTestCase_037733_2 "decode.skip_decode.srg8.using_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037733, VkglTestCase_037733_1, VkglTestCase_037733_2);
