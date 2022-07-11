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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019226_1 "dEQP-GLES31.functional.debug.negative_coverage.log."
#define VkglTestCase_019226_2 "shader_function.bitfield_extract_invalid_value_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019226, VkglTestCase_019226_1, VkglTestCase_019226_2);

#define VkglTestCase_019227_1 "dEQP-GLES31.functional.debug.negative_coverage.log."
#define VkglTestCase_019227_2 "shader_function.bitfield_extract_invalid_offset_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019227, VkglTestCase_019227_1, VkglTestCase_019227_2);

#define VkglTestCase_019228_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_019228_2 ".shader_function.bitfield_extract_invalid_bits_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019228, VkglTestCase_019228_1, VkglTestCase_019228_2);

#define VkglTestCase_019229_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_019229_2 ".shader_function.bitfield_insert_invalid_base_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019229, VkglTestCase_019229_1, VkglTestCase_019229_2);

#define VkglTestCase_019230_1 "dEQP-GLES31.functional.debug.negative_coverage.log."
#define VkglTestCase_019230_2 "shader_function.bitfield_insert_invalid_insert_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019230, VkglTestCase_019230_1, VkglTestCase_019230_2);

#define VkglTestCase_019231_1 "dEQP-GLES31.functional.debug.negative_coverage.log."
#define VkglTestCase_019231_2 "shader_function.bitfield_insert_invalid_offset_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019231, VkglTestCase_019231_1, VkglTestCase_019231_2);

#define VkglTestCase_019232_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_019232_2 ".shader_function.bitfield_insert_invalid_bits_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019232, VkglTestCase_019232_1, VkglTestCase_019232_2);

#define VkglTestCase_019233_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019233_2 "erage.log.shader_function.bitfield_reverse"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019233, VkglTestCase_019233_1, VkglTestCase_019233_2);

#define VkglTestCase_019234_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019234_2 "coverage.log.shader_function.bit_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019234, VkglTestCase_019234_1, VkglTestCase_019234_2);

#define VkglTestCase_019235_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019235_2 "_coverage.log.shader_function.find_msb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019235, VkglTestCase_019235_1, VkglTestCase_019235_2);

#define VkglTestCase_019236_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019236_2 "_coverage.log.shader_function.find_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019236, VkglTestCase_019236_1, VkglTestCase_019236_2);

#define VkglTestCase_019237_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019237_2 "age.log.shader_function.uadd_carry_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019237, VkglTestCase_019237_1, VkglTestCase_019237_2);

#define VkglTestCase_019238_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019238_2 "age.log.shader_function.uadd_carry_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019238, VkglTestCase_019238_1, VkglTestCase_019238_2);

#define VkglTestCase_019239_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019239_2 "e.log.shader_function.uadd_carry_invalid_carry"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019239, VkglTestCase_019239_1, VkglTestCase_019239_2);

#define VkglTestCase_019240_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019240_2 "ge.log.shader_function.usub_borrow_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019240, VkglTestCase_019240_1, VkglTestCase_019240_2);

#define VkglTestCase_019241_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019241_2 "ge.log.shader_function.usub_borrow_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019241, VkglTestCase_019241_1, VkglTestCase_019241_2);

#define VkglTestCase_019242_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019242_2 ".log.shader_function.usub_borrow_invalid_borrow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019242, VkglTestCase_019242_1, VkglTestCase_019242_2);

#define VkglTestCase_019243_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019243_2 "e.log.shader_function.umul_extended_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019243, VkglTestCase_019243_1, VkglTestCase_019243_2);

#define VkglTestCase_019244_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019244_2 "e.log.shader_function.umul_extended_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019244, VkglTestCase_019244_1, VkglTestCase_019244_2);

#define VkglTestCase_019245_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019245_2 ".log.shader_function.umul_extended_invalid_msb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019245, VkglTestCase_019245_1, VkglTestCase_019245_2);

#define VkglTestCase_019246_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019246_2 ".log.shader_function.umul_extended_invalid_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019246, VkglTestCase_019246_1, VkglTestCase_019246_2);

#define VkglTestCase_019247_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019247_2 "e.log.shader_function.imul_extended_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019247, VkglTestCase_019247_1, VkglTestCase_019247_2);

#define VkglTestCase_019248_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019248_2 "e.log.shader_function.imul_extended_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019248, VkglTestCase_019248_1, VkglTestCase_019248_2);

