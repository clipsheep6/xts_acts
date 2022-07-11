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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026270_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026270_2 "class_64_bits.rgba16ui_rgba16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026270, VkglTestCase_026270_1, VkglTestCase_026270_2);

#define VkglTestCase_026271_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026271_2 "class_64_bits.rgba16ui_rgba16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026271, VkglTestCase_026271_1, VkglTestCase_026271_2);

#define VkglTestCase_026272_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026272_2 "wclass_64_bits.rgba16ui_rgba16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026272, VkglTestCase_026272_1, VkglTestCase_026272_2);

#define VkglTestCase_026273_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026273_2 "ss_64_bits.rgba16ui_rgba16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026273, VkglTestCase_026273_1, VkglTestCase_026273_2);

#define VkglTestCase_026274_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026274_2 "class_64_bits.rgba16ui_rgba16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026274, VkglTestCase_026274_1, VkglTestCase_026274_2);

#define VkglTestCase_026275_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026275_2 "class_64_bits.rgba16ui_rgba16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026275, VkglTestCase_026275_1, VkglTestCase_026275_2);

#define VkglTestCase_026276_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026276_2 "wclass_64_bits.rgba16ui_rgba16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026276, VkglTestCase_026276_1, VkglTestCase_026276_2);

#define VkglTestCase_026277_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026277_2 "ss_64_bits.rgba16ui_rgba16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026277, VkglTestCase_026277_1, VkglTestCase_026277_2);

#define VkglTestCase_026278_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026278_2 "wclass_64_bits.rgba16ui_rgba16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026278, VkglTestCase_026278_1, VkglTestCase_026278_2);

#define VkglTestCase_026279_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026279_2 "wclass_64_bits.rgba16ui_rgba16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026279, VkglTestCase_026279_1, VkglTestCase_026279_2);

#define VkglTestCase_026280_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026280_2 "ewclass_64_bits.rgba16ui_rgba16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026280, VkglTestCase_026280_1, VkglTestCase_026280_2);

#define VkglTestCase_026281_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026281_2 "ass_64_bits.rgba16ui_rgba16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026281, VkglTestCase_026281_1, VkglTestCase_026281_2);

#define VkglTestCase_026282_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026282_2 "ss_64_bits.rgba16ui_rgba16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026282, VkglTestCase_026282_1, VkglTestCase_026282_2);

#define VkglTestCase_026283_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026283_2 "ss_64_bits.rgba16ui_rgba16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026283, VkglTestCase_026283_1, VkglTestCase_026283_2);

#define VkglTestCase_026284_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026284_2 "ass_64_bits.rgba16ui_rgba16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026284, VkglTestCase_026284_1, VkglTestCase_026284_2);

#define VkglTestCase_026285_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_026285_2 "64_bits.rgba16ui_rgba16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026285, VkglTestCase_026285_1, VkglTestCase_026285_2);

#define VkglTestCase_026286_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026286_2 "lass_64_bits.rgba16ui_rgba16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026286, VkglTestCase_026286_1, VkglTestCase_026286_2);

#define VkglTestCase_026287_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026287_2 "lass_64_bits.rgba16ui_rgba16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026287, VkglTestCase_026287_1, VkglTestCase_026287_2);

#define VkglTestCase_026288_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026288_2 "class_64_bits.rgba16ui_rgba16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026288, VkglTestCase_026288_1, VkglTestCase_026288_2);

#define VkglTestCase_026289_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026289_2 "s_64_bits.rgba16ui_rgba16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026289, VkglTestCase_026289_1, VkglTestCase_026289_2);
