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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012212_1 "dEQP-GLES2.functional"
#define VkglTestCase_012212_2 ".fragment_ops.random.0"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012212, VkglTestCase_012212_1, VkglTestCase_012212_2);

#define VkglTestCase_012213_1 "dEQP-GLES2.functional"
#define VkglTestCase_012213_2 ".fragment_ops.random.1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012213, VkglTestCase_012213_1, VkglTestCase_012213_2);

#define VkglTestCase_012214_1 "dEQP-GLES2.functional"
#define VkglTestCase_012214_2 ".fragment_ops.random.2"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012214, VkglTestCase_012214_1, VkglTestCase_012214_2);

#define VkglTestCase_012215_1 "dEQP-GLES2.functional"
#define VkglTestCase_012215_2 ".fragment_ops.random.3"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012215, VkglTestCase_012215_1, VkglTestCase_012215_2);

#define VkglTestCase_012216_1 "dEQP-GLES2.functional"
#define VkglTestCase_012216_2 ".fragment_ops.random.4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012216, VkglTestCase_012216_1, VkglTestCase_012216_2);

#define VkglTestCase_012217_1 "dEQP-GLES2.functional"
#define VkglTestCase_012217_2 ".fragment_ops.random.5"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012217, VkglTestCase_012217_1, VkglTestCase_012217_2);

#define VkglTestCase_012218_1 "dEQP-GLES2.functional"
#define VkglTestCase_012218_2 ".fragment_ops.random.6"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012218, VkglTestCase_012218_1, VkglTestCase_012218_2);

#define VkglTestCase_012219_1 "dEQP-GLES2.functional"
#define VkglTestCase_012219_2 ".fragment_ops.random.7"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012219, VkglTestCase_012219_1, VkglTestCase_012219_2);

#define VkglTestCase_012220_1 "dEQP-GLES2.functional"
#define VkglTestCase_012220_2 ".fragment_ops.random.8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012220, VkglTestCase_012220_1, VkglTestCase_012220_2);

#define VkglTestCase_012221_1 "dEQP-GLES2.functional"
#define VkglTestCase_012221_2 ".fragment_ops.random.9"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012221, VkglTestCase_012221_1, VkglTestCase_012221_2);

#define VkglTestCase_012222_1 "dEQP-GLES2.functional."
#define VkglTestCase_012222_2 "fragment_ops.random.10"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012222, VkglTestCase_012222_1, VkglTestCase_012222_2);

#define VkglTestCase_012223_1 "dEQP-GLES2.functional."
#define VkglTestCase_012223_2 "fragment_ops.random.11"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012223, VkglTestCase_012223_1, VkglTestCase_012223_2);

#define VkglTestCase_012224_1 "dEQP-GLES2.functional."
#define VkglTestCase_012224_2 "fragment_ops.random.12"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012224, VkglTestCase_012224_1, VkglTestCase_012224_2);

#define VkglTestCase_012225_1 "dEQP-GLES2.functional."
#define VkglTestCase_012225_2 "fragment_ops.random.13"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012225, VkglTestCase_012225_1, VkglTestCase_012225_2);

#define VkglTestCase_012226_1 "dEQP-GLES2.functional."
#define VkglTestCase_012226_2 "fragment_ops.random.14"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012226, VkglTestCase_012226_1, VkglTestCase_012226_2);

#define VkglTestCase_012227_1 "dEQP-GLES2.functional."
#define VkglTestCase_012227_2 "fragment_ops.random.15"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012227, VkglTestCase_012227_1, VkglTestCase_012227_2);

#define VkglTestCase_012228_1 "dEQP-GLES2.functional."
#define VkglTestCase_012228_2 "fragment_ops.random.16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012228, VkglTestCase_012228_1, VkglTestCase_012228_2);

#define VkglTestCase_012229_1 "dEQP-GLES2.functional."
#define VkglTestCase_012229_2 "fragment_ops.random.17"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012229, VkglTestCase_012229_1, VkglTestCase_012229_2);

#define VkglTestCase_012230_1 "dEQP-GLES2.functional."
#define VkglTestCase_012230_2 "fragment_ops.random.18"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012230, VkglTestCase_012230_1, VkglTestCase_012230_2);

#define VkglTestCase_012231_1 "dEQP-GLES2.functional."
#define VkglTestCase_012231_2 "fragment_ops.random.19"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012231, VkglTestCase_012231_1, VkglTestCase_012231_2);

