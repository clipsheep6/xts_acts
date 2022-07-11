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

#define VkglTestCase_019349_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019349_2 "_coverage.get_error.buffer.bind_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019349, VkglTestCase_019349_1, VkglTestCase_019349_2);

#define VkglTestCase_019350_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019350_2 "overage.get_error.buffer.delete_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019350, VkglTestCase_019350_1, VkglTestCase_019350_2);

#define VkglTestCase_019351_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019351_2 "_coverage.get_error.buffer.gen_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019351, VkglTestCase_019351_1, VkglTestCase_019351_2);

#define VkglTestCase_019352_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019352_2 "_coverage.get_error.buffer.buffer_data"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019352, VkglTestCase_019352_1, VkglTestCase_019352_2);

#define VkglTestCase_019353_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019353_2 "overage.get_error.buffer.buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019353, VkglTestCase_019353_1, VkglTestCase_019353_2);

#define VkglTestCase_019354_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019354_2 "e.get_error.buffer.buffer_sub_data_size_offset"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019354, VkglTestCase_019354_1, VkglTestCase_019354_2);

#define VkglTestCase_019355_1 "dEQP-GLES31.functional.debug.negat"
#define VkglTestCase_019355_2 "ive_coverage.get_error.buffer.clear"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019355, VkglTestCase_019355_1, VkglTestCase_019355_2);

#define VkglTestCase_019356_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019356_2 "_coverage.get_error.buffer.read_pixels"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019356, VkglTestCase_019356_1, VkglTestCase_019356_2);

#define VkglTestCase_019357_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019357_2 "coverage.get_error.buffer.readn_pixels"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019357, VkglTestCase_019357_1, VkglTestCase_019357_2);

#define VkglTestCase_019358_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019358_2 "e.get_error.buffer.read_pixels_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019358, VkglTestCase_019358_1, VkglTestCase_019358_2);

#define VkglTestCase_019359_1 "dEQP-GLES31.functional.debug.negative_coverage."
#define VkglTestCase_019359_2 "get_error.buffer.read_pixels_fbo_format_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019359, VkglTestCase_019359_1, VkglTestCase_019359_2);

#define VkglTestCase_019360_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019360_2 "verage.get_error.buffer.bind_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019360, VkglTestCase_019360_1, VkglTestCase_019360_2);

#define VkglTestCase_019361_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019361_2 "verage.get_error.buffer.bind_buffer_base"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019361, VkglTestCase_019361_1, VkglTestCase_019361_2);

#define VkglTestCase_019362_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019362_2 "overage.get_error.buffer.clear_bufferiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019362, VkglTestCase_019362_1, VkglTestCase_019362_2);

#define VkglTestCase_019363_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019363_2 "overage.get_error.buffer.clear_bufferuiv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019363, VkglTestCase_019363_1, VkglTestCase_019363_2);

#define VkglTestCase_019364_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019364_2 "overage.get_error.buffer.clear_bufferfv"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019364, VkglTestCase_019364_1, VkglTestCase_019364_2);

#define VkglTestCase_019365_1 "dEQP-GLES31.functional.debug.negative_c"
#define VkglTestCase_019365_2 "overage.get_error.buffer.clear_bufferfi"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019365, VkglTestCase_019365_1, VkglTestCase_019365_2);

#define VkglTestCase_019366_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019366_2 "rage.get_error.buffer.copy_buffer_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019366, VkglTestCase_019366_1, VkglTestCase_019366_2);

#define VkglTestCase_019367_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019367_2 "coverage.get_error.buffer.draw_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019367, VkglTestCase_019367_1, VkglTestCase_019367_2);

#define VkglTestCase_019368_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019368_2 "ge.get_error.buffer.flush_mapped_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019368, VkglTestCase_019368_1, VkglTestCase_019368_2);

#define VkglTestCase_019369_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019369_2 "verage.get_error.buffer.map_buffer_range"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019369, VkglTestCase_019369_1, VkglTestCase_019369_2);

#define VkglTestCase_019370_1 "dEQP-GLES31.functional.debug.negative"
#define VkglTestCase_019370_2 "_coverage.get_error.buffer.read_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019370, VkglTestCase_019370_1, VkglTestCase_019370_2);

