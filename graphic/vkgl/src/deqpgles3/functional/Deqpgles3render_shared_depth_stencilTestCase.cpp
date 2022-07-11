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

#define VkglTestCase_031547_1 "dEQP-GLES3.functional.fbo.render.shared_depth_st"
#define VkglTestCase_031547_2 "encil.tex2d_rgba8_depth_tex2d_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031547, VkglTestCase_031547_1, VkglTestCase_031547_2);

#define VkglTestCase_031548_1 "dEQP-GLES3.functional.fbo.render.shared_depth_s"
#define VkglTestCase_031548_2 "tencil.tex2d_rgba8_depth_rbo_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031548, VkglTestCase_031548_1, VkglTestCase_031548_2);

#define VkglTestCase_031549_1 "dEQP-GLES3.functional.fbo.render.shared_depth_s"
#define VkglTestCase_031549_2 "tencil.tex2d_rgba8_depth_tex2d_depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031549, VkglTestCase_031549_1, VkglTestCase_031549_2);

#define VkglTestCase_031550_1 "dEQP-GLES3.functional.fbo.render.shared_depth_"
#define VkglTestCase_031550_2 "stencil.tex2d_rgba8_depth_rbo_depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031550, VkglTestCase_031550_1, VkglTestCase_031550_2);

#define VkglTestCase_031551_1 "dEQP-GLES3.functional.fbo.render.shared_depth_s"
#define VkglTestCase_031551_2 "tencil.tex2d_rgba8_depth_tex2d_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031551, VkglTestCase_031551_1, VkglTestCase_031551_2);

#define VkglTestCase_031552_1 "dEQP-GLES3.functional.fbo.render.shared_depth_"
#define VkglTestCase_031552_2 "stencil.tex2d_rgba8_depth_rbo_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031552, VkglTestCase_031552_1, VkglTestCase_031552_2);

#define VkglTestCase_031553_1 "dEQP-GLES3.functional.fbo.render.shared_depth_stenc"
#define VkglTestCase_031553_2 "il.tex2d_rgba8_depth_stencil_tex2d_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031553, VkglTestCase_031553_1, VkglTestCase_031553_2);

#define VkglTestCase_031554_1 "dEQP-GLES3.functional.fbo.render.shared_depth_sten"
#define VkglTestCase_031554_2 "cil.tex2d_rgba8_depth_stencil_rbo_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031554, VkglTestCase_031554_1, VkglTestCase_031554_2);

#define VkglTestCase_031555_1 "dEQP-GLES3.functional.fbo.render.shared_depth_stenc"
#define VkglTestCase_031555_2 "il.tex2d_rgba8_depth_stencil_tex2d_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031555, VkglTestCase_031555_1, VkglTestCase_031555_2);

#define VkglTestCase_031556_1 "dEQP-GLES3.functional.fbo.render.shared_depth_sten"
#define VkglTestCase_031556_2 "cil.tex2d_rgba8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031556, VkglTestCase_031556_1, VkglTestCase_031556_2);
