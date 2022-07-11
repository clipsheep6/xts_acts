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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016846_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016846_2 "m.by_pointer.render.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016846, VkglTestCase_016846_1, VkglTestCase_016846_2);

#define VkglTestCase_016847_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016847_2 ".by_pointer.render.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016847, VkglTestCase_016847_1, VkglTestCase_016847_2);

#define VkglTestCase_016848_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016848_2 "rm.by_pointer.render.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016848, VkglTestCase_016848_1, VkglTestCase_016848_2);

#define VkglTestCase_016849_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016849_2 "m.by_pointer.render.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016849, VkglTestCase_016849_1, VkglTestCase_016849_2);

#define VkglTestCase_016850_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016850_2 ".by_pointer.render.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016850, VkglTestCase_016850_1, VkglTestCase_016850_2);

#define VkglTestCase_016851_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016851_2 "rm.by_pointer.render.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016851, VkglTestCase_016851_1, VkglTestCase_016851_2);

#define VkglTestCase_016852_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016852_2 "m.by_pointer.render.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016852, VkglTestCase_016852_1, VkglTestCase_016852_2);

#define VkglTestCase_016853_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016853_2 ".by_pointer.render.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016853, VkglTestCase_016853_1, VkglTestCase_016853_2);

#define VkglTestCase_016854_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016854_2 "rm.by_pointer.render.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016854, VkglTestCase_016854_1, VkglTestCase_016854_2);

#define VkglTestCase_016855_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016855_2 "m.by_pointer.render.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016855, VkglTestCase_016855_1, VkglTestCase_016855_2);

#define VkglTestCase_016856_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016856_2 ".by_pointer.render.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016856, VkglTestCase_016856_1, VkglTestCase_016856_2);

#define VkglTestCase_016857_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016857_2 "rm.by_pointer.render.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016857, VkglTestCase_016857_1, VkglTestCase_016857_2);

#define VkglTestCase_016858_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016858_2 "m.by_pointer.render.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016858, VkglTestCase_016858_1, VkglTestCase_016858_2);

#define VkglTestCase_016859_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016859_2 ".by_pointer.render.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016859, VkglTestCase_016859_1, VkglTestCase_016859_2);

#define VkglTestCase_016860_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016860_2 "rm.by_pointer.render.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016860, VkglTestCase_016860_1, VkglTestCase_016860_2);

#define VkglTestCase_016861_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016861_2 "pointer.render.basic.mat2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016861, VkglTestCase_016861_1, VkglTestCase_016861_2);

#define VkglTestCase_016862_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016862_2 "ointer.render.basic.mat2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016862, VkglTestCase_016862_1, VkglTestCase_016862_2);

#define VkglTestCase_016863_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016863_2 "_pointer.render.basic.mat2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016863, VkglTestCase_016863_1, VkglTestCase_016863_2);

#define VkglTestCase_016864_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016864_2 ".by_pointer.render.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016864, VkglTestCase_016864_1, VkglTestCase_016864_2);

#define VkglTestCase_016865_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016865_2 "by_pointer.render.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016865, VkglTestCase_016865_1, VkglTestCase_016865_2);

#define VkglTestCase_016866_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016866_2 "m.by_pointer.render.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016866, VkglTestCase_016866_1, VkglTestCase_016866_2);

#define VkglTestCase_016867_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016867_2 "ointer.render.basic.mat2x3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016867, VkglTestCase_016867_1, VkglTestCase_016867_2);

#define VkglTestCase_016868_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016868_2 "inter.render.basic.mat2x3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016868, VkglTestCase_016868_1, VkglTestCase_016868_2);

#define VkglTestCase_016869_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016869_2 "pointer.render.basic.mat2x3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016869, VkglTestCase_016869_1, VkglTestCase_016869_2);

#define VkglTestCase_016870_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016870_2 ".by_pointer.render.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016870, VkglTestCase_016870_1, VkglTestCase_016870_2);

#define VkglTestCase_016871_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016871_2 "by_pointer.render.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016871, VkglTestCase_016871_1, VkglTestCase_016871_2);

#define VkglTestCase_016872_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016872_2 "m.by_pointer.render.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016872, VkglTestCase_016872_1, VkglTestCase_016872_2);

