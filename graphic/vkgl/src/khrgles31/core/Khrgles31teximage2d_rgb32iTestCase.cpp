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

#define VkglTestCase_002905_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002905_2 "emodes.teximage2d.rgb32i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002905, VkglTestCase_002905_1, VkglTestCase_002905_2);

#define VkglTestCase_002906_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002906_2 "emodes.teximage2d.rgb32i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002906, VkglTestCase_002906_1, VkglTestCase_002906_2);

#define VkglTestCase_002907_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002907_2 "modes.teximage2d.rgb32i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002907, VkglTestCase_002907_1, VkglTestCase_002907_2);

#define VkglTestCase_002908_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002908_2 "emodes.teximage2d.rgb32i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002908, VkglTestCase_002908_1, VkglTestCase_002908_2);

#define VkglTestCase_002909_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002909_2 "modes.teximage2d.rgb32i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002909, VkglTestCase_002909_1, VkglTestCase_002909_2);

#define VkglTestCase_002910_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002910_2 "modes.teximage2d.rgb32i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002910, VkglTestCase_002910_1, VkglTestCase_002910_2);
