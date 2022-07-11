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
#include "../ActsDeqpgles20012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011152_1 "dEQP-GLES2.functional.fragment_ops.blend"
#define VkglTestCase_011152_2 ".equation_src_func_dst_func.add_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011152, VkglTestCase_011152_1, VkglTestCase_011152_2);

#define VkglTestCase_011153_1 "dEQP-GLES2.functional.fragment_ops.blend"
#define VkglTestCase_011153_2 ".equation_src_func_dst_func.add_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011153, VkglTestCase_011153_1, VkglTestCase_011153_2);

#define VkglTestCase_011154_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011154_2 "uation_src_func_dst_func.add_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011154, VkglTestCase_011154_1, VkglTestCase_011154_2);

#define VkglTestCase_011155_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011155_2 "n_src_func_dst_func.add_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011155, VkglTestCase_011155_1, VkglTestCase_011155_2);

#define VkglTestCase_011156_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011156_2 "uation_src_func_dst_func.add_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011156, VkglTestCase_011156_1, VkglTestCase_011156_2);

#define VkglTestCase_011157_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011157_2 "n_src_func_dst_func.add_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011157, VkglTestCase_011157_1, VkglTestCase_011157_2);

#define VkglTestCase_011158_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011158_2 "uation_src_func_dst_func.add_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011158, VkglTestCase_011158_1, VkglTestCase_011158_2);

#define VkglTestCase_011159_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011159_2 "n_src_func_dst_func.add_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011159, VkglTestCase_011159_1, VkglTestCase_011159_2);

#define VkglTestCase_011160_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011160_2 "uation_src_func_dst_func.add_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011160, VkglTestCase_011160_1, VkglTestCase_011160_2);

#define VkglTestCase_011161_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011161_2 "n_src_func_dst_func.add_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011161, VkglTestCase_011161_1, VkglTestCase_011161_2);

#define VkglTestCase_011162_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011162_2 "tion_src_func_dst_func.add_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011162, VkglTestCase_011162_1, VkglTestCase_011162_2);

#define VkglTestCase_011163_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011163_2 "src_func_dst_func.add_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011163, VkglTestCase_011163_1, VkglTestCase_011163_2);

#define VkglTestCase_011164_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011164_2 "tion_src_func_dst_func.add_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011164, VkglTestCase_011164_1, VkglTestCase_011164_2);

#define VkglTestCase_011165_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011165_2 "src_func_dst_func.add_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011165, VkglTestCase_011165_1, VkglTestCase_011165_2);

#define VkglTestCase_011166_1 "dEQP-GLES2.functional.fragment_ops.blend"
#define VkglTestCase_011166_2 ".equation_src_func_dst_func.add_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011166, VkglTestCase_011166_1, VkglTestCase_011166_2);

#define VkglTestCase_011167_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011167_2 "d.equation_src_func_dst_func.add_one_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011167, VkglTestCase_011167_1, VkglTestCase_011167_2);

#define VkglTestCase_011168_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011168_2 "quation_src_func_dst_func.add_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011168, VkglTestCase_011168_1, VkglTestCase_011168_2);

#define VkglTestCase_011169_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011169_2 "on_src_func_dst_func.add_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011169, VkglTestCase_011169_1, VkglTestCase_011169_2);

#define VkglTestCase_011170_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011170_2 "quation_src_func_dst_func.add_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011170, VkglTestCase_011170_1, VkglTestCase_011170_2);

#define VkglTestCase_011171_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011171_2 "on_src_func_dst_func.add_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011171, VkglTestCase_011171_1, VkglTestCase_011171_2);

#define VkglTestCase_011172_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011172_2 "quation_src_func_dst_func.add_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011172, VkglTestCase_011172_1, VkglTestCase_011172_2);

#define VkglTestCase_011173_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011173_2 "on_src_func_dst_func.add_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011173, VkglTestCase_011173_1, VkglTestCase_011173_2);

#define VkglTestCase_011174_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011174_2 "quation_src_func_dst_func.add_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011174, VkglTestCase_011174_1, VkglTestCase_011174_2);

#define VkglTestCase_011175_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011175_2 "on_src_func_dst_func.add_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011175, VkglTestCase_011175_1, VkglTestCase_011175_2);

#define VkglTestCase_011176_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011176_2 "tion_src_func_dst_func.add_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011176, VkglTestCase_011176_1, VkglTestCase_011176_2);

#define VkglTestCase_011177_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011177_2 "src_func_dst_func.add_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011177, VkglTestCase_011177_1, VkglTestCase_011177_2);

#define VkglTestCase_011178_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011178_2 "tion_src_func_dst_func.add_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011178, VkglTestCase_011178_1, VkglTestCase_011178_2);

#define VkglTestCase_011179_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011179_2 "src_func_dst_func.add_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011179, VkglTestCase_011179_1, VkglTestCase_011179_2);

#define VkglTestCase_011180_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011180_2 "uation_src_func_dst_func.add_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011180, VkglTestCase_011180_1, VkglTestCase_011180_2);

#define VkglTestCase_011181_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011181_2 "quation_src_func_dst_func.add_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011181, VkglTestCase_011181_1, VkglTestCase_011181_2);

#define VkglTestCase_011182_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011182_2 "tion_src_func_dst_func.add_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011182, VkglTestCase_011182_1, VkglTestCase_011182_2);

#define VkglTestCase_011183_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011183_2 "src_func_dst_func.add_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011183, VkglTestCase_011183_1, VkglTestCase_011183_2);

#define VkglTestCase_011184_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011184_2 "tion_src_func_dst_func.add_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011184, VkglTestCase_011184_1, VkglTestCase_011184_2);

#define VkglTestCase_011185_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011185_2 "src_func_dst_func.add_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011185, VkglTestCase_011185_1, VkglTestCase_011185_2);

#define VkglTestCase_011186_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011186_2 "tion_src_func_dst_func.add_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011186, VkglTestCase_011186_1, VkglTestCase_011186_2);

#define VkglTestCase_011187_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011187_2 "src_func_dst_func.add_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011187, VkglTestCase_011187_1, VkglTestCase_011187_2);

#define VkglTestCase_011188_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011188_2 "tion_src_func_dst_func.add_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011188, VkglTestCase_011188_1, VkglTestCase_011188_2);

#define VkglTestCase_011189_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011189_2 "src_func_dst_func.add_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011189, VkglTestCase_011189_1, VkglTestCase_011189_2);

#define VkglTestCase_011190_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011190_2 "n_src_func_dst_func.add_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011190, VkglTestCase_011190_1, VkglTestCase_011190_2);

#define VkglTestCase_011191_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011191_2 "_func_dst_func.add_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011191, VkglTestCase_011191_1, VkglTestCase_011191_2);

#define VkglTestCase_011192_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011192_2 "n_src_func_dst_func.add_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011192, VkglTestCase_011192_1, VkglTestCase_011192_2);

#define VkglTestCase_011193_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011193_2 "_func_dst_func.add_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011193, VkglTestCase_011193_1, VkglTestCase_011193_2);

#define VkglTestCase_011194_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011194_2 "n_src_func_dst_func.add_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011194, VkglTestCase_011194_1, VkglTestCase_011194_2);

#define VkglTestCase_011195_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011195_2 "on_src_func_dst_func.add_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011195, VkglTestCase_011195_1, VkglTestCase_011195_2);

#define VkglTestCase_011196_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011196_2 "src_func_dst_func.add_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011196, VkglTestCase_011196_1, VkglTestCase_011196_2);

#define VkglTestCase_011197_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011197_2 "unc_dst_func.add_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011197, VkglTestCase_011197_1, VkglTestCase_011197_2);

#define VkglTestCase_011198_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011198_2 "src_func_dst_func.add_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011198, VkglTestCase_011198_1, VkglTestCase_011198_2);

#define VkglTestCase_011199_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011199_2 "unc_dst_func.add_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011199, VkglTestCase_011199_1, VkglTestCase_011199_2);

#define VkglTestCase_011200_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011200_2 "src_func_dst_func.add_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011200, VkglTestCase_011200_1, VkglTestCase_011200_2);

#define VkglTestCase_011201_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011201_2 "unc_dst_func.add_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011201, VkglTestCase_011201_1, VkglTestCase_011201_2);

#define VkglTestCase_011202_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011202_2 "src_func_dst_func.add_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011202, VkglTestCase_011202_1, VkglTestCase_011202_2);

#define VkglTestCase_011203_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011203_2 "unc_dst_func.add_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011203, VkglTestCase_011203_1, VkglTestCase_011203_2);

#define VkglTestCase_011204_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011204_2 "_func_dst_func.add_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011204, VkglTestCase_011204_1, VkglTestCase_011204_2);

#define VkglTestCase_011205_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011205_2 "_dst_func.add_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011205, VkglTestCase_011205_1, VkglTestCase_011205_2);

#define VkglTestCase_011206_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011206_2 "_func_dst_func.add_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011206, VkglTestCase_011206_1, VkglTestCase_011206_2);

#define VkglTestCase_011207_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011207_2 "_dst_func.add_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011207, VkglTestCase_011207_1, VkglTestCase_011207_2);

#define VkglTestCase_011208_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011208_2 "uation_src_func_dst_func.add_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011208, VkglTestCase_011208_1, VkglTestCase_011208_2);

#define VkglTestCase_011209_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011209_2 "quation_src_func_dst_func.add_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011209, VkglTestCase_011209_1, VkglTestCase_011209_2);

#define VkglTestCase_011210_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011210_2 "tion_src_func_dst_func.add_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011210, VkglTestCase_011210_1, VkglTestCase_011210_2);

#define VkglTestCase_011211_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011211_2 "src_func_dst_func.add_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011211, VkglTestCase_011211_1, VkglTestCase_011211_2);

#define VkglTestCase_011212_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011212_2 "tion_src_func_dst_func.add_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011212, VkglTestCase_011212_1, VkglTestCase_011212_2);

#define VkglTestCase_011213_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011213_2 "src_func_dst_func.add_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011213, VkglTestCase_011213_1, VkglTestCase_011213_2);

#define VkglTestCase_011214_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011214_2 "tion_src_func_dst_func.add_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011214, VkglTestCase_011214_1, VkglTestCase_011214_2);

#define VkglTestCase_011215_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011215_2 "src_func_dst_func.add_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011215, VkglTestCase_011215_1, VkglTestCase_011215_2);

#define VkglTestCase_011216_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011216_2 "tion_src_func_dst_func.add_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011216, VkglTestCase_011216_1, VkglTestCase_011216_2);

#define VkglTestCase_011217_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011217_2 "src_func_dst_func.add_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011217, VkglTestCase_011217_1, VkglTestCase_011217_2);

#define VkglTestCase_011218_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011218_2 "n_src_func_dst_func.add_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011218, VkglTestCase_011218_1, VkglTestCase_011218_2);

#define VkglTestCase_011219_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011219_2 "_func_dst_func.add_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011219, VkglTestCase_011219_1, VkglTestCase_011219_2);

#define VkglTestCase_011220_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011220_2 "n_src_func_dst_func.add_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011220, VkglTestCase_011220_1, VkglTestCase_011220_2);

#define VkglTestCase_011221_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011221_2 "_func_dst_func.add_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011221, VkglTestCase_011221_1, VkglTestCase_011221_2);

#define VkglTestCase_011222_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011222_2 "n_src_func_dst_func.add_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011222, VkglTestCase_011222_1, VkglTestCase_011222_2);

#define VkglTestCase_011223_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011223_2 "on_src_func_dst_func.add_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011223, VkglTestCase_011223_1, VkglTestCase_011223_2);

#define VkglTestCase_011224_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011224_2 "src_func_dst_func.add_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011224, VkglTestCase_011224_1, VkglTestCase_011224_2);

#define VkglTestCase_011225_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011225_2 "unc_dst_func.add_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011225, VkglTestCase_011225_1, VkglTestCase_011225_2);

#define VkglTestCase_011226_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011226_2 "src_func_dst_func.add_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011226, VkglTestCase_011226_1, VkglTestCase_011226_2);

#define VkglTestCase_011227_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011227_2 "unc_dst_func.add_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011227, VkglTestCase_011227_1, VkglTestCase_011227_2);

#define VkglTestCase_011228_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011228_2 "src_func_dst_func.add_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011228, VkglTestCase_011228_1, VkglTestCase_011228_2);

#define VkglTestCase_011229_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011229_2 "unc_dst_func.add_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011229, VkglTestCase_011229_1, VkglTestCase_011229_2);

#define VkglTestCase_011230_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011230_2 "src_func_dst_func.add_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011230, VkglTestCase_011230_1, VkglTestCase_011230_2);

