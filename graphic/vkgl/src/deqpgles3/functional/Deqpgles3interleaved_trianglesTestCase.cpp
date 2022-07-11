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
#include "../ActsDeqpgles30041TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_040863_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040863_2 "asic_types.interleaved.triangles.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040863, VkglTestCase_040863_1, VkglTestCase_040863_2);

#define VkglTestCase_040864_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040864_2 "ic_types.interleaved.triangles.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040864, VkglTestCase_040864_1, VkglTestCase_040864_2);

#define VkglTestCase_040865_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040865_2 "sic_types.interleaved.triangles.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040865, VkglTestCase_040865_1, VkglTestCase_040865_2);

#define VkglTestCase_040866_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040866_2 "asic_types.interleaved.triangles.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040866, VkglTestCase_040866_1, VkglTestCase_040866_2);

#define VkglTestCase_040867_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040867_2 "sic_types.interleaved.triangles.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040867, VkglTestCase_040867_1, VkglTestCase_040867_2);

#define VkglTestCase_040868_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040868_2 "asic_types.interleaved.triangles.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040868, VkglTestCase_040868_1, VkglTestCase_040868_2);

#define VkglTestCase_040869_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040869_2 "asic_types.interleaved.triangles.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040869, VkglTestCase_040869_1, VkglTestCase_040869_2);

#define VkglTestCase_040870_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040870_2 "sic_types.interleaved.triangles.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040870, VkglTestCase_040870_1, VkglTestCase_040870_2);

#define VkglTestCase_040871_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040871_2 "asic_types.interleaved.triangles.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040871, VkglTestCase_040871_1, VkglTestCase_040871_2);

#define VkglTestCase_040872_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040872_2 "asic_types.interleaved.triangles.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040872, VkglTestCase_040872_1, VkglTestCase_040872_2);

#define VkglTestCase_040873_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040873_2 "sic_types.interleaved.triangles.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040873, VkglTestCase_040873_1, VkglTestCase_040873_2);

#define VkglTestCase_040874_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040874_2 "asic_types.interleaved.triangles.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040874, VkglTestCase_040874_1, VkglTestCase_040874_2);

#define VkglTestCase_040875_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040875_2 "asic_types.interleaved.triangles.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040875, VkglTestCase_040875_1, VkglTestCase_040875_2);

#define VkglTestCase_040876_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040876_2 "sic_types.interleaved.triangles.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040876, VkglTestCase_040876_1, VkglTestCase_040876_2);

#define VkglTestCase_040877_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040877_2 "asic_types.interleaved.triangles.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040877, VkglTestCase_040877_1, VkglTestCase_040877_2);

#define VkglTestCase_040878_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040878_2 "sic_types.interleaved.triangles.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040878, VkglTestCase_040878_1, VkglTestCase_040878_2);

#define VkglTestCase_040879_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040879_2 "ic_types.interleaved.triangles.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040879, VkglTestCase_040879_1, VkglTestCase_040879_2);

#define VkglTestCase_040880_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040880_2 "sic_types.interleaved.triangles.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040880, VkglTestCase_040880_1, VkglTestCase_040880_2);

#define VkglTestCase_040881_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040881_2 "sic_types.interleaved.triangles.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040881, VkglTestCase_040881_1, VkglTestCase_040881_2);

#define VkglTestCase_040882_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040882_2 "ic_types.interleaved.triangles.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040882, VkglTestCase_040882_1, VkglTestCase_040882_2);

#define VkglTestCase_040883_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040883_2 "sic_types.interleaved.triangles.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040883, VkglTestCase_040883_1, VkglTestCase_040883_2);

#define VkglTestCase_040884_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040884_2 "sic_types.interleaved.triangles.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040884, VkglTestCase_040884_1, VkglTestCase_040884_2);

#define VkglTestCase_040885_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040885_2 "ic_types.interleaved.triangles.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040885, VkglTestCase_040885_1, VkglTestCase_040885_2);

#define VkglTestCase_040886_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040886_2 "sic_types.interleaved.triangles.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040886, VkglTestCase_040886_1, VkglTestCase_040886_2);

#define VkglTestCase_040887_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040887_2 "asic_types.interleaved.triangles.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040887, VkglTestCase_040887_1, VkglTestCase_040887_2);

