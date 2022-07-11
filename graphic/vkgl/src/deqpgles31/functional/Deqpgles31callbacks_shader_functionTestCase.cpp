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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018728_1 "dEQP-GLES31.functional.debug.negative_coverage.callbac"
#define VkglTestCase_018728_2 "ks.shader_function.bitfield_extract_invalid_value_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018728, VkglTestCase_018728_1, VkglTestCase_018728_2);

#define VkglTestCase_018729_1 "dEQP-GLES31.functional.debug.negative_coverage.callbac"
#define VkglTestCase_018729_2 "ks.shader_function.bitfield_extract_invalid_offset_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018729, VkglTestCase_018729_1, VkglTestCase_018729_2);

#define VkglTestCase_018730_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018730_2 "cks.shader_function.bitfield_extract_invalid_bits_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018730, VkglTestCase_018730_1, VkglTestCase_018730_2);

#define VkglTestCase_018731_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018731_2 "cks.shader_function.bitfield_insert_invalid_base_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018731, VkglTestCase_018731_1, VkglTestCase_018731_2);

#define VkglTestCase_018732_1 "dEQP-GLES31.functional.debug.negative_coverage.callbac"
#define VkglTestCase_018732_2 "ks.shader_function.bitfield_insert_invalid_insert_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018732, VkglTestCase_018732_1, VkglTestCase_018732_2);

#define VkglTestCase_018733_1 "dEQP-GLES31.functional.debug.negative_coverage.callbac"
#define VkglTestCase_018733_2 "ks.shader_function.bitfield_insert_invalid_offset_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018733, VkglTestCase_018733_1, VkglTestCase_018733_2);

#define VkglTestCase_018734_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018734_2 "cks.shader_function.bitfield_insert_invalid_bits_type"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018734, VkglTestCase_018734_1, VkglTestCase_018734_2);

#define VkglTestCase_018735_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018735_2 "ge.callbacks.shader_function.bitfield_reverse"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018735, VkglTestCase_018735_1, VkglTestCase_018735_2);

#define VkglTestCase_018736_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018736_2 "erage.callbacks.shader_function.bit_count"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018736, VkglTestCase_018736_1, VkglTestCase_018736_2);

#define VkglTestCase_018737_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018737_2 "verage.callbacks.shader_function.find_msb"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018737, VkglTestCase_018737_1, VkglTestCase_018737_2);

#define VkglTestCase_018738_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018738_2 "verage.callbacks.shader_function.find_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018738, VkglTestCase_018738_1, VkglTestCase_018738_2);

#define VkglTestCase_018739_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018739_2 ".callbacks.shader_function.uadd_carry_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018739, VkglTestCase_018739_1, VkglTestCase_018739_2);

#define VkglTestCase_018740_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018740_2 ".callbacks.shader_function.uadd_carry_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018740, VkglTestCase_018740_1, VkglTestCase_018740_2);

#define VkglTestCase_018741_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018741_2 "allbacks.shader_function.uadd_carry_invalid_carry"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018741, VkglTestCase_018741_1, VkglTestCase_018741_2);

#define VkglTestCase_018742_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018742_2 "callbacks.shader_function.usub_borrow_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018742, VkglTestCase_018742_1, VkglTestCase_018742_2);

#define VkglTestCase_018743_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018743_2 "callbacks.shader_function.usub_borrow_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018743, VkglTestCase_018743_1, VkglTestCase_018743_2);

#define VkglTestCase_018744_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018744_2 "llbacks.shader_function.usub_borrow_invalid_borrow"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018744, VkglTestCase_018744_1, VkglTestCase_018744_2);

#define VkglTestCase_018745_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018745_2 "allbacks.shader_function.umul_extended_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018745, VkglTestCase_018745_1, VkglTestCase_018745_2);

#define VkglTestCase_018746_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018746_2 "allbacks.shader_function.umul_extended_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018746, VkglTestCase_018746_1, VkglTestCase_018746_2);

#define VkglTestCase_018747_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018747_2 "llbacks.shader_function.umul_extended_invalid_msb"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018747, VkglTestCase_018747_1, VkglTestCase_018747_2);

#define VkglTestCase_018748_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018748_2 "llbacks.shader_function.umul_extended_invalid_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018748, VkglTestCase_018748_1, VkglTestCase_018748_2);

#define VkglTestCase_018749_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018749_2 "allbacks.shader_function.imul_extended_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018749, VkglTestCase_018749_1, VkglTestCase_018749_2);

