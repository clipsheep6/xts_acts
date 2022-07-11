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

#define VkglTestCase_000319_1 "KHR-GLES32.core.draw_b"
#define VkglTestCase_000319_2 "uffers_indexed.coverage"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000319, VkglTestCase_000319_1, VkglTestCase_000319_2);

#define VkglTestCase_000320_1 "KHR-GLES32.core.draw_buff"
#define VkglTestCase_000320_2 "ers_indexed.default_state"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000320, VkglTestCase_000320_1, VkglTestCase_000320_2);

#define VkglTestCase_000321_1 "KHR-GLES32.core.draw_b"
#define VkglTestCase_000321_2 "uffers_indexed.set_get"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000321, VkglTestCase_000321_1, VkglTestCase_000321_2);

#define VkglTestCase_000322_1 "KHR-GLES32.core.draw_buf"
#define VkglTestCase_000322_2 "fers_indexed.color_masks"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000322, VkglTestCase_000322_1, VkglTestCase_000322_2);

#define VkglTestCase_000323_1 "KHR-GLES32.core.draw_b"
#define VkglTestCase_000323_2 "uffers_indexed.blending"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000323, VkglTestCase_000323_1, VkglTestCase_000323_2);

#define VkglTestCase_000324_1 "KHR-GLES32.core.draw_b"
#define VkglTestCase_000324_2 "uffers_indexed.negative"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000324, VkglTestCase_000324_1, VkglTestCase_000324_2);
