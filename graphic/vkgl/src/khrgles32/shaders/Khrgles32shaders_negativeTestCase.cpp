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

#define VkglTestCase_000014_1 "KHR-GLES32.shaders."
#define VkglTestCase_000014_2 "negative.initialize"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000014, VkglTestCase_000014_1, VkglTestCase_000014_2);

#define VkglTestCase_000015_1 "KHR-GLES32.shaders.neg"
#define VkglTestCase_000015_2 "ative.constant_sequence"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000015, VkglTestCase_000015_1, VkglTestCase_000015_2);

#define VkglTestCase_000016_1 "KHR-GLES32.shaders.negative.u"
#define VkglTestCase_000016_2 "sed_uniform_precision_matching"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000016, VkglTestCase_000016_1, VkglTestCase_000016_2);