#define VkglTestCase_040888_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040888_2 "sic_types.interleaved.triangles.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040888, VkglTestCase_040888_1, VkglTestCase_040888_2);

#define VkglTestCase_040889_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040889_2 "asic_types.interleaved.triangles.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040889, VkglTestCase_040889_1, VkglTestCase_040889_2);

#define VkglTestCase_040890_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040890_2 "sic_types.interleaved.triangles.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040890, VkglTestCase_040890_1, VkglTestCase_040890_2);

#define VkglTestCase_040891_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040891_2 "ic_types.interleaved.triangles.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040891, VkglTestCase_040891_1, VkglTestCase_040891_2);

#define VkglTestCase_040892_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040892_2 "sic_types.interleaved.triangles.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040892, VkglTestCase_040892_1, VkglTestCase_040892_2);

#define VkglTestCase_040893_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040893_2 "sic_types.interleaved.triangles.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040893, VkglTestCase_040893_1, VkglTestCase_040893_2);

#define VkglTestCase_040894_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040894_2 "ic_types.interleaved.triangles.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040894, VkglTestCase_040894_1, VkglTestCase_040894_2);

#define VkglTestCase_040895_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040895_2 "sic_types.interleaved.triangles.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040895, VkglTestCase_040895_1, VkglTestCase_040895_2);

#define VkglTestCase_040896_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040896_2 "sic_types.interleaved.triangles.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040896, VkglTestCase_040896_1, VkglTestCase_040896_2);

#define VkglTestCase_040897_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040897_2 "ic_types.interleaved.triangles.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040897, VkglTestCase_040897_1, VkglTestCase_040897_2);

#define VkglTestCase_040898_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040898_2 "sic_types.interleaved.triangles.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040898, VkglTestCase_040898_1, VkglTestCase_040898_2);

#define VkglTestCase_040899_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040899_2 "asic_types.interleaved.triangles.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040899, VkglTestCase_040899_1, VkglTestCase_040899_2);

#define VkglTestCase_040900_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040900_2 "sic_types.interleaved.triangles.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040900, VkglTestCase_040900_1, VkglTestCase_040900_2);

#define VkglTestCase_040901_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040901_2 "asic_types.interleaved.triangles.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040901, VkglTestCase_040901_1, VkglTestCase_040901_2);

#define VkglTestCase_040902_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040902_2 "basic_types.interleaved.triangles.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040902, VkglTestCase_040902_1, VkglTestCase_040902_2);

#define VkglTestCase_040903_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040903_2 "sic_types.interleaved.triangles.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040903, VkglTestCase_040903_1, VkglTestCase_040903_2);

#define VkglTestCase_040904_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040904_2 "asic_types.interleaved.triangles.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040904, VkglTestCase_040904_1, VkglTestCase_040904_2);

#define VkglTestCase_040905_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040905_2 "asic_types.interleaved.triangles.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040905, VkglTestCase_040905_1, VkglTestCase_040905_2);

#define VkglTestCase_040906_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040906_2 "ic_types.interleaved.triangles.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040906, VkglTestCase_040906_1, VkglTestCase_040906_2);

#define VkglTestCase_040907_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040907_2 "sic_types.interleaved.triangles.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040907, VkglTestCase_040907_1, VkglTestCase_040907_2);

#define VkglTestCase_040908_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040908_2 "asic_types.interleaved.triangles.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040908, VkglTestCase_040908_1, VkglTestCase_040908_2);

#define VkglTestCase_040909_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040909_2 "ic_types.interleaved.triangles.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040909, VkglTestCase_040909_1, VkglTestCase_040909_2);

#define VkglTestCase_040910_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040910_2 "sic_types.interleaved.triangles.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040910, VkglTestCase_040910_1, VkglTestCase_040910_2);

#define VkglTestCase_040911_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040911_2 "asic_types.interleaved.triangles.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040911, VkglTestCase_040911_1, VkglTestCase_040911_2);

#define VkglTestCase_040912_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040912_2 "ic_types.interleaved.triangles.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040912, VkglTestCase_040912_1, VkglTestCase_040912_2);

#define VkglTestCase_040913_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040913_2 "sic_types.interleaved.triangles.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040913, VkglTestCase_040913_1, VkglTestCase_040913_2);

#define VkglTestCase_040914_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040914_2 "asic_types.interleaved.triangles.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040914, VkglTestCase_040914_1, VkglTestCase_040914_2);

