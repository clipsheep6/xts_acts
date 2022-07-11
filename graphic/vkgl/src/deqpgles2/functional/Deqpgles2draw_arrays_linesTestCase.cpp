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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016326_1 "dEQP-GLES2.functional.draw.dra"
#define VkglTestCase_016326_2 "w_arrays.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016326, VkglTestCase_016326_1, VkglTestCase_016326_2);

#define VkglTestCase_016327_1 "dEQP-GLES2.functional.draw.draw_"
#define VkglTestCase_016327_2 "arrays.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016327, VkglTestCase_016327_1, VkglTestCase_016327_2);

#define VkglTestCase_016328_1 "dEQP-GLES2.functional.draw.draw"
#define VkglTestCase_016328_2 "_arrays.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles20017TestSuite, TestCase_016328, VkglTestCase_016328_1, VkglTestCase_016328_2);
