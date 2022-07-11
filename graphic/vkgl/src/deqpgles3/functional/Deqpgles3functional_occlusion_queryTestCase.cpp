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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039864_1 "dEQP-GLES3.functional."
#define VkglTestCase_039864_2 "occlusion_query.scissor"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039864, VkglTestCase_039864_1, VkglTestCase_039864_2);

#define VkglTestCase_039865_1 "dEQP-GLES3.functional.oc"
#define VkglTestCase_039865_2 "clusion_query.depth_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039865, VkglTestCase_039865_1, VkglTestCase_039865_2);

#define VkglTestCase_039866_1 "dEQP-GLES3.functional.oc"
#define VkglTestCase_039866_2 "clusion_query.depth_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039866, VkglTestCase_039866_1, VkglTestCase_039866_2);

#define VkglTestCase_039867_1 "dEQP-GLES3.functional.occ"
#define VkglTestCase_039867_2 "lusion_query.stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039867, VkglTestCase_039867_1, VkglTestCase_039867_2);

#define VkglTestCase_039868_1 "dEQP-GLES3.functional.occ"
#define VkglTestCase_039868_2 "lusion_query.stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039868, VkglTestCase_039868_1, VkglTestCase_039868_2);

#define VkglTestCase_039869_1 "dEQP-GLES3.functional.occlus"
#define VkglTestCase_039869_2 "ion_query.scissor_depth_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039869, VkglTestCase_039869_1, VkglTestCase_039869_2);

#define VkglTestCase_039870_1 "dEQP-GLES3.functional.occlus"
#define VkglTestCase_039870_2 "ion_query.scissor_depth_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039870, VkglTestCase_039870_1, VkglTestCase_039870_2);

#define VkglTestCase_039871_1 "dEQP-GLES3.functional.occlusi"
#define VkglTestCase_039871_2 "on_query.scissor_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039871, VkglTestCase_039871_1, VkglTestCase_039871_2);

#define VkglTestCase_039872_1 "dEQP-GLES3.functional.occlusi"
#define VkglTestCase_039872_2 "on_query.scissor_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039872, VkglTestCase_039872_1, VkglTestCase_039872_2);

#define VkglTestCase_039873_1 "dEQP-GLES3.functional.occlusio"
#define VkglTestCase_039873_2 "n_query.depth_write_depth_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039873, VkglTestCase_039873_1, VkglTestCase_039873_2);

#define VkglTestCase_039874_1 "dEQP-GLES3.functional.occlusion"
#define VkglTestCase_039874_2 "_query.depth_write_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039874, VkglTestCase_039874_1, VkglTestCase_039874_2);

#define VkglTestCase_039875_1 "dEQP-GLES3.functional.occlusion"
#define VkglTestCase_039875_2 "_query.depth_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039875, VkglTestCase_039875_1, VkglTestCase_039875_2);

#define VkglTestCase_039876_1 "dEQP-GLES3.functional.occlusion"
#define VkglTestCase_039876_2 "_query.depth_clear_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039876, VkglTestCase_039876_1, VkglTestCase_039876_2);

#define VkglTestCase_039877_1 "dEQP-GLES3.functional.occlusion"
#define VkglTestCase_039877_2 "_query.depth_clear_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039877, VkglTestCase_039877_1, VkglTestCase_039877_2);

#define VkglTestCase_039878_1 "dEQP-GLES3.functional.occlusion_"
#define VkglTestCase_039878_2 "query.stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039878, VkglTestCase_039878_1, VkglTestCase_039878_2);

#define VkglTestCase_039879_1 "dEQP-GLES3.functional.occlusion_qu"
#define VkglTestCase_039879_2 "ery.scissor_depth_write_depth_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039879, VkglTestCase_039879_1, VkglTestCase_039879_2);

#define VkglTestCase_039880_1 "dEQP-GLES3.functional.occlusion_que"
#define VkglTestCase_039880_2 "ry.scissor_depth_write_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039880, VkglTestCase_039880_1, VkglTestCase_039880_2);

#define VkglTestCase_039881_1 "dEQP-GLES3.functional.occlusion_que"
#define VkglTestCase_039881_2 "ry.scissor_depth_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039881, VkglTestCase_039881_1, VkglTestCase_039881_2);

#define VkglTestCase_039882_1 "dEQP-GLES3.functional.occlusion_que"
#define VkglTestCase_039882_2 "ry.scissor_depth_clear_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039882, VkglTestCase_039882_1, VkglTestCase_039882_2);

#define VkglTestCase_039883_1 "dEQP-GLES3.functional.occlusion_que"
#define VkglTestCase_039883_2 "ry.scissor_depth_clear_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039883, VkglTestCase_039883_1, VkglTestCase_039883_2);

#define VkglTestCase_039884_1 "dEQP-GLES3.functional.occlusion_quer"
#define VkglTestCase_039884_2 "y.scissor_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039884, VkglTestCase_039884_1, VkglTestCase_039884_2);

