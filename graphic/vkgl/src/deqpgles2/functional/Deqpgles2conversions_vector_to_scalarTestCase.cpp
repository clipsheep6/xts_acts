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

#define VkglTestCase_000849_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000849_2 "ns.vector_to_scalar.vec2_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000849, VkglTestCase_000849_1, VkglTestCase_000849_2);

#define VkglTestCase_000850_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000850_2 "s.vector_to_scalar.vec2_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000850, VkglTestCase_000850_1, VkglTestCase_000850_2);

#define VkglTestCase_000851_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000851_2 "ons.vector_to_scalar.vec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000851, VkglTestCase_000851_1, VkglTestCase_000851_2);

#define VkglTestCase_000852_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000852_2 "ns.vector_to_scalar.vec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000852, VkglTestCase_000852_1, VkglTestCase_000852_2);

#define VkglTestCase_000853_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000853_2 "ns.vector_to_scalar.vec2_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000853, VkglTestCase_000853_1, VkglTestCase_000853_2);

#define VkglTestCase_000854_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000854_2 "s.vector_to_scalar.vec2_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000854, VkglTestCase_000854_1, VkglTestCase_000854_2);

#define VkglTestCase_000855_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000855_2 "ns.vector_to_scalar.vec3_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000855, VkglTestCase_000855_1, VkglTestCase_000855_2);

#define VkglTestCase_000856_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000856_2 "s.vector_to_scalar.vec3_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000856, VkglTestCase_000856_1, VkglTestCase_000856_2);

#define VkglTestCase_000857_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000857_2 "ons.vector_to_scalar.vec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000857, VkglTestCase_000857_1, VkglTestCase_000857_2);

#define VkglTestCase_000858_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000858_2 "ns.vector_to_scalar.vec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000858, VkglTestCase_000858_1, VkglTestCase_000858_2);

#define VkglTestCase_000859_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000859_2 "ns.vector_to_scalar.vec3_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000859, VkglTestCase_000859_1, VkglTestCase_000859_2);

#define VkglTestCase_000860_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000860_2 "s.vector_to_scalar.vec3_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000860, VkglTestCase_000860_1, VkglTestCase_000860_2);

#define VkglTestCase_000861_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000861_2 "ns.vector_to_scalar.vec4_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000861, VkglTestCase_000861_1, VkglTestCase_000861_2);

#define VkglTestCase_000862_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000862_2 "s.vector_to_scalar.vec4_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000862, VkglTestCase_000862_1, VkglTestCase_000862_2);

#define VkglTestCase_000863_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000863_2 "ons.vector_to_scalar.vec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000863, VkglTestCase_000863_1, VkglTestCase_000863_2);

#define VkglTestCase_000864_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000864_2 "ns.vector_to_scalar.vec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000864, VkglTestCase_000864_1, VkglTestCase_000864_2);

#define VkglTestCase_000865_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000865_2 "ns.vector_to_scalar.vec4_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000865, VkglTestCase_000865_1, VkglTestCase_000865_2);

#define VkglTestCase_000866_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000866_2 "s.vector_to_scalar.vec4_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000866, VkglTestCase_000866_1, VkglTestCase_000866_2);

#define VkglTestCase_000867_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000867_2 "s.vector_to_scalar.ivec2_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000867, VkglTestCase_000867_1, VkglTestCase_000867_2);

#define VkglTestCase_000868_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000868_2 ".vector_to_scalar.ivec2_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000868, VkglTestCase_000868_1, VkglTestCase_000868_2);

#define VkglTestCase_000869_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000869_2 "ns.vector_to_scalar.ivec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000869, VkglTestCase_000869_1, VkglTestCase_000869_2);

#define VkglTestCase_000870_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000870_2 "s.vector_to_scalar.ivec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000870, VkglTestCase_000870_1, VkglTestCase_000870_2);

#define VkglTestCase_000871_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000871_2 "ns.vector_to_scalar.ivec2_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000871, VkglTestCase_000871_1, VkglTestCase_000871_2);

#define VkglTestCase_000872_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000872_2 "s.vector_to_scalar.ivec2_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000872, VkglTestCase_000872_1, VkglTestCase_000872_2);

#define VkglTestCase_000873_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000873_2 "s.vector_to_scalar.ivec3_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000873, VkglTestCase_000873_1, VkglTestCase_000873_2);

#define VkglTestCase_000874_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000874_2 ".vector_to_scalar.ivec3_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000874, VkglTestCase_000874_1, VkglTestCase_000874_2);

#define VkglTestCase_000875_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000875_2 "ns.vector_to_scalar.ivec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000875, VkglTestCase_000875_1, VkglTestCase_000875_2);

