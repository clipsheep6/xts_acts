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
#include "../ActsDeqpgles30022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021189_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021189_2 "random.trigonometric.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021189, VkglTestCase_021189_1, VkglTestCase_021189_2);

#define VkglTestCase_021190_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021190_2 "random.trigonometric.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021190, VkglTestCase_021190_1, VkglTestCase_021190_2);

#define VkglTestCase_021191_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021191_2 "random.trigonometric.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021191, VkglTestCase_021191_1, VkglTestCase_021191_2);

#define VkglTestCase_021192_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021192_2 "random.trigonometric.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021192, VkglTestCase_021192_1, VkglTestCase_021192_2);

#define VkglTestCase_021193_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021193_2 "random.trigonometric.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021193, VkglTestCase_021193_1, VkglTestCase_021193_2);

#define VkglTestCase_021194_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021194_2 "random.trigonometric.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021194, VkglTestCase_021194_1, VkglTestCase_021194_2);

#define VkglTestCase_021195_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021195_2 "random.trigonometric.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021195, VkglTestCase_021195_1, VkglTestCase_021195_2);

#define VkglTestCase_021196_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021196_2 "random.trigonometric.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021196, VkglTestCase_021196_1, VkglTestCase_021196_2);

#define VkglTestCase_021197_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021197_2 "random.trigonometric.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021197, VkglTestCase_021197_1, VkglTestCase_021197_2);

#define VkglTestCase_021198_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_021198_2 "random.trigonometric.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021198, VkglTestCase_021198_1, VkglTestCase_021198_2);

#define VkglTestCase_021199_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021199_2 "andom.trigonometric.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021199, VkglTestCase_021199_1, VkglTestCase_021199_2);

#define VkglTestCase_021200_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021200_2 "andom.trigonometric.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021200, VkglTestCase_021200_1, VkglTestCase_021200_2);

#define VkglTestCase_021201_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021201_2 "andom.trigonometric.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021201, VkglTestCase_021201_1, VkglTestCase_021201_2);

#define VkglTestCase_021202_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021202_2 "andom.trigonometric.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021202, VkglTestCase_021202_1, VkglTestCase_021202_2);

#define VkglTestCase_021203_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021203_2 "andom.trigonometric.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021203, VkglTestCase_021203_1, VkglTestCase_021203_2);

#define VkglTestCase_021204_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021204_2 "andom.trigonometric.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021204, VkglTestCase_021204_1, VkglTestCase_021204_2);

#define VkglTestCase_021205_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021205_2 "andom.trigonometric.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021205, VkglTestCase_021205_1, VkglTestCase_021205_2);

#define VkglTestCase_021206_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021206_2 "andom.trigonometric.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021206, VkglTestCase_021206_1, VkglTestCase_021206_2);

#define VkglTestCase_021207_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021207_2 "andom.trigonometric.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021207, VkglTestCase_021207_1, VkglTestCase_021207_2);

#define VkglTestCase_021208_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021208_2 "andom.trigonometric.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021208, VkglTestCase_021208_1, VkglTestCase_021208_2);

#define VkglTestCase_021209_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021209_2 "andom.trigonometric.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021209, VkglTestCase_021209_1, VkglTestCase_021209_2);

#define VkglTestCase_021210_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021210_2 "andom.trigonometric.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021210, VkglTestCase_021210_1, VkglTestCase_021210_2);

#define VkglTestCase_021211_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021211_2 "andom.trigonometric.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021211, VkglTestCase_021211_1, VkglTestCase_021211_2);

#define VkglTestCase_021212_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021212_2 "andom.trigonometric.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021212, VkglTestCase_021212_1, VkglTestCase_021212_2);

#define VkglTestCase_021213_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021213_2 "andom.trigonometric.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021213, VkglTestCase_021213_1, VkglTestCase_021213_2);

#define VkglTestCase_021214_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021214_2 "andom.trigonometric.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021214, VkglTestCase_021214_1, VkglTestCase_021214_2);

#define VkglTestCase_021215_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021215_2 "andom.trigonometric.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021215, VkglTestCase_021215_1, VkglTestCase_021215_2);

#define VkglTestCase_021216_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021216_2 "andom.trigonometric.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021216, VkglTestCase_021216_1, VkglTestCase_021216_2);

#define VkglTestCase_021217_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021217_2 "andom.trigonometric.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021217, VkglTestCase_021217_1, VkglTestCase_021217_2);

#define VkglTestCase_021218_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021218_2 "andom.trigonometric.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021218, VkglTestCase_021218_1, VkglTestCase_021218_2);

#define VkglTestCase_021219_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021219_2 "andom.trigonometric.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021219, VkglTestCase_021219_1, VkglTestCase_021219_2);

#define VkglTestCase_021220_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021220_2 "andom.trigonometric.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021220, VkglTestCase_021220_1, VkglTestCase_021220_2);

