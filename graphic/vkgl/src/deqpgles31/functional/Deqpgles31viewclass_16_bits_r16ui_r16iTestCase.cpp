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

#define VkglTestCase_031950_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031950_2 "iewclass_16_bits.r16ui_r16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031950, VkglTestCase_031950_1, VkglTestCase_031950_2);

#define VkglTestCase_031951_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031951_2 "iewclass_16_bits.r16ui_r16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031951, VkglTestCase_031951_1, VkglTestCase_031951_2);

#define VkglTestCase_031952_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031952_2 "viewclass_16_bits.r16ui_r16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031952, VkglTestCase_031952_1, VkglTestCase_031952_2);

#define VkglTestCase_031953_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031953_2 "class_16_bits.r16ui_r16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031953, VkglTestCase_031953_1, VkglTestCase_031953_2);

#define VkglTestCase_031954_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031954_2 "ewclass_16_bits.r16ui_r16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031954, VkglTestCase_031954_1, VkglTestCase_031954_2);

#define VkglTestCase_031955_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031955_2 "iewclass_16_bits.r16ui_r16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031955, VkglTestCase_031955_1, VkglTestCase_031955_2);

#define VkglTestCase_031956_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031956_2 "iewclass_16_bits.r16ui_r16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031956, VkglTestCase_031956_1, VkglTestCase_031956_2);

#define VkglTestCase_031957_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031957_2 "viewclass_16_bits.r16ui_r16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031957, VkglTestCase_031957_1, VkglTestCase_031957_2);

#define VkglTestCase_031958_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031958_2 "class_16_bits.r16ui_r16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031958, VkglTestCase_031958_1, VkglTestCase_031958_2);

#define VkglTestCase_031959_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031959_2 "ewclass_16_bits.r16ui_r16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031959, VkglTestCase_031959_1, VkglTestCase_031959_2);

#define VkglTestCase_031960_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031960_2 "viewclass_16_bits.r16ui_r16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031960, VkglTestCase_031960_1, VkglTestCase_031960_2);

#define VkglTestCase_031961_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031961_2 "viewclass_16_bits.r16ui_r16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031961, VkglTestCase_031961_1, VkglTestCase_031961_2);

#define VkglTestCase_031962_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031962_2 ".viewclass_16_bits.r16ui_r16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031962, VkglTestCase_031962_1, VkglTestCase_031962_2);

#define VkglTestCase_031963_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031963_2 "wclass_16_bits.r16ui_r16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031963, VkglTestCase_031963_1, VkglTestCase_031963_2);

#define VkglTestCase_031964_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031964_2 "iewclass_16_bits.r16ui_r16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031964, VkglTestCase_031964_1, VkglTestCase_031964_2);

#define VkglTestCase_031965_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031965_2 "class_16_bits.r16ui_r16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031965, VkglTestCase_031965_1, VkglTestCase_031965_2);

#define VkglTestCase_031966_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031966_2 "class_16_bits.r16ui_r16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031966, VkglTestCase_031966_1, VkglTestCase_031966_2);

#define VkglTestCase_031967_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031967_2 "wclass_16_bits.r16ui_r16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031967, VkglTestCase_031967_1, VkglTestCase_031967_2);

#define VkglTestCase_031968_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031968_2 "ss_16_bits.r16ui_r16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031968, VkglTestCase_031968_1, VkglTestCase_031968_2);

#define VkglTestCase_031969_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031969_2 "lass_16_bits.r16ui_r16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031969, VkglTestCase_031969_1, VkglTestCase_031969_2);

#define VkglTestCase_031970_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031970_2 "ewclass_16_bits.r16ui_r16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031970, VkglTestCase_031970_1, VkglTestCase_031970_2);

#define VkglTestCase_031971_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031971_2 "ewclass_16_bits.r16ui_r16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031971, VkglTestCase_031971_1, VkglTestCase_031971_2);

#define VkglTestCase_031972_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031972_2 "iewclass_16_bits.r16ui_r16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031972, VkglTestCase_031972_1, VkglTestCase_031972_2);

#define VkglTestCase_031973_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031973_2 "lass_16_bits.r16ui_r16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031973, VkglTestCase_031973_1, VkglTestCase_031973_2);

#define VkglTestCase_031974_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031974_2 "class_16_bits.r16ui_r16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031974, VkglTestCase_031974_1, VkglTestCase_031974_2);
