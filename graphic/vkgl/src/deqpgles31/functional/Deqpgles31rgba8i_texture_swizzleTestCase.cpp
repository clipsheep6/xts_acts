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
#include "../ActsDeqpgles310014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013107_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013107_2 "d.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013107, VkglTestCase_013107_1, VkglTestCase_013107_2);

#define VkglTestCase_013108_1 "dEQP-GLES31.functional.texture.gather.basic.2"
#define VkglTestCase_013108_2 "d.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013108, VkglTestCase_013108_1, VkglTestCase_013108_2);

#define VkglTestCase_013109_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013109_2 "2d.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013109, VkglTestCase_013109_1, VkglTestCase_013109_2);

#define VkglTestCase_013110_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013110_2 "2d.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013110, VkglTestCase_013110_1, VkglTestCase_013110_2);

#define VkglTestCase_013111_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013111_2 "2d.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013111, VkglTestCase_013111_1, VkglTestCase_013111_2);

#define VkglTestCase_013112_1 "dEQP-GLES31.functional.texture.gather.basic."
#define VkglTestCase_013112_2 "2d.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013112, VkglTestCase_013112_1, VkglTestCase_013112_2);

#define VkglTestCase_013176_1 "dEQP-GLES31.functional.texture.gather.basic.2d_a"
#define VkglTestCase_013176_2 "rray.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013176, VkglTestCase_013176_1, VkglTestCase_013176_2);

#define VkglTestCase_013177_1 "dEQP-GLES31.functional.texture.gather.basic.2d_a"
#define VkglTestCase_013177_2 "rray.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013177, VkglTestCase_013177_1, VkglTestCase_013177_2);

#define VkglTestCase_013178_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013178_2 "array.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013178, VkglTestCase_013178_1, VkglTestCase_013178_2);

#define VkglTestCase_013179_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013179_2 "array.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013179, VkglTestCase_013179_1, VkglTestCase_013179_2);

#define VkglTestCase_013180_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013180_2 "array.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013180, VkglTestCase_013180_1, VkglTestCase_013180_2);

#define VkglTestCase_013181_1 "dEQP-GLES31.functional.texture.gather.basic.2d_"
#define VkglTestCase_013181_2 "array.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013181, VkglTestCase_013181_1, VkglTestCase_013181_2);

#define VkglTestCase_013263_1 "dEQP-GLES31.functional.texture.gather.basic.cu"
#define VkglTestCase_013263_2 "be.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013263, VkglTestCase_013263_1, VkglTestCase_013263_2);

#define VkglTestCase_013264_1 "dEQP-GLES31.functional.texture.gather.basic.cu"
#define VkglTestCase_013264_2 "be.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013264, VkglTestCase_013264_1, VkglTestCase_013264_2);

#define VkglTestCase_013265_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013265_2 "ube.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013265, VkglTestCase_013265_1, VkglTestCase_013265_2);

#define VkglTestCase_013266_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013266_2 "ube.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013266, VkglTestCase_013266_1, VkglTestCase_013266_2);

#define VkglTestCase_013267_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013267_2 "ube.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013267, VkglTestCase_013267_1, VkglTestCase_013267_2);

#define VkglTestCase_013268_1 "dEQP-GLES31.functional.texture.gather.basic.c"
#define VkglTestCase_013268_2 "ube.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013268, VkglTestCase_013268_1, VkglTestCase_013268_2);

#define VkglTestCase_013385_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013385_2 "ion_offset.2d.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013385, VkglTestCase_013385_1, VkglTestCase_013385_2);

#define VkglTestCase_013386_1 "dEQP-GLES31.functional.texture.gather.offset.implementati"
#define VkglTestCase_013386_2 "on_offset.2d.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013386, VkglTestCase_013386_1, VkglTestCase_013386_2);

#define VkglTestCase_013387_1 "dEQP-GLES31.functional.texture.gather.offset.implementat"
#define VkglTestCase_013387_2 "ion_offset.2d.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013387, VkglTestCase_013387_1, VkglTestCase_013387_2);

#define VkglTestCase_013388_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013388_2 "tion_offset.2d.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013388, VkglTestCase_013388_1, VkglTestCase_013388_2);

#define VkglTestCase_013389_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013389_2 "tion_offset.2d.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013389, VkglTestCase_013389_1, VkglTestCase_013389_2);

#define VkglTestCase_013390_1 "dEQP-GLES31.functional.texture.gather.offset.implementa"
#define VkglTestCase_013390_2 "tion_offset.2d.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013390, VkglTestCase_013390_1, VkglTestCase_013390_2);

#define VkglTestCase_013454_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013454_2 "_offset.2d_array.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013454, VkglTestCase_013454_1, VkglTestCase_013454_2);

#define VkglTestCase_013455_1 "dEQP-GLES31.functional.texture.gather.offset.implementation_"
#define VkglTestCase_013455_2 "offset.2d_array.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013455, VkglTestCase_013455_1, VkglTestCase_013455_2);

#define VkglTestCase_013456_1 "dEQP-GLES31.functional.texture.gather.offset.implementation"
#define VkglTestCase_013456_2 "_offset.2d_array.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013456, VkglTestCase_013456_1, VkglTestCase_013456_2);

