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
#include "../ActsDeqpgles30032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031878_1 "dEQP-GLES3.functional."
#define VkglTestCase_031878_2 "fbo.color.tex3d.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031878, VkglTestCase_031878_1, VkglTestCase_031878_2);

#define VkglTestCase_031879_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031879_2 "bo.color.tex3d.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031879, VkglTestCase_031879_1, VkglTestCase_031879_2);

#define VkglTestCase_031880_1 "dEQP-GLES3.functional."
#define VkglTestCase_031880_2 "fbo.color.tex3d.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031880, VkglTestCase_031880_1, VkglTestCase_031880_2);

#define VkglTestCase_031881_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031881_2 "bo.color.tex3d.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031881, VkglTestCase_031881_1, VkglTestCase_031881_2);

#define VkglTestCase_031882_1 "dEQP-GLES3.functional"
#define VkglTestCase_031882_2 ".fbo.color.tex3d.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031882, VkglTestCase_031882_1, VkglTestCase_031882_2);

#define VkglTestCase_031883_1 "dEQP-GLES3.functional."
#define VkglTestCase_031883_2 "fbo.color.tex3d.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031883, VkglTestCase_031883_1, VkglTestCase_031883_2);

#define VkglTestCase_031884_1 "dEQP-GLES3.functional."
#define VkglTestCase_031884_2 "fbo.color.tex3d.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031884, VkglTestCase_031884_1, VkglTestCase_031884_2);

#define VkglTestCase_031885_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031885_2 ".color.tex3d.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031885, VkglTestCase_031885_1, VkglTestCase_031885_2);

#define VkglTestCase_031886_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_031886_2 "bo.color.tex3d.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031886, VkglTestCase_031886_1, VkglTestCase_031886_2);

#define VkglTestCase_031887_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_031887_2 "o.color.tex3d.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031887, VkglTestCase_031887_1, VkglTestCase_031887_2);

#define VkglTestCase_031888_1 "dEQP-GLES3.functional"
#define VkglTestCase_031888_2 ".fbo.color.tex3d.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031888, VkglTestCase_031888_1, VkglTestCase_031888_2);

#define VkglTestCase_031889_1 "dEQP-GLES3.functional."
#define VkglTestCase_031889_2 "fbo.color.tex3d.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031889, VkglTestCase_031889_1, VkglTestCase_031889_2);

#define VkglTestCase_031890_1 "dEQP-GLES3.functional"
#define VkglTestCase_031890_2 ".fbo.color.tex3d.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031890, VkglTestCase_031890_1, VkglTestCase_031890_2);

#define VkglTestCase_031891_1 "dEQP-GLES3.functional."
#define VkglTestCase_031891_2 "fbo.color.tex3d.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031891, VkglTestCase_031891_1, VkglTestCase_031891_2);

#define VkglTestCase_031892_1 "dEQP-GLES3.functional"
#define VkglTestCase_031892_2 ".fbo.color.tex3d.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031892, VkglTestCase_031892_1, VkglTestCase_031892_2);

#define VkglTestCase_031893_1 "dEQP-GLES3.functional."
#define VkglTestCase_031893_2 "fbo.color.tex3d.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031893, VkglTestCase_031893_1, VkglTestCase_031893_2);

#define VkglTestCase_031894_1 "dEQP-GLES3.functional"
#define VkglTestCase_031894_2 ".fbo.color.tex3d.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031894, VkglTestCase_031894_1, VkglTestCase_031894_2);

#define VkglTestCase_031895_1 "dEQP-GLES3.functional."
#define VkglTestCase_031895_2 "fbo.color.tex3d.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031895, VkglTestCase_031895_1, VkglTestCase_031895_2);

#define VkglTestCase_031896_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031896_2 "l.fbo.color.tex3d.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031896, VkglTestCase_031896_1, VkglTestCase_031896_2);

#define VkglTestCase_031897_1 "dEQP-GLES3.functional"
#define VkglTestCase_031897_2 ".fbo.color.tex3d.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031897, VkglTestCase_031897_1, VkglTestCase_031897_2);

#define VkglTestCase_031898_1 "dEQP-GLES3.functional"
#define VkglTestCase_031898_2 ".fbo.color.tex3d.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031898, VkglTestCase_031898_1, VkglTestCase_031898_2);

#define VkglTestCase_031899_1 "dEQP-GLES3.functional"
#define VkglTestCase_031899_2 ".fbo.color.tex3d.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031899, VkglTestCase_031899_1, VkglTestCase_031899_2);

#define VkglTestCase_031900_1 "dEQP-GLES3.functional"
#define VkglTestCase_031900_2 ".fbo.color.tex3d.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031900, VkglTestCase_031900_1, VkglTestCase_031900_2);

#define VkglTestCase_031901_1 "dEQP-GLES3.functional"
#define VkglTestCase_031901_2 ".fbo.color.tex3d.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031901, VkglTestCase_031901_1, VkglTestCase_031901_2);

#define VkglTestCase_031902_1 "dEQP-GLES3.functional"
#define VkglTestCase_031902_2 ".fbo.color.tex3d.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031902, VkglTestCase_031902_1, VkglTestCase_031902_2);

#define VkglTestCase_031903_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031903_2 "l.fbo.color.tex3d.r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031903, VkglTestCase_031903_1, VkglTestCase_031903_2);

#define VkglTestCase_031904_1 "dEQP-GLES3.functiona"
#define VkglTestCase_031904_2 "l.fbo.color.tex3d.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031904, VkglTestCase_031904_1, VkglTestCase_031904_2);

#define VkglTestCase_031905_1 "dEQP-GLES3.functional"
#define VkglTestCase_031905_2 ".fbo.color.tex3d.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031905, VkglTestCase_031905_1, VkglTestCase_031905_2);

#define VkglTestCase_031906_1 "dEQP-GLES3.functional."
#define VkglTestCase_031906_2 "fbo.color.tex3d.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031906, VkglTestCase_031906_1, VkglTestCase_031906_2);

#define VkglTestCase_031907_1 "dEQP-GLES3.functional."
#define VkglTestCase_031907_2 "fbo.color.tex3d.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031907, VkglTestCase_031907_1, VkglTestCase_031907_2);

#define VkglTestCase_031908_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031908_2 "color.tex3d.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031908, VkglTestCase_031908_1, VkglTestCase_031908_2);

#define VkglTestCase_031909_1 "dEQP-GLES3.functional"
#define VkglTestCase_031909_2 ".fbo.color.tex3d.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031909, VkglTestCase_031909_1, VkglTestCase_031909_2);

#define VkglTestCase_031910_1 "dEQP-GLES3.functional"
#define VkglTestCase_031910_2 ".fbo.color.tex3d.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031910, VkglTestCase_031910_1, VkglTestCase_031910_2);

#define VkglTestCase_031911_1 "dEQP-GLES3.functional"
#define VkglTestCase_031911_2 ".fbo.color.tex3d.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031911, VkglTestCase_031911_1, VkglTestCase_031911_2);

#define VkglTestCase_031912_1 "dEQP-GLES3.functional"
#define VkglTestCase_031912_2 ".fbo.color.tex3d.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031912, VkglTestCase_031912_1, VkglTestCase_031912_2);

#define VkglTestCase_031913_1 "dEQP-GLES3.functional."
#define VkglTestCase_031913_2 "fbo.color.tex3d.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031913, VkglTestCase_031913_1, VkglTestCase_031913_2);
