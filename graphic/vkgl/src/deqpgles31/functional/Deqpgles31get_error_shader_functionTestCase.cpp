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

#define VkglTestCase_019722_1 "dEQP-GLES31.functional.debug.negative_coverage.get_err"
#define VkglTestCase_019722_2 "or.shader_function.bitfield_extract_invalid_value_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019722, VkglTestCase_019722_1, VkglTestCase_019722_2);

#define VkglTestCase_019723_1 "dEQP-GLES31.functional.debug.negative_coverage.get_err"
#define VkglTestCase_019723_2 "or.shader_function.bitfield_extract_invalid_offset_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019723, VkglTestCase_019723_1, VkglTestCase_019723_2);

#define VkglTestCase_019724_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019724_2 "ror.shader_function.bitfield_extract_invalid_bits_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019724, VkglTestCase_019724_1, VkglTestCase_019724_2);

#define VkglTestCase_019725_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019725_2 "ror.shader_function.bitfield_insert_invalid_base_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019725, VkglTestCase_019725_1, VkglTestCase_019725_2);

#define VkglTestCase_019726_1 "dEQP-GLES31.functional.debug.negative_coverage.get_err"
#define VkglTestCase_019726_2 "or.shader_function.bitfield_insert_invalid_insert_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019726, VkglTestCase_019726_1, VkglTestCase_019726_2);

#define VkglTestCase_019727_1 "dEQP-GLES31.functional.debug.negative_coverage.get_err"
#define VkglTestCase_019727_2 "or.shader_function.bitfield_insert_invalid_offset_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019727, VkglTestCase_019727_1, VkglTestCase_019727_2);

#define VkglTestCase_019728_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019728_2 "ror.shader_function.bitfield_insert_invalid_bits_type"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019728, VkglTestCase_019728_1, VkglTestCase_019728_2);

#define VkglTestCase_019729_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019729_2 "ge.get_error.shader_function.bitfield_reverse"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019729, VkglTestCase_019729_1, VkglTestCase_019729_2);

#define VkglTestCase_019730_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019730_2 "erage.get_error.shader_function.bit_count"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019730, VkglTestCase_019730_1, VkglTestCase_019730_2);

#define VkglTestCase_019731_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019731_2 "verage.get_error.shader_function.find_msb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019731, VkglTestCase_019731_1, VkglTestCase_019731_2);

#define VkglTestCase_019732_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019732_2 "verage.get_error.shader_function.find_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019732, VkglTestCase_019732_1, VkglTestCase_019732_2);

#define VkglTestCase_019733_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019733_2 ".get_error.shader_function.uadd_carry_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019733, VkglTestCase_019733_1, VkglTestCase_019733_2);

#define VkglTestCase_019734_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019734_2 ".get_error.shader_function.uadd_carry_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019734, VkglTestCase_019734_1, VkglTestCase_019734_2);

#define VkglTestCase_019735_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019735_2 "et_error.shader_function.uadd_carry_invalid_carry"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019735, VkglTestCase_019735_1, VkglTestCase_019735_2);

#define VkglTestCase_019736_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019736_2 "get_error.shader_function.usub_borrow_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019736, VkglTestCase_019736_1, VkglTestCase_019736_2);

#define VkglTestCase_019737_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019737_2 "get_error.shader_function.usub_borrow_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019737, VkglTestCase_019737_1, VkglTestCase_019737_2);

#define VkglTestCase_019738_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019738_2 "t_error.shader_function.usub_borrow_invalid_borrow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019738, VkglTestCase_019738_1, VkglTestCase_019738_2);

#define VkglTestCase_019739_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019739_2 "et_error.shader_function.umul_extended_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019739, VkglTestCase_019739_1, VkglTestCase_019739_2);

#define VkglTestCase_019740_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019740_2 "et_error.shader_function.umul_extended_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019740, VkglTestCase_019740_1, VkglTestCase_019740_2);

#define VkglTestCase_019741_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019741_2 "t_error.shader_function.umul_extended_invalid_msb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019741, VkglTestCase_019741_1, VkglTestCase_019741_2);

#define VkglTestCase_019742_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019742_2 "t_error.shader_function.umul_extended_invalid_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019742, VkglTestCase_019742_1, VkglTestCase_019742_2);

#define VkglTestCase_019743_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019743_2 "et_error.shader_function.imul_extended_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019743, VkglTestCase_019743_1, VkglTestCase_019743_2);

