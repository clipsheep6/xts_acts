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
#include "../ActsKhrgles320002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001026_1 "KHR-GLES32.core.separable_pr"
#define VkglTestCase_001026_2 "ograms_tf.tessellation_active"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001026, VkglTestCase_001026_1, VkglTestCase_001026_2);

#define VkglTestCase_001027_1 "KHR-GLES32.core.separable_"
#define VkglTestCase_001027_2 "programs_tf.geometry_active"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001027, VkglTestCase_001027_1, VkglTestCase_001027_2);
