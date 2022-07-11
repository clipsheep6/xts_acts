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
#include "../ActsDeqpgles30024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023203_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023203_2 "tc_10x6.clamp_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023203, VkglTestCase_023203_1, VkglTestCase_023203_2);

#define VkglTestCase_023204_1 "dEQP-GLES3.functional.texture.wrap.a"
#define VkglTestCase_023204_2 "stc_10x6.clamp_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023204, VkglTestCase_023204_1, VkglTestCase_023204_2);

#define VkglTestCase_023205_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023205_2 "tc_10x6.clamp_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023205, VkglTestCase_023205_1, VkglTestCase_023205_2);

#define VkglTestCase_023206_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023206_2 "tc_10x6.clamp_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023206, VkglTestCase_023206_1, VkglTestCase_023206_2);

#define VkglTestCase_023207_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023207_2 "tc_10x6.clamp_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023207, VkglTestCase_023207_1, VkglTestCase_023207_2);

#define VkglTestCase_023208_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023208_2 "tc_10x6.clamp_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023208, VkglTestCase_023208_1, VkglTestCase_023208_2);

#define VkglTestCase_023209_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023209_2 "tc_10x6.repeat_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023209, VkglTestCase_023209_1, VkglTestCase_023209_2);

#define VkglTestCase_023210_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023210_2 "tc_10x6.repeat_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023210, VkglTestCase_023210_1, VkglTestCase_023210_2);

#define VkglTestCase_023211_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023211_2 "c_10x6.repeat_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023211, VkglTestCase_023211_1, VkglTestCase_023211_2);

#define VkglTestCase_023212_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023212_2 "tc_10x6.repeat_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023212, VkglTestCase_023212_1, VkglTestCase_023212_2);

#define VkglTestCase_023213_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023213_2 "c_10x6.repeat_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023213, VkglTestCase_023213_1, VkglTestCase_023213_2);

#define VkglTestCase_023214_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023214_2 "tc_10x6.repeat_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023214, VkglTestCase_023214_1, VkglTestCase_023214_2);

#define VkglTestCase_023215_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023215_2 "tc_10x6.mirror_clamp_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023215, VkglTestCase_023215_1, VkglTestCase_023215_2);

#define VkglTestCase_023216_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023216_2 "tc_10x6.mirror_clamp_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023216, VkglTestCase_023216_1, VkglTestCase_023216_2);

#define VkglTestCase_023217_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023217_2 "c_10x6.mirror_repeat_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023217, VkglTestCase_023217_1, VkglTestCase_023217_2);

#define VkglTestCase_023218_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023218_2 "tc_10x6.mirror_repeat_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023218, VkglTestCase_023218_1, VkglTestCase_023218_2);

#define VkglTestCase_023219_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023219_2 "c_10x6.mirror_mirror_nearest_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023219, VkglTestCase_023219_1, VkglTestCase_023219_2);

#define VkglTestCase_023220_1 "dEQP-GLES3.functional.texture.wrap.as"
#define VkglTestCase_023220_2 "tc_10x6.mirror_mirror_linear_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023220, VkglTestCase_023220_1, VkglTestCase_023220_2);

#define VkglTestCase_023221_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023221_2 "_10x6.clamp_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023221, VkglTestCase_023221_1, VkglTestCase_023221_2);

#define VkglTestCase_023222_1 "dEQP-GLES3.functional.texture.wrap.ast"
#define VkglTestCase_023222_2 "c_10x6.clamp_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023222, VkglTestCase_023222_1, VkglTestCase_023222_2);

#define VkglTestCase_023223_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023223_2 "_10x6.clamp_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023223, VkglTestCase_023223_1, VkglTestCase_023223_2);

#define VkglTestCase_023224_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023224_2 "_10x6.clamp_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023224, VkglTestCase_023224_1, VkglTestCase_023224_2);

#define VkglTestCase_023225_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023225_2 "_10x6.clamp_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023225, VkglTestCase_023225_1, VkglTestCase_023225_2);

#define VkglTestCase_023226_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023226_2 "_10x6.clamp_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023226, VkglTestCase_023226_1, VkglTestCase_023226_2);

#define VkglTestCase_023227_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023227_2 "_10x6.repeat_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023227, VkglTestCase_023227_1, VkglTestCase_023227_2);

#define VkglTestCase_023228_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023228_2 "_10x6.repeat_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023228, VkglTestCase_023228_1, VkglTestCase_023228_2);

#define VkglTestCase_023229_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023229_2 "10x6.repeat_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023229, VkglTestCase_023229_1, VkglTestCase_023229_2);

#define VkglTestCase_023230_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023230_2 "_10x6.repeat_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023230, VkglTestCase_023230_1, VkglTestCase_023230_2);

#define VkglTestCase_023231_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023231_2 "10x6.repeat_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023231, VkglTestCase_023231_1, VkglTestCase_023231_2);

#define VkglTestCase_023232_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023232_2 "_10x6.repeat_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023232, VkglTestCase_023232_1, VkglTestCase_023232_2);

#define VkglTestCase_023233_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023233_2 "_10x6.mirror_clamp_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023233, VkglTestCase_023233_1, VkglTestCase_023233_2);

#define VkglTestCase_023234_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023234_2 "_10x6.mirror_clamp_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023234, VkglTestCase_023234_1, VkglTestCase_023234_2);

#define VkglTestCase_023235_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023235_2 "10x6.mirror_repeat_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023235, VkglTestCase_023235_1, VkglTestCase_023235_2);

#define VkglTestCase_023236_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023236_2 "_10x6.mirror_repeat_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023236, VkglTestCase_023236_1, VkglTestCase_023236_2);

#define VkglTestCase_023237_1 "dEQP-GLES3.functional.texture.wrap.astc_"
#define VkglTestCase_023237_2 "10x6.mirror_mirror_nearest_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023237, VkglTestCase_023237_1, VkglTestCase_023237_2);

#define VkglTestCase_023238_1 "dEQP-GLES3.functional.texture.wrap.astc"
#define VkglTestCase_023238_2 "_10x6.mirror_mirror_linear_not_divisible"
SHRINK_HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023238, VkglTestCase_023238_1, VkglTestCase_023238_2);