#define VkglTestCase_019249_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019249_2 ".log.shader_function.imul_extended_invalid_msb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019249, VkglTestCase_019249_1, VkglTestCase_019249_2);

#define VkglTestCase_019250_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019250_2 ".log.shader_function.imul_extended_invalid_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019250, VkglTestCase_019250_1, VkglTestCase_019250_2);

#define VkglTestCase_019251_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019251_2 "erage.log.shader_function.frexp_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019251, VkglTestCase_019251_1, VkglTestCase_019251_2);

#define VkglTestCase_019252_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019252_2 "rage.log.shader_function.frexp_invalid_exp"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019252, VkglTestCase_019252_1, VkglTestCase_019252_2);

#define VkglTestCase_019253_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019253_2 "erage.log.shader_function.ldexp_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019253, VkglTestCase_019253_1, VkglTestCase_019253_2);

#define VkglTestCase_019254_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019254_2 "rage.log.shader_function.ldexp_invalid_exp"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019254, VkglTestCase_019254_1, VkglTestCase_019254_2);

#define VkglTestCase_019255_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019255_2 "verage.log.shader_function.pack_unorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019255, VkglTestCase_019255_1, VkglTestCase_019255_2);

#define VkglTestCase_019256_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019256_2 "verage.log.shader_function.pack_snorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019256, VkglTestCase_019256_1, VkglTestCase_019256_2);

#define VkglTestCase_019257_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019257_2 "erage.log.shader_function.unpack_snorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019257, VkglTestCase_019257_1, VkglTestCase_019257_2);

#define VkglTestCase_019258_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019258_2 "erage.log.shader_function.unpack_unorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019258, VkglTestCase_019258_1, VkglTestCase_019258_2);

#define VkglTestCase_019259_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019259_2 "log.shader_function.texture_size_invalid_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019259, VkglTestCase_019259_1, VkglTestCase_019259_2);

#define VkglTestCase_019260_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019260_2 "e.log.shader_function.texture_size_invalid_lod"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019260, VkglTestCase_019260_1, VkglTestCase_019260_2);

#define VkglTestCase_019261_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019261_2 "rage.log.shader_function.texture_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019261, VkglTestCase_019261_1, VkglTestCase_019261_2);

#define VkglTestCase_019262_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_019262_2 "g.shader_function.texture_invalid_bias_or_compare"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019262, VkglTestCase_019262_1, VkglTestCase_019262_2);

#define VkglTestCase_019263_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019263_2 "ge.log.shader_function.texture_lod_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019263, VkglTestCase_019263_1, VkglTestCase_019263_2);

#define VkglTestCase_019264_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019264_2 "e.log.shader_function.texture_lod_invalid_lod"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019264, VkglTestCase_019264_1, VkglTestCase_019264_2);

#define VkglTestCase_019265_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019265_2 "ge.log.shader_function.texel_fetch_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019265, VkglTestCase_019265_1, VkglTestCase_019265_2);

#define VkglTestCase_019266_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019266_2 ".log.shader_function.texel_fetch_invalid_sample"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019266, VkglTestCase_019266_1, VkglTestCase_019266_2);

#define VkglTestCase_019267_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019267_2 "overage.log.shader_function.emit_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019267, VkglTestCase_019267_1, VkglTestCase_019267_2);

#define VkglTestCase_019268_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019268_2 "verage.log.shader_function.end_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019268, VkglTestCase_019268_1, VkglTestCase_019268_2);

#define VkglTestCase_019269_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019269_2 "overage.log.shader_function.texture_grad"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019269, VkglTestCase_019269_1, VkglTestCase_019269_2);

#define VkglTestCase_019270_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019270_2 ".log.shader_function.texture_gather_sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019270, VkglTestCase_019270_1, VkglTestCase_019270_2);

#define VkglTestCase_019271_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_019271_2 "g.shader_function.texture_gather_sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019271, VkglTestCase_019271_1, VkglTestCase_019271_2);

#define VkglTestCase_019272_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019272_2 "log.shader_function.texture_gather_sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019272, VkglTestCase_019272_1, VkglTestCase_019272_2);

#define VkglTestCase_019273_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_019273_2 "g.shader_function.texture_gather_sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019273, VkglTestCase_019273_1, VkglTestCase_019273_2);

