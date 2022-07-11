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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033695_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033695_2 "attributes.stride.3_float2_0_float2_0_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033695, VkglTestCase_033695_1, VkglTestCase_033695_2);

#define VkglTestCase_033696_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033696_2 "attributes.stride.3_float2_0_float2_0_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033696, VkglTestCase_033696_1, VkglTestCase_033696_2);

#define VkglTestCase_033697_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033697_2 "ttributes.stride.3_float2_0_float2_0_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033697, VkglTestCase_033697_1, VkglTestCase_033697_2);

#define VkglTestCase_033698_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033698_2 "ttributes.stride.3_float2_0_float2_0_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033698, VkglTestCase_033698_1, VkglTestCase_033698_2);

#define VkglTestCase_033699_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033699_2 "attributes.stride.3_float2_0_float2_8_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033699, VkglTestCase_033699_1, VkglTestCase_033699_2);

#define VkglTestCase_033700_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033700_2 "attributes.stride.3_float2_0_float2_8_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033700, VkglTestCase_033700_1, VkglTestCase_033700_2);

#define VkglTestCase_033701_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033701_2 "ttributes.stride.3_float2_0_float2_8_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033701, VkglTestCase_033701_1, VkglTestCase_033701_2);

#define VkglTestCase_033702_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033702_2 "ttributes.stride.3_float2_0_float2_8_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033702, VkglTestCase_033702_1, VkglTestCase_033702_2);

#define VkglTestCase_033703_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033703_2 "ttributes.stride.3_float2_0_float2_17_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033703, VkglTestCase_033703_1, VkglTestCase_033703_2);

#define VkglTestCase_033704_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033704_2 "ttributes.stride.3_float2_0_float2_17_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033704, VkglTestCase_033704_1, VkglTestCase_033704_2);

#define VkglTestCase_033705_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033705_2 "ttributes.stride.3_float2_0_float2_17_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033705, VkglTestCase_033705_1, VkglTestCase_033705_2);

#define VkglTestCase_033706_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033706_2 "ttributes.stride.3_float2_0_float2_17_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033706, VkglTestCase_033706_1, VkglTestCase_033706_2);

#define VkglTestCase_033707_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033707_2 "ttributes.stride.3_float2_0_float2_32_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033707, VkglTestCase_033707_1, VkglTestCase_033707_2);

#define VkglTestCase_033708_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033708_2 "ttributes.stride.3_float2_0_float2_32_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033708, VkglTestCase_033708_1, VkglTestCase_033708_2);

#define VkglTestCase_033709_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033709_2 "ttributes.stride.3_float2_0_float2_32_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033709, VkglTestCase_033709_1, VkglTestCase_033709_2);

#define VkglTestCase_033710_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033710_2 "ttributes.stride.3_float2_0_float2_32_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033710, VkglTestCase_033710_1, VkglTestCase_033710_2);

#define VkglTestCase_033711_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033711_2 "attributes.stride.3_float2_8_float2_0_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033711, VkglTestCase_033711_1, VkglTestCase_033711_2);

#define VkglTestCase_033712_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033712_2 "attributes.stride.3_float2_8_float2_0_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033712, VkglTestCase_033712_1, VkglTestCase_033712_2);

#define VkglTestCase_033713_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033713_2 "ttributes.stride.3_float2_8_float2_0_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033713, VkglTestCase_033713_1, VkglTestCase_033713_2);

#define VkglTestCase_033714_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033714_2 "ttributes.stride.3_float2_8_float2_0_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033714, VkglTestCase_033714_1, VkglTestCase_033714_2);

#define VkglTestCase_033715_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033715_2 "attributes.stride.3_float2_8_float2_8_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033715, VkglTestCase_033715_1, VkglTestCase_033715_2);

#define VkglTestCase_033716_1 "dEQP-GLES3.functional.vertex_arrays.multiple_"
#define VkglTestCase_033716_2 "attributes.stride.3_float2_8_float2_8_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033716, VkglTestCase_033716_1, VkglTestCase_033716_2);

#define VkglTestCase_033717_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033717_2 "ttributes.stride.3_float2_8_float2_8_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033717, VkglTestCase_033717_1, VkglTestCase_033717_2);

