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

#define VkglTestCase_004854_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004854_2 "ariables.invalid.invariant_interp_precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004854, VkglTestCase_004854_1, VkglTestCase_004854_2);

#define VkglTestCase_004855_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004855_2 "ariables.invalid.invariant_storage_interp_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004855, VkglTestCase_004855_1, VkglTestCase_004855_2);

#define VkglTestCase_004856_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004856_2 "ariables.invalid.invariant_storage_precision_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004856, VkglTestCase_004856_1, VkglTestCase_004856_2);

#define VkglTestCase_004857_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004857_2 "ariables.invalid.invariant_precision_interp_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004857, VkglTestCase_004857_1, VkglTestCase_004857_2);

#define VkglTestCase_004858_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004858_2 "ariables.invalid.invariant_precision_storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004858, VkglTestCase_004858_1, VkglTestCase_004858_2);

#define VkglTestCase_004859_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004859_2 "ariables.invalid.interp_invariant_storage_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004859, VkglTestCase_004859_1, VkglTestCase_004859_2);

#define VkglTestCase_004860_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004860_2 "ariables.invalid.interp_invariant_precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004860, VkglTestCase_004860_1, VkglTestCase_004860_2);

#define VkglTestCase_004861_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004861_2 "ariables.invalid.interp_storage_invariant_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004861, VkglTestCase_004861_1, VkglTestCase_004861_2);

#define VkglTestCase_004862_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004862_2 "ariables.invalid.interp_storage_precision_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004862, VkglTestCase_004862_1, VkglTestCase_004862_2);

#define VkglTestCase_004863_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004863_2 "ariables.invalid.interp_precision_invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004863, VkglTestCase_004863_1, VkglTestCase_004863_2);

#define VkglTestCase_004864_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004864_2 "ariables.invalid.interp_precision_storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004864, VkglTestCase_004864_1, VkglTestCase_004864_2);

#define VkglTestCase_004865_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004865_2 "ariables.invalid.storage_invariant_interp_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004865, VkglTestCase_004865_1, VkglTestCase_004865_2);

#define VkglTestCase_004866_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004866_2 "ariables.invalid.storage_invariant_precision_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004866, VkglTestCase_004866_1, VkglTestCase_004866_2);

#define VkglTestCase_004867_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004867_2 "ariables.invalid.storage_interp_invariant_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004867, VkglTestCase_004867_1, VkglTestCase_004867_2);

#define VkglTestCase_004868_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004868_2 "ariables.invalid.storage_interp_precision_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004868, VkglTestCase_004868_1, VkglTestCase_004868_2);

#define VkglTestCase_004869_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004869_2 "ariables.invalid.storage_precision_invariant_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004869, VkglTestCase_004869_1, VkglTestCase_004869_2);

#define VkglTestCase_004870_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004870_2 "ariables.invalid.storage_precision_interp_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004870, VkglTestCase_004870_1, VkglTestCase_004870_2);

#define VkglTestCase_004871_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004871_2 "ariables.invalid.precision_invariant_interp_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004871, VkglTestCase_004871_1, VkglTestCase_004871_2);

#define VkglTestCase_004872_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004872_2 "ariables.invalid.precision_invariant_storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004872, VkglTestCase_004872_1, VkglTestCase_004872_2);

#define VkglTestCase_004873_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004873_2 "ariables.invalid.precision_interp_invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004873, VkglTestCase_004873_1, VkglTestCase_004873_2);

#define VkglTestCase_004874_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004874_2 "ariables.invalid.precision_interp_storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004874, VkglTestCase_004874_1, VkglTestCase_004874_2);

#define VkglTestCase_004875_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004875_2 "ariables.invalid.precision_storage_invariant_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004875, VkglTestCase_004875_1, VkglTestCase_004875_2);

#define VkglTestCase_004876_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004876_2 "ariables.invalid.precision_storage_interp_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004876, VkglTestCase_004876_1, VkglTestCase_004876_2);

#define VkglTestCase_004877_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004877_2 "der.variables.invalid.interp_precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004877, VkglTestCase_004877_1, VkglTestCase_004877_2);

#define VkglTestCase_004878_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004878_2 "der.variables.invalid.storage_interp_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004878, VkglTestCase_004878_1, VkglTestCase_004878_2);

#define VkglTestCase_004879_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004879_2 "der.variables.invalid.storage_precision_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004879, VkglTestCase_004879_1, VkglTestCase_004879_2);

