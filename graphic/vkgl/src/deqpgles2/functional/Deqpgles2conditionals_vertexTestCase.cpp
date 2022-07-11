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
#include "../ActsDeqpgles20010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009132_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009132_2 ".random.conditionals.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009132, VkglTestCase_009132_1, VkglTestCase_009132_2);

#define VkglTestCase_009133_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009133_2 ".random.conditionals.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009133, VkglTestCase_009133_1, VkglTestCase_009133_2);

#define VkglTestCase_009134_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009134_2 ".random.conditionals.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009134, VkglTestCase_009134_1, VkglTestCase_009134_2);

#define VkglTestCase_009135_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009135_2 ".random.conditionals.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009135, VkglTestCase_009135_1, VkglTestCase_009135_2);

#define VkglTestCase_009136_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009136_2 ".random.conditionals.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009136, VkglTestCase_009136_1, VkglTestCase_009136_2);

#define VkglTestCase_009137_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009137_2 ".random.conditionals.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009137, VkglTestCase_009137_1, VkglTestCase_009137_2);

#define VkglTestCase_009138_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009138_2 ".random.conditionals.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009138, VkglTestCase_009138_1, VkglTestCase_009138_2);

#define VkglTestCase_009139_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009139_2 ".random.conditionals.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009139, VkglTestCase_009139_1, VkglTestCase_009139_2);

#define VkglTestCase_009140_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009140_2 ".random.conditionals.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009140, VkglTestCase_009140_1, VkglTestCase_009140_2);

#define VkglTestCase_009141_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009141_2 ".random.conditionals.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009141, VkglTestCase_009141_1, VkglTestCase_009141_2);

#define VkglTestCase_009142_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009142_2 ".random.conditionals.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009142, VkglTestCase_009142_1, VkglTestCase_009142_2);

#define VkglTestCase_009143_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009143_2 ".random.conditionals.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009143, VkglTestCase_009143_1, VkglTestCase_009143_2);

#define VkglTestCase_009144_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009144_2 ".random.conditionals.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009144, VkglTestCase_009144_1, VkglTestCase_009144_2);

#define VkglTestCase_009145_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009145_2 ".random.conditionals.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009145, VkglTestCase_009145_1, VkglTestCase_009145_2);

#define VkglTestCase_009146_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009146_2 ".random.conditionals.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009146, VkglTestCase_009146_1, VkglTestCase_009146_2);

#define VkglTestCase_009147_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009147_2 ".random.conditionals.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009147, VkglTestCase_009147_1, VkglTestCase_009147_2);

#define VkglTestCase_009148_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009148_2 ".random.conditionals.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009148, VkglTestCase_009148_1, VkglTestCase_009148_2);

#define VkglTestCase_009149_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009149_2 ".random.conditionals.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009149, VkglTestCase_009149_1, VkglTestCase_009149_2);

#define VkglTestCase_009150_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009150_2 ".random.conditionals.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009150, VkglTestCase_009150_1, VkglTestCase_009150_2);

#define VkglTestCase_009151_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009151_2 ".random.conditionals.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009151, VkglTestCase_009151_1, VkglTestCase_009151_2);

#define VkglTestCase_009152_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009152_2 ".random.conditionals.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009152, VkglTestCase_009152_1, VkglTestCase_009152_2);

#define VkglTestCase_009153_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009153_2 ".random.conditionals.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009153, VkglTestCase_009153_1, VkglTestCase_009153_2);

#define VkglTestCase_009154_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009154_2 ".random.conditionals.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009154, VkglTestCase_009154_1, VkglTestCase_009154_2);

#define VkglTestCase_009155_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009155_2 ".random.conditionals.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009155, VkglTestCase_009155_1, VkglTestCase_009155_2);

#define VkglTestCase_009156_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009156_2 ".random.conditionals.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009156, VkglTestCase_009156_1, VkglTestCase_009156_2);

#define VkglTestCase_009157_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009157_2 ".random.conditionals.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009157, VkglTestCase_009157_1, VkglTestCase_009157_2);

