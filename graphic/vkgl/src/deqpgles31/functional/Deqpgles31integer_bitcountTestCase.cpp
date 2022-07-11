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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001665_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001665_2 "unctions.integer.bitcount.int_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001665, VkglTestCase_001665_1, VkglTestCase_001665_2);

#define VkglTestCase_001666_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001666_2 "nctions.integer.bitcount.int_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001666, VkglTestCase_001666_1, VkglTestCase_001666_2);

#define VkglTestCase_001667_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001667_2 "nctions.integer.bitcount.int_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001667, VkglTestCase_001667_1, VkglTestCase_001667_2);

#define VkglTestCase_001668_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001668_2 "tions.integer.bitcount.int_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001668, VkglTestCase_001668_1, VkglTestCase_001668_2);

#define VkglTestCase_001669_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001669_2 "ctions.integer.bitcount.int_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001669, VkglTestCase_001669_1, VkglTestCase_001669_2);

#define VkglTestCase_001670_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001670_2 "nctions.integer.bitcount.int_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001670, VkglTestCase_001670_1, VkglTestCase_001670_2);

#define VkglTestCase_001671_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001671_2 "ctions.integer.bitcount.int_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001671, VkglTestCase_001671_1, VkglTestCase_001671_2);

#define VkglTestCase_001672_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001672_2 "tions.integer.bitcount.int_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001672, VkglTestCase_001672_1, VkglTestCase_001672_2);

#define VkglTestCase_001673_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001673_2 "tions.integer.bitcount.int_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001673, VkglTestCase_001673_1, VkglTestCase_001673_2);

#define VkglTestCase_001674_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001674_2 "ons.integer.bitcount.int_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001674, VkglTestCase_001674_1, VkglTestCase_001674_2);

#define VkglTestCase_001675_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001675_2 "tions.integer.bitcount.int_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001675, VkglTestCase_001675_1, VkglTestCase_001675_2);

#define VkglTestCase_001676_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001676_2 "ctions.integer.bitcount.int_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001676, VkglTestCase_001676_1, VkglTestCase_001676_2);

#define VkglTestCase_001677_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001677_2 "nctions.integer.bitcount.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001677, VkglTestCase_001677_1, VkglTestCase_001677_2);

#define VkglTestCase_001678_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001678_2 "ctions.integer.bitcount.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001678, VkglTestCase_001678_1, VkglTestCase_001678_2);

#define VkglTestCase_001679_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001679_2 "ctions.integer.bitcount.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001679, VkglTestCase_001679_1, VkglTestCase_001679_2);

#define VkglTestCase_001680_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001680_2 "ions.integer.bitcount.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001680, VkglTestCase_001680_1, VkglTestCase_001680_2);

#define VkglTestCase_001681_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001681_2 "ctions.integer.bitcount.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001681, VkglTestCase_001681_1, VkglTestCase_001681_2);

#define VkglTestCase_001682_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001682_2 "nctions.integer.bitcount.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001682, VkglTestCase_001682_1, VkglTestCase_001682_2);

#define VkglTestCase_001683_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001683_2 "nctions.integer.bitcount.ivec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001683, VkglTestCase_001683_1, VkglTestCase_001683_2);

#define VkglTestCase_001684_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001684_2 "ctions.integer.bitcount.ivec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001684, VkglTestCase_001684_1, VkglTestCase_001684_2);

#define VkglTestCase_001685_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001685_2 "ctions.integer.bitcount.ivec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001685, VkglTestCase_001685_1, VkglTestCase_001685_2);

#define VkglTestCase_001686_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001686_2 "ions.integer.bitcount.ivec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001686, VkglTestCase_001686_1, VkglTestCase_001686_2);

#define VkglTestCase_001687_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001687_2 "tions.integer.bitcount.ivec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001687, VkglTestCase_001687_1, VkglTestCase_001687_2);