#define VkglTestCase_019371_1 "dEQP-GLES31.functional.debug.negative_"
#define VkglTestCase_019371_2 "coverage.get_error.buffer.unmap_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019371, VkglTestCase_019371_1, VkglTestCase_019371_2);

#define VkglTestCase_019372_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019372_2 "verage.get_error.buffer.bind_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019372, VkglTestCase_019372_1, VkglTestCase_019372_2);

#define VkglTestCase_019373_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019373_2 "verage.get_error.buffer.bind_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019373, VkglTestCase_019373_1, VkglTestCase_019373_2);

#define VkglTestCase_019374_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019374_2 "ge.get_error.buffer.check_framebuffer_status"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019374, VkglTestCase_019374_1, VkglTestCase_019374_2);

#define VkglTestCase_019375_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019375_2 "verage.get_error.buffer.gen_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019375, VkglTestCase_019375_1, VkglTestCase_019375_2);

#define VkglTestCase_019376_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019376_2 "verage.get_error.buffer.gen_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019376, VkglTestCase_019376_1, VkglTestCase_019376_2);

#define VkglTestCase_019377_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019377_2 "erage.get_error.buffer.delete_framebuffers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019377, VkglTestCase_019377_1, VkglTestCase_019377_2);

#define VkglTestCase_019378_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019378_2 "rage.get_error.buffer.delete_renderbuffers"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019378, VkglTestCase_019378_1, VkglTestCase_019378_2);

#define VkglTestCase_019379_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019379_2 "ge.get_error.buffer.framebuffer_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019379, VkglTestCase_019379_1, VkglTestCase_019379_2);

#define VkglTestCase_019380_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019380_2 "erage.get_error.buffer.framebuffer_texture"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019380, VkglTestCase_019380_1, VkglTestCase_019380_2);

#define VkglTestCase_019381_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019381_2 "rage.get_error.buffer.framebuffer_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019381, VkglTestCase_019381_1, VkglTestCase_019381_2);

#define VkglTestCase_019382_1 "dEQP-GLES31.functional.debug.negative_cove"
#define VkglTestCase_019382_2 "rage.get_error.buffer.renderbuffer_storage"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019382, VkglTestCase_019382_1, VkglTestCase_019382_2);

#define VkglTestCase_019383_1 "dEQP-GLES31.functional.debug.negative_co"
#define VkglTestCase_019383_2 "verage.get_error.buffer.blit_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019383, VkglTestCase_019383_1, VkglTestCase_019383_2);

#define VkglTestCase_019384_1 "dEQP-GLES31.functional.debug.negative_coverage"
#define VkglTestCase_019384_2 ".get_error.buffer.blit_framebuffer_multisample"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019384, VkglTestCase_019384_1, VkglTestCase_019384_2);

#define VkglTestCase_019385_1 "dEQP-GLES31.functional.debug.negative_covera"
#define VkglTestCase_019385_2 "ge.get_error.buffer.framebuffer_texture_layer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019385, VkglTestCase_019385_1, VkglTestCase_019385_2);

#define VkglTestCase_019386_1 "dEQP-GLES31.functional.debug.negative_cover"
#define VkglTestCase_019386_2 "age.get_error.buffer.invalidate_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019386, VkglTestCase_019386_1, VkglTestCase_019386_2);

#define VkglTestCase_019387_1 "dEQP-GLES31.functional.debug.negative_coverag"
#define VkglTestCase_019387_2 "e.get_error.buffer.invalidate_sub_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019387, VkglTestCase_019387_1, VkglTestCase_019387_2);

#define VkglTestCase_019388_1 "dEQP-GLES31.functional.debug.negative_coverage.g"
#define VkglTestCase_019388_2 "et_error.buffer.renderbuffer_storage_multisample"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019388, VkglTestCase_019388_1, VkglTestCase_019388_2);

#define VkglTestCase_019389_1 "dEQP-GLES31.functional.debug.negative_cov"
#define VkglTestCase_019389_2 "erage.get_error.buffer.copy_image_sub_data"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019389, VkglTestCase_019389_1, VkglTestCase_019389_2);
