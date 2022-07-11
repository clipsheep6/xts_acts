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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025153_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025153_2 "ap.3d.affine.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025153, VkglTestCase_025153_1, VkglTestCase_025153_2);

#define VkglTestCase_025154_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025154_2 "ap.3d.affine.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025154, VkglTestCase_025154_1, VkglTestCase_025154_2);

#define VkglTestCase_025155_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025155_2 "ap.3d.affine.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025155, VkglTestCase_025155_1, VkglTestCase_025155_2);

#define VkglTestCase_025156_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025156_2 "map.3d.affine.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025156, VkglTestCase_025156_1, VkglTestCase_025156_2);

#define VkglTestCase_025157_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025157_2 "ap.3d.affine.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025157, VkglTestCase_025157_1, VkglTestCase_025157_2);

#define VkglTestCase_025158_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025158_2 "ap.3d.affine.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025158, VkglTestCase_025158_1, VkglTestCase_025158_2);

#define VkglTestCase_025159_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025159_2 "map.3d.affine.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025159, VkglTestCase_025159_1, VkglTestCase_025159_2);

#define VkglTestCase_025160_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025160_2 "ap.3d.affine.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025160, VkglTestCase_025160_1, VkglTestCase_025160_2);

#define VkglTestCase_025161_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025161_2 "ap.3d.affine.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025161, VkglTestCase_025161_1, VkglTestCase_025161_2);

#define VkglTestCase_025162_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025162_2 "map.3d.affine.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025162, VkglTestCase_025162_1, VkglTestCase_025162_2);

#define VkglTestCase_025163_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025163_2 "map.3d.affine.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025163, VkglTestCase_025163_1, VkglTestCase_025163_2);

#define VkglTestCase_025164_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025164_2 "map.3d.affine.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025164, VkglTestCase_025164_1, VkglTestCase_025164_2);
