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

#define VkglTestCase_000131_1 "KHR-GLES31.core.sample_sh"
#define VkglTestCase_000131_2 "ading.render.rgba8ui.full"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000131, VkglTestCase_000131_1, VkglTestCase_000131_2);

#define VkglTestCase_000132_1 "KHR-GLES31.core.sample_sh"
#define VkglTestCase_000132_2 "ading.render.rgba8ui.half"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000132, VkglTestCase_000132_1, VkglTestCase_000132_2);

#define VkglTestCase_000133_1 "KHR-GLES31.core.sample_sh"
#define VkglTestCase_000133_2 "ading.render.rgba8ui.none"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000133, VkglTestCase_000133_1, VkglTestCase_000133_2);
