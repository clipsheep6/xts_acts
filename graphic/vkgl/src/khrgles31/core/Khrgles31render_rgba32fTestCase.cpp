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

#define VkglTestCase_000134_1 "KHR-GLES31.core.sample_sh"
#define VkglTestCase_000134_2 "ading.render.rgba32f.full"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000134, VkglTestCase_000134_1, VkglTestCase_000134_2);

#define VkglTestCase_000135_1 "KHR-GLES31.core.sample_sh"
#define VkglTestCase_000135_2 "ading.render.rgba32f.half"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000135, VkglTestCase_000135_1, VkglTestCase_000135_2);

#define VkglTestCase_000136_1 "KHR-GLES31.core.sample_sh"
#define VkglTestCase_000136_2 "ading.render.rgba32f.none"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000136, VkglTestCase_000136_1, VkglTestCase_000136_2);
