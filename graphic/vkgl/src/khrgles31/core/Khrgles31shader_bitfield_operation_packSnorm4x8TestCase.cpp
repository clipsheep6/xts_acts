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

#define VkglTestCase_000380_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000380_2 "eld_operation.packSnorm4x8.0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000380, VkglTestCase_000380_1, VkglTestCase_000380_2);

#define VkglTestCase_000381_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000381_2 "eld_operation.packSnorm4x8.1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000381, VkglTestCase_000381_1, VkglTestCase_000381_2);

#define VkglTestCase_000382_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000382_2 "eld_operation.packSnorm4x8.2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000382, VkglTestCase_000382_1, VkglTestCase_000382_2);

#define VkglTestCase_000383_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000383_2 "eld_operation.packSnorm4x8.3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000383, VkglTestCase_000383_1, VkglTestCase_000383_2);