#define VkglTestCase_011231_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011231_2 "unc_dst_func.add_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011231, VkglTestCase_011231_1, VkglTestCase_011231_2);

#define VkglTestCase_011232_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011232_2 "_func_dst_func.add_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011232, VkglTestCase_011232_1, VkglTestCase_011232_2);

#define VkglTestCase_011233_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011233_2 "_dst_func.add_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011233, VkglTestCase_011233_1, VkglTestCase_011233_2);

#define VkglTestCase_011234_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011234_2 "_func_dst_func.add_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011234, VkglTestCase_011234_1, VkglTestCase_011234_2);

#define VkglTestCase_011235_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011235_2 "_dst_func.add_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011235, VkglTestCase_011235_1, VkglTestCase_011235_2);

#define VkglTestCase_011236_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011236_2 "uation_src_func_dst_func.add_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011236, VkglTestCase_011236_1, VkglTestCase_011236_2);

#define VkglTestCase_011237_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011237_2 "quation_src_func_dst_func.add_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011237, VkglTestCase_011237_1, VkglTestCase_011237_2);

#define VkglTestCase_011238_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011238_2 "tion_src_func_dst_func.add_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011238, VkglTestCase_011238_1, VkglTestCase_011238_2);

#define VkglTestCase_011239_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011239_2 "src_func_dst_func.add_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011239, VkglTestCase_011239_1, VkglTestCase_011239_2);

#define VkglTestCase_011240_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011240_2 "tion_src_func_dst_func.add_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011240, VkglTestCase_011240_1, VkglTestCase_011240_2);

#define VkglTestCase_011241_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011241_2 "src_func_dst_func.add_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011241, VkglTestCase_011241_1, VkglTestCase_011241_2);

#define VkglTestCase_011242_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011242_2 "tion_src_func_dst_func.add_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011242, VkglTestCase_011242_1, VkglTestCase_011242_2);

#define VkglTestCase_011243_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011243_2 "src_func_dst_func.add_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011243, VkglTestCase_011243_1, VkglTestCase_011243_2);

#define VkglTestCase_011244_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011244_2 "tion_src_func_dst_func.add_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011244, VkglTestCase_011244_1, VkglTestCase_011244_2);

#define VkglTestCase_011245_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011245_2 "src_func_dst_func.add_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011245, VkglTestCase_011245_1, VkglTestCase_011245_2);

#define VkglTestCase_011246_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011246_2 "n_src_func_dst_func.add_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011246, VkglTestCase_011246_1, VkglTestCase_011246_2);

#define VkglTestCase_011247_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011247_2 "_func_dst_func.add_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011247, VkglTestCase_011247_1, VkglTestCase_011247_2);

#define VkglTestCase_011248_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011248_2 "n_src_func_dst_func.add_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011248, VkglTestCase_011248_1, VkglTestCase_011248_2);

#define VkglTestCase_011249_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011249_2 "_func_dst_func.add_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011249, VkglTestCase_011249_1, VkglTestCase_011249_2);

#define VkglTestCase_011250_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011250_2 "n_src_func_dst_func.add_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011250, VkglTestCase_011250_1, VkglTestCase_011250_2);

#define VkglTestCase_011251_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011251_2 "on_src_func_dst_func.add_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011251, VkglTestCase_011251_1, VkglTestCase_011251_2);

#define VkglTestCase_011252_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011252_2 "src_func_dst_func.add_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011252, VkglTestCase_011252_1, VkglTestCase_011252_2);

#define VkglTestCase_011253_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011253_2 "unc_dst_func.add_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011253, VkglTestCase_011253_1, VkglTestCase_011253_2);

#define VkglTestCase_011254_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011254_2 "src_func_dst_func.add_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011254, VkglTestCase_011254_1, VkglTestCase_011254_2);

#define VkglTestCase_011255_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011255_2 "unc_dst_func.add_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011255, VkglTestCase_011255_1, VkglTestCase_011255_2);

#define VkglTestCase_011256_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011256_2 "src_func_dst_func.add_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011256, VkglTestCase_011256_1, VkglTestCase_011256_2);

#define VkglTestCase_011257_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011257_2 "unc_dst_func.add_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011257, VkglTestCase_011257_1, VkglTestCase_011257_2);

#define VkglTestCase_011258_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011258_2 "src_func_dst_func.add_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011258, VkglTestCase_011258_1, VkglTestCase_011258_2);

#define VkglTestCase_011259_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011259_2 "unc_dst_func.add_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011259, VkglTestCase_011259_1, VkglTestCase_011259_2);

#define VkglTestCase_011260_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011260_2 "_func_dst_func.add_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011260, VkglTestCase_011260_1, VkglTestCase_011260_2);

#define VkglTestCase_011261_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011261_2 "_dst_func.add_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011261, VkglTestCase_011261_1, VkglTestCase_011261_2);

#define VkglTestCase_011262_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011262_2 "_func_dst_func.add_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011262, VkglTestCase_011262_1, VkglTestCase_011262_2);

#define VkglTestCase_011263_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011263_2 "_dst_func.add_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011263, VkglTestCase_011263_1, VkglTestCase_011263_2);

#define VkglTestCase_011264_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011264_2 "uation_src_func_dst_func.add_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011264, VkglTestCase_011264_1, VkglTestCase_011264_2);

#define VkglTestCase_011265_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011265_2 "quation_src_func_dst_func.add_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011265, VkglTestCase_011265_1, VkglTestCase_011265_2);

#define VkglTestCase_011266_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011266_2 "tion_src_func_dst_func.add_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011266, VkglTestCase_011266_1, VkglTestCase_011266_2);

#define VkglTestCase_011267_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011267_2 "src_func_dst_func.add_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011267, VkglTestCase_011267_1, VkglTestCase_011267_2);

#define VkglTestCase_011268_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011268_2 "tion_src_func_dst_func.add_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011268, VkglTestCase_011268_1, VkglTestCase_011268_2);

#define VkglTestCase_011269_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011269_2 "src_func_dst_func.add_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011269, VkglTestCase_011269_1, VkglTestCase_011269_2);

#define VkglTestCase_011270_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011270_2 "tion_src_func_dst_func.add_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011270, VkglTestCase_011270_1, VkglTestCase_011270_2);

#define VkglTestCase_011271_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011271_2 "src_func_dst_func.add_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011271, VkglTestCase_011271_1, VkglTestCase_011271_2);

#define VkglTestCase_011272_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011272_2 "tion_src_func_dst_func.add_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011272, VkglTestCase_011272_1, VkglTestCase_011272_2);

#define VkglTestCase_011273_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011273_2 "src_func_dst_func.add_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011273, VkglTestCase_011273_1, VkglTestCase_011273_2);

#define VkglTestCase_011274_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011274_2 "n_src_func_dst_func.add_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011274, VkglTestCase_011274_1, VkglTestCase_011274_2);

#define VkglTestCase_011275_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011275_2 "_func_dst_func.add_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011275, VkglTestCase_011275_1, VkglTestCase_011275_2);

#define VkglTestCase_011276_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011276_2 "n_src_func_dst_func.add_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011276, VkglTestCase_011276_1, VkglTestCase_011276_2);

#define VkglTestCase_011277_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011277_2 "_func_dst_func.add_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011277, VkglTestCase_011277_1, VkglTestCase_011277_2);

#define VkglTestCase_011278_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011278_2 "n_src_func_dst_func.add_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011278, VkglTestCase_011278_1, VkglTestCase_011278_2);

#define VkglTestCase_011279_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011279_2 "on_src_func_dst_func.add_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011279, VkglTestCase_011279_1, VkglTestCase_011279_2);

#define VkglTestCase_011280_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011280_2 "src_func_dst_func.add_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011280, VkglTestCase_011280_1, VkglTestCase_011280_2);

#define VkglTestCase_011281_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011281_2 "unc_dst_func.add_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011281, VkglTestCase_011281_1, VkglTestCase_011281_2);

#define VkglTestCase_011282_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011282_2 "src_func_dst_func.add_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011282, VkglTestCase_011282_1, VkglTestCase_011282_2);

#define VkglTestCase_011283_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011283_2 "unc_dst_func.add_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011283, VkglTestCase_011283_1, VkglTestCase_011283_2);

#define VkglTestCase_011284_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011284_2 "src_func_dst_func.add_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011284, VkglTestCase_011284_1, VkglTestCase_011284_2);

#define VkglTestCase_011285_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011285_2 "unc_dst_func.add_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011285, VkglTestCase_011285_1, VkglTestCase_011285_2);

#define VkglTestCase_011286_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011286_2 "src_func_dst_func.add_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011286, VkglTestCase_011286_1, VkglTestCase_011286_2);

#define VkglTestCase_011287_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011287_2 "unc_dst_func.add_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011287, VkglTestCase_011287_1, VkglTestCase_011287_2);

#define VkglTestCase_011288_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011288_2 "_func_dst_func.add_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011288, VkglTestCase_011288_1, VkglTestCase_011288_2);

#define VkglTestCase_011289_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011289_2 "_dst_func.add_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011289, VkglTestCase_011289_1, VkglTestCase_011289_2);

#define VkglTestCase_011290_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011290_2 "_func_dst_func.add_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011290, VkglTestCase_011290_1, VkglTestCase_011290_2);

#define VkglTestCase_011291_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011291_2 "_dst_func.add_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011291, VkglTestCase_011291_1, VkglTestCase_011291_2);

#define VkglTestCase_011292_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011292_2 "tion_src_func_dst_func.add_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011292, VkglTestCase_011292_1, VkglTestCase_011292_2);

#define VkglTestCase_011293_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011293_2 "tion_src_func_dst_func.add_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011293, VkglTestCase_011293_1, VkglTestCase_011293_2);

#define VkglTestCase_011294_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011294_2 "n_src_func_dst_func.add_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011294, VkglTestCase_011294_1, VkglTestCase_011294_2);

#define VkglTestCase_011295_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011295_2 "_func_dst_func.add_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011295, VkglTestCase_011295_1, VkglTestCase_011295_2);

#define VkglTestCase_011296_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011296_2 "n_src_func_dst_func.add_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011296, VkglTestCase_011296_1, VkglTestCase_011296_2);

#define VkglTestCase_011297_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011297_2 "_func_dst_func.add_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011297, VkglTestCase_011297_1, VkglTestCase_011297_2);

#define VkglTestCase_011298_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011298_2 "n_src_func_dst_func.add_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011298, VkglTestCase_011298_1, VkglTestCase_011298_2);

#define VkglTestCase_011299_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011299_2 "_func_dst_func.add_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011299, VkglTestCase_011299_1, VkglTestCase_011299_2);

#define VkglTestCase_011300_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011300_2 "n_src_func_dst_func.add_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011300, VkglTestCase_011300_1, VkglTestCase_011300_2);

#define VkglTestCase_011301_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011301_2 "_func_dst_func.add_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011301, VkglTestCase_011301_1, VkglTestCase_011301_2);

#define VkglTestCase_011302_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011302_2 "src_func_dst_func.add_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011302, VkglTestCase_011302_1, VkglTestCase_011302_2);

#define VkglTestCase_011303_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011303_2 "unc_dst_func.add_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011303, VkglTestCase_011303_1, VkglTestCase_011303_2);

#define VkglTestCase_011304_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011304_2 "src_func_dst_func.add_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011304, VkglTestCase_011304_1, VkglTestCase_011304_2);

#define VkglTestCase_011305_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011305_2 "unc_dst_func.add_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011305, VkglTestCase_011305_1, VkglTestCase_011305_2);

#define VkglTestCase_011306_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011306_2 "src_func_dst_func.add_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011306, VkglTestCase_011306_1, VkglTestCase_011306_2);

#define VkglTestCase_011307_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011307_2 "src_func_dst_func.add_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011307, VkglTestCase_011307_1, VkglTestCase_011307_2);

#define VkglTestCase_011308_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011308_2 "_func_dst_func.add_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011308, VkglTestCase_011308_1, VkglTestCase_011308_2);

#define VkglTestCase_011309_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011309_2 "_dst_func.add_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011309, VkglTestCase_011309_1, VkglTestCase_011309_2);

#define VkglTestCase_011310_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011310_2 "_func_dst_func.add_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011310, VkglTestCase_011310_1, VkglTestCase_011310_2);

#define VkglTestCase_011311_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011311_2 "_dst_func.add_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011311, VkglTestCase_011311_1, VkglTestCase_011311_2);

#define VkglTestCase_011312_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011312_2 "_func_dst_func.add_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011312, VkglTestCase_011312_1, VkglTestCase_011312_2);

#define VkglTestCase_011313_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011313_2 "_dst_func.add_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011313, VkglTestCase_011313_1, VkglTestCase_011313_2);

