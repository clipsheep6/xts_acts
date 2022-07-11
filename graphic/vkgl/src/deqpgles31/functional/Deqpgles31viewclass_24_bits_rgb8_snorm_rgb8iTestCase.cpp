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

#define VkglTestCase_031485_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031485_2 "class_24_bits.rgb8_snorm_rgb8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031485, VkglTestCase_031485_1, VkglTestCase_031485_2);

#define VkglTestCase_031486_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031486_2 "class_24_bits.rgb8_snorm_rgb8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031486, VkglTestCase_031486_1, VkglTestCase_031486_2);

#define VkglTestCase_031487_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031487_2 "wclass_24_bits.rgb8_snorm_rgb8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031487, VkglTestCase_031487_1, VkglTestCase_031487_2);

#define VkglTestCase_031488_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031488_2 "ss_24_bits.rgb8_snorm_rgb8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031488, VkglTestCase_031488_1, VkglTestCase_031488_2);

#define VkglTestCase_031489_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031489_2 "class_24_bits.rgb8_snorm_rgb8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031489, VkglTestCase_031489_1, VkglTestCase_031489_2);

#define VkglTestCase_031490_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031490_2 "class_24_bits.rgb8_snorm_rgb8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031490, VkglTestCase_031490_1, VkglTestCase_031490_2);

#define VkglTestCase_031491_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031491_2 "wclass_24_bits.rgb8_snorm_rgb8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031491, VkglTestCase_031491_1, VkglTestCase_031491_2);

#define VkglTestCase_031492_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031492_2 "ss_24_bits.rgb8_snorm_rgb8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031492, VkglTestCase_031492_1, VkglTestCase_031492_2);

#define VkglTestCase_031493_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031493_2 "wclass_24_bits.rgb8_snorm_rgb8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031493, VkglTestCase_031493_1, VkglTestCase_031493_2);

#define VkglTestCase_031494_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031494_2 "wclass_24_bits.rgb8_snorm_rgb8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031494, VkglTestCase_031494_1, VkglTestCase_031494_2);

#define VkglTestCase_031495_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031495_2 "ewclass_24_bits.rgb8_snorm_rgb8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031495, VkglTestCase_031495_1, VkglTestCase_031495_2);

#define VkglTestCase_031496_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031496_2 "ass_24_bits.rgb8_snorm_rgb8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031496, VkglTestCase_031496_1, VkglTestCase_031496_2);

#define VkglTestCase_031497_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031497_2 "ss_24_bits.rgb8_snorm_rgb8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031497, VkglTestCase_031497_1, VkglTestCase_031497_2);

#define VkglTestCase_031498_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031498_2 "ss_24_bits.rgb8_snorm_rgb8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031498, VkglTestCase_031498_1, VkglTestCase_031498_2);

#define VkglTestCase_031499_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031499_2 "ass_24_bits.rgb8_snorm_rgb8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031499, VkglTestCase_031499_1, VkglTestCase_031499_2);

#define VkglTestCase_031500_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_031500_2 "24_bits.rgb8_snorm_rgb8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031500, VkglTestCase_031500_1, VkglTestCase_031500_2);
