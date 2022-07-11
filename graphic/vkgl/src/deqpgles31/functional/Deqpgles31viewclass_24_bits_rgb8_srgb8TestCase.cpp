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

#define VkglTestCase_031277_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031277_2 "iewclass_24_bits.rgb8_srgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031277, VkglTestCase_031277_1, VkglTestCase_031277_2);

#define VkglTestCase_031278_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031278_2 "iewclass_24_bits.rgb8_srgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031278, VkglTestCase_031278_1, VkglTestCase_031278_2);

#define VkglTestCase_031279_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031279_2 "viewclass_24_bits.rgb8_srgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031279, VkglTestCase_031279_1, VkglTestCase_031279_2);

#define VkglTestCase_031280_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031280_2 "class_24_bits.rgb8_srgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031280, VkglTestCase_031280_1, VkglTestCase_031280_2);

#define VkglTestCase_031281_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031281_2 "iewclass_24_bits.rgb8_srgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031281, VkglTestCase_031281_1, VkglTestCase_031281_2);

#define VkglTestCase_031282_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031282_2 "iewclass_24_bits.rgb8_srgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031282, VkglTestCase_031282_1, VkglTestCase_031282_2);

#define VkglTestCase_031283_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031283_2 "viewclass_24_bits.rgb8_srgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031283, VkglTestCase_031283_1, VkglTestCase_031283_2);

#define VkglTestCase_031284_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031284_2 "class_24_bits.rgb8_srgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031284, VkglTestCase_031284_1, VkglTestCase_031284_2);

#define VkglTestCase_031285_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031285_2 "viewclass_24_bits.rgb8_srgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031285, VkglTestCase_031285_1, VkglTestCase_031285_2);

#define VkglTestCase_031286_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031286_2 "viewclass_24_bits.rgb8_srgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031286, VkglTestCase_031286_1, VkglTestCase_031286_2);

#define VkglTestCase_031287_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031287_2 ".viewclass_24_bits.rgb8_srgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031287, VkglTestCase_031287_1, VkglTestCase_031287_2);

#define VkglTestCase_031288_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031288_2 "wclass_24_bits.rgb8_srgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031288, VkglTestCase_031288_1, VkglTestCase_031288_2);

#define VkglTestCase_031289_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031289_2 "class_24_bits.rgb8_srgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031289, VkglTestCase_031289_1, VkglTestCase_031289_2);

#define VkglTestCase_031290_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031290_2 "class_24_bits.rgb8_srgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031290, VkglTestCase_031290_1, VkglTestCase_031290_2);

#define VkglTestCase_031291_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031291_2 "wclass_24_bits.rgb8_srgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031291, VkglTestCase_031291_1, VkglTestCase_031291_2);

#define VkglTestCase_031292_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031292_2 "ss_24_bits.rgb8_srgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031292, VkglTestCase_031292_1, VkglTestCase_031292_2);

#define VkglTestCase_031293_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031293_2 "ewclass_24_bits.rgb8_srgb8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031293, VkglTestCase_031293_1, VkglTestCase_031293_2);

#define VkglTestCase_031294_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031294_2 "ewclass_24_bits.rgb8_srgb8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031294, VkglTestCase_031294_1, VkglTestCase_031294_2);

#define VkglTestCase_031295_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031295_2 "iewclass_24_bits.rgb8_srgb8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031295, VkglTestCase_031295_1, VkglTestCase_031295_2);

#define VkglTestCase_031296_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031296_2 "lass_24_bits.rgb8_srgb8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031296, VkglTestCase_031296_1, VkglTestCase_031296_2);
