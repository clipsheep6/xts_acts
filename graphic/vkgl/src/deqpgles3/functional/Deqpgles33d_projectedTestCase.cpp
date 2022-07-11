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

#define VkglTestCase_025165_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025165_2 "p.3d.projected.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025165, VkglTestCase_025165_1, VkglTestCase_025165_2);

#define VkglTestCase_025166_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025166_2 ".3d.projected.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025166, VkglTestCase_025166_1, VkglTestCase_025166_2);

#define VkglTestCase_025167_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025167_2 ".3d.projected.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025167, VkglTestCase_025167_1, VkglTestCase_025167_2);

#define VkglTestCase_025168_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025168_2 "p.3d.projected.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025168, VkglTestCase_025168_1, VkglTestCase_025168_2);

#define VkglTestCase_025169_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025169_2 "p.3d.projected.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025169, VkglTestCase_025169_1, VkglTestCase_025169_2);

#define VkglTestCase_025170_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025170_2 "p.3d.projected.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025170, VkglTestCase_025170_1, VkglTestCase_025170_2);

#define VkglTestCase_025171_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025171_2 "p.3d.projected.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025171, VkglTestCase_025171_1, VkglTestCase_025171_2);

#define VkglTestCase_025172_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025172_2 "p.3d.projected.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025172, VkglTestCase_025172_1, VkglTestCase_025172_2);

#define VkglTestCase_025173_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025173_2 "p.3d.projected.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025173, VkglTestCase_025173_1, VkglTestCase_025173_2);

#define VkglTestCase_025174_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025174_2 "ap.3d.projected.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025174, VkglTestCase_025174_1, VkglTestCase_025174_2);

#define VkglTestCase_025175_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025175_2 "p.3d.projected.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025175, VkglTestCase_025175_1, VkglTestCase_025175_2);

#define VkglTestCase_025176_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025176_2 "p.3d.projected.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025176, VkglTestCase_025176_1, VkglTestCase_025176_2);
