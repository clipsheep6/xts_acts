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

#define VkglTestCase_025196_1 "dEQP-GLES31.functional.android_ex"
#define VkglTestCase_025196_2 "tension_pack.extensions.khr_debug"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025196, VkglTestCase_025196_1, VkglTestCase_025196_2);

#define VkglTestCase_025197_1 "dEQP-GLES31.functional.android_extension_pac"
#define VkglTestCase_025197_2 "k.extensions.khr_texture_compression_astc_ldr"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025197, VkglTestCase_025197_1, VkglTestCase_025197_2);

#define VkglTestCase_025198_1 "dEQP-GLES31.functional.android_extension_p"
#define VkglTestCase_025198_2 "ack.extensions.khr_blend_equation_advanced"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025198, VkglTestCase_025198_1, VkglTestCase_025198_2);

#define VkglTestCase_025199_1 "dEQP-GLES31.functional.android_extens"
#define VkglTestCase_025199_2 "ion_pack.extensions.oes_sample_shading"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025199, VkglTestCase_025199_1, VkglTestCase_025199_2);

#define VkglTestCase_025200_1 "dEQP-GLES31.functional.android_extensi"
#define VkglTestCase_025200_2 "on_pack.extensions.oes_sample_variables"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025200, VkglTestCase_025200_1, VkglTestCase_025200_2);

#define VkglTestCase_025201_1 "dEQP-GLES31.functional.android_extension"
#define VkglTestCase_025201_2 "_pack.extensions.oes_shader_image_atomic"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025201, VkglTestCase_025201_1, VkglTestCase_025201_2);

#define VkglTestCase_025202_1 "dEQP-GLES31.functional.android_extension_pack."
#define VkglTestCase_025202_2 "extensions.oes_shader_multisample_interpolation"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025202, VkglTestCase_025202_1, VkglTestCase_025202_2);

#define VkglTestCase_025203_1 "dEQP-GLES31.functional.android_extensi"
#define VkglTestCase_025203_2 "on_pack.extensions.oes_texture_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025203, VkglTestCase_025203_1, VkglTestCase_025203_2);

#define VkglTestCase_025204_1 "dEQP-GLES31.functional.android_extension_pack.ex"
#define VkglTestCase_025204_2 "tensions.oes_texture_storage_multisample_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025204, VkglTestCase_025204_1, VkglTestCase_025204_2);

#define VkglTestCase_025205_1 "dEQP-GLES31.functional.android_exte"
#define VkglTestCase_025205_2 "nsion_pack.extensions.ext_copy_image"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025205, VkglTestCase_025205_1, VkglTestCase_025205_2);

#define VkglTestCase_025206_1 "dEQP-GLES31.functional.android_extension"
#define VkglTestCase_025206_2 "_pack.extensions.ext_draw_buffers_indexed"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025206, VkglTestCase_025206_1, VkglTestCase_025206_2);

#define VkglTestCase_025207_1 "dEQP-GLES31.functional.android_extensi"
#define VkglTestCase_025207_2 "on_pack.extensions.ext_geometry_shader"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025207, VkglTestCase_025207_1, VkglTestCase_025207_2);

#define VkglTestCase_025208_1 "dEQP-GLES31.functional.android_exten"
#define VkglTestCase_025208_2 "sion_pack.extensions.ext_gpu_shader5"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025208, VkglTestCase_025208_1, VkglTestCase_025208_2);

#define VkglTestCase_025209_1 "dEQP-GLES31.functional.android_extension_"
#define VkglTestCase_025209_2 "pack.extensions.ext_primitive_bounding_box"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025209, VkglTestCase_025209_1, VkglTestCase_025209_2);

#define VkglTestCase_025210_1 "dEQP-GLES31.functional.android_extensi"
#define VkglTestCase_025210_2 "on_pack.extensions.ext_shader_io_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025210, VkglTestCase_025210_1, VkglTestCase_025210_2);

#define VkglTestCase_025211_1 "dEQP-GLES31.functional.android_extension"
#define VkglTestCase_025211_2 "_pack.extensions.ext_tessellation_shader"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025211, VkglTestCase_025211_1, VkglTestCase_025211_2);

#define VkglTestCase_025212_1 "dEQP-GLES31.functional.android_extension"
#define VkglTestCase_025212_2 "_pack.extensions.ext_texture_border_clamp"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025212, VkglTestCase_025212_1, VkglTestCase_025212_2);

#define VkglTestCase_025213_1 "dEQP-GLES31.functional.android_extens"
#define VkglTestCase_025213_2 "ion_pack.extensions.ext_texture_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025213, VkglTestCase_025213_1, VkglTestCase_025213_2);

#define VkglTestCase_025214_1 "dEQP-GLES31.functional.android_extension_"
#define VkglTestCase_025214_2 "pack.extensions.ext_texture_cube_map_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025214, VkglTestCase_025214_1, VkglTestCase_025214_2);

#define VkglTestCase_025215_1 "dEQP-GLES31.functional.android_extension"
#define VkglTestCase_025215_2 "_pack.extensions.ext_texture_srgb_decode"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025215, VkglTestCase_025215_1, VkglTestCase_025215_2);
