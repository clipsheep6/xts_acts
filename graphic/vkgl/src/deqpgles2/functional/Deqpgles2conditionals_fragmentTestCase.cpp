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

#define VkglTestCase_009232_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009232_2 "random.conditionals.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009232, VkglTestCase_009232_1, VkglTestCase_009232_2);

#define VkglTestCase_009233_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009233_2 "random.conditionals.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009233, VkglTestCase_009233_1, VkglTestCase_009233_2);

#define VkglTestCase_009234_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009234_2 "random.conditionals.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009234, VkglTestCase_009234_1, VkglTestCase_009234_2);

#define VkglTestCase_009235_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009235_2 "random.conditionals.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009235, VkglTestCase_009235_1, VkglTestCase_009235_2);

#define VkglTestCase_009236_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009236_2 "random.conditionals.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009236, VkglTestCase_009236_1, VkglTestCase_009236_2);

#define VkglTestCase_009237_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009237_2 "random.conditionals.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009237, VkglTestCase_009237_1, VkglTestCase_009237_2);

#define VkglTestCase_009238_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009238_2 "random.conditionals.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009238, VkglTestCase_009238_1, VkglTestCase_009238_2);

#define VkglTestCase_009239_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009239_2 "random.conditionals.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009239, VkglTestCase_009239_1, VkglTestCase_009239_2);

#define VkglTestCase_009240_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009240_2 "random.conditionals.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009240, VkglTestCase_009240_1, VkglTestCase_009240_2);

#define VkglTestCase_009241_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009241_2 "random.conditionals.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009241, VkglTestCase_009241_1, VkglTestCase_009241_2);

#define VkglTestCase_009242_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009242_2 "random.conditionals.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009242, VkglTestCase_009242_1, VkglTestCase_009242_2);

#define VkglTestCase_009243_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009243_2 "random.conditionals.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009243, VkglTestCase_009243_1, VkglTestCase_009243_2);

#define VkglTestCase_009244_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009244_2 "random.conditionals.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009244, VkglTestCase_009244_1, VkglTestCase_009244_2);

#define VkglTestCase_009245_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009245_2 "random.conditionals.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009245, VkglTestCase_009245_1, VkglTestCase_009245_2);

#define VkglTestCase_009246_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009246_2 "random.conditionals.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009246, VkglTestCase_009246_1, VkglTestCase_009246_2);

#define VkglTestCase_009247_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009247_2 "random.conditionals.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009247, VkglTestCase_009247_1, VkglTestCase_009247_2);

#define VkglTestCase_009248_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009248_2 "random.conditionals.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009248, VkglTestCase_009248_1, VkglTestCase_009248_2);

#define VkglTestCase_009249_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009249_2 "random.conditionals.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009249, VkglTestCase_009249_1, VkglTestCase_009249_2);

#define VkglTestCase_009250_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009250_2 "random.conditionals.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009250, VkglTestCase_009250_1, VkglTestCase_009250_2);

#define VkglTestCase_009251_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009251_2 "random.conditionals.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009251, VkglTestCase_009251_1, VkglTestCase_009251_2);

#define VkglTestCase_009252_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009252_2 "random.conditionals.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009252, VkglTestCase_009252_1, VkglTestCase_009252_2);

#define VkglTestCase_009253_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009253_2 "random.conditionals.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009253, VkglTestCase_009253_1, VkglTestCase_009253_2);

#define VkglTestCase_009254_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009254_2 "random.conditionals.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009254, VkglTestCase_009254_1, VkglTestCase_009254_2);

#define VkglTestCase_009255_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009255_2 "random.conditionals.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009255, VkglTestCase_009255_1, VkglTestCase_009255_2);

#define VkglTestCase_009256_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009256_2 "random.conditionals.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009256, VkglTestCase_009256_1, VkglTestCase_009256_2);

#define VkglTestCase_009257_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009257_2 "random.conditionals.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009257, VkglTestCase_009257_1, VkglTestCase_009257_2);

#define VkglTestCase_009258_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009258_2 "random.conditionals.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009258, VkglTestCase_009258_1, VkglTestCase_009258_2);

#define VkglTestCase_009259_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009259_2 "random.conditionals.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009259, VkglTestCase_009259_1, VkglTestCase_009259_2);

#define VkglTestCase_009260_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009260_2 "random.conditionals.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009260, VkglTestCase_009260_1, VkglTestCase_009260_2);

#define VkglTestCase_009261_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009261_2 "random.conditionals.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009261, VkglTestCase_009261_1, VkglTestCase_009261_2);

#define VkglTestCase_009262_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009262_2 "random.conditionals.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009262, VkglTestCase_009262_1, VkglTestCase_009262_2);

#define VkglTestCase_009263_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009263_2 "random.conditionals.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009263, VkglTestCase_009263_1, VkglTestCase_009263_2);

#define VkglTestCase_009264_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009264_2 "random.conditionals.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009264, VkglTestCase_009264_1, VkglTestCase_009264_2);