#define VkglTestCase_016873_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016873_2 "ointer.render.basic.mat2x4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016873, VkglTestCase_016873_1, VkglTestCase_016873_2);

#define VkglTestCase_016874_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016874_2 "inter.render.basic.mat2x4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016874, VkglTestCase_016874_1, VkglTestCase_016874_2);

#define VkglTestCase_016875_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016875_2 "pointer.render.basic.mat2x4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016875, VkglTestCase_016875_1, VkglTestCase_016875_2);

#define VkglTestCase_016876_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016876_2 ".by_pointer.render.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016876, VkglTestCase_016876_1, VkglTestCase_016876_2);

#define VkglTestCase_016877_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016877_2 "by_pointer.render.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016877, VkglTestCase_016877_1, VkglTestCase_016877_2);

#define VkglTestCase_016878_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016878_2 "m.by_pointer.render.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016878, VkglTestCase_016878_1, VkglTestCase_016878_2);

#define VkglTestCase_016879_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016879_2 "ointer.render.basic.mat3x2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016879, VkglTestCase_016879_1, VkglTestCase_016879_2);

#define VkglTestCase_016880_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016880_2 "inter.render.basic.mat3x2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016880, VkglTestCase_016880_1, VkglTestCase_016880_2);

#define VkglTestCase_016881_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016881_2 "pointer.render.basic.mat3x2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016881, VkglTestCase_016881_1, VkglTestCase_016881_2);

#define VkglTestCase_016882_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016882_2 "m.by_pointer.render.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016882, VkglTestCase_016882_1, VkglTestCase_016882_2);

#define VkglTestCase_016883_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016883_2 ".by_pointer.render.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016883, VkglTestCase_016883_1, VkglTestCase_016883_2);

#define VkglTestCase_016884_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016884_2 "rm.by_pointer.render.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016884, VkglTestCase_016884_1, VkglTestCase_016884_2);

#define VkglTestCase_016885_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016885_2 "pointer.render.basic.mat3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016885, VkglTestCase_016885_1, VkglTestCase_016885_2);

#define VkglTestCase_016886_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016886_2 "ointer.render.basic.mat3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016886, VkglTestCase_016886_1, VkglTestCase_016886_2);

#define VkglTestCase_016887_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016887_2 "_pointer.render.basic.mat3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016887, VkglTestCase_016887_1, VkglTestCase_016887_2);

#define VkglTestCase_016888_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016888_2 ".by_pointer.render.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016888, VkglTestCase_016888_1, VkglTestCase_016888_2);

#define VkglTestCase_016889_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016889_2 "by_pointer.render.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016889, VkglTestCase_016889_1, VkglTestCase_016889_2);

#define VkglTestCase_016890_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016890_2 "m.by_pointer.render.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016890, VkglTestCase_016890_1, VkglTestCase_016890_2);

#define VkglTestCase_016891_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016891_2 "ointer.render.basic.mat3x4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016891, VkglTestCase_016891_1, VkglTestCase_016891_2);

#define VkglTestCase_016892_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016892_2 "inter.render.basic.mat3x4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016892, VkglTestCase_016892_1, VkglTestCase_016892_2);

#define VkglTestCase_016893_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016893_2 "pointer.render.basic.mat3x4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016893, VkglTestCase_016893_1, VkglTestCase_016893_2);

#define VkglTestCase_016894_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016894_2 ".by_pointer.render.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016894, VkglTestCase_016894_1, VkglTestCase_016894_2);

#define VkglTestCase_016895_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016895_2 "by_pointer.render.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016895, VkglTestCase_016895_1, VkglTestCase_016895_2);

#define VkglTestCase_016896_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016896_2 "m.by_pointer.render.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016896, VkglTestCase_016896_1, VkglTestCase_016896_2);

#define VkglTestCase_016897_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016897_2 "ointer.render.basic.mat4x2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016897, VkglTestCase_016897_1, VkglTestCase_016897_2);

#define VkglTestCase_016898_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016898_2 "inter.render.basic.mat4x2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016898, VkglTestCase_016898_1, VkglTestCase_016898_2);

