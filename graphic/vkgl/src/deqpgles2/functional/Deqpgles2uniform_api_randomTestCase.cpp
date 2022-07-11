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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015149_1 "dEQP-GLES2.functional"
#define VkglTestCase_015149_2 ".uniform_api.random.0"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015149, VkglTestCase_015149_1, VkglTestCase_015149_2);

#define VkglTestCase_015150_1 "dEQP-GLES2.functional"
#define VkglTestCase_015150_2 ".uniform_api.random.1"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015150, VkglTestCase_015150_1, VkglTestCase_015150_2);

#define VkglTestCase_015151_1 "dEQP-GLES2.functional"
#define VkglTestCase_015151_2 ".uniform_api.random.2"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015151, VkglTestCase_015151_1, VkglTestCase_015151_2);

#define VkglTestCase_015152_1 "dEQP-GLES2.functional"
#define VkglTestCase_015152_2 ".uniform_api.random.3"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015152, VkglTestCase_015152_1, VkglTestCase_015152_2);

#define VkglTestCase_015153_1 "dEQP-GLES2.functional"
#define VkglTestCase_015153_2 ".uniform_api.random.4"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015153, VkglTestCase_015153_1, VkglTestCase_015153_2);

#define VkglTestCase_015154_1 "dEQP-GLES2.functional"
#define VkglTestCase_015154_2 ".uniform_api.random.5"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015154, VkglTestCase_015154_1, VkglTestCase_015154_2);

#define VkglTestCase_015155_1 "dEQP-GLES2.functional"
#define VkglTestCase_015155_2 ".uniform_api.random.6"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015155, VkglTestCase_015155_1, VkglTestCase_015155_2);

#define VkglTestCase_015156_1 "dEQP-GLES2.functional"
#define VkglTestCase_015156_2 ".uniform_api.random.7"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015156, VkglTestCase_015156_1, VkglTestCase_015156_2);

#define VkglTestCase_015157_1 "dEQP-GLES2.functional"
#define VkglTestCase_015157_2 ".uniform_api.random.8"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015157, VkglTestCase_015157_1, VkglTestCase_015157_2);

#define VkglTestCase_015158_1 "dEQP-GLES2.functional"
#define VkglTestCase_015158_2 ".uniform_api.random.9"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015158, VkglTestCase_015158_1, VkglTestCase_015158_2);

#define VkglTestCase_015159_1 "dEQP-GLES2.functional"
#define VkglTestCase_015159_2 ".uniform_api.random.10"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015159, VkglTestCase_015159_1, VkglTestCase_015159_2);

#define VkglTestCase_015160_1 "dEQP-GLES2.functional"
#define VkglTestCase_015160_2 ".uniform_api.random.11"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015160, VkglTestCase_015160_1, VkglTestCase_015160_2);

#define VkglTestCase_015161_1 "dEQP-GLES2.functional"
#define VkglTestCase_015161_2 ".uniform_api.random.12"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015161, VkglTestCase_015161_1, VkglTestCase_015161_2);

#define VkglTestCase_015162_1 "dEQP-GLES2.functional"
#define VkglTestCase_015162_2 ".uniform_api.random.13"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015162, VkglTestCase_015162_1, VkglTestCase_015162_2);

#define VkglTestCase_015163_1 "dEQP-GLES2.functional"
#define VkglTestCase_015163_2 ".uniform_api.random.14"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015163, VkglTestCase_015163_1, VkglTestCase_015163_2);

#define VkglTestCase_015164_1 "dEQP-GLES2.functional"
#define VkglTestCase_015164_2 ".uniform_api.random.15"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015164, VkglTestCase_015164_1, VkglTestCase_015164_2);

#define VkglTestCase_015165_1 "dEQP-GLES2.functional"
#define VkglTestCase_015165_2 ".uniform_api.random.16"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015165, VkglTestCase_015165_1, VkglTestCase_015165_2);

#define VkglTestCase_015166_1 "dEQP-GLES2.functional"
#define VkglTestCase_015166_2 ".uniform_api.random.17"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015166, VkglTestCase_015166_1, VkglTestCase_015166_2);

#define VkglTestCase_015167_1 "dEQP-GLES2.functional"
#define VkglTestCase_015167_2 ".uniform_api.random.18"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015167, VkglTestCase_015167_1, VkglTestCase_015167_2);

#define VkglTestCase_015168_1 "dEQP-GLES2.functional"
#define VkglTestCase_015168_2 ".uniform_api.random.19"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015168, VkglTestCase_015168_1, VkglTestCase_015168_2);