#define VkglTestCase_011314_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011314_2 "_func_dst_func.add_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011314, VkglTestCase_011314_1, VkglTestCase_011314_2);

#define VkglTestCase_011315_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011315_2 "_dst_func.add_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011315, VkglTestCase_011315_1, VkglTestCase_011315_2);

#define VkglTestCase_011316_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011316_2 "unc_dst_func.add_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011316, VkglTestCase_011316_1, VkglTestCase_011316_2);

#define VkglTestCase_011317_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011317_2 "st_func.add_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011317, VkglTestCase_011317_1, VkglTestCase_011317_2);

#define VkglTestCase_011318_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011318_2 "unc_dst_func.add_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011318, VkglTestCase_011318_1, VkglTestCase_011318_2);

#define VkglTestCase_011319_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011319_2 "st_func.add_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011319, VkglTestCase_011319_1, VkglTestCase_011319_2);

#define VkglTestCase_011320_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011320_2 "tion_src_func_dst_func.add_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011320, VkglTestCase_011320_1, VkglTestCase_011320_2);

#define VkglTestCase_011321_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011321_2 "tion_src_func_dst_func.add_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011321, VkglTestCase_011321_1, VkglTestCase_011321_2);

#define VkglTestCase_011322_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011322_2 "n_src_func_dst_func.add_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011322, VkglTestCase_011322_1, VkglTestCase_011322_2);

#define VkglTestCase_011323_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011323_2 "_func_dst_func.add_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011323, VkglTestCase_011323_1, VkglTestCase_011323_2);

#define VkglTestCase_011324_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011324_2 "n_src_func_dst_func.add_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011324, VkglTestCase_011324_1, VkglTestCase_011324_2);

#define VkglTestCase_011325_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011325_2 "_func_dst_func.add_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011325, VkglTestCase_011325_1, VkglTestCase_011325_2);

#define VkglTestCase_011326_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011326_2 "n_src_func_dst_func.add_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011326, VkglTestCase_011326_1, VkglTestCase_011326_2);

#define VkglTestCase_011327_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011327_2 "_func_dst_func.add_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011327, VkglTestCase_011327_1, VkglTestCase_011327_2);

#define VkglTestCase_011328_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011328_2 "n_src_func_dst_func.add_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011328, VkglTestCase_011328_1, VkglTestCase_011328_2);

#define VkglTestCase_011329_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011329_2 "_func_dst_func.add_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011329, VkglTestCase_011329_1, VkglTestCase_011329_2);

#define VkglTestCase_011330_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011330_2 "src_func_dst_func.add_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011330, VkglTestCase_011330_1, VkglTestCase_011330_2);

#define VkglTestCase_011331_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011331_2 "unc_dst_func.add_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011331, VkglTestCase_011331_1, VkglTestCase_011331_2);

#define VkglTestCase_011332_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011332_2 "src_func_dst_func.add_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011332, VkglTestCase_011332_1, VkglTestCase_011332_2);

#define VkglTestCase_011333_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011333_2 "unc_dst_func.add_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011333, VkglTestCase_011333_1, VkglTestCase_011333_2);

#define VkglTestCase_011334_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011334_2 "src_func_dst_func.add_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011334, VkglTestCase_011334_1, VkglTestCase_011334_2);

#define VkglTestCase_011335_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011335_2 "src_func_dst_func.add_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011335, VkglTestCase_011335_1, VkglTestCase_011335_2);

#define VkglTestCase_011336_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011336_2 "_func_dst_func.add_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011336, VkglTestCase_011336_1, VkglTestCase_011336_2);

#define VkglTestCase_011337_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011337_2 "_dst_func.add_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011337, VkglTestCase_011337_1, VkglTestCase_011337_2);

#define VkglTestCase_011338_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011338_2 "_func_dst_func.add_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011338, VkglTestCase_011338_1, VkglTestCase_011338_2);

#define VkglTestCase_011339_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011339_2 "_dst_func.add_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011339, VkglTestCase_011339_1, VkglTestCase_011339_2);

#define VkglTestCase_011340_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011340_2 "_func_dst_func.add_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011340, VkglTestCase_011340_1, VkglTestCase_011340_2);

#define VkglTestCase_011341_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011341_2 "_dst_func.add_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011341, VkglTestCase_011341_1, VkglTestCase_011341_2);

#define VkglTestCase_011342_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011342_2 "_func_dst_func.add_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011342, VkglTestCase_011342_1, VkglTestCase_011342_2);

#define VkglTestCase_011343_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011343_2 "_dst_func.add_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011343, VkglTestCase_011343_1, VkglTestCase_011343_2);

#define VkglTestCase_011344_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011344_2 "unc_dst_func.add_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011344, VkglTestCase_011344_1, VkglTestCase_011344_2);

#define VkglTestCase_011345_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011345_2 "st_func.add_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011345, VkglTestCase_011345_1, VkglTestCase_011345_2);

#define VkglTestCase_011346_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011346_2 "unc_dst_func.add_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011346, VkglTestCase_011346_1, VkglTestCase_011346_2);

#define VkglTestCase_011347_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011347_2 "st_func.add_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011347, VkglTestCase_011347_1, VkglTestCase_011347_2);

#define VkglTestCase_011348_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011348_2 "on_src_func_dst_func.add_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011348, VkglTestCase_011348_1, VkglTestCase_011348_2);

#define VkglTestCase_011349_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011349_2 "on_src_func_dst_func.add_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011349, VkglTestCase_011349_1, VkglTestCase_011349_2);

#define VkglTestCase_011350_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011350_2 "src_func_dst_func.add_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011350, VkglTestCase_011350_1, VkglTestCase_011350_2);

#define VkglTestCase_011351_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011351_2 "unc_dst_func.add_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011351, VkglTestCase_011351_1, VkglTestCase_011351_2);

#define VkglTestCase_011352_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011352_2 "src_func_dst_func.add_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011352, VkglTestCase_011352_1, VkglTestCase_011352_2);

#define VkglTestCase_011353_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011353_2 "unc_dst_func.add_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011353, VkglTestCase_011353_1, VkglTestCase_011353_2);

#define VkglTestCase_011354_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011354_2 "src_func_dst_func.add_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011354, VkglTestCase_011354_1, VkglTestCase_011354_2);

#define VkglTestCase_011355_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011355_2 "unc_dst_func.add_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011355, VkglTestCase_011355_1, VkglTestCase_011355_2);

#define VkglTestCase_011356_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011356_2 "src_func_dst_func.add_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011356, VkglTestCase_011356_1, VkglTestCase_011356_2);

#define VkglTestCase_011357_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011357_2 "unc_dst_func.add_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011357, VkglTestCase_011357_1, VkglTestCase_011357_2);

#define VkglTestCase_011358_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011358_2 "c_func_dst_func.add_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011358, VkglTestCase_011358_1, VkglTestCase_011358_2);

#define VkglTestCase_011359_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011359_2 "c_dst_func.add_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011359, VkglTestCase_011359_1, VkglTestCase_011359_2);

#define VkglTestCase_011360_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011360_2 "c_func_dst_func.add_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011360, VkglTestCase_011360_1, VkglTestCase_011360_2);

#define VkglTestCase_011361_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011361_2 "c_dst_func.add_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011361, VkglTestCase_011361_1, VkglTestCase_011361_2);

#define VkglTestCase_011362_1 "dEQP-GLES2.functional.fragment_ops.blend.eq"
#define VkglTestCase_011362_2 "uation_src_func_dst_func.subtract_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011362, VkglTestCase_011362_1, VkglTestCase_011362_2);

#define VkglTestCase_011363_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011363_2 "quation_src_func_dst_func.subtract_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011363, VkglTestCase_011363_1, VkglTestCase_011363_2);

#define VkglTestCase_011364_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011364_2 "tion_src_func_dst_func.subtract_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011364, VkglTestCase_011364_1, VkglTestCase_011364_2);

#define VkglTestCase_011365_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011365_2 "src_func_dst_func.subtract_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011365, VkglTestCase_011365_1, VkglTestCase_011365_2);

#define VkglTestCase_011366_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011366_2 "tion_src_func_dst_func.subtract_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011366, VkglTestCase_011366_1, VkglTestCase_011366_2);

#define VkglTestCase_011367_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011367_2 "src_func_dst_func.subtract_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011367, VkglTestCase_011367_1, VkglTestCase_011367_2);

#define VkglTestCase_011368_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011368_2 "tion_src_func_dst_func.subtract_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011368, VkglTestCase_011368_1, VkglTestCase_011368_2);

#define VkglTestCase_011369_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011369_2 "src_func_dst_func.subtract_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011369, VkglTestCase_011369_1, VkglTestCase_011369_2);

#define VkglTestCase_011370_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011370_2 "tion_src_func_dst_func.subtract_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011370, VkglTestCase_011370_1, VkglTestCase_011370_2);

#define VkglTestCase_011371_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011371_2 "src_func_dst_func.subtract_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011371, VkglTestCase_011371_1, VkglTestCase_011371_2);

#define VkglTestCase_011372_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011372_2 "n_src_func_dst_func.subtract_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011372, VkglTestCase_011372_1, VkglTestCase_011372_2);

#define VkglTestCase_011373_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011373_2 "_func_dst_func.subtract_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011373, VkglTestCase_011373_1, VkglTestCase_011373_2);

#define VkglTestCase_011374_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011374_2 "n_src_func_dst_func.subtract_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011374, VkglTestCase_011374_1, VkglTestCase_011374_2);

#define VkglTestCase_011375_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011375_2 "_func_dst_func.subtract_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011375, VkglTestCase_011375_1, VkglTestCase_011375_2);

#define VkglTestCase_011376_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011376_2 "quation_src_func_dst_func.subtract_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011376, VkglTestCase_011376_1, VkglTestCase_011376_2);

#define VkglTestCase_011377_1 "dEQP-GLES2.functional.fragment_ops.blend.e"
#define VkglTestCase_011377_2 "quation_src_func_dst_func.subtract_one_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011377, VkglTestCase_011377_1, VkglTestCase_011377_2);

#define VkglTestCase_011378_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011378_2 "tion_src_func_dst_func.subtract_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011378, VkglTestCase_011378_1, VkglTestCase_011378_2);

#define VkglTestCase_011379_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011379_2 "src_func_dst_func.subtract_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011379, VkglTestCase_011379_1, VkglTestCase_011379_2);

#define VkglTestCase_011380_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011380_2 "tion_src_func_dst_func.subtract_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011380, VkglTestCase_011380_1, VkglTestCase_011380_2);

#define VkglTestCase_011381_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011381_2 "src_func_dst_func.subtract_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011381, VkglTestCase_011381_1, VkglTestCase_011381_2);

#define VkglTestCase_011382_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011382_2 "tion_src_func_dst_func.subtract_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011382, VkglTestCase_011382_1, VkglTestCase_011382_2);

#define VkglTestCase_011383_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011383_2 "src_func_dst_func.subtract_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011383, VkglTestCase_011383_1, VkglTestCase_011383_2);

#define VkglTestCase_011384_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011384_2 "tion_src_func_dst_func.subtract_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011384, VkglTestCase_011384_1, VkglTestCase_011384_2);

#define VkglTestCase_011385_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011385_2 "src_func_dst_func.subtract_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011385, VkglTestCase_011385_1, VkglTestCase_011385_2);

#define VkglTestCase_011386_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011386_2 "on_src_func_dst_func.subtract_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011386, VkglTestCase_011386_1, VkglTestCase_011386_2);

#define VkglTestCase_011387_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011387_2 "c_func_dst_func.subtract_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011387, VkglTestCase_011387_1, VkglTestCase_011387_2);

#define VkglTestCase_011388_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011388_2 "on_src_func_dst_func.subtract_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011388, VkglTestCase_011388_1, VkglTestCase_011388_2);

#define VkglTestCase_011389_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011389_2 "c_func_dst_func.subtract_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011389, VkglTestCase_011389_1, VkglTestCase_011389_2);

#define VkglTestCase_011390_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011390_2 "tion_src_func_dst_func.subtract_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011390, VkglTestCase_011390_1, VkglTestCase_011390_2);

#define VkglTestCase_011391_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011391_2 "tion_src_func_dst_func.subtract_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011391, VkglTestCase_011391_1, VkglTestCase_011391_2);

#define VkglTestCase_011392_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011392_2 "n_src_func_dst_func.subtract_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011392, VkglTestCase_011392_1, VkglTestCase_011392_2);

#define VkglTestCase_011393_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011393_2 "_func_dst_func.subtract_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011393, VkglTestCase_011393_1, VkglTestCase_011393_2);