#define VkglTestCase_018750_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018750_2 "allbacks.shader_function.imul_extended_invalid_y"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018750, VkglTestCase_018750_1, VkglTestCase_018750_2);

#define VkglTestCase_018751_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018751_2 "llbacks.shader_function.imul_extended_invalid_msb"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018751, VkglTestCase_018751_1, VkglTestCase_018751_2);

#define VkglTestCase_018752_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018752_2 "llbacks.shader_function.imul_extended_invalid_lsb"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018752, VkglTestCase_018752_1, VkglTestCase_018752_2);

#define VkglTestCase_018753_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018753_2 "ge.callbacks.shader_function.frexp_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018753, VkglTestCase_018753_1, VkglTestCase_018753_2);

#define VkglTestCase_018754_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018754_2 "e.callbacks.shader_function.frexp_invalid_exp"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018754, VkglTestCase_018754_1, VkglTestCase_018754_2);

#define VkglTestCase_018755_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018755_2 "ge.callbacks.shader_function.ldexp_invalid_x"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018755, VkglTestCase_018755_1, VkglTestCase_018755_2);

#define VkglTestCase_018756_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018756_2 "e.callbacks.shader_function.ldexp_invalid_exp"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018756, VkglTestCase_018756_1, VkglTestCase_018756_2);

#define VkglTestCase_018757_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018757_2 "age.callbacks.shader_function.pack_unorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018757, VkglTestCase_018757_1, VkglTestCase_018757_2);

#define VkglTestCase_018758_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018758_2 "age.callbacks.shader_function.pack_snorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018758, VkglTestCase_018758_1, VkglTestCase_018758_2);

#define VkglTestCase_018759_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018759_2 "ge.callbacks.shader_function.unpack_snorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018759, VkglTestCase_018759_1, VkglTestCase_018759_2);

#define VkglTestCase_018760_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018760_2 "ge.callbacks.shader_function.unpack_unorm_4x8"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018760, VkglTestCase_018760_1, VkglTestCase_018760_2);

#define VkglTestCase_018761_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018761_2 "lbacks.shader_function.texture_size_invalid_sampler"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018761, VkglTestCase_018761_1, VkglTestCase_018761_2);

#define VkglTestCase_018762_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018762_2 "allbacks.shader_function.texture_size_invalid_lod"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018762, VkglTestCase_018762_1, VkglTestCase_018762_2);

#define VkglTestCase_018763_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018763_2 "e.callbacks.shader_function.texture_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018763, VkglTestCase_018763_1, VkglTestCase_018763_2);

#define VkglTestCase_018764_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018764_2 "acks.shader_function.texture_invalid_bias_or_compare"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018764, VkglTestCase_018764_1, VkglTestCase_018764_2);

#define VkglTestCase_018765_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018765_2 "callbacks.shader_function.texture_lod_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018765, VkglTestCase_018765_1, VkglTestCase_018765_2);

#define VkglTestCase_018766_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018766_2 "allbacks.shader_function.texture_lod_invalid_lod"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018766, VkglTestCase_018766_1, VkglTestCase_018766_2);

#define VkglTestCase_018767_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018767_2 "callbacks.shader_function.texel_fetch_invalid_p"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018767, VkglTestCase_018767_1, VkglTestCase_018767_2);

#define VkglTestCase_018768_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018768_2 "llbacks.shader_function.texel_fetch_invalid_sample"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018768, VkglTestCase_018768_1, VkglTestCase_018768_2);

#define VkglTestCase_018769_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018769_2 "rage.callbacks.shader_function.emit_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018769, VkglTestCase_018769_1, VkglTestCase_018769_2);

#define VkglTestCase_018770_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018770_2 "age.callbacks.shader_function.end_primitive"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018770, VkglTestCase_018770_1, VkglTestCase_018770_2);

#define VkglTestCase_018771_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018771_2 "rage.callbacks.shader_function.texture_grad"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018771, VkglTestCase_018771_1, VkglTestCase_018771_2);

#define VkglTestCase_018772_1 "dEQP-GLES31.functional.debug.negative_coverage.ca"
#define VkglTestCase_018772_2 "llbacks.shader_function.texture_gather_sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018772, VkglTestCase_018772_1, VkglTestCase_018772_2);

#define VkglTestCase_018773_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018773_2 "acks.shader_function.texture_gather_sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018773, VkglTestCase_018773_1, VkglTestCase_018773_2);

#define VkglTestCase_018774_1 "dEQP-GLES31.functional.debug.negative_coverage.cal"
#define VkglTestCase_018774_2 "lbacks.shader_function.texture_gather_sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018774, VkglTestCase_018774_1, VkglTestCase_018774_2);