#define VkglTestCase_040915_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040915_2 "sic_types.interleaved.triangles.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040915, VkglTestCase_040915_1, VkglTestCase_040915_2);

#define VkglTestCase_040916_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040916_2 "asic_types.interleaved.triangles.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040916, VkglTestCase_040916_1, VkglTestCase_040916_2);

#define VkglTestCase_040917_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040917_2 "asic_types.interleaved.triangles.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040917, VkglTestCase_040917_1, VkglTestCase_040917_2);

#define VkglTestCase_040918_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040918_2 "ic_types.interleaved.triangles.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040918, VkglTestCase_040918_1, VkglTestCase_040918_2);

#define VkglTestCase_040919_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040919_2 "sic_types.interleaved.triangles.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040919, VkglTestCase_040919_1, VkglTestCase_040919_2);

#define VkglTestCase_040920_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040920_2 "asic_types.interleaved.triangles.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040920, VkglTestCase_040920_1, VkglTestCase_040920_2);

#define VkglTestCase_040921_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040921_2 "ic_types.interleaved.triangles.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040921, VkglTestCase_040921_1, VkglTestCase_040921_2);

#define VkglTestCase_040922_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040922_2 "sic_types.interleaved.triangles.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040922, VkglTestCase_040922_1, VkglTestCase_040922_2);

#define VkglTestCase_040923_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040923_2 "asic_types.interleaved.triangles.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040923, VkglTestCase_040923_1, VkglTestCase_040923_2);

#define VkglTestCase_040924_1 "dEQP-GLES3.functional.transform_feedback.bas"
#define VkglTestCase_040924_2 "ic_types.interleaved.triangles.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040924, VkglTestCase_040924_1, VkglTestCase_040924_2);

#define VkglTestCase_040925_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040925_2 "sic_types.interleaved.triangles.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040925, VkglTestCase_040925_1, VkglTestCase_040925_2);

#define VkglTestCase_041241_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041241_2 "k.array.interleaved.triangles.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041241, VkglTestCase_041241_1, VkglTestCase_041241_2);

#define VkglTestCase_041242_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041242_2 "array.interleaved.triangles.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041242, VkglTestCase_041242_1, VkglTestCase_041242_2);

#define VkglTestCase_041243_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041243_2 ".array.interleaved.triangles.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041243, VkglTestCase_041243_1, VkglTestCase_041243_2);

#define VkglTestCase_041244_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041244_2 "k.array.interleaved.triangles.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041244, VkglTestCase_041244_1, VkglTestCase_041244_2);

#define VkglTestCase_041245_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041245_2 ".array.interleaved.triangles.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041245, VkglTestCase_041245_1, VkglTestCase_041245_2);

#define VkglTestCase_041246_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041246_2 "k.array.interleaved.triangles.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041246, VkglTestCase_041246_1, VkglTestCase_041246_2);

#define VkglTestCase_041247_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041247_2 "k.array.interleaved.triangles.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041247, VkglTestCase_041247_1, VkglTestCase_041247_2);

#define VkglTestCase_041248_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041248_2 ".array.interleaved.triangles.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041248, VkglTestCase_041248_1, VkglTestCase_041248_2);

#define VkglTestCase_041249_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041249_2 "k.array.interleaved.triangles.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041249, VkglTestCase_041249_1, VkglTestCase_041249_2);

#define VkglTestCase_041250_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041250_2 "k.array.interleaved.triangles.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041250, VkglTestCase_041250_1, VkglTestCase_041250_2);

#define VkglTestCase_041251_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041251_2 ".array.interleaved.triangles.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041251, VkglTestCase_041251_1, VkglTestCase_041251_2);

#define VkglTestCase_041252_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041252_2 "k.array.interleaved.triangles.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041252, VkglTestCase_041252_1, VkglTestCase_041252_2);

#define VkglTestCase_041253_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041253_2 "k.array.interleaved.triangles.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041253, VkglTestCase_041253_1, VkglTestCase_041253_2);

#define VkglTestCase_041254_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041254_2 ".array.interleaved.triangles.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041254, VkglTestCase_041254_1, VkglTestCase_041254_2);

#define VkglTestCase_041255_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041255_2 "k.array.interleaved.triangles.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041255, VkglTestCase_041255_1, VkglTestCase_041255_2);