#define VkglTestCase_016899_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016899_2 "pointer.render.basic.mat4x2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016899, VkglTestCase_016899_1, VkglTestCase_016899_2);

#define VkglTestCase_016900_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016900_2 ".by_pointer.render.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016900, VkglTestCase_016900_1, VkglTestCase_016900_2);

#define VkglTestCase_016901_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016901_2 "by_pointer.render.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016901, VkglTestCase_016901_1, VkglTestCase_016901_2);

#define VkglTestCase_016902_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016902_2 "m.by_pointer.render.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016902, VkglTestCase_016902_1, VkglTestCase_016902_2);

#define VkglTestCase_016903_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016903_2 "ointer.render.basic.mat4x3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016903, VkglTestCase_016903_1, VkglTestCase_016903_2);

#define VkglTestCase_016904_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016904_2 "inter.render.basic.mat4x3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016904, VkglTestCase_016904_1, VkglTestCase_016904_2);

#define VkglTestCase_016905_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016905_2 "pointer.render.basic.mat4x3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016905, VkglTestCase_016905_1, VkglTestCase_016905_2);

#define VkglTestCase_016906_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016906_2 "m.by_pointer.render.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016906, VkglTestCase_016906_1, VkglTestCase_016906_2);

#define VkglTestCase_016907_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016907_2 ".by_pointer.render.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016907, VkglTestCase_016907_1, VkglTestCase_016907_2);

#define VkglTestCase_016908_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016908_2 "rm.by_pointer.render.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016908, VkglTestCase_016908_1, VkglTestCase_016908_2);

#define VkglTestCase_016909_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016909_2 "pointer.render.basic.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016909, VkglTestCase_016909_1, VkglTestCase_016909_2);

#define VkglTestCase_016910_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016910_2 "ointer.render.basic.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016910, VkglTestCase_016910_1, VkglTestCase_016910_2);

#define VkglTestCase_016911_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016911_2 "_pointer.render.basic.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016911, VkglTestCase_016911_1, VkglTestCase_016911_2);

#define VkglTestCase_016912_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016912_2 "rm.by_pointer.render.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016912, VkglTestCase_016912_1, VkglTestCase_016912_2);

#define VkglTestCase_016913_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016913_2 "m.by_pointer.render.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016913, VkglTestCase_016913_1, VkglTestCase_016913_2);

#define VkglTestCase_016914_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_016914_2 "orm.by_pointer.render.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016914, VkglTestCase_016914_1, VkglTestCase_016914_2);

#define VkglTestCase_016915_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016915_2 "m.by_pointer.render.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016915, VkglTestCase_016915_1, VkglTestCase_016915_2);

#define VkglTestCase_016916_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016916_2 ".by_pointer.render.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016916, VkglTestCase_016916_1, VkglTestCase_016916_2);

#define VkglTestCase_016917_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016917_2 "rm.by_pointer.render.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016917, VkglTestCase_016917_1, VkglTestCase_016917_2);

#define VkglTestCase_016918_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016918_2 "m.by_pointer.render.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016918, VkglTestCase_016918_1, VkglTestCase_016918_2);

#define VkglTestCase_016919_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016919_2 ".by_pointer.render.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016919, VkglTestCase_016919_1, VkglTestCase_016919_2);

#define VkglTestCase_016920_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016920_2 "rm.by_pointer.render.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016920, VkglTestCase_016920_1, VkglTestCase_016920_2);

#define VkglTestCase_016921_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016921_2 "m.by_pointer.render.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016921, VkglTestCase_016921_1, VkglTestCase_016921_2);

#define VkglTestCase_016922_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016922_2 ".by_pointer.render.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016922, VkglTestCase_016922_1, VkglTestCase_016922_2);

#define VkglTestCase_016923_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016923_2 "rm.by_pointer.render.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016923, VkglTestCase_016923_1, VkglTestCase_016923_2);

#define VkglTestCase_016924_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016924_2 "m.by_pointer.render.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016924, VkglTestCase_016924_1, VkglTestCase_016924_2);

#define VkglTestCase_016925_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016925_2 ".by_pointer.render.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016925, VkglTestCase_016925_1, VkglTestCase_016925_2);

