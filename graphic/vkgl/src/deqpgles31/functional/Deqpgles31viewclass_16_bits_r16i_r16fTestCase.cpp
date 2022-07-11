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

#define VkglTestCase_031765_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031765_2 "viewclass_16_bits.r16i_r16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031765, VkglTestCase_031765_1, VkglTestCase_031765_2);

#define VkglTestCase_031766_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031766_2 "viewclass_16_bits.r16i_r16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031766, VkglTestCase_031766_1, VkglTestCase_031766_2);

#define VkglTestCase_031767_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031767_2 ".viewclass_16_bits.r16i_r16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031767, VkglTestCase_031767_1, VkglTestCase_031767_2);

#define VkglTestCase_031768_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031768_2 "wclass_16_bits.r16i_r16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031768, VkglTestCase_031768_1, VkglTestCase_031768_2);

#define VkglTestCase_031769_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031769_2 "viewclass_16_bits.r16i_r16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031769, VkglTestCase_031769_1, VkglTestCase_031769_2);

#define VkglTestCase_031770_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031770_2 "viewclass_16_bits.r16i_r16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031770, VkglTestCase_031770_1, VkglTestCase_031770_2);

#define VkglTestCase_031771_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031771_2 ".viewclass_16_bits.r16i_r16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031771, VkglTestCase_031771_1, VkglTestCase_031771_2);

#define VkglTestCase_031772_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031772_2 "wclass_16_bits.r16i_r16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031772, VkglTestCase_031772_1, VkglTestCase_031772_2);

#define VkglTestCase_031773_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031773_2 ".viewclass_16_bits.r16i_r16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031773, VkglTestCase_031773_1, VkglTestCase_031773_2);

#define VkglTestCase_031774_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031774_2 ".viewclass_16_bits.r16i_r16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031774, VkglTestCase_031774_1, VkglTestCase_031774_2);

#define VkglTestCase_031775_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031775_2 "d.viewclass_16_bits.r16i_r16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031775, VkglTestCase_031775_1, VkglTestCase_031775_2);

#define VkglTestCase_031776_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031776_2 "ewclass_16_bits.r16i_r16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031776, VkglTestCase_031776_1, VkglTestCase_031776_2);

#define VkglTestCase_031777_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031777_2 "wclass_16_bits.r16i_r16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031777, VkglTestCase_031777_1, VkglTestCase_031777_2);

#define VkglTestCase_031778_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031778_2 "wclass_16_bits.r16i_r16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031778, VkglTestCase_031778_1, VkglTestCase_031778_2);

#define VkglTestCase_031779_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031779_2 "ewclass_16_bits.r16i_r16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031779, VkglTestCase_031779_1, VkglTestCase_031779_2);

#define VkglTestCase_031780_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031780_2 "ass_16_bits.r16i_r16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031780, VkglTestCase_031780_1, VkglTestCase_031780_2);

#define VkglTestCase_031781_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031781_2 "ewclass_16_bits.r16i_r16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031781, VkglTestCase_031781_1, VkglTestCase_031781_2);

#define VkglTestCase_031782_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031782_2 "ewclass_16_bits.r16i_r16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031782, VkglTestCase_031782_1, VkglTestCase_031782_2);

#define VkglTestCase_031783_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031783_2 "iewclass_16_bits.r16i_r16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031783, VkglTestCase_031783_1, VkglTestCase_031783_2);

#define VkglTestCase_031784_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031784_2 "lass_16_bits.r16i_r16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031784, VkglTestCase_031784_1, VkglTestCase_031784_2);
