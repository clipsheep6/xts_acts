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

#define VkglTestCase_031317_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031317_2 "iewclass_24_bits.rgb8i_rgb8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031317, VkglTestCase_031317_1, VkglTestCase_031317_2);

#define VkglTestCase_031318_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031318_2 "iewclass_24_bits.rgb8i_rgb8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031318, VkglTestCase_031318_1, VkglTestCase_031318_2);

#define VkglTestCase_031319_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031319_2 "viewclass_24_bits.rgb8i_rgb8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031319, VkglTestCase_031319_1, VkglTestCase_031319_2);

#define VkglTestCase_031320_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031320_2 "class_24_bits.rgb8i_rgb8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031320, VkglTestCase_031320_1, VkglTestCase_031320_2);

#define VkglTestCase_031321_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031321_2 "iewclass_24_bits.rgb8i_rgb8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031321, VkglTestCase_031321_1, VkglTestCase_031321_2);

#define VkglTestCase_031322_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031322_2 "iewclass_24_bits.rgb8i_rgb8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031322, VkglTestCase_031322_1, VkglTestCase_031322_2);

#define VkglTestCase_031323_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031323_2 "viewclass_24_bits.rgb8i_rgb8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031323, VkglTestCase_031323_1, VkglTestCase_031323_2);

#define VkglTestCase_031324_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031324_2 "class_24_bits.rgb8i_rgb8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031324, VkglTestCase_031324_1, VkglTestCase_031324_2);

#define VkglTestCase_031325_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031325_2 "viewclass_24_bits.rgb8i_rgb8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031325, VkglTestCase_031325_1, VkglTestCase_031325_2);

#define VkglTestCase_031326_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031326_2 "viewclass_24_bits.rgb8i_rgb8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031326, VkglTestCase_031326_1, VkglTestCase_031326_2);

#define VkglTestCase_031327_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031327_2 ".viewclass_24_bits.rgb8i_rgb8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031327, VkglTestCase_031327_1, VkglTestCase_031327_2);

#define VkglTestCase_031328_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031328_2 "wclass_24_bits.rgb8i_rgb8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031328, VkglTestCase_031328_1, VkglTestCase_031328_2);

#define VkglTestCase_031329_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031329_2 "class_24_bits.rgb8i_rgb8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031329, VkglTestCase_031329_1, VkglTestCase_031329_2);

#define VkglTestCase_031330_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031330_2 "class_24_bits.rgb8i_rgb8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031330, VkglTestCase_031330_1, VkglTestCase_031330_2);

#define VkglTestCase_031331_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031331_2 "wclass_24_bits.rgb8i_rgb8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031331, VkglTestCase_031331_1, VkglTestCase_031331_2);

#define VkglTestCase_031332_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031332_2 "ss_24_bits.rgb8i_rgb8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031332, VkglTestCase_031332_1, VkglTestCase_031332_2);