#define VkglTestCase_021221_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021221_2 "andom.trigonometric.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021221, VkglTestCase_021221_1, VkglTestCase_021221_2);

#define VkglTestCase_021222_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021222_2 "andom.trigonometric.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021222, VkglTestCase_021222_1, VkglTestCase_021222_2);

#define VkglTestCase_021223_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021223_2 "andom.trigonometric.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021223, VkglTestCase_021223_1, VkglTestCase_021223_2);

#define VkglTestCase_021224_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021224_2 "andom.trigonometric.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021224, VkglTestCase_021224_1, VkglTestCase_021224_2);

#define VkglTestCase_021225_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021225_2 "andom.trigonometric.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021225, VkglTestCase_021225_1, VkglTestCase_021225_2);

#define VkglTestCase_021226_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021226_2 "andom.trigonometric.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021226, VkglTestCase_021226_1, VkglTestCase_021226_2);

#define VkglTestCase_021227_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021227_2 "andom.trigonometric.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021227, VkglTestCase_021227_1, VkglTestCase_021227_2);

#define VkglTestCase_021228_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021228_2 "andom.trigonometric.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021228, VkglTestCase_021228_1, VkglTestCase_021228_2);

#define VkglTestCase_021229_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021229_2 "andom.trigonometric.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021229, VkglTestCase_021229_1, VkglTestCase_021229_2);

#define VkglTestCase_021230_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021230_2 "andom.trigonometric.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021230, VkglTestCase_021230_1, VkglTestCase_021230_2);

#define VkglTestCase_021231_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021231_2 "andom.trigonometric.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021231, VkglTestCase_021231_1, VkglTestCase_021231_2);

#define VkglTestCase_021232_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021232_2 "andom.trigonometric.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021232, VkglTestCase_021232_1, VkglTestCase_021232_2);

#define VkglTestCase_021233_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021233_2 "andom.trigonometric.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021233, VkglTestCase_021233_1, VkglTestCase_021233_2);

#define VkglTestCase_021234_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021234_2 "andom.trigonometric.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021234, VkglTestCase_021234_1, VkglTestCase_021234_2);

#define VkglTestCase_021235_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021235_2 "andom.trigonometric.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021235, VkglTestCase_021235_1, VkglTestCase_021235_2);

#define VkglTestCase_021236_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021236_2 "andom.trigonometric.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021236, VkglTestCase_021236_1, VkglTestCase_021236_2);

#define VkglTestCase_021237_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021237_2 "andom.trigonometric.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021237, VkglTestCase_021237_1, VkglTestCase_021237_2);

#define VkglTestCase_021238_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021238_2 "andom.trigonometric.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021238, VkglTestCase_021238_1, VkglTestCase_021238_2);

#define VkglTestCase_021239_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021239_2 "andom.trigonometric.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021239, VkglTestCase_021239_1, VkglTestCase_021239_2);

#define VkglTestCase_021240_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021240_2 "andom.trigonometric.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021240, VkglTestCase_021240_1, VkglTestCase_021240_2);

#define VkglTestCase_021241_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021241_2 "andom.trigonometric.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021241, VkglTestCase_021241_1, VkglTestCase_021241_2);

#define VkglTestCase_021242_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021242_2 "andom.trigonometric.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021242, VkglTestCase_021242_1, VkglTestCase_021242_2);

#define VkglTestCase_021243_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021243_2 "andom.trigonometric.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021243, VkglTestCase_021243_1, VkglTestCase_021243_2);

#define VkglTestCase_021244_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021244_2 "andom.trigonometric.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021244, VkglTestCase_021244_1, VkglTestCase_021244_2);

#define VkglTestCase_021245_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021245_2 "andom.trigonometric.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021245, VkglTestCase_021245_1, VkglTestCase_021245_2);

#define VkglTestCase_021246_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021246_2 "andom.trigonometric.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021246, VkglTestCase_021246_1, VkglTestCase_021246_2);

#define VkglTestCase_021247_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021247_2 "andom.trigonometric.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021247, VkglTestCase_021247_1, VkglTestCase_021247_2);

#define VkglTestCase_021248_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021248_2 "andom.trigonometric.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021248, VkglTestCase_021248_1, VkglTestCase_021248_2);

#define VkglTestCase_021249_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021249_2 "andom.trigonometric.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021249, VkglTestCase_021249_1, VkglTestCase_021249_2);

#define VkglTestCase_021250_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021250_2 "andom.trigonometric.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021250, VkglTestCase_021250_1, VkglTestCase_021250_2);

#define VkglTestCase_021251_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021251_2 "andom.trigonometric.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021251, VkglTestCase_021251_1, VkglTestCase_021251_2);

#define VkglTestCase_021252_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021252_2 "andom.trigonometric.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021252, VkglTestCase_021252_1, VkglTestCase_021252_2);

