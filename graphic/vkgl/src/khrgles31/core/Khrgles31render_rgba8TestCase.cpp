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

#define VkglTestCase_000125_1 "KHR-GLES31.core.sample_s"
#define VkglTestCase_000125_2 "hading.render.rgba8.full"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000125, VkglTestCase_000125_1, VkglTestCase_000125_2);

#define VkglTestCase_000126_1 "KHR-GLES31.core.sample_s"
#define VkglTestCase_000126_2 "hading.render.rgba8.half"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000126, VkglTestCase_000126_1, VkglTestCase_000126_2);

#define VkglTestCase_000127_1 "KHR-GLES31.core.sample_s"
#define VkglTestCase_000127_2 "hading.render.rgba8.none"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000127, VkglTestCase_000127_1, VkglTestCase_000127_2);