#define VkglTestCase_041256_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041256_2 ".array.interleaved.triangles.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041256, VkglTestCase_041256_1, VkglTestCase_041256_2);

#define VkglTestCase_041257_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041257_2 "array.interleaved.triangles.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041257, VkglTestCase_041257_1, VkglTestCase_041257_2);

#define VkglTestCase_041258_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041258_2 ".array.interleaved.triangles.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041258, VkglTestCase_041258_1, VkglTestCase_041258_2);

#define VkglTestCase_041259_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041259_2 ".array.interleaved.triangles.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041259, VkglTestCase_041259_1, VkglTestCase_041259_2);

#define VkglTestCase_041260_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041260_2 "array.interleaved.triangles.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041260, VkglTestCase_041260_1, VkglTestCase_041260_2);

#define VkglTestCase_041261_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041261_2 ".array.interleaved.triangles.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041261, VkglTestCase_041261_1, VkglTestCase_041261_2);

#define VkglTestCase_041262_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041262_2 ".array.interleaved.triangles.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041262, VkglTestCase_041262_1, VkglTestCase_041262_2);

#define VkglTestCase_041263_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041263_2 "array.interleaved.triangles.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041263, VkglTestCase_041263_1, VkglTestCase_041263_2);

#define VkglTestCase_041264_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041264_2 ".array.interleaved.triangles.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041264, VkglTestCase_041264_1, VkglTestCase_041264_2);

#define VkglTestCase_041265_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041265_2 "k.array.interleaved.triangles.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041265, VkglTestCase_041265_1, VkglTestCase_041265_2);

#define VkglTestCase_041266_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041266_2 ".array.interleaved.triangles.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041266, VkglTestCase_041266_1, VkglTestCase_041266_2);

#define VkglTestCase_041267_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041267_2 "k.array.interleaved.triangles.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041267, VkglTestCase_041267_1, VkglTestCase_041267_2);

#define VkglTestCase_041268_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041268_2 ".array.interleaved.triangles.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041268, VkglTestCase_041268_1, VkglTestCase_041268_2);

#define VkglTestCase_041269_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041269_2 "array.interleaved.triangles.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041269, VkglTestCase_041269_1, VkglTestCase_041269_2);

#define VkglTestCase_041270_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041270_2 ".array.interleaved.triangles.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041270, VkglTestCase_041270_1, VkglTestCase_041270_2);

#define VkglTestCase_041271_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041271_2 ".array.interleaved.triangles.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041271, VkglTestCase_041271_1, VkglTestCase_041271_2);

#define VkglTestCase_041272_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041272_2 "array.interleaved.triangles.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041272, VkglTestCase_041272_1, VkglTestCase_041272_2);

#define VkglTestCase_041273_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041273_2 ".array.interleaved.triangles.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041273, VkglTestCase_041273_1, VkglTestCase_041273_2);

#define VkglTestCase_041274_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041274_2 ".array.interleaved.triangles.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041274, VkglTestCase_041274_1, VkglTestCase_041274_2);

#define VkglTestCase_041275_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041275_2 "array.interleaved.triangles.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041275, VkglTestCase_041275_1, VkglTestCase_041275_2);

#define VkglTestCase_041276_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041276_2 ".array.interleaved.triangles.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041276, VkglTestCase_041276_1, VkglTestCase_041276_2);

#define VkglTestCase_041277_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041277_2 "k.array.interleaved.triangles.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041277, VkglTestCase_041277_1, VkglTestCase_041277_2);

#define VkglTestCase_041278_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041278_2 ".array.interleaved.triangles.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041278, VkglTestCase_041278_1, VkglTestCase_041278_2);

#define VkglTestCase_041279_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041279_2 "k.array.interleaved.triangles.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041279, VkglTestCase_041279_1, VkglTestCase_041279_2);

#define VkglTestCase_041280_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041280_2 "ck.array.interleaved.triangles.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041280, VkglTestCase_041280_1, VkglTestCase_041280_2);

#define VkglTestCase_041281_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041281_2 ".array.interleaved.triangles.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041281, VkglTestCase_041281_1, VkglTestCase_041281_2);

#define VkglTestCase_041282_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041282_2 "k.array.interleaved.triangles.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041282, VkglTestCase_041282_1, VkglTestCase_041282_2);

