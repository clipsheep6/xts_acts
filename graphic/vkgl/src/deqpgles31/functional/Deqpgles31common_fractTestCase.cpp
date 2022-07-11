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
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000445_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000445_2 "unctions.common.fract.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000445, VkglTestCase_000445_1, VkglTestCase_000445_2);

#define VkglTestCase_000446_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000446_2 "ctions.common.fract.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000446, VkglTestCase_000446_1, VkglTestCase_000446_2);

#define VkglTestCase_000447_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000447_2 "nctions.common.fract.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000447, VkglTestCase_000447_1, VkglTestCase_000447_2);

#define VkglTestCase_000448_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000448_2 "unctions.common.fract.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000448, VkglTestCase_000448_1, VkglTestCase_000448_2);

#define VkglTestCase_000449_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000449_2 "ctions.common.fract.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000449, VkglTestCase_000449_1, VkglTestCase_000449_2);

#define VkglTestCase_000450_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000450_2 "ions.common.fract.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000450, VkglTestCase_000450_1, VkglTestCase_000450_2);

#define VkglTestCase_000451_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000451_2 "ctions.common.fract.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000451, VkglTestCase_000451_1, VkglTestCase_000451_2);

#define VkglTestCase_000452_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000452_2 "nctions.common.fract.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000452, VkglTestCase_000452_1, VkglTestCase_000452_2);

#define VkglTestCase_000453_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000453_2 "nctions.common.fract.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000453, VkglTestCase_000453_1, VkglTestCase_000453_2);

#define VkglTestCase_000454_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000454_2 "tions.common.fract.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000454, VkglTestCase_000454_1, VkglTestCase_000454_2);

#define VkglTestCase_000455_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000455_2 "nctions.common.fract.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000455, VkglTestCase_000455_1, VkglTestCase_000455_2);

#define VkglTestCase_000456_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000456_2 "unctions.common.fract.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000456, VkglTestCase_000456_1, VkglTestCase_000456_2);

#define VkglTestCase_000457_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000457_2 "unctions.common.fract.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000457, VkglTestCase_000457_1, VkglTestCase_000457_2);

#define VkglTestCase_000458_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000458_2 "ctions.common.fract.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000458, VkglTestCase_000458_1, VkglTestCase_000458_2);

#define VkglTestCase_000459_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000459_2 "unctions.common.fract.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000459, VkglTestCase_000459_1, VkglTestCase_000459_2);

#define VkglTestCase_000460_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000460_2 "functions.common.fract.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000460, VkglTestCase_000460_1, VkglTestCase_000460_2);

#define VkglTestCase_000461_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000461_2 "nctions.common.fract.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000461, VkglTestCase_000461_1, VkglTestCase_000461_2);

#define VkglTestCase_000462_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000462_2 "tions.common.fract.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000462, VkglTestCase_000462_1, VkglTestCase_000462_2);

#define VkglTestCase_000463_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000463_2 "ctions.common.fract.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000463, VkglTestCase_000463_1, VkglTestCase_000463_2);

#define VkglTestCase_000464_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000464_2 "nctions.common.fract.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000464, VkglTestCase_000464_1, VkglTestCase_000464_2);

#define VkglTestCase_000465_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000465_2 "unctions.common.fract.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000465, VkglTestCase_000465_1, VkglTestCase_000465_2);

#define VkglTestCase_000466_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000466_2 "ctions.common.fract.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000466, VkglTestCase_000466_1, VkglTestCase_000466_2);

#define VkglTestCase_000467_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000467_2 "nctions.common.fract.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000467, VkglTestCase_000467_1, VkglTestCase_000467_2);

#define VkglTestCase_000468_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000468_2 "unctions.common.fract.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000468, VkglTestCase_000468_1, VkglTestCase_000468_2);

#define VkglTestCase_000469_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000469_2 "unctions.common.fract.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000469, VkglTestCase_000469_1, VkglTestCase_000469_2);

#define VkglTestCase_000470_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000470_2 "ctions.common.fract.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000470, VkglTestCase_000470_1, VkglTestCase_000470_2);

#define VkglTestCase_000471_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000471_2 "unctions.common.fract.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000471, VkglTestCase_000471_1, VkglTestCase_000471_2);

#define VkglTestCase_000472_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000472_2 "functions.common.fract.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000472, VkglTestCase_000472_1, VkglTestCase_000472_2);

#define VkglTestCase_000473_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000473_2 "nctions.common.fract.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000473, VkglTestCase_000473_1, VkglTestCase_000473_2);

#define VkglTestCase_000474_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000474_2 "tions.common.fract.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000474, VkglTestCase_000474_1, VkglTestCase_000474_2);

#define VkglTestCase_000475_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000475_2 "ctions.common.fract.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000475, VkglTestCase_000475_1, VkglTestCase_000475_2);

#define VkglTestCase_000476_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000476_2 "nctions.common.fract.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000476, VkglTestCase_000476_1, VkglTestCase_000476_2);

#define VkglTestCase_000477_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000477_2 "unctions.common.fract.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000477, VkglTestCase_000477_1, VkglTestCase_000477_2);

#define VkglTestCase_000478_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000478_2 "ctions.common.fract.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000478, VkglTestCase_000478_1, VkglTestCase_000478_2);

#define VkglTestCase_000479_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000479_2 "nctions.common.fract.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000479, VkglTestCase_000479_1, VkglTestCase_000479_2);

#define VkglTestCase_000480_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000480_2 "unctions.common.fract.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000480, VkglTestCase_000480_1, VkglTestCase_000480_2);

#define VkglTestCase_000481_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000481_2 "unctions.common.fract.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000481, VkglTestCase_000481_1, VkglTestCase_000481_2);

#define VkglTestCase_000482_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000482_2 "ctions.common.fract.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000482, VkglTestCase_000482_1, VkglTestCase_000482_2);

#define VkglTestCase_000483_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000483_2 "unctions.common.fract.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000483, VkglTestCase_000483_1, VkglTestCase_000483_2);

#define VkglTestCase_000484_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000484_2 "functions.common.fract.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000484, VkglTestCase_000484_1, VkglTestCase_000484_2);

#define VkglTestCase_000485_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000485_2 "nctions.common.fract.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000485, VkglTestCase_000485_1, VkglTestCase_000485_2);

#define VkglTestCase_000486_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000486_2 "tions.common.fract.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000486, VkglTestCase_000486_1, VkglTestCase_000486_2);

#define VkglTestCase_000487_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000487_2 "ctions.common.fract.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000487, VkglTestCase_000487_1, VkglTestCase_000487_2);

#define VkglTestCase_000488_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000488_2 "nctions.common.fract.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000488, VkglTestCase_000488_1, VkglTestCase_000488_2);

#define VkglTestCase_000489_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000489_2 "unctions.common.fract.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000489, VkglTestCase_000489_1, VkglTestCase_000489_2);

#define VkglTestCase_000490_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000490_2 "ctions.common.fract.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000490, VkglTestCase_000490_1, VkglTestCase_000490_2);

#define VkglTestCase_000491_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000491_2 "nctions.common.fract.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000491, VkglTestCase_000491_1, VkglTestCase_000491_2);

#define VkglTestCase_000492_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000492_2 "unctions.common.fract.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000492, VkglTestCase_000492_1, VkglTestCase_000492_2);
