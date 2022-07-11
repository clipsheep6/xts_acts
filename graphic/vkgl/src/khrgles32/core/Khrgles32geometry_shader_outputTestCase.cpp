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

#define VkglTestCase_000108_1 "KHR-GLES32.core.geometry_shader.o"
#define VkglTestCase_000108_2 "utput.conflicted_output_primitive"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000108, VkglTestCase_000108_1, VkglTestCase_000108_2);

#define VkglTestCase_000109_1 "KHR-GLES32.core.geometry_shader.ou"
#define VkglTestCase_000109_2 "tput.conflicted_output_vertices_max"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000109, VkglTestCase_000109_1, VkglTestCase_000109_2);

#define VkglTestCase_000110_1 "KHR-GLES32.core.geometry_sha"
#define VkglTestCase_000110_2 "der.output.vertex_emit_at_end"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000110, VkglTestCase_000110_1, VkglTestCase_000110_2);

#define VkglTestCase_000111_1 "KHR-GLES32.core.geometry_shader."
#define VkglTestCase_000111_2 "output.primitive_end_done_at_end"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000111, VkglTestCase_000111_1, VkglTestCase_000111_2);

#define VkglTestCase_000112_1 "KHR-GLES32.core.geometry_shader.output"
#define VkglTestCase_000112_2 ".primite_end_done_for_single_primitive"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000112, VkglTestCase_000112_1, VkglTestCase_000112_2);
