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
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020194_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020194_2 "ndom.basic_expression.combined.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020194, VkglTestCase_020194_1, VkglTestCase_020194_2);

#define VkglTestCase_020195_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020195_2 "ndom.basic_expression.combined.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020195, VkglTestCase_020195_1, VkglTestCase_020195_2);

#define VkglTestCase_020196_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020196_2 "ndom.basic_expression.combined.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020196, VkglTestCase_020196_1, VkglTestCase_020196_2);

#define VkglTestCase_020197_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020197_2 "ndom.basic_expression.combined.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020197, VkglTestCase_020197_1, VkglTestCase_020197_2);

#define VkglTestCase_020198_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020198_2 "ndom.basic_expression.combined.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020198, VkglTestCase_020198_1, VkglTestCase_020198_2);

#define VkglTestCase_020199_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020199_2 "ndom.basic_expression.combined.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020199, VkglTestCase_020199_1, VkglTestCase_020199_2);

#define VkglTestCase_020200_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020200_2 "ndom.basic_expression.combined.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020200, VkglTestCase_020200_1, VkglTestCase_020200_2);

#define VkglTestCase_020201_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020201_2 "ndom.basic_expression.combined.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020201, VkglTestCase_020201_1, VkglTestCase_020201_2);

#define VkglTestCase_020202_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020202_2 "ndom.basic_expression.combined.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020202, VkglTestCase_020202_1, VkglTestCase_020202_2);

#define VkglTestCase_020203_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020203_2 "ndom.basic_expression.combined.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020203, VkglTestCase_020203_1, VkglTestCase_020203_2);

#define VkglTestCase_020204_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020204_2 "ndom.basic_expression.combined.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020204, VkglTestCase_020204_1, VkglTestCase_020204_2);

#define VkglTestCase_020205_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020205_2 "ndom.basic_expression.combined.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020205, VkglTestCase_020205_1, VkglTestCase_020205_2);

#define VkglTestCase_020206_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020206_2 "ndom.basic_expression.combined.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020206, VkglTestCase_020206_1, VkglTestCase_020206_2);

#define VkglTestCase_020207_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020207_2 "ndom.basic_expression.combined.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020207, VkglTestCase_020207_1, VkglTestCase_020207_2);

#define VkglTestCase_020208_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020208_2 "ndom.basic_expression.combined.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020208, VkglTestCase_020208_1, VkglTestCase_020208_2);

#define VkglTestCase_020209_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020209_2 "ndom.basic_expression.combined.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020209, VkglTestCase_020209_1, VkglTestCase_020209_2);

#define VkglTestCase_020210_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020210_2 "ndom.basic_expression.combined.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020210, VkglTestCase_020210_1, VkglTestCase_020210_2);

#define VkglTestCase_020211_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020211_2 "ndom.basic_expression.combined.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020211, VkglTestCase_020211_1, VkglTestCase_020211_2);

#define VkglTestCase_020212_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020212_2 "ndom.basic_expression.combined.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020212, VkglTestCase_020212_1, VkglTestCase_020212_2);

#define VkglTestCase_020213_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020213_2 "ndom.basic_expression.combined.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020213, VkglTestCase_020213_1, VkglTestCase_020213_2);

#define VkglTestCase_020214_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020214_2 "ndom.basic_expression.combined.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020214, VkglTestCase_020214_1, VkglTestCase_020214_2);

#define VkglTestCase_020215_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020215_2 "ndom.basic_expression.combined.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020215, VkglTestCase_020215_1, VkglTestCase_020215_2);

#define VkglTestCase_020216_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020216_2 "ndom.basic_expression.combined.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020216, VkglTestCase_020216_1, VkglTestCase_020216_2);

#define VkglTestCase_020217_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020217_2 "ndom.basic_expression.combined.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020217, VkglTestCase_020217_1, VkglTestCase_020217_2);

#define VkglTestCase_020218_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020218_2 "ndom.basic_expression.combined.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020218, VkglTestCase_020218_1, VkglTestCase_020218_2);

#define VkglTestCase_020219_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020219_2 "ndom.basic_expression.combined.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020219, VkglTestCase_020219_1, VkglTestCase_020219_2);

