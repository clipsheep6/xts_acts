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

#define VkglTestCase_032773_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032773_2 "nvalidate.whole.render_none"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032773, VkglTestCase_032773_1, VkglTestCase_032773_2);

#define VkglTestCase_032774_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032774_2 "nvalidate.whole.render_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032774, VkglTestCase_032774_1, VkglTestCase_032774_2);

#define VkglTestCase_032775_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032775_2 "nvalidate.whole.render_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032775, VkglTestCase_032775_1, VkglTestCase_032775_2);

#define VkglTestCase_032776_1 "dEQP-GLES3.functional.fbo.in"
#define VkglTestCase_032776_2 "validate.whole.render_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032776, VkglTestCase_032776_1, VkglTestCase_032776_2);

#define VkglTestCase_032777_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032777_2 "idate.whole.render_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032777, VkglTestCase_032777_1, VkglTestCase_032777_2);

#define VkglTestCase_032778_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032778_2 "invalidate.whole.render_all"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032778, VkglTestCase_032778_1, VkglTestCase_032778_2);

#define VkglTestCase_032779_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032779_2 "lidate.whole.unbind_read_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032779, VkglTestCase_032779_1, VkglTestCase_032779_2);

#define VkglTestCase_032780_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032780_2 "lidate.whole.unbind_read_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032780, VkglTestCase_032780_1, VkglTestCase_032780_2);

#define VkglTestCase_032781_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032781_2 "idate.whole.unbind_read_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032781, VkglTestCase_032781_1, VkglTestCase_032781_2);

#define VkglTestCase_032782_1 "dEQP-GLES3.functional.fbo.invalida"
#define VkglTestCase_032782_2 "te.whole.unbind_read_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032782, VkglTestCase_032782_1, VkglTestCase_032782_2);

#define VkglTestCase_032783_1 "dEQP-GLES3.functional.fbo.invalida"
#define VkglTestCase_032783_2 "te.whole.unbind_read_color_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032783, VkglTestCase_032783_1, VkglTestCase_032783_2);

#define VkglTestCase_032784_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032784_2 "lidate.whole.unbind_blit_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032784, VkglTestCase_032784_1, VkglTestCase_032784_2);

#define VkglTestCase_032785_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032785_2 "lidate.whole.unbind_blit_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032785, VkglTestCase_032785_1, VkglTestCase_032785_2);

#define VkglTestCase_032786_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032786_2 "idate.whole.unbind_blit_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032786, VkglTestCase_032786_1, VkglTestCase_032786_2);

#define VkglTestCase_032787_1 "dEQP-GLES3.functional.fbo.invalida"
#define VkglTestCase_032787_2 "te.whole.unbind_blit_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032787, VkglTestCase_032787_1, VkglTestCase_032787_2);

#define VkglTestCase_032788_1 "dEQP-GLES3.functional.fbo.invali"
#define VkglTestCase_032788_2 "date.whole.unbind_blit_msaa_color"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032788, VkglTestCase_032788_1, VkglTestCase_032788_2);

#define VkglTestCase_032789_1 "dEQP-GLES3.functional.fbo.invali"
#define VkglTestCase_032789_2 "date.whole.unbind_blit_msaa_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032789, VkglTestCase_032789_1, VkglTestCase_032789_2);

#define VkglTestCase_032790_1 "dEQP-GLES3.functional.fbo.invalid"
#define VkglTestCase_032790_2 "ate.whole.unbind_blit_msaa_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032790, VkglTestCase_032790_1, VkglTestCase_032790_2);

#define VkglTestCase_032791_1 "dEQP-GLES3.functional.fbo.invalidate"
#define VkglTestCase_032791_2 ".whole.unbind_blit_msaa_depth_stencil"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032791, VkglTestCase_032791_1, VkglTestCase_032791_2);
