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

#define VkglTestCase_032748_1 "dEQP-GLES3.functional.fbo.in"
#define VkglTestCase_032748_2 "validate.default.render_none"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032748, VkglTestCase_032748_1, VkglTestCase_032748_2);

#define VkglTestCase_032749_1 "dEQP-GLES3.functional.fbo.in"
#define VkglTestCase_032749_2 "validate.default.render_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032749, VkglTestCase_032749_1, VkglTestCase_032749_2);

#define VkglTestCase_032750_1 "dEQP-GLES3.functional.fbo.in"
#define VkglTestCase_032750_2 "validate.default.render_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032750, VkglTestCase_032750_1, VkglTestCase_032750_2);

#define VkglTestCase_032751_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032751_2 "alidate.default.render_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032751, VkglTestCase_032751_1, VkglTestCase_032751_2);

#define VkglTestCase_032752_1 "dEQP-GLES3.functional.fbo.invali"
#define VkglTestCase_032752_2 "date.default.render_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032752, VkglTestCase_032752_1, VkglTestCase_032752_2);

#define VkglTestCase_032753_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032753_2 "nvalidate.default.render_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032753, VkglTestCase_032753_1, VkglTestCase_032753_2);

#define VkglTestCase_032754_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032754_2 "nvalidate.default.bind_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032754, VkglTestCase_032754_1, VkglTestCase_032754_2);

#define VkglTestCase_032755_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032755_2 "nvalidate.default.bind_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032755, VkglTestCase_032755_1, VkglTestCase_032755_2);

#define VkglTestCase_032756_1 "dEQP-GLES3.functional.fbo.in"
#define VkglTestCase_032756_2 "validate.default.bind_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032756, VkglTestCase_032756_1, VkglTestCase_032756_2);

#define VkglTestCase_032757_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032757_2 "idate.default.bind_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032757, VkglTestCase_032757_1, VkglTestCase_032757_2);

#define VkglTestCase_032758_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032758_2 "invalidate.default.bind_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032758, VkglTestCase_032758_1, VkglTestCase_032758_2);

#define VkglTestCase_032759_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032759_2 "lidate.default.sub_render_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032759, VkglTestCase_032759_1, VkglTestCase_032759_2);

#define VkglTestCase_032760_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032760_2 "lidate.default.sub_render_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032760, VkglTestCase_032760_1, VkglTestCase_032760_2);

#define VkglTestCase_032761_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032761_2 "idate.default.sub_render_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032761, VkglTestCase_032761_1, VkglTestCase_032761_2);

#define VkglTestCase_032762_1 "dEQP-GLES3.functional.fbo.invalida"
#define VkglTestCase_032762_2 "te.default.sub_render_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032762, VkglTestCase_032762_1, VkglTestCase_032762_2);

#define VkglTestCase_032763_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032763_2 "alidate.default.sub_render_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032763, VkglTestCase_032763_1, VkglTestCase_032763_2);

#define VkglTestCase_032764_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032764_2 "alidate.default.sub_bind_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032764, VkglTestCase_032764_1, VkglTestCase_032764_2);

#define VkglTestCase_032765_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032765_2 "alidate.default.sub_bind_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032765, VkglTestCase_032765_1, VkglTestCase_032765_2);

#define VkglTestCase_032766_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032766_2 "lidate.default.sub_bind_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032766, VkglTestCase_032766_1, VkglTestCase_032766_2);

#define VkglTestCase_032767_1 "dEQP-GLES3.functional.fbo.invalid"
#define VkglTestCase_032767_2 "ate.default.sub_bind_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032767, VkglTestCase_032767_1, VkglTestCase_032767_2);

#define VkglTestCase_032768_1 "dEQP-GLES3.functional.fbo.in"
#define VkglTestCase_032768_2 "validate.default.sub_bind_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032768, VkglTestCase_032768_1, VkglTestCase_032768_2);

#define VkglTestCase_032769_1 "dEQP-GLES3.functional.fbo.invalid"
#define VkglTestCase_032769_2 "ate.default.draw_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032769, VkglTestCase_032769_1, VkglTestCase_032769_2);

#define VkglTestCase_032770_1 "dEQP-GLES3.functional.fbo.invali"
#define VkglTestCase_032770_2 "date.default.draw_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032770, VkglTestCase_032770_1, VkglTestCase_032770_2);

#define VkglTestCase_032771_1 "dEQP-GLES3.functional.fbo.invalid"
#define VkglTestCase_032771_2 "ate.default.read_framebuffer_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032771, VkglTestCase_032771_1, VkglTestCase_032771_2);

#define VkglTestCase_032772_1 "dEQP-GLES3.functional.fbo.invali"
#define VkglTestCase_032772_2 "date.default.read_framebuffer_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032772, VkglTestCase_032772_1, VkglTestCase_032772_2);
