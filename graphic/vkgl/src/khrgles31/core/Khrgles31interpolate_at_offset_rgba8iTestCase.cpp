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

#define VkglTestCase_000748_1 "KHR-GLES31.core.shader_multisample_interpolatio"
#define VkglTestCase_000748_2 "n.render.interpolate_at_offset.rgba8i.samples_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000748, VkglTestCase_000748_1, VkglTestCase_000748_2);

#define VkglTestCase_000749_1 "KHR-GLES31.core.shader_multisample_interpolatio"
#define VkglTestCase_000749_2 "n.render.interpolate_at_offset.rgba8i.samples_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000749, VkglTestCase_000749_1, VkglTestCase_000749_2);

#define VkglTestCase_000750_1 "KHR-GLES31.core.shader_multisample_interpolatio"
#define VkglTestCase_000750_2 "n.render.interpolate_at_offset.rgba8i.samples_4"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000750, VkglTestCase_000750_1, VkglTestCase_000750_2);
