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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000347_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000347_2 "sor.invalid_conditionals.empty_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000347, VkglTestCase_000347_1, VkglTestCase_000347_2);

#define VkglTestCase_000348_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000348_2 "or.invalid_conditionals.empty_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000348, VkglTestCase_000348_1, VkglTestCase_000348_2);

#define VkglTestCase_000349_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000349_2 "r.invalid_conditionals.empty_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000349, VkglTestCase_000349_1, VkglTestCase_000349_2);

#define VkglTestCase_000350_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000350_2 ".invalid_conditionals.empty_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000350, VkglTestCase_000350_1, VkglTestCase_000350_2);

#define VkglTestCase_000351_1 "dEQP-GLES2.functional.shaders.preprocesso"
#define VkglTestCase_000351_2 "r.invalid_conditionals.empty_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000351, VkglTestCase_000351_1, VkglTestCase_000351_2);

#define VkglTestCase_000352_1 "dEQP-GLES2.functional.shaders.preprocessor"
#define VkglTestCase_000352_2 ".invalid_conditionals.empty_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000352, VkglTestCase_000352_1, VkglTestCase_000352_2);

#define VkglTestCase_000353_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000353_2 "invalid_conditionals.empty_if_defined_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000353, VkglTestCase_000353_1, VkglTestCase_000353_2);

#define VkglTestCase_000354_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000354_2 "nvalid_conditionals.empty_if_defined_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000354, VkglTestCase_000354_1, VkglTestCase_000354_2);

#define VkglTestCase_000355_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000355_2 "nvalid_conditionals.unterminated_if_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000355, VkglTestCase_000355_1, VkglTestCase_000355_2);

#define VkglTestCase_000356_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000356_2 "valid_conditionals.unterminated_if_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000356, VkglTestCase_000356_1, VkglTestCase_000356_2);

#define VkglTestCase_000357_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000357_2 "nvalid_conditionals.unterminated_if_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000357, VkglTestCase_000357_1, VkglTestCase_000357_2);

#define VkglTestCase_000358_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000358_2 "valid_conditionals.unterminated_if_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000358, VkglTestCase_000358_1, VkglTestCase_000358_2);

#define VkglTestCase_000359_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000359_2 "nvalid_conditionals.unterminated_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000359, VkglTestCase_000359_1, VkglTestCase_000359_2);

#define VkglTestCase_000360_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000360_2 "valid_conditionals.unterminated_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000360, VkglTestCase_000360_1, VkglTestCase_000360_2);

#define VkglTestCase_000361_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000361_2 "valid_conditionals.unterminated_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000361, VkglTestCase_000361_1, VkglTestCase_000361_2);

#define VkglTestCase_000362_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000362_2 "alid_conditionals.unterminated_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000362, VkglTestCase_000362_1, VkglTestCase_000362_2);

#define VkglTestCase_000363_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000363_2 "valid_conditionals.unterminated_else_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000363, VkglTestCase_000363_1, VkglTestCase_000363_2);

#define VkglTestCase_000364_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000364_2 "alid_conditionals.unterminated_else_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000364, VkglTestCase_000364_1, VkglTestCase_000364_2);

#define VkglTestCase_000365_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000365_2 "valid_conditionals.unterminated_else_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000365, VkglTestCase_000365_1, VkglTestCase_000365_2);

#define VkglTestCase_000366_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000366_2 "alid_conditionals.unterminated_else_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000366, VkglTestCase_000366_1, VkglTestCase_000366_2);

#define VkglTestCase_000367_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000367_2 "valid_conditionals.unterminated_elif_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000367, VkglTestCase_000367_1, VkglTestCase_000367_2);

#define VkglTestCase_000368_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000368_2 "alid_conditionals.unterminated_elif_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000368, VkglTestCase_000368_1, VkglTestCase_000368_2);

#define VkglTestCase_000369_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000369_2 "valid_conditionals.unterminated_elif_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000369, VkglTestCase_000369_1, VkglTestCase_000369_2);

#define VkglTestCase_000370_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000370_2 "alid_conditionals.unterminated_elif_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000370, VkglTestCase_000370_1, VkglTestCase_000370_2);

#define VkglTestCase_000371_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000371_2 "valid_conditionals.unterminated_elif_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000371, VkglTestCase_000371_1, VkglTestCase_000371_2);

#define VkglTestCase_000372_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000372_2 "alid_conditionals.unterminated_elif_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000372, VkglTestCase_000372_1, VkglTestCase_000372_2);

#define VkglTestCase_000373_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000373_2 "invalid_conditionals.elif_after_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000373, VkglTestCase_000373_1, VkglTestCase_000373_2);

#define VkglTestCase_000374_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000374_2 "nvalid_conditionals.elif_after_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000374, VkglTestCase_000374_1, VkglTestCase_000374_2);

