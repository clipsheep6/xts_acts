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
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012259_1 "dEQP-GLES31.functional.atomic_coun"
#define VkglTestCase_012259_2 "ter.layout.invalid.invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012259, VkglTestCase_012259_1, VkglTestCase_012259_2);

#define VkglTestCase_012260_1 "dEQP-GLES31.functional.atomic_counter."
#define VkglTestCase_012260_2 "layout.invalid.invalid_default_binding"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012260, VkglTestCase_012260_1, VkglTestCase_012260_2);

#define VkglTestCase_012261_1 "dEQP-GLES31.functional.atomic_counte"
#define VkglTestCase_012261_2 "r.layout.invalid.invalid_offset_align"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012261, VkglTestCase_012261_1, VkglTestCase_012261_2);

#define VkglTestCase_012262_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012262_2 ".layout.invalid.invalid_offset_overlap"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012262, VkglTestCase_012262_1, VkglTestCase_012262_2);

#define VkglTestCase_012263_1 "dEQP-GLES31.functional.atomic_counter"
#define VkglTestCase_012263_2 ".layout.invalid.invalid_default_offset"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012263, VkglTestCase_012263_1, VkglTestCase_012263_2);
