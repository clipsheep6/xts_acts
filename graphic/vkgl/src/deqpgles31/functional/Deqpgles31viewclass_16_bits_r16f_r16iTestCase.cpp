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

#define VkglTestCase_031649_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031649_2 "viewclass_16_bits.r16f_r16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031649, VkglTestCase_031649_1, VkglTestCase_031649_2);

#define VkglTestCase_031650_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031650_2 "viewclass_16_bits.r16f_r16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031650, VkglTestCase_031650_1, VkglTestCase_031650_2);

#define VkglTestCase_031651_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031651_2 ".viewclass_16_bits.r16f_r16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031651, VkglTestCase_031651_1, VkglTestCase_031651_2);

#define VkglTestCase_031652_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031652_2 "wclass_16_bits.r16f_r16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031652, VkglTestCase_031652_1, VkglTestCase_031652_2);

#define VkglTestCase_031653_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031653_2 "ewclass_16_bits.r16f_r16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031653, VkglTestCase_031653_1, VkglTestCase_031653_2);

#define VkglTestCase_031654_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031654_2 "viewclass_16_bits.r16f_r16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031654, VkglTestCase_031654_1, VkglTestCase_031654_2);

#define VkglTestCase_031655_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031655_2 "viewclass_16_bits.r16f_r16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031655, VkglTestCase_031655_1, VkglTestCase_031655_2);

#define VkglTestCase_031656_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031656_2 ".viewclass_16_bits.r16f_r16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031656, VkglTestCase_031656_1, VkglTestCase_031656_2);

#define VkglTestCase_031657_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031657_2 "wclass_16_bits.r16f_r16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031657, VkglTestCase_031657_1, VkglTestCase_031657_2);

#define VkglTestCase_031658_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031658_2 "ewclass_16_bits.r16f_r16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031658, VkglTestCase_031658_1, VkglTestCase_031658_2);

#define VkglTestCase_031659_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031659_2 ".viewclass_16_bits.r16f_r16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031659, VkglTestCase_031659_1, VkglTestCase_031659_2);

#define VkglTestCase_031660_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031660_2 ".viewclass_16_bits.r16f_r16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031660, VkglTestCase_031660_1, VkglTestCase_031660_2);

#define VkglTestCase_031661_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031661_2 "d.viewclass_16_bits.r16f_r16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031661, VkglTestCase_031661_1, VkglTestCase_031661_2);

#define VkglTestCase_031662_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031662_2 "ewclass_16_bits.r16f_r16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031662, VkglTestCase_031662_1, VkglTestCase_031662_2);

#define VkglTestCase_031663_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031663_2 "iewclass_16_bits.r16f_r16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031663, VkglTestCase_031663_1, VkglTestCase_031663_2);

#define VkglTestCase_031664_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031664_2 "wclass_16_bits.r16f_r16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031664, VkglTestCase_031664_1, VkglTestCase_031664_2);

#define VkglTestCase_031665_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031665_2 "wclass_16_bits.r16f_r16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031665, VkglTestCase_031665_1, VkglTestCase_031665_2);

#define VkglTestCase_031666_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031666_2 "ewclass_16_bits.r16f_r16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031666, VkglTestCase_031666_1, VkglTestCase_031666_2);

#define VkglTestCase_031667_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031667_2 "ass_16_bits.r16f_r16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031667, VkglTestCase_031667_1, VkglTestCase_031667_2);

#define VkglTestCase_031668_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031668_2 "lass_16_bits.r16f_r16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031668, VkglTestCase_031668_1, VkglTestCase_031668_2);