#define VkglTestCase_000375_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000375_2 "invalid_conditionals.else_without_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000375, VkglTestCase_000375_1, VkglTestCase_000375_2);

#define VkglTestCase_000376_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000376_2 "nvalid_conditionals.else_without_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000376, VkglTestCase_000376_1, VkglTestCase_000376_2);

#define VkglTestCase_000377_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000377_2 "invalid_conditionals.elif_without_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000377, VkglTestCase_000377_1, VkglTestCase_000377_2);

#define VkglTestCase_000378_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000378_2 "nvalid_conditionals.elif_without_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000378, VkglTestCase_000378_1, VkglTestCase_000378_2);

#define VkglTestCase_000379_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000379_2 "invalid_conditionals.endif_without_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000379, VkglTestCase_000379_1, VkglTestCase_000379_2);

#define VkglTestCase_000380_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000380_2 "nvalid_conditionals.endif_without_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000380, VkglTestCase_000380_1, VkglTestCase_000380_2);

#define VkglTestCase_000381_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000381_2 "invalid_conditionals.else_after_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000381, VkglTestCase_000381_1, VkglTestCase_000381_2);

#define VkglTestCase_000382_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000382_2 "nvalid_conditionals.else_after_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000382, VkglTestCase_000382_1, VkglTestCase_000382_2);

#define VkglTestCase_000383_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000383_2 "alid_conditionals.nested_elif_without_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000383, VkglTestCase_000383_1, VkglTestCase_000383_2);

#define VkglTestCase_000384_1 "dEQP-GLES2.functional.shaders.preprocessor.inva"
#define VkglTestCase_000384_2 "lid_conditionals.nested_elif_without_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000384, VkglTestCase_000384_1, VkglTestCase_000384_2);

#define VkglTestCase_000385_1 "dEQP-GLES2.functional.shaders.preproces"
#define VkglTestCase_000385_2 "sor.invalid_conditionals.if_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000385, VkglTestCase_000385_1, VkglTestCase_000385_2);

#define VkglTestCase_000386_1 "dEQP-GLES2.functional.shaders.preprocess"
#define VkglTestCase_000386_2 "or.invalid_conditionals.if_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000386, VkglTestCase_000386_1, VkglTestCase_000386_2);

#define VkglTestCase_000387_1 "dEQP-GLES2.functional.shaders.preprocessor."
#define VkglTestCase_000387_2 "invalid_conditionals.tokens_after_if_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000387, VkglTestCase_000387_1, VkglTestCase_000387_2);

#define VkglTestCase_000388_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000388_2 "nvalid_conditionals.tokens_after_if_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000388, VkglTestCase_000388_1, VkglTestCase_000388_2);

#define VkglTestCase_000389_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000389_2 "nvalid_conditionals.tokens_after_elif_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000389, VkglTestCase_000389_1, VkglTestCase_000389_2);

#define VkglTestCase_000390_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000390_2 "valid_conditionals.tokens_after_elif_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000390, VkglTestCase_000390_1, VkglTestCase_000390_2);

#define VkglTestCase_000391_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000391_2 "nvalid_conditionals.tokens_after_else_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000391, VkglTestCase_000391_1, VkglTestCase_000391_2);

#define VkglTestCase_000392_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000392_2 "valid_conditionals.tokens_after_else_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000392, VkglTestCase_000392_1, VkglTestCase_000392_2);

#define VkglTestCase_000393_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000393_2 "nvalid_conditionals.tokens_after_endif_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000393, VkglTestCase_000393_1, VkglTestCase_000393_2);

#define VkglTestCase_000394_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000394_2 "valid_conditionals.tokens_after_endif_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000394, VkglTestCase_000394_1, VkglTestCase_000394_2);

#define VkglTestCase_000395_1 "dEQP-GLES2.functional.shaders.preprocessor.i"
#define VkglTestCase_000395_2 "nvalid_conditionals.tokens_after_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000395, VkglTestCase_000395_1, VkglTestCase_000395_2);

#define VkglTestCase_000396_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000396_2 "valid_conditionals.tokens_after_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000396, VkglTestCase_000396_1, VkglTestCase_000396_2);

#define VkglTestCase_000397_1 "dEQP-GLES2.functional.shaders.preprocessor.in"
#define VkglTestCase_000397_2 "valid_conditionals.tokens_after_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000397, VkglTestCase_000397_1, VkglTestCase_000397_2);

#define VkglTestCase_000398_1 "dEQP-GLES2.functional.shaders.preprocessor.inv"
#define VkglTestCase_000398_2 "alid_conditionals.tokens_after_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000398, VkglTestCase_000398_1, VkglTestCase_000398_2);
