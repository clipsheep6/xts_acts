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

#define VkglTestCase_011942_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011942_2 "store.buffer.image_size.readonly_32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011942, VkglTestCase_011942_1, VkglTestCase_011942_2);

#define VkglTestCase_011943_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011943_2 "store.buffer.image_size.readonly_12"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011943, VkglTestCase_011943_1, VkglTestCase_011943_2);

#define VkglTestCase_011944_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011944_2 "store.buffer.image_size.readonly_1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011944, VkglTestCase_011944_1, VkglTestCase_011944_2);

#define VkglTestCase_011945_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011945_2 "store.buffer.image_size.readonly_7"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011945, VkglTestCase_011945_1, VkglTestCase_011945_2);

#define VkglTestCase_011946_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011946_2 "tore.buffer.image_size.writeonly_32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011946, VkglTestCase_011946_1, VkglTestCase_011946_2);

#define VkglTestCase_011947_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011947_2 "tore.buffer.image_size.writeonly_12"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011947, VkglTestCase_011947_1, VkglTestCase_011947_2);

#define VkglTestCase_011948_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011948_2 "store.buffer.image_size.writeonly_1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011948, VkglTestCase_011948_1, VkglTestCase_011948_2);

#define VkglTestCase_011949_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011949_2 "store.buffer.image_size.writeonly_7"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011949, VkglTestCase_011949_1, VkglTestCase_011949_2);

#define VkglTestCase_011950_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011950_2 ".buffer.image_size.readonly_writeonly_32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011950, VkglTestCase_011950_1, VkglTestCase_011950_2);

#define VkglTestCase_011951_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011951_2 ".buffer.image_size.readonly_writeonly_12"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011951, VkglTestCase_011951_1, VkglTestCase_011951_2);

#define VkglTestCase_011952_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011952_2 ".buffer.image_size.readonly_writeonly_1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011952, VkglTestCase_011952_1, VkglTestCase_011952_2);

#define VkglTestCase_011953_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011953_2 ".buffer.image_size.readonly_writeonly_7"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011953, VkglTestCase_011953_1, VkglTestCase_011953_2);
