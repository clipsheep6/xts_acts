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

#define VkglTestCase_000170_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000170_2 "e.basic_subdata.array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000170, VkglTestCase_000170_1, VkglTestCase_000170_2);

#define VkglTestCase_000171_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000171_2 "e.basic_subdata.array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000171, VkglTestCase_000171_1, VkglTestCase_000171_2);

#define VkglTestCase_000172_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000172_2 "e.basic_subdata.array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000172, VkglTestCase_000172_1, VkglTestCase_000172_2);

#define VkglTestCase_000173_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000173_2 "e.basic_subdata.array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000173, VkglTestCase_000173_1, VkglTestCase_000173_2);

#define VkglTestCase_000174_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000174_2 "e.basic_subdata.array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000174, VkglTestCase_000174_1, VkglTestCase_000174_2);

#define VkglTestCase_000175_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000175_2 "e.basic_subdata.array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000175, VkglTestCase_000175_1, VkglTestCase_000175_2);

#define VkglTestCase_000176_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000176_2 "e.basic_subdata.array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000176, VkglTestCase_000176_1, VkglTestCase_000176_2);

#define VkglTestCase_000177_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000177_2 "e.basic_subdata.array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000177, VkglTestCase_000177_1, VkglTestCase_000177_2);

#define VkglTestCase_000178_1 "dEQP-GLES3.functional.buffer.writ"
#define VkglTestCase_000178_2 "e.basic_subdata.array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000178, VkglTestCase_000178_1, VkglTestCase_000178_2);

#define VkglTestCase_000179_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000179_2 "basic_subdata.copy_read_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000179, VkglTestCase_000179_1, VkglTestCase_000179_2);

#define VkglTestCase_000180_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000180_2 "basic_subdata.copy_read_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000180, VkglTestCase_000180_1, VkglTestCase_000180_2);

#define VkglTestCase_000181_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000181_2 "basic_subdata.copy_read_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000181, VkglTestCase_000181_1, VkglTestCase_000181_2);

#define VkglTestCase_000182_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000182_2 "basic_subdata.copy_read_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000182, VkglTestCase_000182_1, VkglTestCase_000182_2);

#define VkglTestCase_000183_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000183_2 "basic_subdata.copy_read_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000183, VkglTestCase_000183_1, VkglTestCase_000183_2);

#define VkglTestCase_000184_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000184_2 "basic_subdata.copy_read_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000184, VkglTestCase_000184_1, VkglTestCase_000184_2);

#define VkglTestCase_000185_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000185_2 "basic_subdata.copy_read_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000185, VkglTestCase_000185_1, VkglTestCase_000185_2);

#define VkglTestCase_000186_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000186_2 "basic_subdata.copy_read_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000186, VkglTestCase_000186_1, VkglTestCase_000186_2);

#define VkglTestCase_000187_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000187_2 "basic_subdata.copy_read_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000187, VkglTestCase_000187_1, VkglTestCase_000187_2);

#define VkglTestCase_000188_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000188_2 "basic_subdata.copy_write_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000188, VkglTestCase_000188_1, VkglTestCase_000188_2);

#define VkglTestCase_000189_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000189_2 "basic_subdata.copy_write_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000189, VkglTestCase_000189_1, VkglTestCase_000189_2);

#define VkglTestCase_000190_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000190_2 "basic_subdata.copy_write_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000190, VkglTestCase_000190_1, VkglTestCase_000190_2);

#define VkglTestCase_000191_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000191_2 "basic_subdata.copy_write_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000191, VkglTestCase_000191_1, VkglTestCase_000191_2);

#define VkglTestCase_000192_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000192_2 "basic_subdata.copy_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000192, VkglTestCase_000192_1, VkglTestCase_000192_2);

#define VkglTestCase_000193_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000193_2 "basic_subdata.copy_write_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000193, VkglTestCase_000193_1, VkglTestCase_000193_2);

#define VkglTestCase_000194_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000194_2 "asic_subdata.copy_write_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000194, VkglTestCase_000194_1, VkglTestCase_000194_2);

#define VkglTestCase_000195_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000195_2 "asic_subdata.copy_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000195, VkglTestCase_000195_1, VkglTestCase_000195_2);

