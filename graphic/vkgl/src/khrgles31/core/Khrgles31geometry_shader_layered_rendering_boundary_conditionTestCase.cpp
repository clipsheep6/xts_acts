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

#define VkglTestCase_002478_1 "KHR-GLES31.core.geometry_shader.layered_rendering_boundary_co"
#define VkglTestCase_002478_2 "ndition.layered_rendering_boundary_condition_various_textures"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002478, VkglTestCase_002478_1, VkglTestCase_002478_2);

#define VkglTestCase_002479_1 "KHR-GLES31.core.geometry_shader.layered_rendering_bound"
#define VkglTestCase_002479_2 "ary_condition.layered_rendering_boundary_condition_no_gs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002479, VkglTestCase_002479_1, VkglTestCase_002479_2);

#define VkglTestCase_002480_1 "KHR-GLES31.core.geometry_shader.layered_rendering_boundary_co"
#define VkglTestCase_002480_2 "ndition.layered_rendering_boundary_condition_no_default_layer"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002480, VkglTestCase_002480_1, VkglTestCase_002480_2);

#define VkglTestCase_002481_1 "KHR-GLES31.core.geometry_shader.layered_rendering_boundary_c"
#define VkglTestCase_002481_2 "ondition.layered_rendering_boundary_condition_no_layered_fbo"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002481, VkglTestCase_002481_1, VkglTestCase_002481_2);