#define VkglTestCase_001688_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001688_2 "ctions.integer.bitcount.ivec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001688, VkglTestCase_001688_1, VkglTestCase_001688_2);

#define VkglTestCase_001689_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001689_2 "tions.integer.bitcount.ivec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001689, VkglTestCase_001689_1, VkglTestCase_001689_2);

#define VkglTestCase_001690_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001690_2 "ions.integer.bitcount.ivec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001690, VkglTestCase_001690_1, VkglTestCase_001690_2);

#define VkglTestCase_001691_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001691_2 "ions.integer.bitcount.ivec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001691, VkglTestCase_001691_1, VkglTestCase_001691_2);

#define VkglTestCase_001692_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001692_2 "ns.integer.bitcount.ivec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001692, VkglTestCase_001692_1, VkglTestCase_001692_2);

#define VkglTestCase_001693_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001693_2 "ions.integer.bitcount.ivec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001693, VkglTestCase_001693_1, VkglTestCase_001693_2);

#define VkglTestCase_001694_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001694_2 "tions.integer.bitcount.ivec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001694, VkglTestCase_001694_1, VkglTestCase_001694_2);

#define VkglTestCase_001695_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001695_2 "ctions.integer.bitcount.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001695, VkglTestCase_001695_1, VkglTestCase_001695_2);

#define VkglTestCase_001696_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001696_2 "tions.integer.bitcount.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001696, VkglTestCase_001696_1, VkglTestCase_001696_2);

#define VkglTestCase_001697_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001697_2 "tions.integer.bitcount.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001697, VkglTestCase_001697_1, VkglTestCase_001697_2);

#define VkglTestCase_001698_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001698_2 "ons.integer.bitcount.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001698, VkglTestCase_001698_1, VkglTestCase_001698_2);

#define VkglTestCase_001699_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001699_2 "tions.integer.bitcount.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001699, VkglTestCase_001699_1, VkglTestCase_001699_2);

#define VkglTestCase_001700_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001700_2 "ctions.integer.bitcount.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001700, VkglTestCase_001700_1, VkglTestCase_001700_2);

#define VkglTestCase_001701_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001701_2 "nctions.integer.bitcount.ivec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001701, VkglTestCase_001701_1, VkglTestCase_001701_2);

#define VkglTestCase_001702_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001702_2 "ctions.integer.bitcount.ivec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001702, VkglTestCase_001702_1, VkglTestCase_001702_2);

#define VkglTestCase_001703_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001703_2 "ctions.integer.bitcount.ivec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001703, VkglTestCase_001703_1, VkglTestCase_001703_2);

#define VkglTestCase_001704_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001704_2 "ions.integer.bitcount.ivec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001704, VkglTestCase_001704_1, VkglTestCase_001704_2);

#define VkglTestCase_001705_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001705_2 "tions.integer.bitcount.ivec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001705, VkglTestCase_001705_1, VkglTestCase_001705_2);

#define VkglTestCase_001706_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001706_2 "ctions.integer.bitcount.ivec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001706, VkglTestCase_001706_1, VkglTestCase_001706_2);

#define VkglTestCase_001707_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001707_2 "tions.integer.bitcount.ivec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001707, VkglTestCase_001707_1, VkglTestCase_001707_2);

#define VkglTestCase_001708_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001708_2 "ions.integer.bitcount.ivec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001708, VkglTestCase_001708_1, VkglTestCase_001708_2);

#define VkglTestCase_001709_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001709_2 "ions.integer.bitcount.ivec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001709, VkglTestCase_001709_1, VkglTestCase_001709_2);

#define VkglTestCase_001710_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001710_2 "ns.integer.bitcount.ivec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001710, VkglTestCase_001710_1, VkglTestCase_001710_2);

#define VkglTestCase_001711_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001711_2 "ions.integer.bitcount.ivec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001711, VkglTestCase_001711_1, VkglTestCase_001711_2);