#define VkglTestCase_009158_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009158_2 ".random.conditionals.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009158, VkglTestCase_009158_1, VkglTestCase_009158_2);

#define VkglTestCase_009159_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009159_2 ".random.conditionals.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009159, VkglTestCase_009159_1, VkglTestCase_009159_2);

#define VkglTestCase_009160_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009160_2 ".random.conditionals.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009160, VkglTestCase_009160_1, VkglTestCase_009160_2);

#define VkglTestCase_009161_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009161_2 ".random.conditionals.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009161, VkglTestCase_009161_1, VkglTestCase_009161_2);

#define VkglTestCase_009162_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009162_2 ".random.conditionals.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009162, VkglTestCase_009162_1, VkglTestCase_009162_2);

#define VkglTestCase_009163_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009163_2 ".random.conditionals.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009163, VkglTestCase_009163_1, VkglTestCase_009163_2);

#define VkglTestCase_009164_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009164_2 ".random.conditionals.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009164, VkglTestCase_009164_1, VkglTestCase_009164_2);

#define VkglTestCase_009165_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009165_2 ".random.conditionals.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009165, VkglTestCase_009165_1, VkglTestCase_009165_2);

#define VkglTestCase_009166_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009166_2 ".random.conditionals.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009166, VkglTestCase_009166_1, VkglTestCase_009166_2);

#define VkglTestCase_009167_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009167_2 ".random.conditionals.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009167, VkglTestCase_009167_1, VkglTestCase_009167_2);

#define VkglTestCase_009168_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009168_2 ".random.conditionals.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009168, VkglTestCase_009168_1, VkglTestCase_009168_2);

#define VkglTestCase_009169_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009169_2 ".random.conditionals.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009169, VkglTestCase_009169_1, VkglTestCase_009169_2);

#define VkglTestCase_009170_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009170_2 ".random.conditionals.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009170, VkglTestCase_009170_1, VkglTestCase_009170_2);

#define VkglTestCase_009171_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009171_2 ".random.conditionals.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009171, VkglTestCase_009171_1, VkglTestCase_009171_2);

#define VkglTestCase_009172_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009172_2 ".random.conditionals.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009172, VkglTestCase_009172_1, VkglTestCase_009172_2);

#define VkglTestCase_009173_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009173_2 ".random.conditionals.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009173, VkglTestCase_009173_1, VkglTestCase_009173_2);

#define VkglTestCase_009174_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009174_2 ".random.conditionals.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009174, VkglTestCase_009174_1, VkglTestCase_009174_2);

#define VkglTestCase_009175_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009175_2 ".random.conditionals.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009175, VkglTestCase_009175_1, VkglTestCase_009175_2);

#define VkglTestCase_009176_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009176_2 ".random.conditionals.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009176, VkglTestCase_009176_1, VkglTestCase_009176_2);

#define VkglTestCase_009177_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009177_2 ".random.conditionals.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009177, VkglTestCase_009177_1, VkglTestCase_009177_2);

#define VkglTestCase_009178_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009178_2 ".random.conditionals.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009178, VkglTestCase_009178_1, VkglTestCase_009178_2);

#define VkglTestCase_009179_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009179_2 ".random.conditionals.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009179, VkglTestCase_009179_1, VkglTestCase_009179_2);

#define VkglTestCase_009180_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009180_2 ".random.conditionals.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009180, VkglTestCase_009180_1, VkglTestCase_009180_2);

#define VkglTestCase_009181_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009181_2 ".random.conditionals.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009181, VkglTestCase_009181_1, VkglTestCase_009181_2);

#define VkglTestCase_009182_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009182_2 ".random.conditionals.vertex.50"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009182, VkglTestCase_009182_1, VkglTestCase_009182_2);

#define VkglTestCase_009183_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009183_2 ".random.conditionals.vertex.51"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009183, VkglTestCase_009183_1, VkglTestCase_009183_2);

