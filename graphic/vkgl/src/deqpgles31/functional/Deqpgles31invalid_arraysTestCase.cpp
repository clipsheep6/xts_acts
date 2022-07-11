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
#include "../ActsDeqpgles310007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006101_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_006101_2 "rsions.es31.invalid.arrays.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006101, VkglTestCase_006101_1, VkglTestCase_006101_2);

#define VkglTestCase_006102_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006102_2 "sions.es31.invalid.arrays.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006102, VkglTestCase_006102_1, VkglTestCase_006102_2);

#define VkglTestCase_006103_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_006103_2 "rsions.es31.invalid.arrays.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006103, VkglTestCase_006103_1, VkglTestCase_006103_2);

#define VkglTestCase_006104_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006104_2 "sions.es31.invalid.arrays.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006104, VkglTestCase_006104_1, VkglTestCase_006104_2);

#define VkglTestCase_006105_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006105_2 "sions.es31.invalid.arrays.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006105, VkglTestCase_006105_1, VkglTestCase_006105_2);

#define VkglTestCase_006106_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006106_2 "ions.es31.invalid.arrays.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006106, VkglTestCase_006106_1, VkglTestCase_006106_2);

#define VkglTestCase_006107_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006107_2 "sions.es31.invalid.arrays.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006107, VkglTestCase_006107_1, VkglTestCase_006107_2);

#define VkglTestCase_006108_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006108_2 "ions.es31.invalid.arrays.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006108, VkglTestCase_006108_1, VkglTestCase_006108_2);

#define VkglTestCase_006109_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006109_2 "sions.es31.invalid.arrays.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006109, VkglTestCase_006109_1, VkglTestCase_006109_2);

#define VkglTestCase_006110_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006110_2 "ions.es31.invalid.arrays.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006110, VkglTestCase_006110_1, VkglTestCase_006110_2);

#define VkglTestCase_006111_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006111_2 "sions.es31.invalid.arrays.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006111, VkglTestCase_006111_1, VkglTestCase_006111_2);

#define VkglTestCase_006112_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006112_2 "ions.es31.invalid.arrays.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006112, VkglTestCase_006112_1, VkglTestCase_006112_2);

#define VkglTestCase_006113_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006113_2 "sions.es31.invalid.arrays.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006113, VkglTestCase_006113_1, VkglTestCase_006113_2);

#define VkglTestCase_006114_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006114_2 "ions.es31.invalid.arrays.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006114, VkglTestCase_006114_1, VkglTestCase_006114_2);

#define VkglTestCase_006115_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006115_2 "sions.es31.invalid.arrays.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006115, VkglTestCase_006115_1, VkglTestCase_006115_2);

#define VkglTestCase_006116_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006116_2 "ions.es31.invalid.arrays.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006116, VkglTestCase_006116_1, VkglTestCase_006116_2);

#define VkglTestCase_006117_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006117_2 "sions.es31.invalid.arrays.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006117, VkglTestCase_006117_1, VkglTestCase_006117_2);

#define VkglTestCase_006118_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006118_2 "ions.es31.invalid.arrays.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006118, VkglTestCase_006118_1, VkglTestCase_006118_2);

#define VkglTestCase_006119_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006119_2 "sions.es31.invalid.arrays.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006119, VkglTestCase_006119_1, VkglTestCase_006119_2);

#define VkglTestCase_006120_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006120_2 "ions.es31.invalid.arrays.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006120, VkglTestCase_006120_1, VkglTestCase_006120_2);

#define VkglTestCase_006121_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006121_2 "sions.es31.invalid.arrays.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006121, VkglTestCase_006121_1, VkglTestCase_006121_2);

#define VkglTestCase_006122_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006122_2 "ions.es31.invalid.arrays.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006122, VkglTestCase_006122_1, VkglTestCase_006122_2);

#define VkglTestCase_006123_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006123_2 "sions.es31.invalid.arrays.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006123, VkglTestCase_006123_1, VkglTestCase_006123_2);

