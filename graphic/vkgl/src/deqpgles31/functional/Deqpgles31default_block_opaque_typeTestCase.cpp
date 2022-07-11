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

#define VkglTestCase_020416_1 "dEQP-GLES31.functional.program_interface_query.uniform.atom"
#define VkglTestCase_020416_2 "ic_counter_buffer_index.default_block.opaque_type.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020416, VkglTestCase_020416_1, VkglTestCase_020416_2);

#define VkglTestCase_020417_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomi"
#define VkglTestCase_020417_2 "c_counter_buffer_index.default_block.opaque_type.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020417, VkglTestCase_020417_1, VkglTestCase_020417_2);

#define VkglTestCase_020418_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic_"
#define VkglTestCase_020418_2 "counter_buffer_index.default_block.opaque_type.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020418, VkglTestCase_020418_1, VkglTestCase_020418_2);

#define VkglTestCase_020419_1 "dEQP-GLES31.functional.program_interface_query.uniform.atom"
#define VkglTestCase_020419_2 "ic_counter_buffer_index.default_block.opaque_type.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020419, VkglTestCase_020419_1, VkglTestCase_020419_2);

#define VkglTestCase_020420_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic_c"
#define VkglTestCase_020420_2 "ounter_buffer_index.default_block.opaque_type.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020420, VkglTestCase_020420_1, VkglTestCase_020420_2);

#define VkglTestCase_020421_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic_co"
#define VkglTestCase_020421_2 "unter_buffer_index.default_block.opaque_type.sampler_cube_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020421, VkglTestCase_020421_1, VkglTestCase_020421_2);

#define VkglTestCase_020422_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic_coun"
#define VkglTestCase_020422_2 "ter_buffer_index.default_block.opaque_type.sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020422, VkglTestCase_020422_1, VkglTestCase_020422_2);

#define VkglTestCase_020423_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomi"
#define VkglTestCase_020423_2 "c_counter_buffer_index.default_block.opaque_type.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020423, VkglTestCase_020423_1, VkglTestCase_020423_2);

#define VkglTestCase_020424_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic"
#define VkglTestCase_020424_2 "_counter_buffer_index.default_block.opaque_type.isampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020424, VkglTestCase_020424_1, VkglTestCase_020424_2);

#define VkglTestCase_020425_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic_c"
#define VkglTestCase_020425_2 "ounter_buffer_index.default_block.opaque_type.isampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020425, VkglTestCase_020425_1, VkglTestCase_020425_2);

#define VkglTestCase_020426_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomi"
#define VkglTestCase_020426_2 "c_counter_buffer_index.default_block.opaque_type.isampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020426, VkglTestCase_020426_1, VkglTestCase_020426_2);

#define VkglTestCase_020427_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomi"
#define VkglTestCase_020427_2 "c_counter_buffer_index.default_block.opaque_type.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020427, VkglTestCase_020427_1, VkglTestCase_020427_2);

#define VkglTestCase_020428_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic"
#define VkglTestCase_020428_2 "_counter_buffer_index.default_block.opaque_type.usampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020428, VkglTestCase_020428_1, VkglTestCase_020428_2);

#define VkglTestCase_020429_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic_c"
#define VkglTestCase_020429_2 "ounter_buffer_index.default_block.opaque_type.usampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020429, VkglTestCase_020429_1, VkglTestCase_020429_2);

#define VkglTestCase_020430_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomi"
#define VkglTestCase_020430_2 "c_counter_buffer_index.default_block.opaque_type.usampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020430, VkglTestCase_020430_1, VkglTestCase_020430_2);

#define VkglTestCase_020431_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic"
#define VkglTestCase_020431_2 "_counter_buffer_index.default_block.opaque_type.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020431, VkglTestCase_020431_1, VkglTestCase_020431_2);

#define VkglTestCase_020432_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic"
#define VkglTestCase_020432_2 "_counter_buffer_index.default_block.opaque_type.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020432, VkglTestCase_020432_1, VkglTestCase_020432_2);

#define VkglTestCase_020433_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic"
#define VkglTestCase_020433_2 "_counter_buffer_index.default_block.opaque_type.usampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020433, VkglTestCase_020433_1, VkglTestCase_020433_2);