#define VkglTestCase_001712_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001712_2 "tions.integer.bitcount.ivec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001712, VkglTestCase_001712_1, VkglTestCase_001712_2);

#define VkglTestCase_001713_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001713_2 "ctions.integer.bitcount.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001713, VkglTestCase_001713_1, VkglTestCase_001713_2);

#define VkglTestCase_001714_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001714_2 "tions.integer.bitcount.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001714, VkglTestCase_001714_1, VkglTestCase_001714_2);

#define VkglTestCase_001715_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001715_2 "tions.integer.bitcount.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001715, VkglTestCase_001715_1, VkglTestCase_001715_2);

#define VkglTestCase_001716_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001716_2 "ons.integer.bitcount.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001716, VkglTestCase_001716_1, VkglTestCase_001716_2);

#define VkglTestCase_001717_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001717_2 "tions.integer.bitcount.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001717, VkglTestCase_001717_1, VkglTestCase_001717_2);

#define VkglTestCase_001718_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001718_2 "ctions.integer.bitcount.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001718, VkglTestCase_001718_1, VkglTestCase_001718_2);

#define VkglTestCase_001719_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001719_2 "nctions.integer.bitcount.ivec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001719, VkglTestCase_001719_1, VkglTestCase_001719_2);

#define VkglTestCase_001720_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001720_2 "ctions.integer.bitcount.ivec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001720, VkglTestCase_001720_1, VkglTestCase_001720_2);

#define VkglTestCase_001721_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001721_2 "ctions.integer.bitcount.ivec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001721, VkglTestCase_001721_1, VkglTestCase_001721_2);

#define VkglTestCase_001722_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001722_2 "ions.integer.bitcount.ivec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001722, VkglTestCase_001722_1, VkglTestCase_001722_2);

#define VkglTestCase_001723_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001723_2 "tions.integer.bitcount.ivec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001723, VkglTestCase_001723_1, VkglTestCase_001723_2);

#define VkglTestCase_001724_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001724_2 "ctions.integer.bitcount.ivec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001724, VkglTestCase_001724_1, VkglTestCase_001724_2);

#define VkglTestCase_001725_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001725_2 "tions.integer.bitcount.ivec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001725, VkglTestCase_001725_1, VkglTestCase_001725_2);

#define VkglTestCase_001726_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001726_2 "ions.integer.bitcount.ivec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001726, VkglTestCase_001726_1, VkglTestCase_001726_2);

#define VkglTestCase_001727_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001727_2 "ions.integer.bitcount.ivec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001727, VkglTestCase_001727_1, VkglTestCase_001727_2);

#define VkglTestCase_001728_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001728_2 "ns.integer.bitcount.ivec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001728, VkglTestCase_001728_1, VkglTestCase_001728_2);

#define VkglTestCase_001729_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001729_2 "ions.integer.bitcount.ivec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001729, VkglTestCase_001729_1, VkglTestCase_001729_2);

#define VkglTestCase_001730_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001730_2 "tions.integer.bitcount.ivec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001730, VkglTestCase_001730_1, VkglTestCase_001730_2);

#define VkglTestCase_001731_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001731_2 "ctions.integer.bitcount.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001731, VkglTestCase_001731_1, VkglTestCase_001731_2);

#define VkglTestCase_001732_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001732_2 "tions.integer.bitcount.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001732, VkglTestCase_001732_1, VkglTestCase_001732_2);

#define VkglTestCase_001733_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001733_2 "tions.integer.bitcount.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001733, VkglTestCase_001733_1, VkglTestCase_001733_2);

#define VkglTestCase_001734_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001734_2 "ons.integer.bitcount.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001734, VkglTestCase_001734_1, VkglTestCase_001734_2);

#define VkglTestCase_001735_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001735_2 "tions.integer.bitcount.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001735, VkglTestCase_001735_1, VkglTestCase_001735_2);

#define VkglTestCase_001736_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001736_2 "ctions.integer.bitcount.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001736, VkglTestCase_001736_1, VkglTestCase_001736_2);