#define VkglTestCase_004880_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004880_2 "der.variables.invalid.precision_interp_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004880, VkglTestCase_004880_1, VkglTestCase_004880_2);

#define VkglTestCase_004881_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004881_2 "der.variables.invalid.precision_storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004881, VkglTestCase_004881_1, VkglTestCase_004881_2);

#define VkglTestCase_004882_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004882_2 "der.variables.invalid.invariant_storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004882, VkglTestCase_004882_1, VkglTestCase_004882_2);

#define VkglTestCase_004883_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004883_2 "der.variables.invalid.interp_invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004883, VkglTestCase_004883_1, VkglTestCase_004883_2);

#define VkglTestCase_004884_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004884_2 "der.variables.invalid.interp_storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004884, VkglTestCase_004884_1, VkglTestCase_004884_2);

#define VkglTestCase_004885_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004885_2 "der.variables.invalid.storage_invariant_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004885, VkglTestCase_004885_1, VkglTestCase_004885_2);

#define VkglTestCase_004886_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004886_2 "der.variables.invalid.storage_interp_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004886, VkglTestCase_004886_1, VkglTestCase_004886_2);

#define VkglTestCase_004887_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004887_2 "er.variables.invalid.invariant_precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004887, VkglTestCase_004887_1, VkglTestCase_004887_2);

#define VkglTestCase_004888_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004888_2 "er.variables.invalid.storage_invariant_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004888, VkglTestCase_004888_1, VkglTestCase_004888_2);

#define VkglTestCase_004889_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004889_2 "er.variables.invalid.storage_precision_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004889, VkglTestCase_004889_1, VkglTestCase_004889_2);

#define VkglTestCase_004890_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004890_2 "er.variables.invalid.precision_invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004890, VkglTestCase_004890_1, VkglTestCase_004890_2);

#define VkglTestCase_004891_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004891_2 "er.variables.invalid.precision_storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004891, VkglTestCase_004891_1, VkglTestCase_004891_2);

#define VkglTestCase_004892_1 "dEQP-GLES3.functional.shaders.qualificatio"
#define VkglTestCase_004892_2 "n_order.variables.invalid.precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004892, VkglTestCase_004892_1, VkglTestCase_004892_2);

#define VkglTestCase_004893_1 "dEQP-GLES3.functional.shaders.qualificati"
#define VkglTestCase_004893_2 "on_order.variables.invalid.storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004893, VkglTestCase_004893_1, VkglTestCase_004893_2);

#define VkglTestCase_004894_1 "dEQP-GLES3.functional.shaders.qualificatio"
#define VkglTestCase_004894_2 "n_order.variables.invalid.storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004894, VkglTestCase_004894_1, VkglTestCase_004894_2);

#define VkglTestCase_004895_1 "dEQP-GLES3.functional.shaders.qualification_order.variables"
#define VkglTestCase_004895_2 ".invalid.invariant_interp_storage_precision_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004895, VkglTestCase_004895_1, VkglTestCase_004895_2);

#define VkglTestCase_004896_1 "dEQP-GLES3.functional.shaders.qualification_order.vari"
#define VkglTestCase_004896_2 "ables.invalid.interp_storage_precision_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004896, VkglTestCase_004896_1, VkglTestCase_004896_2);

#define VkglTestCase_004897_1 "dEQP-GLES3.functional.shaders.qualification_order.vari"
#define VkglTestCase_004897_2 "ables.invalid.invariant_interp_storage_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004897, VkglTestCase_004897_1, VkglTestCase_004897_2);

#define VkglTestCase_004898_1 "dEQP-GLES3.functional.shaders.qualification_order.varia"
#define VkglTestCase_004898_2 "bles.invalid.invariant_storage_precision_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004898, VkglTestCase_004898_1, VkglTestCase_004898_2);

#define VkglTestCase_004899_1 "dEQP-GLES3.functional.shaders.qualification_order."
#define VkglTestCase_004899_2 "variables.invalid.storage_precision_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004899, VkglTestCase_004899_1, VkglTestCase_004899_2);

#define VkglTestCase_004900_1 "dEQP-GLES3.functional.shaders.qualification_order"
#define VkglTestCase_004900_2 ".variables.invalid.interp_storage_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004900, VkglTestCase_004900_1, VkglTestCase_004900_2);

#define VkglTestCase_004901_1 "dEQP-GLES3.functional.shaders.qualification_order."
#define VkglTestCase_004901_2 "variables.invalid.invariant_storage_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004901, VkglTestCase_004901_1, VkglTestCase_004901_2);
