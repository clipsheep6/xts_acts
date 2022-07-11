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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007972_1 "dEQP-GLES31.functional.tesse"
#define VkglTestCase_007972_2 "llation.winding.triangles_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007972, VkglTestCase_007972_1, VkglTestCase_007972_2);

#define VkglTestCase_007973_1 "dEQP-GLES31.functional.tesse"
#define VkglTestCase_007973_2 "llation.winding.triangles_cw"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007973, VkglTestCase_007973_1, VkglTestCase_007973_2);

#define VkglTestCase_007974_1 "dEQP-GLES31.functional.tes"
#define VkglTestCase_007974_2 "sellation.winding.quads_ccw"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007974, VkglTestCase_007974_1, VkglTestCase_007974_2);

#define VkglTestCase_007975_1 "dEQP-GLES31.functional.tes"
#define VkglTestCase_007975_2 "sellation.winding.quads_cw"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007975, VkglTestCase_007975_1, VkglTestCase_007975_2);