#define VkglTestCase_001737_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001737_2 "nctions.integer.bitcount.uint_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001737, VkglTestCase_001737_1, VkglTestCase_001737_2);

#define VkglTestCase_001738_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001738_2 "ctions.integer.bitcount.uint_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001738, VkglTestCase_001738_1, VkglTestCase_001738_2);

#define VkglTestCase_001739_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001739_2 "ctions.integer.bitcount.uint_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001739, VkglTestCase_001739_1, VkglTestCase_001739_2);

#define VkglTestCase_001740_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001740_2 "ions.integer.bitcount.uint_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001740, VkglTestCase_001740_1, VkglTestCase_001740_2);

#define VkglTestCase_001741_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001741_2 "ctions.integer.bitcount.uint_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001741, VkglTestCase_001741_1, VkglTestCase_001741_2);

#define VkglTestCase_001742_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001742_2 "nctions.integer.bitcount.uint_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001742, VkglTestCase_001742_1, VkglTestCase_001742_2);

#define VkglTestCase_001743_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001743_2 "ctions.integer.bitcount.uint_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001743, VkglTestCase_001743_1, VkglTestCase_001743_2);

#define VkglTestCase_001744_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001744_2 "tions.integer.bitcount.uint_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001744, VkglTestCase_001744_1, VkglTestCase_001744_2);

#define VkglTestCase_001745_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001745_2 "tions.integer.bitcount.uint_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001745, VkglTestCase_001745_1, VkglTestCase_001745_2);

#define VkglTestCase_001746_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001746_2 "ons.integer.bitcount.uint_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001746, VkglTestCase_001746_1, VkglTestCase_001746_2);

#define VkglTestCase_001747_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001747_2 "ions.integer.bitcount.uint_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001747, VkglTestCase_001747_1, VkglTestCase_001747_2);

#define VkglTestCase_001748_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001748_2 "tions.integer.bitcount.uint_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001748, VkglTestCase_001748_1, VkglTestCase_001748_2);

#define VkglTestCase_001749_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001749_2 "nctions.integer.bitcount.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001749, VkglTestCase_001749_1, VkglTestCase_001749_2);

#define VkglTestCase_001750_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001750_2 "ctions.integer.bitcount.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001750, VkglTestCase_001750_1, VkglTestCase_001750_2);

#define VkglTestCase_001751_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001751_2 "ctions.integer.bitcount.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001751, VkglTestCase_001751_1, VkglTestCase_001751_2);

#define VkglTestCase_001752_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001752_2 "ions.integer.bitcount.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001752, VkglTestCase_001752_1, VkglTestCase_001752_2);

#define VkglTestCase_001753_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001753_2 "tions.integer.bitcount.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001753, VkglTestCase_001753_1, VkglTestCase_001753_2);

#define VkglTestCase_001754_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001754_2 "ctions.integer.bitcount.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001754, VkglTestCase_001754_1, VkglTestCase_001754_2);

#define VkglTestCase_001755_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001755_2 "nctions.integer.bitcount.uvec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001755, VkglTestCase_001755_1, VkglTestCase_001755_2);

#define VkglTestCase_001756_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001756_2 "ctions.integer.bitcount.uvec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001756, VkglTestCase_001756_1, VkglTestCase_001756_2);

#define VkglTestCase_001757_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001757_2 "ctions.integer.bitcount.uvec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001757, VkglTestCase_001757_1, VkglTestCase_001757_2);

#define VkglTestCase_001758_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001758_2 "ions.integer.bitcount.uvec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001758, VkglTestCase_001758_1, VkglTestCase_001758_2);

#define VkglTestCase_001759_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001759_2 "tions.integer.bitcount.uvec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001759, VkglTestCase_001759_1, VkglTestCase_001759_2);

#define VkglTestCase_001760_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001760_2 "ctions.integer.bitcount.uvec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001760, VkglTestCase_001760_1, VkglTestCase_001760_2);