#define VkglTestCase_039885_1 "dEQP-GLES3.functional.occlusion_query"
#define VkglTestCase_039885_2 ".depth_write_depth_clear_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039885, VkglTestCase_039885_1, VkglTestCase_039885_2);

#define VkglTestCase_039886_1 "dEQP-GLES3.functional.occlusion_query"
#define VkglTestCase_039886_2 ".depth_write_depth_clear_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039886, VkglTestCase_039886_1, VkglTestCase_039886_2);

#define VkglTestCase_039887_1 "dEQP-GLES3.functional.occlusion_query."
#define VkglTestCase_039887_2 "depth_write_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039887, VkglTestCase_039887_1, VkglTestCase_039887_2);

#define VkglTestCase_039888_1 "dEQP-GLES3.functional.occlusion_query."
#define VkglTestCase_039888_2 "depth_clear_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039888, VkglTestCase_039888_1, VkglTestCase_039888_2);

#define VkglTestCase_039889_1 "dEQP-GLES3.functional.occlusion_query.sci"
#define VkglTestCase_039889_2 "ssor_depth_write_depth_clear_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039889, VkglTestCase_039889_1, VkglTestCase_039889_2);

#define VkglTestCase_039890_1 "dEQP-GLES3.functional.occlusion_query.sci"
#define VkglTestCase_039890_2 "ssor_depth_write_depth_clear_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039890, VkglTestCase_039890_1, VkglTestCase_039890_2);

#define VkglTestCase_039891_1 "dEQP-GLES3.functional.occlusion_query.scis"
#define VkglTestCase_039891_2 "sor_depth_write_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039891, VkglTestCase_039891_1, VkglTestCase_039891_2);

#define VkglTestCase_039892_1 "dEQP-GLES3.functional.occlusion_query.scis"
#define VkglTestCase_039892_2 "sor_depth_clear_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039892, VkglTestCase_039892_1, VkglTestCase_039892_2);

#define VkglTestCase_039893_1 "dEQP-GLES3.functional.occlusion_query.depth_"
#define VkglTestCase_039893_2 "write_depth_clear_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039893, VkglTestCase_039893_1, VkglTestCase_039893_2);

#define VkglTestCase_039894_1 "dEQP-GLES3.functional.occ"
#define VkglTestCase_039894_2 "lusion_query.all_occluders"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039894, VkglTestCase_039894_1, VkglTestCase_039894_2);

#define VkglTestCase_039895_1 "dEQP-GLES3.functional.occlusi"
#define VkglTestCase_039895_2 "on_query.conservative_scissor"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039895, VkglTestCase_039895_1, VkglTestCase_039895_2);

#define VkglTestCase_039896_1 "dEQP-GLES3.functional.occlusion"
#define VkglTestCase_039896_2 "_query.conservative_depth_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039896, VkglTestCase_039896_1, VkglTestCase_039896_2);

#define VkglTestCase_039897_1 "dEQP-GLES3.functional.occlusion"
#define VkglTestCase_039897_2 "_query.conservative_depth_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039897, VkglTestCase_039897_1, VkglTestCase_039897_2);

#define VkglTestCase_039898_1 "dEQP-GLES3.functional.occlusion_"
#define VkglTestCase_039898_2 "query.conservative_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039898, VkglTestCase_039898_1, VkglTestCase_039898_2);

#define VkglTestCase_039899_1 "dEQP-GLES3.functional.occlusion_"
#define VkglTestCase_039899_2 "query.conservative_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039899, VkglTestCase_039899_1, VkglTestCase_039899_2);

#define VkglTestCase_039900_1 "dEQP-GLES3.functional.occlusion_que"
#define VkglTestCase_039900_2 "ry.conservative_scissor_depth_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039900, VkglTestCase_039900_1, VkglTestCase_039900_2);

#define VkglTestCase_039901_1 "dEQP-GLES3.functional.occlusion_que"
#define VkglTestCase_039901_2 "ry.conservative_scissor_depth_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039901, VkglTestCase_039901_1, VkglTestCase_039901_2);

#define VkglTestCase_039902_1 "dEQP-GLES3.functional.occlusion_quer"
#define VkglTestCase_039902_2 "y.conservative_scissor_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039902, VkglTestCase_039902_1, VkglTestCase_039902_2);

#define VkglTestCase_039903_1 "dEQP-GLES3.functional.occlusion_quer"
#define VkglTestCase_039903_2 "y.conservative_scissor_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039903, VkglTestCase_039903_1, VkglTestCase_039903_2);

#define VkglTestCase_039904_1 "dEQP-GLES3.functional.occlusion_query"
#define VkglTestCase_039904_2 ".conservative_depth_write_depth_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039904, VkglTestCase_039904_1, VkglTestCase_039904_2);

#define VkglTestCase_039905_1 "dEQP-GLES3.functional.occlusion_query."
#define VkglTestCase_039905_2 "conservative_depth_write_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039905, VkglTestCase_039905_1, VkglTestCase_039905_2);