#define VkglTestCase_016926_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016926_2 "rm.by_pointer.render.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016926, VkglTestCase_016926_1, VkglTestCase_016926_2);

#define VkglTestCase_016927_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016927_2 "m.by_pointer.render.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016927, VkglTestCase_016927_1, VkglTestCase_016927_2);

#define VkglTestCase_016928_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016928_2 ".by_pointer.render.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016928, VkglTestCase_016928_1, VkglTestCase_016928_2);

#define VkglTestCase_016929_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016929_2 "rm.by_pointer.render.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016929, VkglTestCase_016929_1, VkglTestCase_016929_2);

#define VkglTestCase_016930_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016930_2 "m.by_pointer.render.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016930, VkglTestCase_016930_1, VkglTestCase_016930_2);

#define VkglTestCase_016931_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016931_2 ".by_pointer.render.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016931, VkglTestCase_016931_1, VkglTestCase_016931_2);

#define VkglTestCase_016932_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016932_2 "rm.by_pointer.render.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016932, VkglTestCase_016932_1, VkglTestCase_016932_2);

#define VkglTestCase_016933_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016933_2 "m.by_pointer.render.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016933, VkglTestCase_016933_1, VkglTestCase_016933_2);

#define VkglTestCase_016934_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016934_2 ".by_pointer.render.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016934, VkglTestCase_016934_1, VkglTestCase_016934_2);

#define VkglTestCase_016935_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016935_2 "rm.by_pointer.render.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016935, VkglTestCase_016935_1, VkglTestCase_016935_2);

#define VkglTestCase_016936_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016936_2 "m.by_pointer.render.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016936, VkglTestCase_016936_1, VkglTestCase_016936_2);

#define VkglTestCase_016937_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016937_2 ".by_pointer.render.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016937, VkglTestCase_016937_1, VkglTestCase_016937_2);

#define VkglTestCase_016938_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016938_2 "rm.by_pointer.render.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016938, VkglTestCase_016938_1, VkglTestCase_016938_2);

#define VkglTestCase_016939_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016939_2 "m.by_pointer.render.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016939, VkglTestCase_016939_1, VkglTestCase_016939_2);

#define VkglTestCase_016940_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016940_2 ".by_pointer.render.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016940, VkglTestCase_016940_1, VkglTestCase_016940_2);

#define VkglTestCase_016941_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016941_2 "rm.by_pointer.render.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016941, VkglTestCase_016941_1, VkglTestCase_016941_2);

#define VkglTestCase_016942_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016942_2 "m.by_pointer.render.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016942, VkglTestCase_016942_1, VkglTestCase_016942_2);

#define VkglTestCase_016943_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016943_2 ".by_pointer.render.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016943, VkglTestCase_016943_1, VkglTestCase_016943_2);

#define VkglTestCase_016944_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016944_2 "rm.by_pointer.render.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016944, VkglTestCase_016944_1, VkglTestCase_016944_2);

#define VkglTestCase_016945_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_016945_2 "m.by_pointer.render.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016945, VkglTestCase_016945_1, VkglTestCase_016945_2);

#define VkglTestCase_016946_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016946_2 ".by_pointer.render.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016946, VkglTestCase_016946_1, VkglTestCase_016946_2);

#define VkglTestCase_016947_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_016947_2 "rm.by_pointer.render.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016947, VkglTestCase_016947_1, VkglTestCase_016947_2);

#define VkglTestCase_016948_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016948_2 "by_pointer.render.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016948, VkglTestCase_016948_1, VkglTestCase_016948_2);

#define VkglTestCase_016949_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016949_2 "y_pointer.render.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016949, VkglTestCase_016949_1, VkglTestCase_016949_2);

#define VkglTestCase_016950_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016950_2 ".by_pointer.render.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016950, VkglTestCase_016950_1, VkglTestCase_016950_2);

#define VkglTestCase_016951_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016951_2 "y_pointer.render.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016951, VkglTestCase_016951_1, VkglTestCase_016951_2);

#define VkglTestCase_016952_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016952_2 "_pointer.render.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016952, VkglTestCase_016952_1, VkglTestCase_016952_2);

#define VkglTestCase_016953_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016953_2 "by_pointer.render.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016953, VkglTestCase_016953_1, VkglTestCase_016953_2);