#define VkglTestCase_041283_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041283_2 "k.array.interleaved.triangles.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041283, VkglTestCase_041283_1, VkglTestCase_041283_2);

#define VkglTestCase_041284_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041284_2 "array.interleaved.triangles.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041284, VkglTestCase_041284_1, VkglTestCase_041284_2);

#define VkglTestCase_041285_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041285_2 ".array.interleaved.triangles.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041285, VkglTestCase_041285_1, VkglTestCase_041285_2);

#define VkglTestCase_041286_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041286_2 "k.array.interleaved.triangles.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041286, VkglTestCase_041286_1, VkglTestCase_041286_2);

#define VkglTestCase_041287_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041287_2 "array.interleaved.triangles.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041287, VkglTestCase_041287_1, VkglTestCase_041287_2);

#define VkglTestCase_041288_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041288_2 ".array.interleaved.triangles.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041288, VkglTestCase_041288_1, VkglTestCase_041288_2);

#define VkglTestCase_041289_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041289_2 "k.array.interleaved.triangles.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041289, VkglTestCase_041289_1, VkglTestCase_041289_2);

#define VkglTestCase_041290_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041290_2 "array.interleaved.triangles.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041290, VkglTestCase_041290_1, VkglTestCase_041290_2);

#define VkglTestCase_041291_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041291_2 ".array.interleaved.triangles.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041291, VkglTestCase_041291_1, VkglTestCase_041291_2);

#define VkglTestCase_041292_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041292_2 "k.array.interleaved.triangles.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041292, VkglTestCase_041292_1, VkglTestCase_041292_2);

#define VkglTestCase_041293_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041293_2 ".array.interleaved.triangles.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041293, VkglTestCase_041293_1, VkglTestCase_041293_2);

#define VkglTestCase_041294_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041294_2 "k.array.interleaved.triangles.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041294, VkglTestCase_041294_1, VkglTestCase_041294_2);

#define VkglTestCase_041295_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041295_2 "k.array.interleaved.triangles.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041295, VkglTestCase_041295_1, VkglTestCase_041295_2);

#define VkglTestCase_041296_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041296_2 "array.interleaved.triangles.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041296, VkglTestCase_041296_1, VkglTestCase_041296_2);

#define VkglTestCase_041297_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041297_2 ".array.interleaved.triangles.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041297, VkglTestCase_041297_1, VkglTestCase_041297_2);

#define VkglTestCase_041298_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041298_2 "k.array.interleaved.triangles.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041298, VkglTestCase_041298_1, VkglTestCase_041298_2);

#define VkglTestCase_041299_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041299_2 "array.interleaved.triangles.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041299, VkglTestCase_041299_1, VkglTestCase_041299_2);

#define VkglTestCase_041300_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041300_2 ".array.interleaved.triangles.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041300, VkglTestCase_041300_1, VkglTestCase_041300_2);

#define VkglTestCase_041301_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041301_2 "k.array.interleaved.triangles.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041301, VkglTestCase_041301_1, VkglTestCase_041301_2);

#define VkglTestCase_041302_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041302_2 "array.interleaved.triangles.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041302, VkglTestCase_041302_1, VkglTestCase_041302_2);

#define VkglTestCase_041303_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041303_2 ".array.interleaved.triangles.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041303, VkglTestCase_041303_1, VkglTestCase_041303_2);

#define VkglTestCase_041619_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041619_2 "ray_element.interleaved.triangles.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041619, VkglTestCase_041619_1, VkglTestCase_041619_2);

#define VkglTestCase_041620_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041620_2 "y_element.interleaved.triangles.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041620, VkglTestCase_041620_1, VkglTestCase_041620_2);

#define VkglTestCase_041621_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041621_2 "ay_element.interleaved.triangles.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041621, VkglTestCase_041621_1, VkglTestCase_041621_2);

#define VkglTestCase_041622_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041622_2 "ray_element.interleaved.triangles.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041622, VkglTestCase_041622_1, VkglTestCase_041622_2);

#define VkglTestCase_041623_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041623_2 "ay_element.interleaved.triangles.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041623, VkglTestCase_041623_1, VkglTestCase_041623_2);

#define VkglTestCase_041624_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041624_2 "ray_element.interleaved.triangles.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041624, VkglTestCase_041624_1, VkglTestCase_041624_2);

