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

#define VkglTestCase_000097_1 "KHR-GLES32.core.geometry_shad"
#define VkglTestCase_000097_2 "er.blitting.layered_nonlayered"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000097, VkglTestCase_000097_1, VkglTestCase_000097_2);

#define VkglTestCase_000098_1 "KHR-GLES32.core.geometry_shad"
#define VkglTestCase_000098_2 "er.blitting.nonlayered_layered"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000098, VkglTestCase_000098_1, VkglTestCase_000098_2);

#define VkglTestCase_000099_1 "KHR-GLES32.core.geometry_sha"
#define VkglTestCase_000099_2 "der.blitting.layered_layered"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000099, VkglTestCase_000099_1, VkglTestCase_000099_2);
