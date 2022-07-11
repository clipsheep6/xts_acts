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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033355_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5"
#define VkglTestCase_033355_2 "_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033355, VkglTestCase_033355_1, VkglTestCase_033355_2);

#define VkglTestCase_033356_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5"
#define VkglTestCase_033356_2 "_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033356, VkglTestCase_033356_1, VkglTestCase_033356_2);

#define VkglTestCase_033357_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x"
#define VkglTestCase_033357_2 "5_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033357, VkglTestCase_033357_1, VkglTestCase_033357_2);

#define VkglTestCase_033358_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033358_2 "ba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033358, VkglTestCase_033358_1, VkglTestCase_033358_2);

#define VkglTestCase_033359_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5"
#define VkglTestCase_033359_2 "_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033359, VkglTestCase_033359_1, VkglTestCase_033359_2);

#define VkglTestCase_033360_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5"
#define VkglTestCase_033360_2 "_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033360, VkglTestCase_033360_1, VkglTestCase_033360_2);

#define VkglTestCase_033361_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x"
#define VkglTestCase_033361_2 "5_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033361, VkglTestCase_033361_1, VkglTestCase_033361_2);

#define VkglTestCase_033362_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033362_2 "ba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033362, VkglTestCase_033362_1, VkglTestCase_033362_2);

#define VkglTestCase_033363_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x"
#define VkglTestCase_033363_2 "5_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033363, VkglTestCase_033363_1, VkglTestCase_033363_2);

#define VkglTestCase_033364_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x"
#define VkglTestCase_033364_2 "5_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033364, VkglTestCase_033364_1, VkglTestCase_033364_2);

#define VkglTestCase_033365_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6"
#define VkglTestCase_033365_2 "x5_rgba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033365, VkglTestCase_033365_1, VkglTestCase_033365_2);

#define VkglTestCase_033366_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_r"
#define VkglTestCase_033366_2 "gba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033366, VkglTestCase_033366_1, VkglTestCase_033366_2);

#define VkglTestCase_033367_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033367_2 "ba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033367, VkglTestCase_033367_1, VkglTestCase_033367_2);

#define VkglTestCase_033368_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033368_2 "ba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033368, VkglTestCase_033368_1, VkglTestCase_033368_2);

#define VkglTestCase_033369_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_r"
#define VkglTestCase_033369_2 "gba.rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033369, VkglTestCase_033369_1, VkglTestCase_033369_2);

#define VkglTestCase_033370_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba."
#define VkglTestCase_033370_2 "rgba_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033370, VkglTestCase_033370_1, VkglTestCase_033370_2);
