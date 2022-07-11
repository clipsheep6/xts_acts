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

#define VkglTestCase_031426_1 "dEQP-GLES3.functional.fbo.render.stencil_cle"
#define VkglTestCase_031426_2 "ar.tex2d_rgba8_stencil_rbo_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031426, VkglTestCase_031426_1, VkglTestCase_031426_2);

#define VkglTestCase_031427_1 "dEQP-GLES3.functional.fbo.render.stencil_cl"
#define VkglTestCase_031427_2 "ear.tex2d_rgba8_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031427, VkglTestCase_031427_1, VkglTestCase_031427_2);

#define VkglTestCase_031428_1 "dEQP-GLES3.functional.fbo.render.stencil_c"
#define VkglTestCase_031428_2 "lear.tex2d_rgba8_stencil_rbo_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031428, VkglTestCase_031428_1, VkglTestCase_031428_2);
