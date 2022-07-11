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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043198_1 "dEQP-GLES3.functional.state_query.fbo"
#define VkglTestCase_043198_2 ".draw_framebuffer_default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043198, VkglTestCase_043198_1, VkglTestCase_043198_2);

#define VkglTestCase_043199_1 "dEQP-GLES3.functional.state_query.fbo"
#define VkglTestCase_043199_2 ".read_framebuffer_default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043199, VkglTestCase_043199_1, VkglTestCase_043199_2);

#define VkglTestCase_043200_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_043200_2 ".fbo.framebuffer_attachment_object"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043200, VkglTestCase_043200_1, VkglTestCase_043200_2);

#define VkglTestCase_043201_1 "dEQP-GLES3.functional.state_query.fbo"
#define VkglTestCase_043201_2 ".framebuffer_attachment_texture_level"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043201, VkglTestCase_043201_1, VkglTestCase_043201_2);

#define VkglTestCase_043202_1 "dEQP-GLES3.functional.state_query.fbo.fra"
#define VkglTestCase_043202_2 "mebuffer_attachment_texture_cube_map_face"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043202, VkglTestCase_043202_1, VkglTestCase_043202_2);

#define VkglTestCase_043203_1 "dEQP-GLES3.functional.state_query.fbo"
#define VkglTestCase_043203_2 ".framebuffer_attachment_texture_layer"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043203, VkglTestCase_043203_1, VkglTestCase_043203_2);

#define VkglTestCase_043204_1 "dEQP-GLES3.functional.state_query.fbo"
#define VkglTestCase_043204_2 ".framebuffer_attachment_color_encoding"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043204, VkglTestCase_043204_1, VkglTestCase_043204_2);

#define VkglTestCase_043205_1 "dEQP-GLES3.functional.state_query.fbo"
#define VkglTestCase_043205_2 ".framebuffer_attachment_component_type"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043205, VkglTestCase_043205_1, VkglTestCase_043205_2);

#define VkglTestCase_043206_1 "dEQP-GLES3.functional.state_query.fbo"
#define VkglTestCase_043206_2 ".framebuffer_attachment_x_size_initial"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043206, VkglTestCase_043206_1, VkglTestCase_043206_2);

#define VkglTestCase_043207_1 "dEQP-GLES3.functional.state_query.f"
#define VkglTestCase_043207_2 "bo.framebuffer_attachment_x_size_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043207, VkglTestCase_043207_1, VkglTestCase_043207_2);

#define VkglTestCase_043208_1 "dEQP-GLES3.functional.state_query.fbo"
#define VkglTestCase_043208_2 ".framebuffer_attachment_x_size_texture"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043208, VkglTestCase_043208_1, VkglTestCase_043208_2);

#define VkglTestCase_043209_1 "dEQP-GLES3.functional.state_query.fbo.frame"
#define VkglTestCase_043209_2 "buffer_unspecified_attachment_color_encoding"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043209, VkglTestCase_043209_1, VkglTestCase_043209_2);

#define VkglTestCase_043210_1 "dEQP-GLES3.functional.state_query.fbo.frame"
#define VkglTestCase_043210_2 "buffer_unspecified_attachment_component_type"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043210, VkglTestCase_043210_1, VkglTestCase_043210_2);

#define VkglTestCase_043211_1 "dEQP-GLES3.functional.state_query.fbo.fra"
#define VkglTestCase_043211_2 "mebuffer_unspecified_attachment_x_size_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043211, VkglTestCase_043211_1, VkglTestCase_043211_2);

#define VkglTestCase_043212_1 "dEQP-GLES3.functional.state_query.fbo.frame"
#define VkglTestCase_043212_2 "buffer_unspecified_attachment_x_size_texture"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043212, VkglTestCase_043212_1, VkglTestCase_043212_2);
