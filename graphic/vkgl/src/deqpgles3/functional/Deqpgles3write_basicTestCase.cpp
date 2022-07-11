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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000089_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000089_2 "write.basic.array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000089, VkglTestCase_000089_1, VkglTestCase_000089_2);

#define VkglTestCase_000090_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000090_2 "write.basic.array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000090, VkglTestCase_000090_1, VkglTestCase_000090_2);

#define VkglTestCase_000091_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000091_2 "write.basic.array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000091, VkglTestCase_000091_1, VkglTestCase_000091_2);

#define VkglTestCase_000092_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000092_2 "write.basic.array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000092, VkglTestCase_000092_1, VkglTestCase_000092_2);

#define VkglTestCase_000093_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000093_2 "write.basic.array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000093, VkglTestCase_000093_1, VkglTestCase_000093_2);

#define VkglTestCase_000094_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000094_2 "write.basic.array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000094, VkglTestCase_000094_1, VkglTestCase_000094_2);

#define VkglTestCase_000095_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000095_2 "write.basic.array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000095, VkglTestCase_000095_1, VkglTestCase_000095_2);

#define VkglTestCase_000096_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000096_2 "write.basic.array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000096, VkglTestCase_000096_1, VkglTestCase_000096_2);

#define VkglTestCase_000097_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000097_2 "write.basic.array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000097, VkglTestCase_000097_1, VkglTestCase_000097_2);

#define VkglTestCase_000098_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000098_2 "ite.basic.copy_read_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000098, VkglTestCase_000098_1, VkglTestCase_000098_2);

#define VkglTestCase_000099_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000099_2 "ite.basic.copy_read_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000099, VkglTestCase_000099_1, VkglTestCase_000099_2);

#define VkglTestCase_000100_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000100_2 "ite.basic.copy_read_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000100, VkglTestCase_000100_1, VkglTestCase_000100_2);

#define VkglTestCase_000101_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000101_2 "ite.basic.copy_read_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000101, VkglTestCase_000101_1, VkglTestCase_000101_2);

#define VkglTestCase_000102_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000102_2 "ite.basic.copy_read_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000102, VkglTestCase_000102_1, VkglTestCase_000102_2);

#define VkglTestCase_000103_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000103_2 "ite.basic.copy_read_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000103, VkglTestCase_000103_1, VkglTestCase_000103_2);

#define VkglTestCase_000104_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000104_2 "ite.basic.copy_read_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000104, VkglTestCase_000104_1, VkglTestCase_000104_2);

#define VkglTestCase_000105_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000105_2 "ite.basic.copy_read_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000105, VkglTestCase_000105_1, VkglTestCase_000105_2);

#define VkglTestCase_000106_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000106_2 "ite.basic.copy_read_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000106, VkglTestCase_000106_1, VkglTestCase_000106_2);

#define VkglTestCase_000107_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000107_2 "ite.basic.copy_write_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000107, VkglTestCase_000107_1, VkglTestCase_000107_2);

#define VkglTestCase_000108_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000108_2 "ite.basic.copy_write_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000108, VkglTestCase_000108_1, VkglTestCase_000108_2);

#define VkglTestCase_000109_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000109_2 "ite.basic.copy_write_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000109, VkglTestCase_000109_1, VkglTestCase_000109_2);

#define VkglTestCase_000110_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000110_2 "ite.basic.copy_write_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000110, VkglTestCase_000110_1, VkglTestCase_000110_2);

#define VkglTestCase_000111_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000111_2 "ite.basic.copy_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000111, VkglTestCase_000111_1, VkglTestCase_000111_2);

#define VkglTestCase_000112_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000112_2 "ite.basic.copy_write_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000112, VkglTestCase_000112_1, VkglTestCase_000112_2);

#define VkglTestCase_000113_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000113_2 "te.basic.copy_write_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000113, VkglTestCase_000113_1, VkglTestCase_000113_2);

#define VkglTestCase_000114_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000114_2 "te.basic.copy_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000114, VkglTestCase_000114_1, VkglTestCase_000114_2);

#define VkglTestCase_000115_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000115_2 "te.basic.copy_write_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000115, VkglTestCase_000115_1, VkglTestCase_000115_2);

#define VkglTestCase_000116_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000116_2 "e.basic.element_array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000116, VkglTestCase_000116_1, VkglTestCase_000116_2);

#define VkglTestCase_000117_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000117_2 "e.basic.element_array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000117, VkglTestCase_000117_1, VkglTestCase_000117_2);

#define VkglTestCase_000118_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000118_2 "e.basic.element_array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000118, VkglTestCase_000118_1, VkglTestCase_000118_2);

#define VkglTestCase_000119_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000119_2 "e.basic.element_array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000119, VkglTestCase_000119_1, VkglTestCase_000119_2);

#define VkglTestCase_000120_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000120_2 "e.basic.element_array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000120, VkglTestCase_000120_1, VkglTestCase_000120_2);

#define VkglTestCase_000121_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000121_2 "e.basic.element_array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000121, VkglTestCase_000121_1, VkglTestCase_000121_2);

#define VkglTestCase_000122_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000122_2 "e.basic.element_array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000122, VkglTestCase_000122_1, VkglTestCase_000122_2);

#define VkglTestCase_000123_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000123_2 "e.basic.element_array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000123, VkglTestCase_000123_1, VkglTestCase_000123_2);

#define VkglTestCase_000124_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000124_2 "e.basic.element_array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000124, VkglTestCase_000124_1, VkglTestCase_000124_2);

#define VkglTestCase_000125_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000125_2 "ite.basic.pixel_pack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000125, VkglTestCase_000125_1, VkglTestCase_000125_2);