#define VkglTestCase_006124_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006124_2 "ions.es31.invalid.arrays.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_006124, VkglTestCase_006124_1, VkglTestCase_006124_2);

#define VkglTestCase_007135_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_007135_2 "rsions.es32.invalid.arrays.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007135, VkglTestCase_007135_1, VkglTestCase_007135_2);

#define VkglTestCase_007136_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007136_2 "sions.es32.invalid.arrays.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007136, VkglTestCase_007136_1, VkglTestCase_007136_2);

#define VkglTestCase_007137_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_007137_2 "rsions.es32.invalid.arrays.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007137, VkglTestCase_007137_1, VkglTestCase_007137_2);

#define VkglTestCase_007138_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007138_2 "sions.es32.invalid.arrays.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007138, VkglTestCase_007138_1, VkglTestCase_007138_2);

#define VkglTestCase_007139_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007139_2 "sions.es32.invalid.arrays.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007139, VkglTestCase_007139_1, VkglTestCase_007139_2);

#define VkglTestCase_007140_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007140_2 "ions.es32.invalid.arrays.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007140, VkglTestCase_007140_1, VkglTestCase_007140_2);

#define VkglTestCase_007141_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007141_2 "sions.es32.invalid.arrays.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007141, VkglTestCase_007141_1, VkglTestCase_007141_2);

#define VkglTestCase_007142_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007142_2 "ions.es32.invalid.arrays.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007142, VkglTestCase_007142_1, VkglTestCase_007142_2);

#define VkglTestCase_007143_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007143_2 "sions.es32.invalid.arrays.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007143, VkglTestCase_007143_1, VkglTestCase_007143_2);

#define VkglTestCase_007144_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007144_2 "ions.es32.invalid.arrays.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007144, VkglTestCase_007144_1, VkglTestCase_007144_2);

#define VkglTestCase_007145_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007145_2 "sions.es32.invalid.arrays.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007145, VkglTestCase_007145_1, VkglTestCase_007145_2);

#define VkglTestCase_007146_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007146_2 "ions.es32.invalid.arrays.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007146, VkglTestCase_007146_1, VkglTestCase_007146_2);

#define VkglTestCase_007147_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007147_2 "sions.es32.invalid.arrays.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007147, VkglTestCase_007147_1, VkglTestCase_007147_2);

#define VkglTestCase_007148_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007148_2 "ions.es32.invalid.arrays.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007148, VkglTestCase_007148_1, VkglTestCase_007148_2);

#define VkglTestCase_007149_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007149_2 "sions.es32.invalid.arrays.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007149, VkglTestCase_007149_1, VkglTestCase_007149_2);

#define VkglTestCase_007150_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007150_2 "ions.es32.invalid.arrays.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007150, VkglTestCase_007150_1, VkglTestCase_007150_2);

#define VkglTestCase_007151_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007151_2 "sions.es32.invalid.arrays.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007151, VkglTestCase_007151_1, VkglTestCase_007151_2);

#define VkglTestCase_007152_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007152_2 "ions.es32.invalid.arrays.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007152, VkglTestCase_007152_1, VkglTestCase_007152_2);

#define VkglTestCase_007153_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007153_2 "sions.es32.invalid.arrays.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007153, VkglTestCase_007153_1, VkglTestCase_007153_2);

#define VkglTestCase_007154_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007154_2 "ions.es32.invalid.arrays.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007154, VkglTestCase_007154_1, VkglTestCase_007154_2);

#define VkglTestCase_007155_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007155_2 "sions.es32.invalid.arrays.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007155, VkglTestCase_007155_1, VkglTestCase_007155_2);

#define VkglTestCase_007156_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007156_2 "ions.es32.invalid.arrays.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007156, VkglTestCase_007156_1, VkglTestCase_007156_2);

#define VkglTestCase_007157_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007157_2 "sions.es32.invalid.arrays.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007157, VkglTestCase_007157_1, VkglTestCase_007157_2);

#define VkglTestCase_007158_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007158_2 "ions.es32.invalid.arrays.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310007TestSuite, TestCase_007158, VkglTestCase_007158_1, VkglTestCase_007158_2);
