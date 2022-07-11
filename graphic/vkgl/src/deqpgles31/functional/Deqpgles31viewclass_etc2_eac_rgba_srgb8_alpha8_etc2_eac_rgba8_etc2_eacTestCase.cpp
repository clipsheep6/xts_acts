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

#define VkglTestCase_033155_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_eac_"
#define VkglTestCase_033155_2 "rgba.srgb8_alpha8_etc2_eac_rgba8_etc2_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033155, VkglTestCase_033155_1, VkglTestCase_033155_2);

#define VkglTestCase_033156_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_eac"
#define VkglTestCase_033156_2 "_rgba.srgb8_alpha8_etc2_eac_rgba8_etc2_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033156, VkglTestCase_033156_1, VkglTestCase_033156_2);

#define VkglTestCase_033157_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_eac"
#define VkglTestCase_033157_2 "_rgba.srgb8_alpha8_etc2_eac_rgba8_etc2_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033157, VkglTestCase_033157_1, VkglTestCase_033157_2);

#define VkglTestCase_033158_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_ea"
#define VkglTestCase_033158_2 "c_rgba.srgb8_alpha8_etc2_eac_rgba8_etc2_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033158, VkglTestCase_033158_1, VkglTestCase_033158_2);