#define VkglTestCase_020220_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020220_2 "ndom.basic_expression.combined.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020220, VkglTestCase_020220_1, VkglTestCase_020220_2);

#define VkglTestCase_020221_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020221_2 "ndom.basic_expression.combined.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020221, VkglTestCase_020221_1, VkglTestCase_020221_2);

#define VkglTestCase_020222_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020222_2 "ndom.basic_expression.combined.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020222, VkglTestCase_020222_1, VkglTestCase_020222_2);

#define VkglTestCase_020223_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020223_2 "ndom.basic_expression.combined.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020223, VkglTestCase_020223_1, VkglTestCase_020223_2);

#define VkglTestCase_020224_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020224_2 "ndom.basic_expression.combined.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020224, VkglTestCase_020224_1, VkglTestCase_020224_2);

#define VkglTestCase_020225_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020225_2 "ndom.basic_expression.combined.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020225, VkglTestCase_020225_1, VkglTestCase_020225_2);

#define VkglTestCase_020226_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020226_2 "ndom.basic_expression.combined.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020226, VkglTestCase_020226_1, VkglTestCase_020226_2);

#define VkglTestCase_020227_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020227_2 "ndom.basic_expression.combined.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020227, VkglTestCase_020227_1, VkglTestCase_020227_2);

#define VkglTestCase_020228_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020228_2 "ndom.basic_expression.combined.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020228, VkglTestCase_020228_1, VkglTestCase_020228_2);

#define VkglTestCase_020229_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020229_2 "ndom.basic_expression.combined.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020229, VkglTestCase_020229_1, VkglTestCase_020229_2);

#define VkglTestCase_020230_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020230_2 "ndom.basic_expression.combined.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020230, VkglTestCase_020230_1, VkglTestCase_020230_2);

#define VkglTestCase_020231_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020231_2 "ndom.basic_expression.combined.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020231, VkglTestCase_020231_1, VkglTestCase_020231_2);

#define VkglTestCase_020232_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020232_2 "ndom.basic_expression.combined.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020232, VkglTestCase_020232_1, VkglTestCase_020232_2);

#define VkglTestCase_020233_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020233_2 "ndom.basic_expression.combined.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020233, VkglTestCase_020233_1, VkglTestCase_020233_2);

#define VkglTestCase_020234_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020234_2 "ndom.basic_expression.combined.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020234, VkglTestCase_020234_1, VkglTestCase_020234_2);

#define VkglTestCase_020235_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020235_2 "ndom.basic_expression.combined.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020235, VkglTestCase_020235_1, VkglTestCase_020235_2);

#define VkglTestCase_020236_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020236_2 "ndom.basic_expression.combined.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020236, VkglTestCase_020236_1, VkglTestCase_020236_2);

#define VkglTestCase_020237_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020237_2 "ndom.basic_expression.combined.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020237, VkglTestCase_020237_1, VkglTestCase_020237_2);

#define VkglTestCase_020238_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020238_2 "ndom.basic_expression.combined.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020238, VkglTestCase_020238_1, VkglTestCase_020238_2);

#define VkglTestCase_020239_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020239_2 "ndom.basic_expression.combined.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020239, VkglTestCase_020239_1, VkglTestCase_020239_2);

#define VkglTestCase_020240_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020240_2 "ndom.basic_expression.combined.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020240, VkglTestCase_020240_1, VkglTestCase_020240_2);

#define VkglTestCase_020241_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020241_2 "ndom.basic_expression.combined.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020241, VkglTestCase_020241_1, VkglTestCase_020241_2);

#define VkglTestCase_020242_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020242_2 "ndom.basic_expression.combined.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020242, VkglTestCase_020242_1, VkglTestCase_020242_2);

#define VkglTestCase_020243_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020243_2 "ndom.basic_expression.combined.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020243, VkglTestCase_020243_1, VkglTestCase_020243_2);

#define VkglTestCase_020244_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020244_2 "ndom.basic_expression.combined.50"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020244, VkglTestCase_020244_1, VkglTestCase_020244_2);