#define VkglTestCase_000876_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000876_2 "s.vector_to_scalar.ivec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000876, VkglTestCase_000876_1, VkglTestCase_000876_2);

#define VkglTestCase_000877_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000877_2 "ns.vector_to_scalar.ivec3_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000877, VkglTestCase_000877_1, VkglTestCase_000877_2);

#define VkglTestCase_000878_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000878_2 "s.vector_to_scalar.ivec3_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000878, VkglTestCase_000878_1, VkglTestCase_000878_2);

#define VkglTestCase_000879_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000879_2 "s.vector_to_scalar.ivec4_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000879, VkglTestCase_000879_1, VkglTestCase_000879_2);

#define VkglTestCase_000880_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000880_2 ".vector_to_scalar.ivec4_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000880, VkglTestCase_000880_1, VkglTestCase_000880_2);

#define VkglTestCase_000881_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000881_2 "ns.vector_to_scalar.ivec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000881, VkglTestCase_000881_1, VkglTestCase_000881_2);

#define VkglTestCase_000882_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000882_2 "s.vector_to_scalar.ivec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000882, VkglTestCase_000882_1, VkglTestCase_000882_2);

#define VkglTestCase_000883_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000883_2 "ns.vector_to_scalar.ivec4_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000883, VkglTestCase_000883_1, VkglTestCase_000883_2);

#define VkglTestCase_000884_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000884_2 "s.vector_to_scalar.ivec4_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000884, VkglTestCase_000884_1, VkglTestCase_000884_2);

#define VkglTestCase_000885_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000885_2 "s.vector_to_scalar.bvec2_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000885, VkglTestCase_000885_1, VkglTestCase_000885_2);

#define VkglTestCase_000886_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000886_2 ".vector_to_scalar.bvec2_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000886, VkglTestCase_000886_1, VkglTestCase_000886_2);

#define VkglTestCase_000887_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000887_2 "ns.vector_to_scalar.bvec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000887, VkglTestCase_000887_1, VkglTestCase_000887_2);

#define VkglTestCase_000888_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000888_2 "s.vector_to_scalar.bvec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000888, VkglTestCase_000888_1, VkglTestCase_000888_2);

#define VkglTestCase_000889_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000889_2 "ns.vector_to_scalar.bvec2_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000889, VkglTestCase_000889_1, VkglTestCase_000889_2);

#define VkglTestCase_000890_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000890_2 "s.vector_to_scalar.bvec2_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000890, VkglTestCase_000890_1, VkglTestCase_000890_2);

#define VkglTestCase_000891_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000891_2 "s.vector_to_scalar.bvec3_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000891, VkglTestCase_000891_1, VkglTestCase_000891_2);

#define VkglTestCase_000892_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000892_2 ".vector_to_scalar.bvec3_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000892, VkglTestCase_000892_1, VkglTestCase_000892_2);

#define VkglTestCase_000893_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000893_2 "ns.vector_to_scalar.bvec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000893, VkglTestCase_000893_1, VkglTestCase_000893_2);

#define VkglTestCase_000894_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000894_2 "s.vector_to_scalar.bvec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000894, VkglTestCase_000894_1, VkglTestCase_000894_2);

#define VkglTestCase_000895_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000895_2 "ns.vector_to_scalar.bvec3_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000895, VkglTestCase_000895_1, VkglTestCase_000895_2);

#define VkglTestCase_000896_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000896_2 "s.vector_to_scalar.bvec3_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000896, VkglTestCase_000896_1, VkglTestCase_000896_2);

#define VkglTestCase_000897_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000897_2 "s.vector_to_scalar.bvec4_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000897, VkglTestCase_000897_1, VkglTestCase_000897_2);

#define VkglTestCase_000898_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000898_2 ".vector_to_scalar.bvec4_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000898, VkglTestCase_000898_1, VkglTestCase_000898_2);

#define VkglTestCase_000899_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000899_2 "ns.vector_to_scalar.bvec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000899, VkglTestCase_000899_1, VkglTestCase_000899_2);

#define VkglTestCase_000900_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000900_2 "s.vector_to_scalar.bvec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000900, VkglTestCase_000900_1, VkglTestCase_000900_2);

#define VkglTestCase_000901_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000901_2 "ns.vector_to_scalar.bvec4_to_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000901, VkglTestCase_000901_1, VkglTestCase_000901_2);

#define VkglTestCase_000902_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000902_2 "s.vector_to_scalar.bvec4_to_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000902, VkglTestCase_000902_1, VkglTestCase_000902_2);