#define VkglTestCase_011394_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011394_2 "n_src_func_dst_func.subtract_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011394, VkglTestCase_011394_1, VkglTestCase_011394_2);

#define VkglTestCase_011395_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011395_2 "_func_dst_func.subtract_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011395, VkglTestCase_011395_1, VkglTestCase_011395_2);

#define VkglTestCase_011396_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011396_2 "n_src_func_dst_func.subtract_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011396, VkglTestCase_011396_1, VkglTestCase_011396_2);

#define VkglTestCase_011397_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011397_2 "_func_dst_func.subtract_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011397, VkglTestCase_011397_1, VkglTestCase_011397_2);

#define VkglTestCase_011398_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011398_2 "n_src_func_dst_func.subtract_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011398, VkglTestCase_011398_1, VkglTestCase_011398_2);

#define VkglTestCase_011399_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011399_2 "_func_dst_func.subtract_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011399, VkglTestCase_011399_1, VkglTestCase_011399_2);

#define VkglTestCase_011400_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011400_2 "src_func_dst_func.subtract_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011400, VkglTestCase_011400_1, VkglTestCase_011400_2);

#define VkglTestCase_011401_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011401_2 "unc_dst_func.subtract_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011401, VkglTestCase_011401_1, VkglTestCase_011401_2);

#define VkglTestCase_011402_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011402_2 "src_func_dst_func.subtract_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011402, VkglTestCase_011402_1, VkglTestCase_011402_2);

#define VkglTestCase_011403_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011403_2 "unc_dst_func.subtract_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011403, VkglTestCase_011403_1, VkglTestCase_011403_2);

#define VkglTestCase_011404_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011404_2 "src_func_dst_func.subtract_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011404, VkglTestCase_011404_1, VkglTestCase_011404_2);

#define VkglTestCase_011405_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011405_2 "src_func_dst_func.subtract_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011405, VkglTestCase_011405_1, VkglTestCase_011405_2);

#define VkglTestCase_011406_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011406_2 "_func_dst_func.subtract_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011406, VkglTestCase_011406_1, VkglTestCase_011406_2);

#define VkglTestCase_011407_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011407_2 "_dst_func.subtract_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011407, VkglTestCase_011407_1, VkglTestCase_011407_2);

#define VkglTestCase_011408_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011408_2 "_func_dst_func.subtract_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011408, VkglTestCase_011408_1, VkglTestCase_011408_2);

#define VkglTestCase_011409_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011409_2 "_dst_func.subtract_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011409, VkglTestCase_011409_1, VkglTestCase_011409_2);

#define VkglTestCase_011410_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011410_2 "_func_dst_func.subtract_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011410, VkglTestCase_011410_1, VkglTestCase_011410_2);

#define VkglTestCase_011411_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011411_2 "_dst_func.subtract_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011411, VkglTestCase_011411_1, VkglTestCase_011411_2);

#define VkglTestCase_011412_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011412_2 "_func_dst_func.subtract_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011412, VkglTestCase_011412_1, VkglTestCase_011412_2);

#define VkglTestCase_011413_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011413_2 "_dst_func.subtract_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011413, VkglTestCase_011413_1, VkglTestCase_011413_2);

#define VkglTestCase_011414_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011414_2 "unc_dst_func.subtract_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011414, VkglTestCase_011414_1, VkglTestCase_011414_2);

#define VkglTestCase_011415_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011415_2 "st_func.subtract_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011415, VkglTestCase_011415_1, VkglTestCase_011415_2);

#define VkglTestCase_011416_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011416_2 "unc_dst_func.subtract_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011416, VkglTestCase_011416_1, VkglTestCase_011416_2);

#define VkglTestCase_011417_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011417_2 "st_func.subtract_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011417, VkglTestCase_011417_1, VkglTestCase_011417_2);

#define VkglTestCase_011418_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011418_2 "tion_src_func_dst_func.subtract_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011418, VkglTestCase_011418_1, VkglTestCase_011418_2);

#define VkglTestCase_011419_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011419_2 "tion_src_func_dst_func.subtract_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011419, VkglTestCase_011419_1, VkglTestCase_011419_2);

#define VkglTestCase_011420_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011420_2 "n_src_func_dst_func.subtract_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011420, VkglTestCase_011420_1, VkglTestCase_011420_2);

#define VkglTestCase_011421_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011421_2 "_func_dst_func.subtract_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011421, VkglTestCase_011421_1, VkglTestCase_011421_2);

#define VkglTestCase_011422_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011422_2 "n_src_func_dst_func.subtract_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011422, VkglTestCase_011422_1, VkglTestCase_011422_2);

#define VkglTestCase_011423_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011423_2 "_func_dst_func.subtract_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011423, VkglTestCase_011423_1, VkglTestCase_011423_2);

#define VkglTestCase_011424_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011424_2 "n_src_func_dst_func.subtract_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011424, VkglTestCase_011424_1, VkglTestCase_011424_2);

#define VkglTestCase_011425_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011425_2 "_func_dst_func.subtract_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011425, VkglTestCase_011425_1, VkglTestCase_011425_2);

#define VkglTestCase_011426_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011426_2 "n_src_func_dst_func.subtract_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011426, VkglTestCase_011426_1, VkglTestCase_011426_2);

#define VkglTestCase_011427_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011427_2 "_func_dst_func.subtract_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011427, VkglTestCase_011427_1, VkglTestCase_011427_2);

#define VkglTestCase_011428_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011428_2 "src_func_dst_func.subtract_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011428, VkglTestCase_011428_1, VkglTestCase_011428_2);

#define VkglTestCase_011429_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011429_2 "unc_dst_func.subtract_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011429, VkglTestCase_011429_1, VkglTestCase_011429_2);

#define VkglTestCase_011430_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011430_2 "src_func_dst_func.subtract_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011430, VkglTestCase_011430_1, VkglTestCase_011430_2);

#define VkglTestCase_011431_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011431_2 "unc_dst_func.subtract_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011431, VkglTestCase_011431_1, VkglTestCase_011431_2);

#define VkglTestCase_011432_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011432_2 "src_func_dst_func.subtract_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011432, VkglTestCase_011432_1, VkglTestCase_011432_2);

#define VkglTestCase_011433_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011433_2 "src_func_dst_func.subtract_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011433, VkglTestCase_011433_1, VkglTestCase_011433_2);

#define VkglTestCase_011434_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011434_2 "_func_dst_func.subtract_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011434, VkglTestCase_011434_1, VkglTestCase_011434_2);

#define VkglTestCase_011435_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011435_2 "_dst_func.subtract_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011435, VkglTestCase_011435_1, VkglTestCase_011435_2);

#define VkglTestCase_011436_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011436_2 "_func_dst_func.subtract_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011436, VkglTestCase_011436_1, VkglTestCase_011436_2);

#define VkglTestCase_011437_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011437_2 "_dst_func.subtract_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011437, VkglTestCase_011437_1, VkglTestCase_011437_2);

#define VkglTestCase_011438_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011438_2 "_func_dst_func.subtract_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011438, VkglTestCase_011438_1, VkglTestCase_011438_2);

#define VkglTestCase_011439_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011439_2 "_dst_func.subtract_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011439, VkglTestCase_011439_1, VkglTestCase_011439_2);

#define VkglTestCase_011440_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011440_2 "_func_dst_func.subtract_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011440, VkglTestCase_011440_1, VkglTestCase_011440_2);

#define VkglTestCase_011441_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011441_2 "_dst_func.subtract_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011441, VkglTestCase_011441_1, VkglTestCase_011441_2);

#define VkglTestCase_011442_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011442_2 "unc_dst_func.subtract_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011442, VkglTestCase_011442_1, VkglTestCase_011442_2);

#define VkglTestCase_011443_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011443_2 "st_func.subtract_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011443, VkglTestCase_011443_1, VkglTestCase_011443_2);

#define VkglTestCase_011444_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011444_2 "unc_dst_func.subtract_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011444, VkglTestCase_011444_1, VkglTestCase_011444_2);

#define VkglTestCase_011445_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011445_2 "st_func.subtract_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011445, VkglTestCase_011445_1, VkglTestCase_011445_2);

#define VkglTestCase_011446_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011446_2 "tion_src_func_dst_func.subtract_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011446, VkglTestCase_011446_1, VkglTestCase_011446_2);

#define VkglTestCase_011447_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011447_2 "tion_src_func_dst_func.subtract_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011447, VkglTestCase_011447_1, VkglTestCase_011447_2);

#define VkglTestCase_011448_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011448_2 "n_src_func_dst_func.subtract_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011448, VkglTestCase_011448_1, VkglTestCase_011448_2);

#define VkglTestCase_011449_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011449_2 "_func_dst_func.subtract_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011449, VkglTestCase_011449_1, VkglTestCase_011449_2);

#define VkglTestCase_011450_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011450_2 "n_src_func_dst_func.subtract_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011450, VkglTestCase_011450_1, VkglTestCase_011450_2);

#define VkglTestCase_011451_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011451_2 "_func_dst_func.subtract_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011451, VkglTestCase_011451_1, VkglTestCase_011451_2);

#define VkglTestCase_011452_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011452_2 "n_src_func_dst_func.subtract_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011452, VkglTestCase_011452_1, VkglTestCase_011452_2);

#define VkglTestCase_011453_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011453_2 "_func_dst_func.subtract_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011453, VkglTestCase_011453_1, VkglTestCase_011453_2);

#define VkglTestCase_011454_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011454_2 "n_src_func_dst_func.subtract_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011454, VkglTestCase_011454_1, VkglTestCase_011454_2);

#define VkglTestCase_011455_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011455_2 "_func_dst_func.subtract_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011455, VkglTestCase_011455_1, VkglTestCase_011455_2);

#define VkglTestCase_011456_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011456_2 "src_func_dst_func.subtract_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011456, VkglTestCase_011456_1, VkglTestCase_011456_2);

#define VkglTestCase_011457_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011457_2 "unc_dst_func.subtract_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011457, VkglTestCase_011457_1, VkglTestCase_011457_2);

#define VkglTestCase_011458_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011458_2 "src_func_dst_func.subtract_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011458, VkglTestCase_011458_1, VkglTestCase_011458_2);

#define VkglTestCase_011459_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011459_2 "unc_dst_func.subtract_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011459, VkglTestCase_011459_1, VkglTestCase_011459_2);

#define VkglTestCase_011460_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011460_2 "src_func_dst_func.subtract_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011460, VkglTestCase_011460_1, VkglTestCase_011460_2);

#define VkglTestCase_011461_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011461_2 "src_func_dst_func.subtract_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011461, VkglTestCase_011461_1, VkglTestCase_011461_2);

#define VkglTestCase_011462_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011462_2 "_func_dst_func.subtract_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011462, VkglTestCase_011462_1, VkglTestCase_011462_2);

#define VkglTestCase_011463_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011463_2 "_dst_func.subtract_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011463, VkglTestCase_011463_1, VkglTestCase_011463_2);

#define VkglTestCase_011464_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011464_2 "_func_dst_func.subtract_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011464, VkglTestCase_011464_1, VkglTestCase_011464_2);

#define VkglTestCase_011465_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011465_2 "_dst_func.subtract_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011465, VkglTestCase_011465_1, VkglTestCase_011465_2);

#define VkglTestCase_011466_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011466_2 "_func_dst_func.subtract_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011466, VkglTestCase_011466_1, VkglTestCase_011466_2);

#define VkglTestCase_011467_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011467_2 "_dst_func.subtract_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011467, VkglTestCase_011467_1, VkglTestCase_011467_2);

#define VkglTestCase_011468_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011468_2 "_func_dst_func.subtract_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011468, VkglTestCase_011468_1, VkglTestCase_011468_2);

#define VkglTestCase_011469_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011469_2 "_dst_func.subtract_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011469, VkglTestCase_011469_1, VkglTestCase_011469_2);

#define VkglTestCase_011470_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011470_2 "unc_dst_func.subtract_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011470, VkglTestCase_011470_1, VkglTestCase_011470_2);

#define VkglTestCase_011471_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011471_2 "st_func.subtract_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011471, VkglTestCase_011471_1, VkglTestCase_011471_2);

#define VkglTestCase_011472_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011472_2 "unc_dst_func.subtract_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011472, VkglTestCase_011472_1, VkglTestCase_011472_2);

#define VkglTestCase_011473_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011473_2 "st_func.subtract_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011473, VkglTestCase_011473_1, VkglTestCase_011473_2);

#define VkglTestCase_011474_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011474_2 "tion_src_func_dst_func.subtract_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011474, VkglTestCase_011474_1, VkglTestCase_011474_2);