#define VkglTestCase_020245_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020245_2 "ndom.basic_expression.combined.51"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020245, VkglTestCase_020245_1, VkglTestCase_020245_2);

#define VkglTestCase_020246_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020246_2 "ndom.basic_expression.combined.52"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020246, VkglTestCase_020246_1, VkglTestCase_020246_2);

#define VkglTestCase_020247_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020247_2 "ndom.basic_expression.combined.53"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020247, VkglTestCase_020247_1, VkglTestCase_020247_2);

#define VkglTestCase_020248_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020248_2 "ndom.basic_expression.combined.54"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020248, VkglTestCase_020248_1, VkglTestCase_020248_2);

#define VkglTestCase_020249_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020249_2 "ndom.basic_expression.combined.55"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020249, VkglTestCase_020249_1, VkglTestCase_020249_2);

#define VkglTestCase_020250_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020250_2 "ndom.basic_expression.combined.56"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020250, VkglTestCase_020250_1, VkglTestCase_020250_2);

#define VkglTestCase_020251_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020251_2 "ndom.basic_expression.combined.57"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020251, VkglTestCase_020251_1, VkglTestCase_020251_2);

#define VkglTestCase_020252_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020252_2 "ndom.basic_expression.combined.58"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020252, VkglTestCase_020252_1, VkglTestCase_020252_2);

#define VkglTestCase_020253_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020253_2 "ndom.basic_expression.combined.59"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020253, VkglTestCase_020253_1, VkglTestCase_020253_2);

#define VkglTestCase_020254_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020254_2 "ndom.basic_expression.combined.60"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020254, VkglTestCase_020254_1, VkglTestCase_020254_2);

#define VkglTestCase_020255_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020255_2 "ndom.basic_expression.combined.61"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020255, VkglTestCase_020255_1, VkglTestCase_020255_2);

#define VkglTestCase_020256_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020256_2 "ndom.basic_expression.combined.62"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020256, VkglTestCase_020256_1, VkglTestCase_020256_2);

#define VkglTestCase_020257_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020257_2 "ndom.basic_expression.combined.63"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020257, VkglTestCase_020257_1, VkglTestCase_020257_2);

#define VkglTestCase_020258_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020258_2 "ndom.basic_expression.combined.64"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020258, VkglTestCase_020258_1, VkglTestCase_020258_2);

#define VkglTestCase_020259_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020259_2 "ndom.basic_expression.combined.65"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020259, VkglTestCase_020259_1, VkglTestCase_020259_2);

#define VkglTestCase_020260_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020260_2 "ndom.basic_expression.combined.66"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020260, VkglTestCase_020260_1, VkglTestCase_020260_2);

#define VkglTestCase_020261_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020261_2 "ndom.basic_expression.combined.67"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020261, VkglTestCase_020261_1, VkglTestCase_020261_2);

#define VkglTestCase_020262_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020262_2 "ndom.basic_expression.combined.68"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020262, VkglTestCase_020262_1, VkglTestCase_020262_2);

#define VkglTestCase_020263_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020263_2 "ndom.basic_expression.combined.69"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020263, VkglTestCase_020263_1, VkglTestCase_020263_2);

#define VkglTestCase_020264_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020264_2 "ndom.basic_expression.combined.70"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020264, VkglTestCase_020264_1, VkglTestCase_020264_2);

#define VkglTestCase_020265_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020265_2 "ndom.basic_expression.combined.71"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020265, VkglTestCase_020265_1, VkglTestCase_020265_2);

#define VkglTestCase_020266_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020266_2 "ndom.basic_expression.combined.72"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020266, VkglTestCase_020266_1, VkglTestCase_020266_2);

#define VkglTestCase_020267_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020267_2 "ndom.basic_expression.combined.73"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020267, VkglTestCase_020267_1, VkglTestCase_020267_2);

#define VkglTestCase_020268_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020268_2 "ndom.basic_expression.combined.74"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020268, VkglTestCase_020268_1, VkglTestCase_020268_2);

#define VkglTestCase_020269_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020269_2 "ndom.basic_expression.combined.75"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020269, VkglTestCase_020269_1, VkglTestCase_020269_2);

