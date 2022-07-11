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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020174_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020174_2 "y.uniform.array_size.default_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020174, VkglTestCase_020174_1, VkglTestCase_020174_2);

#define VkglTestCase_020175_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020175_2 "ry.uniform.array_size.default_block.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020175, VkglTestCase_020175_1, VkglTestCase_020175_2);

#define VkglTestCase_020176_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020176_2 "y.uniform.array_size.default_block.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020176, VkglTestCase_020176_1, VkglTestCase_020176_2);

#define VkglTestCase_020177_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020177_2 "y.uniform.array_size.default_block.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020177, VkglTestCase_020177_1, VkglTestCase_020177_2);

#define VkglTestCase_020178_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020178_2 "y.uniform.array_size.default_block.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020178, VkglTestCase_020178_1, VkglTestCase_020178_2);

#define VkglTestCase_020179_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020179_2 "y.uniform.array_size.default_block.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020179, VkglTestCase_020179_1, VkglTestCase_020179_2);

#define VkglTestCase_020180_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020180_2 "y.uniform.array_size.default_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020180, VkglTestCase_020180_1, VkglTestCase_020180_2);

#define VkglTestCase_020181_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020181_2 "y.uniform.array_size.default_block.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020181, VkglTestCase_020181_1, VkglTestCase_020181_2);

#define VkglTestCase_020182_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020182_2 "y.uniform.array_size.default_block.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020182, VkglTestCase_020182_1, VkglTestCase_020182_2);

#define VkglTestCase_020183_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020183_2 "y.uniform.array_size.default_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020183, VkglTestCase_020183_1, VkglTestCase_020183_2);

#define VkglTestCase_020184_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020184_2 ".uniform.array_size.default_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020184, VkglTestCase_020184_1, VkglTestCase_020184_2);

#define VkglTestCase_020185_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020185_2 "y.uniform.array_size.default_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020185, VkglTestCase_020185_1, VkglTestCase_020185_2);

#define VkglTestCase_020186_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020186_2 ".uniform.array_size.default_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020186, VkglTestCase_020186_1, VkglTestCase_020186_2);

#define VkglTestCase_020187_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020187_2 "y.uniform.array_size.default_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020187, VkglTestCase_020187_1, VkglTestCase_020187_2);

#define VkglTestCase_020188_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020188_2 "niform.array_size.default_block.types.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020188, VkglTestCase_020188_1, VkglTestCase_020188_2);

#define VkglTestCase_020189_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020189_2 "iform.array_size.default_block.types.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020189, VkglTestCase_020189_1, VkglTestCase_020189_2);

#define VkglTestCase_020190_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020190_2 "orm.array_size.default_block.types.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020190, VkglTestCase_020190_1, VkglTestCase_020190_2);

#define VkglTestCase_020191_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020191_2 "niform.array_size.default_block.types.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020191, VkglTestCase_020191_1, VkglTestCase_020191_2);

#define VkglTestCase_020192_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020192_2 "orm.array_size.default_block.types.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020192, VkglTestCase_020192_1, VkglTestCase_020192_2);

#define VkglTestCase_020193_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020193_2 "niform.array_size.default_block.types.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020193, VkglTestCase_020193_1, VkglTestCase_020193_2);

#define VkglTestCase_020194_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020194_2 "niform.array_size.default_block.types.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020194, VkglTestCase_020194_1, VkglTestCase_020194_2);

#define VkglTestCase_020195_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020195_2 "iform.array_size.default_block.types.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020195, VkglTestCase_020195_1, VkglTestCase_020195_2);

#define VkglTestCase_020196_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020196_2 "form.array_size.default_block.types.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020196, VkglTestCase_020196_1, VkglTestCase_020196_2);

#define VkglTestCase_020197_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020197_2 "uniform.array_size.default_block.types.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020197, VkglTestCase_020197_1, VkglTestCase_020197_2);

