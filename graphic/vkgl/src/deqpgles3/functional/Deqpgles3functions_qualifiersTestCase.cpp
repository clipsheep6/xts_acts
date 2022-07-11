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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004101_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004101_2 "ctions.qualifiers.in_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004101, VkglTestCase_004101_1, VkglTestCase_004101_2);

#define VkglTestCase_004102_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004102_2 "tions.qualifiers.in_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004102, VkglTestCase_004102_1, VkglTestCase_004102_2);

#define VkglTestCase_004103_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004103_2 "ctions.qualifiers.out_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004103, VkglTestCase_004103_1, VkglTestCase_004103_2);

#define VkglTestCase_004104_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004104_2 "tions.qualifiers.out_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004104, VkglTestCase_004104_1, VkglTestCase_004104_2);

#define VkglTestCase_004105_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004105_2 "tions.qualifiers.inout_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004105, VkglTestCase_004105_1, VkglTestCase_004105_2);

#define VkglTestCase_004106_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004106_2 "ions.qualifiers.inout_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004106, VkglTestCase_004106_1, VkglTestCase_004106_2);

#define VkglTestCase_004107_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004107_2 "ions.qualifiers.in_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004107, VkglTestCase_004107_1, VkglTestCase_004107_2);

#define VkglTestCase_004108_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004108_2 "ons.qualifiers.in_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004108, VkglTestCase_004108_1, VkglTestCase_004108_2);

#define VkglTestCase_004109_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004109_2 "ons.qualifiers.out_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004109, VkglTestCase_004109_1, VkglTestCase_004109_2);

#define VkglTestCase_004110_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004110_2 "ns.qualifiers.out_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004110, VkglTestCase_004110_1, VkglTestCase_004110_2);

#define VkglTestCase_004111_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004111_2 "ns.qualifiers.inout_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004111, VkglTestCase_004111_1, VkglTestCase_004111_2);

#define VkglTestCase_004112_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004112_2 "s.qualifiers.inout_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004112, VkglTestCase_004112_1, VkglTestCase_004112_2);

#define VkglTestCase_004113_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004113_2 "ons.qualifiers.in_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004113, VkglTestCase_004113_1, VkglTestCase_004113_2);

#define VkglTestCase_004114_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004114_2 "ns.qualifiers.in_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004114, VkglTestCase_004114_1, VkglTestCase_004114_2);

#define VkglTestCase_004115_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004115_2 "ons.qualifiers.out_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004115, VkglTestCase_004115_1, VkglTestCase_004115_2);

#define VkglTestCase_004116_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004116_2 "ns.qualifiers.out_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004116, VkglTestCase_004116_1, VkglTestCase_004116_2);

#define VkglTestCase_004117_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004117_2 "ns.qualifiers.inout_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004117, VkglTestCase_004117_1, VkglTestCase_004117_2);

#define VkglTestCase_004118_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004118_2 "s.qualifiers.inout_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004118, VkglTestCase_004118_1, VkglTestCase_004118_2);

#define VkglTestCase_004119_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004119_2 "tions.qualifiers.const_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004119, VkglTestCase_004119_1, VkglTestCase_004119_2);

#define VkglTestCase_004120_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004120_2 "ions.qualifiers.const_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004120, VkglTestCase_004120_1, VkglTestCase_004120_2);

#define VkglTestCase_004121_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004121_2 "ons.qualifiers.const_in_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004121, VkglTestCase_004121_1, VkglTestCase_004121_2);

#define VkglTestCase_004122_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004122_2 "ns.qualifiers.const_in_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004122, VkglTestCase_004122_1, VkglTestCase_004122_2);

#define VkglTestCase_004123_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004123_2 "nctions.qualifiers.in_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004123, VkglTestCase_004123_1, VkglTestCase_004123_2);

#define VkglTestCase_004124_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004124_2 "ctions.qualifiers.in_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004124, VkglTestCase_004124_1, VkglTestCase_004124_2);

#define VkglTestCase_004125_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004125_2 "nctions.qualifiers.out_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004125, VkglTestCase_004125_1, VkglTestCase_004125_2);

#define VkglTestCase_004126_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004126_2 "ctions.qualifiers.out_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004126, VkglTestCase_004126_1, VkglTestCase_004126_2);

