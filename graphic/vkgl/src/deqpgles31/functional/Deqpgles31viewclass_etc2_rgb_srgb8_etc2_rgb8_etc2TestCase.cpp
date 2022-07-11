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

#define VkglTestCase_033123_1 "dEQP-GLES31.functional.copy_image.compressed.viewclas"
#define VkglTestCase_033123_2 "s_etc2_rgb.srgb8_etc2_rgb8_etc2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033123, VkglTestCase_033123_1, VkglTestCase_033123_2);

#define VkglTestCase_033124_1 "dEQP-GLES31.functional.copy_image.compressed.viewcla"
#define VkglTestCase_033124_2 "ss_etc2_rgb.srgb8_etc2_rgb8_etc2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033124, VkglTestCase_033124_1, VkglTestCase_033124_2);

#define VkglTestCase_033125_1 "dEQP-GLES31.functional.copy_image.compressed.viewcla"
#define VkglTestCase_033125_2 "ss_etc2_rgb.srgb8_etc2_rgb8_etc2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033125, VkglTestCase_033125_1, VkglTestCase_033125_2);

#define VkglTestCase_033126_1 "dEQP-GLES31.functional.copy_image.compressed.viewcl"
#define VkglTestCase_033126_2 "ass_etc2_rgb.srgb8_etc2_rgb8_etc2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033126, VkglTestCase_033126_1, VkglTestCase_033126_2);