#define VkglTestCase_017290_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017290_2 "rm.by_value.render.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017290, VkglTestCase_017290_1, VkglTestCase_017290_2);

#define VkglTestCase_017291_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017291_2 "m.by_value.render.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017291, VkglTestCase_017291_1, VkglTestCase_017291_2);

#define VkglTestCase_017292_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017292_2 "orm.by_value.render.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017292, VkglTestCase_017292_1, VkglTestCase_017292_2);

#define VkglTestCase_017293_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017293_2 "rm.by_value.render.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017293, VkglTestCase_017293_1, VkglTestCase_017293_2);

#define VkglTestCase_017294_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017294_2 "m.by_value.render.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017294, VkglTestCase_017294_1, VkglTestCase_017294_2);

#define VkglTestCase_017295_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017295_2 "orm.by_value.render.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017295, VkglTestCase_017295_1, VkglTestCase_017295_2);

#define VkglTestCase_017296_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017296_2 "rm.by_value.render.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017296, VkglTestCase_017296_1, VkglTestCase_017296_2);

#define VkglTestCase_017297_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017297_2 "m.by_value.render.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017297, VkglTestCase_017297_1, VkglTestCase_017297_2);

#define VkglTestCase_017298_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017298_2 "orm.by_value.render.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017298, VkglTestCase_017298_1, VkglTestCase_017298_2);

#define VkglTestCase_017299_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017299_2 "rm.by_value.render.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017299, VkglTestCase_017299_1, VkglTestCase_017299_2);

#define VkglTestCase_017300_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017300_2 "m.by_value.render.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017300, VkglTestCase_017300_1, VkglTestCase_017300_2);

#define VkglTestCase_017301_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017301_2 "orm.by_value.render.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017301, VkglTestCase_017301_1, VkglTestCase_017301_2);

#define VkglTestCase_017302_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017302_2 "orm.by_value.render.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017302, VkglTestCase_017302_1, VkglTestCase_017302_2);

#define VkglTestCase_017303_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017303_2 "rm.by_value.render.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017303, VkglTestCase_017303_1, VkglTestCase_017303_2);

#define VkglTestCase_017304_1 "dEQP-GLES31.functional.program_uni"
#define VkglTestCase_017304_2 "form.by_value.render.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017304, VkglTestCase_017304_1, VkglTestCase_017304_2);

#define VkglTestCase_017305_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017305_2 "rm.by_value.render.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017305, VkglTestCase_017305_1, VkglTestCase_017305_2);

#define VkglTestCase_017306_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017306_2 "m.by_value.render.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017306, VkglTestCase_017306_1, VkglTestCase_017306_2);

#define VkglTestCase_017307_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017307_2 "orm.by_value.render.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017307, VkglTestCase_017307_1, VkglTestCase_017307_2);

#define VkglTestCase_017308_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017308_2 "rm.by_value.render.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017308, VkglTestCase_017308_1, VkglTestCase_017308_2);

#define VkglTestCase_017309_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017309_2 "m.by_value.render.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017309, VkglTestCase_017309_1, VkglTestCase_017309_2);

#define VkglTestCase_017310_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017310_2 "orm.by_value.render.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017310, VkglTestCase_017310_1, VkglTestCase_017310_2);

#define VkglTestCase_017311_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017311_2 "rm.by_value.render.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017311, VkglTestCase_017311_1, VkglTestCase_017311_2);

#define VkglTestCase_017312_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017312_2 "m.by_value.render.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017312, VkglTestCase_017312_1, VkglTestCase_017312_2);

#define VkglTestCase_017313_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017313_2 "orm.by_value.render.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017313, VkglTestCase_017313_1, VkglTestCase_017313_2);

#define VkglTestCase_017314_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017314_2 "rm.by_value.render.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017314, VkglTestCase_017314_1, VkglTestCase_017314_2);

#define VkglTestCase_017315_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017315_2 "m.by_value.render.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017315, VkglTestCase_017315_1, VkglTestCase_017315_2);

#define VkglTestCase_017316_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017316_2 "orm.by_value.render.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017316, VkglTestCase_017316_1, VkglTestCase_017316_2);