#define VkglTestCase_004127_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004127_2 "ctions.qualifiers.inout_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004127, VkglTestCase_004127_1, VkglTestCase_004127_2);

#define VkglTestCase_004128_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004128_2 "tions.qualifiers.inout_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004128, VkglTestCase_004128_1, VkglTestCase_004128_2);

#define VkglTestCase_004129_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004129_2 "tions.qualifiers.in_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004129, VkglTestCase_004129_1, VkglTestCase_004129_2);

#define VkglTestCase_004130_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004130_2 "ions.qualifiers.in_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004130, VkglTestCase_004130_1, VkglTestCase_004130_2);

#define VkglTestCase_004131_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004131_2 "ions.qualifiers.out_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004131, VkglTestCase_004131_1, VkglTestCase_004131_2);

#define VkglTestCase_004132_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004132_2 "ons.qualifiers.out_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004132, VkglTestCase_004132_1, VkglTestCase_004132_2);

#define VkglTestCase_004133_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004133_2 "ons.qualifiers.inout_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004133, VkglTestCase_004133_1, VkglTestCase_004133_2);

#define VkglTestCase_004134_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004134_2 "ns.qualifiers.inout_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004134, VkglTestCase_004134_1, VkglTestCase_004134_2);

#define VkglTestCase_004135_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004135_2 "ions.qualifiers.in_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004135, VkglTestCase_004135_1, VkglTestCase_004135_2);

#define VkglTestCase_004136_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004136_2 "ons.qualifiers.in_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004136, VkglTestCase_004136_1, VkglTestCase_004136_2);

#define VkglTestCase_004137_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004137_2 "ions.qualifiers.out_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004137, VkglTestCase_004137_1, VkglTestCase_004137_2);

#define VkglTestCase_004138_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004138_2 "ons.qualifiers.out_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004138, VkglTestCase_004138_1, VkglTestCase_004138_2);

#define VkglTestCase_004139_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004139_2 "ons.qualifiers.inout_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004139, VkglTestCase_004139_1, VkglTestCase_004139_2);

#define VkglTestCase_004140_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004140_2 "ns.qualifiers.inout_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004140, VkglTestCase_004140_1, VkglTestCase_004140_2);

#define VkglTestCase_004141_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004141_2 "ctions.qualifiers.const_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004141, VkglTestCase_004141_1, VkglTestCase_004141_2);

#define VkglTestCase_004142_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004142_2 "tions.qualifiers.const_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004142, VkglTestCase_004142_1, VkglTestCase_004142_2);

#define VkglTestCase_004143_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004143_2 "ions.qualifiers.const_in_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004143, VkglTestCase_004143_1, VkglTestCase_004143_2);

#define VkglTestCase_004144_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004144_2 "ons.qualifiers.const_in_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004144, VkglTestCase_004144_1, VkglTestCase_004144_2);

#define VkglTestCase_004145_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004145_2 "nctions.qualifiers.in_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004145, VkglTestCase_004145_1, VkglTestCase_004145_2);

#define VkglTestCase_004146_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004146_2 "ctions.qualifiers.in_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004146, VkglTestCase_004146_1, VkglTestCase_004146_2);

#define VkglTestCase_004147_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004147_2 "ctions.qualifiers.out_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004147, VkglTestCase_004147_1, VkglTestCase_004147_2);

#define VkglTestCase_004148_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004148_2 "tions.qualifiers.out_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004148, VkglTestCase_004148_1, VkglTestCase_004148_2);

#define VkglTestCase_004149_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004149_2 "tions.qualifiers.inout_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004149, VkglTestCase_004149_1, VkglTestCase_004149_2);

#define VkglTestCase_004150_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004150_2 "ions.qualifiers.inout_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004150, VkglTestCase_004150_1, VkglTestCase_004150_2);

#define VkglTestCase_004151_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004151_2 "tions.qualifiers.const_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004151, VkglTestCase_004151_1, VkglTestCase_004151_2);

#define VkglTestCase_004152_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004152_2 "ions.qualifiers.const_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004152, VkglTestCase_004152_1, VkglTestCase_004152_2);