#define VkglTestCase_033718_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033718_2 "ttributes.stride.3_float2_8_float2_8_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033718, VkglTestCase_033718_1, VkglTestCase_033718_2);

#define VkglTestCase_033719_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033719_2 "ttributes.stride.3_float2_8_float2_17_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033719, VkglTestCase_033719_1, VkglTestCase_033719_2);

#define VkglTestCase_033720_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033720_2 "ttributes.stride.3_float2_8_float2_17_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033720, VkglTestCase_033720_1, VkglTestCase_033720_2);

#define VkglTestCase_033721_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033721_2 "ttributes.stride.3_float2_8_float2_17_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033721, VkglTestCase_033721_1, VkglTestCase_033721_2);

#define VkglTestCase_033722_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033722_2 "ttributes.stride.3_float2_8_float2_17_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033722, VkglTestCase_033722_1, VkglTestCase_033722_2);

#define VkglTestCase_033723_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033723_2 "ttributes.stride.3_float2_8_float2_32_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033723, VkglTestCase_033723_1, VkglTestCase_033723_2);

#define VkglTestCase_033724_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033724_2 "ttributes.stride.3_float2_8_float2_32_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033724, VkglTestCase_033724_1, VkglTestCase_033724_2);

#define VkglTestCase_033725_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033725_2 "ttributes.stride.3_float2_8_float2_32_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033725, VkglTestCase_033725_1, VkglTestCase_033725_2);

#define VkglTestCase_033726_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033726_2 "ttributes.stride.3_float2_8_float2_32_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033726, VkglTestCase_033726_1, VkglTestCase_033726_2);

#define VkglTestCase_033727_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033727_2 "ttributes.stride.3_float2_17_float2_0_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033727, VkglTestCase_033727_1, VkglTestCase_033727_2);

#define VkglTestCase_033728_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033728_2 "ttributes.stride.3_float2_17_float2_0_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033728, VkglTestCase_033728_1, VkglTestCase_033728_2);

#define VkglTestCase_033729_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033729_2 "ttributes.stride.3_float2_17_float2_0_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033729, VkglTestCase_033729_1, VkglTestCase_033729_2);

#define VkglTestCase_033730_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033730_2 "ttributes.stride.3_float2_17_float2_0_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033730, VkglTestCase_033730_1, VkglTestCase_033730_2);

#define VkglTestCase_033731_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033731_2 "ttributes.stride.3_float2_17_float2_8_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033731, VkglTestCase_033731_1, VkglTestCase_033731_2);

#define VkglTestCase_033732_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033732_2 "ttributes.stride.3_float2_17_float2_8_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033732, VkglTestCase_033732_1, VkglTestCase_033732_2);

#define VkglTestCase_033733_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033733_2 "ttributes.stride.3_float2_17_float2_8_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033733, VkglTestCase_033733_1, VkglTestCase_033733_2);

#define VkglTestCase_033734_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033734_2 "ttributes.stride.3_float2_17_float2_8_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033734, VkglTestCase_033734_1, VkglTestCase_033734_2);

#define VkglTestCase_033735_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033735_2 "ttributes.stride.3_float2_17_float2_17_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033735, VkglTestCase_033735_1, VkglTestCase_033735_2);

#define VkglTestCase_033736_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033736_2 "ttributes.stride.3_float2_17_float2_17_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033736, VkglTestCase_033736_1, VkglTestCase_033736_2);

#define VkglTestCase_033737_1 "dEQP-GLES3.functional.vertex_arrays.multiple_at"
#define VkglTestCase_033737_2 "tributes.stride.3_float2_17_float2_17_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033737, VkglTestCase_033737_1, VkglTestCase_033737_2);

#define VkglTestCase_033738_1 "dEQP-GLES3.functional.vertex_arrays.multiple_at"
#define VkglTestCase_033738_2 "tributes.stride.3_float2_17_float2_17_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033738, VkglTestCase_033738_1, VkglTestCase_033738_2);

#define VkglTestCase_033739_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033739_2 "ttributes.stride.3_float2_17_float2_32_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033739, VkglTestCase_033739_1, VkglTestCase_033739_2);

