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

#define VkglTestCase_026452_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026452_2 "wclass_48_bits.rgb16ui_rgb16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026452, VkglTestCase_026452_1, VkglTestCase_026452_2);

#define VkglTestCase_026453_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026453_2 "wclass_48_bits.rgb16ui_rgb16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026453, VkglTestCase_026453_1, VkglTestCase_026453_2);

#define VkglTestCase_026454_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026454_2 "ewclass_48_bits.rgb16ui_rgb16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026454, VkglTestCase_026454_1, VkglTestCase_026454_2);

#define VkglTestCase_026455_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026455_2 "ass_48_bits.rgb16ui_rgb16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026455, VkglTestCase_026455_1, VkglTestCase_026455_2);

#define VkglTestCase_026456_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026456_2 "wclass_48_bits.rgb16ui_rgb16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026456, VkglTestCase_026456_1, VkglTestCase_026456_2);

#define VkglTestCase_026457_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026457_2 "wclass_48_bits.rgb16ui_rgb16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026457, VkglTestCase_026457_1, VkglTestCase_026457_2);

#define VkglTestCase_026458_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026458_2 "ewclass_48_bits.rgb16ui_rgb16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026458, VkglTestCase_026458_1, VkglTestCase_026458_2);

#define VkglTestCase_026459_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026459_2 "ass_48_bits.rgb16ui_rgb16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026459, VkglTestCase_026459_1, VkglTestCase_026459_2);

#define VkglTestCase_026460_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026460_2 "ewclass_48_bits.rgb16ui_rgb16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026460, VkglTestCase_026460_1, VkglTestCase_026460_2);

#define VkglTestCase_026461_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026461_2 "ewclass_48_bits.rgb16ui_rgb16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026461, VkglTestCase_026461_1, VkglTestCase_026461_2);

#define VkglTestCase_026462_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026462_2 "iewclass_48_bits.rgb16ui_rgb16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026462, VkglTestCase_026462_1, VkglTestCase_026462_2);

#define VkglTestCase_026463_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026463_2 "lass_48_bits.rgb16ui_rgb16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026463, VkglTestCase_026463_1, VkglTestCase_026463_2);

#define VkglTestCase_026464_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026464_2 "ass_48_bits.rgb16ui_rgb16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026464, VkglTestCase_026464_1, VkglTestCase_026464_2);

#define VkglTestCase_026465_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026465_2 "ass_48_bits.rgb16ui_rgb16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026465, VkglTestCase_026465_1, VkglTestCase_026465_2);

#define VkglTestCase_026466_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026466_2 "lass_48_bits.rgb16ui_rgb16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026466, VkglTestCase_026466_1, VkglTestCase_026466_2);

#define VkglTestCase_026467_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026467_2 "_48_bits.rgb16ui_rgb16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026467, VkglTestCase_026467_1, VkglTestCase_026467_2);
