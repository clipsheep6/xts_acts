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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041918_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_041918_2 "tive_api.buffer.bind_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041918, VkglTestCase_041918_1, VkglTestCase_041918_2);

#define VkglTestCase_041919_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041919_2 "ve_api.buffer.delete_buffers"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041919, VkglTestCase_041919_1, VkglTestCase_041919_2);

#define VkglTestCase_041920_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_041920_2 "tive_api.buffer.gen_buffers"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041920, VkglTestCase_041920_1, VkglTestCase_041920_2);

#define VkglTestCase_041921_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_041921_2 "tive_api.buffer.buffer_data"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041921, VkglTestCase_041921_1, VkglTestCase_041921_2);

#define VkglTestCase_041922_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041922_2 "ve_api.buffer.buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041922, VkglTestCase_041922_1, VkglTestCase_041922_2);

#define VkglTestCase_041923_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_041923_2 ".buffer.buffer_sub_data_size_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041923, VkglTestCase_041923_1, VkglTestCase_041923_2);

#define VkglTestCase_041924_1 "dEQP-GLES3.functional.n"
#define VkglTestCase_041924_2 "egative_api.buffer.clear"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041924, VkglTestCase_041924_1, VkglTestCase_041924_2);

#define VkglTestCase_041925_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_041925_2 "tive_api.buffer.read_pixels"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041925, VkglTestCase_041925_1, VkglTestCase_041925_2);

#define VkglTestCase_041926_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_041926_2 ".buffer.read_pixels_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041926, VkglTestCase_041926_1, VkglTestCase_041926_2);

#define VkglTestCase_041927_1 "dEQP-GLES3.functional.negative_api.b"
#define VkglTestCase_041927_2 "uffer.read_pixels_fbo_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041927, VkglTestCase_041927_1, VkglTestCase_041927_2);

#define VkglTestCase_041928_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_041928_2 "e_api.buffer.bind_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041928, VkglTestCase_041928_1, VkglTestCase_041928_2);

#define VkglTestCase_041929_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_041929_2 "e_api.buffer.bind_buffer_base"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041929, VkglTestCase_041929_1, VkglTestCase_041929_2);

#define VkglTestCase_041930_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041930_2 "ve_api.buffer.clear_bufferiv"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041930, VkglTestCase_041930_1, VkglTestCase_041930_2);

#define VkglTestCase_041931_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041931_2 "ve_api.buffer.clear_bufferuiv"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041931, VkglTestCase_041931_1, VkglTestCase_041931_2);

#define VkglTestCase_041932_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041932_2 "ve_api.buffer.clear_bufferfv"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041932, VkglTestCase_041932_1, VkglTestCase_041932_2);

#define VkglTestCase_041933_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041933_2 "ve_api.buffer.clear_bufferfi"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041933, VkglTestCase_041933_1, VkglTestCase_041933_2);

#define VkglTestCase_041934_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_041934_2 "api.buffer.copy_buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041934, VkglTestCase_041934_1, VkglTestCase_041934_2);

#define VkglTestCase_041935_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_041935_2 "ive_api.buffer.draw_buffers"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041935, VkglTestCase_041935_1, VkglTestCase_041935_2);

#define VkglTestCase_041936_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041936_2 "i.buffer.flush_mapped_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041936, VkglTestCase_041936_1, VkglTestCase_041936_2);

#define VkglTestCase_041937_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_041937_2 "e_api.buffer.map_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041937, VkglTestCase_041937_1, VkglTestCase_041937_2);

#define VkglTestCase_041938_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_041938_2 "tive_api.buffer.read_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041938, VkglTestCase_041938_1, VkglTestCase_041938_2);

#define VkglTestCase_041939_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_041939_2 "ive_api.buffer.unmap_buffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041939, VkglTestCase_041939_1, VkglTestCase_041939_2);

#define VkglTestCase_041940_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_041940_2 "e_api.buffer.bind_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041940, VkglTestCase_041940_1, VkglTestCase_041940_2);

#define VkglTestCase_041941_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_041941_2 "e_api.buffer.bind_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041941, VkglTestCase_041941_1, VkglTestCase_041941_2);

#define VkglTestCase_041942_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041942_2 "i.buffer.check_framebuffer_status"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041942, VkglTestCase_041942_1, VkglTestCase_041942_2);

#define VkglTestCase_041943_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_041943_2 "e_api.buffer.gen_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041943, VkglTestCase_041943_1, VkglTestCase_041943_2);

#define VkglTestCase_041944_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_041944_2 "e_api.buffer.gen_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041944, VkglTestCase_041944_1, VkglTestCase_041944_2);

#define VkglTestCase_041945_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_041945_2 "_api.buffer.delete_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041945, VkglTestCase_041945_1, VkglTestCase_041945_2);

#define VkglTestCase_041946_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_041946_2 "api.buffer.delete_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041946, VkglTestCase_041946_1, VkglTestCase_041946_2);

#define VkglTestCase_041947_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041947_2 "i.buffer.framebuffer_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041947, VkglTestCase_041947_1, VkglTestCase_041947_2);

#define VkglTestCase_041948_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_041948_2 "api.buffer.framebuffer_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041948, VkglTestCase_041948_1, VkglTestCase_041948_2);

#define VkglTestCase_041949_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_041949_2 "api.buffer.renderbuffer_storage"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041949, VkglTestCase_041949_1, VkglTestCase_041949_2);

#define VkglTestCase_041950_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_041950_2 "e_api.buffer.blit_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041950, VkglTestCase_041950_1, VkglTestCase_041950_2);

#define VkglTestCase_041951_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_041951_2 "buffer.blit_framebuffer_multisample"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041951, VkglTestCase_041951_1, VkglTestCase_041951_2);

#define VkglTestCase_041952_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041952_2 "i.buffer.framebuffer_texture_layer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041952, VkglTestCase_041952_1, VkglTestCase_041952_2);

#define VkglTestCase_041953_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_041953_2 "pi.buffer.invalidate_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041953, VkglTestCase_041953_1, VkglTestCase_041953_2);

#define VkglTestCase_041954_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_041954_2 ".buffer.invalidate_sub_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041954, VkglTestCase_041954_1, VkglTestCase_041954_2);

#define VkglTestCase_041955_1 "dEQP-GLES3.functional.negative_api.bu"
#define VkglTestCase_041955_2 "ffer.renderbuffer_storage_multisample"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041955, VkglTestCase_041955_1, VkglTestCase_041955_2);
