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

#define VkglTestCase_003892_1 "KHR-GLES3.packed_depth_stencil.ve"
#define VkglTestCase_003892_2 "rify_read_pixels.depth24_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003892, VkglTestCase_003892_1, VkglTestCase_003892_2);

#define VkglTestCase_003893_1 "KHR-GLES3.packed_depth_stencil.ve"
#define VkglTestCase_003893_2 "rify_read_pixels.depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003893, VkglTestCase_003893_1, VkglTestCase_003893_2);
