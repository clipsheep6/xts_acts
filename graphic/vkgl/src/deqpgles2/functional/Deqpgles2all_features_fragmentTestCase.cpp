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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010132_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010132_2 "random.all_features.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010132, VkglTestCase_010132_1, VkglTestCase_010132_2);

#define VkglTestCase_010133_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010133_2 "random.all_features.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010133, VkglTestCase_010133_1, VkglTestCase_010133_2);

#define VkglTestCase_010134_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010134_2 "random.all_features.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010134, VkglTestCase_010134_1, VkglTestCase_010134_2);

#define VkglTestCase_010135_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010135_2 "random.all_features.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010135, VkglTestCase_010135_1, VkglTestCase_010135_2);

#define VkglTestCase_010136_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010136_2 "random.all_features.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010136, VkglTestCase_010136_1, VkglTestCase_010136_2);

#define VkglTestCase_010137_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010137_2 "random.all_features.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010137, VkglTestCase_010137_1, VkglTestCase_010137_2);

#define VkglTestCase_010138_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010138_2 "random.all_features.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010138, VkglTestCase_010138_1, VkglTestCase_010138_2);

#define VkglTestCase_010139_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010139_2 "random.all_features.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010139, VkglTestCase_010139_1, VkglTestCase_010139_2);

#define VkglTestCase_010140_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010140_2 "random.all_features.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010140, VkglTestCase_010140_1, VkglTestCase_010140_2);

#define VkglTestCase_010141_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010141_2 "random.all_features.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010141, VkglTestCase_010141_1, VkglTestCase_010141_2);

#define VkglTestCase_010142_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010142_2 "random.all_features.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010142, VkglTestCase_010142_1, VkglTestCase_010142_2);

#define VkglTestCase_010143_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010143_2 "random.all_features.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010143, VkglTestCase_010143_1, VkglTestCase_010143_2);

#define VkglTestCase_010144_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010144_2 "random.all_features.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010144, VkglTestCase_010144_1, VkglTestCase_010144_2);

#define VkglTestCase_010145_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010145_2 "random.all_features.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010145, VkglTestCase_010145_1, VkglTestCase_010145_2);

#define VkglTestCase_010146_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010146_2 "random.all_features.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010146, VkglTestCase_010146_1, VkglTestCase_010146_2);

#define VkglTestCase_010147_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010147_2 "random.all_features.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010147, VkglTestCase_010147_1, VkglTestCase_010147_2);

#define VkglTestCase_010148_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010148_2 "random.all_features.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010148, VkglTestCase_010148_1, VkglTestCase_010148_2);

#define VkglTestCase_010149_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010149_2 "random.all_features.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010149, VkglTestCase_010149_1, VkglTestCase_010149_2);

#define VkglTestCase_010150_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010150_2 "random.all_features.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010150, VkglTestCase_010150_1, VkglTestCase_010150_2);

#define VkglTestCase_010151_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010151_2 "random.all_features.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010151, VkglTestCase_010151_1, VkglTestCase_010151_2);

#define VkglTestCase_010152_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010152_2 "random.all_features.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010152, VkglTestCase_010152_1, VkglTestCase_010152_2);

#define VkglTestCase_010153_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010153_2 "random.all_features.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010153, VkglTestCase_010153_1, VkglTestCase_010153_2);

#define VkglTestCase_010154_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010154_2 "random.all_features.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010154, VkglTestCase_010154_1, VkglTestCase_010154_2);

#define VkglTestCase_010155_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010155_2 "random.all_features.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010155, VkglTestCase_010155_1, VkglTestCase_010155_2);

#define VkglTestCase_010156_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010156_2 "random.all_features.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010156, VkglTestCase_010156_1, VkglTestCase_010156_2);

#define VkglTestCase_010157_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010157_2 "random.all_features.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010157, VkglTestCase_010157_1, VkglTestCase_010157_2);

#define VkglTestCase_010158_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010158_2 "random.all_features.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010158, VkglTestCase_010158_1, VkglTestCase_010158_2);

#define VkglTestCase_010159_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010159_2 "random.all_features.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010159, VkglTestCase_010159_1, VkglTestCase_010159_2);

#define VkglTestCase_010160_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010160_2 "random.all_features.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010160, VkglTestCase_010160_1, VkglTestCase_010160_2);

#define VkglTestCase_010161_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010161_2 "random.all_features.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010161, VkglTestCase_010161_1, VkglTestCase_010161_2);

#define VkglTestCase_010162_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010162_2 "random.all_features.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010162, VkglTestCase_010162_1, VkglTestCase_010162_2);

#define VkglTestCase_010163_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010163_2 "random.all_features.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010163, VkglTestCase_010163_1, VkglTestCase_010163_2);