#define VkglTestCase_012232_1 "dEQP-GLES2.functional."
#define VkglTestCase_012232_2 "fragment_ops.random.20"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012232, VkglTestCase_012232_1, VkglTestCase_012232_2);

#define VkglTestCase_012233_1 "dEQP-GLES2.functional."
#define VkglTestCase_012233_2 "fragment_ops.random.21"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012233, VkglTestCase_012233_1, VkglTestCase_012233_2);

#define VkglTestCase_012234_1 "dEQP-GLES2.functional."
#define VkglTestCase_012234_2 "fragment_ops.random.22"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012234, VkglTestCase_012234_1, VkglTestCase_012234_2);

#define VkglTestCase_012235_1 "dEQP-GLES2.functional."
#define VkglTestCase_012235_2 "fragment_ops.random.23"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012235, VkglTestCase_012235_1, VkglTestCase_012235_2);

#define VkglTestCase_012236_1 "dEQP-GLES2.functional."
#define VkglTestCase_012236_2 "fragment_ops.random.24"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012236, VkglTestCase_012236_1, VkglTestCase_012236_2);

#define VkglTestCase_012237_1 "dEQP-GLES2.functional."
#define VkglTestCase_012237_2 "fragment_ops.random.25"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012237, VkglTestCase_012237_1, VkglTestCase_012237_2);

#define VkglTestCase_012238_1 "dEQP-GLES2.functional."
#define VkglTestCase_012238_2 "fragment_ops.random.26"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012238, VkglTestCase_012238_1, VkglTestCase_012238_2);

#define VkglTestCase_012239_1 "dEQP-GLES2.functional."
#define VkglTestCase_012239_2 "fragment_ops.random.27"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012239, VkglTestCase_012239_1, VkglTestCase_012239_2);

#define VkglTestCase_012240_1 "dEQP-GLES2.functional."
#define VkglTestCase_012240_2 "fragment_ops.random.28"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012240, VkglTestCase_012240_1, VkglTestCase_012240_2);

#define VkglTestCase_012241_1 "dEQP-GLES2.functional."
#define VkglTestCase_012241_2 "fragment_ops.random.29"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012241, VkglTestCase_012241_1, VkglTestCase_012241_2);

#define VkglTestCase_012242_1 "dEQP-GLES2.functional."
#define VkglTestCase_012242_2 "fragment_ops.random.30"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012242, VkglTestCase_012242_1, VkglTestCase_012242_2);

#define VkglTestCase_012243_1 "dEQP-GLES2.functional."
#define VkglTestCase_012243_2 "fragment_ops.random.31"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012243, VkglTestCase_012243_1, VkglTestCase_012243_2);

#define VkglTestCase_012244_1 "dEQP-GLES2.functional."
#define VkglTestCase_012244_2 "fragment_ops.random.32"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012244, VkglTestCase_012244_1, VkglTestCase_012244_2);

#define VkglTestCase_012245_1 "dEQP-GLES2.functional."
#define VkglTestCase_012245_2 "fragment_ops.random.33"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012245, VkglTestCase_012245_1, VkglTestCase_012245_2);

#define VkglTestCase_012246_1 "dEQP-GLES2.functional."
#define VkglTestCase_012246_2 "fragment_ops.random.34"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012246, VkglTestCase_012246_1, VkglTestCase_012246_2);

#define VkglTestCase_012247_1 "dEQP-GLES2.functional."
#define VkglTestCase_012247_2 "fragment_ops.random.35"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012247, VkglTestCase_012247_1, VkglTestCase_012247_2);

#define VkglTestCase_012248_1 "dEQP-GLES2.functional."
#define VkglTestCase_012248_2 "fragment_ops.random.36"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012248, VkglTestCase_012248_1, VkglTestCase_012248_2);

#define VkglTestCase_012249_1 "dEQP-GLES2.functional."
#define VkglTestCase_012249_2 "fragment_ops.random.37"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012249, VkglTestCase_012249_1, VkglTestCase_012249_2);

#define VkglTestCase_012250_1 "dEQP-GLES2.functional."
#define VkglTestCase_012250_2 "fragment_ops.random.38"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012250, VkglTestCase_012250_1, VkglTestCase_012250_2);

#define VkglTestCase_012251_1 "dEQP-GLES2.functional."
#define VkglTestCase_012251_2 "fragment_ops.random.39"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012251, VkglTestCase_012251_1, VkglTestCase_012251_2);