#define VkglTestCase_033740_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033740_2 "ttributes.stride.3_float2_17_float2_32_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033740, VkglTestCase_033740_1, VkglTestCase_033740_2);

#define VkglTestCase_033741_1 "dEQP-GLES3.functional.vertex_arrays.multiple_at"
#define VkglTestCase_033741_2 "tributes.stride.3_float2_17_float2_32_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033741, VkglTestCase_033741_1, VkglTestCase_033741_2);

#define VkglTestCase_033742_1 "dEQP-GLES3.functional.vertex_arrays.multiple_at"
#define VkglTestCase_033742_2 "tributes.stride.3_float2_17_float2_32_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033742, VkglTestCase_033742_1, VkglTestCase_033742_2);

#define VkglTestCase_033743_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033743_2 "ttributes.stride.3_float2_32_float2_0_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033743, VkglTestCase_033743_1, VkglTestCase_033743_2);

#define VkglTestCase_033744_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033744_2 "ttributes.stride.3_float2_32_float2_0_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033744, VkglTestCase_033744_1, VkglTestCase_033744_2);

#define VkglTestCase_033745_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033745_2 "ttributes.stride.3_float2_32_float2_0_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033745, VkglTestCase_033745_1, VkglTestCase_033745_2);

#define VkglTestCase_033746_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033746_2 "ttributes.stride.3_float2_32_float2_0_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033746, VkglTestCase_033746_1, VkglTestCase_033746_2);

#define VkglTestCase_033747_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033747_2 "ttributes.stride.3_float2_32_float2_8_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033747, VkglTestCase_033747_1, VkglTestCase_033747_2);

#define VkglTestCase_033748_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033748_2 "ttributes.stride.3_float2_32_float2_8_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033748, VkglTestCase_033748_1, VkglTestCase_033748_2);

#define VkglTestCase_033749_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033749_2 "ttributes.stride.3_float2_32_float2_8_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033749, VkglTestCase_033749_1, VkglTestCase_033749_2);

#define VkglTestCase_033750_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033750_2 "ttributes.stride.3_float2_32_float2_8_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033750, VkglTestCase_033750_1, VkglTestCase_033750_2);

#define VkglTestCase_033751_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033751_2 "ttributes.stride.3_float2_32_float2_17_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033751, VkglTestCase_033751_1, VkglTestCase_033751_2);

#define VkglTestCase_033752_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033752_2 "ttributes.stride.3_float2_32_float2_17_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033752, VkglTestCase_033752_1, VkglTestCase_033752_2);

#define VkglTestCase_033753_1 "dEQP-GLES3.functional.vertex_arrays.multiple_at"
#define VkglTestCase_033753_2 "tributes.stride.3_float2_32_float2_17_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033753, VkglTestCase_033753_1, VkglTestCase_033753_2);

#define VkglTestCase_033754_1 "dEQP-GLES3.functional.vertex_arrays.multiple_at"
#define VkglTestCase_033754_2 "tributes.stride.3_float2_32_float2_17_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033754, VkglTestCase_033754_1, VkglTestCase_033754_2);

#define VkglTestCase_033755_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033755_2 "ttributes.stride.3_float2_32_float2_32_float2_0"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033755, VkglTestCase_033755_1, VkglTestCase_033755_2);

#define VkglTestCase_033756_1 "dEQP-GLES3.functional.vertex_arrays.multiple_a"
#define VkglTestCase_033756_2 "ttributes.stride.3_float2_32_float2_32_float2_8"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033756, VkglTestCase_033756_1, VkglTestCase_033756_2);

#define VkglTestCase_033757_1 "dEQP-GLES3.functional.vertex_arrays.multiple_at"
#define VkglTestCase_033757_2 "tributes.stride.3_float2_32_float2_32_float2_17"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033757, VkglTestCase_033757_1, VkglTestCase_033757_2);

#define VkglTestCase_033758_1 "dEQP-GLES3.functional.vertex_arrays.multiple_at"
#define VkglTestCase_033758_2 "tributes.stride.3_float2_32_float2_32_float2_32"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033758, VkglTestCase_033758_1, VkglTestCase_033758_2);