#define VkglTestCase_015169_1 "dEQP-GLES2.functional"
#define VkglTestCase_015169_2 ".uniform_api.random.20"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015169, VkglTestCase_015169_1, VkglTestCase_015169_2);

#define VkglTestCase_015170_1 "dEQP-GLES2.functional"
#define VkglTestCase_015170_2 ".uniform_api.random.21"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015170, VkglTestCase_015170_1, VkglTestCase_015170_2);

#define VkglTestCase_015171_1 "dEQP-GLES2.functional"
#define VkglTestCase_015171_2 ".uniform_api.random.22"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015171, VkglTestCase_015171_1, VkglTestCase_015171_2);

#define VkglTestCase_015172_1 "dEQP-GLES2.functional"
#define VkglTestCase_015172_2 ".uniform_api.random.23"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015172, VkglTestCase_015172_1, VkglTestCase_015172_2);

#define VkglTestCase_015173_1 "dEQP-GLES2.functional"
#define VkglTestCase_015173_2 ".uniform_api.random.24"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015173, VkglTestCase_015173_1, VkglTestCase_015173_2);

#define VkglTestCase_015174_1 "dEQP-GLES2.functional"
#define VkglTestCase_015174_2 ".uniform_api.random.25"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015174, VkglTestCase_015174_1, VkglTestCase_015174_2);

#define VkglTestCase_015175_1 "dEQP-GLES2.functional"
#define VkglTestCase_015175_2 ".uniform_api.random.26"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015175, VkglTestCase_015175_1, VkglTestCase_015175_2);

#define VkglTestCase_015176_1 "dEQP-GLES2.functional"
#define VkglTestCase_015176_2 ".uniform_api.random.27"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015176, VkglTestCase_015176_1, VkglTestCase_015176_2);

#define VkglTestCase_015177_1 "dEQP-GLES2.functional"
#define VkglTestCase_015177_2 ".uniform_api.random.28"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015177, VkglTestCase_015177_1, VkglTestCase_015177_2);

#define VkglTestCase_015178_1 "dEQP-GLES2.functional"
#define VkglTestCase_015178_2 ".uniform_api.random.29"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015178, VkglTestCase_015178_1, VkglTestCase_015178_2);

#define VkglTestCase_015179_1 "dEQP-GLES2.functional"
#define VkglTestCase_015179_2 ".uniform_api.random.30"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015179, VkglTestCase_015179_1, VkglTestCase_015179_2);

#define VkglTestCase_015180_1 "dEQP-GLES2.functional"
#define VkglTestCase_015180_2 ".uniform_api.random.31"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015180, VkglTestCase_015180_1, VkglTestCase_015180_2);

#define VkglTestCase_015181_1 "dEQP-GLES2.functional"
#define VkglTestCase_015181_2 ".uniform_api.random.32"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015181, VkglTestCase_015181_1, VkglTestCase_015181_2);

#define VkglTestCase_015182_1 "dEQP-GLES2.functional"
#define VkglTestCase_015182_2 ".uniform_api.random.33"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015182, VkglTestCase_015182_1, VkglTestCase_015182_2);

#define VkglTestCase_015183_1 "dEQP-GLES2.functional"
#define VkglTestCase_015183_2 ".uniform_api.random.34"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015183, VkglTestCase_015183_1, VkglTestCase_015183_2);

#define VkglTestCase_015184_1 "dEQP-GLES2.functional"
#define VkglTestCase_015184_2 ".uniform_api.random.35"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015184, VkglTestCase_015184_1, VkglTestCase_015184_2);

#define VkglTestCase_015185_1 "dEQP-GLES2.functional"
#define VkglTestCase_015185_2 ".uniform_api.random.36"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015185, VkglTestCase_015185_1, VkglTestCase_015185_2);

#define VkglTestCase_015186_1 "dEQP-GLES2.functional"
#define VkglTestCase_015186_2 ".uniform_api.random.37"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015186, VkglTestCase_015186_1, VkglTestCase_015186_2);

#define VkglTestCase_015187_1 "dEQP-GLES2.functional"
#define VkglTestCase_015187_2 ".uniform_api.random.38"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015187, VkglTestCase_015187_1, VkglTestCase_015187_2);

#define VkglTestCase_015188_1 "dEQP-GLES2.functional"
#define VkglTestCase_015188_2 ".uniform_api.random.39"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015188, VkglTestCase_015188_1, VkglTestCase_015188_2);

