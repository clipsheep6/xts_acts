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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004498_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004498_2 "ge.es31.geometry.uniform.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004498, VkglTestCase_004498_1, VkglTestCase_004498_2);

#define VkglTestCase_004499_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004499_2 "age.es31.geometry.uniform.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004499, VkglTestCase_004499_1, VkglTestCase_004499_2);

#define VkglTestCase_004500_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004500_2 "age.es31.geometry.uniform.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004500, VkglTestCase_004500_1, VkglTestCase_004500_2);

#define VkglTestCase_004501_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004501_2 "age.es31.geometry.uniform.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004501, VkglTestCase_004501_1, VkglTestCase_004501_2);

#define VkglTestCase_004502_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004502_2 "age.es31.geometry.uniform.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004502, VkglTestCase_004502_1, VkglTestCase_004502_2);

#define VkglTestCase_004503_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004503_2 "ge.es31.geometry.uniform.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004503, VkglTestCase_004503_1, VkglTestCase_004503_2);

#define VkglTestCase_004504_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004504_2 "ge.es31.geometry.uniform.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004504, VkglTestCase_004504_1, VkglTestCase_004504_2);

#define VkglTestCase_004505_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004505_2 "ge.es31.geometry.uniform.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004505, VkglTestCase_004505_1, VkglTestCase_004505_2);

#define VkglTestCase_004506_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004506_2 "age.es31.geometry.uniform.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004506, VkglTestCase_004506_1, VkglTestCase_004506_2);

#define VkglTestCase_004507_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004507_2 "ge.es31.geometry.uniform.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004507, VkglTestCase_004507_1, VkglTestCase_004507_2);

#define VkglTestCase_004508_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004508_2 "ge.es31.geometry.uniform.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004508, VkglTestCase_004508_1, VkglTestCase_004508_2);

#define VkglTestCase_004509_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004509_2 "ge.es31.geometry.uniform.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004509, VkglTestCase_004509_1, VkglTestCase_004509_2);

#define VkglTestCase_004510_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004510_2 "age.es31.geometry.uniform.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004510, VkglTestCase_004510_1, VkglTestCase_004510_2);

#define VkglTestCase_004511_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004511_2 "age.es31.geometry.uniform.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004511, VkglTestCase_004511_1, VkglTestCase_004511_2);

#define VkglTestCase_004512_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004512_2 "ge.es31.geometry.uniform.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004512, VkglTestCase_004512_1, VkglTestCase_004512_2);

#define VkglTestCase_004513_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004513_2 "ge.es31.geometry.uniform.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004513, VkglTestCase_004513_1, VkglTestCase_004513_2);

#define VkglTestCase_004514_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004514_2 "ge.es31.geometry.uniform.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004514, VkglTestCase_004514_1, VkglTestCase_004514_2);

#define VkglTestCase_004515_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004515_2 "age.es31.geometry.uniform.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004515, VkglTestCase_004515_1, VkglTestCase_004515_2);

#define VkglTestCase_004516_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004516_2 "ge.es31.geometry.uniform.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004516, VkglTestCase_004516_1, VkglTestCase_004516_2);

#define VkglTestCase_004517_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004517_2 "ge.es31.geometry.uniform.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004517, VkglTestCase_004517_1, VkglTestCase_004517_2);

#define VkglTestCase_004518_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004518_2 "ge.es31.geometry.uniform.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004518, VkglTestCase_004518_1, VkglTestCase_004518_2);

#define VkglTestCase_004519_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004519_2 "es31.geometry.uniform.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004519, VkglTestCase_004519_1, VkglTestCase_004519_2);

#define VkglTestCase_004588_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004588_2 ".es31.tessellation.uniform.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004588, VkglTestCase_004588_1, VkglTestCase_004588_2);

#define VkglTestCase_004589_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004589_2 "e.es31.tessellation.uniform.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004589, VkglTestCase_004589_1, VkglTestCase_004589_2);

#define VkglTestCase_004590_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004590_2 "e.es31.tessellation.uniform.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004590, VkglTestCase_004590_1, VkglTestCase_004590_2);

#define VkglTestCase_004591_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004591_2 "e.es31.tessellation.uniform.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004591, VkglTestCase_004591_1, VkglTestCase_004591_2);

#define VkglTestCase_004592_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004592_2 "e.es31.tessellation.uniform.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004592, VkglTestCase_004592_1, VkglTestCase_004592_2);

#define VkglTestCase_004593_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004593_2 ".es31.tessellation.uniform.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004593, VkglTestCase_004593_1, VkglTestCase_004593_2);

#define VkglTestCase_004594_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004594_2 ".es31.tessellation.uniform.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004594, VkglTestCase_004594_1, VkglTestCase_004594_2);