#define VkglTestCase_020198_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020198_2 "form.array_size.default_block.types.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020198, VkglTestCase_020198_1, VkglTestCase_020198_2);

#define VkglTestCase_020199_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020199_2 "uniform.array_size.default_block.types.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020199, VkglTestCase_020199_1, VkglTestCase_020199_2);

#define VkglTestCase_020200_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020200_2 "niform.array_size.default_block.types.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020200, VkglTestCase_020200_1, VkglTestCase_020200_2);

#define VkglTestCase_020259_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020259_2 ".uniform.array_stride.default_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020259, VkglTestCase_020259_1, VkglTestCase_020259_2);

#define VkglTestCase_020260_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020260_2 "y.uniform.array_stride.default_block.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020260, VkglTestCase_020260_1, VkglTestCase_020260_2);

#define VkglTestCase_020261_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020261_2 ".uniform.array_stride.default_block.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020261, VkglTestCase_020261_1, VkglTestCase_020261_2);

#define VkglTestCase_020262_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020262_2 ".uniform.array_stride.default_block.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020262, VkglTestCase_020262_1, VkglTestCase_020262_2);

#define VkglTestCase_020263_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020263_2 ".uniform.array_stride.default_block.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020263, VkglTestCase_020263_1, VkglTestCase_020263_2);

#define VkglTestCase_020264_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020264_2 ".uniform.array_stride.default_block.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020264, VkglTestCase_020264_1, VkglTestCase_020264_2);

#define VkglTestCase_020265_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020265_2 ".uniform.array_stride.default_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020265, VkglTestCase_020265_1, VkglTestCase_020265_2);

#define VkglTestCase_020266_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020266_2 ".uniform.array_stride.default_block.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020266, VkglTestCase_020266_1, VkglTestCase_020266_2);

#define VkglTestCase_020267_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020267_2 ".uniform.array_stride.default_block.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020267, VkglTestCase_020267_1, VkglTestCase_020267_2);

#define VkglTestCase_020268_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020268_2 ".uniform.array_stride.default_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020268, VkglTestCase_020268_1, VkglTestCase_020268_2);

#define VkglTestCase_020269_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020269_2 "uniform.array_stride.default_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020269, VkglTestCase_020269_1, VkglTestCase_020269_2);

#define VkglTestCase_020270_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020270_2 ".uniform.array_stride.default_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020270, VkglTestCase_020270_1, VkglTestCase_020270_2);

#define VkglTestCase_020271_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020271_2 "uniform.array_stride.default_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020271, VkglTestCase_020271_1, VkglTestCase_020271_2);

#define VkglTestCase_020272_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020272_2 ".uniform.array_stride.default_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020272, VkglTestCase_020272_1, VkglTestCase_020272_2);

#define VkglTestCase_020273_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020273_2 "iform.array_stride.default_block.types.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020273, VkglTestCase_020273_1, VkglTestCase_020273_2);

#define VkglTestCase_020274_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020274_2 "form.array_stride.default_block.types.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020274, VkglTestCase_020274_1, VkglTestCase_020274_2);

#define VkglTestCase_020275_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020275_2 "rm.array_stride.default_block.types.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020275, VkglTestCase_020275_1, VkglTestCase_020275_2);

#define VkglTestCase_020276_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020276_2 "iform.array_stride.default_block.types.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020276, VkglTestCase_020276_1, VkglTestCase_020276_2);

#define VkglTestCase_020277_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020277_2 "rm.array_stride.default_block.types.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020277, VkglTestCase_020277_1, VkglTestCase_020277_2);

#define VkglTestCase_020278_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020278_2 "iform.array_stride.default_block.types.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020278, VkglTestCase_020278_1, VkglTestCase_020278_2);

#define VkglTestCase_020279_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020279_2 "iform.array_stride.default_block.types.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020279, VkglTestCase_020279_1, VkglTestCase_020279_2);

