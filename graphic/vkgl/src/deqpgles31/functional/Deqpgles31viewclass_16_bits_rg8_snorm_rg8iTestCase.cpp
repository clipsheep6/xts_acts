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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032666_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032666_2 "wclass_16_bits.rg8_snorm_rg8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032666, VkglTestCase_032666_1, VkglTestCase_032666_2);

#define VkglTestCase_032667_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032667_2 "wclass_16_bits.rg8_snorm_rg8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032667, VkglTestCase_032667_1, VkglTestCase_032667_2);

#define VkglTestCase_032668_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032668_2 "ewclass_16_bits.rg8_snorm_rg8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032668, VkglTestCase_032668_1, VkglTestCase_032668_2);

#define VkglTestCase_032669_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032669_2 "ass_16_bits.rg8_snorm_rg8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032669, VkglTestCase_032669_1, VkglTestCase_032669_2);

#define VkglTestCase_032670_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032670_2 "class_16_bits.rg8_snorm_rg8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032670, VkglTestCase_032670_1, VkglTestCase_032670_2);

#define VkglTestCase_032671_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032671_2 "wclass_16_bits.rg8_snorm_rg8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032671, VkglTestCase_032671_1, VkglTestCase_032671_2);

#define VkglTestCase_032672_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032672_2 "wclass_16_bits.rg8_snorm_rg8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032672, VkglTestCase_032672_1, VkglTestCase_032672_2);

#define VkglTestCase_032673_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032673_2 "ewclass_16_bits.rg8_snorm_rg8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032673, VkglTestCase_032673_1, VkglTestCase_032673_2);

#define VkglTestCase_032674_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032674_2 "ass_16_bits.rg8_snorm_rg8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032674, VkglTestCase_032674_1, VkglTestCase_032674_2);

#define VkglTestCase_032675_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032675_2 "class_16_bits.rg8_snorm_rg8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032675, VkglTestCase_032675_1, VkglTestCase_032675_2);

#define VkglTestCase_032676_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032676_2 "ewclass_16_bits.rg8_snorm_rg8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032676, VkglTestCase_032676_1, VkglTestCase_032676_2);

#define VkglTestCase_032677_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032677_2 "ewclass_16_bits.rg8_snorm_rg8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032677, VkglTestCase_032677_1, VkglTestCase_032677_2);

#define VkglTestCase_032678_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032678_2 "iewclass_16_bits.rg8_snorm_rg8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032678, VkglTestCase_032678_1, VkglTestCase_032678_2);

#define VkglTestCase_032679_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032679_2 "lass_16_bits.rg8_snorm_rg8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032679, VkglTestCase_032679_1, VkglTestCase_032679_2);

#define VkglTestCase_032680_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032680_2 "wclass_16_bits.rg8_snorm_rg8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032680, VkglTestCase_032680_1, VkglTestCase_032680_2);

#define VkglTestCase_032681_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032681_2 "ass_16_bits.rg8_snorm_rg8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032681, VkglTestCase_032681_1, VkglTestCase_032681_2);

#define VkglTestCase_032682_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032682_2 "ass_16_bits.rg8_snorm_rg8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032682, VkglTestCase_032682_1, VkglTestCase_032682_2);

#define VkglTestCase_032683_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032683_2 "lass_16_bits.rg8_snorm_rg8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032683, VkglTestCase_032683_1, VkglTestCase_032683_2);

#define VkglTestCase_032684_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_032684_2 "_16_bits.rg8_snorm_rg8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032684, VkglTestCase_032684_1, VkglTestCase_032684_2);

#define VkglTestCase_032685_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032685_2 "ss_16_bits.rg8_snorm_rg8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032685, VkglTestCase_032685_1, VkglTestCase_032685_2);