#define VkglTestCase_012252_1 "dEQP-GLES2.functional."
#define VkglTestCase_012252_2 "fragment_ops.random.40"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012252, VkglTestCase_012252_1, VkglTestCase_012252_2);

#define VkglTestCase_012253_1 "dEQP-GLES2.functional."
#define VkglTestCase_012253_2 "fragment_ops.random.41"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012253, VkglTestCase_012253_1, VkglTestCase_012253_2);

#define VkglTestCase_012254_1 "dEQP-GLES2.functional."
#define VkglTestCase_012254_2 "fragment_ops.random.42"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012254, VkglTestCase_012254_1, VkglTestCase_012254_2);

#define VkglTestCase_012255_1 "dEQP-GLES2.functional."
#define VkglTestCase_012255_2 "fragment_ops.random.43"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012255, VkglTestCase_012255_1, VkglTestCase_012255_2);

#define VkglTestCase_012256_1 "dEQP-GLES2.functional."
#define VkglTestCase_012256_2 "fragment_ops.random.44"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012256, VkglTestCase_012256_1, VkglTestCase_012256_2);

#define VkglTestCase_012257_1 "dEQP-GLES2.functional."
#define VkglTestCase_012257_2 "fragment_ops.random.45"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012257, VkglTestCase_012257_1, VkglTestCase_012257_2);

#define VkglTestCase_012258_1 "dEQP-GLES2.functional."
#define VkglTestCase_012258_2 "fragment_ops.random.46"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012258, VkglTestCase_012258_1, VkglTestCase_012258_2);

#define VkglTestCase_012259_1 "dEQP-GLES2.functional."
#define VkglTestCase_012259_2 "fragment_ops.random.47"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012259, VkglTestCase_012259_1, VkglTestCase_012259_2);

#define VkglTestCase_012260_1 "dEQP-GLES2.functional."
#define VkglTestCase_012260_2 "fragment_ops.random.48"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012260, VkglTestCase_012260_1, VkglTestCase_012260_2);

#define VkglTestCase_012261_1 "dEQP-GLES2.functional."
#define VkglTestCase_012261_2 "fragment_ops.random.49"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012261, VkglTestCase_012261_1, VkglTestCase_012261_2);

#define VkglTestCase_012262_1 "dEQP-GLES2.functional."
#define VkglTestCase_012262_2 "fragment_ops.random.50"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012262, VkglTestCase_012262_1, VkglTestCase_012262_2);

#define VkglTestCase_012263_1 "dEQP-GLES2.functional."
#define VkglTestCase_012263_2 "fragment_ops.random.51"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012263, VkglTestCase_012263_1, VkglTestCase_012263_2);

#define VkglTestCase_012264_1 "dEQP-GLES2.functional."
#define VkglTestCase_012264_2 "fragment_ops.random.52"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012264, VkglTestCase_012264_1, VkglTestCase_012264_2);

#define VkglTestCase_012265_1 "dEQP-GLES2.functional."
#define VkglTestCase_012265_2 "fragment_ops.random.53"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012265, VkglTestCase_012265_1, VkglTestCase_012265_2);

#define VkglTestCase_012266_1 "dEQP-GLES2.functional."
#define VkglTestCase_012266_2 "fragment_ops.random.54"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012266, VkglTestCase_012266_1, VkglTestCase_012266_2);

#define VkglTestCase_012267_1 "dEQP-GLES2.functional."
#define VkglTestCase_012267_2 "fragment_ops.random.55"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012267, VkglTestCase_012267_1, VkglTestCase_012267_2);

#define VkglTestCase_012268_1 "dEQP-GLES2.functional."
#define VkglTestCase_012268_2 "fragment_ops.random.56"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012268, VkglTestCase_012268_1, VkglTestCase_012268_2);

#define VkglTestCase_012269_1 "dEQP-GLES2.functional."
#define VkglTestCase_012269_2 "fragment_ops.random.57"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012269, VkglTestCase_012269_1, VkglTestCase_012269_2);

#define VkglTestCase_012270_1 "dEQP-GLES2.functional."
#define VkglTestCase_012270_2 "fragment_ops.random.58"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012270, VkglTestCase_012270_1, VkglTestCase_012270_2);

#define VkglTestCase_012271_1 "dEQP-GLES2.functional."
#define VkglTestCase_012271_2 "fragment_ops.random.59"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012271, VkglTestCase_012271_1, VkglTestCase_012271_2);

