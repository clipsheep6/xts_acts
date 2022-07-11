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

#define VkglTestCase_033135_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.rgb8_punc"
#define VkglTestCase_033135_2 "hthrough_alpha1_etc2_srgb8_punchthrough_alpha1_etc2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033135, VkglTestCase_033135_1, VkglTestCase_033135_2);

#define VkglTestCase_033136_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.rgb8_pun"
#define VkglTestCase_033136_2 "chthrough_alpha1_etc2_srgb8_punchthrough_alpha1_etc2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033136, VkglTestCase_033136_1, VkglTestCase_033136_2);

#define VkglTestCase_033137_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.rgb8_pun"
#define VkglTestCase_033137_2 "chthrough_alpha1_etc2_srgb8_punchthrough_alpha1_etc2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033137, VkglTestCase_033137_1, VkglTestCase_033137_2);

#define VkglTestCase_033138_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.rgb8_pu"
#define VkglTestCase_033138_2 "nchthrough_alpha1_etc2_srgb8_punchthrough_alpha1_etc2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033138, VkglTestCase_033138_1, VkglTestCase_033138_2);
