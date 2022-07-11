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

#define VkglTestCase_025011_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025011_2 "p.2d.projected.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025011, VkglTestCase_025011_1, VkglTestCase_025011_2);

#define VkglTestCase_025012_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025012_2 ".2d.projected.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025012, VkglTestCase_025012_1, VkglTestCase_025012_2);

#define VkglTestCase_025013_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025013_2 ".2d.projected.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025013, VkglTestCase_025013_1, VkglTestCase_025013_2);

#define VkglTestCase_025014_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025014_2 "p.2d.projected.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025014, VkglTestCase_025014_1, VkglTestCase_025014_2);

#define VkglTestCase_025015_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025015_2 "p.2d.projected.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025015, VkglTestCase_025015_1, VkglTestCase_025015_2);

#define VkglTestCase_025016_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025016_2 "p.2d.projected.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025016, VkglTestCase_025016_1, VkglTestCase_025016_2);

#define VkglTestCase_025017_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025017_2 "p.2d.projected.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025017, VkglTestCase_025017_1, VkglTestCase_025017_2);

#define VkglTestCase_025018_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025018_2 "p.2d.projected.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025018, VkglTestCase_025018_1, VkglTestCase_025018_2);

#define VkglTestCase_025019_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025019_2 "p.2d.projected.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025019, VkglTestCase_025019_1, VkglTestCase_025019_2);

#define VkglTestCase_025020_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025020_2 "ap.2d.projected.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025020, VkglTestCase_025020_1, VkglTestCase_025020_2);

#define VkglTestCase_025021_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025021_2 "p.2d.projected.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025021, VkglTestCase_025021_1, VkglTestCase_025021_2);

#define VkglTestCase_025022_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025022_2 "p.2d.projected.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025022, VkglTestCase_025022_1, VkglTestCase_025022_2);