#define VkglTestCase_015189_1 "dEQP-GLES2.functional"
#define VkglTestCase_015189_2 ".uniform_api.random.40"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015189, VkglTestCase_015189_1, VkglTestCase_015189_2);

#define VkglTestCase_015190_1 "dEQP-GLES2.functional"
#define VkglTestCase_015190_2 ".uniform_api.random.41"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015190, VkglTestCase_015190_1, VkglTestCase_015190_2);

#define VkglTestCase_015191_1 "dEQP-GLES2.functional"
#define VkglTestCase_015191_2 ".uniform_api.random.42"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015191, VkglTestCase_015191_1, VkglTestCase_015191_2);

#define VkglTestCase_015192_1 "dEQP-GLES2.functional"
#define VkglTestCase_015192_2 ".uniform_api.random.43"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015192, VkglTestCase_015192_1, VkglTestCase_015192_2);

#define VkglTestCase_015193_1 "dEQP-GLES2.functional"
#define VkglTestCase_015193_2 ".uniform_api.random.44"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015193, VkglTestCase_015193_1, VkglTestCase_015193_2);

#define VkglTestCase_015194_1 "dEQP-GLES2.functional"
#define VkglTestCase_015194_2 ".uniform_api.random.45"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015194, VkglTestCase_015194_1, VkglTestCase_015194_2);

#define VkglTestCase_015195_1 "dEQP-GLES2.functional"
#define VkglTestCase_015195_2 ".uniform_api.random.46"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015195, VkglTestCase_015195_1, VkglTestCase_015195_2);

#define VkglTestCase_015196_1 "dEQP-GLES2.functional"
#define VkglTestCase_015196_2 ".uniform_api.random.47"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015196, VkglTestCase_015196_1, VkglTestCase_015196_2);

#define VkglTestCase_015197_1 "dEQP-GLES2.functional"
#define VkglTestCase_015197_2 ".uniform_api.random.48"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015197, VkglTestCase_015197_1, VkglTestCase_015197_2);

#define VkglTestCase_015198_1 "dEQP-GLES2.functional"
#define VkglTestCase_015198_2 ".uniform_api.random.49"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015198, VkglTestCase_015198_1, VkglTestCase_015198_2);

#define VkglTestCase_015199_1 "dEQP-GLES2.functional"
#define VkglTestCase_015199_2 ".uniform_api.random.50"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015199, VkglTestCase_015199_1, VkglTestCase_015199_2);

#define VkglTestCase_015200_1 "dEQP-GLES2.functional"
#define VkglTestCase_015200_2 ".uniform_api.random.51"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015200, VkglTestCase_015200_1, VkglTestCase_015200_2);

#define VkglTestCase_015201_1 "dEQP-GLES2.functional"
#define VkglTestCase_015201_2 ".uniform_api.random.52"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015201, VkglTestCase_015201_1, VkglTestCase_015201_2);

#define VkglTestCase_015202_1 "dEQP-GLES2.functional"
#define VkglTestCase_015202_2 ".uniform_api.random.53"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015202, VkglTestCase_015202_1, VkglTestCase_015202_2);

#define VkglTestCase_015203_1 "dEQP-GLES2.functional"
#define VkglTestCase_015203_2 ".uniform_api.random.54"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015203, VkglTestCase_015203_1, VkglTestCase_015203_2);

#define VkglTestCase_015204_1 "dEQP-GLES2.functional"
#define VkglTestCase_015204_2 ".uniform_api.random.55"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015204, VkglTestCase_015204_1, VkglTestCase_015204_2);

#define VkglTestCase_015205_1 "dEQP-GLES2.functional"
#define VkglTestCase_015205_2 ".uniform_api.random.56"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015205, VkglTestCase_015205_1, VkglTestCase_015205_2);

#define VkglTestCase_015206_1 "dEQP-GLES2.functional"
#define VkglTestCase_015206_2 ".uniform_api.random.57"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015206, VkglTestCase_015206_1, VkglTestCase_015206_2);

#define VkglTestCase_015207_1 "dEQP-GLES2.functional"
#define VkglTestCase_015207_2 ".uniform_api.random.58"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015207, VkglTestCase_015207_1, VkglTestCase_015207_2);

#define VkglTestCase_015208_1 "dEQP-GLES2.functional"
#define VkglTestCase_015208_2 ".uniform_api.random.59"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015208, VkglTestCase_015208_1, VkglTestCase_015208_2);