#define VkglTestCase_010164_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010164_2 "random.all_features.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010164, VkglTestCase_010164_1, VkglTestCase_010164_2);

#define VkglTestCase_010165_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010165_2 "random.all_features.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010165, VkglTestCase_010165_1, VkglTestCase_010165_2);

#define VkglTestCase_010166_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010166_2 "random.all_features.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010166, VkglTestCase_010166_1, VkglTestCase_010166_2);

#define VkglTestCase_010167_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010167_2 "random.all_features.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010167, VkglTestCase_010167_1, VkglTestCase_010167_2);

#define VkglTestCase_010168_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010168_2 "random.all_features.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010168, VkglTestCase_010168_1, VkglTestCase_010168_2);

#define VkglTestCase_010169_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010169_2 "random.all_features.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010169, VkglTestCase_010169_1, VkglTestCase_010169_2);

#define VkglTestCase_010170_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010170_2 "random.all_features.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010170, VkglTestCase_010170_1, VkglTestCase_010170_2);

#define VkglTestCase_010171_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010171_2 "random.all_features.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010171, VkglTestCase_010171_1, VkglTestCase_010171_2);

#define VkglTestCase_010172_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010172_2 "random.all_features.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010172, VkglTestCase_010172_1, VkglTestCase_010172_2);

#define VkglTestCase_010173_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010173_2 "random.all_features.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010173, VkglTestCase_010173_1, VkglTestCase_010173_2);

#define VkglTestCase_010174_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010174_2 "random.all_features.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010174, VkglTestCase_010174_1, VkglTestCase_010174_2);

#define VkglTestCase_010175_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010175_2 "random.all_features.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010175, VkglTestCase_010175_1, VkglTestCase_010175_2);

#define VkglTestCase_010176_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010176_2 "random.all_features.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010176, VkglTestCase_010176_1, VkglTestCase_010176_2);

#define VkglTestCase_010177_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010177_2 "random.all_features.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010177, VkglTestCase_010177_1, VkglTestCase_010177_2);

#define VkglTestCase_010178_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010178_2 "random.all_features.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010178, VkglTestCase_010178_1, VkglTestCase_010178_2);

#define VkglTestCase_010179_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010179_2 "random.all_features.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010179, VkglTestCase_010179_1, VkglTestCase_010179_2);

#define VkglTestCase_010180_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010180_2 "random.all_features.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010180, VkglTestCase_010180_1, VkglTestCase_010180_2);

#define VkglTestCase_010181_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010181_2 "random.all_features.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010181, VkglTestCase_010181_1, VkglTestCase_010181_2);

#define VkglTestCase_010182_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010182_2 "random.all_features.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010182, VkglTestCase_010182_1, VkglTestCase_010182_2);

#define VkglTestCase_010183_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010183_2 "random.all_features.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010183, VkglTestCase_010183_1, VkglTestCase_010183_2);

#define VkglTestCase_010184_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010184_2 "random.all_features.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010184, VkglTestCase_010184_1, VkglTestCase_010184_2);

#define VkglTestCase_010185_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010185_2 "random.all_features.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010185, VkglTestCase_010185_1, VkglTestCase_010185_2);

#define VkglTestCase_010186_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010186_2 "random.all_features.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010186, VkglTestCase_010186_1, VkglTestCase_010186_2);

#define VkglTestCase_010187_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010187_2 "random.all_features.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010187, VkglTestCase_010187_1, VkglTestCase_010187_2);

#define VkglTestCase_010188_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010188_2 "random.all_features.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010188, VkglTestCase_010188_1, VkglTestCase_010188_2);

#define VkglTestCase_010189_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010189_2 "random.all_features.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010189, VkglTestCase_010189_1, VkglTestCase_010189_2);

#define VkglTestCase_010190_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010190_2 "random.all_features.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010190, VkglTestCase_010190_1, VkglTestCase_010190_2);

#define VkglTestCase_010191_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010191_2 "random.all_features.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010191, VkglTestCase_010191_1, VkglTestCase_010191_2);

#define VkglTestCase_010192_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010192_2 "random.all_features.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010192, VkglTestCase_010192_1, VkglTestCase_010192_2);

#define VkglTestCase_010193_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010193_2 "random.all_features.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010193, VkglTestCase_010193_1, VkglTestCase_010193_2);

#define VkglTestCase_010194_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010194_2 "random.all_features.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010194, VkglTestCase_010194_1, VkglTestCase_010194_2);

#define VkglTestCase_010195_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010195_2 "random.all_features.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010195, VkglTestCase_010195_1, VkglTestCase_010195_2);

#define VkglTestCase_010196_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010196_2 "random.all_features.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010196, VkglTestCase_010196_1, VkglTestCase_010196_2);

