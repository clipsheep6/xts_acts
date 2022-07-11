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

#define VkglTestCase_000072_1 "KHR-GLES32.core.geometry_shad"
#define VkglTestCase_000072_2 "er.input.gl_in_array_contents"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000072, VkglTestCase_000072_1, VkglTestCase_000072_2);

#define VkglTestCase_000073_1 "KHR-GLES32.core.geometry_sha"
#define VkglTestCase_000073_2 "der.input.gl_in_array_length"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000073, VkglTestCase_000073_1, VkglTestCase_000073_2);

#define VkglTestCase_000074_1 "KHR-GLES32.core.geometry_sha"
#define VkglTestCase_000074_2 "der.input.gl_pointsize_value"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000074, VkglTestCase_000074_1, VkglTestCase_000074_2);

#define VkglTestCase_000075_1 "KHR-GLES32.core.geometry_sh"
#define VkglTestCase_000075_2 "ader.input.gl_position_value"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000075, VkglTestCase_000075_1, VkglTestCase_000075_2);
