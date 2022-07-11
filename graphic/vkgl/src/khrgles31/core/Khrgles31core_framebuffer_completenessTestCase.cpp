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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002370_1 "KHR-GLES31.core.framebuffer_complet"
#define VkglTestCase_002370_2 "eness.incomplete_missing_attachment"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002370, VkglTestCase_002370_1, VkglTestCase_002370_2);

#define VkglTestCase_002371_1 "KHR-GLES31.core.framebuffer_comple"
#define VkglTestCase_002371_2 "teness.incomplete_image_zero_width"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002371, VkglTestCase_002371_1, VkglTestCase_002371_2);

#define VkglTestCase_002372_1 "KHR-GLES31.core.framebuffer_comple"
#define VkglTestCase_002372_2 "teness.incomplete_image_zero_height"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002372, VkglTestCase_002372_1, VkglTestCase_002372_2);

#define VkglTestCase_002373_1 "KHR-GLES31.core.framebuffer_complete"
#define VkglTestCase_002373_2 "ness.incomplete_texture_3d_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002373, VkglTestCase_002373_1, VkglTestCase_002373_2);

#define VkglTestCase_002374_1 "KHR-GLES31.core.framebuffer_complete"
#define VkglTestCase_002374_2 "ness.incomplete_texture_2d_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002374, VkglTestCase_002374_1, VkglTestCase_002374_2);

#define VkglTestCase_002375_1 "KHR-GLES31.core.framebuffer_completen"
#define VkglTestCase_002375_2 "ess.incomplete_texture_2d_mm_layer_oob"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002375, VkglTestCase_002375_1, VkglTestCase_002375_2);

#define VkglTestCase_002376_1 "KHR-GLES31.core.framebuffer_completeness."
#define VkglTestCase_002376_2 "mutable_nbl_texture_expect_mipmap_complete"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002376, VkglTestCase_002376_1, VkglTestCase_002376_2);

#define VkglTestCase_002377_1 "KHR-GLES31.core.framebuffer_completeness"
#define VkglTestCase_002377_2 ".mutable_nbl_texture_expect_cube_complete"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002377, VkglTestCase_002377_1, VkglTestCase_002377_2);

#define VkglTestCase_002378_1 "KHR-GLES31.core.framebuffer_completen"
#define VkglTestCase_002378_2 "ess.expect_renderable_internal_format"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002378, VkglTestCase_002378_1, VkglTestCase_002378_2);

#define VkglTestCase_002379_1 "KHR-GLES31.core.framebuffer_complete"
#define VkglTestCase_002379_2 "ness.all_rbos_expect_same_numsamples"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002379, VkglTestCase_002379_1, VkglTestCase_002379_2);

#define VkglTestCase_002380_1 "KHR-GLES31.core.framebuffer_completenes"
#define VkglTestCase_002380_2 "s.rbo_and_texture_expect_zero_numsamples"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002380, VkglTestCase_002380_1, VkglTestCase_002380_2);

#define VkglTestCase_002381_1 "KHR-GLES31.core.framebuffer_comp"
#define VkglTestCase_002381_2 "leteness.expect_equal_numsamples"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002381, VkglTestCase_002381_1, VkglTestCase_002381_2);

#define VkglTestCase_002382_1 "KHR-GLES31.core.framebuffer_"
#define VkglTestCase_002382_2 "completeness.status_tracking"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002382, VkglTestCase_002382_1, VkglTestCase_002382_2);

#define VkglTestCase_002383_1 "KHR-GLES31.core.framebuffer_completeness"
#define VkglTestCase_002383_2 ".mutable_texture_missing_attachment_level"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002383, VkglTestCase_002383_1, VkglTestCase_002383_2);

#define VkglTestCase_002384_1 "KHR-GLES31.core.framebuffer_completeness."
#define VkglTestCase_002384_2 "immutable_texture_any_level_as_attachment"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002384, VkglTestCase_002384_1, VkglTestCase_002384_2);
