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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033143_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.srgb8_pun"
#define VkglTestCase_033143_2 "chthrough_alpha1_etc2_srgb8_punchthrough_alpha1_etc2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033143, VkglTestCase_033143_1, VkglTestCase_033143_2);

#define VkglTestCase_033144_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.srgb8_pu"
#define VkglTestCase_033144_2 "nchthrough_alpha1_etc2_srgb8_punchthrough_alpha1_etc2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033144, VkglTestCase_033144_1, VkglTestCase_033144_2);

#define VkglTestCase_033145_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.srgb8_pu"
#define VkglTestCase_033145_2 "nchthrough_alpha1_etc2_srgb8_punchthrough_alpha1_etc2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033145, VkglTestCase_033145_1, VkglTestCase_033145_2);

#define VkglTestCase_033146_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.srgb8_p"
#define VkglTestCase_033146_2 "unchthrough_alpha1_etc2_srgb8_punchthrough_alpha1_etc2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033146, VkglTestCase_033146_1, VkglTestCase_033146_2);