#define VkglTestCase_010197_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010197_2 "random.all_features.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010197, VkglTestCase_010197_1, VkglTestCase_010197_2);

#define VkglTestCase_010198_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010198_2 "random.all_features.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010198, VkglTestCase_010198_1, VkglTestCase_010198_2);

#define VkglTestCase_010199_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010199_2 "random.all_features.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010199, VkglTestCase_010199_1, VkglTestCase_010199_2);

#define VkglTestCase_010200_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010200_2 "random.all_features.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010200, VkglTestCase_010200_1, VkglTestCase_010200_2);

#define VkglTestCase_010201_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010201_2 "random.all_features.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010201, VkglTestCase_010201_1, VkglTestCase_010201_2);

#define VkglTestCase_010202_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010202_2 "random.all_features.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010202, VkglTestCase_010202_1, VkglTestCase_010202_2);

#define VkglTestCase_010203_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010203_2 "random.all_features.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010203, VkglTestCase_010203_1, VkglTestCase_010203_2);

#define VkglTestCase_010204_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010204_2 "random.all_features.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010204, VkglTestCase_010204_1, VkglTestCase_010204_2);

#define VkglTestCase_010205_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010205_2 "random.all_features.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010205, VkglTestCase_010205_1, VkglTestCase_010205_2);

#define VkglTestCase_010206_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010206_2 "random.all_features.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010206, VkglTestCase_010206_1, VkglTestCase_010206_2);

#define VkglTestCase_010207_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010207_2 "random.all_features.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010207, VkglTestCase_010207_1, VkglTestCase_010207_2);

#define VkglTestCase_010208_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010208_2 "random.all_features.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010208, VkglTestCase_010208_1, VkglTestCase_010208_2);

#define VkglTestCase_010209_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010209_2 "random.all_features.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010209, VkglTestCase_010209_1, VkglTestCase_010209_2);

#define VkglTestCase_010210_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010210_2 "random.all_features.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010210, VkglTestCase_010210_1, VkglTestCase_010210_2);

#define VkglTestCase_010211_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010211_2 "random.all_features.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010211, VkglTestCase_010211_1, VkglTestCase_010211_2);

#define VkglTestCase_010212_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010212_2 "random.all_features.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010212, VkglTestCase_010212_1, VkglTestCase_010212_2);

#define VkglTestCase_010213_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010213_2 "random.all_features.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010213, VkglTestCase_010213_1, VkglTestCase_010213_2);

#define VkglTestCase_010214_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010214_2 "random.all_features.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010214, VkglTestCase_010214_1, VkglTestCase_010214_2);

#define VkglTestCase_010215_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010215_2 "random.all_features.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010215, VkglTestCase_010215_1, VkglTestCase_010215_2);

#define VkglTestCase_010216_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010216_2 "random.all_features.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010216, VkglTestCase_010216_1, VkglTestCase_010216_2);

#define VkglTestCase_010217_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010217_2 "random.all_features.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010217, VkglTestCase_010217_1, VkglTestCase_010217_2);

#define VkglTestCase_010218_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010218_2 "random.all_features.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010218, VkglTestCase_010218_1, VkglTestCase_010218_2);

#define VkglTestCase_010219_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010219_2 "random.all_features.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010219, VkglTestCase_010219_1, VkglTestCase_010219_2);

#define VkglTestCase_010220_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010220_2 "random.all_features.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010220, VkglTestCase_010220_1, VkglTestCase_010220_2);

#define VkglTestCase_010221_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010221_2 "random.all_features.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010221, VkglTestCase_010221_1, VkglTestCase_010221_2);

#define VkglTestCase_010222_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010222_2 "random.all_features.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010222, VkglTestCase_010222_1, VkglTestCase_010222_2);

#define VkglTestCase_010223_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010223_2 "random.all_features.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010223, VkglTestCase_010223_1, VkglTestCase_010223_2);

#define VkglTestCase_010224_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010224_2 "random.all_features.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010224, VkglTestCase_010224_1, VkglTestCase_010224_2);

#define VkglTestCase_010225_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010225_2 "random.all_features.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010225, VkglTestCase_010225_1, VkglTestCase_010225_2);

#define VkglTestCase_010226_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010226_2 "random.all_features.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010226, VkglTestCase_010226_1, VkglTestCase_010226_2);

#define VkglTestCase_010227_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010227_2 "random.all_features.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010227, VkglTestCase_010227_1, VkglTestCase_010227_2);

#define VkglTestCase_010228_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010228_2 "random.all_features.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010228, VkglTestCase_010228_1, VkglTestCase_010228_2);

#define VkglTestCase_010229_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_010229_2 "random.all_features.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010229, VkglTestCase_010229_1, VkglTestCase_010229_2);
