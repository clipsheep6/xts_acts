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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031975_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031975_2 "iewclass_16_bits.r16ui_r16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031975, VkglTestCase_031975_1, VkglTestCase_031975_2);

#define VkglTestCase_031976_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031976_2 "iewclass_16_bits.r16ui_r16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031976, VkglTestCase_031976_1, VkglTestCase_031976_2);

#define VkglTestCase_031977_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031977_2 "viewclass_16_bits.r16ui_r16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031977, VkglTestCase_031977_1, VkglTestCase_031977_2);

#define VkglTestCase_031978_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031978_2 "class_16_bits.r16ui_r16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031978, VkglTestCase_031978_1, VkglTestCase_031978_2);

#define VkglTestCase_031979_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031979_2 "wclass_16_bits.r16ui_r16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031979, VkglTestCase_031979_1, VkglTestCase_031979_2);

#define VkglTestCase_031980_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031980_2 "iewclass_16_bits.r16ui_r16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031980, VkglTestCase_031980_1, VkglTestCase_031980_2);

#define VkglTestCase_031981_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031981_2 "iewclass_16_bits.r16ui_r16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031981, VkglTestCase_031981_1, VkglTestCase_031981_2);

#define VkglTestCase_031982_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031982_2 "viewclass_16_bits.r16ui_r16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031982, VkglTestCase_031982_1, VkglTestCase_031982_2);

#define VkglTestCase_031983_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031983_2 "class_16_bits.r16ui_r16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031983, VkglTestCase_031983_1, VkglTestCase_031983_2);

#define VkglTestCase_031984_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031984_2 "wclass_16_bits.r16ui_r16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031984, VkglTestCase_031984_1, VkglTestCase_031984_2);

#define VkglTestCase_031985_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031985_2 "viewclass_16_bits.r16ui_r16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031985, VkglTestCase_031985_1, VkglTestCase_031985_2);

#define VkglTestCase_031986_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031986_2 "viewclass_16_bits.r16ui_r16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031986, VkglTestCase_031986_1, VkglTestCase_031986_2);

#define VkglTestCase_031987_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031987_2 ".viewclass_16_bits.r16ui_r16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031987, VkglTestCase_031987_1, VkglTestCase_031987_2);

#define VkglTestCase_031988_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031988_2 "wclass_16_bits.r16ui_r16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031988, VkglTestCase_031988_1, VkglTestCase_031988_2);

#define VkglTestCase_031989_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031989_2 "ewclass_16_bits.r16ui_r16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031989, VkglTestCase_031989_1, VkglTestCase_031989_2);

#define VkglTestCase_031990_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031990_2 "class_16_bits.r16ui_r16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031990, VkglTestCase_031990_1, VkglTestCase_031990_2);

#define VkglTestCase_031991_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031991_2 "class_16_bits.r16ui_r16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031991, VkglTestCase_031991_1, VkglTestCase_031991_2);

#define VkglTestCase_031992_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031992_2 "wclass_16_bits.r16ui_r16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031992, VkglTestCase_031992_1, VkglTestCase_031992_2);

#define VkglTestCase_031993_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031993_2 "ss_16_bits.r16ui_r16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031993, VkglTestCase_031993_1, VkglTestCase_031993_2);

#define VkglTestCase_031994_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031994_2 "ass_16_bits.r16ui_r16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031994, VkglTestCase_031994_1, VkglTestCase_031994_2);

#define VkglTestCase_031995_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031995_2 "wclass_16_bits.r16ui_r16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031995, VkglTestCase_031995_1, VkglTestCase_031995_2);

#define VkglTestCase_031996_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031996_2 "wclass_16_bits.r16ui_r16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031996, VkglTestCase_031996_1, VkglTestCase_031996_2);

#define VkglTestCase_031997_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031997_2 "ewclass_16_bits.r16ui_r16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031997, VkglTestCase_031997_1, VkglTestCase_031997_2);

#define VkglTestCase_031998_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031998_2 "ass_16_bits.r16ui_r16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031998, VkglTestCase_031998_1, VkglTestCase_031998_2);

#define VkglTestCase_031999_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031999_2 "class_16_bits.r16ui_r16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031999, VkglTestCase_031999_1, VkglTestCase_031999_2);