#define VkglTestCase_001761_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001761_2 "tions.integer.bitcount.uvec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001761, VkglTestCase_001761_1, VkglTestCase_001761_2);

#define VkglTestCase_001762_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001762_2 "ions.integer.bitcount.uvec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001762, VkglTestCase_001762_1, VkglTestCase_001762_2);

#define VkglTestCase_001763_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001763_2 "ions.integer.bitcount.uvec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001763, VkglTestCase_001763_1, VkglTestCase_001763_2);

#define VkglTestCase_001764_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001764_2 "ns.integer.bitcount.uvec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001764, VkglTestCase_001764_1, VkglTestCase_001764_2);

#define VkglTestCase_001765_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001765_2 "ions.integer.bitcount.uvec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001765, VkglTestCase_001765_1, VkglTestCase_001765_2);

#define VkglTestCase_001766_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001766_2 "tions.integer.bitcount.uvec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001766, VkglTestCase_001766_1, VkglTestCase_001766_2);

#define VkglTestCase_001767_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001767_2 "ctions.integer.bitcount.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001767, VkglTestCase_001767_1, VkglTestCase_001767_2);

#define VkglTestCase_001768_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001768_2 "tions.integer.bitcount.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001768, VkglTestCase_001768_1, VkglTestCase_001768_2);

#define VkglTestCase_001769_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001769_2 "tions.integer.bitcount.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001769, VkglTestCase_001769_1, VkglTestCase_001769_2);

#define VkglTestCase_001770_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001770_2 "ons.integer.bitcount.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001770, VkglTestCase_001770_1, VkglTestCase_001770_2);

#define VkglTestCase_001771_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001771_2 "tions.integer.bitcount.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001771, VkglTestCase_001771_1, VkglTestCase_001771_2);

#define VkglTestCase_001772_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001772_2 "ctions.integer.bitcount.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001772, VkglTestCase_001772_1, VkglTestCase_001772_2);

#define VkglTestCase_001773_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001773_2 "nctions.integer.bitcount.uvec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001773, VkglTestCase_001773_1, VkglTestCase_001773_2);

#define VkglTestCase_001774_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001774_2 "ctions.integer.bitcount.uvec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001774, VkglTestCase_001774_1, VkglTestCase_001774_2);

#define VkglTestCase_001775_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001775_2 "ctions.integer.bitcount.uvec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001775, VkglTestCase_001775_1, VkglTestCase_001775_2);

#define VkglTestCase_001776_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001776_2 "ions.integer.bitcount.uvec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001776, VkglTestCase_001776_1, VkglTestCase_001776_2);

#define VkglTestCase_001777_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001777_2 "tions.integer.bitcount.uvec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001777, VkglTestCase_001777_1, VkglTestCase_001777_2);

#define VkglTestCase_001778_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001778_2 "ctions.integer.bitcount.uvec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001778, VkglTestCase_001778_1, VkglTestCase_001778_2);

#define VkglTestCase_001779_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001779_2 "tions.integer.bitcount.uvec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001779, VkglTestCase_001779_1, VkglTestCase_001779_2);

#define VkglTestCase_001780_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001780_2 "ions.integer.bitcount.uvec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001780, VkglTestCase_001780_1, VkglTestCase_001780_2);

#define VkglTestCase_001781_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001781_2 "ions.integer.bitcount.uvec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001781, VkglTestCase_001781_1, VkglTestCase_001781_2);

#define VkglTestCase_001782_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001782_2 "ns.integer.bitcount.uvec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001782, VkglTestCase_001782_1, VkglTestCase_001782_2);

#define VkglTestCase_001783_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001783_2 "ions.integer.bitcount.uvec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001783, VkglTestCase_001783_1, VkglTestCase_001783_2);

#define VkglTestCase_001784_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001784_2 "tions.integer.bitcount.uvec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001784, VkglTestCase_001784_1, VkglTestCase_001784_2);

