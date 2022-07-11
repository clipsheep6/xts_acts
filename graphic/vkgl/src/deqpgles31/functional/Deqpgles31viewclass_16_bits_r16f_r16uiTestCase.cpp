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

#define VkglTestCase_031669_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031669_2 "iewclass_16_bits.r16f_r16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031669, VkglTestCase_031669_1, VkglTestCase_031669_2);

#define VkglTestCase_031670_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031670_2 "iewclass_16_bits.r16f_r16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031670, VkglTestCase_031670_1, VkglTestCase_031670_2);

#define VkglTestCase_031671_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031671_2 "viewclass_16_bits.r16f_r16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031671, VkglTestCase_031671_1, VkglTestCase_031671_2);

#define VkglTestCase_031672_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031672_2 "class_16_bits.r16f_r16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031672, VkglTestCase_031672_1, VkglTestCase_031672_2);

#define VkglTestCase_031673_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031673_2 "ewclass_16_bits.r16f_r16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031673, VkglTestCase_031673_1, VkglTestCase_031673_2);

#define VkglTestCase_031674_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031674_2 "iewclass_16_bits.r16f_r16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031674, VkglTestCase_031674_1, VkglTestCase_031674_2);

#define VkglTestCase_031675_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031675_2 "iewclass_16_bits.r16f_r16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031675, VkglTestCase_031675_1, VkglTestCase_031675_2);

#define VkglTestCase_031676_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031676_2 "viewclass_16_bits.r16f_r16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031676, VkglTestCase_031676_1, VkglTestCase_031676_2);

#define VkglTestCase_031677_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031677_2 "class_16_bits.r16f_r16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031677, VkglTestCase_031677_1, VkglTestCase_031677_2);

#define VkglTestCase_031678_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031678_2 "ewclass_16_bits.r16f_r16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031678, VkglTestCase_031678_1, VkglTestCase_031678_2);

#define VkglTestCase_031679_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031679_2 "viewclass_16_bits.r16f_r16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031679, VkglTestCase_031679_1, VkglTestCase_031679_2);

#define VkglTestCase_031680_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031680_2 "viewclass_16_bits.r16f_r16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031680, VkglTestCase_031680_1, VkglTestCase_031680_2);

#define VkglTestCase_031681_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031681_2 ".viewclass_16_bits.r16f_r16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031681, VkglTestCase_031681_1, VkglTestCase_031681_2);

#define VkglTestCase_031682_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031682_2 "wclass_16_bits.r16f_r16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031682, VkglTestCase_031682_1, VkglTestCase_031682_2);

#define VkglTestCase_031683_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031683_2 "iewclass_16_bits.r16f_r16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031683, VkglTestCase_031683_1, VkglTestCase_031683_2);

#define VkglTestCase_031684_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031684_2 "class_16_bits.r16f_r16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031684, VkglTestCase_031684_1, VkglTestCase_031684_2);

#define VkglTestCase_031685_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031685_2 "class_16_bits.r16f_r16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031685, VkglTestCase_031685_1, VkglTestCase_031685_2);

#define VkglTestCase_031686_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031686_2 "wclass_16_bits.r16f_r16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031686, VkglTestCase_031686_1, VkglTestCase_031686_2);

#define VkglTestCase_031687_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031687_2 "ss_16_bits.r16f_r16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031687, VkglTestCase_031687_1, VkglTestCase_031687_2);

#define VkglTestCase_031688_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031688_2 "lass_16_bits.r16f_r16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031688, VkglTestCase_031688_1, VkglTestCase_031688_2);
