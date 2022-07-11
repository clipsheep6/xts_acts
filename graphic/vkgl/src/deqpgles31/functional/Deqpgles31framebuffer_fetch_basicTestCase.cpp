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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007467_1 "dEQP-GLES31.functional.shaders.fr"
#define VkglTestCase_007467_2 "amebuffer_fetch.basic.texel_fetch"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007467, VkglTestCase_007467_1, VkglTestCase_007467_2);

#define VkglTestCase_007468_1 "dEQP-GLES31.functional.shaders.fra"
#define VkglTestCase_007468_2 "mebuffer_fetch.basic.last_frag_data"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007468, VkglTestCase_007468_1, VkglTestCase_007468_2);

#define VkglTestCase_007469_1 "dEQP-GLES31.functional.shaders.fram"
#define VkglTestCase_007469_2 "ebuffer_fetch.basic.fragment_discard"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007469, VkglTestCase_007469_1, VkglTestCase_007469_2);

#define VkglTestCase_007470_1 "dEQP-GLES31.functional.shaders.frameb"
#define VkglTestCase_007470_2 "uffer_fetch.basic.multiple_assignment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007470, VkglTestCase_007470_1, VkglTestCase_007470_2);

#define VkglTestCase_007471_1 "dEQP-GLES31.functional.shaders.framebuf"
#define VkglTestCase_007471_2 "fer_fetch.basic.multiple_render_targets"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007471, VkglTestCase_007471_1, VkglTestCase_007471_2);

#define VkglTestCase_007472_1 "dEQP-GLES31.functional.shaders.framebuff"
#define VkglTestCase_007472_2 "er_fetch.basic.framebuffer_texture_level"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007472, VkglTestCase_007472_1, VkglTestCase_007472_2);

#define VkglTestCase_007473_1 "dEQP-GLES31.functional.shaders.framebuff"
#define VkglTestCase_007473_2 "er_fetch.basic.framebuffer_texture_layer"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007473, VkglTestCase_007473_1, VkglTestCase_007473_2);