#define VkglTestCase_009265_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009265_2 "random.conditionals.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009265, VkglTestCase_009265_1, VkglTestCase_009265_2);

#define VkglTestCase_009266_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009266_2 "random.conditionals.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009266, VkglTestCase_009266_1, VkglTestCase_009266_2);

#define VkglTestCase_009267_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009267_2 "random.conditionals.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009267, VkglTestCase_009267_1, VkglTestCase_009267_2);

#define VkglTestCase_009268_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009268_2 "random.conditionals.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009268, VkglTestCase_009268_1, VkglTestCase_009268_2);

#define VkglTestCase_009269_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009269_2 "random.conditionals.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009269, VkglTestCase_009269_1, VkglTestCase_009269_2);

#define VkglTestCase_009270_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009270_2 "random.conditionals.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009270, VkglTestCase_009270_1, VkglTestCase_009270_2);

#define VkglTestCase_009271_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009271_2 "random.conditionals.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009271, VkglTestCase_009271_1, VkglTestCase_009271_2);

#define VkglTestCase_009272_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009272_2 "random.conditionals.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009272, VkglTestCase_009272_1, VkglTestCase_009272_2);

#define VkglTestCase_009273_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009273_2 "random.conditionals.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009273, VkglTestCase_009273_1, VkglTestCase_009273_2);

#define VkglTestCase_009274_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009274_2 "random.conditionals.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009274, VkglTestCase_009274_1, VkglTestCase_009274_2);

#define VkglTestCase_009275_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009275_2 "random.conditionals.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009275, VkglTestCase_009275_1, VkglTestCase_009275_2);

#define VkglTestCase_009276_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009276_2 "random.conditionals.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009276, VkglTestCase_009276_1, VkglTestCase_009276_2);

#define VkglTestCase_009277_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009277_2 "random.conditionals.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009277, VkglTestCase_009277_1, VkglTestCase_009277_2);

#define VkglTestCase_009278_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009278_2 "random.conditionals.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009278, VkglTestCase_009278_1, VkglTestCase_009278_2);

#define VkglTestCase_009279_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009279_2 "random.conditionals.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009279, VkglTestCase_009279_1, VkglTestCase_009279_2);

#define VkglTestCase_009280_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009280_2 "random.conditionals.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009280, VkglTestCase_009280_1, VkglTestCase_009280_2);

#define VkglTestCase_009281_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009281_2 "random.conditionals.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009281, VkglTestCase_009281_1, VkglTestCase_009281_2);

#define VkglTestCase_009282_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009282_2 "random.conditionals.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009282, VkglTestCase_009282_1, VkglTestCase_009282_2);

#define VkglTestCase_009283_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009283_2 "random.conditionals.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009283, VkglTestCase_009283_1, VkglTestCase_009283_2);

#define VkglTestCase_009284_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009284_2 "random.conditionals.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009284, VkglTestCase_009284_1, VkglTestCase_009284_2);

#define VkglTestCase_009285_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009285_2 "random.conditionals.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009285, VkglTestCase_009285_1, VkglTestCase_009285_2);

#define VkglTestCase_009286_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009286_2 "random.conditionals.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009286, VkglTestCase_009286_1, VkglTestCase_009286_2);

#define VkglTestCase_009287_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009287_2 "random.conditionals.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009287, VkglTestCase_009287_1, VkglTestCase_009287_2);

#define VkglTestCase_009288_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009288_2 "random.conditionals.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009288, VkglTestCase_009288_1, VkglTestCase_009288_2);

#define VkglTestCase_009289_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009289_2 "random.conditionals.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009289, VkglTestCase_009289_1, VkglTestCase_009289_2);

#define VkglTestCase_009290_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009290_2 "random.conditionals.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009290, VkglTestCase_009290_1, VkglTestCase_009290_2);

#define VkglTestCase_009291_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009291_2 "random.conditionals.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009291, VkglTestCase_009291_1, VkglTestCase_009291_2);

#define VkglTestCase_009292_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009292_2 "random.conditionals.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009292, VkglTestCase_009292_1, VkglTestCase_009292_2);

#define VkglTestCase_009293_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009293_2 "random.conditionals.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009293, VkglTestCase_009293_1, VkglTestCase_009293_2);

#define VkglTestCase_009294_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009294_2 "random.conditionals.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009294, VkglTestCase_009294_1, VkglTestCase_009294_2);

#define VkglTestCase_009295_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009295_2 "random.conditionals.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009295, VkglTestCase_009295_1, VkglTestCase_009295_2);

#define VkglTestCase_009296_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009296_2 "random.conditionals.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009296, VkglTestCase_009296_1, VkglTestCase_009296_2);

#define VkglTestCase_009297_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009297_2 "random.conditionals.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009297, VkglTestCase_009297_1, VkglTestCase_009297_2);