#define VkglTestCase_004595_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004595_2 ".es31.tessellation.uniform.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004595, VkglTestCase_004595_1, VkglTestCase_004595_2);

#define VkglTestCase_004596_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004596_2 "e.es31.tessellation.uniform.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004596, VkglTestCase_004596_1, VkglTestCase_004596_2);

#define VkglTestCase_004597_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004597_2 ".es31.tessellation.uniform.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004597, VkglTestCase_004597_1, VkglTestCase_004597_2);

#define VkglTestCase_004598_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004598_2 ".es31.tessellation.uniform.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004598, VkglTestCase_004598_1, VkglTestCase_004598_2);

#define VkglTestCase_004599_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004599_2 ".es31.tessellation.uniform.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004599, VkglTestCase_004599_1, VkglTestCase_004599_2);

#define VkglTestCase_004600_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004600_2 "e.es31.tessellation.uniform.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004600, VkglTestCase_004600_1, VkglTestCase_004600_2);

#define VkglTestCase_004601_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004601_2 "e.es31.tessellation.uniform.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004601, VkglTestCase_004601_1, VkglTestCase_004601_2);

#define VkglTestCase_004602_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004602_2 ".es31.tessellation.uniform.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004602, VkglTestCase_004602_1, VkglTestCase_004602_2);

#define VkglTestCase_004603_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004603_2 ".es31.tessellation.uniform.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004603, VkglTestCase_004603_1, VkglTestCase_004603_2);

#define VkglTestCase_004604_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004604_2 ".es31.tessellation.uniform.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004604, VkglTestCase_004604_1, VkglTestCase_004604_2);

#define VkglTestCase_004605_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004605_2 "e.es31.tessellation.uniform.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004605, VkglTestCase_004605_1, VkglTestCase_004605_2);

#define VkglTestCase_004606_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004606_2 ".es31.tessellation.uniform.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004606, VkglTestCase_004606_1, VkglTestCase_004606_2);

#define VkglTestCase_004607_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004607_2 ".es31.tessellation.uniform.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004607, VkglTestCase_004607_1, VkglTestCase_004607_2);

#define VkglTestCase_004608_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004608_2 ".es31.tessellation.uniform.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004608, VkglTestCase_004608_1, VkglTestCase_004608_2);

#define VkglTestCase_004609_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004609_2 "31.tessellation.uniform.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004609, VkglTestCase_004609_1, VkglTestCase_004609_2);

#define VkglTestCase_004769_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004769_2 "ge.es32.geometry.uniform.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004769, VkglTestCase_004769_1, VkglTestCase_004769_2);

#define VkglTestCase_004770_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004770_2 "age.es32.geometry.uniform.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004770, VkglTestCase_004770_1, VkglTestCase_004770_2);

#define VkglTestCase_004771_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004771_2 "age.es32.geometry.uniform.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004771, VkglTestCase_004771_1, VkglTestCase_004771_2);

#define VkglTestCase_004772_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004772_2 "age.es32.geometry.uniform.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004772, VkglTestCase_004772_1, VkglTestCase_004772_2);

#define VkglTestCase_004773_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004773_2 "age.es32.geometry.uniform.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004773, VkglTestCase_004773_1, VkglTestCase_004773_2);

#define VkglTestCase_004774_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004774_2 "ge.es32.geometry.uniform.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004774, VkglTestCase_004774_1, VkglTestCase_004774_2);

#define VkglTestCase_004775_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004775_2 "ge.es32.geometry.uniform.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004775, VkglTestCase_004775_1, VkglTestCase_004775_2);

#define VkglTestCase_004776_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004776_2 "ge.es32.geometry.uniform.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004776, VkglTestCase_004776_1, VkglTestCase_004776_2);

#define VkglTestCase_004777_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004777_2 "age.es32.geometry.uniform.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004777, VkglTestCase_004777_1, VkglTestCase_004777_2);

#define VkglTestCase_004778_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004778_2 "ge.es32.geometry.uniform.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004778, VkglTestCase_004778_1, VkglTestCase_004778_2);

#define VkglTestCase_004779_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004779_2 "ge.es32.geometry.uniform.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004779, VkglTestCase_004779_1, VkglTestCase_004779_2);

#define VkglTestCase_004780_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004780_2 "ge.es32.geometry.uniform.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004780, VkglTestCase_004780_1, VkglTestCase_004780_2);

#define VkglTestCase_004781_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004781_2 "age.es32.geometry.uniform.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004781, VkglTestCase_004781_1, VkglTestCase_004781_2);

#define VkglTestCase_004782_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004782_2 "age.es32.geometry.uniform.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004782, VkglTestCase_004782_1, VkglTestCase_004782_2);

#define VkglTestCase_004783_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004783_2 "ge.es32.geometry.uniform.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004783, VkglTestCase_004783_1, VkglTestCase_004783_2);

