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

#define VkglTestCase_000212_1 "KHR-GLES32.core.tessellation_shader.tessellatio"
#define VkglTestCase_000212_2 "n_shader_tc_barriers.barrier_guarded_read_calls"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000212, VkglTestCase_000212_1, VkglTestCase_000212_2);

#define VkglTestCase_000213_1 "KHR-GLES32.core.tessellation_shader.tessellatio"
#define VkglTestCase_000213_2 "n_shader_tc_barriers.barrier_guarded_write_calls"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000213, VkglTestCase_000213_1, VkglTestCase_000213_2);

#define VkglTestCase_000214_1 "KHR-GLES32.core.tessellation_shader.tessellation_s"
#define VkglTestCase_000214_2 "hader_tc_barriers.barrier_guarded_read_write_calls"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000214, VkglTestCase_000214_1, VkglTestCase_000214_2);