#define VkglTestCase_009184_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009184_2 ".random.conditionals.vertex.52"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009184, VkglTestCase_009184_1, VkglTestCase_009184_2);

#define VkglTestCase_009185_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009185_2 ".random.conditionals.vertex.53"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009185, VkglTestCase_009185_1, VkglTestCase_009185_2);

#define VkglTestCase_009186_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009186_2 ".random.conditionals.vertex.54"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009186, VkglTestCase_009186_1, VkglTestCase_009186_2);

#define VkglTestCase_009187_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009187_2 ".random.conditionals.vertex.55"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009187, VkglTestCase_009187_1, VkglTestCase_009187_2);

#define VkglTestCase_009188_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009188_2 ".random.conditionals.vertex.56"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009188, VkglTestCase_009188_1, VkglTestCase_009188_2);

#define VkglTestCase_009189_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009189_2 ".random.conditionals.vertex.57"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009189, VkglTestCase_009189_1, VkglTestCase_009189_2);

#define VkglTestCase_009190_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009190_2 ".random.conditionals.vertex.58"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009190, VkglTestCase_009190_1, VkglTestCase_009190_2);

#define VkglTestCase_009191_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009191_2 ".random.conditionals.vertex.59"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009191, VkglTestCase_009191_1, VkglTestCase_009191_2);

#define VkglTestCase_009192_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009192_2 ".random.conditionals.vertex.60"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009192, VkglTestCase_009192_1, VkglTestCase_009192_2);

#define VkglTestCase_009193_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009193_2 ".random.conditionals.vertex.61"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009193, VkglTestCase_009193_1, VkglTestCase_009193_2);

#define VkglTestCase_009194_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009194_2 ".random.conditionals.vertex.62"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009194, VkglTestCase_009194_1, VkglTestCase_009194_2);

#define VkglTestCase_009195_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009195_2 ".random.conditionals.vertex.63"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009195, VkglTestCase_009195_1, VkglTestCase_009195_2);

#define VkglTestCase_009196_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009196_2 ".random.conditionals.vertex.64"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009196, VkglTestCase_009196_1, VkglTestCase_009196_2);

#define VkglTestCase_009197_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009197_2 ".random.conditionals.vertex.65"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009197, VkglTestCase_009197_1, VkglTestCase_009197_2);

#define VkglTestCase_009198_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009198_2 ".random.conditionals.vertex.66"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009198, VkglTestCase_009198_1, VkglTestCase_009198_2);

#define VkglTestCase_009199_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009199_2 ".random.conditionals.vertex.67"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009199, VkglTestCase_009199_1, VkglTestCase_009199_2);

#define VkglTestCase_009200_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009200_2 ".random.conditionals.vertex.68"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009200, VkglTestCase_009200_1, VkglTestCase_009200_2);

#define VkglTestCase_009201_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009201_2 ".random.conditionals.vertex.69"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009201, VkglTestCase_009201_1, VkglTestCase_009201_2);

#define VkglTestCase_009202_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009202_2 ".random.conditionals.vertex.70"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009202, VkglTestCase_009202_1, VkglTestCase_009202_2);

#define VkglTestCase_009203_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009203_2 ".random.conditionals.vertex.71"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009203, VkglTestCase_009203_1, VkglTestCase_009203_2);

#define VkglTestCase_009204_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009204_2 ".random.conditionals.vertex.72"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009204, VkglTestCase_009204_1, VkglTestCase_009204_2);

#define VkglTestCase_009205_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009205_2 ".random.conditionals.vertex.73"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009205, VkglTestCase_009205_1, VkglTestCase_009205_2);

#define VkglTestCase_009206_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009206_2 ".random.conditionals.vertex.74"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009206, VkglTestCase_009206_1, VkglTestCase_009206_2);

#define VkglTestCase_009207_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009207_2 ".random.conditionals.vertex.75"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009207, VkglTestCase_009207_1, VkglTestCase_009207_2);