#define VkglTestCase_020270_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020270_2 "ndom.basic_expression.combined.76"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020270, VkglTestCase_020270_1, VkglTestCase_020270_2);

#define VkglTestCase_020271_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020271_2 "ndom.basic_expression.combined.77"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020271, VkglTestCase_020271_1, VkglTestCase_020271_2);

#define VkglTestCase_020272_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020272_2 "ndom.basic_expression.combined.78"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020272, VkglTestCase_020272_1, VkglTestCase_020272_2);

#define VkglTestCase_020273_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020273_2 "ndom.basic_expression.combined.79"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020273, VkglTestCase_020273_1, VkglTestCase_020273_2);

#define VkglTestCase_020274_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020274_2 "ndom.basic_expression.combined.80"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020274, VkglTestCase_020274_1, VkglTestCase_020274_2);

#define VkglTestCase_020275_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020275_2 "ndom.basic_expression.combined.81"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020275, VkglTestCase_020275_1, VkglTestCase_020275_2);

#define VkglTestCase_020276_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020276_2 "ndom.basic_expression.combined.82"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020276, VkglTestCase_020276_1, VkglTestCase_020276_2);

#define VkglTestCase_020277_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020277_2 "ndom.basic_expression.combined.83"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020277, VkglTestCase_020277_1, VkglTestCase_020277_2);

#define VkglTestCase_020278_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020278_2 "ndom.basic_expression.combined.84"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020278, VkglTestCase_020278_1, VkglTestCase_020278_2);

#define VkglTestCase_020279_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020279_2 "ndom.basic_expression.combined.85"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020279, VkglTestCase_020279_1, VkglTestCase_020279_2);

#define VkglTestCase_020280_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020280_2 "ndom.basic_expression.combined.86"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020280, VkglTestCase_020280_1, VkglTestCase_020280_2);

#define VkglTestCase_020281_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020281_2 "ndom.basic_expression.combined.87"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020281, VkglTestCase_020281_1, VkglTestCase_020281_2);

#define VkglTestCase_020282_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020282_2 "ndom.basic_expression.combined.88"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020282, VkglTestCase_020282_1, VkglTestCase_020282_2);

#define VkglTestCase_020283_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020283_2 "ndom.basic_expression.combined.89"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020283, VkglTestCase_020283_1, VkglTestCase_020283_2);

#define VkglTestCase_020284_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020284_2 "ndom.basic_expression.combined.90"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020284, VkglTestCase_020284_1, VkglTestCase_020284_2);

#define VkglTestCase_020285_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020285_2 "ndom.basic_expression.combined.91"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020285, VkglTestCase_020285_1, VkglTestCase_020285_2);

#define VkglTestCase_020286_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020286_2 "ndom.basic_expression.combined.92"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020286, VkglTestCase_020286_1, VkglTestCase_020286_2);

#define VkglTestCase_020287_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020287_2 "ndom.basic_expression.combined.93"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020287, VkglTestCase_020287_1, VkglTestCase_020287_2);

#define VkglTestCase_020288_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020288_2 "ndom.basic_expression.combined.94"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020288, VkglTestCase_020288_1, VkglTestCase_020288_2);

#define VkglTestCase_020289_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020289_2 "ndom.basic_expression.combined.95"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020289, VkglTestCase_020289_1, VkglTestCase_020289_2);

#define VkglTestCase_020290_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020290_2 "ndom.basic_expression.combined.96"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020290, VkglTestCase_020290_1, VkglTestCase_020290_2);

#define VkglTestCase_020291_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020291_2 "ndom.basic_expression.combined.97"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020291, VkglTestCase_020291_1, VkglTestCase_020291_2);

#define VkglTestCase_020292_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020292_2 "ndom.basic_expression.combined.98"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020292, VkglTestCase_020292_1, VkglTestCase_020292_2);

#define VkglTestCase_020293_1 "dEQP-GLES3.functional.shaders.ra"
#define VkglTestCase_020293_2 "ndom.basic_expression.combined.99"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020293, VkglTestCase_020293_1, VkglTestCase_020293_2);
