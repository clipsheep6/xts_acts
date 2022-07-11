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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011287_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011287_2 "_store.2d.qualifiers.coherent_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011287, VkglTestCase_011287_1, VkglTestCase_011287_2);

#define VkglTestCase_011288_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011288_2 "_store.2d.qualifiers.volatile_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011288, VkglTestCase_011288_1, VkglTestCase_011288_2);

#define VkglTestCase_011289_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011289_2 "store.2d.qualifiers.coherent_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011289, VkglTestCase_011289_1, VkglTestCase_011289_2);

#define VkglTestCase_011290_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011290_2 "store.2d.qualifiers.volatile_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011290, VkglTestCase_011290_1, VkglTestCase_011290_2);

#define VkglTestCase_011291_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011291_2 "_store.2d.qualifiers.coherent_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011291, VkglTestCase_011291_1, VkglTestCase_011291_2);

#define VkglTestCase_011292_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011292_2 "_store.2d.qualifiers.volatile_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011292, VkglTestCase_011292_1, VkglTestCase_011292_2);

#define VkglTestCase_011293_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011293_2 "ad_store.2d.qualifiers.restrict"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011293, VkglTestCase_011293_1, VkglTestCase_011293_2);
