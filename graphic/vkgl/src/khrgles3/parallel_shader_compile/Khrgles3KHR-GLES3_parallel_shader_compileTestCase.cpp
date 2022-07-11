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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003709_1 "KHR-GLES3.parallel_shade"
#define VkglTestCase_003709_2 "r_compile.simple_queries"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003709, VkglTestCase_003709_1, VkglTestCase_003709_2);

#define VkglTestCase_003710_1 "KHR-GLES3.parallel_shader_comp"
#define VkglTestCase_003710_2 "ile.max_shader_compile_threads"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003710, VkglTestCase_003710_1, VkglTestCase_003710_2);

#define VkglTestCase_003711_1 "KHR-GLES3.parallel_shader_compil"
#define VkglTestCase_003711_2 "e.compilation_completion_parallel"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003711, VkglTestCase_003711_1, VkglTestCase_003711_2);