#define VkglTestCase_041625_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041625_2 "ray_element.interleaved.triangles.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041625, VkglTestCase_041625_1, VkglTestCase_041625_2);

#define VkglTestCase_041626_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041626_2 "ay_element.interleaved.triangles.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041626, VkglTestCase_041626_1, VkglTestCase_041626_2);

#define VkglTestCase_041627_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041627_2 "ray_element.interleaved.triangles.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041627, VkglTestCase_041627_1, VkglTestCase_041627_2);

#define VkglTestCase_041628_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041628_2 "ray_element.interleaved.triangles.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041628, VkglTestCase_041628_1, VkglTestCase_041628_2);

#define VkglTestCase_041629_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041629_2 "ay_element.interleaved.triangles.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041629, VkglTestCase_041629_1, VkglTestCase_041629_2);

#define VkglTestCase_041630_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041630_2 "ray_element.interleaved.triangles.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041630, VkglTestCase_041630_1, VkglTestCase_041630_2);

#define VkglTestCase_041631_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041631_2 "ray_element.interleaved.triangles.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041631, VkglTestCase_041631_1, VkglTestCase_041631_2);

#define VkglTestCase_041632_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041632_2 "ay_element.interleaved.triangles.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041632, VkglTestCase_041632_1, VkglTestCase_041632_2);

#define VkglTestCase_041633_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041633_2 "ray_element.interleaved.triangles.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041633, VkglTestCase_041633_1, VkglTestCase_041633_2);

#define VkglTestCase_041634_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041634_2 "ay_element.interleaved.triangles.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041634, VkglTestCase_041634_1, VkglTestCase_041634_2);

#define VkglTestCase_041635_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041635_2 "y_element.interleaved.triangles.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041635, VkglTestCase_041635_1, VkglTestCase_041635_2);

#define VkglTestCase_041636_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041636_2 "ay_element.interleaved.triangles.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041636, VkglTestCase_041636_1, VkglTestCase_041636_2);

#define VkglTestCase_041637_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041637_2 "ay_element.interleaved.triangles.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041637, VkglTestCase_041637_1, VkglTestCase_041637_2);

#define VkglTestCase_041638_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041638_2 "y_element.interleaved.triangles.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041638, VkglTestCase_041638_1, VkglTestCase_041638_2);

#define VkglTestCase_041639_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041639_2 "ay_element.interleaved.triangles.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041639, VkglTestCase_041639_1, VkglTestCase_041639_2);

#define VkglTestCase_041640_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041640_2 "ay_element.interleaved.triangles.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041640, VkglTestCase_041640_1, VkglTestCase_041640_2);

#define VkglTestCase_041641_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041641_2 "y_element.interleaved.triangles.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041641, VkglTestCase_041641_1, VkglTestCase_041641_2);

#define VkglTestCase_041642_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041642_2 "ay_element.interleaved.triangles.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041642, VkglTestCase_041642_1, VkglTestCase_041642_2);

#define VkglTestCase_041643_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041643_2 "ray_element.interleaved.triangles.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041643, VkglTestCase_041643_1, VkglTestCase_041643_2);

#define VkglTestCase_041644_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041644_2 "ay_element.interleaved.triangles.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041644, VkglTestCase_041644_1, VkglTestCase_041644_2);

#define VkglTestCase_041645_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041645_2 "ray_element.interleaved.triangles.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041645, VkglTestCase_041645_1, VkglTestCase_041645_2);

#define VkglTestCase_041646_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041646_2 "ay_element.interleaved.triangles.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041646, VkglTestCase_041646_1, VkglTestCase_041646_2);

#define VkglTestCase_041647_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041647_2 "y_element.interleaved.triangles.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041647, VkglTestCase_041647_1, VkglTestCase_041647_2);

#define VkglTestCase_041648_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041648_2 "ay_element.interleaved.triangles.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041648, VkglTestCase_041648_1, VkglTestCase_041648_2);

#define VkglTestCase_041649_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041649_2 "ay_element.interleaved.triangles.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041649, VkglTestCase_041649_1, VkglTestCase_041649_2);

#define VkglTestCase_041650_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041650_2 "y_element.interleaved.triangles.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041650, VkglTestCase_041650_1, VkglTestCase_041650_2);

