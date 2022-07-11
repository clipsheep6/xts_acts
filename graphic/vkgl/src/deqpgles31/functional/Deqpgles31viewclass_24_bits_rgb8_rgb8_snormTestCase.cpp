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

#define VkglTestCase_031257_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031257_2 "wclass_24_bits.rgb8_rgb8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031257, VkglTestCase_031257_1, VkglTestCase_031257_2);

#define VkglTestCase_031258_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031258_2 "wclass_24_bits.rgb8_rgb8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031258, VkglTestCase_031258_1, VkglTestCase_031258_2);

#define VkglTestCase_031259_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031259_2 "ewclass_24_bits.rgb8_rgb8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031259, VkglTestCase_031259_1, VkglTestCase_031259_2);

#define VkglTestCase_031260_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031260_2 "ass_24_bits.rgb8_rgb8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031260, VkglTestCase_031260_1, VkglTestCase_031260_2);

#define VkglTestCase_031261_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031261_2 "wclass_24_bits.rgb8_rgb8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031261, VkglTestCase_031261_1, VkglTestCase_031261_2);

#define VkglTestCase_031262_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031262_2 "wclass_24_bits.rgb8_rgb8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031262, VkglTestCase_031262_1, VkglTestCase_031262_2);

#define VkglTestCase_031263_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031263_2 "ewclass_24_bits.rgb8_rgb8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031263, VkglTestCase_031263_1, VkglTestCase_031263_2);

#define VkglTestCase_031264_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031264_2 "ass_24_bits.rgb8_rgb8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031264, VkglTestCase_031264_1, VkglTestCase_031264_2);

#define VkglTestCase_031265_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031265_2 "ewclass_24_bits.rgb8_rgb8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031265, VkglTestCase_031265_1, VkglTestCase_031265_2);

#define VkglTestCase_031266_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031266_2 "ewclass_24_bits.rgb8_rgb8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031266, VkglTestCase_031266_1, VkglTestCase_031266_2);

#define VkglTestCase_031267_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031267_2 "iewclass_24_bits.rgb8_rgb8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031267, VkglTestCase_031267_1, VkglTestCase_031267_2);

#define VkglTestCase_031268_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031268_2 "lass_24_bits.rgb8_rgb8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031268, VkglTestCase_031268_1, VkglTestCase_031268_2);

#define VkglTestCase_031269_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031269_2 "ass_24_bits.rgb8_rgb8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031269, VkglTestCase_031269_1, VkglTestCase_031269_2);

#define VkglTestCase_031270_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031270_2 "ass_24_bits.rgb8_rgb8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031270, VkglTestCase_031270_1, VkglTestCase_031270_2);

#define VkglTestCase_031271_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031271_2 "lass_24_bits.rgb8_rgb8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031271, VkglTestCase_031271_1, VkglTestCase_031271_2);

#define VkglTestCase_031272_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031272_2 "_24_bits.rgb8_rgb8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031272, VkglTestCase_031272_1, VkglTestCase_031272_2);

#define VkglTestCase_031273_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031273_2 "lass_24_bits.rgb8_rgb8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031273, VkglTestCase_031273_1, VkglTestCase_031273_2);

#define VkglTestCase_031274_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031274_2 "lass_24_bits.rgb8_rgb8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031274, VkglTestCase_031274_1, VkglTestCase_031274_2);

#define VkglTestCase_031275_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031275_2 "class_24_bits.rgb8_rgb8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031275, VkglTestCase_031275_1, VkglTestCase_031275_2);

#define VkglTestCase_031276_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031276_2 "s_24_bits.rgb8_rgb8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031276, VkglTestCase_031276_1, VkglTestCase_031276_2);
