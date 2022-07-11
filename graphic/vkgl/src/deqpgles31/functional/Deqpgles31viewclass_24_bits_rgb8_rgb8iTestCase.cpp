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

#define VkglTestCase_031217_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031217_2 "iewclass_24_bits.rgb8_rgb8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031217, VkglTestCase_031217_1, VkglTestCase_031217_2);

#define VkglTestCase_031218_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031218_2 "iewclass_24_bits.rgb8_rgb8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031218, VkglTestCase_031218_1, VkglTestCase_031218_2);

#define VkglTestCase_031219_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031219_2 "viewclass_24_bits.rgb8_rgb8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031219, VkglTestCase_031219_1, VkglTestCase_031219_2);

#define VkglTestCase_031220_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031220_2 "class_24_bits.rgb8_rgb8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031220, VkglTestCase_031220_1, VkglTestCase_031220_2);

#define VkglTestCase_031221_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031221_2 "iewclass_24_bits.rgb8_rgb8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031221, VkglTestCase_031221_1, VkglTestCase_031221_2);

#define VkglTestCase_031222_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031222_2 "iewclass_24_bits.rgb8_rgb8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031222, VkglTestCase_031222_1, VkglTestCase_031222_2);

#define VkglTestCase_031223_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031223_2 "viewclass_24_bits.rgb8_rgb8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031223, VkglTestCase_031223_1, VkglTestCase_031223_2);

#define VkglTestCase_031224_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031224_2 "class_24_bits.rgb8_rgb8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031224, VkglTestCase_031224_1, VkglTestCase_031224_2);

#define VkglTestCase_031225_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031225_2 "viewclass_24_bits.rgb8_rgb8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031225, VkglTestCase_031225_1, VkglTestCase_031225_2);

#define VkglTestCase_031226_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031226_2 "viewclass_24_bits.rgb8_rgb8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031226, VkglTestCase_031226_1, VkglTestCase_031226_2);

#define VkglTestCase_031227_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031227_2 ".viewclass_24_bits.rgb8_rgb8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031227, VkglTestCase_031227_1, VkglTestCase_031227_2);

#define VkglTestCase_031228_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031228_2 "wclass_24_bits.rgb8_rgb8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031228, VkglTestCase_031228_1, VkglTestCase_031228_2);

#define VkglTestCase_031229_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031229_2 "class_24_bits.rgb8_rgb8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031229, VkglTestCase_031229_1, VkglTestCase_031229_2);

#define VkglTestCase_031230_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031230_2 "class_24_bits.rgb8_rgb8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031230, VkglTestCase_031230_1, VkglTestCase_031230_2);

#define VkglTestCase_031231_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031231_2 "wclass_24_bits.rgb8_rgb8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031231, VkglTestCase_031231_1, VkglTestCase_031231_2);

#define VkglTestCase_031232_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031232_2 "ss_24_bits.rgb8_rgb8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031232, VkglTestCase_031232_1, VkglTestCase_031232_2);

#define VkglTestCase_031233_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031233_2 "ewclass_24_bits.rgb8_rgb8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031233, VkglTestCase_031233_1, VkglTestCase_031233_2);

#define VkglTestCase_031234_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031234_2 "ewclass_24_bits.rgb8_rgb8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031234, VkglTestCase_031234_1, VkglTestCase_031234_2);

#define VkglTestCase_031235_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031235_2 "iewclass_24_bits.rgb8_rgb8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031235, VkglTestCase_031235_1, VkglTestCase_031235_2);

#define VkglTestCase_031236_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031236_2 "lass_24_bits.rgb8_rgb8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031236, VkglTestCase_031236_1, VkglTestCase_031236_2);