#define VkglTestCase_041651_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041651_2 "ay_element.interleaved.triangles.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041651, VkglTestCase_041651_1, VkglTestCase_041651_2);

#define VkglTestCase_041652_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041652_2 "ay_element.interleaved.triangles.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041652, VkglTestCase_041652_1, VkglTestCase_041652_2);

#define VkglTestCase_041653_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041653_2 "y_element.interleaved.triangles.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041653, VkglTestCase_041653_1, VkglTestCase_041653_2);

#define VkglTestCase_041654_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041654_2 "ay_element.interleaved.triangles.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041654, VkglTestCase_041654_1, VkglTestCase_041654_2);

#define VkglTestCase_041655_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041655_2 "ray_element.interleaved.triangles.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041655, VkglTestCase_041655_1, VkglTestCase_041655_2);

#define VkglTestCase_041656_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041656_2 "ay_element.interleaved.triangles.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041656, VkglTestCase_041656_1, VkglTestCase_041656_2);

#define VkglTestCase_041657_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041657_2 "ray_element.interleaved.triangles.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041657, VkglTestCase_041657_1, VkglTestCase_041657_2);

#define VkglTestCase_041658_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041658_2 "rray_element.interleaved.triangles.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041658, VkglTestCase_041658_1, VkglTestCase_041658_2);

#define VkglTestCase_041659_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041659_2 "ay_element.interleaved.triangles.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041659, VkglTestCase_041659_1, VkglTestCase_041659_2);

#define VkglTestCase_041660_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041660_2 "ray_element.interleaved.triangles.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041660, VkglTestCase_041660_1, VkglTestCase_041660_2);

#define VkglTestCase_041661_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041661_2 "ray_element.interleaved.triangles.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041661, VkglTestCase_041661_1, VkglTestCase_041661_2);

#define VkglTestCase_041662_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041662_2 "y_element.interleaved.triangles.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041662, VkglTestCase_041662_1, VkglTestCase_041662_2);

#define VkglTestCase_041663_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041663_2 "ay_element.interleaved.triangles.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041663, VkglTestCase_041663_1, VkglTestCase_041663_2);

#define VkglTestCase_041664_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041664_2 "ray_element.interleaved.triangles.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041664, VkglTestCase_041664_1, VkglTestCase_041664_2);

#define VkglTestCase_041665_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041665_2 "y_element.interleaved.triangles.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041665, VkglTestCase_041665_1, VkglTestCase_041665_2);

#define VkglTestCase_041666_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041666_2 "ay_element.interleaved.triangles.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041666, VkglTestCase_041666_1, VkglTestCase_041666_2);

#define VkglTestCase_041667_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041667_2 "ray_element.interleaved.triangles.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041667, VkglTestCase_041667_1, VkglTestCase_041667_2);

#define VkglTestCase_041668_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041668_2 "y_element.interleaved.triangles.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041668, VkglTestCase_041668_1, VkglTestCase_041668_2);

#define VkglTestCase_041669_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041669_2 "ay_element.interleaved.triangles.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041669, VkglTestCase_041669_1, VkglTestCase_041669_2);

#define VkglTestCase_041670_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041670_2 "ray_element.interleaved.triangles.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041670, VkglTestCase_041670_1, VkglTestCase_041670_2);

#define VkglTestCase_041671_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041671_2 "ay_element.interleaved.triangles.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041671, VkglTestCase_041671_1, VkglTestCase_041671_2);

#define VkglTestCase_041672_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041672_2 "ray_element.interleaved.triangles.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041672, VkglTestCase_041672_1, VkglTestCase_041672_2);

#define VkglTestCase_041673_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041673_2 "ray_element.interleaved.triangles.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041673, VkglTestCase_041673_1, VkglTestCase_041673_2);

#define VkglTestCase_041674_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041674_2 "y_element.interleaved.triangles.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041674, VkglTestCase_041674_1, VkglTestCase_041674_2);

#define VkglTestCase_041675_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041675_2 "ay_element.interleaved.triangles.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041675, VkglTestCase_041675_1, VkglTestCase_041675_2);

#define VkglTestCase_041676_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041676_2 "ray_element.interleaved.triangles.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041676, VkglTestCase_041676_1, VkglTestCase_041676_2);

