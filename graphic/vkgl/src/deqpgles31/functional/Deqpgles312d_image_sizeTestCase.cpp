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

#define VkglTestCase_011348_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011348_2 "store.2d.image_size.readonly_32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011348, VkglTestCase_011348_1, VkglTestCase_011348_2);

#define VkglTestCase_011349_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011349_2 "store.2d.image_size.readonly_12x34"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011349, VkglTestCase_011349_1, VkglTestCase_011349_2);

#define VkglTestCase_011350_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011350_2 "_store.2d.image_size.readonly_1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011350, VkglTestCase_011350_1, VkglTestCase_011350_2);

#define VkglTestCase_011351_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011351_2 "_store.2d.image_size.readonly_7x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011351, VkglTestCase_011351_1, VkglTestCase_011351_2);

#define VkglTestCase_011352_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011352_2 "store.2d.image_size.writeonly_32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011352, VkglTestCase_011352_1, VkglTestCase_011352_2);

#define VkglTestCase_011353_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011353_2 "store.2d.image_size.writeonly_12x34"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011353, VkglTestCase_011353_1, VkglTestCase_011353_2);

#define VkglTestCase_011354_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011354_2 "_store.2d.image_size.writeonly_1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011354, VkglTestCase_011354_1, VkglTestCase_011354_2);

#define VkglTestCase_011355_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011355_2 "_store.2d.image_size.writeonly_7x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011355, VkglTestCase_011355_1, VkglTestCase_011355_2);

#define VkglTestCase_011356_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011356_2 ".2d.image_size.readonly_writeonly_32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011356, VkglTestCase_011356_1, VkglTestCase_011356_2);

#define VkglTestCase_011357_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011357_2 ".2d.image_size.readonly_writeonly_12x34"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011357, VkglTestCase_011357_1, VkglTestCase_011357_2);

#define VkglTestCase_011358_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011358_2 "e.2d.image_size.readonly_writeonly_1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011358, VkglTestCase_011358_1, VkglTestCase_011358_2);

#define VkglTestCase_011359_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011359_2 "e.2d.image_size.readonly_writeonly_7x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011359, VkglTestCase_011359_1, VkglTestCase_011359_2);
