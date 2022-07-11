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

#define VkglTestCase_002450_1 "KHR-GLES31.core.geometry_shad"
#define VkglTestCase_002450_2 "er.input.gl_in_array_contents"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002450, VkglTestCase_002450_1, VkglTestCase_002450_2);

#define VkglTestCase_002451_1 "KHR-GLES31.core.geometry_sha"
#define VkglTestCase_002451_2 "der.input.gl_in_array_length"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002451, VkglTestCase_002451_1, VkglTestCase_002451_2);

#define VkglTestCase_002452_1 "KHR-GLES31.core.geometry_sha"
#define VkglTestCase_002452_2 "der.input.gl_pointsize_value"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002452, VkglTestCase_002452_1, VkglTestCase_002452_2);

#define VkglTestCase_002453_1 "KHR-GLES31.core.geometry_sh"
#define VkglTestCase_002453_2 "ader.input.gl_position_value"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002453, VkglTestCase_002453_1, VkglTestCase_002453_2);