#define VkglTestCase_020280_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020280_2 "form.array_stride.default_block.types.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020280, VkglTestCase_020280_1, VkglTestCase_020280_2);

#define VkglTestCase_020281_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020281_2 "orm.array_stride.default_block.types.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020281, VkglTestCase_020281_1, VkglTestCase_020281_2);

#define VkglTestCase_020282_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020282_2 "niform.array_stride.default_block.types.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020282, VkglTestCase_020282_1, VkglTestCase_020282_2);

#define VkglTestCase_020283_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020283_2 "orm.array_stride.default_block.types.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020283, VkglTestCase_020283_1, VkglTestCase_020283_2);

#define VkglTestCase_020284_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020284_2 "niform.array_stride.default_block.types.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020284, VkglTestCase_020284_1, VkglTestCase_020284_2);

#define VkglTestCase_020285_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020285_2 "iform.array_stride.default_block.types.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020285, VkglTestCase_020285_1, VkglTestCase_020285_2);

#define VkglTestCase_020840_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020840_2 "ery.uniform.offset.default_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020840, VkglTestCase_020840_1, VkglTestCase_020840_2);

#define VkglTestCase_020841_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_020841_2 "uery.uniform.offset.default_block.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020841, VkglTestCase_020841_1, VkglTestCase_020841_2);

#define VkglTestCase_020842_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020842_2 "ery.uniform.offset.default_block.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020842, VkglTestCase_020842_1, VkglTestCase_020842_2);

#define VkglTestCase_020843_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020843_2 "ery.uniform.offset.default_block.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020843, VkglTestCase_020843_1, VkglTestCase_020843_2);

#define VkglTestCase_020844_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020844_2 "ery.uniform.offset.default_block.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020844, VkglTestCase_020844_1, VkglTestCase_020844_2);

#define VkglTestCase_020845_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020845_2 "ery.uniform.offset.default_block.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020845, VkglTestCase_020845_1, VkglTestCase_020845_2);

#define VkglTestCase_020846_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020846_2 "ery.uniform.offset.default_block.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020846, VkglTestCase_020846_1, VkglTestCase_020846_2);

#define VkglTestCase_020847_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020847_2 "ery.uniform.offset.default_block.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020847, VkglTestCase_020847_1, VkglTestCase_020847_2);

#define VkglTestCase_020848_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020848_2 "ery.uniform.offset.default_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020848, VkglTestCase_020848_1, VkglTestCase_020848_2);

#define VkglTestCase_020849_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020849_2 "ery.uniform.offset.default_block.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020849, VkglTestCase_020849_1, VkglTestCase_020849_2);

#define VkglTestCase_020850_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020850_2 "ery.uniform.offset.default_block.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020850, VkglTestCase_020850_1, VkglTestCase_020850_2);

#define VkglTestCase_020851_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020851_2 "ery.uniform.offset.default_block.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020851, VkglTestCase_020851_1, VkglTestCase_020851_2);

#define VkglTestCase_020852_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020852_2 "ery.uniform.offset.default_block.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020852, VkglTestCase_020852_1, VkglTestCase_020852_2);

#define VkglTestCase_020853_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020853_2 "ery.uniform.offset.default_block.types.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020853, VkglTestCase_020853_1, VkglTestCase_020853_2);

#define VkglTestCase_020854_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020854_2 "ery.uniform.offset.default_block.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020854, VkglTestCase_020854_1, VkglTestCase_020854_2);

#define VkglTestCase_020855_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020855_2 "ery.uniform.offset.default_block.types.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020855, VkglTestCase_020855_1, VkglTestCase_020855_2);

#define VkglTestCase_020856_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020856_2 "ery.uniform.offset.default_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020856, VkglTestCase_020856_1, VkglTestCase_020856_2);

#define VkglTestCase_020857_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020857_2 "ry.uniform.offset.default_block.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020857, VkglTestCase_020857_1, VkglTestCase_020857_2);