#define VkglTestCase_018775_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018775_2 "acks.shader_function.texture_gather_sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018775, VkglTestCase_018775_1, VkglTestCase_018775_2);

#define VkglTestCase_018776_1 "dEQP-GLES31.functional.debug.negative_coverage.callback"
#define VkglTestCase_018776_2 "s.shader_function.texture_gather_sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018776, VkglTestCase_018776_1, VkglTestCase_018776_2);

#define VkglTestCase_018777_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018777_2 "cks.shader_function.texture_gather_sampler_cube_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018777, VkglTestCase_018777_1, VkglTestCase_018777_2);

#define VkglTestCase_018778_1 "dEQP-GLES31.functional.debug.negative_coverage.callba"
#define VkglTestCase_018778_2 "cks.shader_function.texture_gather_sampler_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018778, VkglTestCase_018778_1, VkglTestCase_018778_2);

#define VkglTestCase_018779_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks"
#define VkglTestCase_018779_2 ".shader_function.texture_gather_sampler_cube_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018779, VkglTestCase_018779_1, VkglTestCase_018779_2);

#define VkglTestCase_018780_1 "dEQP-GLES31.functional.debug.negative_coverage.callb"
#define VkglTestCase_018780_2 "acks.shader_function.texture_gather_offset_sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018780, VkglTestCase_018780_1, VkglTestCase_018780_2);

#define VkglTestCase_018781_1 "dEQP-GLES31.functional.debug.negative_coverage.callback"
#define VkglTestCase_018781_2 "s.shader_function.texture_gather_offset_sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018781, VkglTestCase_018781_1, VkglTestCase_018781_2);

#define VkglTestCase_018782_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks"
#define VkglTestCase_018782_2 ".shader_function.texture_gather_offset_sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018782, VkglTestCase_018782_1, VkglTestCase_018782_2);

#define VkglTestCase_018783_1 "dEQP-GLES31.functional.debug.negative_coverage.callbacks.sh"
#define VkglTestCase_018783_2 "ader_function.texture_gather_offset_sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018783, VkglTestCase_018783_1, VkglTestCase_018783_2);

#define VkglTestCase_018784_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018784_2 "callbacks.shader_function.texture_gather_offsets"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018784, VkglTestCase_018784_1, VkglTestCase_018784_2);

#define VkglTestCase_018785_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018785_2 "erage.callbacks.shader_function.atomic_add"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018785, VkglTestCase_018785_1, VkglTestCase_018785_2);

#define VkglTestCase_018786_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018786_2 "erage.callbacks.shader_function.atomic_min"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018786, VkglTestCase_018786_1, VkglTestCase_018786_2);

#define VkglTestCase_018787_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018787_2 "erage.callbacks.shader_function.atomic_max"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018787, VkglTestCase_018787_1, VkglTestCase_018787_2);

#define VkglTestCase_018788_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018788_2 "erage.callbacks.shader_function.atomic_and"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018788, VkglTestCase_018788_1, VkglTestCase_018788_2);

#define VkglTestCase_018789_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018789_2 "erage.callbacks.shader_function.atomic_or"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018789, VkglTestCase_018789_1, VkglTestCase_018789_2);

#define VkglTestCase_018790_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018790_2 "erage.callbacks.shader_function.atomic_xor"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018790, VkglTestCase_018790_1, VkglTestCase_018790_2);

#define VkglTestCase_018791_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018791_2 "ge.callbacks.shader_function.atomic_exchange"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018791, VkglTestCase_018791_1, VkglTestCase_018791_2);

#define VkglTestCase_018792_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018792_2 "ge.callbacks.shader_function.atomic_comp_swap"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018792, VkglTestCase_018792_1, VkglTestCase_018792_2);

#define VkglTestCase_018793_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018793_2 "allbacks.shader_function.interpolate_at_centroid"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018793, VkglTestCase_018793_1, VkglTestCase_018793_2);

#define VkglTestCase_018794_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018794_2 "callbacks.shader_function.interpolate_at_sample"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018794, VkglTestCase_018794_1, VkglTestCase_018794_2);

#define VkglTestCase_018795_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018795_2 "callbacks.shader_function.interpolate_at_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018795, VkglTestCase_018795_1, VkglTestCase_018795_2);

#define VkglTestCase_018796_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018796_2 "coverage.callbacks.shader_function.fma"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018796, VkglTestCase_018796_1, VkglTestCase_018796_2);