#define VkglTestCase_004784_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004784_2 "ge.es32.geometry.uniform.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004784, VkglTestCase_004784_1, VkglTestCase_004784_2);

#define VkglTestCase_004785_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004785_2 "ge.es32.geometry.uniform.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004785, VkglTestCase_004785_1, VkglTestCase_004785_2);

#define VkglTestCase_004786_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004786_2 "age.es32.geometry.uniform.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004786, VkglTestCase_004786_1, VkglTestCase_004786_2);

#define VkglTestCase_004787_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004787_2 "ge.es32.geometry.uniform.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004787, VkglTestCase_004787_1, VkglTestCase_004787_2);

#define VkglTestCase_004788_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004788_2 "ge.es32.geometry.uniform.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004788, VkglTestCase_004788_1, VkglTestCase_004788_2);

#define VkglTestCase_004789_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004789_2 "ge.es32.geometry.uniform.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004789, VkglTestCase_004789_1, VkglTestCase_004789_2);

#define VkglTestCase_004790_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004790_2 "es32.geometry.uniform.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004790, VkglTestCase_004790_1, VkglTestCase_004790_2);

#define VkglTestCase_004854_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004854_2 ".es32.tessellation.uniform.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004854, VkglTestCase_004854_1, VkglTestCase_004854_2);

#define VkglTestCase_004855_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004855_2 "e.es32.tessellation.uniform.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004855, VkglTestCase_004855_1, VkglTestCase_004855_2);

#define VkglTestCase_004856_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004856_2 "e.es32.tessellation.uniform.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004856, VkglTestCase_004856_1, VkglTestCase_004856_2);

#define VkglTestCase_004857_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004857_2 "e.es32.tessellation.uniform.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004857, VkglTestCase_004857_1, VkglTestCase_004857_2);

#define VkglTestCase_004858_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004858_2 "e.es32.tessellation.uniform.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004858, VkglTestCase_004858_1, VkglTestCase_004858_2);

#define VkglTestCase_004859_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004859_2 ".es32.tessellation.uniform.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004859, VkglTestCase_004859_1, VkglTestCase_004859_2);

#define VkglTestCase_004860_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004860_2 ".es32.tessellation.uniform.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004860, VkglTestCase_004860_1, VkglTestCase_004860_2);

#define VkglTestCase_004861_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004861_2 ".es32.tessellation.uniform.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004861, VkglTestCase_004861_1, VkglTestCase_004861_2);

#define VkglTestCase_004862_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004862_2 "e.es32.tessellation.uniform.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004862, VkglTestCase_004862_1, VkglTestCase_004862_2);

#define VkglTestCase_004863_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004863_2 ".es32.tessellation.uniform.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004863, VkglTestCase_004863_1, VkglTestCase_004863_2);

#define VkglTestCase_004864_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004864_2 ".es32.tessellation.uniform.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004864, VkglTestCase_004864_1, VkglTestCase_004864_2);

#define VkglTestCase_004865_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004865_2 ".es32.tessellation.uniform.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004865, VkglTestCase_004865_1, VkglTestCase_004865_2);

#define VkglTestCase_004866_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004866_2 "e.es32.tessellation.uniform.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004866, VkglTestCase_004866_1, VkglTestCase_004866_2);

#define VkglTestCase_004867_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004867_2 "e.es32.tessellation.uniform.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004867, VkglTestCase_004867_1, VkglTestCase_004867_2);

#define VkglTestCase_004868_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004868_2 ".es32.tessellation.uniform.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004868, VkglTestCase_004868_1, VkglTestCase_004868_2);

#define VkglTestCase_004869_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004869_2 ".es32.tessellation.uniform.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004869, VkglTestCase_004869_1, VkglTestCase_004869_2);

#define VkglTestCase_004870_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004870_2 ".es32.tessellation.uniform.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004870, VkglTestCase_004870_1, VkglTestCase_004870_2);

#define VkglTestCase_004871_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004871_2 "e.es32.tessellation.uniform.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004871, VkglTestCase_004871_1, VkglTestCase_004871_2);

#define VkglTestCase_004872_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004872_2 ".es32.tessellation.uniform.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004872, VkglTestCase_004872_1, VkglTestCase_004872_2);

#define VkglTestCase_004873_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004873_2 ".es32.tessellation.uniform.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004873, VkglTestCase_004873_1, VkglTestCase_004873_2);

#define VkglTestCase_004874_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004874_2 ".es32.tessellation.uniform.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004874, VkglTestCase_004874_1, VkglTestCase_004874_2);

#define VkglTestCase_004875_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004875_2 "32.tessellation.uniform.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004875, VkglTestCase_004875_1, VkglTestCase_004875_2);
