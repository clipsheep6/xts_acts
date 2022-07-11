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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025217_1 "dEQP-GLES31.functional.android_extension_pack.sha"
#define VkglTestCase_025217_2 "ders.es31.extension_directive.oes_sample_variables"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025217, VkglTestCase_025217_1, VkglTestCase_025217_2);

#define VkglTestCase_025218_1 "dEQP-GLES31.functional.android_extension_pack.shade"
#define VkglTestCase_025218_2 "rs.es31.extension_directive.oes_shader_image_atomic"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025218, VkglTestCase_025218_1, VkglTestCase_025218_2);

#define VkglTestCase_025219_1 "dEQP-GLES31.functional.android_extension_pack.shaders.es3"
#define VkglTestCase_025219_2 "1.extension_directive.oes_shader_multisample_interpolation"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025219, VkglTestCase_025219_1, VkglTestCase_025219_2);

#define VkglTestCase_025220_1 "dEQP-GLES31.functional.android_extension_pack.shaders.es31."
#define VkglTestCase_025220_2 "extension_directive.oes_texture_storage_multisample_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025220, VkglTestCase_025220_1, VkglTestCase_025220_2);

#define VkglTestCase_025221_1 "dEQP-GLES31.functional.android_extension_pack.sha"
#define VkglTestCase_025221_2 "ders.es31.extension_directive.ext_geometry_shader"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025221, VkglTestCase_025221_1, VkglTestCase_025221_2);

#define VkglTestCase_025222_1 "dEQP-GLES31.functional.android_extension_pack.s"
#define VkglTestCase_025222_2 "haders.es31.extension_directive.ext_gpu_shader5"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025222, VkglTestCase_025222_1, VkglTestCase_025222_2);

#define VkglTestCase_025223_1 "dEQP-GLES31.functional.android_extension_pack.shader"
#define VkglTestCase_025223_2 "s.es31.extension_directive.ext_primitive_bounding_box"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025223, VkglTestCase_025223_1, VkglTestCase_025223_2);

#define VkglTestCase_025224_1 "dEQP-GLES31.functional.android_extension_pack.sha"
#define VkglTestCase_025224_2 "ders.es31.extension_directive.ext_shader_io_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025224, VkglTestCase_025224_1, VkglTestCase_025224_2);

#define VkglTestCase_025225_1 "dEQP-GLES31.functional.android_extension_pack.shade"
#define VkglTestCase_025225_2 "rs.es31.extension_directive.ext_tessellation_shader"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025225, VkglTestCase_025225_1, VkglTestCase_025225_2);

#define VkglTestCase_025226_1 "dEQP-GLES31.functional.android_extension_pack.sh"
#define VkglTestCase_025226_2 "aders.es31.extension_directive.ext_texture_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025226, VkglTestCase_025226_1, VkglTestCase_025226_2);

#define VkglTestCase_025227_1 "dEQP-GLES31.functional.android_extension_pack.shader"
#define VkglTestCase_025227_2 "s.es31.extension_directive.ext_texture_cube_map_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025227, VkglTestCase_025227_1, VkglTestCase_025227_2);