#define VkglTestCase_001785_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001785_2 "ctions.integer.bitcount.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001785, VkglTestCase_001785_1, VkglTestCase_001785_2);

#define VkglTestCase_001786_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001786_2 "tions.integer.bitcount.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001786, VkglTestCase_001786_1, VkglTestCase_001786_2);

#define VkglTestCase_001787_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001787_2 "tions.integer.bitcount.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001787, VkglTestCase_001787_1, VkglTestCase_001787_2);

#define VkglTestCase_001788_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001788_2 "ons.integer.bitcount.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001788, VkglTestCase_001788_1, VkglTestCase_001788_2);

#define VkglTestCase_001789_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001789_2 "tions.integer.bitcount.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001789, VkglTestCase_001789_1, VkglTestCase_001789_2);

#define VkglTestCase_001790_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001790_2 "ctions.integer.bitcount.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001790, VkglTestCase_001790_1, VkglTestCase_001790_2);

#define VkglTestCase_001791_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001791_2 "nctions.integer.bitcount.uvec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001791, VkglTestCase_001791_1, VkglTestCase_001791_2);

#define VkglTestCase_001792_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001792_2 "ctions.integer.bitcount.uvec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001792, VkglTestCase_001792_1, VkglTestCase_001792_2);

#define VkglTestCase_001793_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001793_2 "ctions.integer.bitcount.uvec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001793, VkglTestCase_001793_1, VkglTestCase_001793_2);

#define VkglTestCase_001794_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001794_2 "ions.integer.bitcount.uvec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001794, VkglTestCase_001794_1, VkglTestCase_001794_2);

#define VkglTestCase_001795_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001795_2 "tions.integer.bitcount.uvec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001795, VkglTestCase_001795_1, VkglTestCase_001795_2);

#define VkglTestCase_001796_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001796_2 "ctions.integer.bitcount.uvec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001796, VkglTestCase_001796_1, VkglTestCase_001796_2);

#define VkglTestCase_001797_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001797_2 "tions.integer.bitcount.uvec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001797, VkglTestCase_001797_1, VkglTestCase_001797_2);

#define VkglTestCase_001798_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001798_2 "ions.integer.bitcount.uvec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001798, VkglTestCase_001798_1, VkglTestCase_001798_2);

#define VkglTestCase_001799_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001799_2 "ions.integer.bitcount.uvec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001799, VkglTestCase_001799_1, VkglTestCase_001799_2);

#define VkglTestCase_001800_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001800_2 "ns.integer.bitcount.uvec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001800, VkglTestCase_001800_1, VkglTestCase_001800_2);

#define VkglTestCase_001801_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001801_2 "ions.integer.bitcount.uvec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001801, VkglTestCase_001801_1, VkglTestCase_001801_2);

#define VkglTestCase_001802_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001802_2 "tions.integer.bitcount.uvec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001802, VkglTestCase_001802_1, VkglTestCase_001802_2);

#define VkglTestCase_001803_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001803_2 "ctions.integer.bitcount.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001803, VkglTestCase_001803_1, VkglTestCase_001803_2);

#define VkglTestCase_001804_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001804_2 "tions.integer.bitcount.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001804, VkglTestCase_001804_1, VkglTestCase_001804_2);

#define VkglTestCase_001805_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001805_2 "tions.integer.bitcount.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001805, VkglTestCase_001805_1, VkglTestCase_001805_2);

#define VkglTestCase_001806_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001806_2 "ons.integer.bitcount.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001806, VkglTestCase_001806_1, VkglTestCase_001806_2);

#define VkglTestCase_001807_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001807_2 "tions.integer.bitcount.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001807, VkglTestCase_001807_1, VkglTestCase_001807_2);

#define VkglTestCase_001808_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001808_2 "ctions.integer.bitcount.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001808, VkglTestCase_001808_1, VkglTestCase_001808_2);