#define VkglTestCase_019274_1 "dEQP-GLES31.functional.debug.negative_coverage.log.s"
#define VkglTestCase_019274_2 "hader_function.texture_gather_sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019274, VkglTestCase_019274_1, VkglTestCase_019274_2);

#define VkglTestCase_019275_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_019275_2 ".shader_function.texture_gather_sampler_cube_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019275, VkglTestCase_019275_1, VkglTestCase_019275_2);

#define VkglTestCase_019276_1 "dEQP-GLES31.functional.debug.negative_coverage.log"
#define VkglTestCase_019276_2 ".shader_function.texture_gather_sampler_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019276, VkglTestCase_019276_1, VkglTestCase_019276_2);

#define VkglTestCase_019277_1 "dEQP-GLES31.functional.debug.negative_coverage.log.sh"
#define VkglTestCase_019277_2 "ader_function.texture_gather_sampler_cube_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019277, VkglTestCase_019277_1, VkglTestCase_019277_2);

#define VkglTestCase_019278_1 "dEQP-GLES31.functional.debug.negative_coverage.lo"
#define VkglTestCase_019278_2 "g.shader_function.texture_gather_offset_sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019278, VkglTestCase_019278_1, VkglTestCase_019278_2);

#define VkglTestCase_019279_1 "dEQP-GLES31.functional.debug.negative_coverage.log.s"
#define VkglTestCase_019279_2 "hader_function.texture_gather_offset_sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019279, VkglTestCase_019279_1, VkglTestCase_019279_2);

#define VkglTestCase_019280_1 "dEQP-GLES31.functional.debug.negative_coverage.log.sh"
#define VkglTestCase_019280_2 "ader_function.texture_gather_offset_sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019280, VkglTestCase_019280_1, VkglTestCase_019280_2);

#define VkglTestCase_019281_1 "dEQP-GLES31.functional.debug.negative_coverage.log.shade"
#define VkglTestCase_019281_2 "r_function.texture_gather_offset_sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019281, VkglTestCase_019281_1, VkglTestCase_019281_2);

#define VkglTestCase_019282_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019282_2 "ge.log.shader_function.texture_gather_offsets"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019282, VkglTestCase_019282_1, VkglTestCase_019282_2);

#define VkglTestCase_019283_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019283_2 "coverage.log.shader_function.atomic_add"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019283, VkglTestCase_019283_1, VkglTestCase_019283_2);

#define VkglTestCase_019284_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019284_2 "coverage.log.shader_function.atomic_min"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019284, VkglTestCase_019284_1, VkglTestCase_019284_2);

#define VkglTestCase_019285_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019285_2 "coverage.log.shader_function.atomic_max"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019285, VkglTestCase_019285_1, VkglTestCase_019285_2);

#define VkglTestCase_019286_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019286_2 "coverage.log.shader_function.atomic_and"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019286, VkglTestCase_019286_1, VkglTestCase_019286_2);

#define VkglTestCase_019287_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019287_2 "coverage.log.shader_function.atomic_or"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019287, VkglTestCase_019287_1, VkglTestCase_019287_2);

#define VkglTestCase_019288_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019288_2 "coverage.log.shader_function.atomic_xor"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019288, VkglTestCase_019288_1, VkglTestCase_019288_2);

#define VkglTestCase_019289_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019289_2 "erage.log.shader_function.atomic_exchange"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019289, VkglTestCase_019289_1, VkglTestCase_019289_2);

#define VkglTestCase_019290_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019290_2 "erage.log.shader_function.atomic_comp_swap"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019290, VkglTestCase_019290_1, VkglTestCase_019290_2);

#define VkglTestCase_019291_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019291_2 "e.log.shader_function.interpolate_at_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019291, VkglTestCase_019291_1, VkglTestCase_019291_2);

#define VkglTestCase_019292_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019292_2 "ge.log.shader_function.interpolate_at_sample"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019292, VkglTestCase_019292_1, VkglTestCase_019292_2);

#define VkglTestCase_019293_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019293_2 "ge.log.shader_function.interpolate_at_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019293, VkglTestCase_019293_1, VkglTestCase_019293_2);

#define VkglTestCase_019294_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_019294_2 "ve_coverage.log.shader_function.fma"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019294, VkglTestCase_019294_1, VkglTestCase_019294_2);