#define VkglTestCase_020858_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020858_2 "ry.uniform.offset.default_block.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020858, VkglTestCase_020858_1, VkglTestCase_020858_2);

#define VkglTestCase_020859_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020859_2 "ry.uniform.offset.default_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020859, VkglTestCase_020859_1, VkglTestCase_020859_2);

#define VkglTestCase_020860_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020860_2 "ery.uniform.offset.default_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020860, VkglTestCase_020860_1, VkglTestCase_020860_2);

#define VkglTestCase_020861_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020861_2 "ry.uniform.offset.default_block.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020861, VkglTestCase_020861_1, VkglTestCase_020861_2);

#define VkglTestCase_020862_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020862_2 "ry.uniform.offset.default_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020862, VkglTestCase_020862_1, VkglTestCase_020862_2);

#define VkglTestCase_020863_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020863_2 "ry.uniform.offset.default_block.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020863, VkglTestCase_020863_1, VkglTestCase_020863_2);

#define VkglTestCase_020864_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_020864_2 "ery.uniform.offset.default_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020864, VkglTestCase_020864_1, VkglTestCase_020864_2);

#define VkglTestCase_020865_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020865_2 ".uniform.offset.default_block.types.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020865, VkglTestCase_020865_1, VkglTestCase_020865_2);

#define VkglTestCase_020866_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020866_2 "uniform.offset.default_block.types.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020866, VkglTestCase_020866_1, VkglTestCase_020866_2);

#define VkglTestCase_020867_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020867_2 "iform.offset.default_block.types.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020867, VkglTestCase_020867_1, VkglTestCase_020867_2);

#define VkglTestCase_020868_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020868_2 ".uniform.offset.default_block.types.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020868, VkglTestCase_020868_1, VkglTestCase_020868_2);

#define VkglTestCase_020869_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020869_2 "iform.offset.default_block.types.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020869, VkglTestCase_020869_1, VkglTestCase_020869_2);

#define VkglTestCase_020870_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020870_2 "form.offset.default_block.types.sampler_cube_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020870, VkglTestCase_020870_1, VkglTestCase_020870_2);

#define VkglTestCase_020871_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020871_2 "rm.offset.default_block.types.sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020871, VkglTestCase_020871_1, VkglTestCase_020871_2);

#define VkglTestCase_020872_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020872_2 ".uniform.offset.default_block.types.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020872, VkglTestCase_020872_1, VkglTestCase_020872_2);

#define VkglTestCase_020873_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020873_2 "uniform.offset.default_block.types.isampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020873, VkglTestCase_020873_1, VkglTestCase_020873_2);

#define VkglTestCase_020874_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020874_2 "iform.offset.default_block.types.isampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020874, VkglTestCase_020874_1, VkglTestCase_020874_2);

#define VkglTestCase_020875_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020875_2 ".uniform.offset.default_block.types.isampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020875, VkglTestCase_020875_1, VkglTestCase_020875_2);

#define VkglTestCase_020876_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020876_2 ".uniform.offset.default_block.types.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020876, VkglTestCase_020876_1, VkglTestCase_020876_2);

#define VkglTestCase_020877_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020877_2 "uniform.offset.default_block.types.usampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020877, VkglTestCase_020877_1, VkglTestCase_020877_2);

#define VkglTestCase_020878_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020878_2 "iform.offset.default_block.types.usampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020878, VkglTestCase_020878_1, VkglTestCase_020878_2);

#define VkglTestCase_020879_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020879_2 ".uniform.offset.default_block.types.usampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020879, VkglTestCase_020879_1, VkglTestCase_020879_2);

#define VkglTestCase_020880_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020880_2 "uniform.offset.default_block.types.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020880, VkglTestCase_020880_1, VkglTestCase_020880_2);

#define VkglTestCase_020881_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020881_2 "niform.offset.default_block.types.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020881, VkglTestCase_020881_1, VkglTestCase_020881_2);