#define VkglTestCase_015209_1 "dEQP-GLES2.functional"
#define VkglTestCase_015209_2 ".uniform_api.random.60"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015209, VkglTestCase_015209_1, VkglTestCase_015209_2);

#define VkglTestCase_015210_1 "dEQP-GLES2.functional"
#define VkglTestCase_015210_2 ".uniform_api.random.61"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015210, VkglTestCase_015210_1, VkglTestCase_015210_2);

#define VkglTestCase_015211_1 "dEQP-GLES2.functional"
#define VkglTestCase_015211_2 ".uniform_api.random.62"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015211, VkglTestCase_015211_1, VkglTestCase_015211_2);

#define VkglTestCase_015212_1 "dEQP-GLES2.functional"
#define VkglTestCase_015212_2 ".uniform_api.random.63"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015212, VkglTestCase_015212_1, VkglTestCase_015212_2);

#define VkglTestCase_015213_1 "dEQP-GLES2.functional"
#define VkglTestCase_015213_2 ".uniform_api.random.64"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015213, VkglTestCase_015213_1, VkglTestCase_015213_2);

#define VkglTestCase_015214_1 "dEQP-GLES2.functional"
#define VkglTestCase_015214_2 ".uniform_api.random.65"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015214, VkglTestCase_015214_1, VkglTestCase_015214_2);

#define VkglTestCase_015215_1 "dEQP-GLES2.functional"
#define VkglTestCase_015215_2 ".uniform_api.random.66"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015215, VkglTestCase_015215_1, VkglTestCase_015215_2);

#define VkglTestCase_015216_1 "dEQP-GLES2.functional"
#define VkglTestCase_015216_2 ".uniform_api.random.67"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015216, VkglTestCase_015216_1, VkglTestCase_015216_2);

#define VkglTestCase_015217_1 "dEQP-GLES2.functional"
#define VkglTestCase_015217_2 ".uniform_api.random.68"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015217, VkglTestCase_015217_1, VkglTestCase_015217_2);

#define VkglTestCase_015218_1 "dEQP-GLES2.functional"
#define VkglTestCase_015218_2 ".uniform_api.random.69"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015218, VkglTestCase_015218_1, VkglTestCase_015218_2);

#define VkglTestCase_015219_1 "dEQP-GLES2.functional"
#define VkglTestCase_015219_2 ".uniform_api.random.70"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015219, VkglTestCase_015219_1, VkglTestCase_015219_2);

#define VkglTestCase_015220_1 "dEQP-GLES2.functional"
#define VkglTestCase_015220_2 ".uniform_api.random.71"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015220, VkglTestCase_015220_1, VkglTestCase_015220_2);

#define VkglTestCase_015221_1 "dEQP-GLES2.functional"
#define VkglTestCase_015221_2 ".uniform_api.random.72"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015221, VkglTestCase_015221_1, VkglTestCase_015221_2);

#define VkglTestCase_015222_1 "dEQP-GLES2.functional"
#define VkglTestCase_015222_2 ".uniform_api.random.73"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015222, VkglTestCase_015222_1, VkglTestCase_015222_2);

#define VkglTestCase_015223_1 "dEQP-GLES2.functional"
#define VkglTestCase_015223_2 ".uniform_api.random.74"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015223, VkglTestCase_015223_1, VkglTestCase_015223_2);

#define VkglTestCase_015224_1 "dEQP-GLES2.functional"
#define VkglTestCase_015224_2 ".uniform_api.random.75"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015224, VkglTestCase_015224_1, VkglTestCase_015224_2);

#define VkglTestCase_015225_1 "dEQP-GLES2.functional"
#define VkglTestCase_015225_2 ".uniform_api.random.76"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015225, VkglTestCase_015225_1, VkglTestCase_015225_2);

#define VkglTestCase_015226_1 "dEQP-GLES2.functional"
#define VkglTestCase_015226_2 ".uniform_api.random.77"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015226, VkglTestCase_015226_1, VkglTestCase_015226_2);

#define VkglTestCase_015227_1 "dEQP-GLES2.functional"
#define VkglTestCase_015227_2 ".uniform_api.random.78"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015227, VkglTestCase_015227_1, VkglTestCase_015227_2);

#define VkglTestCase_015228_1 "dEQP-GLES2.functional"
#define VkglTestCase_015228_2 ".uniform_api.random.79"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015228, VkglTestCase_015228_1, VkglTestCase_015228_2);

