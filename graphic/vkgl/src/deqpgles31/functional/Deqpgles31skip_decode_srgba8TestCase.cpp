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

#define VkglTestCase_037720_1 "dEQP-GLES31.functional.srgb_textur"
#define VkglTestCase_037720_2 "e_decode.skip_decode.srgba8.skipped"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037720, VkglTestCase_037720_1, VkglTestCase_037720_2);

#define VkglTestCase_037721_1 "dEQP-GLES31.functional.srgb_textur"
#define VkglTestCase_037721_2 "e_decode.skip_decode.srgba8.enabled"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037721, VkglTestCase_037721_1, VkglTestCase_037721_2);

#define VkglTestCase_037722_1 "dEQP-GLES31.functional.srgb_texture_"
#define VkglTestCase_037722_2 "decode.skip_decode.srgba8.texel_fetch"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037722, VkglTestCase_037722_1, VkglTestCase_037722_2);

#define VkglTestCase_037723_1 "dEQP-GLES31.functional.srgb_texture_de"
#define VkglTestCase_037723_2 "code.skip_decode.srgba8.conversion_gpu"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037723, VkglTestCase_037723_1, VkglTestCase_037723_2);

#define VkglTestCase_037724_1 "dEQP-GLES31.functional.srgb_textur"
#define VkglTestCase_037724_2 "e_decode.skip_decode.srgba8.toggled"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037724, VkglTestCase_037724_1, VkglTestCase_037724_2);

#define VkglTestCase_037725_1 "dEQP-GLES31.functional.srgb_texture_dec"
#define VkglTestCase_037725_2 "ode.skip_decode.srgba8.multiple_textures"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037725, VkglTestCase_037725_1, VkglTestCase_037725_2);

#define VkglTestCase_037726_1 "dEQP-GLES31.functional.srgb_texture_d"
#define VkglTestCase_037726_2 "ecode.skip_decode.srgba8.using_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037726, VkglTestCase_037726_1, VkglTestCase_037726_2);
