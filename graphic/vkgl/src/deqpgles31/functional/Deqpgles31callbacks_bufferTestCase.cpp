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

#define VkglTestCase_018353_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018353_2 "_coverage.callbacks.buffer.bind_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018353, VkglTestCase_018353_1, VkglTestCase_018353_2);

#define VkglTestCase_018354_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018354_2 "overage.callbacks.buffer.delete_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018354, VkglTestCase_018354_1, VkglTestCase_018354_2);

#define VkglTestCase_018355_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018355_2 "_coverage.callbacks.buffer.gen_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018355, VkglTestCase_018355_1, VkglTestCase_018355_2);

#define VkglTestCase_018356_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018356_2 "_coverage.callbacks.buffer.buffer_data"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018356, VkglTestCase_018356_1, VkglTestCase_018356_2);

#define VkglTestCase_018357_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018357_2 "overage.callbacks.buffer.buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018357, VkglTestCase_018357_1, VkglTestCase_018357_2);

#define VkglTestCase_018358_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018358_2 "e.callbacks.buffer.buffer_sub_data_size_offset"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018358, VkglTestCase_018358_1, VkglTestCase_018358_2);

#define VkglTestCase_018359_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_018359_2 "ive_coverage.callbacks.buffer.clear"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018359, VkglTestCase_018359_1, VkglTestCase_018359_2);

#define VkglTestCase_018360_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018360_2 "_coverage.callbacks.buffer.read_pixels"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018360, VkglTestCase_018360_1, VkglTestCase_018360_2);

#define VkglTestCase_018361_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018361_2 "coverage.callbacks.buffer.readn_pixels"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018361, VkglTestCase_018361_1, VkglTestCase_018361_2);

#define VkglTestCase_018362_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018362_2 "e.callbacks.buffer.read_pixels_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018362, VkglTestCase_018362_1, VkglTestCase_018362_2);

#define VkglTestCase_018363_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_018363_2 "callbacks.buffer.read_pixels_fbo_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018363, VkglTestCase_018363_1, VkglTestCase_018363_2);

#define VkglTestCase_018364_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018364_2 "verage.callbacks.buffer.bind_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018364, VkglTestCase_018364_1, VkglTestCase_018364_2);

#define VkglTestCase_018365_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018365_2 "verage.callbacks.buffer.bind_buffer_base"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018365, VkglTestCase_018365_1, VkglTestCase_018365_2);

#define VkglTestCase_018366_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018366_2 "overage.callbacks.buffer.clear_bufferiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018366, VkglTestCase_018366_1, VkglTestCase_018366_2);

#define VkglTestCase_018367_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018367_2 "overage.callbacks.buffer.clear_bufferuiv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018367, VkglTestCase_018367_1, VkglTestCase_018367_2);

#define VkglTestCase_018368_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018368_2 "overage.callbacks.buffer.clear_bufferfv"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018368, VkglTestCase_018368_1, VkglTestCase_018368_2);

#define VkglTestCase_018369_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_018369_2 "overage.callbacks.buffer.clear_bufferfi"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018369, VkglTestCase_018369_1, VkglTestCase_018369_2);

#define VkglTestCase_018370_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018370_2 "rage.callbacks.buffer.copy_buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018370, VkglTestCase_018370_1, VkglTestCase_018370_2);

#define VkglTestCase_018371_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018371_2 "coverage.callbacks.buffer.draw_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018371, VkglTestCase_018371_1, VkglTestCase_018371_2);

#define VkglTestCase_018372_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018372_2 "ge.callbacks.buffer.flush_mapped_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018372, VkglTestCase_018372_1, VkglTestCase_018372_2);

#define VkglTestCase_018373_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018373_2 "verage.callbacks.buffer.map_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018373, VkglTestCase_018373_1, VkglTestCase_018373_2);

#define VkglTestCase_018374_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_018374_2 "_coverage.callbacks.buffer.read_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018374, VkglTestCase_018374_1, VkglTestCase_018374_2);

#define VkglTestCase_018375_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_018375_2 "coverage.callbacks.buffer.unmap_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018375, VkglTestCase_018375_1, VkglTestCase_018375_2);

#define VkglTestCase_018376_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018376_2 "verage.callbacks.buffer.bind_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018376, VkglTestCase_018376_1, VkglTestCase_018376_2);

#define VkglTestCase_018377_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018377_2 "verage.callbacks.buffer.bind_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018377, VkglTestCase_018377_1, VkglTestCase_018377_2);

#define VkglTestCase_018378_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018378_2 "ge.callbacks.buffer.check_framebuffer_status"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018378, VkglTestCase_018378_1, VkglTestCase_018378_2);

#define VkglTestCase_018379_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018379_2 "verage.callbacks.buffer.gen_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018379, VkglTestCase_018379_1, VkglTestCase_018379_2);

#define VkglTestCase_018380_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018380_2 "verage.callbacks.buffer.gen_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018380, VkglTestCase_018380_1, VkglTestCase_018380_2);

#define VkglTestCase_018381_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018381_2 "erage.callbacks.buffer.delete_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018381, VkglTestCase_018381_1, VkglTestCase_018381_2);

#define VkglTestCase_018382_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018382_2 "rage.callbacks.buffer.delete_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018382, VkglTestCase_018382_1, VkglTestCase_018382_2);

#define VkglTestCase_018383_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018383_2 "ge.callbacks.buffer.framebuffer_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018383, VkglTestCase_018383_1, VkglTestCase_018383_2);

#define VkglTestCase_018384_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018384_2 "erage.callbacks.buffer.framebuffer_texture"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018384, VkglTestCase_018384_1, VkglTestCase_018384_2);

#define VkglTestCase_018385_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018385_2 "rage.callbacks.buffer.framebuffer_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018385, VkglTestCase_018385_1, VkglTestCase_018385_2);

#define VkglTestCase_018386_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_018386_2 "rage.callbacks.buffer.renderbuffer_storage"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018386, VkglTestCase_018386_1, VkglTestCase_018386_2);

#define VkglTestCase_018387_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_018387_2 "verage.callbacks.buffer.blit_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018387, VkglTestCase_018387_1, VkglTestCase_018387_2);

#define VkglTestCase_018388_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_018388_2 ".callbacks.buffer.blit_framebuffer_multisample"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018388, VkglTestCase_018388_1, VkglTestCase_018388_2);

#define VkglTestCase_018389_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_018389_2 "ge.callbacks.buffer.framebuffer_texture_layer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018389, VkglTestCase_018389_1, VkglTestCase_018389_2);

#define VkglTestCase_018390_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_018390_2 "age.callbacks.buffer.invalidate_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018390, VkglTestCase_018390_1, VkglTestCase_018390_2);

#define VkglTestCase_018391_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_018391_2 "e.callbacks.buffer.invalidate_sub_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018391, VkglTestCase_018391_1, VkglTestCase_018391_2);

#define VkglTestCase_018392_1 "dEQP-GLES31.functional.debug.negative_coverage.c"
#define VkglTestCase_018392_2 "allbacks.buffer.renderbuffer_storage_multisample"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018392, VkglTestCase_018392_1, VkglTestCase_018392_2);

#define VkglTestCase_018393_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_018393_2 "erage.callbacks.buffer.copy_image_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018393, VkglTestCase_018393_1, VkglTestCase_018393_2);
