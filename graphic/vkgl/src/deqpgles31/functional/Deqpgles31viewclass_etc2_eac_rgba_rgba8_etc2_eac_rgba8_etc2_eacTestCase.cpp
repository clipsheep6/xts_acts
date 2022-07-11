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

#define VkglTestCase_033147_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_"
#define VkglTestCase_033147_2 "eac_rgba.rgba8_etc2_eac_rgba8_etc2_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033147, VkglTestCase_033147_1, VkglTestCase_033147_2);

#define VkglTestCase_033148_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2"
#define VkglTestCase_033148_2 "_eac_rgba.rgba8_etc2_eac_rgba8_etc2_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033148, VkglTestCase_033148_1, VkglTestCase_033148_2);

#define VkglTestCase_033149_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2"
#define VkglTestCase_033149_2 "_eac_rgba.rgba8_etc2_eac_rgba8_etc2_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033149, VkglTestCase_033149_1, VkglTestCase_033149_2);

#define VkglTestCase_033150_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc"
#define VkglTestCase_033150_2 "2_eac_rgba.rgba8_etc2_eac_rgba8_etc2_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033150, VkglTestCase_033150_1, VkglTestCase_033150_2);
