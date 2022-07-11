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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000202_1 "KHR-GLES32.core.tessellation_shader.tessellation_shader_"
#define VkglTestCase_000202_2 "tessellation.gl_InvocationID_PatchVerticesIn_PrimitiveID"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000202, VkglTestCase_000202_1, VkglTestCase_000202_2);

#define VkglTestCase_000203_1 "KHR-GLES32.core.tessellation_shader.te"
#define VkglTestCase_000203_2 "ssellation_shader_tessellation.TCS_TES"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000203, VkglTestCase_000203_1, VkglTestCase_000203_2);

#define VkglTestCase_000204_1 "KHR-GLES32.core.tessellation_shader."
#define VkglTestCase_000204_2 "tessellation_shader_tessellation.TES"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000204, VkglTestCase_000204_1, VkglTestCase_000204_2);

#define VkglTestCase_000205_1 "KHR-GLES32.core.tessellation_shader.tessella"
#define VkglTestCase_000205_2 "tion_shader_tessellation.input_patch_discard"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000205, VkglTestCase_000205_1, VkglTestCase_000205_2);

#define VkglTestCase_000206_1 "KHR-GLES32.core.tessellation_shader.tessellat"
#define VkglTestCase_000206_2 "ion_shader_tessellation.max_in_out_attributes"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000206, VkglTestCase_000206_1, VkglTestCase_000206_2);