#define VkglTestCase_020882_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020882_2 "niform.offset.default_block.types.usampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020882, VkglTestCase_020882_1, VkglTestCase_020882_2);

#define VkglTestCase_020883_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020883_2 "y.uniform.offset.default_block.types.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020883, VkglTestCase_020883_1, VkglTestCase_020883_2);

#define VkglTestCase_020884_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020884_2 ".uniform.offset.default_block.types.image_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020884, VkglTestCase_020884_1, VkglTestCase_020884_2);

#define VkglTestCase_020885_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020885_2 "niform.offset.default_block.types.image_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020885, VkglTestCase_020885_1, VkglTestCase_020885_2);

#define VkglTestCase_020886_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020886_2 "y.uniform.offset.default_block.types.image_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020886, VkglTestCase_020886_1, VkglTestCase_020886_2);

#define VkglTestCase_020887_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020887_2 "y.uniform.offset.default_block.types.iimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020887, VkglTestCase_020887_1, VkglTestCase_020887_2);

#define VkglTestCase_020888_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020888_2 ".uniform.offset.default_block.types.iimage_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020888, VkglTestCase_020888_1, VkglTestCase_020888_2);

#define VkglTestCase_020889_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020889_2 "niform.offset.default_block.types.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020889, VkglTestCase_020889_1, VkglTestCase_020889_2);

#define VkglTestCase_020890_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020890_2 "y.uniform.offset.default_block.types.iimage_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020890, VkglTestCase_020890_1, VkglTestCase_020890_2);

#define VkglTestCase_020891_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020891_2 "y.uniform.offset.default_block.types.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020891, VkglTestCase_020891_1, VkglTestCase_020891_2);

#define VkglTestCase_020892_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020892_2 ".uniform.offset.default_block.types.uimage_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020892, VkglTestCase_020892_1, VkglTestCase_020892_2);

#define VkglTestCase_020893_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020893_2 "niform.offset.default_block.types.uimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020893, VkglTestCase_020893_1, VkglTestCase_020893_2);

#define VkglTestCase_020894_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_020894_2 "y.uniform.offset.default_block.types.uimage_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020894, VkglTestCase_020894_1, VkglTestCase_020894_2);

#define VkglTestCase_020895_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020895_2 ".uniform.offset.default_block.types.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020895, VkglTestCase_020895_1, VkglTestCase_020895_2);

#define VkglTestCase_021418_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021418_2 "uery.uniform.type.default_block.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021418, VkglTestCase_021418_1, VkglTestCase_021418_2);

#define VkglTestCase_021419_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021419_2 "query.uniform.type.default_block.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021419, VkglTestCase_021419_1, VkglTestCase_021419_2);

#define VkglTestCase_021420_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021420_2 "uery.uniform.type.default_block.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021420, VkglTestCase_021420_1, VkglTestCase_021420_2);

#define VkglTestCase_021421_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021421_2 "uery.uniform.type.default_block.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021421, VkglTestCase_021421_1, VkglTestCase_021421_2);

#define VkglTestCase_021422_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021422_2 "uery.uniform.type.default_block.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021422, VkglTestCase_021422_1, VkglTestCase_021422_2);

#define VkglTestCase_021423_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021423_2 "uery.uniform.type.default_block.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021423, VkglTestCase_021423_1, VkglTestCase_021423_2);

#define VkglTestCase_021424_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021424_2 "uery.uniform.type.default_block.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021424, VkglTestCase_021424_1, VkglTestCase_021424_2);

#define VkglTestCase_021425_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021425_2 "uery.uniform.type.default_block.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021425, VkglTestCase_021425_1, VkglTestCase_021425_2);

#define VkglTestCase_021426_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021426_2 "uery.uniform.type.default_block.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021426, VkglTestCase_021426_1, VkglTestCase_021426_2);

