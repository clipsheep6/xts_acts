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

#define VkglTestCase_000712_1 "KHR-GLES31.core.shader_multisample_interpolation.r"
#define VkglTestCase_000712_2 "ender.interpolate_at_sample_check.rgba8i.samples_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000712, VkglTestCase_000712_1, VkglTestCase_000712_2);

#define VkglTestCase_000713_1 "KHR-GLES31.core.shader_multisample_interpolation.r"
#define VkglTestCase_000713_2 "ender.interpolate_at_sample_check.rgba8i.samples_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000713, VkglTestCase_000713_1, VkglTestCase_000713_2);

#define VkglTestCase_000714_1 "KHR-GLES31.core.shader_multisample_interpolation.r"
#define VkglTestCase_000714_2 "ender.interpolate_at_sample_check.rgba8i.samples_4"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000714, VkglTestCase_000714_1, VkglTestCase_000714_2);