#define VkglTestCase_019744_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019744_2 "et_error.shader_function.imul_extended_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019744, VkglTestCase_019744_1, VkglTestCase_019744_2);

#define VkglTestCase_019745_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019745_2 "t_error.shader_function.imul_extended_invalid_msb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019745, VkglTestCase_019745_1, VkglTestCase_019745_2);

#define VkglTestCase_019746_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019746_2 "t_error.shader_function.imul_extended_invalid_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019746, VkglTestCase_019746_1, VkglTestCase_019746_2);

#define VkglTestCase_019747_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019747_2 "ge.get_error.shader_function.frexp_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019747, VkglTestCase_019747_1, VkglTestCase_019747_2);

#define VkglTestCase_019748_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019748_2 "e.get_error.shader_function.frexp_invalid_exp"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019748, VkglTestCase_019748_1, VkglTestCase_019748_2);

#define VkglTestCase_019749_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019749_2 "ge.get_error.shader_function.ldexp_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019749, VkglTestCase_019749_1, VkglTestCase_019749_2);

#define VkglTestCase_019750_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019750_2 "e.get_error.shader_function.ldexp_invalid_exp"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019750, VkglTestCase_019750_1, VkglTestCase_019750_2);

#define VkglTestCase_019751_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019751_2 "age.get_error.shader_function.pack_unorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019751, VkglTestCase_019751_1, VkglTestCase_019751_2);

#define VkglTestCase_019752_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019752_2 "age.get_error.shader_function.pack_snorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019752, VkglTestCase_019752_1, VkglTestCase_019752_2);

#define VkglTestCase_019753_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019753_2 "ge.get_error.shader_function.unpack_snorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019753, VkglTestCase_019753_1, VkglTestCase_019753_2);

#define VkglTestCase_019754_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019754_2 "ge.get_error.shader_function.unpack_unorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019754, VkglTestCase_019754_1, VkglTestCase_019754_2);

#define VkglTestCase_019755_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019755_2 "_error.shader_function.texture_size_invalid_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019755, VkglTestCase_019755_1, VkglTestCase_019755_2);

#define VkglTestCase_019756_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019756_2 "et_error.shader_function.texture_size_invalid_lod"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019756, VkglTestCase_019756_1, VkglTestCase_019756_2);

#define VkglTestCase_019757_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019757_2 "e.get_error.shader_function.texture_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019757, VkglTestCase_019757_1, VkglTestCase_019757_2);

#define VkglTestCase_019758_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019758_2 "rror.shader_function.texture_invalid_bias_or_compare"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019758, VkglTestCase_019758_1, VkglTestCase_019758_2);

#define VkglTestCase_019759_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019759_2 "get_error.shader_function.texture_lod_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019759, VkglTestCase_019759_1, VkglTestCase_019759_2);

#define VkglTestCase_019760_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019760_2 "et_error.shader_function.texture_lod_invalid_lod"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019760, VkglTestCase_019760_1, VkglTestCase_019760_2);

#define VkglTestCase_019761_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019761_2 "get_error.shader_function.texel_fetch_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019761, VkglTestCase_019761_1, VkglTestCase_019761_2);

#define VkglTestCase_019762_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019762_2 "t_error.shader_function.texel_fetch_invalid_sample"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019762, VkglTestCase_019762_1, VkglTestCase_019762_2);

#define VkglTestCase_019763_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019763_2 "rage.get_error.shader_function.emit_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019763, VkglTestCase_019763_1, VkglTestCase_019763_2);

#define VkglTestCase_019764_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019764_2 "age.get_error.shader_function.end_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019764, VkglTestCase_019764_1, VkglTestCase_019764_2);

#define VkglTestCase_019765_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019765_2 "rage.get_error.shader_function.texture_grad"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019765, VkglTestCase_019765_1, VkglTestCase_019765_2);

#define VkglTestCase_019766_1 "dEQP-GLES31.functional.debug.negative_coverage.ge"
#define VkglTestCase_019766_2 "t_error.shader_function.texture_gather_sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019766, VkglTestCase_019766_1, VkglTestCase_019766_2);

#define VkglTestCase_019767_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019767_2 "rror.shader_function.texture_gather_sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019767, VkglTestCase_019767_1, VkglTestCase_019767_2);

#define VkglTestCase_019768_1 "dEQP-GLES31.functional.debug.negative_coverage.get"
#define VkglTestCase_019768_2 "_error.shader_function.texture_gather_sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019768, VkglTestCase_019768_1, VkglTestCase_019768_2);

