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

#define VkglTestCase_032792_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032792_2 "invalidate.sub.render_none"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032792, VkglTestCase_032792_1, VkglTestCase_032792_2);

#define VkglTestCase_032793_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032793_2 "invalidate.sub.render_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032793, VkglTestCase_032793_1, VkglTestCase_032793_2);

#define VkglTestCase_032794_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032794_2 "invalidate.sub.render_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032794, VkglTestCase_032794_1, VkglTestCase_032794_2);

#define VkglTestCase_032795_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032795_2 "nvalidate.sub.render_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032795, VkglTestCase_032795_1, VkglTestCase_032795_2);

#define VkglTestCase_032796_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032796_2 "lidate.sub.render_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032796, VkglTestCase_032796_1, VkglTestCase_032796_2);

#define VkglTestCase_032797_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032797_2 ".invalidate.sub.render_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032797, VkglTestCase_032797_1, VkglTestCase_032797_2);

#define VkglTestCase_032798_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032798_2 "alidate.sub.unbind_read_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032798, VkglTestCase_032798_1, VkglTestCase_032798_2);

#define VkglTestCase_032799_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032799_2 "alidate.sub.unbind_read_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032799, VkglTestCase_032799_1, VkglTestCase_032799_2);

#define VkglTestCase_032800_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032800_2 "lidate.sub.unbind_read_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032800, VkglTestCase_032800_1, VkglTestCase_032800_2);

#define VkglTestCase_032801_1 "dEQP-GLES3.functional.fbo.invalid"
#define VkglTestCase_032801_2 "ate.sub.unbind_read_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032801, VkglTestCase_032801_1, VkglTestCase_032801_2);

#define VkglTestCase_032802_1 "dEQP-GLES3.functional.fbo.invalid"
#define VkglTestCase_032802_2 "ate.sub.unbind_read_color_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032802, VkglTestCase_032802_1, VkglTestCase_032802_2);

#define VkglTestCase_032803_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032803_2 "alidate.sub.unbind_blit_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032803, VkglTestCase_032803_1, VkglTestCase_032803_2);

#define VkglTestCase_032804_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032804_2 "alidate.sub.unbind_blit_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032804, VkglTestCase_032804_1, VkglTestCase_032804_2);

#define VkglTestCase_032805_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032805_2 "lidate.sub.unbind_blit_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032805, VkglTestCase_032805_1, VkglTestCase_032805_2);

#define VkglTestCase_032806_1 "dEQP-GLES3.functional.fbo.invalid"
#define VkglTestCase_032806_2 "ate.sub.unbind_blit_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032806, VkglTestCase_032806_1, VkglTestCase_032806_2);

#define VkglTestCase_032807_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032807_2 "idate.sub.unbind_blit_msaa_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032807, VkglTestCase_032807_1, VkglTestCase_032807_2);

#define VkglTestCase_032808_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032808_2 "idate.sub.unbind_blit_msaa_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032808, VkglTestCase_032808_1, VkglTestCase_032808_2);

#define VkglTestCase_032809_1 "dEQP-GLES3.functional.fbo.invali"
#define VkglTestCase_032809_2 "date.sub.unbind_blit_msaa_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032809, VkglTestCase_032809_1, VkglTestCase_032809_2);

#define VkglTestCase_032810_1 "dEQP-GLES3.functional.fbo.invalidat"
#define VkglTestCase_032810_2 "e.sub.unbind_blit_msaa_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032810, VkglTestCase_032810_1, VkglTestCase_032810_2);
