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

#define VkglTestCase_002486_1 "KHR-GLES31.core.geometry_shader.o"
#define VkglTestCase_002486_2 "utput.conflicted_output_primitive"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002486, VkglTestCase_002486_1, VkglTestCase_002486_2);

#define VkglTestCase_002487_1 "KHR-GLES31.core.geometry_shader.ou"
#define VkglTestCase_002487_2 "tput.conflicted_output_vertices_max"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002487, VkglTestCase_002487_1, VkglTestCase_002487_2);

#define VkglTestCase_002488_1 "KHR-GLES31.core.geometry_sha"
#define VkglTestCase_002488_2 "der.output.vertex_emit_at_end"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002488, VkglTestCase_002488_1, VkglTestCase_002488_2);

#define VkglTestCase_002489_1 "KHR-GLES31.core.geometry_shader."
#define VkglTestCase_002489_2 "output.primitive_end_done_at_end"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002489, VkglTestCase_002489_1, VkglTestCase_002489_2);

#define VkglTestCase_002490_1 "KHR-GLES31.core.geometry_shader.output"
#define VkglTestCase_002490_2 ".primite_end_done_for_single_primitive"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002490, VkglTestCase_002490_1, VkglTestCase_002490_2);