#define VkglTestCase_021253_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021253_2 "andom.trigonometric.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021253, VkglTestCase_021253_1, VkglTestCase_021253_2);

#define VkglTestCase_021254_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021254_2 "andom.trigonometric.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021254, VkglTestCase_021254_1, VkglTestCase_021254_2);

#define VkglTestCase_021255_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021255_2 "andom.trigonometric.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021255, VkglTestCase_021255_1, VkglTestCase_021255_2);

#define VkglTestCase_021256_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021256_2 "andom.trigonometric.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021256, VkglTestCase_021256_1, VkglTestCase_021256_2);

#define VkglTestCase_021257_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021257_2 "andom.trigonometric.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021257, VkglTestCase_021257_1, VkglTestCase_021257_2);

#define VkglTestCase_021258_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021258_2 "andom.trigonometric.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021258, VkglTestCase_021258_1, VkglTestCase_021258_2);

#define VkglTestCase_021259_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021259_2 "andom.trigonometric.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021259, VkglTestCase_021259_1, VkglTestCase_021259_2);

#define VkglTestCase_021260_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021260_2 "andom.trigonometric.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021260, VkglTestCase_021260_1, VkglTestCase_021260_2);

#define VkglTestCase_021261_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021261_2 "andom.trigonometric.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021261, VkglTestCase_021261_1, VkglTestCase_021261_2);

#define VkglTestCase_021262_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021262_2 "andom.trigonometric.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021262, VkglTestCase_021262_1, VkglTestCase_021262_2);

#define VkglTestCase_021263_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021263_2 "andom.trigonometric.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021263, VkglTestCase_021263_1, VkglTestCase_021263_2);

#define VkglTestCase_021264_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021264_2 "andom.trigonometric.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021264, VkglTestCase_021264_1, VkglTestCase_021264_2);

#define VkglTestCase_021265_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021265_2 "andom.trigonometric.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021265, VkglTestCase_021265_1, VkglTestCase_021265_2);

#define VkglTestCase_021266_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021266_2 "andom.trigonometric.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021266, VkglTestCase_021266_1, VkglTestCase_021266_2);

#define VkglTestCase_021267_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021267_2 "andom.trigonometric.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021267, VkglTestCase_021267_1, VkglTestCase_021267_2);

#define VkglTestCase_021268_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021268_2 "andom.trigonometric.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021268, VkglTestCase_021268_1, VkglTestCase_021268_2);

#define VkglTestCase_021269_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021269_2 "andom.trigonometric.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021269, VkglTestCase_021269_1, VkglTestCase_021269_2);

#define VkglTestCase_021270_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021270_2 "andom.trigonometric.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021270, VkglTestCase_021270_1, VkglTestCase_021270_2);

#define VkglTestCase_021271_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021271_2 "andom.trigonometric.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021271, VkglTestCase_021271_1, VkglTestCase_021271_2);

#define VkglTestCase_021272_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021272_2 "andom.trigonometric.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021272, VkglTestCase_021272_1, VkglTestCase_021272_2);

#define VkglTestCase_021273_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021273_2 "andom.trigonometric.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021273, VkglTestCase_021273_1, VkglTestCase_021273_2);

#define VkglTestCase_021274_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021274_2 "andom.trigonometric.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021274, VkglTestCase_021274_1, VkglTestCase_021274_2);

#define VkglTestCase_021275_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021275_2 "andom.trigonometric.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021275, VkglTestCase_021275_1, VkglTestCase_021275_2);

#define VkglTestCase_021276_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021276_2 "andom.trigonometric.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021276, VkglTestCase_021276_1, VkglTestCase_021276_2);

#define VkglTestCase_021277_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021277_2 "andom.trigonometric.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021277, VkglTestCase_021277_1, VkglTestCase_021277_2);

#define VkglTestCase_021278_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021278_2 "andom.trigonometric.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021278, VkglTestCase_021278_1, VkglTestCase_021278_2);

#define VkglTestCase_021279_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021279_2 "andom.trigonometric.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021279, VkglTestCase_021279_1, VkglTestCase_021279_2);

#define VkglTestCase_021280_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021280_2 "andom.trigonometric.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021280, VkglTestCase_021280_1, VkglTestCase_021280_2);

#define VkglTestCase_021281_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021281_2 "andom.trigonometric.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021281, VkglTestCase_021281_1, VkglTestCase_021281_2);

#define VkglTestCase_021282_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021282_2 "andom.trigonometric.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021282, VkglTestCase_021282_1, VkglTestCase_021282_2);

#define VkglTestCase_021283_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021283_2 "andom.trigonometric.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021283, VkglTestCase_021283_1, VkglTestCase_021283_2);

#define VkglTestCase_021284_1 "dEQP-GLES3.functional.shaders.r"
#define VkglTestCase_021284_2 "andom.trigonometric.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021284, VkglTestCase_021284_1, VkglTestCase_021284_2);