#define VkglTestCase_020434_1 "dEQP-GLES31.functional.program_interface_query.uniform.ato"
#define VkglTestCase_020434_2 "mic_counter_buffer_index.default_block.opaque_type.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020434, VkglTestCase_020434_1, VkglTestCase_020434_2);

#define VkglTestCase_020435_1 "dEQP-GLES31.functional.program_interface_query.uniform.atom"
#define VkglTestCase_020435_2 "ic_counter_buffer_index.default_block.opaque_type.image_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020435, VkglTestCase_020435_1, VkglTestCase_020435_2);

#define VkglTestCase_020436_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic"
#define VkglTestCase_020436_2 "_counter_buffer_index.default_block.opaque_type.image_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020436, VkglTestCase_020436_1, VkglTestCase_020436_2);

#define VkglTestCase_020437_1 "dEQP-GLES31.functional.program_interface_query.uniform.ato"
#define VkglTestCase_020437_2 "mic_counter_buffer_index.default_block.opaque_type.image_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020437, VkglTestCase_020437_1, VkglTestCase_020437_2);

#define VkglTestCase_020438_1 "dEQP-GLES31.functional.program_interface_query.uniform.atom"
#define VkglTestCase_020438_2 "ic_counter_buffer_index.default_block.opaque_type.iimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020438, VkglTestCase_020438_1, VkglTestCase_020438_2);

#define VkglTestCase_020439_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomi"
#define VkglTestCase_020439_2 "c_counter_buffer_index.default_block.opaque_type.iimage_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020439, VkglTestCase_020439_1, VkglTestCase_020439_2);

#define VkglTestCase_020440_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic_"
#define VkglTestCase_020440_2 "counter_buffer_index.default_block.opaque_type.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020440, VkglTestCase_020440_1, VkglTestCase_020440_2);

#define VkglTestCase_020441_1 "dEQP-GLES31.functional.program_interface_query.uniform.atom"
#define VkglTestCase_020441_2 "ic_counter_buffer_index.default_block.opaque_type.iimage_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020441, VkglTestCase_020441_1, VkglTestCase_020441_2);

#define VkglTestCase_020442_1 "dEQP-GLES31.functional.program_interface_query.uniform.atom"
#define VkglTestCase_020442_2 "ic_counter_buffer_index.default_block.opaque_type.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020442, VkglTestCase_020442_1, VkglTestCase_020442_2);

#define VkglTestCase_020443_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomi"
#define VkglTestCase_020443_2 "c_counter_buffer_index.default_block.opaque_type.uimage_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020443, VkglTestCase_020443_1, VkglTestCase_020443_2);

#define VkglTestCase_020444_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomic_"
#define VkglTestCase_020444_2 "counter_buffer_index.default_block.opaque_type.uimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020444, VkglTestCase_020444_1, VkglTestCase_020444_2);

#define VkglTestCase_020445_1 "dEQP-GLES31.functional.program_interface_query.uniform.atom"
#define VkglTestCase_020445_2 "ic_counter_buffer_index.default_block.opaque_type.uimage_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020445, VkglTestCase_020445_1, VkglTestCase_020445_2);

#define VkglTestCase_020446_1 "dEQP-GLES31.functional.program_interface_query.uniform.atomi"
#define VkglTestCase_020446_2 "c_counter_buffer_index.default_block.opaque_type.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020446, VkglTestCase_020446_1, VkglTestCase_020446_2);

#define VkglTestCase_020484_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020484_2 "form.location.default_block.opaque_type.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020484, VkglTestCase_020484_1, VkglTestCase_020484_2);

#define VkglTestCase_020485_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020485_2 "orm.location.default_block.opaque_type.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020485, VkglTestCase_020485_1, VkglTestCase_020485_2);

#define VkglTestCase_020486_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020486_2 "m.location.default_block.opaque_type.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020486, VkglTestCase_020486_1, VkglTestCase_020486_2);

#define VkglTestCase_020487_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020487_2 "form.location.default_block.opaque_type.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020487, VkglTestCase_020487_1, VkglTestCase_020487_2);

#define VkglTestCase_020488_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020488_2 "m.location.default_block.opaque_type.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020488, VkglTestCase_020488_1, VkglTestCase_020488_2);

#define VkglTestCase_020489_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020489_2 ".location.default_block.opaque_type.sampler_cube_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020489, VkglTestCase_020489_1, VkglTestCase_020489_2);

