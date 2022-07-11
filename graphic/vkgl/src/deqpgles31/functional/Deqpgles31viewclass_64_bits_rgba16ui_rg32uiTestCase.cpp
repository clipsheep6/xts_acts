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

#define VkglTestCase_026245_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026245_2 "wclass_64_bits.rgba16ui_rg32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026245, VkglTestCase_026245_1, VkglTestCase_026245_2);

#define VkglTestCase_026246_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026246_2 "wclass_64_bits.rgba16ui_rg32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026246, VkglTestCase_026246_1, VkglTestCase_026246_2);

#define VkglTestCase_026247_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026247_2 "ewclass_64_bits.rgba16ui_rg32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026247, VkglTestCase_026247_1, VkglTestCase_026247_2);

#define VkglTestCase_026248_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026248_2 "ass_64_bits.rgba16ui_rg32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026248, VkglTestCase_026248_1, VkglTestCase_026248_2);

#define VkglTestCase_026249_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026249_2 "lass_64_bits.rgba16ui_rg32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026249, VkglTestCase_026249_1, VkglTestCase_026249_2);

#define VkglTestCase_026250_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026250_2 "wclass_64_bits.rgba16ui_rg32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026250, VkglTestCase_026250_1, VkglTestCase_026250_2);

#define VkglTestCase_026251_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026251_2 "wclass_64_bits.rgba16ui_rg32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026251, VkglTestCase_026251_1, VkglTestCase_026251_2);

#define VkglTestCase_026252_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026252_2 "ewclass_64_bits.rgba16ui_rg32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026252, VkglTestCase_026252_1, VkglTestCase_026252_2);

#define VkglTestCase_026253_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026253_2 "ass_64_bits.rgba16ui_rg32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026253, VkglTestCase_026253_1, VkglTestCase_026253_2);

#define VkglTestCase_026254_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026254_2 "lass_64_bits.rgba16ui_rg32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026254, VkglTestCase_026254_1, VkglTestCase_026254_2);

#define VkglTestCase_026255_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026255_2 "ewclass_64_bits.rgba16ui_rg32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026255, VkglTestCase_026255_1, VkglTestCase_026255_2);

#define VkglTestCase_026256_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026256_2 "ewclass_64_bits.rgba16ui_rg32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026256, VkglTestCase_026256_1, VkglTestCase_026256_2);

#define VkglTestCase_026257_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026257_2 "iewclass_64_bits.rgba16ui_rg32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026257, VkglTestCase_026257_1, VkglTestCase_026257_2);

#define VkglTestCase_026258_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026258_2 "lass_64_bits.rgba16ui_rg32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026258, VkglTestCase_026258_1, VkglTestCase_026258_2);

#define VkglTestCase_026259_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026259_2 "class_64_bits.rgba16ui_rg32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026259, VkglTestCase_026259_1, VkglTestCase_026259_2);

#define VkglTestCase_026260_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026260_2 "ass_64_bits.rgba16ui_rg32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026260, VkglTestCase_026260_1, VkglTestCase_026260_2);

#define VkglTestCase_026261_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026261_2 "ass_64_bits.rgba16ui_rg32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026261, VkglTestCase_026261_1, VkglTestCase_026261_2);

#define VkglTestCase_026262_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026262_2 "lass_64_bits.rgba16ui_rg32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026262, VkglTestCase_026262_1, VkglTestCase_026262_2);

#define VkglTestCase_026263_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026263_2 "_64_bits.rgba16ui_rg32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026263, VkglTestCase_026263_1, VkglTestCase_026263_2);

#define VkglTestCase_026264_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026264_2 "s_64_bits.rgba16ui_rg32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026264, VkglTestCase_026264_1, VkglTestCase_026264_2);

#define VkglTestCase_026265_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026265_2 "lass_64_bits.rgba16ui_rg32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026265, VkglTestCase_026265_1, VkglTestCase_026265_2);

#define VkglTestCase_026266_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026266_2 "lass_64_bits.rgba16ui_rg32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026266, VkglTestCase_026266_1, VkglTestCase_026266_2);

#define VkglTestCase_026267_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026267_2 "class_64_bits.rgba16ui_rg32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026267, VkglTestCase_026267_1, VkglTestCase_026267_2);

#define VkglTestCase_026268_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026268_2 "s_64_bits.rgba16ui_rg32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026268, VkglTestCase_026268_1, VkglTestCase_026268_2);

#define VkglTestCase_026269_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026269_2 "ass_64_bits.rgba16ui_rg32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026269, VkglTestCase_026269_1, VkglTestCase_026269_2);
