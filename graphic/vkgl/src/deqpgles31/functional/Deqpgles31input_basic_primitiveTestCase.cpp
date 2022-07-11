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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016321_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016321_2 "ading.input.basic_primitive.points"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016321, VkglTestCase_016321_1, VkglTestCase_016321_2);

#define VkglTestCase_016322_1 "dEQP-GLES31.functional.geometry_s"
#define VkglTestCase_016322_2 "hading.input.basic_primitive.lines"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016322, VkglTestCase_016322_1, VkglTestCase_016322_2);

#define VkglTestCase_016323_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016323_2 "ding.input.basic_primitive.line_loop"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016323, VkglTestCase_016323_1, VkglTestCase_016323_2);

#define VkglTestCase_016324_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016324_2 "ing.input.basic_primitive.line_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016324, VkglTestCase_016324_1, VkglTestCase_016324_2);

#define VkglTestCase_016325_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016325_2 "ding.input.basic_primitive.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016325, VkglTestCase_016325_1, VkglTestCase_016325_2);

#define VkglTestCase_016326_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016326_2 "g.input.basic_primitive.triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016326, VkglTestCase_016326_1, VkglTestCase_016326_2);

#define VkglTestCase_016327_1 "dEQP-GLES31.functional.geometry_shadi"
#define VkglTestCase_016327_2 "ng.input.basic_primitive.triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016327, VkglTestCase_016327_1, VkglTestCase_016327_2);

#define VkglTestCase_016328_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016328_2 "g.input.basic_primitive.lines_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016328, VkglTestCase_016328_1, VkglTestCase_016328_2);

#define VkglTestCase_016329_1 "dEQP-GLES31.functional.geometry_shading.i"
#define VkglTestCase_016329_2 "nput.basic_primitive.line_strip_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016329, VkglTestCase_016329_1, VkglTestCase_016329_2);

#define VkglTestCase_016330_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016330_2 "input.basic_primitive.triangles_adjacency"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016330, VkglTestCase_016330_1, VkglTestCase_016330_2);
