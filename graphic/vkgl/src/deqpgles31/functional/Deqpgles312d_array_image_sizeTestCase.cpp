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

#define VkglTestCase_011819_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011819_2 "e.2d_array.image_size.readonly_32x32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011819, VkglTestCase_011819_1, VkglTestCase_011819_2);

#define VkglTestCase_011820_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011820_2 "e.2d_array.image_size.readonly_12x34x56"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011820, VkglTestCase_011820_1, VkglTestCase_011820_2);

#define VkglTestCase_011821_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011821_2 "re.2d_array.image_size.readonly_1x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011821, VkglTestCase_011821_1, VkglTestCase_011821_2);

#define VkglTestCase_011822_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011822_2 "re.2d_array.image_size.readonly_7x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011822, VkglTestCase_011822_1, VkglTestCase_011822_2);

#define VkglTestCase_011823_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011823_2 ".2d_array.image_size.writeonly_32x32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011823, VkglTestCase_011823_1, VkglTestCase_011823_2);

#define VkglTestCase_011824_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011824_2 ".2d_array.image_size.writeonly_12x34x56"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011824, VkglTestCase_011824_1, VkglTestCase_011824_2);

#define VkglTestCase_011825_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011825_2 "re.2d_array.image_size.writeonly_1x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011825, VkglTestCase_011825_1, VkglTestCase_011825_2);

#define VkglTestCase_011826_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011826_2 "re.2d_array.image_size.writeonly_7x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011826, VkglTestCase_011826_1, VkglTestCase_011826_2);

#define VkglTestCase_011827_1 "dEQP-GLES31.functional.image_load_store.2d_"
#define VkglTestCase_011827_2 "array.image_size.readonly_writeonly_32x32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011827, VkglTestCase_011827_1, VkglTestCase_011827_2);

#define VkglTestCase_011828_1 "dEQP-GLES31.functional.image_load_store.2d_"
#define VkglTestCase_011828_2 "array.image_size.readonly_writeonly_12x34x56"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011828, VkglTestCase_011828_1, VkglTestCase_011828_2);

#define VkglTestCase_011829_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011829_2 "_array.image_size.readonly_writeonly_1x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011829, VkglTestCase_011829_1, VkglTestCase_011829_2);

#define VkglTestCase_011830_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011830_2 "_array.image_size.readonly_writeonly_7x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011830, VkglTestCase_011830_1, VkglTestCase_011830_2);