#define VkglTestCase_017317_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017317_2 "rm.by_value.render.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017317, VkglTestCase_017317_1, VkglTestCase_017317_2);

#define VkglTestCase_017318_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017318_2 "m.by_value.render.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017318, VkglTestCase_017318_1, VkglTestCase_017318_2);

#define VkglTestCase_017319_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017319_2 "orm.by_value.render.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017319, VkglTestCase_017319_1, VkglTestCase_017319_2);

#define VkglTestCase_017320_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017320_2 "rm.by_value.render.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017320, VkglTestCase_017320_1, VkglTestCase_017320_2);

#define VkglTestCase_017321_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017321_2 "m.by_value.render.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017321, VkglTestCase_017321_1, VkglTestCase_017321_2);

#define VkglTestCase_017322_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017322_2 "orm.by_value.render.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017322, VkglTestCase_017322_1, VkglTestCase_017322_2);

#define VkglTestCase_017323_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017323_2 "rm.by_value.render.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017323, VkglTestCase_017323_1, VkglTestCase_017323_2);

#define VkglTestCase_017324_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017324_2 "m.by_value.render.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017324, VkglTestCase_017324_1, VkglTestCase_017324_2);

#define VkglTestCase_017325_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017325_2 "orm.by_value.render.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017325, VkglTestCase_017325_1, VkglTestCase_017325_2);

#define VkglTestCase_017326_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017326_2 "rm.by_value.render.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017326, VkglTestCase_017326_1, VkglTestCase_017326_2);

#define VkglTestCase_017327_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017327_2 "m.by_value.render.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017327, VkglTestCase_017327_1, VkglTestCase_017327_2);

#define VkglTestCase_017328_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017328_2 "orm.by_value.render.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017328, VkglTestCase_017328_1, VkglTestCase_017328_2);

#define VkglTestCase_017329_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017329_2 "rm.by_value.render.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017329, VkglTestCase_017329_1, VkglTestCase_017329_2);

#define VkglTestCase_017330_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017330_2 "m.by_value.render.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017330, VkglTestCase_017330_1, VkglTestCase_017330_2);

#define VkglTestCase_017331_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017331_2 "orm.by_value.render.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017331, VkglTestCase_017331_1, VkglTestCase_017331_2);

#define VkglTestCase_017332_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017332_2 "rm.by_value.render.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017332, VkglTestCase_017332_1, VkglTestCase_017332_2);

#define VkglTestCase_017333_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017333_2 "m.by_value.render.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017333, VkglTestCase_017333_1, VkglTestCase_017333_2);

#define VkglTestCase_017334_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017334_2 "orm.by_value.render.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017334, VkglTestCase_017334_1, VkglTestCase_017334_2);

#define VkglTestCase_017335_1 "dEQP-GLES31.functional.program_unifo"
#define VkglTestCase_017335_2 "rm.by_value.render.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017335, VkglTestCase_017335_1, VkglTestCase_017335_2);

#define VkglTestCase_017336_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017336_2 "m.by_value.render.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017336, VkglTestCase_017336_1, VkglTestCase_017336_2);

#define VkglTestCase_017337_1 "dEQP-GLES31.functional.program_unif"
#define VkglTestCase_017337_2 "orm.by_value.render.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017337, VkglTestCase_017337_1, VkglTestCase_017337_2);

#define VkglTestCase_017338_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017338_2 ".by_value.render.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017338, VkglTestCase_017338_1, VkglTestCase_017338_2);

#define VkglTestCase_017339_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017339_2 "by_value.render.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017339, VkglTestCase_017339_1, VkglTestCase_017339_2);

#define VkglTestCase_017340_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017340_2 "m.by_value.render.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017340, VkglTestCase_017340_1, VkglTestCase_017340_2);

#define VkglTestCase_017341_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017341_2 "by_value.render.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017341, VkglTestCase_017341_1, VkglTestCase_017341_2);

#define VkglTestCase_017342_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017342_2 "y_value.render.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017342, VkglTestCase_017342_1, VkglTestCase_017342_2);

#define VkglTestCase_017343_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017343_2 ".by_value.render.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017343, VkglTestCase_017343_1, VkglTestCase_017343_2);