#define VkglTestCase_000196_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000196_2 "asic_subdata.copy_write_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000196, VkglTestCase_000196_1, VkglTestCase_000196_2);

#define VkglTestCase_000197_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000197_2 "sic_subdata.element_array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000197, VkglTestCase_000197_1, VkglTestCase_000197_2);

#define VkglTestCase_000198_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000198_2 "sic_subdata.element_array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000198, VkglTestCase_000198_1, VkglTestCase_000198_2);

#define VkglTestCase_000199_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000199_2 "sic_subdata.element_array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000199, VkglTestCase_000199_1, VkglTestCase_000199_2);

#define VkglTestCase_000200_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000200_2 "sic_subdata.element_array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000200, VkglTestCase_000200_1, VkglTestCase_000200_2);

#define VkglTestCase_000201_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000201_2 "sic_subdata.element_array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000201, VkglTestCase_000201_1, VkglTestCase_000201_2);

#define VkglTestCase_000202_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000202_2 "sic_subdata.element_array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000202, VkglTestCase_000202_1, VkglTestCase_000202_2);

#define VkglTestCase_000203_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000203_2 "sic_subdata.element_array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000203, VkglTestCase_000203_1, VkglTestCase_000203_2);

#define VkglTestCase_000204_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000204_2 "sic_subdata.element_array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000204, VkglTestCase_000204_1, VkglTestCase_000204_2);

#define VkglTestCase_000205_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000205_2 "sic_subdata.element_array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000205, VkglTestCase_000205_1, VkglTestCase_000205_2);

#define VkglTestCase_000206_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000206_2 "basic_subdata.pixel_pack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000206, VkglTestCase_000206_1, VkglTestCase_000206_2);

#define VkglTestCase_000207_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000207_2 "basic_subdata.pixel_pack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000207, VkglTestCase_000207_1, VkglTestCase_000207_2);

#define VkglTestCase_000208_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000208_2 "basic_subdata.pixel_pack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000208, VkglTestCase_000208_1, VkglTestCase_000208_2);

#define VkglTestCase_000209_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000209_2 "basic_subdata.pixel_pack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000209, VkglTestCase_000209_1, VkglTestCase_000209_2);

#define VkglTestCase_000210_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000210_2 "basic_subdata.pixel_pack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000210, VkglTestCase_000210_1, VkglTestCase_000210_2);

#define VkglTestCase_000211_1 "dEQP-GLES3.functional.buffer.write."
#define VkglTestCase_000211_2 "basic_subdata.pixel_pack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000211, VkglTestCase_000211_1, VkglTestCase_000211_2);

#define VkglTestCase_000212_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000212_2 "asic_subdata.pixel_pack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000212, VkglTestCase_000212_1, VkglTestCase_000212_2);

#define VkglTestCase_000213_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000213_2 "asic_subdata.pixel_pack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000213, VkglTestCase_000213_1, VkglTestCase_000213_2);

#define VkglTestCase_000214_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000214_2 "asic_subdata.pixel_pack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000214, VkglTestCase_000214_1, VkglTestCase_000214_2);

#define VkglTestCase_000215_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000215_2 "asic_subdata.pixel_unpack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000215, VkglTestCase_000215_1, VkglTestCase_000215_2);

#define VkglTestCase_000216_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000216_2 "asic_subdata.pixel_unpack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000216, VkglTestCase_000216_1, VkglTestCase_000216_2);

#define VkglTestCase_000217_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000217_2 "asic_subdata.pixel_unpack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000217, VkglTestCase_000217_1, VkglTestCase_000217_2);

#define VkglTestCase_000218_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000218_2 "asic_subdata.pixel_unpack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000218, VkglTestCase_000218_1, VkglTestCase_000218_2);

#define VkglTestCase_000219_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000219_2 "asic_subdata.pixel_unpack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000219, VkglTestCase_000219_1, VkglTestCase_000219_2);

#define VkglTestCase_000220_1 "dEQP-GLES3.functional.buffer.write.b"
#define VkglTestCase_000220_2 "asic_subdata.pixel_unpack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000220, VkglTestCase_000220_1, VkglTestCase_000220_2);

#define VkglTestCase_000221_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000221_2 "sic_subdata.pixel_unpack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000221, VkglTestCase_000221_1, VkglTestCase_000221_2);

