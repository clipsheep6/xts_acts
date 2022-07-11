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
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000766_1 "KHR-GLES31.core.shader_multisample_interpolation.r"
#define VkglTestCase_000766_2 "ender.interpolate_at_offset_check.rgba32f.samples_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000766, VkglTestCase_000766_1, VkglTestCase_000766_2);

#define VkglTestCase_000767_1 "KHR-GLES31.core.shader_multisample_interpolation.r"
#define VkglTestCase_000767_2 "ender.interpolate_at_offset_check.rgba32f.samples_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000767, VkglTestCase_000767_1, VkglTestCase_000767_2);

#define VkglTestCase_000768_1 "KHR-GLES31.core.shader_multisample_interpolation.r"
#define VkglTestCase_000768_2 "ender.interpolate_at_offset_check.rgba32f.samples_4"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000768, VkglTestCase_000768_1, VkglTestCase_000768_2);