#define VkglTestCase_009298_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009298_2 "random.conditionals.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009298, VkglTestCase_009298_1, VkglTestCase_009298_2);

#define VkglTestCase_009299_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009299_2 "random.conditionals.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009299, VkglTestCase_009299_1, VkglTestCase_009299_2);

#define VkglTestCase_009300_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009300_2 "random.conditionals.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009300, VkglTestCase_009300_1, VkglTestCase_009300_2);

#define VkglTestCase_009301_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009301_2 "random.conditionals.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009301, VkglTestCase_009301_1, VkglTestCase_009301_2);

#define VkglTestCase_009302_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009302_2 "random.conditionals.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009302, VkglTestCase_009302_1, VkglTestCase_009302_2);

#define VkglTestCase_009303_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009303_2 "random.conditionals.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009303, VkglTestCase_009303_1, VkglTestCase_009303_2);

#define VkglTestCase_009304_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009304_2 "random.conditionals.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009304, VkglTestCase_009304_1, VkglTestCase_009304_2);

#define VkglTestCase_009305_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009305_2 "random.conditionals.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009305, VkglTestCase_009305_1, VkglTestCase_009305_2);

#define VkglTestCase_009306_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009306_2 "random.conditionals.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009306, VkglTestCase_009306_1, VkglTestCase_009306_2);

#define VkglTestCase_009307_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009307_2 "random.conditionals.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009307, VkglTestCase_009307_1, VkglTestCase_009307_2);

#define VkglTestCase_009308_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009308_2 "random.conditionals.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009308, VkglTestCase_009308_1, VkglTestCase_009308_2);

#define VkglTestCase_009309_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009309_2 "random.conditionals.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009309, VkglTestCase_009309_1, VkglTestCase_009309_2);

#define VkglTestCase_009310_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009310_2 "random.conditionals.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009310, VkglTestCase_009310_1, VkglTestCase_009310_2);

#define VkglTestCase_009311_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009311_2 "random.conditionals.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009311, VkglTestCase_009311_1, VkglTestCase_009311_2);

#define VkglTestCase_009312_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009312_2 "random.conditionals.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009312, VkglTestCase_009312_1, VkglTestCase_009312_2);

#define VkglTestCase_009313_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009313_2 "random.conditionals.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009313, VkglTestCase_009313_1, VkglTestCase_009313_2);

#define VkglTestCase_009314_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009314_2 "random.conditionals.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009314, VkglTestCase_009314_1, VkglTestCase_009314_2);

#define VkglTestCase_009315_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009315_2 "random.conditionals.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009315, VkglTestCase_009315_1, VkglTestCase_009315_2);

#define VkglTestCase_009316_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009316_2 "random.conditionals.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009316, VkglTestCase_009316_1, VkglTestCase_009316_2);

#define VkglTestCase_009317_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009317_2 "random.conditionals.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009317, VkglTestCase_009317_1, VkglTestCase_009317_2);

#define VkglTestCase_009318_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009318_2 "random.conditionals.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009318, VkglTestCase_009318_1, VkglTestCase_009318_2);

#define VkglTestCase_009319_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009319_2 "random.conditionals.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009319, VkglTestCase_009319_1, VkglTestCase_009319_2);

#define VkglTestCase_009320_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009320_2 "random.conditionals.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009320, VkglTestCase_009320_1, VkglTestCase_009320_2);

#define VkglTestCase_009321_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009321_2 "random.conditionals.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009321, VkglTestCase_009321_1, VkglTestCase_009321_2);

#define VkglTestCase_009322_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009322_2 "random.conditionals.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009322, VkglTestCase_009322_1, VkglTestCase_009322_2);

#define VkglTestCase_009323_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009323_2 "random.conditionals.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009323, VkglTestCase_009323_1, VkglTestCase_009323_2);

#define VkglTestCase_009324_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009324_2 "random.conditionals.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009324, VkglTestCase_009324_1, VkglTestCase_009324_2);

#define VkglTestCase_009325_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009325_2 "random.conditionals.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009325, VkglTestCase_009325_1, VkglTestCase_009325_2);

#define VkglTestCase_009326_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009326_2 "random.conditionals.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009326, VkglTestCase_009326_1, VkglTestCase_009326_2);

#define VkglTestCase_009327_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009327_2 "random.conditionals.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009327, VkglTestCase_009327_1, VkglTestCase_009327_2);

#define VkglTestCase_009328_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009328_2 "random.conditionals.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009328, VkglTestCase_009328_1, VkglTestCase_009328_2);

#define VkglTestCase_009329_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009329_2 "random.conditionals.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009329, VkglTestCase_009329_1, VkglTestCase_009329_2);

#define VkglTestCase_009330_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009330_2 "random.conditionals.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009330, VkglTestCase_009330_1, VkglTestCase_009330_2);

#define VkglTestCase_009331_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_009331_2 "random.conditionals.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009331, VkglTestCase_009331_1, VkglTestCase_009331_2);