#define VkglTestCase_015229_1 "dEQP-GLES2.functional"
#define VkglTestCase_015229_2 ".uniform_api.random.80"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015229, VkglTestCase_015229_1, VkglTestCase_015229_2);

#define VkglTestCase_015230_1 "dEQP-GLES2.functional"
#define VkglTestCase_015230_2 ".uniform_api.random.81"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015230, VkglTestCase_015230_1, VkglTestCase_015230_2);

#define VkglTestCase_015231_1 "dEQP-GLES2.functional"
#define VkglTestCase_015231_2 ".uniform_api.random.82"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015231, VkglTestCase_015231_1, VkglTestCase_015231_2);

#define VkglTestCase_015232_1 "dEQP-GLES2.functional"
#define VkglTestCase_015232_2 ".uniform_api.random.83"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015232, VkglTestCase_015232_1, VkglTestCase_015232_2);

#define VkglTestCase_015233_1 "dEQP-GLES2.functional"
#define VkglTestCase_015233_2 ".uniform_api.random.84"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015233, VkglTestCase_015233_1, VkglTestCase_015233_2);

#define VkglTestCase_015234_1 "dEQP-GLES2.functional"
#define VkglTestCase_015234_2 ".uniform_api.random.85"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015234, VkglTestCase_015234_1, VkglTestCase_015234_2);

#define VkglTestCase_015235_1 "dEQP-GLES2.functional"
#define VkglTestCase_015235_2 ".uniform_api.random.86"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015235, VkglTestCase_015235_1, VkglTestCase_015235_2);

#define VkglTestCase_015236_1 "dEQP-GLES2.functional"
#define VkglTestCase_015236_2 ".uniform_api.random.87"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015236, VkglTestCase_015236_1, VkglTestCase_015236_2);

#define VkglTestCase_015237_1 "dEQP-GLES2.functional"
#define VkglTestCase_015237_2 ".uniform_api.random.88"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015237, VkglTestCase_015237_1, VkglTestCase_015237_2);

#define VkglTestCase_015238_1 "dEQP-GLES2.functional"
#define VkglTestCase_015238_2 ".uniform_api.random.89"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015238, VkglTestCase_015238_1, VkglTestCase_015238_2);

#define VkglTestCase_015239_1 "dEQP-GLES2.functional"
#define VkglTestCase_015239_2 ".uniform_api.random.90"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015239, VkglTestCase_015239_1, VkglTestCase_015239_2);

#define VkglTestCase_015240_1 "dEQP-GLES2.functional"
#define VkglTestCase_015240_2 ".uniform_api.random.91"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015240, VkglTestCase_015240_1, VkglTestCase_015240_2);

#define VkglTestCase_015241_1 "dEQP-GLES2.functional"
#define VkglTestCase_015241_2 ".uniform_api.random.92"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015241, VkglTestCase_015241_1, VkglTestCase_015241_2);

#define VkglTestCase_015242_1 "dEQP-GLES2.functional"
#define VkglTestCase_015242_2 ".uniform_api.random.93"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015242, VkglTestCase_015242_1, VkglTestCase_015242_2);

#define VkglTestCase_015243_1 "dEQP-GLES2.functional"
#define VkglTestCase_015243_2 ".uniform_api.random.94"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015243, VkglTestCase_015243_1, VkglTestCase_015243_2);

#define VkglTestCase_015244_1 "dEQP-GLES2.functional"
#define VkglTestCase_015244_2 ".uniform_api.random.95"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015244, VkglTestCase_015244_1, VkglTestCase_015244_2);

#define VkglTestCase_015245_1 "dEQP-GLES2.functional"
#define VkglTestCase_015245_2 ".uniform_api.random.96"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015245, VkglTestCase_015245_1, VkglTestCase_015245_2);

#define VkglTestCase_015246_1 "dEQP-GLES2.functional"
#define VkglTestCase_015246_2 ".uniform_api.random.97"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015246, VkglTestCase_015246_1, VkglTestCase_015246_2);

#define VkglTestCase_015247_1 "dEQP-GLES2.functional"
#define VkglTestCase_015247_2 ".uniform_api.random.98"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015247, VkglTestCase_015247_1, VkglTestCase_015247_2);

#define VkglTestCase_015248_1 "dEQP-GLES2.functional"
#define VkglTestCase_015248_2 ".uniform_api.random.99"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015248, VkglTestCase_015248_1, VkglTestCase_015248_2);
