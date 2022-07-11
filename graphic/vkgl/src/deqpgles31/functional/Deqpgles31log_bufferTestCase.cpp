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

#define VkglTestCase_018851_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018851_2 "ive_coverage.log.buffer.bind_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018851, VkglTestCase_018851_1, VkglTestCase_018851_2);

#define VkglTestCase_018852_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018852_2 "e_coverage.log.buffer.delete_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018852, VkglTestCase_018852_1, VkglTestCase_018852_2);

#define VkglTestCase_018853_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018853_2 "ive_coverage.log.buffer.gen_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018853, VkglTestCase_018853_1, VkglTestCase_018853_2);

#define VkglTestCase_018854_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018854_2 "ive_coverage.log.buffer.buffer_data"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018854, VkglTestCase_018854_1, VkglTestCase_018854_2);

#define VkglTestCase_018855_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018855_2 "e_coverage.log.buffer.buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018855, VkglTestCase_018855_1, VkglTestCase_018855_2);

#define VkglTestCase_018856_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018856_2 "rage.log.buffer.buffer_sub_data_size_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018856, VkglTestCase_018856_1, VkglTestCase_018856_2);

#define VkglTestCase_018857_1 "dEQP-GLES31.functional.debug.ne"
#define VkglTestCase_018857_2 "gative_coverage.log.buffer.clear"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018857, VkglTestCase_018857_1, VkglTestCase_018857_2);

#define VkglTestCase_018858_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018858_2 "ive_coverage.log.buffer.read_pixels"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018858, VkglTestCase_018858_1, VkglTestCase_018858_2);

#define VkglTestCase_018859_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018859_2 "ve_coverage.log.buffer.readn_pixels"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018859, VkglTestCase_018859_1, VkglTestCase_018859_2);

#define VkglTestCase_018860_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018860_2 "rage.log.buffer.read_pixels_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018860, VkglTestCase_018860_1, VkglTestCase_018860_2);

#define VkglTestCase_018861_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018861_2 "ge.log.buffer.read_pixels_fbo_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018861, VkglTestCase_018861_1, VkglTestCase_018861_2);

#define VkglTestCase_018862_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018862_2 "_coverage.log.buffer.bind_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018862, VkglTestCase_018862_1, VkglTestCase_018862_2);

#define VkglTestCase_018863_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018863_2 "_coverage.log.buffer.bind_buffer_base"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018863, VkglTestCase_018863_1, VkglTestCase_018863_2);

#define VkglTestCase_018864_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018864_2 "e_coverage.log.buffer.clear_bufferiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018864, VkglTestCase_018864_1, VkglTestCase_018864_2);

#define VkglTestCase_018865_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018865_2 "e_coverage.log.buffer.clear_bufferuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018865, VkglTestCase_018865_1, VkglTestCase_018865_2);

#define VkglTestCase_018866_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018866_2 "e_coverage.log.buffer.clear_bufferfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018866, VkglTestCase_018866_1, VkglTestCase_018866_2);

#define VkglTestCase_018867_1 "dEQP-GLES31.functional.debug.negativ"
#define VkglTestCase_018867_2 "e_coverage.log.buffer.clear_bufferfi"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018867, VkglTestCase_018867_1, VkglTestCase_018867_2);

#define VkglTestCase_018868_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018868_2 "overage.log.buffer.copy_buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018868, VkglTestCase_018868_1, VkglTestCase_018868_2);

#define VkglTestCase_018869_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018869_2 "ve_coverage.log.buffer.draw_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018869, VkglTestCase_018869_1, VkglTestCase_018869_2);

#define VkglTestCase_018870_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018870_2 "erage.log.buffer.flush_mapped_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018870, VkglTestCase_018870_1, VkglTestCase_018870_2);

#define VkglTestCase_018871_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018871_2 "_coverage.log.buffer.map_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018871, VkglTestCase_018871_1, VkglTestCase_018871_2);

#define VkglTestCase_018872_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018872_2 "ive_coverage.log.buffer.read_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018872, VkglTestCase_018872_1, VkglTestCase_018872_2);

#define VkglTestCase_018873_1 "dEQP-GLES31.functional.debug.negati"
#define VkglTestCase_018873_2 "ve_coverage.log.buffer.unmap_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018873, VkglTestCase_018873_1, VkglTestCase_018873_2);

#define VkglTestCase_018874_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018874_2 "_coverage.log.buffer.bind_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018874, VkglTestCase_018874_1, VkglTestCase_018874_2);

#define VkglTestCase_018875_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018875_2 "_coverage.log.buffer.bind_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018875, VkglTestCase_018875_1, VkglTestCase_018875_2);

#define VkglTestCase_018876_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018876_2 "erage.log.buffer.check_framebuffer_status"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018876, VkglTestCase_018876_1, VkglTestCase_018876_2);

#define VkglTestCase_018877_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018877_2 "_coverage.log.buffer.gen_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018877, VkglTestCase_018877_1, VkglTestCase_018877_2);

#define VkglTestCase_018878_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018878_2 "_coverage.log.buffer.gen_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018878, VkglTestCase_018878_1, VkglTestCase_018878_2);

#define VkglTestCase_018879_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018879_2 "coverage.log.buffer.delete_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018879, VkglTestCase_018879_1, VkglTestCase_018879_2);

#define VkglTestCase_018880_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018880_2 "overage.log.buffer.delete_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018880, VkglTestCase_018880_1, VkglTestCase_018880_2);

#define VkglTestCase_018881_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018881_2 "erage.log.buffer.framebuffer_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018881, VkglTestCase_018881_1, VkglTestCase_018881_2);

#define VkglTestCase_018882_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018882_2 "coverage.log.buffer.framebuffer_texture"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018882, VkglTestCase_018882_1, VkglTestCase_018882_2);

#define VkglTestCase_018883_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018883_2 "overage.log.buffer.framebuffer_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018883, VkglTestCase_018883_1, VkglTestCase_018883_2);

#define VkglTestCase_018884_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018884_2 "overage.log.buffer.renderbuffer_storage"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018884, VkglTestCase_018884_1, VkglTestCase_018884_2);

#define VkglTestCase_018885_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018885_2 "_coverage.log.buffer.blit_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018885, VkglTestCase_018885_1, VkglTestCase_018885_2);

#define VkglTestCase_018886_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018886_2 "age.log.buffer.blit_framebuffer_multisample"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018886, VkglTestCase_018886_1, VkglTestCase_018886_2);

#define VkglTestCase_018887_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018887_2 "erage.log.buffer.framebuffer_texture_layer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018887, VkglTestCase_018887_1, VkglTestCase_018887_2);

#define VkglTestCase_018888_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018888_2 "verage.log.buffer.invalidate_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018888, VkglTestCase_018888_1, VkglTestCase_018888_2);

#define VkglTestCase_018889_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018889_2 "rage.log.buffer.invalidate_sub_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018889, VkglTestCase_018889_1, VkglTestCase_018889_2);

#define VkglTestCase_018890_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018890_2 "e.log.buffer.renderbuffer_storage_multisample"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018890, VkglTestCase_018890_1, VkglTestCase_018890_2);

#define VkglTestCase_018891_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018891_2 "coverage.log.buffer.copy_image_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018891, VkglTestCase_018891_1, VkglTestCase_018891_2);
