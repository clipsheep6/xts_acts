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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024999_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_024999_2 "ap.2d.affine.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024999, VkglTestCase_024999_1, VkglTestCase_024999_2);

#define VkglTestCase_025000_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025000_2 "ap.2d.affine.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025000, VkglTestCase_025000_1, VkglTestCase_025000_2);

#define VkglTestCase_025001_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025001_2 "ap.2d.affine.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025001, VkglTestCase_025001_1, VkglTestCase_025001_2);

#define VkglTestCase_025002_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025002_2 "map.2d.affine.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025002, VkglTestCase_025002_1, VkglTestCase_025002_2);

#define VkglTestCase_025003_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025003_2 "ap.2d.affine.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025003, VkglTestCase_025003_1, VkglTestCase_025003_2);

#define VkglTestCase_025004_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025004_2 "ap.2d.affine.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025004, VkglTestCase_025004_1, VkglTestCase_025004_2);

#define VkglTestCase_025005_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025005_2 "map.2d.affine.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025005, VkglTestCase_025005_1, VkglTestCase_025005_2);

#define VkglTestCase_025006_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025006_2 "ap.2d.affine.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025006, VkglTestCase_025006_1, VkglTestCase_025006_2);

#define VkglTestCase_025007_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025007_2 "ap.2d.affine.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025007, VkglTestCase_025007_1, VkglTestCase_025007_2);

#define VkglTestCase_025008_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025008_2 "map.2d.affine.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025008, VkglTestCase_025008_1, VkglTestCase_025008_2);

#define VkglTestCase_025009_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025009_2 "map.2d.affine.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025009, VkglTestCase_025009_1, VkglTestCase_025009_2);

#define VkglTestCase_025010_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025010_2 "map.2d.affine.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_025010, VkglTestCase_025010_1, VkglTestCase_025010_2);
