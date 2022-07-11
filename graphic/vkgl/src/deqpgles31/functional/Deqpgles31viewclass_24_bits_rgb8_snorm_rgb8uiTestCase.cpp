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

#define VkglTestCase_031501_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031501_2 "class_24_bits.rgb8_snorm_rgb8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031501, VkglTestCase_031501_1, VkglTestCase_031501_2);

#define VkglTestCase_031502_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031502_2 "class_24_bits.rgb8_snorm_rgb8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031502, VkglTestCase_031502_1, VkglTestCase_031502_2);

#define VkglTestCase_031503_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031503_2 "wclass_24_bits.rgb8_snorm_rgb8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031503, VkglTestCase_031503_1, VkglTestCase_031503_2);

#define VkglTestCase_031504_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031504_2 "ss_24_bits.rgb8_snorm_rgb8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031504, VkglTestCase_031504_1, VkglTestCase_031504_2);

#define VkglTestCase_031505_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031505_2 "class_24_bits.rgb8_snorm_rgb8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031505, VkglTestCase_031505_1, VkglTestCase_031505_2);

#define VkglTestCase_031506_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031506_2 "class_24_bits.rgb8_snorm_rgb8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031506, VkglTestCase_031506_1, VkglTestCase_031506_2);

#define VkglTestCase_031507_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031507_2 "wclass_24_bits.rgb8_snorm_rgb8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031507, VkglTestCase_031507_1, VkglTestCase_031507_2);

#define VkglTestCase_031508_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031508_2 "ss_24_bits.rgb8_snorm_rgb8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031508, VkglTestCase_031508_1, VkglTestCase_031508_2);

#define VkglTestCase_031509_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031509_2 "wclass_24_bits.rgb8_snorm_rgb8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031509, VkglTestCase_031509_1, VkglTestCase_031509_2);

#define VkglTestCase_031510_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031510_2 "wclass_24_bits.rgb8_snorm_rgb8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031510, VkglTestCase_031510_1, VkglTestCase_031510_2);

#define VkglTestCase_031511_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031511_2 "ewclass_24_bits.rgb8_snorm_rgb8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031511, VkglTestCase_031511_1, VkglTestCase_031511_2);

#define VkglTestCase_031512_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031512_2 "ass_24_bits.rgb8_snorm_rgb8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031512, VkglTestCase_031512_1, VkglTestCase_031512_2);

#define VkglTestCase_031513_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031513_2 "ss_24_bits.rgb8_snorm_rgb8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031513, VkglTestCase_031513_1, VkglTestCase_031513_2);

#define VkglTestCase_031514_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031514_2 "ss_24_bits.rgb8_snorm_rgb8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031514, VkglTestCase_031514_1, VkglTestCase_031514_2);

#define VkglTestCase_031515_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031515_2 "ass_24_bits.rgb8_snorm_rgb8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031515, VkglTestCase_031515_1, VkglTestCase_031515_2);

#define VkglTestCase_031516_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_031516_2 "24_bits.rgb8_snorm_rgb8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031516, VkglTestCase_031516_1, VkglTestCase_031516_2);