#define VkglTestCase_020490_1 "dEQP-GLES31.functional.program_interface_query.uniform.l"
#define VkglTestCase_020490_2 "ocation.default_block.opaque_type.sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020490, VkglTestCase_020490_1, VkglTestCase_020490_2);

#define VkglTestCase_020491_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020491_2 "form.location.default_block.opaque_type.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020491, VkglTestCase_020491_1, VkglTestCase_020491_2);

#define VkglTestCase_020492_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020492_2 "orm.location.default_block.opaque_type.isampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020492, VkglTestCase_020492_1, VkglTestCase_020492_2);

#define VkglTestCase_020493_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020493_2 "m.location.default_block.opaque_type.isampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020493, VkglTestCase_020493_1, VkglTestCase_020493_2);

#define VkglTestCase_020494_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020494_2 "form.location.default_block.opaque_type.isampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020494, VkglTestCase_020494_1, VkglTestCase_020494_2);

#define VkglTestCase_020495_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020495_2 "form.location.default_block.opaque_type.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020495, VkglTestCase_020495_1, VkglTestCase_020495_2);

#define VkglTestCase_020496_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020496_2 "orm.location.default_block.opaque_type.usampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020496, VkglTestCase_020496_1, VkglTestCase_020496_2);

#define VkglTestCase_020497_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020497_2 "m.location.default_block.opaque_type.usampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020497, VkglTestCase_020497_1, VkglTestCase_020497_2);

#define VkglTestCase_020498_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020498_2 "form.location.default_block.opaque_type.usampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020498, VkglTestCase_020498_1, VkglTestCase_020498_2);

#define VkglTestCase_020499_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020499_2 "orm.location.default_block.opaque_type.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020499, VkglTestCase_020499_1, VkglTestCase_020499_2);

#define VkglTestCase_020500_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020500_2 "rm.location.default_block.opaque_type.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020500, VkglTestCase_020500_1, VkglTestCase_020500_2);

#define VkglTestCase_020501_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020501_2 "rm.location.default_block.opaque_type.usampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020501, VkglTestCase_020501_1, VkglTestCase_020501_2);

#define VkglTestCase_020502_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020502_2 "iform.location.default_block.opaque_type.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020502, VkglTestCase_020502_1, VkglTestCase_020502_2);

#define VkglTestCase_020503_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020503_2 "form.location.default_block.opaque_type.image_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020503, VkglTestCase_020503_1, VkglTestCase_020503_2);

#define VkglTestCase_020504_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020504_2 "rm.location.default_block.opaque_type.image_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020504, VkglTestCase_020504_1, VkglTestCase_020504_2);

#define VkglTestCase_020505_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020505_2 "iform.location.default_block.opaque_type.image_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020505, VkglTestCase_020505_1, VkglTestCase_020505_2);

#define VkglTestCase_020506_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020506_2 "iform.location.default_block.opaque_type.iimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020506, VkglTestCase_020506_1, VkglTestCase_020506_2);

#define VkglTestCase_020507_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020507_2 "form.location.default_block.opaque_type.iimage_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020507, VkglTestCase_020507_1, VkglTestCase_020507_2);

#define VkglTestCase_020508_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020508_2 "rm.location.default_block.opaque_type.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020508, VkglTestCase_020508_1, VkglTestCase_020508_2);

#define VkglTestCase_020509_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020509_2 "iform.location.default_block.opaque_type.iimage_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020509, VkglTestCase_020509_1, VkglTestCase_020509_2);

#define VkglTestCase_020510_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020510_2 "iform.location.default_block.opaque_type.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020510, VkglTestCase_020510_1, VkglTestCase_020510_2);

#define VkglTestCase_020511_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020511_2 "form.location.default_block.opaque_type.uimage_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020511, VkglTestCase_020511_1, VkglTestCase_020511_2);

#define VkglTestCase_020512_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020512_2 "rm.location.default_block.opaque_type.uimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020512, VkglTestCase_020512_1, VkglTestCase_020512_2);

#define VkglTestCase_020513_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020513_2 "iform.location.default_block.opaque_type.uimage_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020513, VkglTestCase_020513_1, VkglTestCase_020513_2);

#define VkglTestCase_020514_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020514_2 "form.location.default_block.opaque_type.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020514, VkglTestCase_020514_1, VkglTestCase_020514_2);