#define VkglTestCase_011475_1 "dEQP-GLES2.functional.fragment_ops.blend.equa"
#define VkglTestCase_011475_2 "tion_src_func_dst_func.subtract_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011475, VkglTestCase_011475_1, VkglTestCase_011475_2);

#define VkglTestCase_011476_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011476_2 "n_src_func_dst_func.subtract_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011476, VkglTestCase_011476_1, VkglTestCase_011476_2);

#define VkglTestCase_011477_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011477_2 "_func_dst_func.subtract_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011477, VkglTestCase_011477_1, VkglTestCase_011477_2);

#define VkglTestCase_011478_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011478_2 "n_src_func_dst_func.subtract_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011478, VkglTestCase_011478_1, VkglTestCase_011478_2);

#define VkglTestCase_011479_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011479_2 "_func_dst_func.subtract_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011479, VkglTestCase_011479_1, VkglTestCase_011479_2);

#define VkglTestCase_011480_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011480_2 "n_src_func_dst_func.subtract_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011480, VkglTestCase_011480_1, VkglTestCase_011480_2);

#define VkglTestCase_011481_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011481_2 "_func_dst_func.subtract_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011481, VkglTestCase_011481_1, VkglTestCase_011481_2);

#define VkglTestCase_011482_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011482_2 "n_src_func_dst_func.subtract_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011482, VkglTestCase_011482_1, VkglTestCase_011482_2);

#define VkglTestCase_011483_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011483_2 "_func_dst_func.subtract_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011483, VkglTestCase_011483_1, VkglTestCase_011483_2);

#define VkglTestCase_011484_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011484_2 "src_func_dst_func.subtract_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011484, VkglTestCase_011484_1, VkglTestCase_011484_2);

#define VkglTestCase_011485_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011485_2 "unc_dst_func.subtract_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011485, VkglTestCase_011485_1, VkglTestCase_011485_2);

#define VkglTestCase_011486_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011486_2 "src_func_dst_func.subtract_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011486, VkglTestCase_011486_1, VkglTestCase_011486_2);

#define VkglTestCase_011487_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011487_2 "unc_dst_func.subtract_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011487, VkglTestCase_011487_1, VkglTestCase_011487_2);

#define VkglTestCase_011488_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011488_2 "src_func_dst_func.subtract_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011488, VkglTestCase_011488_1, VkglTestCase_011488_2);

#define VkglTestCase_011489_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011489_2 "src_func_dst_func.subtract_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011489, VkglTestCase_011489_1, VkglTestCase_011489_2);

#define VkglTestCase_011490_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011490_2 "_func_dst_func.subtract_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011490, VkglTestCase_011490_1, VkglTestCase_011490_2);

#define VkglTestCase_011491_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011491_2 "_dst_func.subtract_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011491, VkglTestCase_011491_1, VkglTestCase_011491_2);

#define VkglTestCase_011492_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011492_2 "_func_dst_func.subtract_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011492, VkglTestCase_011492_1, VkglTestCase_011492_2);

#define VkglTestCase_011493_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011493_2 "_dst_func.subtract_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011493, VkglTestCase_011493_1, VkglTestCase_011493_2);

#define VkglTestCase_011494_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011494_2 "_func_dst_func.subtract_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011494, VkglTestCase_011494_1, VkglTestCase_011494_2);

#define VkglTestCase_011495_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011495_2 "_dst_func.subtract_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011495, VkglTestCase_011495_1, VkglTestCase_011495_2);

#define VkglTestCase_011496_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011496_2 "_func_dst_func.subtract_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011496, VkglTestCase_011496_1, VkglTestCase_011496_2);

#define VkglTestCase_011497_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011497_2 "_dst_func.subtract_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011497, VkglTestCase_011497_1, VkglTestCase_011497_2);

#define VkglTestCase_011498_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011498_2 "unc_dst_func.subtract_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011498, VkglTestCase_011498_1, VkglTestCase_011498_2);

#define VkglTestCase_011499_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011499_2 "st_func.subtract_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011499, VkglTestCase_011499_1, VkglTestCase_011499_2);

#define VkglTestCase_011500_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011500_2 "unc_dst_func.subtract_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011500, VkglTestCase_011500_1, VkglTestCase_011500_2);

#define VkglTestCase_011501_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011501_2 "st_func.subtract_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011501, VkglTestCase_011501_1, VkglTestCase_011501_2);

#define VkglTestCase_011502_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011502_2 "n_src_func_dst_func.subtract_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011502, VkglTestCase_011502_1, VkglTestCase_011502_2);

#define VkglTestCase_011503_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011503_2 "on_src_func_dst_func.subtract_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011503, VkglTestCase_011503_1, VkglTestCase_011503_2);

#define VkglTestCase_011504_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011504_2 "src_func_dst_func.subtract_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011504, VkglTestCase_011504_1, VkglTestCase_011504_2);

#define VkglTestCase_011505_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011505_2 "unc_dst_func.subtract_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011505, VkglTestCase_011505_1, VkglTestCase_011505_2);

#define VkglTestCase_011506_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011506_2 "src_func_dst_func.subtract_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011506, VkglTestCase_011506_1, VkglTestCase_011506_2);

#define VkglTestCase_011507_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011507_2 "unc_dst_func.subtract_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011507, VkglTestCase_011507_1, VkglTestCase_011507_2);

#define VkglTestCase_011508_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011508_2 "src_func_dst_func.subtract_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011508, VkglTestCase_011508_1, VkglTestCase_011508_2);

#define VkglTestCase_011509_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011509_2 "unc_dst_func.subtract_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011509, VkglTestCase_011509_1, VkglTestCase_011509_2);

#define VkglTestCase_011510_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011510_2 "src_func_dst_func.subtract_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011510, VkglTestCase_011510_1, VkglTestCase_011510_2);

#define VkglTestCase_011511_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011511_2 "unc_dst_func.subtract_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011511, VkglTestCase_011511_1, VkglTestCase_011511_2);

#define VkglTestCase_011512_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011512_2 "_func_dst_func.subtract_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011512, VkglTestCase_011512_1, VkglTestCase_011512_2);

#define VkglTestCase_011513_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011513_2 "_dst_func.subtract_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011513, VkglTestCase_011513_1, VkglTestCase_011513_2);

#define VkglTestCase_011514_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011514_2 "_func_dst_func.subtract_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011514, VkglTestCase_011514_1, VkglTestCase_011514_2);

#define VkglTestCase_011515_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011515_2 "_dst_func.subtract_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011515, VkglTestCase_011515_1, VkglTestCase_011515_2);

#define VkglTestCase_011516_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011516_2 "_func_dst_func.subtract_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011516, VkglTestCase_011516_1, VkglTestCase_011516_2);

#define VkglTestCase_011517_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011517_2 "c_func_dst_func.subtract_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011517, VkglTestCase_011517_1, VkglTestCase_011517_2);

#define VkglTestCase_011518_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011518_2 "unc_dst_func.subtract_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011518, VkglTestCase_011518_1, VkglTestCase_011518_2);

#define VkglTestCase_011519_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011519_2 "st_func.subtract_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011519, VkglTestCase_011519_1, VkglTestCase_011519_2);

#define VkglTestCase_011520_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011520_2 "unc_dst_func.subtract_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011520, VkglTestCase_011520_1, VkglTestCase_011520_2);

#define VkglTestCase_011521_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011521_2 "st_func.subtract_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011521, VkglTestCase_011521_1, VkglTestCase_011521_2);

#define VkglTestCase_011522_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011522_2 "unc_dst_func.subtract_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011522, VkglTestCase_011522_1, VkglTestCase_011522_2);

#define VkglTestCase_011523_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011523_2 "st_func.subtract_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011523, VkglTestCase_011523_1, VkglTestCase_011523_2);

#define VkglTestCase_011524_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011524_2 "unc_dst_func.subtract_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011524, VkglTestCase_011524_1, VkglTestCase_011524_2);

#define VkglTestCase_011525_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011525_2 "st_func.subtract_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011525, VkglTestCase_011525_1, VkglTestCase_011525_2);

#define VkglTestCase_011526_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011526_2 "_dst_func.subtract_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011526, VkglTestCase_011526_1, VkglTestCase_011526_2);

#define VkglTestCase_011527_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_"
#define VkglTestCase_011527_2 "func.subtract_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011527, VkglTestCase_011527_1, VkglTestCase_011527_2);

#define VkglTestCase_011528_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011528_2 "_dst_func.subtract_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011528, VkglTestCase_011528_1, VkglTestCase_011528_2);

#define VkglTestCase_011529_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_"
#define VkglTestCase_011529_2 "func.subtract_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011529, VkglTestCase_011529_1, VkglTestCase_011529_2);

#define VkglTestCase_011530_1 "dEQP-GLES2.functional.fragment_ops.blend.equatio"
#define VkglTestCase_011530_2 "n_src_func_dst_func.subtract_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011530, VkglTestCase_011530_1, VkglTestCase_011530_2);

#define VkglTestCase_011531_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011531_2 "on_src_func_dst_func.subtract_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011531, VkglTestCase_011531_1, VkglTestCase_011531_2);

#define VkglTestCase_011532_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011532_2 "src_func_dst_func.subtract_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011532, VkglTestCase_011532_1, VkglTestCase_011532_2);

#define VkglTestCase_011533_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011533_2 "unc_dst_func.subtract_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011533, VkglTestCase_011533_1, VkglTestCase_011533_2);

#define VkglTestCase_011534_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011534_2 "src_func_dst_func.subtract_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011534, VkglTestCase_011534_1, VkglTestCase_011534_2);

#define VkglTestCase_011535_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011535_2 "unc_dst_func.subtract_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011535, VkglTestCase_011535_1, VkglTestCase_011535_2);

#define VkglTestCase_011536_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011536_2 "src_func_dst_func.subtract_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011536, VkglTestCase_011536_1, VkglTestCase_011536_2);

#define VkglTestCase_011537_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011537_2 "unc_dst_func.subtract_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011537, VkglTestCase_011537_1, VkglTestCase_011537_2);

#define VkglTestCase_011538_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011538_2 "src_func_dst_func.subtract_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011538, VkglTestCase_011538_1, VkglTestCase_011538_2);

#define VkglTestCase_011539_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011539_2 "unc_dst_func.subtract_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011539, VkglTestCase_011539_1, VkglTestCase_011539_2);

#define VkglTestCase_011540_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011540_2 "_func_dst_func.subtract_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011540, VkglTestCase_011540_1, VkglTestCase_011540_2);

#define VkglTestCase_011541_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011541_2 "_dst_func.subtract_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011541, VkglTestCase_011541_1, VkglTestCase_011541_2);

#define VkglTestCase_011542_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011542_2 "_func_dst_func.subtract_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011542, VkglTestCase_011542_1, VkglTestCase_011542_2);

#define VkglTestCase_011543_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011543_2 "_dst_func.subtract_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011543, VkglTestCase_011543_1, VkglTestCase_011543_2);

#define VkglTestCase_011544_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011544_2 "_func_dst_func.subtract_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011544, VkglTestCase_011544_1, VkglTestCase_011544_2);

#define VkglTestCase_011545_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011545_2 "c_func_dst_func.subtract_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011545, VkglTestCase_011545_1, VkglTestCase_011545_2);

#define VkglTestCase_011546_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011546_2 "unc_dst_func.subtract_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011546, VkglTestCase_011546_1, VkglTestCase_011546_2);

#define VkglTestCase_011547_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011547_2 "st_func.subtract_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011547, VkglTestCase_011547_1, VkglTestCase_011547_2);

#define VkglTestCase_011548_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011548_2 "unc_dst_func.subtract_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011548, VkglTestCase_011548_1, VkglTestCase_011548_2);

#define VkglTestCase_011549_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011549_2 "st_func.subtract_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011549, VkglTestCase_011549_1, VkglTestCase_011549_2);

#define VkglTestCase_011550_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011550_2 "unc_dst_func.subtract_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011550, VkglTestCase_011550_1, VkglTestCase_011550_2);

#define VkglTestCase_011551_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011551_2 "st_func.subtract_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011551, VkglTestCase_011551_1, VkglTestCase_011551_2);

#define VkglTestCase_011552_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011552_2 "unc_dst_func.subtract_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011552, VkglTestCase_011552_1, VkglTestCase_011552_2);

#define VkglTestCase_011553_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011553_2 "st_func.subtract_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011553, VkglTestCase_011553_1, VkglTestCase_011553_2);

#define VkglTestCase_011554_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011554_2 "_dst_func.subtract_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011554, VkglTestCase_011554_1, VkglTestCase_011554_2);

#define VkglTestCase_011555_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_"
#define VkglTestCase_011555_2 "func.subtract_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011555, VkglTestCase_011555_1, VkglTestCase_011555_2);

