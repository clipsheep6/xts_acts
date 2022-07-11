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

#define VkglTestCase_011505_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011505_2 "tore.cube.image_size.readonly_32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011505, VkglTestCase_011505_1, VkglTestCase_011505_2);

#define VkglTestCase_011506_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011506_2 "tore.cube.image_size.readonly_12x12"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011506, VkglTestCase_011506_1, VkglTestCase_011506_2);

#define VkglTestCase_011507_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011507_2 "store.cube.image_size.readonly_1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011507, VkglTestCase_011507_1, VkglTestCase_011507_2);

#define VkglTestCase_011508_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011508_2 "store.cube.image_size.readonly_7x7"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011508, VkglTestCase_011508_1, VkglTestCase_011508_2);

#define VkglTestCase_011509_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011509_2 "tore.cube.image_size.writeonly_32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011509, VkglTestCase_011509_1, VkglTestCase_011509_2);

#define VkglTestCase_011510_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011510_2 "tore.cube.image_size.writeonly_12x12"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011510, VkglTestCase_011510_1, VkglTestCase_011510_2);

#define VkglTestCase_011511_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011511_2 "store.cube.image_size.writeonly_1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011511, VkglTestCase_011511_1, VkglTestCase_011511_2);

#define VkglTestCase_011512_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011512_2 "store.cube.image_size.writeonly_7x7"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011512, VkglTestCase_011512_1, VkglTestCase_011512_2);

#define VkglTestCase_011513_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011513_2 "cube.image_size.readonly_writeonly_32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011513, VkglTestCase_011513_1, VkglTestCase_011513_2);

#define VkglTestCase_011514_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011514_2 "cube.image_size.readonly_writeonly_12x12"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011514, VkglTestCase_011514_1, VkglTestCase_011514_2);

#define VkglTestCase_011515_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011515_2 ".cube.image_size.readonly_writeonly_1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011515, VkglTestCase_011515_1, VkglTestCase_011515_2);

#define VkglTestCase_011516_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011516_2 ".cube.image_size.readonly_writeonly_7x7"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011516, VkglTestCase_011516_1, VkglTestCase_011516_2);
