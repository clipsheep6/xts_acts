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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032553_1 "dEQP-GLES3.functional.fbo.blit.dep"
#define VkglTestCase_032553_2 "th_stencil.depth_component32f_basic"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032553, VkglTestCase_032553_1, VkglTestCase_032553_2);

#define VkglTestCase_032554_1 "dEQP-GLES3.functional.fbo.blit.dep"
#define VkglTestCase_032554_2 "th_stencil.depth_component32f_scale"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032554, VkglTestCase_032554_1, VkglTestCase_032554_2);

#define VkglTestCase_032555_1 "dEQP-GLES3.functional.fbo.blit.dep"
#define VkglTestCase_032555_2 "th_stencil.depth_component24_basic"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032555, VkglTestCase_032555_1, VkglTestCase_032555_2);

#define VkglTestCase_032556_1 "dEQP-GLES3.functional.fbo.blit.dep"
#define VkglTestCase_032556_2 "th_stencil.depth_component24_scale"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032556, VkglTestCase_032556_1, VkglTestCase_032556_2);

#define VkglTestCase_032557_1 "dEQP-GLES3.functional.fbo.blit.dep"
#define VkglTestCase_032557_2 "th_stencil.depth_component16_basic"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032557, VkglTestCase_032557_1, VkglTestCase_032557_2);

#define VkglTestCase_032558_1 "dEQP-GLES3.functional.fbo.blit.dep"
#define VkglTestCase_032558_2 "th_stencil.depth_component16_scale"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032558, VkglTestCase_032558_1, VkglTestCase_032558_2);

#define VkglTestCase_032559_1 "dEQP-GLES3.functional.fbo.blit.dep"
#define VkglTestCase_032559_2 "th_stencil.depth32f_stencil8_basic"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032559, VkglTestCase_032559_1, VkglTestCase_032559_2);

#define VkglTestCase_032560_1 "dEQP-GLES3.functional.fbo.blit.dep"
#define VkglTestCase_032560_2 "th_stencil.depth32f_stencil8_scale"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032560, VkglTestCase_032560_1, VkglTestCase_032560_2);

#define VkglTestCase_032561_1 "dEQP-GLES3.functional.fbo.blit.depth"
#define VkglTestCase_032561_2 "_stencil.depth32f_stencil8_depth_only"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032561, VkglTestCase_032561_1, VkglTestCase_032561_2);

#define VkglTestCase_032562_1 "dEQP-GLES3.functional.fbo.blit.depth_"
#define VkglTestCase_032562_2 "stencil.depth32f_stencil8_stencil_only"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032562, VkglTestCase_032562_1, VkglTestCase_032562_2);

#define VkglTestCase_032563_1 "dEQP-GLES3.functional.fbo.blit.de"
#define VkglTestCase_032563_2 "pth_stencil.depth24_stencil8_basic"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032563, VkglTestCase_032563_1, VkglTestCase_032563_2);

#define VkglTestCase_032564_1 "dEQP-GLES3.functional.fbo.blit.de"
#define VkglTestCase_032564_2 "pth_stencil.depth24_stencil8_scale"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032564, VkglTestCase_032564_1, VkglTestCase_032564_2);

#define VkglTestCase_032565_1 "dEQP-GLES3.functional.fbo.blit.depth"
#define VkglTestCase_032565_2 "_stencil.depth24_stencil8_depth_only"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032565, VkglTestCase_032565_1, VkglTestCase_032565_2);

#define VkglTestCase_032566_1 "dEQP-GLES3.functional.fbo.blit.depth_"
#define VkglTestCase_032566_2 "stencil.depth24_stencil8_stencil_only"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032566, VkglTestCase_032566_1, VkglTestCase_032566_2);

#define VkglTestCase_032567_1 "dEQP-GLES3.functional.fbo.blit.d"
#define VkglTestCase_032567_2 "epth_stencil.stencil_index8_basic"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032567, VkglTestCase_032567_1, VkglTestCase_032567_2);

#define VkglTestCase_032568_1 "dEQP-GLES3.functional.fbo.blit.d"
#define VkglTestCase_032568_2 "epth_stencil.stencil_index8_scale"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032568, VkglTestCase_032568_1, VkglTestCase_032568_2);