#define VkglTestCase_011556_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func"
#define VkglTestCase_011556_2 "_dst_func.subtract_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011556, VkglTestCase_011556_1, VkglTestCase_011556_2);

#define VkglTestCase_011557_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_"
#define VkglTestCase_011557_2 "func.subtract_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011557, VkglTestCase_011557_1, VkglTestCase_011557_2);

#define VkglTestCase_011558_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_"
#define VkglTestCase_011558_2 "src_func_dst_func.subtract_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011558, VkglTestCase_011558_1, VkglTestCase_011558_2);

#define VkglTestCase_011559_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011559_2 "_src_func_dst_func.subtract_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011559, VkglTestCase_011559_1, VkglTestCase_011559_2);

#define VkglTestCase_011560_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011560_2 "c_func_dst_func.subtract_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011560, VkglTestCase_011560_1, VkglTestCase_011560_2);

#define VkglTestCase_011561_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011561_2 "c_dst_func.subtract_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011561, VkglTestCase_011561_1, VkglTestCase_011561_2);

#define VkglTestCase_011562_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011562_2 "c_func_dst_func.subtract_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011562, VkglTestCase_011562_1, VkglTestCase_011562_2);

#define VkglTestCase_011563_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011563_2 "c_dst_func.subtract_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011563, VkglTestCase_011563_1, VkglTestCase_011563_2);

#define VkglTestCase_011564_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011564_2 "c_func_dst_func.subtract_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011564, VkglTestCase_011564_1, VkglTestCase_011564_2);

#define VkglTestCase_011565_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011565_2 "c_dst_func.subtract_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011565, VkglTestCase_011565_1, VkglTestCase_011565_2);

#define VkglTestCase_011566_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011566_2 "c_func_dst_func.subtract_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011566, VkglTestCase_011566_1, VkglTestCase_011566_2);

#define VkglTestCase_011567_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011567_2 "c_dst_func.subtract_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011567, VkglTestCase_011567_1, VkglTestCase_011567_2);

#define VkglTestCase_011568_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011568_2 "unc_dst_func.subtract_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011568, VkglTestCase_011568_1, VkglTestCase_011568_2);

#define VkglTestCase_011569_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011569_2 "st_func.subtract_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011569, VkglTestCase_011569_1, VkglTestCase_011569_2);

#define VkglTestCase_011570_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_f"
#define VkglTestCase_011570_2 "unc_dst_func.subtract_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011570, VkglTestCase_011570_1, VkglTestCase_011570_2);

#define VkglTestCase_011571_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_d"
#define VkglTestCase_011571_2 "st_func.subtract_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011571, VkglTestCase_011571_1, VkglTestCase_011571_2);

#define VkglTestCase_011572_1 "dEQP-GLES2.functional.fragment_ops.blend.equati"
#define VkglTestCase_011572_2 "on_src_func_dst_func.reverse_subtract_zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011572, VkglTestCase_011572_1, VkglTestCase_011572_2);

#define VkglTestCase_011573_1 "dEQP-GLES2.functional.fragment_ops.blend.equat"
#define VkglTestCase_011573_2 "ion_src_func_dst_func.reverse_subtract_zero_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011573, VkglTestCase_011573_1, VkglTestCase_011573_2);

#define VkglTestCase_011574_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011574_2 "_src_func_dst_func.reverse_subtract_zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011574, VkglTestCase_011574_1, VkglTestCase_011574_2);

#define VkglTestCase_011575_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011575_2 "func_dst_func.reverse_subtract_zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011575, VkglTestCase_011575_1, VkglTestCase_011575_2);

#define VkglTestCase_011576_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011576_2 "_src_func_dst_func.reverse_subtract_zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011576, VkglTestCase_011576_1, VkglTestCase_011576_2);

#define VkglTestCase_011577_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011577_2 "func_dst_func.reverse_subtract_zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011577, VkglTestCase_011577_1, VkglTestCase_011577_2);

#define VkglTestCase_011578_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011578_2 "_src_func_dst_func.reverse_subtract_zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011578, VkglTestCase_011578_1, VkglTestCase_011578_2);

#define VkglTestCase_011579_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011579_2 "func_dst_func.reverse_subtract_zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011579, VkglTestCase_011579_1, VkglTestCase_011579_2);

#define VkglTestCase_011580_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011580_2 "_src_func_dst_func.reverse_subtract_zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011580, VkglTestCase_011580_1, VkglTestCase_011580_2);

#define VkglTestCase_011581_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011581_2 "func_dst_func.reverse_subtract_zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011581, VkglTestCase_011581_1, VkglTestCase_011581_2);

#define VkglTestCase_011582_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011582_2 "c_func_dst_func.reverse_subtract_zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011582, VkglTestCase_011582_1, VkglTestCase_011582_2);

#define VkglTestCase_011583_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011583_2 "c_dst_func.reverse_subtract_zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011583, VkglTestCase_011583_1, VkglTestCase_011583_2);

#define VkglTestCase_011584_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011584_2 "c_func_dst_func.reverse_subtract_zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011584, VkglTestCase_011584_1, VkglTestCase_011584_2);

#define VkglTestCase_011585_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011585_2 "c_dst_func.reverse_subtract_zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011585, VkglTestCase_011585_1, VkglTestCase_011585_2);

#define VkglTestCase_011586_1 "dEQP-GLES2.functional.fragment_ops.blend.equat"
#define VkglTestCase_011586_2 "ion_src_func_dst_func.reverse_subtract_one_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011586, VkglTestCase_011586_1, VkglTestCase_011586_2);

#define VkglTestCase_011587_1 "dEQP-GLES2.functional.fragment_ops.blend.equat"
#define VkglTestCase_011587_2 "ion_src_func_dst_func.reverse_subtract_one_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011587, VkglTestCase_011587_1, VkglTestCase_011587_2);

#define VkglTestCase_011588_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011588_2 "_src_func_dst_func.reverse_subtract_one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011588, VkglTestCase_011588_1, VkglTestCase_011588_2);

#define VkglTestCase_011589_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011589_2 "func_dst_func.reverse_subtract_one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011589, VkglTestCase_011589_1, VkglTestCase_011589_2);

#define VkglTestCase_011590_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011590_2 "_src_func_dst_func.reverse_subtract_one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011590, VkglTestCase_011590_1, VkglTestCase_011590_2);

#define VkglTestCase_011591_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011591_2 "func_dst_func.reverse_subtract_one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011591, VkglTestCase_011591_1, VkglTestCase_011591_2);

#define VkglTestCase_011592_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011592_2 "_src_func_dst_func.reverse_subtract_one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011592, VkglTestCase_011592_1, VkglTestCase_011592_2);

#define VkglTestCase_011593_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011593_2 "func_dst_func.reverse_subtract_one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011593, VkglTestCase_011593_1, VkglTestCase_011593_2);

#define VkglTestCase_011594_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011594_2 "_src_func_dst_func.reverse_subtract_one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011594, VkglTestCase_011594_1, VkglTestCase_011594_2);

#define VkglTestCase_011595_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011595_2 "func_dst_func.reverse_subtract_one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011595, VkglTestCase_011595_1, VkglTestCase_011595_2);

#define VkglTestCase_011596_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_s"
#define VkglTestCase_011596_2 "rc_func_dst_func.reverse_subtract_one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011596, VkglTestCase_011596_1, VkglTestCase_011596_2);

#define VkglTestCase_011597_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fu"
#define VkglTestCase_011597_2 "nc_dst_func.reverse_subtract_one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011597, VkglTestCase_011597_1, VkglTestCase_011597_2);

#define VkglTestCase_011598_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_s"
#define VkglTestCase_011598_2 "rc_func_dst_func.reverse_subtract_one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011598, VkglTestCase_011598_1, VkglTestCase_011598_2);

#define VkglTestCase_011599_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fu"
#define VkglTestCase_011599_2 "nc_dst_func.reverse_subtract_one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011599, VkglTestCase_011599_1, VkglTestCase_011599_2);

#define VkglTestCase_011600_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011600_2 "_src_func_dst_func.reverse_subtract_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011600, VkglTestCase_011600_1, VkglTestCase_011600_2);

#define VkglTestCase_011601_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011601_2 "_src_func_dst_func.reverse_subtract_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011601, VkglTestCase_011601_1, VkglTestCase_011601_2);

#define VkglTestCase_011602_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011602_2 "c_func_dst_func.reverse_subtract_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011602, VkglTestCase_011602_1, VkglTestCase_011602_2);

#define VkglTestCase_011603_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011603_2 "c_dst_func.reverse_subtract_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011603, VkglTestCase_011603_1, VkglTestCase_011603_2);

#define VkglTestCase_011604_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011604_2 "c_func_dst_func.reverse_subtract_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011604, VkglTestCase_011604_1, VkglTestCase_011604_2);

#define VkglTestCase_011605_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011605_2 "c_dst_func.reverse_subtract_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011605, VkglTestCase_011605_1, VkglTestCase_011605_2);

#define VkglTestCase_011606_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011606_2 "c_func_dst_func.reverse_subtract_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011606, VkglTestCase_011606_1, VkglTestCase_011606_2);

#define VkglTestCase_011607_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011607_2 "c_dst_func.reverse_subtract_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011607, VkglTestCase_011607_1, VkglTestCase_011607_2);

#define VkglTestCase_011608_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011608_2 "c_func_dst_func.reverse_subtract_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011608, VkglTestCase_011608_1, VkglTestCase_011608_2);

#define VkglTestCase_011609_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011609_2 "c_dst_func.reverse_subtract_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011609, VkglTestCase_011609_1, VkglTestCase_011609_2);

#define VkglTestCase_011610_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011610_2 "func_dst_func.reverse_subtract_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011610, VkglTestCase_011610_1, VkglTestCase_011610_2);

#define VkglTestCase_011611_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011611_2 "dst_func.reverse_subtract_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011611, VkglTestCase_011611_1, VkglTestCase_011611_2);

#define VkglTestCase_011612_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011612_2 "func_dst_func.reverse_subtract_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011612, VkglTestCase_011612_1, VkglTestCase_011612_2);

#define VkglTestCase_011613_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011613_2 "dst_func.reverse_subtract_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011613, VkglTestCase_011613_1, VkglTestCase_011613_2);

#define VkglTestCase_011614_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011614_2 "func_dst_func.reverse_subtract_one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011614, VkglTestCase_011614_1, VkglTestCase_011614_2);

#define VkglTestCase_011615_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011615_2 "func_dst_func.reverse_subtract_one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011615, VkglTestCase_011615_1, VkglTestCase_011615_2);

#define VkglTestCase_011616_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011616_2 "c_dst_func.reverse_subtract_one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011616, VkglTestCase_011616_1, VkglTestCase_011616_2);

#define VkglTestCase_011617_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011617_2 "_func.reverse_subtract_one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011617, VkglTestCase_011617_1, VkglTestCase_011617_2);

#define VkglTestCase_011618_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011618_2 "c_dst_func.reverse_subtract_one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011618, VkglTestCase_011618_1, VkglTestCase_011618_2);

#define VkglTestCase_011619_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011619_2 "_func.reverse_subtract_one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011619, VkglTestCase_011619_1, VkglTestCase_011619_2);

#define VkglTestCase_011620_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011620_2 "c_dst_func.reverse_subtract_one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011620, VkglTestCase_011620_1, VkglTestCase_011620_2);

#define VkglTestCase_011621_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011621_2 "_func.reverse_subtract_one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011621, VkglTestCase_011621_1, VkglTestCase_011621_2);

#define VkglTestCase_011622_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011622_2 "c_dst_func.reverse_subtract_one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011622, VkglTestCase_011622_1, VkglTestCase_011622_2);

#define VkglTestCase_011623_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011623_2 "_func.reverse_subtract_one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011623, VkglTestCase_011623_1, VkglTestCase_011623_2);

#define VkglTestCase_011624_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011624_2 "dst_func.reverse_subtract_one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011624, VkglTestCase_011624_1, VkglTestCase_011624_2);

#define VkglTestCase_011625_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011625_2 "unc.reverse_subtract_one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011625, VkglTestCase_011625_1, VkglTestCase_011625_2);

#define VkglTestCase_011626_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011626_2 "dst_func.reverse_subtract_one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011626, VkglTestCase_011626_1, VkglTestCase_011626_2);

#define VkglTestCase_011627_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011627_2 "unc.reverse_subtract_one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011627, VkglTestCase_011627_1, VkglTestCase_011627_2);

#define VkglTestCase_011628_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011628_2 "_src_func_dst_func.reverse_subtract_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011628, VkglTestCase_011628_1, VkglTestCase_011628_2);