#define VkglTestCase_019769_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019769_2 "rror.shader_function.texture_gather_sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019769, VkglTestCase_019769_1, VkglTestCase_019769_2);

#define VkglTestCase_019770_1 "dEQP-GLES31.functional.debug.negative_coverage.get_erro"
#define VkglTestCase_019770_2 "r.shader_function.texture_gather_sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019770, VkglTestCase_019770_1, VkglTestCase_019770_2);

#define VkglTestCase_019771_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019771_2 "ror.shader_function.texture_gather_sampler_cube_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019771, VkglTestCase_019771_1, VkglTestCase_019771_2);

#define VkglTestCase_019772_1 "dEQP-GLES31.functional.debug.negative_coverage.get_er"
#define VkglTestCase_019772_2 "ror.shader_function.texture_gather_sampler_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019772, VkglTestCase_019772_1, VkglTestCase_019772_2);

#define VkglTestCase_019773_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error"
#define VkglTestCase_019773_2 ".shader_function.texture_gather_sampler_cube_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019773, VkglTestCase_019773_1, VkglTestCase_019773_2);

#define VkglTestCase_019774_1 "dEQP-GLES31.functional.debug.negative_coverage.get_e"
#define VkglTestCase_019774_2 "rror.shader_function.texture_gather_offset_sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019774, VkglTestCase_019774_1, VkglTestCase_019774_2);

#define VkglTestCase_019775_1 "dEQP-GLES31.functional.debug.negative_coverage.get_erro"
#define VkglTestCase_019775_2 "r.shader_function.texture_gather_offset_sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019775, VkglTestCase_019775_1, VkglTestCase_019775_2);

#define VkglTestCase_019776_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error"
#define VkglTestCase_019776_2 ".shader_function.texture_gather_offset_sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019776, VkglTestCase_019776_1, VkglTestCase_019776_2);

#define VkglTestCase_019777_1 "dEQP-GLES31.functional.debug.negative_coverage.get_error.sh"
#define VkglTestCase_019777_2 "ader_function.texture_gather_offset_sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019777, VkglTestCase_019777_1, VkglTestCase_019777_2);

#define VkglTestCase_019778_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019778_2 "get_error.shader_function.texture_gather_offsets"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019778, VkglTestCase_019778_1, VkglTestCase_019778_2);

#define VkglTestCase_019779_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019779_2 "erage.get_error.shader_function.atomic_add"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019779, VkglTestCase_019779_1, VkglTestCase_019779_2);

#define VkglTestCase_019780_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019780_2 "erage.get_error.shader_function.atomic_min"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019780, VkglTestCase_019780_1, VkglTestCase_019780_2);

#define VkglTestCase_019781_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019781_2 "erage.get_error.shader_function.atomic_max"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019781, VkglTestCase_019781_1, VkglTestCase_019781_2);

#define VkglTestCase_019782_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019782_2 "erage.get_error.shader_function.atomic_and"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019782, VkglTestCase_019782_1, VkglTestCase_019782_2);

#define VkglTestCase_019783_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019783_2 "erage.get_error.shader_function.atomic_or"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019783, VkglTestCase_019783_1, VkglTestCase_019783_2);

#define VkglTestCase_019784_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019784_2 "erage.get_error.shader_function.atomic_xor"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019784, VkglTestCase_019784_1, VkglTestCase_019784_2);

#define VkglTestCase_019785_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019785_2 "ge.get_error.shader_function.atomic_exchange"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019785, VkglTestCase_019785_1, VkglTestCase_019785_2);

#define VkglTestCase_019786_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019786_2 "ge.get_error.shader_function.atomic_comp_swap"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019786, VkglTestCase_019786_1, VkglTestCase_019786_2);

#define VkglTestCase_019787_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019787_2 "et_error.shader_function.interpolate_at_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019787, VkglTestCase_019787_1, VkglTestCase_019787_2);

#define VkglTestCase_019788_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019788_2 "get_error.shader_function.interpolate_at_sample"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019788, VkglTestCase_019788_1, VkglTestCase_019788_2);

#define VkglTestCase_019789_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019789_2 "get_error.shader_function.interpolate_at_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019789, VkglTestCase_019789_1, VkglTestCase_019789_2);

#define VkglTestCase_019790_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019790_2 "coverage.get_error.shader_function.fma"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019790, VkglTestCase_019790_1, VkglTestCase_019790_2);