#define VkglTestCase_013457_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013457_2 "n_offset.2d_array.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013457, VkglTestCase_013457_1, VkglTestCase_013457_2);

#define VkglTestCase_013458_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013458_2 "n_offset.2d_array.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013458, VkglTestCase_013458_1, VkglTestCase_013458_2);

#define VkglTestCase_013459_1 "dEQP-GLES31.functional.texture.gather.offset.implementatio"
#define VkglTestCase_013459_2 "n_offset.2d_array.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013459, VkglTestCase_013459_1, VkglTestCase_013459_2);

#define VkglTestCase_013583_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013583_2 "ntation_offset.2d.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013583, VkglTestCase_013583_1, VkglTestCase_013583_2);

#define VkglTestCase_013584_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implemen"
#define VkglTestCase_013584_2 "tation_offset.2d.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013584, VkglTestCase_013584_1, VkglTestCase_013584_2);

#define VkglTestCase_013585_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.impleme"
#define VkglTestCase_013585_2 "ntation_offset.2d.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013585, VkglTestCase_013585_1, VkglTestCase_013585_2);

#define VkglTestCase_013586_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013586_2 "entation_offset.2d.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013586, VkglTestCase_013586_1, VkglTestCase_013586_2);

#define VkglTestCase_013587_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013587_2 "entation_offset.2d.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013587, VkglTestCase_013587_1, VkglTestCase_013587_2);

#define VkglTestCase_013588_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implem"
#define VkglTestCase_013588_2 "entation_offset.2d.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013588, VkglTestCase_013588_1, VkglTestCase_013588_2);

#define VkglTestCase_013652_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013652_2 "tion_offset.2d_array.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013652, VkglTestCase_013652_1, VkglTestCase_013652_2);

#define VkglTestCase_013653_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementat"
#define VkglTestCase_013653_2 "ion_offset.2d_array.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013653, VkglTestCase_013653_1, VkglTestCase_013653_2);

#define VkglTestCase_013654_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implementa"
#define VkglTestCase_013654_2 "tion_offset.2d_array.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013654, VkglTestCase_013654_1, VkglTestCase_013654_2);

#define VkglTestCase_013655_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013655_2 "ation_offset.2d_array.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013655, VkglTestCase_013655_1, VkglTestCase_013655_2);

#define VkglTestCase_013656_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013656_2 "ation_offset.2d_array.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013656, VkglTestCase_013656_1, VkglTestCase_013656_2);

#define VkglTestCase_013657_1 "dEQP-GLES31.functional.texture.gather.offset_dynamic.implement"
#define VkglTestCase_013657_2 "ation_offset.2d_array.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013657, VkglTestCase_013657_1, VkglTestCase_013657_2);

#define VkglTestCase_013781_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013781_2 "ion_offset.2d.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013781, VkglTestCase_013781_1, VkglTestCase_013781_2);

#define VkglTestCase_013782_1 "dEQP-GLES31.functional.texture.gather.offsets.implementat"
#define VkglTestCase_013782_2 "ion_offset.2d.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013782, VkglTestCase_013782_1, VkglTestCase_013782_2);

#define VkglTestCase_013783_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013783_2 "tion_offset.2d.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013783, VkglTestCase_013783_1, VkglTestCase_013783_2);

#define VkglTestCase_013784_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013784_2 "tion_offset.2d.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013784, VkglTestCase_013784_1, VkglTestCase_013784_2);

#define VkglTestCase_013785_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013785_2 "tion_offset.2d.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013785, VkglTestCase_013785_1, VkglTestCase_013785_2);

#define VkglTestCase_013786_1 "dEQP-GLES31.functional.texture.gather.offsets.implementa"
#define VkglTestCase_013786_2 "tion_offset.2d.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013786, VkglTestCase_013786_1, VkglTestCase_013786_2);

#define VkglTestCase_013850_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation"
#define VkglTestCase_013850_2 "_offset.2d_array.rgba8i.texture_swizzle.red_green_blue_alpha"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013850, VkglTestCase_013850_1, VkglTestCase_013850_2);

#define VkglTestCase_013851_1 "dEQP-GLES31.functional.texture.gather.offsets.implementation"
#define VkglTestCase_013851_2 "_offset.2d_array.rgba8i.texture_swizzle.green_blue_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013851, VkglTestCase_013851_1, VkglTestCase_013851_2);

#define VkglTestCase_013852_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013852_2 "n_offset.2d_array.rgba8i.texture_swizzle.blue_alpha_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013852, VkglTestCase_013852_1, VkglTestCase_013852_2);

#define VkglTestCase_013853_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013853_2 "n_offset.2d_array.rgba8i.texture_swizzle.alpha_zero_one_red"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013853, VkglTestCase_013853_1, VkglTestCase_013853_2);

#define VkglTestCase_013854_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013854_2 "n_offset.2d_array.rgba8i.texture_swizzle.zero_one_red_green"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013854, VkglTestCase_013854_1, VkglTestCase_013854_2);

#define VkglTestCase_013855_1 "dEQP-GLES31.functional.texture.gather.offsets.implementatio"
#define VkglTestCase_013855_2 "n_offset.2d_array.rgba8i.texture_swizzle.one_red_green_blue"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013855, VkglTestCase_013855_1, VkglTestCase_013855_2);