#define VkglTestCase_021427_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021427_2 "uery.uniform.type.default_block.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021427, VkglTestCase_021427_1, VkglTestCase_021427_2);

#define VkglTestCase_021428_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021428_2 "uery.uniform.type.default_block.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021428, VkglTestCase_021428_1, VkglTestCase_021428_2);

#define VkglTestCase_021429_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021429_2 "uery.uniform.type.default_block.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021429, VkglTestCase_021429_1, VkglTestCase_021429_2);

#define VkglTestCase_021430_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021430_2 "uery.uniform.type.default_block.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021430, VkglTestCase_021430_1, VkglTestCase_021430_2);

#define VkglTestCase_021431_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021431_2 "uery.uniform.type.default_block.types.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021431, VkglTestCase_021431_1, VkglTestCase_021431_2);

#define VkglTestCase_021432_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021432_2 "uery.uniform.type.default_block.types.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021432, VkglTestCase_021432_1, VkglTestCase_021432_2);

#define VkglTestCase_021433_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021433_2 "uery.uniform.type.default_block.types.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021433, VkglTestCase_021433_1, VkglTestCase_021433_2);

#define VkglTestCase_021434_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021434_2 "uery.uniform.type.default_block.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021434, VkglTestCase_021434_1, VkglTestCase_021434_2);

#define VkglTestCase_021435_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021435_2 "ery.uniform.type.default_block.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021435, VkglTestCase_021435_1, VkglTestCase_021435_2);

#define VkglTestCase_021436_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021436_2 "ery.uniform.type.default_block.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021436, VkglTestCase_021436_1, VkglTestCase_021436_2);

#define VkglTestCase_021437_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021437_2 "ery.uniform.type.default_block.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021437, VkglTestCase_021437_1, VkglTestCase_021437_2);

#define VkglTestCase_021438_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021438_2 "uery.uniform.type.default_block.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021438, VkglTestCase_021438_1, VkglTestCase_021438_2);

#define VkglTestCase_021439_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021439_2 "ery.uniform.type.default_block.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021439, VkglTestCase_021439_1, VkglTestCase_021439_2);

#define VkglTestCase_021440_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021440_2 "ery.uniform.type.default_block.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021440, VkglTestCase_021440_1, VkglTestCase_021440_2);

#define VkglTestCase_021441_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021441_2 "ery.uniform.type.default_block.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021441, VkglTestCase_021441_1, VkglTestCase_021441_2);

#define VkglTestCase_021442_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021442_2 "uery.uniform.type.default_block.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021442, VkglTestCase_021442_1, VkglTestCase_021442_2);

#define VkglTestCase_021443_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021443_2 "y.uniform.type.default_block.types.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021443, VkglTestCase_021443_1, VkglTestCase_021443_2);

#define VkglTestCase_021444_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021444_2 ".uniform.type.default_block.types.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021444, VkglTestCase_021444_1, VkglTestCase_021444_2);

#define VkglTestCase_021445_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_021445_2 "niform.type.default_block.types.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021445, VkglTestCase_021445_1, VkglTestCase_021445_2);

#define VkglTestCase_021446_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021446_2 "y.uniform.type.default_block.types.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021446, VkglTestCase_021446_1, VkglTestCase_021446_2);

#define VkglTestCase_021447_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_021447_2 "niform.type.default_block.types.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021447, VkglTestCase_021447_1, VkglTestCase_021447_2);

#define VkglTestCase_021448_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_021448_2 "iform.type.default_block.types.sampler_cube_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021448, VkglTestCase_021448_1, VkglTestCase_021448_2);

#define VkglTestCase_021449_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_021449_2 "orm.type.default_block.types.sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021449, VkglTestCase_021449_1, VkglTestCase_021449_2);

#define VkglTestCase_021450_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021450_2 "y.uniform.type.default_block.types.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021450, VkglTestCase_021450_1, VkglTestCase_021450_2);

