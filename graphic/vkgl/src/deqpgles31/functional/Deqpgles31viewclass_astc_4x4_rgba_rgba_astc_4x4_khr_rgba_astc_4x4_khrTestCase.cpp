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

#define VkglTestCase_033163_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4"
#define VkglTestCase_033163_2 "_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033163, VkglTestCase_033163_1, VkglTestCase_033163_2);

#define VkglTestCase_033164_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4"
#define VkglTestCase_033164_2 "_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033164, VkglTestCase_033164_1, VkglTestCase_033164_2);

#define VkglTestCase_033165_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x"
#define VkglTestCase_033165_2 "4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033165, VkglTestCase_033165_1, VkglTestCase_033165_2);

#define VkglTestCase_033166_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033166_2 "ba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033166, VkglTestCase_033166_1, VkglTestCase_033166_2);

#define VkglTestCase_033167_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4"
#define VkglTestCase_033167_2 "_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033167, VkglTestCase_033167_1, VkglTestCase_033167_2);

#define VkglTestCase_033168_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4"
#define VkglTestCase_033168_2 "_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033168, VkglTestCase_033168_1, VkglTestCase_033168_2);

#define VkglTestCase_033169_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x"
#define VkglTestCase_033169_2 "4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033169, VkglTestCase_033169_1, VkglTestCase_033169_2);

#define VkglTestCase_033170_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033170_2 "ba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033170, VkglTestCase_033170_1, VkglTestCase_033170_2);

#define VkglTestCase_033171_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x"
#define VkglTestCase_033171_2 "4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033171, VkglTestCase_033171_1, VkglTestCase_033171_2);

#define VkglTestCase_033172_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x"
#define VkglTestCase_033172_2 "4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033172, VkglTestCase_033172_1, VkglTestCase_033172_2);

#define VkglTestCase_033173_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4"
#define VkglTestCase_033173_2 "x4_rgba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033173, VkglTestCase_033173_1, VkglTestCase_033173_2);

#define VkglTestCase_033174_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_r"
#define VkglTestCase_033174_2 "gba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033174, VkglTestCase_033174_1, VkglTestCase_033174_2);

#define VkglTestCase_033175_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033175_2 "ba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033175, VkglTestCase_033175_1, VkglTestCase_033175_2);

#define VkglTestCase_033176_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033176_2 "ba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033176, VkglTestCase_033176_1, VkglTestCase_033176_2);

#define VkglTestCase_033177_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_r"
#define VkglTestCase_033177_2 "gba.rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033177, VkglTestCase_033177_1, VkglTestCase_033177_2);

#define VkglTestCase_033178_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba."
#define VkglTestCase_033178_2 "rgba_astc_4x4_khr_rgba_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033178, VkglTestCase_033178_1, VkglTestCase_033178_2);