#define VkglTestCase_012272_1 "dEQP-GLES2.functional."
#define VkglTestCase_012272_2 "fragment_ops.random.60"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012272, VkglTestCase_012272_1, VkglTestCase_012272_2);

#define VkglTestCase_012273_1 "dEQP-GLES2.functional."
#define VkglTestCase_012273_2 "fragment_ops.random.61"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012273, VkglTestCase_012273_1, VkglTestCase_012273_2);

#define VkglTestCase_012274_1 "dEQP-GLES2.functional."
#define VkglTestCase_012274_2 "fragment_ops.random.62"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012274, VkglTestCase_012274_1, VkglTestCase_012274_2);

#define VkglTestCase_012275_1 "dEQP-GLES2.functional."
#define VkglTestCase_012275_2 "fragment_ops.random.63"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012275, VkglTestCase_012275_1, VkglTestCase_012275_2);

#define VkglTestCase_012276_1 "dEQP-GLES2.functional."
#define VkglTestCase_012276_2 "fragment_ops.random.64"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012276, VkglTestCase_012276_1, VkglTestCase_012276_2);

#define VkglTestCase_012277_1 "dEQP-GLES2.functional."
#define VkglTestCase_012277_2 "fragment_ops.random.65"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012277, VkglTestCase_012277_1, VkglTestCase_012277_2);

#define VkglTestCase_012278_1 "dEQP-GLES2.functional."
#define VkglTestCase_012278_2 "fragment_ops.random.66"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012278, VkglTestCase_012278_1, VkglTestCase_012278_2);

#define VkglTestCase_012279_1 "dEQP-GLES2.functional."
#define VkglTestCase_012279_2 "fragment_ops.random.67"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012279, VkglTestCase_012279_1, VkglTestCase_012279_2);

#define VkglTestCase_012280_1 "dEQP-GLES2.functional."
#define VkglTestCase_012280_2 "fragment_ops.random.68"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012280, VkglTestCase_012280_1, VkglTestCase_012280_2);

#define VkglTestCase_012281_1 "dEQP-GLES2.functional."
#define VkglTestCase_012281_2 "fragment_ops.random.69"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012281, VkglTestCase_012281_1, VkglTestCase_012281_2);

#define VkglTestCase_012282_1 "dEQP-GLES2.functional."
#define VkglTestCase_012282_2 "fragment_ops.random.70"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012282, VkglTestCase_012282_1, VkglTestCase_012282_2);

#define VkglTestCase_012283_1 "dEQP-GLES2.functional."
#define VkglTestCase_012283_2 "fragment_ops.random.71"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012283, VkglTestCase_012283_1, VkglTestCase_012283_2);

#define VkglTestCase_012284_1 "dEQP-GLES2.functional."
#define VkglTestCase_012284_2 "fragment_ops.random.72"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012284, VkglTestCase_012284_1, VkglTestCase_012284_2);

#define VkglTestCase_012285_1 "dEQP-GLES2.functional."
#define VkglTestCase_012285_2 "fragment_ops.random.73"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012285, VkglTestCase_012285_1, VkglTestCase_012285_2);

#define VkglTestCase_012286_1 "dEQP-GLES2.functional."
#define VkglTestCase_012286_2 "fragment_ops.random.74"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012286, VkglTestCase_012286_1, VkglTestCase_012286_2);

#define VkglTestCase_012287_1 "dEQP-GLES2.functional."
#define VkglTestCase_012287_2 "fragment_ops.random.75"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012287, VkglTestCase_012287_1, VkglTestCase_012287_2);

#define VkglTestCase_012288_1 "dEQP-GLES2.functional."
#define VkglTestCase_012288_2 "fragment_ops.random.76"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012288, VkglTestCase_012288_1, VkglTestCase_012288_2);

#define VkglTestCase_012289_1 "dEQP-GLES2.functional."
#define VkglTestCase_012289_2 "fragment_ops.random.77"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012289, VkglTestCase_012289_1, VkglTestCase_012289_2);

#define VkglTestCase_012290_1 "dEQP-GLES2.functional."
#define VkglTestCase_012290_2 "fragment_ops.random.78"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012290, VkglTestCase_012290_1, VkglTestCase_012290_2);

#define VkglTestCase_012291_1 "dEQP-GLES2.functional."
#define VkglTestCase_012291_2 "fragment_ops.random.79"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012291, VkglTestCase_012291_1, VkglTestCase_012291_2);