#define VkglTestCase_039906_1 "dEQP-GLES3.functional.occlusion_query."
#define VkglTestCase_039906_2 "conservative_depth_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039906, VkglTestCase_039906_1, VkglTestCase_039906_2);

#define VkglTestCase_039907_1 "dEQP-GLES3.functional.occlusion_query."
#define VkglTestCase_039907_2 "conservative_depth_clear_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039907, VkglTestCase_039907_1, VkglTestCase_039907_2);

#define VkglTestCase_039908_1 "dEQP-GLES3.functional.occlusion_query."
#define VkglTestCase_039908_2 "conservative_depth_clear_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039908, VkglTestCase_039908_1, VkglTestCase_039908_2);

#define VkglTestCase_039909_1 "dEQP-GLES3.functional.occlusion_query.c"
#define VkglTestCase_039909_2 "onservative_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039909, VkglTestCase_039909_1, VkglTestCase_039909_2);

#define VkglTestCase_039910_1 "dEQP-GLES3.functional.occlusion_query.con"
#define VkglTestCase_039910_2 "servative_scissor_depth_write_depth_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039910, VkglTestCase_039910_1, VkglTestCase_039910_2);

#define VkglTestCase_039911_1 "dEQP-GLES3.functional.occlusion_query.cons"
#define VkglTestCase_039911_2 "ervative_scissor_depth_write_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039911, VkglTestCase_039911_1, VkglTestCase_039911_2);

#define VkglTestCase_039912_1 "dEQP-GLES3.functional.occlusion_query.cons"
#define VkglTestCase_039912_2 "ervative_scissor_depth_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039912, VkglTestCase_039912_1, VkglTestCase_039912_2);

#define VkglTestCase_039913_1 "dEQP-GLES3.functional.occlusion_query.cons"
#define VkglTestCase_039913_2 "ervative_scissor_depth_clear_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039913, VkglTestCase_039913_1, VkglTestCase_039913_2);

#define VkglTestCase_039914_1 "dEQP-GLES3.functional.occlusion_query.cons"
#define VkglTestCase_039914_2 "ervative_scissor_depth_clear_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039914, VkglTestCase_039914_1, VkglTestCase_039914_2);

#define VkglTestCase_039915_1 "dEQP-GLES3.functional.occlusion_query.conse"
#define VkglTestCase_039915_2 "rvative_scissor_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039915, VkglTestCase_039915_1, VkglTestCase_039915_2);

#define VkglTestCase_039916_1 "dEQP-GLES3.functional.occlusion_query.conser"
#define VkglTestCase_039916_2 "vative_depth_write_depth_clear_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039916, VkglTestCase_039916_1, VkglTestCase_039916_2);

#define VkglTestCase_039917_1 "dEQP-GLES3.functional.occlusion_query.conser"
#define VkglTestCase_039917_2 "vative_depth_write_depth_clear_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039917, VkglTestCase_039917_1, VkglTestCase_039917_2);

#define VkglTestCase_039918_1 "dEQP-GLES3.functional.occlusion_query.conserv"
#define VkglTestCase_039918_2 "ative_depth_write_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039918, VkglTestCase_039918_1, VkglTestCase_039918_2);

#define VkglTestCase_039919_1 "dEQP-GLES3.functional.occlusion_query.conserv"
#define VkglTestCase_039919_2 "ative_depth_clear_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039919, VkglTestCase_039919_1, VkglTestCase_039919_2);

#define VkglTestCase_039920_1 "dEQP-GLES3.functional.occlusion_query.conservati"
#define VkglTestCase_039920_2 "ve_scissor_depth_write_depth_clear_stencil_write"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039920, VkglTestCase_039920_1, VkglTestCase_039920_2);

#define VkglTestCase_039921_1 "dEQP-GLES3.functional.occlusion_query.conservati"
#define VkglTestCase_039921_2 "ve_scissor_depth_write_depth_clear_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039921, VkglTestCase_039921_1, VkglTestCase_039921_2);

#define VkglTestCase_039922_1 "dEQP-GLES3.functional.occlusion_query.conservativ"
#define VkglTestCase_039922_2 "e_scissor_depth_write_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039922, VkglTestCase_039922_1, VkglTestCase_039922_2);

#define VkglTestCase_039923_1 "dEQP-GLES3.functional.occlusion_query.conservativ"
#define VkglTestCase_039923_2 "e_scissor_depth_clear_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039923, VkglTestCase_039923_1, VkglTestCase_039923_2);

#define VkglTestCase_039924_1 "dEQP-GLES3.functional.occlusion_query.conservative_"
#define VkglTestCase_039924_2 "depth_write_depth_clear_stencil_write_stencil_clear"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039924, VkglTestCase_039924_1, VkglTestCase_039924_2);

#define VkglTestCase_039925_1 "dEQP-GLES3.functional.occlusion_"
#define VkglTestCase_039925_2 "query.conservative_all_occluders"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039925, VkglTestCase_039925_1, VkglTestCase_039925_2);
