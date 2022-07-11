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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036191_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036191_2 "random.all_shared_buffer.0"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036191, VkglTestCase_036191_1, VkglTestCase_036191_2);

#define VkglTestCase_036192_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036192_2 "random.all_shared_buffer.1"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036192, VkglTestCase_036192_1, VkglTestCase_036192_2);

#define VkglTestCase_036193_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036193_2 "random.all_shared_buffer.2"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036193, VkglTestCase_036193_1, VkglTestCase_036193_2);

#define VkglTestCase_036194_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036194_2 "random.all_shared_buffer.3"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036194, VkglTestCase_036194_1, VkglTestCase_036194_2);

#define VkglTestCase_036195_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036195_2 "random.all_shared_buffer.4"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036195, VkglTestCase_036195_1, VkglTestCase_036195_2);

#define VkglTestCase_036196_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036196_2 "random.all_shared_buffer.5"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036196, VkglTestCase_036196_1, VkglTestCase_036196_2);

#define VkglTestCase_036197_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036197_2 "random.all_shared_buffer.6"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036197, VkglTestCase_036197_1, VkglTestCase_036197_2);

#define VkglTestCase_036198_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036198_2 "random.all_shared_buffer.7"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036198, VkglTestCase_036198_1, VkglTestCase_036198_2);

#define VkglTestCase_036199_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036199_2 "random.all_shared_buffer.8"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036199, VkglTestCase_036199_1, VkglTestCase_036199_2);

#define VkglTestCase_036200_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036200_2 "random.all_shared_buffer.9"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036200, VkglTestCase_036200_1, VkglTestCase_036200_2);

#define VkglTestCase_036201_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036201_2 "random.all_shared_buffer.10"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036201, VkglTestCase_036201_1, VkglTestCase_036201_2);

#define VkglTestCase_036202_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036202_2 "random.all_shared_buffer.11"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036202, VkglTestCase_036202_1, VkglTestCase_036202_2);

#define VkglTestCase_036203_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036203_2 "random.all_shared_buffer.12"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036203, VkglTestCase_036203_1, VkglTestCase_036203_2);

#define VkglTestCase_036204_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036204_2 "random.all_shared_buffer.13"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036204, VkglTestCase_036204_1, VkglTestCase_036204_2);

#define VkglTestCase_036205_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036205_2 "random.all_shared_buffer.14"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036205, VkglTestCase_036205_1, VkglTestCase_036205_2);

#define VkglTestCase_036206_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036206_2 "random.all_shared_buffer.15"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036206, VkglTestCase_036206_1, VkglTestCase_036206_2);

#define VkglTestCase_036207_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036207_2 "random.all_shared_buffer.16"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036207, VkglTestCase_036207_1, VkglTestCase_036207_2);

#define VkglTestCase_036208_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036208_2 "random.all_shared_buffer.17"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036208, VkglTestCase_036208_1, VkglTestCase_036208_2);

#define VkglTestCase_036209_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036209_2 "random.all_shared_buffer.18"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036209, VkglTestCase_036209_1, VkglTestCase_036209_2);

#define VkglTestCase_036210_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036210_2 "random.all_shared_buffer.19"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036210, VkglTestCase_036210_1, VkglTestCase_036210_2);

#define VkglTestCase_036211_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036211_2 "random.all_shared_buffer.20"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036211, VkglTestCase_036211_1, VkglTestCase_036211_2);

#define VkglTestCase_036212_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036212_2 "random.all_shared_buffer.21"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036212, VkglTestCase_036212_1, VkglTestCase_036212_2);

#define VkglTestCase_036213_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036213_2 "random.all_shared_buffer.22"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036213, VkglTestCase_036213_1, VkglTestCase_036213_2);

#define VkglTestCase_036214_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036214_2 "random.all_shared_buffer.23"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036214, VkglTestCase_036214_1, VkglTestCase_036214_2);

#define VkglTestCase_036215_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036215_2 "random.all_shared_buffer.24"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036215, VkglTestCase_036215_1, VkglTestCase_036215_2);

