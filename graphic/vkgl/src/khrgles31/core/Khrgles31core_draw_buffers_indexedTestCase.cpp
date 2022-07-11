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
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002696_1 "KHR-GLES31.core.draw_b"
#define VkglTestCase_002696_2 "uffers_indexed.coverage"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002696, VkglTestCase_002696_1, VkglTestCase_002696_2);

#define VkglTestCase_002697_1 "KHR-GLES31.core.draw_buff"
#define VkglTestCase_002697_2 "ers_indexed.default_state"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002697, VkglTestCase_002697_1, VkglTestCase_002697_2);

#define VkglTestCase_002698_1 "KHR-GLES31.core.draw_b"
#define VkglTestCase_002698_2 "uffers_indexed.set_get"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002698, VkglTestCase_002698_1, VkglTestCase_002698_2);

#define VkglTestCase_002699_1 "KHR-GLES31.core.draw_buf"
#define VkglTestCase_002699_2 "fers_indexed.color_masks"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002699, VkglTestCase_002699_1, VkglTestCase_002699_2);

#define VkglTestCase_002700_1 "KHR-GLES31.core.draw_b"
#define VkglTestCase_002700_2 "uffers_indexed.blending"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002700, VkglTestCase_002700_1, VkglTestCase_002700_2);

#define VkglTestCase_002701_1 "KHR-GLES31.core.draw_b"
#define VkglTestCase_002701_2 "uffers_indexed.negative"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002701, VkglTestCase_002701_1, VkglTestCase_002701_2);
