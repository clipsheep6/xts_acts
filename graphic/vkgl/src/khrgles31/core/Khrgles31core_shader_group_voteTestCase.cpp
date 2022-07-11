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

#define VkglTestCase_002261_1 "KHR-GLES31.core.shader_"
#define VkglTestCase_002261_2 "group_vote.availability"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002261, VkglTestCase_002261_1, VkglTestCase_002261_2);

#define VkglTestCase_002262_1 "KHR-GLES31.core.shader_g"
#define VkglTestCase_002262_2 "roup_vote.all_invocations"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002262, VkglTestCase_002262_1, VkglTestCase_002262_2);

#define VkglTestCase_002263_1 "KHR-GLES31.core.shader_g"
#define VkglTestCase_002263_2 "roup_vote.any_invocation"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002263, VkglTestCase_002263_1, VkglTestCase_002263_2);

#define VkglTestCase_002264_1 "KHR-GLES31.core.shader_grou"
#define VkglTestCase_002264_2 "p_vote.all_invocations_equal"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002264, VkglTestCase_002264_1, VkglTestCase_002264_2);

#define VkglTestCase_002265_1 "KHR-GLES31.core.shader_group_v"
#define VkglTestCase_002265_2 "ote.invocations_with_variables"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002265, VkglTestCase_002265_1, VkglTestCase_002265_2);