#define VkglTestCase_036216_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036216_2 "random.all_shared_buffer.25"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036216, VkglTestCase_036216_1, VkglTestCase_036216_2);

#define VkglTestCase_036217_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036217_2 "random.all_shared_buffer.26"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036217, VkglTestCase_036217_1, VkglTestCase_036217_2);

#define VkglTestCase_036218_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036218_2 "random.all_shared_buffer.27"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036218, VkglTestCase_036218_1, VkglTestCase_036218_2);

#define VkglTestCase_036219_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036219_2 "random.all_shared_buffer.28"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036219, VkglTestCase_036219_1, VkglTestCase_036219_2);

#define VkglTestCase_036220_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036220_2 "random.all_shared_buffer.29"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036220, VkglTestCase_036220_1, VkglTestCase_036220_2);

#define VkglTestCase_036221_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036221_2 "random.all_shared_buffer.30"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036221, VkglTestCase_036221_1, VkglTestCase_036221_2);

#define VkglTestCase_036222_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036222_2 "random.all_shared_buffer.31"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036222, VkglTestCase_036222_1, VkglTestCase_036222_2);

#define VkglTestCase_036223_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036223_2 "random.all_shared_buffer.32"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036223, VkglTestCase_036223_1, VkglTestCase_036223_2);

#define VkglTestCase_036224_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036224_2 "random.all_shared_buffer.33"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036224, VkglTestCase_036224_1, VkglTestCase_036224_2);

#define VkglTestCase_036225_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036225_2 "random.all_shared_buffer.34"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036225, VkglTestCase_036225_1, VkglTestCase_036225_2);

#define VkglTestCase_036226_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036226_2 "random.all_shared_buffer.35"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036226, VkglTestCase_036226_1, VkglTestCase_036226_2);

#define VkglTestCase_036227_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036227_2 "random.all_shared_buffer.36"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036227, VkglTestCase_036227_1, VkglTestCase_036227_2);

#define VkglTestCase_036228_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036228_2 "random.all_shared_buffer.37"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036228, VkglTestCase_036228_1, VkglTestCase_036228_2);

#define VkglTestCase_036229_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036229_2 "random.all_shared_buffer.38"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036229, VkglTestCase_036229_1, VkglTestCase_036229_2);

#define VkglTestCase_036230_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036230_2 "random.all_shared_buffer.39"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036230, VkglTestCase_036230_1, VkglTestCase_036230_2);

#define VkglTestCase_036231_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036231_2 "random.all_shared_buffer.40"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036231, VkglTestCase_036231_1, VkglTestCase_036231_2);

#define VkglTestCase_036232_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036232_2 "random.all_shared_buffer.41"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036232, VkglTestCase_036232_1, VkglTestCase_036232_2);

#define VkglTestCase_036233_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036233_2 "random.all_shared_buffer.42"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036233, VkglTestCase_036233_1, VkglTestCase_036233_2);

#define VkglTestCase_036234_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036234_2 "random.all_shared_buffer.43"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036234, VkglTestCase_036234_1, VkglTestCase_036234_2);

#define VkglTestCase_036235_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036235_2 "random.all_shared_buffer.44"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036235, VkglTestCase_036235_1, VkglTestCase_036235_2);

#define VkglTestCase_036236_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036236_2 "random.all_shared_buffer.45"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036236, VkglTestCase_036236_1, VkglTestCase_036236_2);

#define VkglTestCase_036237_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036237_2 "random.all_shared_buffer.46"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036237, VkglTestCase_036237_1, VkglTestCase_036237_2);

#define VkglTestCase_036238_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036238_2 "random.all_shared_buffer.47"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036238, VkglTestCase_036238_1, VkglTestCase_036238_2);

#define VkglTestCase_036239_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036239_2 "random.all_shared_buffer.48"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036239, VkglTestCase_036239_1, VkglTestCase_036239_2);

#define VkglTestCase_036240_1 "dEQP-GLES3.functional.ubo."
#define VkglTestCase_036240_2 "random.all_shared_buffer.49"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036240, VkglTestCase_036240_1, VkglTestCase_036240_2);
