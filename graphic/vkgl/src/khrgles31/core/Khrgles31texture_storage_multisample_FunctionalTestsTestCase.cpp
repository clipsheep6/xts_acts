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
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000053_1 "KHR-GLES31.core.texture_storage_multisample.Functio"
#define VkglTestCase_000053_2 "nalTests.multisampled_fbo_to_singlesampled_fbo_blit"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000053, VkglTestCase_000053_1, VkglTestCase_000053_2);

#define VkglTestCase_000054_1 "KHR-GLES31.core.texture_storage_multisample.Funct"
#define VkglTestCase_000054_2 "ionalTests.blitting_multisampled_depth_attachment"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000054, VkglTestCase_000054_1, VkglTestCase_000054_2);

#define VkglTestCase_000055_1 "KHR-GLES31.core.texture_storage_multisample.Functi"
#define VkglTestCase_000055_2 "onalTests.blitting_multisampled_integer_attachment"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000055, VkglTestCase_000055_1, VkglTestCase_000055_2);

#define VkglTestCase_000056_1 "KHR-GLES31.core.texture_storage_multisample.Functi"
#define VkglTestCase_000056_2 "onalTests.blitting_to_multisampled_fbo_is_forbidden"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000056, VkglTestCase_000056_1, VkglTestCase_000056_2);

#define VkglTestCase_000057_1 "KHR-GLES31.core.texture_storage_multisample.FunctionalTests.verif"
#define VkglTestCase_000057_2 "y_sample_masking_for_non_integer_color_renderable_internalformats"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000057, VkglTestCase_000057_1, VkglTestCase_000057_2);

#define VkglTestCase_000058_1 "KHR-GLES31.core.texture_storage_multisample.Fu"
#define VkglTestCase_000058_2 "nctionalTests.texture_size_in_fragment_shaders"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000058, VkglTestCase_000058_1, VkglTestCase_000058_2);

#define VkglTestCase_000059_1 "KHR-GLES31.core.texture_storage_multisample.F"
#define VkglTestCase_000059_2 "unctionalTests.texture_size_in_vertex_shaders"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000059, VkglTestCase_000059_1, VkglTestCase_000059_2);