#define VkglTestCase_011629_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011629_2 "_src_func_dst_func.reverse_subtract_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011629, VkglTestCase_011629_1, VkglTestCase_011629_2);

#define VkglTestCase_011630_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011630_2 "c_func_dst_func.reverse_subtract_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011630, VkglTestCase_011630_1, VkglTestCase_011630_2);

#define VkglTestCase_011631_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011631_2 "c_dst_func.reverse_subtract_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011631, VkglTestCase_011631_1, VkglTestCase_011631_2);

#define VkglTestCase_011632_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011632_2 "c_func_dst_func.reverse_subtract_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011632, VkglTestCase_011632_1, VkglTestCase_011632_2);

#define VkglTestCase_011633_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011633_2 "c_dst_func.reverse_subtract_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011633, VkglTestCase_011633_1, VkglTestCase_011633_2);

#define VkglTestCase_011634_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011634_2 "c_func_dst_func.reverse_subtract_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011634, VkglTestCase_011634_1, VkglTestCase_011634_2);

#define VkglTestCase_011635_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011635_2 "c_dst_func.reverse_subtract_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011635, VkglTestCase_011635_1, VkglTestCase_011635_2);

#define VkglTestCase_011636_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011636_2 "c_func_dst_func.reverse_subtract_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011636, VkglTestCase_011636_1, VkglTestCase_011636_2);

#define VkglTestCase_011637_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011637_2 "c_dst_func.reverse_subtract_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011637, VkglTestCase_011637_1, VkglTestCase_011637_2);

#define VkglTestCase_011638_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011638_2 "func_dst_func.reverse_subtract_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011638, VkglTestCase_011638_1, VkglTestCase_011638_2);

#define VkglTestCase_011639_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011639_2 "dst_func.reverse_subtract_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011639, VkglTestCase_011639_1, VkglTestCase_011639_2);

#define VkglTestCase_011640_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011640_2 "func_dst_func.reverse_subtract_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011640, VkglTestCase_011640_1, VkglTestCase_011640_2);

#define VkglTestCase_011641_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011641_2 "dst_func.reverse_subtract_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011641, VkglTestCase_011641_1, VkglTestCase_011641_2);

#define VkglTestCase_011642_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011642_2 "func_dst_func.reverse_subtract_one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011642, VkglTestCase_011642_1, VkglTestCase_011642_2);

#define VkglTestCase_011643_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011643_2 "func_dst_func.reverse_subtract_one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011643, VkglTestCase_011643_1, VkglTestCase_011643_2);

#define VkglTestCase_011644_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011644_2 "c_dst_func.reverse_subtract_one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011644, VkglTestCase_011644_1, VkglTestCase_011644_2);

#define VkglTestCase_011645_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011645_2 "_func.reverse_subtract_one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011645, VkglTestCase_011645_1, VkglTestCase_011645_2);

#define VkglTestCase_011646_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011646_2 "c_dst_func.reverse_subtract_one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011646, VkglTestCase_011646_1, VkglTestCase_011646_2);

#define VkglTestCase_011647_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011647_2 "_func.reverse_subtract_one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011647, VkglTestCase_011647_1, VkglTestCase_011647_2);

#define VkglTestCase_011648_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011648_2 "c_dst_func.reverse_subtract_one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011648, VkglTestCase_011648_1, VkglTestCase_011648_2);

#define VkglTestCase_011649_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011649_2 "_func.reverse_subtract_one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011649, VkglTestCase_011649_1, VkglTestCase_011649_2);

#define VkglTestCase_011650_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011650_2 "c_dst_func.reverse_subtract_one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011650, VkglTestCase_011650_1, VkglTestCase_011650_2);

#define VkglTestCase_011651_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011651_2 "_func.reverse_subtract_one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011651, VkglTestCase_011651_1, VkglTestCase_011651_2);

#define VkglTestCase_011652_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011652_2 "dst_func.reverse_subtract_one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011652, VkglTestCase_011652_1, VkglTestCase_011652_2);

#define VkglTestCase_011653_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011653_2 "unc.reverse_subtract_one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011653, VkglTestCase_011653_1, VkglTestCase_011653_2);

#define VkglTestCase_011654_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011654_2 "dst_func.reverse_subtract_one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011654, VkglTestCase_011654_1, VkglTestCase_011654_2);

#define VkglTestCase_011655_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011655_2 "unc.reverse_subtract_one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011655, VkglTestCase_011655_1, VkglTestCase_011655_2);

#define VkglTestCase_011656_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011656_2 "_src_func_dst_func.reverse_subtract_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011656, VkglTestCase_011656_1, VkglTestCase_011656_2);

#define VkglTestCase_011657_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011657_2 "_src_func_dst_func.reverse_subtract_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011657, VkglTestCase_011657_1, VkglTestCase_011657_2);

#define VkglTestCase_011658_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011658_2 "c_func_dst_func.reverse_subtract_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011658, VkglTestCase_011658_1, VkglTestCase_011658_2);

#define VkglTestCase_011659_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011659_2 "c_dst_func.reverse_subtract_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011659, VkglTestCase_011659_1, VkglTestCase_011659_2);

#define VkglTestCase_011660_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011660_2 "c_func_dst_func.reverse_subtract_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011660, VkglTestCase_011660_1, VkglTestCase_011660_2);

#define VkglTestCase_011661_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011661_2 "c_dst_func.reverse_subtract_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011661, VkglTestCase_011661_1, VkglTestCase_011661_2);

#define VkglTestCase_011662_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011662_2 "c_func_dst_func.reverse_subtract_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011662, VkglTestCase_011662_1, VkglTestCase_011662_2);

#define VkglTestCase_011663_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011663_2 "c_dst_func.reverse_subtract_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011663, VkglTestCase_011663_1, VkglTestCase_011663_2);

#define VkglTestCase_011664_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011664_2 "c_func_dst_func.reverse_subtract_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011664, VkglTestCase_011664_1, VkglTestCase_011664_2);

#define VkglTestCase_011665_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011665_2 "c_dst_func.reverse_subtract_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011665, VkglTestCase_011665_1, VkglTestCase_011665_2);

#define VkglTestCase_011666_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011666_2 "func_dst_func.reverse_subtract_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011666, VkglTestCase_011666_1, VkglTestCase_011666_2);

#define VkglTestCase_011667_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011667_2 "dst_func.reverse_subtract_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011667, VkglTestCase_011667_1, VkglTestCase_011667_2);

#define VkglTestCase_011668_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011668_2 "func_dst_func.reverse_subtract_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011668, VkglTestCase_011668_1, VkglTestCase_011668_2);

#define VkglTestCase_011669_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011669_2 "dst_func.reverse_subtract_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011669, VkglTestCase_011669_1, VkglTestCase_011669_2);

#define VkglTestCase_011670_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011670_2 "func_dst_func.reverse_subtract_one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011670, VkglTestCase_011670_1, VkglTestCase_011670_2);

#define VkglTestCase_011671_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011671_2 "func_dst_func.reverse_subtract_one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011671, VkglTestCase_011671_1, VkglTestCase_011671_2);

#define VkglTestCase_011672_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011672_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011672, VkglTestCase_011672_1, VkglTestCase_011672_2);

#define VkglTestCase_011673_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011673_2 "_func.reverse_subtract_one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011673, VkglTestCase_011673_1, VkglTestCase_011673_2);

#define VkglTestCase_011674_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011674_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011674, VkglTestCase_011674_1, VkglTestCase_011674_2);

#define VkglTestCase_011675_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011675_2 "_func.reverse_subtract_one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011675, VkglTestCase_011675_1, VkglTestCase_011675_2);

#define VkglTestCase_011676_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011676_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011676, VkglTestCase_011676_1, VkglTestCase_011676_2);

#define VkglTestCase_011677_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011677_2 "_func.reverse_subtract_one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011677, VkglTestCase_011677_1, VkglTestCase_011677_2);

#define VkglTestCase_011678_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011678_2 "c_dst_func.reverse_subtract_one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011678, VkglTestCase_011678_1, VkglTestCase_011678_2);

#define VkglTestCase_011679_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011679_2 "_func.reverse_subtract_one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011679, VkglTestCase_011679_1, VkglTestCase_011679_2);

#define VkglTestCase_011680_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011680_2 "dst_func.reverse_subtract_one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011680, VkglTestCase_011680_1, VkglTestCase_011680_2);

#define VkglTestCase_011681_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011681_2 "unc.reverse_subtract_one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011681, VkglTestCase_011681_1, VkglTestCase_011681_2);

#define VkglTestCase_011682_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011682_2 "dst_func.reverse_subtract_one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011682, VkglTestCase_011682_1, VkglTestCase_011682_2);

#define VkglTestCase_011683_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011683_2 "unc.reverse_subtract_one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011683, VkglTestCase_011683_1, VkglTestCase_011683_2);

#define VkglTestCase_011684_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011684_2 "_src_func_dst_func.reverse_subtract_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011684, VkglTestCase_011684_1, VkglTestCase_011684_2);

#define VkglTestCase_011685_1 "dEQP-GLES2.functional.fragment_ops.blend.equation"
#define VkglTestCase_011685_2 "_src_func_dst_func.reverse_subtract_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011685, VkglTestCase_011685_1, VkglTestCase_011685_2);

#define VkglTestCase_011686_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011686_2 "c_func_dst_func.reverse_subtract_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011686, VkglTestCase_011686_1, VkglTestCase_011686_2);

#define VkglTestCase_011687_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011687_2 "c_dst_func.reverse_subtract_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011687, VkglTestCase_011687_1, VkglTestCase_011687_2);

#define VkglTestCase_011688_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011688_2 "c_func_dst_func.reverse_subtract_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011688, VkglTestCase_011688_1, VkglTestCase_011688_2);

#define VkglTestCase_011689_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011689_2 "c_dst_func.reverse_subtract_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011689, VkglTestCase_011689_1, VkglTestCase_011689_2);

#define VkglTestCase_011690_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011690_2 "c_func_dst_func.reverse_subtract_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011690, VkglTestCase_011690_1, VkglTestCase_011690_2);

#define VkglTestCase_011691_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011691_2 "c_dst_func.reverse_subtract_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011691, VkglTestCase_011691_1, VkglTestCase_011691_2);

#define VkglTestCase_011692_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011692_2 "c_func_dst_func.reverse_subtract_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011692, VkglTestCase_011692_1, VkglTestCase_011692_2);

#define VkglTestCase_011693_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011693_2 "c_dst_func.reverse_subtract_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011693, VkglTestCase_011693_1, VkglTestCase_011693_2);

#define VkglTestCase_011694_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011694_2 "func_dst_func.reverse_subtract_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011694, VkglTestCase_011694_1, VkglTestCase_011694_2);

#define VkglTestCase_011695_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011695_2 "dst_func.reverse_subtract_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011695, VkglTestCase_011695_1, VkglTestCase_011695_2);

#define VkglTestCase_011696_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011696_2 "func_dst_func.reverse_subtract_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011696, VkglTestCase_011696_1, VkglTestCase_011696_2);

#define VkglTestCase_011697_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011697_2 "dst_func.reverse_subtract_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011697, VkglTestCase_011697_1, VkglTestCase_011697_2);

#define VkglTestCase_011698_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011698_2 "func_dst_func.reverse_subtract_one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011698, VkglTestCase_011698_1, VkglTestCase_011698_2);

#define VkglTestCase_011699_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011699_2 "func_dst_func.reverse_subtract_one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011699, VkglTestCase_011699_1, VkglTestCase_011699_2);

#define VkglTestCase_011700_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011700_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011700, VkglTestCase_011700_1, VkglTestCase_011700_2);

#define VkglTestCase_011701_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011701_2 "_func.reverse_subtract_one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011701, VkglTestCase_011701_1, VkglTestCase_011701_2);

#define VkglTestCase_011702_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011702_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011702, VkglTestCase_011702_1, VkglTestCase_011702_2);

#define VkglTestCase_011703_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011703_2 "_func.reverse_subtract_one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011703, VkglTestCase_011703_1, VkglTestCase_011703_2);

#define VkglTestCase_011704_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011704_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011704, VkglTestCase_011704_1, VkglTestCase_011704_2);

#define VkglTestCase_011705_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011705_2 "_func.reverse_subtract_one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011705, VkglTestCase_011705_1, VkglTestCase_011705_2);

#define VkglTestCase_011706_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011706_2 "c_dst_func.reverse_subtract_one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011706, VkglTestCase_011706_1, VkglTestCase_011706_2);

#define VkglTestCase_011707_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011707_2 "_func.reverse_subtract_one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011707, VkglTestCase_011707_1, VkglTestCase_011707_2);