#define VkglTestCase_041677_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041677_2 "y_element.interleaved.triangles.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041677, VkglTestCase_041677_1, VkglTestCase_041677_2);

#define VkglTestCase_041678_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041678_2 "ay_element.interleaved.triangles.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041678, VkglTestCase_041678_1, VkglTestCase_041678_2);

#define VkglTestCase_041679_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041679_2 "ray_element.interleaved.triangles.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041679, VkglTestCase_041679_1, VkglTestCase_041679_2);

#define VkglTestCase_041680_1 "dEQP-GLES3.functional.transform_feedback.arra"
#define VkglTestCase_041680_2 "y_element.interleaved.triangles.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041680, VkglTestCase_041680_1, VkglTestCase_041680_2);

#define VkglTestCase_041681_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041681_2 "ay_element.interleaved.triangles.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041681, VkglTestCase_041681_1, VkglTestCase_041681_2);

#define VkglTestCase_041786_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041786_2 "dback.random.interleaved.triangles.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041786, VkglTestCase_041786_1, VkglTestCase_041786_2);

#define VkglTestCase_041787_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041787_2 "dback.random.interleaved.triangles.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041787, VkglTestCase_041787_1, VkglTestCase_041787_2);

#define VkglTestCase_041788_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041788_2 "dback.random.interleaved.triangles.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041788, VkglTestCase_041788_1, VkglTestCase_041788_2);

#define VkglTestCase_041789_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041789_2 "dback.random.interleaved.triangles.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041789, VkglTestCase_041789_1, VkglTestCase_041789_2);

#define VkglTestCase_041790_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041790_2 "dback.random.interleaved.triangles.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041790, VkglTestCase_041790_1, VkglTestCase_041790_2);

#define VkglTestCase_041791_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041791_2 "dback.random.interleaved.triangles.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041791, VkglTestCase_041791_1, VkglTestCase_041791_2);

#define VkglTestCase_041792_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041792_2 "dback.random.interleaved.triangles.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041792, VkglTestCase_041792_1, VkglTestCase_041792_2);

#define VkglTestCase_041793_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041793_2 "dback.random.interleaved.triangles.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041793, VkglTestCase_041793_1, VkglTestCase_041793_2);

#define VkglTestCase_041794_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_041794_2 "dback.random.interleaved.triangles.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041794, VkglTestCase_041794_1, VkglTestCase_041794_2);

#define VkglTestCase_041795_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041795_2 "back.random.interleaved.triangles.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041795, VkglTestCase_041795_1, VkglTestCase_041795_2);

#define VkglTestCase_041846_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041846_2 "om_full_array_capture.interleaved.triangles.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041846, VkglTestCase_041846_1, VkglTestCase_041846_2);

#define VkglTestCase_041847_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041847_2 "om_full_array_capture.interleaved.triangles.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041847, VkglTestCase_041847_1, VkglTestCase_041847_2);

#define VkglTestCase_041848_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041848_2 "om_full_array_capture.interleaved.triangles.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041848, VkglTestCase_041848_1, VkglTestCase_041848_2);

#define VkglTestCase_041849_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041849_2 "om_full_array_capture.interleaved.triangles.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041849, VkglTestCase_041849_1, VkglTestCase_041849_2);

#define VkglTestCase_041850_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041850_2 "om_full_array_capture.interleaved.triangles.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041850, VkglTestCase_041850_1, VkglTestCase_041850_2);

#define VkglTestCase_041851_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041851_2 "om_full_array_capture.interleaved.triangles.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041851, VkglTestCase_041851_1, VkglTestCase_041851_2);

#define VkglTestCase_041852_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041852_2 "om_full_array_capture.interleaved.triangles.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041852, VkglTestCase_041852_1, VkglTestCase_041852_2);

#define VkglTestCase_041853_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041853_2 "om_full_array_capture.interleaved.triangles.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041853, VkglTestCase_041853_1, VkglTestCase_041853_2);

#define VkglTestCase_041854_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041854_2 "om_full_array_capture.interleaved.triangles.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041854, VkglTestCase_041854_1, VkglTestCase_041854_2);

#define VkglTestCase_041855_1 "dEQP-GLES3.functional.transform_feedback.rand"
#define VkglTestCase_041855_2 "om_full_array_capture.interleaved.triangles.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041855, VkglTestCase_041855_1, VkglTestCase_041855_2);
