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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002283_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002283_2 "ck.random.all_shared_buffer.0"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002283, VkglTestCase_002283_1, VkglTestCase_002283_2);

#define VkglTestCase_002284_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002284_2 "ck.random.all_shared_buffer.1"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002284, VkglTestCase_002284_1, VkglTestCase_002284_2);

#define VkglTestCase_002285_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002285_2 "ck.random.all_shared_buffer.2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002285, VkglTestCase_002285_1, VkglTestCase_002285_2);

#define VkglTestCase_002286_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002286_2 "ck.random.all_shared_buffer.3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002286, VkglTestCase_002286_1, VkglTestCase_002286_2);

#define VkglTestCase_002287_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002287_2 "ck.random.all_shared_buffer.4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002287, VkglTestCase_002287_1, VkglTestCase_002287_2);

#define VkglTestCase_002288_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002288_2 "ck.random.all_shared_buffer.5"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002288, VkglTestCase_002288_1, VkglTestCase_002288_2);

#define VkglTestCase_002289_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002289_2 "ck.random.all_shared_buffer.6"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002289, VkglTestCase_002289_1, VkglTestCase_002289_2);

#define VkglTestCase_002290_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002290_2 "ck.random.all_shared_buffer.7"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002290, VkglTestCase_002290_1, VkglTestCase_002290_2);

#define VkglTestCase_002291_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002291_2 "ck.random.all_shared_buffer.8"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002291, VkglTestCase_002291_1, VkglTestCase_002291_2);

#define VkglTestCase_002292_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002292_2 "ck.random.all_shared_buffer.9"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002292, VkglTestCase_002292_1, VkglTestCase_002292_2);

#define VkglTestCase_002293_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002293_2 "ck.random.all_shared_buffer.10"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002293, VkglTestCase_002293_1, VkglTestCase_002293_2);

#define VkglTestCase_002294_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002294_2 "ck.random.all_shared_buffer.11"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002294, VkglTestCase_002294_1, VkglTestCase_002294_2);

#define VkglTestCase_002295_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002295_2 "ck.random.all_shared_buffer.12"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002295, VkglTestCase_002295_1, VkglTestCase_002295_2);

#define VkglTestCase_002296_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002296_2 "ck.random.all_shared_buffer.13"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002296, VkglTestCase_002296_1, VkglTestCase_002296_2);

#define VkglTestCase_002297_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002297_2 "ck.random.all_shared_buffer.14"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002297, VkglTestCase_002297_1, VkglTestCase_002297_2);

#define VkglTestCase_002298_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002298_2 "ck.random.all_shared_buffer.15"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002298, VkglTestCase_002298_1, VkglTestCase_002298_2);

#define VkglTestCase_002299_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002299_2 "ck.random.all_shared_buffer.16"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002299, VkglTestCase_002299_1, VkglTestCase_002299_2);

#define VkglTestCase_002300_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002300_2 "ck.random.all_shared_buffer.17"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002300, VkglTestCase_002300_1, VkglTestCase_002300_2);

#define VkglTestCase_002301_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002301_2 "ck.random.all_shared_buffer.18"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002301, VkglTestCase_002301_1, VkglTestCase_002301_2);

#define VkglTestCase_002302_1 "KHR-GLES3.shaders.uniform_blo"
#define VkglTestCase_002302_2 "ck.random.all_shared_buffer.19"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002302, VkglTestCase_002302_1, VkglTestCase_002302_2);
