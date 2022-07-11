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
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001206_1 "KHR-GLES3.shaders.preproc"
#define VkglTestCase_001206_2 "essor.builtin.line_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001206, VkglTestCase_001206_1, VkglTestCase_001206_2);

#define VkglTestCase_001207_1 "KHR-GLES3.shaders.preproce"
#define VkglTestCase_001207_2 "ssor.builtin.line_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001207, VkglTestCase_001207_1, VkglTestCase_001207_2);

#define VkglTestCase_001208_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_001208_2 "r.builtin.line_and_file_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001208, VkglTestCase_001208_1, VkglTestCase_001208_2);

#define VkglTestCase_001209_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001209_2 ".builtin.line_and_file_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001209, VkglTestCase_001209_1, VkglTestCase_001209_2);