#define VkglTestCase_012292_1 "dEQP-GLES2.functional."
#define VkglTestCase_012292_2 "fragment_ops.random.80"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012292, VkglTestCase_012292_1, VkglTestCase_012292_2);

#define VkglTestCase_012293_1 "dEQP-GLES2.functional."
#define VkglTestCase_012293_2 "fragment_ops.random.81"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012293, VkglTestCase_012293_1, VkglTestCase_012293_2);

#define VkglTestCase_012294_1 "dEQP-GLES2.functional."
#define VkglTestCase_012294_2 "fragment_ops.random.82"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012294, VkglTestCase_012294_1, VkglTestCase_012294_2);

#define VkglTestCase_012295_1 "dEQP-GLES2.functional."
#define VkglTestCase_012295_2 "fragment_ops.random.83"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012295, VkglTestCase_012295_1, VkglTestCase_012295_2);

#define VkglTestCase_012296_1 "dEQP-GLES2.functional."
#define VkglTestCase_012296_2 "fragment_ops.random.84"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012296, VkglTestCase_012296_1, VkglTestCase_012296_2);

#define VkglTestCase_012297_1 "dEQP-GLES2.functional."
#define VkglTestCase_012297_2 "fragment_ops.random.85"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012297, VkglTestCase_012297_1, VkglTestCase_012297_2);

#define VkglTestCase_012298_1 "dEQP-GLES2.functional."
#define VkglTestCase_012298_2 "fragment_ops.random.86"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012298, VkglTestCase_012298_1, VkglTestCase_012298_2);

#define VkglTestCase_012299_1 "dEQP-GLES2.functional."
#define VkglTestCase_012299_2 "fragment_ops.random.87"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012299, VkglTestCase_012299_1, VkglTestCase_012299_2);

#define VkglTestCase_012300_1 "dEQP-GLES2.functional."
#define VkglTestCase_012300_2 "fragment_ops.random.88"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012300, VkglTestCase_012300_1, VkglTestCase_012300_2);

#define VkglTestCase_012301_1 "dEQP-GLES2.functional."
#define VkglTestCase_012301_2 "fragment_ops.random.89"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012301, VkglTestCase_012301_1, VkglTestCase_012301_2);

#define VkglTestCase_012302_1 "dEQP-GLES2.functional."
#define VkglTestCase_012302_2 "fragment_ops.random.90"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012302, VkglTestCase_012302_1, VkglTestCase_012302_2);

#define VkglTestCase_012303_1 "dEQP-GLES2.functional."
#define VkglTestCase_012303_2 "fragment_ops.random.91"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012303, VkglTestCase_012303_1, VkglTestCase_012303_2);

#define VkglTestCase_012304_1 "dEQP-GLES2.functional."
#define VkglTestCase_012304_2 "fragment_ops.random.92"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012304, VkglTestCase_012304_1, VkglTestCase_012304_2);

#define VkglTestCase_012305_1 "dEQP-GLES2.functional."
#define VkglTestCase_012305_2 "fragment_ops.random.93"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012305, VkglTestCase_012305_1, VkglTestCase_012305_2);

#define VkglTestCase_012306_1 "dEQP-GLES2.functional."
#define VkglTestCase_012306_2 "fragment_ops.random.94"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012306, VkglTestCase_012306_1, VkglTestCase_012306_2);

#define VkglTestCase_012307_1 "dEQP-GLES2.functional."
#define VkglTestCase_012307_2 "fragment_ops.random.95"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012307, VkglTestCase_012307_1, VkglTestCase_012307_2);

#define VkglTestCase_012308_1 "dEQP-GLES2.functional."
#define VkglTestCase_012308_2 "fragment_ops.random.96"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012308, VkglTestCase_012308_1, VkglTestCase_012308_2);

#define VkglTestCase_012309_1 "dEQP-GLES2.functional."
#define VkglTestCase_012309_2 "fragment_ops.random.97"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012309, VkglTestCase_012309_1, VkglTestCase_012309_2);

#define VkglTestCase_012310_1 "dEQP-GLES2.functional."
#define VkglTestCase_012310_2 "fragment_ops.random.98"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012310, VkglTestCase_012310_1, VkglTestCase_012310_2);

#define VkglTestCase_012311_1 "dEQP-GLES2.functional."
#define VkglTestCase_012311_2 "fragment_ops.random.99"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012311, VkglTestCase_012311_1, VkglTestCase_012311_2);
