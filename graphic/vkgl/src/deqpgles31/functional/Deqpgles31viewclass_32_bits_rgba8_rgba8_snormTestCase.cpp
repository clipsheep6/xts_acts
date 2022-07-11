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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028633_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028633_2 "class_32_bits.rgba8_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028633, VkglTestCase_028633_1, VkglTestCase_028633_2);

#define VkglTestCase_028634_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028634_2 "class_32_bits.rgba8_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028634, VkglTestCase_028634_1, VkglTestCase_028634_2);

#define VkglTestCase_028635_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028635_2 "wclass_32_bits.rgba8_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028635, VkglTestCase_028635_1, VkglTestCase_028635_2);

#define VkglTestCase_028636_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028636_2 "ss_32_bits.rgba8_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028636, VkglTestCase_028636_1, VkglTestCase_028636_2);

#define VkglTestCase_028637_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028637_2 "class_32_bits.rgba8_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028637, VkglTestCase_028637_1, VkglTestCase_028637_2);

#define VkglTestCase_028638_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028638_2 "class_32_bits.rgba8_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028638, VkglTestCase_028638_1, VkglTestCase_028638_2);

#define VkglTestCase_028639_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028639_2 "wclass_32_bits.rgba8_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028639, VkglTestCase_028639_1, VkglTestCase_028639_2);

#define VkglTestCase_028640_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028640_2 "ss_32_bits.rgba8_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028640, VkglTestCase_028640_1, VkglTestCase_028640_2);

#define VkglTestCase_028641_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028641_2 "wclass_32_bits.rgba8_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028641, VkglTestCase_028641_1, VkglTestCase_028641_2);

#define VkglTestCase_028642_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028642_2 "wclass_32_bits.rgba8_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028642, VkglTestCase_028642_1, VkglTestCase_028642_2);

#define VkglTestCase_028643_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028643_2 "ewclass_32_bits.rgba8_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028643, VkglTestCase_028643_1, VkglTestCase_028643_2);

#define VkglTestCase_028644_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028644_2 "ass_32_bits.rgba8_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028644, VkglTestCase_028644_1, VkglTestCase_028644_2);

#define VkglTestCase_028645_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028645_2 "ss_32_bits.rgba8_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028645, VkglTestCase_028645_1, VkglTestCase_028645_2);

#define VkglTestCase_028646_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028646_2 "ss_32_bits.rgba8_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028646, VkglTestCase_028646_1, VkglTestCase_028646_2);

#define VkglTestCase_028647_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028647_2 "ass_32_bits.rgba8_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028647, VkglTestCase_028647_1, VkglTestCase_028647_2);

#define VkglTestCase_028648_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_028648_2 "32_bits.rgba8_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028648, VkglTestCase_028648_1, VkglTestCase_028648_2);

#define VkglTestCase_028649_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028649_2 "ass_32_bits.rgba8_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028649, VkglTestCase_028649_1, VkglTestCase_028649_2);

#define VkglTestCase_028650_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028650_2 "ass_32_bits.rgba8_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028650, VkglTestCase_028650_1, VkglTestCase_028650_2);

#define VkglTestCase_028651_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028651_2 "lass_32_bits.rgba8_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028651, VkglTestCase_028651_1, VkglTestCase_028651_2);

#define VkglTestCase_028652_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028652_2 "_32_bits.rgba8_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028652, VkglTestCase_028652_1, VkglTestCase_028652_2);
