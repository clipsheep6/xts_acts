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

#define VkglTestCase_026130_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026130_2 "wclass_64_bits.rgba16i_rgba16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026130, VkglTestCase_026130_1, VkglTestCase_026130_2);

#define VkglTestCase_026131_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026131_2 "wclass_64_bits.rgba16i_rgba16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026131, VkglTestCase_026131_1, VkglTestCase_026131_2);

#define VkglTestCase_026132_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026132_2 "ewclass_64_bits.rgba16i_rgba16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026132, VkglTestCase_026132_1, VkglTestCase_026132_2);

#define VkglTestCase_026133_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026133_2 "ass_64_bits.rgba16i_rgba16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026133, VkglTestCase_026133_1, VkglTestCase_026133_2);

#define VkglTestCase_026134_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026134_2 "wclass_64_bits.rgba16i_rgba16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026134, VkglTestCase_026134_1, VkglTestCase_026134_2);

#define VkglTestCase_026135_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026135_2 "wclass_64_bits.rgba16i_rgba16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026135, VkglTestCase_026135_1, VkglTestCase_026135_2);

#define VkglTestCase_026136_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026136_2 "ewclass_64_bits.rgba16i_rgba16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026136, VkglTestCase_026136_1, VkglTestCase_026136_2);

#define VkglTestCase_026137_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026137_2 "ass_64_bits.rgba16i_rgba16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026137, VkglTestCase_026137_1, VkglTestCase_026137_2);

#define VkglTestCase_026138_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026138_2 "ewclass_64_bits.rgba16i_rgba16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026138, VkglTestCase_026138_1, VkglTestCase_026138_2);

#define VkglTestCase_026139_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026139_2 "ewclass_64_bits.rgba16i_rgba16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026139, VkglTestCase_026139_1, VkglTestCase_026139_2);

#define VkglTestCase_026140_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026140_2 "iewclass_64_bits.rgba16i_rgba16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026140, VkglTestCase_026140_1, VkglTestCase_026140_2);

#define VkglTestCase_026141_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026141_2 "lass_64_bits.rgba16i_rgba16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026141, VkglTestCase_026141_1, VkglTestCase_026141_2);

#define VkglTestCase_026142_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026142_2 "ass_64_bits.rgba16i_rgba16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026142, VkglTestCase_026142_1, VkglTestCase_026142_2);

#define VkglTestCase_026143_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026143_2 "ass_64_bits.rgba16i_rgba16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026143, VkglTestCase_026143_1, VkglTestCase_026143_2);

#define VkglTestCase_026144_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026144_2 "lass_64_bits.rgba16i_rgba16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026144, VkglTestCase_026144_1, VkglTestCase_026144_2);

#define VkglTestCase_026145_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026145_2 "_64_bits.rgba16i_rgba16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026145, VkglTestCase_026145_1, VkglTestCase_026145_2);

#define VkglTestCase_026146_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026146_2 "lass_64_bits.rgba16i_rgba16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026146, VkglTestCase_026146_1, VkglTestCase_026146_2);

#define VkglTestCase_026147_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026147_2 "lass_64_bits.rgba16i_rgba16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026147, VkglTestCase_026147_1, VkglTestCase_026147_2);

#define VkglTestCase_026148_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026148_2 "class_64_bits.rgba16i_rgba16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026148, VkglTestCase_026148_1, VkglTestCase_026148_2);

#define VkglTestCase_026149_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026149_2 "s_64_bits.rgba16i_rgba16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026149, VkglTestCase_026149_1, VkglTestCase_026149_2);