#define VkglTestCase_000126_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000126_2 "ite.basic.pixel_pack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000126, VkglTestCase_000126_1, VkglTestCase_000126_2);

#define VkglTestCase_000127_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000127_2 "ite.basic.pixel_pack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000127, VkglTestCase_000127_1, VkglTestCase_000127_2);

#define VkglTestCase_000128_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000128_2 "ite.basic.pixel_pack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000128, VkglTestCase_000128_1, VkglTestCase_000128_2);

#define VkglTestCase_000129_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000129_2 "ite.basic.pixel_pack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000129, VkglTestCase_000129_1, VkglTestCase_000129_2);

#define VkglTestCase_000130_1 "dEQP-GLES3.functional.buffer.wr"
#define VkglTestCase_000130_2 "ite.basic.pixel_pack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000130, VkglTestCase_000130_1, VkglTestCase_000130_2);

#define VkglTestCase_000131_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000131_2 "te.basic.pixel_pack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000131, VkglTestCase_000131_1, VkglTestCase_000131_2);

#define VkglTestCase_000132_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000132_2 "te.basic.pixel_pack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000132, VkglTestCase_000132_1, VkglTestCase_000132_2);

#define VkglTestCase_000133_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000133_2 "te.basic.pixel_pack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000133, VkglTestCase_000133_1, VkglTestCase_000133_2);

#define VkglTestCase_000134_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000134_2 "te.basic.pixel_unpack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000134, VkglTestCase_000134_1, VkglTestCase_000134_2);

#define VkglTestCase_000135_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000135_2 "te.basic.pixel_unpack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000135, VkglTestCase_000135_1, VkglTestCase_000135_2);

#define VkglTestCase_000136_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000136_2 "te.basic.pixel_unpack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000136, VkglTestCase_000136_1, VkglTestCase_000136_2);

#define VkglTestCase_000137_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000137_2 "te.basic.pixel_unpack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000137, VkglTestCase_000137_1, VkglTestCase_000137_2);

#define VkglTestCase_000138_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000138_2 "te.basic.pixel_unpack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000138, VkglTestCase_000138_1, VkglTestCase_000138_2);

#define VkglTestCase_000139_1 "dEQP-GLES3.functional.buffer.wri"
#define VkglTestCase_000139_2 "te.basic.pixel_unpack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000139, VkglTestCase_000139_1, VkglTestCase_000139_2);

#define VkglTestCase_000140_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000140_2 "e.basic.pixel_unpack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000140, VkglTestCase_000140_1, VkglTestCase_000140_2);

#define VkglTestCase_000141_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000141_2 "e.basic.pixel_unpack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000141, VkglTestCase_000141_1, VkglTestCase_000141_2);

#define VkglTestCase_000142_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000142_2 "e.basic.pixel_unpack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000142, VkglTestCase_000142_1, VkglTestCase_000142_2);

#define VkglTestCase_000143_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000143_2 "basic.transform_feedback_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000143, VkglTestCase_000143_1, VkglTestCase_000143_2);

#define VkglTestCase_000144_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000144_2 "basic.transform_feedback_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000144, VkglTestCase_000144_1, VkglTestCase_000144_2);

#define VkglTestCase_000145_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000145_2 "basic.transform_feedback_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000145, VkglTestCase_000145_1, VkglTestCase_000145_2);

#define VkglTestCase_000146_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000146_2 "basic.transform_feedback_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000146, VkglTestCase_000146_1, VkglTestCase_000146_2);

#define VkglTestCase_000147_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000147_2 "basic.transform_feedback_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000147, VkglTestCase_000147_1, VkglTestCase_000147_2);

#define VkglTestCase_000148_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000148_2 "basic.transform_feedback_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000148, VkglTestCase_000148_1, VkglTestCase_000148_2);

#define VkglTestCase_000149_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000149_2 "asic.transform_feedback_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000149, VkglTestCase_000149_1, VkglTestCase_000149_2);

#define VkglTestCase_000150_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000150_2 "asic.transform_feedback_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000150, VkglTestCase_000150_1, VkglTestCase_000150_2);

#define VkglTestCase_000151_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000151_2 "asic.transform_feedback_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000151, VkglTestCase_000151_1, VkglTestCase_000151_2);

#define VkglTestCase_000152_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000152_2 "rite.basic.uniform_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000152, VkglTestCase_000152_1, VkglTestCase_000152_2);

#define VkglTestCase_000153_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000153_2 "rite.basic.uniform_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000153, VkglTestCase_000153_1, VkglTestCase_000153_2);

#define VkglTestCase_000154_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000154_2 "rite.basic.uniform_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000154, VkglTestCase_000154_1, VkglTestCase_000154_2);

#define VkglTestCase_000155_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000155_2 "rite.basic.uniform_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000155, VkglTestCase_000155_1, VkglTestCase_000155_2);

#define VkglTestCase_000156_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000156_2 "rite.basic.uniform_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000156, VkglTestCase_000156_1, VkglTestCase_000156_2);

#define VkglTestCase_000157_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000157_2 "rite.basic.uniform_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000157, VkglTestCase_000157_1, VkglTestCase_000157_2);

#define VkglTestCase_000158_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000158_2 "rite.basic.uniform_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000158, VkglTestCase_000158_1, VkglTestCase_000158_2);

#define VkglTestCase_000159_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000159_2 "rite.basic.uniform_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000159, VkglTestCase_000159_1, VkglTestCase_000159_2);

#define VkglTestCase_000160_1 "dEQP-GLES3.functional.buffer.w"
#define VkglTestCase_000160_2 "rite.basic.uniform_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000160, VkglTestCase_000160_1, VkglTestCase_000160_2);