#define VkglTestCase_000222_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000222_2 "sic_subdata.pixel_unpack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000222, VkglTestCase_000222_1, VkglTestCase_000222_2);

#define VkglTestCase_000223_1 "dEQP-GLES3.functional.buffer.write.ba"
#define VkglTestCase_000223_2 "sic_subdata.pixel_unpack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000223, VkglTestCase_000223_1, VkglTestCase_000223_2);

#define VkglTestCase_000224_1 "dEQP-GLES3.functional.buffer.write.basi"
#define VkglTestCase_000224_2 "c_subdata.transform_feedback_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000224, VkglTestCase_000224_1, VkglTestCase_000224_2);

#define VkglTestCase_000225_1 "dEQP-GLES3.functional.buffer.write.basi"
#define VkglTestCase_000225_2 "c_subdata.transform_feedback_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000225, VkglTestCase_000225_1, VkglTestCase_000225_2);

#define VkglTestCase_000226_1 "dEQP-GLES3.functional.buffer.write.basi"
#define VkglTestCase_000226_2 "c_subdata.transform_feedback_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000226, VkglTestCase_000226_1, VkglTestCase_000226_2);

#define VkglTestCase_000227_1 "dEQP-GLES3.functional.buffer.write.basi"
#define VkglTestCase_000227_2 "c_subdata.transform_feedback_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000227, VkglTestCase_000227_1, VkglTestCase_000227_2);

#define VkglTestCase_000228_1 "dEQP-GLES3.functional.buffer.write.basi"
#define VkglTestCase_000228_2 "c_subdata.transform_feedback_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000228, VkglTestCase_000228_1, VkglTestCase_000228_2);

#define VkglTestCase_000229_1 "dEQP-GLES3.functional.buffer.write.basi"
#define VkglTestCase_000229_2 "c_subdata.transform_feedback_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000229, VkglTestCase_000229_1, VkglTestCase_000229_2);

#define VkglTestCase_000230_1 "dEQP-GLES3.functional.buffer.write.basic"
#define VkglTestCase_000230_2 "_subdata.transform_feedback_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000230, VkglTestCase_000230_1, VkglTestCase_000230_2);

#define VkglTestCase_000231_1 "dEQP-GLES3.functional.buffer.write.basic"
#define VkglTestCase_000231_2 "_subdata.transform_feedback_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000231, VkglTestCase_000231_1, VkglTestCase_000231_2);

#define VkglTestCase_000232_1 "dEQP-GLES3.functional.buffer.write.basic"
#define VkglTestCase_000232_2 "_subdata.transform_feedback_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000232, VkglTestCase_000232_1, VkglTestCase_000232_2);

#define VkglTestCase_000233_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000233_2 ".basic_subdata.uniform_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000233, VkglTestCase_000233_1, VkglTestCase_000233_2);

#define VkglTestCase_000234_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000234_2 ".basic_subdata.uniform_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000234, VkglTestCase_000234_1, VkglTestCase_000234_2);

#define VkglTestCase_000235_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000235_2 ".basic_subdata.uniform_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000235, VkglTestCase_000235_1, VkglTestCase_000235_2);

#define VkglTestCase_000236_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000236_2 ".basic_subdata.uniform_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000236, VkglTestCase_000236_1, VkglTestCase_000236_2);

#define VkglTestCase_000237_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000237_2 ".basic_subdata.uniform_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000237, VkglTestCase_000237_1, VkglTestCase_000237_2);

#define VkglTestCase_000238_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000238_2 ".basic_subdata.uniform_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000238, VkglTestCase_000238_1, VkglTestCase_000238_2);

#define VkglTestCase_000239_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000239_2 ".basic_subdata.uniform_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000239, VkglTestCase_000239_1, VkglTestCase_000239_2);

#define VkglTestCase_000240_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000240_2 ".basic_subdata.uniform_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000240, VkglTestCase_000240_1, VkglTestCase_000240_2);

#define VkglTestCase_000241_1 "dEQP-GLES3.functional.buffer.write"
#define VkglTestCase_000241_2 ".basic_subdata.uniform_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000241, VkglTestCase_000241_1, VkglTestCase_000241_2);