#define VkglTestCase_011708_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011708_2 "dst_func.reverse_subtract_one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011708, VkglTestCase_011708_1, VkglTestCase_011708_2);

#define VkglTestCase_011709_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011709_2 "unc.reverse_subtract_one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011709, VkglTestCase_011709_1, VkglTestCase_011709_2);

#define VkglTestCase_011710_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011710_2 "dst_func.reverse_subtract_one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011710, VkglTestCase_011710_1, VkglTestCase_011710_2);

#define VkglTestCase_011711_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011711_2 "unc.reverse_subtract_one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011711, VkglTestCase_011711_1, VkglTestCase_011711_2);

#define VkglTestCase_011712_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011712_2 "c_func_dst_func.reverse_subtract_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011712, VkglTestCase_011712_1, VkglTestCase_011712_2);

#define VkglTestCase_011713_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_s"
#define VkglTestCase_011713_2 "rc_func_dst_func.reverse_subtract_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011713, VkglTestCase_011713_1, VkglTestCase_011713_2);

#define VkglTestCase_011714_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011714_2 "func_dst_func.reverse_subtract_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011714, VkglTestCase_011714_1, VkglTestCase_011714_2);

#define VkglTestCase_011715_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011715_2 "dst_func.reverse_subtract_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011715, VkglTestCase_011715_1, VkglTestCase_011715_2);

#define VkglTestCase_011716_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011716_2 "func_dst_func.reverse_subtract_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011716, VkglTestCase_011716_1, VkglTestCase_011716_2);

#define VkglTestCase_011717_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011717_2 "dst_func.reverse_subtract_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011717, VkglTestCase_011717_1, VkglTestCase_011717_2);

#define VkglTestCase_011718_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011718_2 "func_dst_func.reverse_subtract_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011718, VkglTestCase_011718_1, VkglTestCase_011718_2);

#define VkglTestCase_011719_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011719_2 "dst_func.reverse_subtract_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011719, VkglTestCase_011719_1, VkglTestCase_011719_2);

#define VkglTestCase_011720_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011720_2 "func_dst_func.reverse_subtract_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011720, VkglTestCase_011720_1, VkglTestCase_011720_2);

#define VkglTestCase_011721_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011721_2 "dst_func.reverse_subtract_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011721, VkglTestCase_011721_1, VkglTestCase_011721_2);

#define VkglTestCase_011722_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011722_2 "c_dst_func.reverse_subtract_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011722, VkglTestCase_011722_1, VkglTestCase_011722_2);

#define VkglTestCase_011723_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011723_2 "_func.reverse_subtract_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011723, VkglTestCase_011723_1, VkglTestCase_011723_2);

#define VkglTestCase_011724_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011724_2 "c_dst_func.reverse_subtract_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011724, VkglTestCase_011724_1, VkglTestCase_011724_2);

#define VkglTestCase_011725_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011725_2 "_func.reverse_subtract_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011725, VkglTestCase_011725_1, VkglTestCase_011725_2);

#define VkglTestCase_011726_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011726_2 "c_dst_func.reverse_subtract_one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011726, VkglTestCase_011726_1, VkglTestCase_011726_2);

#define VkglTestCase_011727_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fu"
#define VkglTestCase_011727_2 "nc_dst_func.reverse_subtract_one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011727, VkglTestCase_011727_1, VkglTestCase_011727_2);

#define VkglTestCase_011728_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011728_2 "dst_func.reverse_subtract_one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011728, VkglTestCase_011728_1, VkglTestCase_011728_2);

#define VkglTestCase_011729_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011729_2 "unc.reverse_subtract_one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011729, VkglTestCase_011729_1, VkglTestCase_011729_2);

#define VkglTestCase_011730_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011730_2 "dst_func.reverse_subtract_one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011730, VkglTestCase_011730_1, VkglTestCase_011730_2);

#define VkglTestCase_011731_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011731_2 "unc.reverse_subtract_one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011731, VkglTestCase_011731_1, VkglTestCase_011731_2);

#define VkglTestCase_011732_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011732_2 "dst_func.reverse_subtract_one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011732, VkglTestCase_011732_1, VkglTestCase_011732_2);

#define VkglTestCase_011733_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011733_2 "unc.reverse_subtract_one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011733, VkglTestCase_011733_1, VkglTestCase_011733_2);

#define VkglTestCase_011734_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011734_2 "dst_func.reverse_subtract_one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011734, VkglTestCase_011734_1, VkglTestCase_011734_2);

#define VkglTestCase_011735_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011735_2 "unc.reverse_subtract_one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011735, VkglTestCase_011735_1, VkglTestCase_011735_2);

#define VkglTestCase_011736_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011736_2 "_func.reverse_subtract_one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011736, VkglTestCase_011736_1, VkglTestCase_011736_2);

#define VkglTestCase_011737_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_func"
#define VkglTestCase_011737_2 ".reverse_subtract_one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011737, VkglTestCase_011737_1, VkglTestCase_011737_2);

#define VkglTestCase_011738_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011738_2 "_func.reverse_subtract_one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011738, VkglTestCase_011738_1, VkglTestCase_011738_2);

#define VkglTestCase_011739_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_func"
#define VkglTestCase_011739_2 ".reverse_subtract_one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011739, VkglTestCase_011739_1, VkglTestCase_011739_2);

#define VkglTestCase_011740_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_sr"
#define VkglTestCase_011740_2 "c_func_dst_func.reverse_subtract_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011740, VkglTestCase_011740_1, VkglTestCase_011740_2);

#define VkglTestCase_011741_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_s"
#define VkglTestCase_011741_2 "rc_func_dst_func.reverse_subtract_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011741, VkglTestCase_011741_1, VkglTestCase_011741_2);

#define VkglTestCase_011742_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011742_2 "func_dst_func.reverse_subtract_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011742, VkglTestCase_011742_1, VkglTestCase_011742_2);

#define VkglTestCase_011743_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011743_2 "dst_func.reverse_subtract_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011743, VkglTestCase_011743_1, VkglTestCase_011743_2);

#define VkglTestCase_011744_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011744_2 "func_dst_func.reverse_subtract_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011744, VkglTestCase_011744_1, VkglTestCase_011744_2);

#define VkglTestCase_011745_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011745_2 "dst_func.reverse_subtract_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011745, VkglTestCase_011745_1, VkglTestCase_011745_2);

#define VkglTestCase_011746_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011746_2 "func_dst_func.reverse_subtract_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011746, VkglTestCase_011746_1, VkglTestCase_011746_2);

#define VkglTestCase_011747_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011747_2 "dst_func.reverse_subtract_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011747, VkglTestCase_011747_1, VkglTestCase_011747_2);

#define VkglTestCase_011748_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011748_2 "func_dst_func.reverse_subtract_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011748, VkglTestCase_011748_1, VkglTestCase_011748_2);

#define VkglTestCase_011749_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011749_2 "dst_func.reverse_subtract_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011749, VkglTestCase_011749_1, VkglTestCase_011749_2);

#define VkglTestCase_011750_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011750_2 "c_dst_func.reverse_subtract_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011750, VkglTestCase_011750_1, VkglTestCase_011750_2);

#define VkglTestCase_011751_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011751_2 "_func.reverse_subtract_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011751, VkglTestCase_011751_1, VkglTestCase_011751_2);

#define VkglTestCase_011752_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011752_2 "c_dst_func.reverse_subtract_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011752, VkglTestCase_011752_1, VkglTestCase_011752_2);

#define VkglTestCase_011753_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011753_2 "_func.reverse_subtract_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011753, VkglTestCase_011753_1, VkglTestCase_011753_2);

#define VkglTestCase_011754_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fun"
#define VkglTestCase_011754_2 "c_dst_func.reverse_subtract_one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011754, VkglTestCase_011754_1, VkglTestCase_011754_2);

#define VkglTestCase_011755_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fu"
#define VkglTestCase_011755_2 "nc_dst_func.reverse_subtract_one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011755, VkglTestCase_011755_1, VkglTestCase_011755_2);

#define VkglTestCase_011756_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011756_2 "dst_func.reverse_subtract_one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011756, VkglTestCase_011756_1, VkglTestCase_011756_2);

#define VkglTestCase_011757_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011757_2 "unc.reverse_subtract_one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011757, VkglTestCase_011757_1, VkglTestCase_011757_2);

#define VkglTestCase_011758_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011758_2 "dst_func.reverse_subtract_one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011758, VkglTestCase_011758_1, VkglTestCase_011758_2);

#define VkglTestCase_011759_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011759_2 "unc.reverse_subtract_one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011759, VkglTestCase_011759_1, VkglTestCase_011759_2);

#define VkglTestCase_011760_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011760_2 "dst_func.reverse_subtract_one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011760, VkglTestCase_011760_1, VkglTestCase_011760_2);

#define VkglTestCase_011761_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011761_2 "unc.reverse_subtract_one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011761, VkglTestCase_011761_1, VkglTestCase_011761_2);

#define VkglTestCase_011762_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011762_2 "dst_func.reverse_subtract_one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011762, VkglTestCase_011762_1, VkglTestCase_011762_2);

#define VkglTestCase_011763_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011763_2 "unc.reverse_subtract_one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011763, VkglTestCase_011763_1, VkglTestCase_011763_2);

#define VkglTestCase_011764_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011764_2 "_func.reverse_subtract_one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011764, VkglTestCase_011764_1, VkglTestCase_011764_2);

#define VkglTestCase_011765_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_func"
#define VkglTestCase_011765_2 ".reverse_subtract_one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011765, VkglTestCase_011765_1, VkglTestCase_011765_2);

#define VkglTestCase_011766_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst"
#define VkglTestCase_011766_2 "_func.reverse_subtract_one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011766, VkglTestCase_011766_1, VkglTestCase_011766_2);

#define VkglTestCase_011767_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_func"
#define VkglTestCase_011767_2 ".reverse_subtract_one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011767, VkglTestCase_011767_1, VkglTestCase_011767_2);

#define VkglTestCase_011768_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_"
#define VkglTestCase_011768_2 "func_dst_func.reverse_subtract_src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011768, VkglTestCase_011768_1, VkglTestCase_011768_2);

#define VkglTestCase_011769_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src"
#define VkglTestCase_011769_2 "_func_dst_func.reverse_subtract_src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011769, VkglTestCase_011769_1, VkglTestCase_011769_2);

#define VkglTestCase_011770_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fu"
#define VkglTestCase_011770_2 "nc_dst_func.reverse_subtract_src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011770, VkglTestCase_011770_1, VkglTestCase_011770_2);

#define VkglTestCase_011771_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_ds"
#define VkglTestCase_011771_2 "t_func.reverse_subtract_src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011771, VkglTestCase_011771_1, VkglTestCase_011771_2);

#define VkglTestCase_011772_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fu"
#define VkglTestCase_011772_2 "nc_dst_func.reverse_subtract_src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011772, VkglTestCase_011772_1, VkglTestCase_011772_2);

#define VkglTestCase_011773_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_ds"
#define VkglTestCase_011773_2 "t_func.reverse_subtract_src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011773, VkglTestCase_011773_1, VkglTestCase_011773_2);

#define VkglTestCase_011774_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fu"
#define VkglTestCase_011774_2 "nc_dst_func.reverse_subtract_src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011774, VkglTestCase_011774_1, VkglTestCase_011774_2);

#define VkglTestCase_011775_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_ds"
#define VkglTestCase_011775_2 "t_func.reverse_subtract_src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011775, VkglTestCase_011775_1, VkglTestCase_011775_2);

#define VkglTestCase_011776_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_fu"
#define VkglTestCase_011776_2 "nc_dst_func.reverse_subtract_src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011776, VkglTestCase_011776_1, VkglTestCase_011776_2);

#define VkglTestCase_011777_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_ds"
#define VkglTestCase_011777_2 "t_func.reverse_subtract_src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011777, VkglTestCase_011777_1, VkglTestCase_011777_2);

#define VkglTestCase_011778_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011778_2 "dst_func.reverse_subtract_src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011778, VkglTestCase_011778_1, VkglTestCase_011778_2);

#define VkglTestCase_011779_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011779_2 "unc.reverse_subtract_src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011779, VkglTestCase_011779_1, VkglTestCase_011779_2);

#define VkglTestCase_011780_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_"
#define VkglTestCase_011780_2 "dst_func.reverse_subtract_src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011780, VkglTestCase_011780_1, VkglTestCase_011780_2);

#define VkglTestCase_011781_1 "dEQP-GLES2.functional.fragment_ops.blend.equation_src_func_dst_f"
#define VkglTestCase_011781_2 "unc.reverse_subtract_src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011781, VkglTestCase_011781_1, VkglTestCase_011781_2);