#define VkglTestCase_009208_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009208_2 ".random.conditionals.vertex.76"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009208, VkglTestCase_009208_1, VkglTestCase_009208_2);

#define VkglTestCase_009209_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009209_2 ".random.conditionals.vertex.77"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009209, VkglTestCase_009209_1, VkglTestCase_009209_2);

#define VkglTestCase_009210_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009210_2 ".random.conditionals.vertex.78"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009210, VkglTestCase_009210_1, VkglTestCase_009210_2);

#define VkglTestCase_009211_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009211_2 ".random.conditionals.vertex.79"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009211, VkglTestCase_009211_1, VkglTestCase_009211_2);

#define VkglTestCase_009212_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009212_2 ".random.conditionals.vertex.80"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009212, VkglTestCase_009212_1, VkglTestCase_009212_2);

#define VkglTestCase_009213_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009213_2 ".random.conditionals.vertex.81"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009213, VkglTestCase_009213_1, VkglTestCase_009213_2);

#define VkglTestCase_009214_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009214_2 ".random.conditionals.vertex.82"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009214, VkglTestCase_009214_1, VkglTestCase_009214_2);

#define VkglTestCase_009215_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009215_2 ".random.conditionals.vertex.83"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009215, VkglTestCase_009215_1, VkglTestCase_009215_2);

#define VkglTestCase_009216_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009216_2 ".random.conditionals.vertex.84"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009216, VkglTestCase_009216_1, VkglTestCase_009216_2);

#define VkglTestCase_009217_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009217_2 ".random.conditionals.vertex.85"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009217, VkglTestCase_009217_1, VkglTestCase_009217_2);

#define VkglTestCase_009218_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009218_2 ".random.conditionals.vertex.86"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009218, VkglTestCase_009218_1, VkglTestCase_009218_2);

#define VkglTestCase_009219_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009219_2 ".random.conditionals.vertex.87"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009219, VkglTestCase_009219_1, VkglTestCase_009219_2);

#define VkglTestCase_009220_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009220_2 ".random.conditionals.vertex.88"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009220, VkglTestCase_009220_1, VkglTestCase_009220_2);

#define VkglTestCase_009221_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009221_2 ".random.conditionals.vertex.89"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009221, VkglTestCase_009221_1, VkglTestCase_009221_2);

#define VkglTestCase_009222_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009222_2 ".random.conditionals.vertex.90"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009222, VkglTestCase_009222_1, VkglTestCase_009222_2);

#define VkglTestCase_009223_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009223_2 ".random.conditionals.vertex.91"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009223, VkglTestCase_009223_1, VkglTestCase_009223_2);

#define VkglTestCase_009224_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009224_2 ".random.conditionals.vertex.92"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009224, VkglTestCase_009224_1, VkglTestCase_009224_2);

#define VkglTestCase_009225_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009225_2 ".random.conditionals.vertex.93"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009225, VkglTestCase_009225_1, VkglTestCase_009225_2);

#define VkglTestCase_009226_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009226_2 ".random.conditionals.vertex.94"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009226, VkglTestCase_009226_1, VkglTestCase_009226_2);

#define VkglTestCase_009227_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009227_2 ".random.conditionals.vertex.95"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009227, VkglTestCase_009227_1, VkglTestCase_009227_2);

#define VkglTestCase_009228_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009228_2 ".random.conditionals.vertex.96"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009228, VkglTestCase_009228_1, VkglTestCase_009228_2);

#define VkglTestCase_009229_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009229_2 ".random.conditionals.vertex.97"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009229, VkglTestCase_009229_1, VkglTestCase_009229_2);

#define VkglTestCase_009230_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009230_2 ".random.conditionals.vertex.98"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009230, VkglTestCase_009230_1, VkglTestCase_009230_2);

#define VkglTestCase_009231_1 "dEQP-GLES2.functional.shaders"
#define VkglTestCase_009231_2 ".random.conditionals.vertex.99"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009231, VkglTestCase_009231_1, VkglTestCase_009231_2);
