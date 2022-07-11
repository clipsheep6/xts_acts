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

#define VkglTestCase_031381_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031381_2 "iewclass_24_bits.rgb8ui_rgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031381, VkglTestCase_031381_1, VkglTestCase_031381_2);

#define VkglTestCase_031382_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031382_2 "iewclass_24_bits.rgb8ui_rgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031382, VkglTestCase_031382_1, VkglTestCase_031382_2);

#define VkglTestCase_031383_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031383_2 "viewclass_24_bits.rgb8ui_rgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031383, VkglTestCase_031383_1, VkglTestCase_031383_2);

#define VkglTestCase_031384_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031384_2 "class_24_bits.rgb8ui_rgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031384, VkglTestCase_031384_1, VkglTestCase_031384_2);

#define VkglTestCase_031385_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031385_2 "wclass_24_bits.rgb8ui_rgb8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031385, VkglTestCase_031385_1, VkglTestCase_031385_2);

#define VkglTestCase_031386_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031386_2 "iewclass_24_bits.rgb8ui_rgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031386, VkglTestCase_031386_1, VkglTestCase_031386_2);

#define VkglTestCase_031387_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031387_2 "iewclass_24_bits.rgb8ui_rgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031387, VkglTestCase_031387_1, VkglTestCase_031387_2);

#define VkglTestCase_031388_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031388_2 "viewclass_24_bits.rgb8ui_rgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031388, VkglTestCase_031388_1, VkglTestCase_031388_2);

#define VkglTestCase_031389_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031389_2 "class_24_bits.rgb8ui_rgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031389, VkglTestCase_031389_1, VkglTestCase_031389_2);

#define VkglTestCase_031390_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031390_2 "wclass_24_bits.rgb8ui_rgb8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031390, VkglTestCase_031390_1, VkglTestCase_031390_2);

#define VkglTestCase_031391_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031391_2 "viewclass_24_bits.rgb8ui_rgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031391, VkglTestCase_031391_1, VkglTestCase_031391_2);

#define VkglTestCase_031392_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031392_2 "viewclass_24_bits.rgb8ui_rgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031392, VkglTestCase_031392_1, VkglTestCase_031392_2);

#define VkglTestCase_031393_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031393_2 ".viewclass_24_bits.rgb8ui_rgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031393, VkglTestCase_031393_1, VkglTestCase_031393_2);

#define VkglTestCase_031394_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031394_2 "wclass_24_bits.rgb8ui_rgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031394, VkglTestCase_031394_1, VkglTestCase_031394_2);

#define VkglTestCase_031395_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031395_2 "ewclass_24_bits.rgb8ui_rgb8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031395, VkglTestCase_031395_1, VkglTestCase_031395_2);

#define VkglTestCase_031396_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031396_2 "class_24_bits.rgb8ui_rgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031396, VkglTestCase_031396_1, VkglTestCase_031396_2);

#define VkglTestCase_031397_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031397_2 "class_24_bits.rgb8ui_rgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031397, VkglTestCase_031397_1, VkglTestCase_031397_2);

#define VkglTestCase_031398_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031398_2 "wclass_24_bits.rgb8ui_rgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031398, VkglTestCase_031398_1, VkglTestCase_031398_2);

#define VkglTestCase_031399_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031399_2 "ss_24_bits.rgb8ui_rgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031399, VkglTestCase_031399_1, VkglTestCase_031399_2);

#define VkglTestCase_031400_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031400_2 "ass_24_bits.rgb8ui_rgb8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031400, VkglTestCase_031400_1, VkglTestCase_031400_2);