#define VkglTestCase_021451_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021451_2 ".uniform.type.default_block.types.isampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021451, VkglTestCase_021451_1, VkglTestCase_021451_2);

#define VkglTestCase_021452_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_021452_2 "niform.type.default_block.types.isampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021452, VkglTestCase_021452_1, VkglTestCase_021452_2);

#define VkglTestCase_021453_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021453_2 "y.uniform.type.default_block.types.isampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021453, VkglTestCase_021453_1, VkglTestCase_021453_2);

#define VkglTestCase_021454_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021454_2 "y.uniform.type.default_block.types.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021454, VkglTestCase_021454_1, VkglTestCase_021454_2);

#define VkglTestCase_021455_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021455_2 ".uniform.type.default_block.types.usampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021455, VkglTestCase_021455_1, VkglTestCase_021455_2);

#define VkglTestCase_021456_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_021456_2 "niform.type.default_block.types.usampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021456, VkglTestCase_021456_1, VkglTestCase_021456_2);

#define VkglTestCase_021457_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021457_2 "y.uniform.type.default_block.types.usampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021457, VkglTestCase_021457_1, VkglTestCase_021457_2);

#define VkglTestCase_021458_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021458_2 ".uniform.type.default_block.types.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021458, VkglTestCase_021458_1, VkglTestCase_021458_2);

#define VkglTestCase_021459_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021459_2 "uniform.type.default_block.types.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021459, VkglTestCase_021459_1, VkglTestCase_021459_2);

#define VkglTestCase_021460_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021460_2 "uniform.type.default_block.types.usampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021460, VkglTestCase_021460_1, VkglTestCase_021460_2);

#define VkglTestCase_021461_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021461_2 "ry.uniform.type.default_block.types.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021461, VkglTestCase_021461_1, VkglTestCase_021461_2);

#define VkglTestCase_021462_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021462_2 "y.uniform.type.default_block.types.image_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021462, VkglTestCase_021462_1, VkglTestCase_021462_2);

#define VkglTestCase_021463_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021463_2 "uniform.type.default_block.types.image_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021463, VkglTestCase_021463_1, VkglTestCase_021463_2);

#define VkglTestCase_021464_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021464_2 "ry.uniform.type.default_block.types.image_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021464, VkglTestCase_021464_1, VkglTestCase_021464_2);

#define VkglTestCase_021465_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021465_2 "ry.uniform.type.default_block.types.iimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021465, VkglTestCase_021465_1, VkglTestCase_021465_2);

#define VkglTestCase_021466_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021466_2 "y.uniform.type.default_block.types.iimage_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021466, VkglTestCase_021466_1, VkglTestCase_021466_2);

#define VkglTestCase_021467_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021467_2 "uniform.type.default_block.types.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021467, VkglTestCase_021467_1, VkglTestCase_021467_2);

#define VkglTestCase_021468_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021468_2 "ry.uniform.type.default_block.types.iimage_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021468, VkglTestCase_021468_1, VkglTestCase_021468_2);

#define VkglTestCase_021469_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021469_2 "ry.uniform.type.default_block.types.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021469, VkglTestCase_021469_1, VkglTestCase_021469_2);

#define VkglTestCase_021470_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021470_2 "y.uniform.type.default_block.types.uimage_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021470, VkglTestCase_021470_1, VkglTestCase_021470_2);

#define VkglTestCase_021471_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021471_2 "uniform.type.default_block.types.uimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021471, VkglTestCase_021471_1, VkglTestCase_021471_2);

#define VkglTestCase_021472_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021472_2 "ry.uniform.type.default_block.types.uimage_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021472, VkglTestCase_021472_1, VkglTestCase_021472_2);

#define VkglTestCase_021473_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021473_2 "y.uniform.type.default_block.types.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021473, VkglTestCase_021473_1, VkglTestCase_021473_2);
