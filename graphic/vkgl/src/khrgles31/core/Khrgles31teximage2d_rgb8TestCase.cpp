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

#define VkglTestCase_002839_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002839_2 "gemodes.teximage2d.rgb8.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002839, VkglTestCase_002839_1, VkglTestCase_002839_2);

#define VkglTestCase_002840_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002840_2 "gemodes.teximage2d.rgb8.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002840, VkglTestCase_002840_1, VkglTestCase_002840_2);

#define VkglTestCase_002841_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002841_2 "emodes.teximage2d.rgb8.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002841, VkglTestCase_002841_1, VkglTestCase_002841_2);

#define VkglTestCase_002842_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002842_2 "gemodes.teximage2d.rgb8.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002842, VkglTestCase_002842_1, VkglTestCase_002842_2);

#define VkglTestCase_002843_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002843_2 "emodes.teximage2d.rgb8.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002843, VkglTestCase_002843_1, VkglTestCase_002843_2);

#define VkglTestCase_002844_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002844_2 "emodes.teximage2d.rgb8.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002844, VkglTestCase_002844_1, VkglTestCase_002844_2);
