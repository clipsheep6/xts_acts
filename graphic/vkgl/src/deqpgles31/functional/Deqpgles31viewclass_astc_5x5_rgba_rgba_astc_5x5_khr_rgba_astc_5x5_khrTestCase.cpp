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

#define VkglTestCase_033291_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5"
#define VkglTestCase_033291_2 "_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033291, VkglTestCase_033291_1, VkglTestCase_033291_2);

#define VkglTestCase_033292_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5"
#define VkglTestCase_033292_2 "_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033292, VkglTestCase_033292_1, VkglTestCase_033292_2);

#define VkglTestCase_033293_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x"
#define VkglTestCase_033293_2 "5_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033293, VkglTestCase_033293_1, VkglTestCase_033293_2);

#define VkglTestCase_033294_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033294_2 "ba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033294, VkglTestCase_033294_1, VkglTestCase_033294_2);

#define VkglTestCase_033295_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5"
#define VkglTestCase_033295_2 "_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033295, VkglTestCase_033295_1, VkglTestCase_033295_2);

#define VkglTestCase_033296_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5"
#define VkglTestCase_033296_2 "_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033296, VkglTestCase_033296_1, VkglTestCase_033296_2);

#define VkglTestCase_033297_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x"
#define VkglTestCase_033297_2 "5_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033297, VkglTestCase_033297_1, VkglTestCase_033297_2);

#define VkglTestCase_033298_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033298_2 "ba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033298, VkglTestCase_033298_1, VkglTestCase_033298_2);

#define VkglTestCase_033299_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x"
#define VkglTestCase_033299_2 "5_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033299, VkglTestCase_033299_1, VkglTestCase_033299_2);

#define VkglTestCase_033300_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x"
#define VkglTestCase_033300_2 "5_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033300, VkglTestCase_033300_1, VkglTestCase_033300_2);

#define VkglTestCase_033301_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5"
#define VkglTestCase_033301_2 "x5_rgba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033301, VkglTestCase_033301_1, VkglTestCase_033301_2);

#define VkglTestCase_033302_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_r"
#define VkglTestCase_033302_2 "gba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033302, VkglTestCase_033302_1, VkglTestCase_033302_2);

#define VkglTestCase_033303_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033303_2 "ba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033303, VkglTestCase_033303_1, VkglTestCase_033303_2);

#define VkglTestCase_033304_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033304_2 "ba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033304, VkglTestCase_033304_1, VkglTestCase_033304_2);

#define VkglTestCase_033305_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_r"
#define VkglTestCase_033305_2 "gba.rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033305, VkglTestCase_033305_1, VkglTestCase_033305_2);

#define VkglTestCase_033306_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba."
#define VkglTestCase_033306_2 "rgba_astc_5x5_khr_rgba_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033306, VkglTestCase_033306_1, VkglTestCase_033306_2);
