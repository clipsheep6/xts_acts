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

#define VkglTestCase_026150_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026150_2 "wclass_64_bits.rgba16i_rgba16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026150, VkglTestCase_026150_1, VkglTestCase_026150_2);

#define VkglTestCase_026151_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026151_2 "wclass_64_bits.rgba16i_rgba16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026151, VkglTestCase_026151_1, VkglTestCase_026151_2);

#define VkglTestCase_026152_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026152_2 "ewclass_64_bits.rgba16i_rgba16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026152, VkglTestCase_026152_1, VkglTestCase_026152_2);

#define VkglTestCase_026153_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026153_2 "ass_64_bits.rgba16i_rgba16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026153, VkglTestCase_026153_1, VkglTestCase_026153_2);

#define VkglTestCase_026154_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026154_2 "lass_64_bits.rgba16i_rgba16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026154, VkglTestCase_026154_1, VkglTestCase_026154_2);

#define VkglTestCase_026155_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026155_2 "wclass_64_bits.rgba16i_rgba16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026155, VkglTestCase_026155_1, VkglTestCase_026155_2);

#define VkglTestCase_026156_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026156_2 "wclass_64_bits.rgba16i_rgba16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026156, VkglTestCase_026156_1, VkglTestCase_026156_2);

#define VkglTestCase_026157_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026157_2 "ewclass_64_bits.rgba16i_rgba16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026157, VkglTestCase_026157_1, VkglTestCase_026157_2);

#define VkglTestCase_026158_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026158_2 "ass_64_bits.rgba16i_rgba16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026158, VkglTestCase_026158_1, VkglTestCase_026158_2);

#define VkglTestCase_026159_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026159_2 "lass_64_bits.rgba16i_rgba16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026159, VkglTestCase_026159_1, VkglTestCase_026159_2);

#define VkglTestCase_026160_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026160_2 "ewclass_64_bits.rgba16i_rgba16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026160, VkglTestCase_026160_1, VkglTestCase_026160_2);

#define VkglTestCase_026161_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026161_2 "ewclass_64_bits.rgba16i_rgba16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026161, VkglTestCase_026161_1, VkglTestCase_026161_2);

#define VkglTestCase_026162_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026162_2 "iewclass_64_bits.rgba16i_rgba16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026162, VkglTestCase_026162_1, VkglTestCase_026162_2);

#define VkglTestCase_026163_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026163_2 "lass_64_bits.rgba16i_rgba16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026163, VkglTestCase_026163_1, VkglTestCase_026163_2);

#define VkglTestCase_026164_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026164_2 "class_64_bits.rgba16i_rgba16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026164, VkglTestCase_026164_1, VkglTestCase_026164_2);

#define VkglTestCase_026165_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026165_2 "ass_64_bits.rgba16i_rgba16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026165, VkglTestCase_026165_1, VkglTestCase_026165_2);

#define VkglTestCase_026166_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026166_2 "ass_64_bits.rgba16i_rgba16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026166, VkglTestCase_026166_1, VkglTestCase_026166_2);

#define VkglTestCase_026167_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026167_2 "lass_64_bits.rgba16i_rgba16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026167, VkglTestCase_026167_1, VkglTestCase_026167_2);

#define VkglTestCase_026168_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026168_2 "_64_bits.rgba16i_rgba16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026168, VkglTestCase_026168_1, VkglTestCase_026168_2);

#define VkglTestCase_026169_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026169_2 "s_64_bits.rgba16i_rgba16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026169, VkglTestCase_026169_1, VkglTestCase_026169_2);

#define VkglTestCase_026170_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026170_2 "lass_64_bits.rgba16i_rgba16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026170, VkglTestCase_026170_1, VkglTestCase_026170_2);

#define VkglTestCase_026171_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026171_2 "lass_64_bits.rgba16i_rgba16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026171, VkglTestCase_026171_1, VkglTestCase_026171_2);

#define VkglTestCase_026172_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026172_2 "class_64_bits.rgba16i_rgba16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026172, VkglTestCase_026172_1, VkglTestCase_026172_2);

#define VkglTestCase_026173_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026173_2 "s_64_bits.rgba16i_rgba16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026173, VkglTestCase_026173_1, VkglTestCase_026173_2);

#define VkglTestCase_026174_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026174_2 "ass_64_bits.rgba16i_rgba16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026174, VkglTestCase_026174_1, VkglTestCase_026174_2);
