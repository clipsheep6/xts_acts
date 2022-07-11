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

#define VkglTestCase_032852_1 "dEQP-GLES3.functional.fbo.invalidate"
#define VkglTestCase_032852_2 ".target.framebuffer_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032852, VkglTestCase_032852_1, VkglTestCase_032852_2);

#define VkglTestCase_032853_1 "dEQP-GLES3.functional.fbo.invalidate.tar"
#define VkglTestCase_032853_2 "get.framebuffer_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032853, VkglTestCase_032853_1, VkglTestCase_032853_2);

#define VkglTestCase_032854_1 "dEQP-GLES3.functional.fbo.invalidat"
#define VkglTestCase_032854_2 "e.target.framebuffer_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032854, VkglTestCase_032854_1, VkglTestCase_032854_2);

#define VkglTestCase_032855_1 "dEQP-GLES3.functional.fbo.invalidate.ta"
#define VkglTestCase_032855_2 "rget.framebuffer_read_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032855, VkglTestCase_032855_1, VkglTestCase_032855_2);

#define VkglTestCase_032856_1 "dEQP-GLES3.functional.fbo.invalidate.target"
#define VkglTestCase_032856_2 ".framebuffer_read_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032856, VkglTestCase_032856_1, VkglTestCase_032856_2);

#define VkglTestCase_032857_1 "dEQP-GLES3.functional.fbo.invalidate.t"
#define VkglTestCase_032857_2 "arget.framebuffer_read_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032857, VkglTestCase_032857_1, VkglTestCase_032857_2);

#define VkglTestCase_032858_1 "dEQP-GLES3.functional.fbo.invalidate.ta"
#define VkglTestCase_032858_2 "rget.framebuffer_draw_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032858, VkglTestCase_032858_1, VkglTestCase_032858_2);

#define VkglTestCase_032859_1 "dEQP-GLES3.functional.fbo.invalidate.target"
#define VkglTestCase_032859_2 ".framebuffer_draw_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032859, VkglTestCase_032859_1, VkglTestCase_032859_2);

#define VkglTestCase_032860_1 "dEQP-GLES3.functional.fbo.invalidate.t"
#define VkglTestCase_032860_2 "arget.framebuffer_draw_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032860, VkglTestCase_032860_1, VkglTestCase_032860_2);

#define VkglTestCase_032861_1 "dEQP-GLES3.functional.fbo.invalidate.ta"
#define VkglTestCase_032861_2 "rget.read_framebuffer_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032861, VkglTestCase_032861_1, VkglTestCase_032861_2);

#define VkglTestCase_032862_1 "dEQP-GLES3.functional.fbo.invalidate.target"
#define VkglTestCase_032862_2 ".read_framebuffer_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032862, VkglTestCase_032862_1, VkglTestCase_032862_2);

#define VkglTestCase_032863_1 "dEQP-GLES3.functional.fbo.invalidate.t"
#define VkglTestCase_032863_2 "arget.read_framebuffer_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032863, VkglTestCase_032863_1, VkglTestCase_032863_2);

#define VkglTestCase_032864_1 "dEQP-GLES3.functional.fbo.invalidate.targ"
#define VkglTestCase_032864_2 "et.read_framebuffer_read_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032864, VkglTestCase_032864_1, VkglTestCase_032864_2);

#define VkglTestCase_032865_1 "dEQP-GLES3.functional.fbo.invalidate.target.r"
#define VkglTestCase_032865_2 "ead_framebuffer_read_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032865, VkglTestCase_032865_1, VkglTestCase_032865_2);

#define VkglTestCase_032866_1 "dEQP-GLES3.functional.fbo.invalidate.tar"
#define VkglTestCase_032866_2 "get.read_framebuffer_read_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032866, VkglTestCase_032866_1, VkglTestCase_032866_2);

#define VkglTestCase_032867_1 "dEQP-GLES3.functional.fbo.invalidate.targ"
#define VkglTestCase_032867_2 "et.read_framebuffer_draw_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032867, VkglTestCase_032867_1, VkglTestCase_032867_2);

#define VkglTestCase_032868_1 "dEQP-GLES3.functional.fbo.invalidate.target.r"
#define VkglTestCase_032868_2 "ead_framebuffer_draw_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032868, VkglTestCase_032868_1, VkglTestCase_032868_2);

#define VkglTestCase_032869_1 "dEQP-GLES3.functional.fbo.invalidate.tar"
#define VkglTestCase_032869_2 "get.read_framebuffer_draw_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032869, VkglTestCase_032869_1, VkglTestCase_032869_2);

#define VkglTestCase_032870_1 "dEQP-GLES3.functional.fbo.invalidate.ta"
#define VkglTestCase_032870_2 "rget.draw_framebuffer_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032870, VkglTestCase_032870_1, VkglTestCase_032870_2);

#define VkglTestCase_032871_1 "dEQP-GLES3.functional.fbo.invalidate.target"
#define VkglTestCase_032871_2 ".draw_framebuffer_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032871, VkglTestCase_032871_1, VkglTestCase_032871_2);

#define VkglTestCase_032872_1 "dEQP-GLES3.functional.fbo.invalidate.t"
#define VkglTestCase_032872_2 "arget.draw_framebuffer_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032872, VkglTestCase_032872_1, VkglTestCase_032872_2);

#define VkglTestCase_032873_1 "dEQP-GLES3.functional.fbo.invalidate.targ"
#define VkglTestCase_032873_2 "et.draw_framebuffer_read_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032873, VkglTestCase_032873_1, VkglTestCase_032873_2);

#define VkglTestCase_032874_1 "dEQP-GLES3.functional.fbo.invalidate.target.d"
#define VkglTestCase_032874_2 "raw_framebuffer_read_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032874, VkglTestCase_032874_1, VkglTestCase_032874_2);

#define VkglTestCase_032875_1 "dEQP-GLES3.functional.fbo.invalidate.tar"
#define VkglTestCase_032875_2 "get.draw_framebuffer_read_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032875, VkglTestCase_032875_1, VkglTestCase_032875_2);

#define VkglTestCase_032876_1 "dEQP-GLES3.functional.fbo.invalidate.targ"
#define VkglTestCase_032876_2 "et.draw_framebuffer_draw_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032876, VkglTestCase_032876_1, VkglTestCase_032876_2);

#define VkglTestCase_032877_1 "dEQP-GLES3.functional.fbo.invalidate.target.d"
#define VkglTestCase_032877_2 "raw_framebuffer_draw_framebuffer_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032877, VkglTestCase_032877_1, VkglTestCase_032877_2);

#define VkglTestCase_032878_1 "dEQP-GLES3.functional.fbo.invalidate.tar"
#define VkglTestCase_032878_2 "get.draw_framebuffer_draw_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032878, VkglTestCase_032878_1, VkglTestCase_032878_2);
