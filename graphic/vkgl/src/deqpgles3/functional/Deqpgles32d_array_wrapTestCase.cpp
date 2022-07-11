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
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027074_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027074_2 "ertex.2d_array.wrap.clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027074, VkglTestCase_027074_1, VkglTestCase_027074_2);

#define VkglTestCase_027075_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027075_2 "ertex.2d_array.wrap.clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027075, VkglTestCase_027075_1, VkglTestCase_027075_2);

#define VkglTestCase_027076_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027076_2 "ertex.2d_array.wrap.clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027076, VkglTestCase_027076_1, VkglTestCase_027076_2);

#define VkglTestCase_027077_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027077_2 "ertex.2d_array.wrap.repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027077, VkglTestCase_027077_1, VkglTestCase_027077_2);

#define VkglTestCase_027078_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027078_2 "rtex.2d_array.wrap.repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027078, VkglTestCase_027078_1, VkglTestCase_027078_2);

#define VkglTestCase_027079_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027079_2 "rtex.2d_array.wrap.repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027079, VkglTestCase_027079_1, VkglTestCase_027079_2);

#define VkglTestCase_027080_1 "dEQP-GLES3.functional.texture.v"
#define VkglTestCase_027080_2 "ertex.2d_array.wrap.mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027080, VkglTestCase_027080_1, VkglTestCase_027080_2);

#define VkglTestCase_027081_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027081_2 "rtex.2d_array.wrap.mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027081, VkglTestCase_027081_1, VkglTestCase_027081_2);

#define VkglTestCase_027082_1 "dEQP-GLES3.functional.texture.ve"
#define VkglTestCase_027082_2 "rtex.2d_array.wrap.mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027082, VkglTestCase_027082_1, VkglTestCase_027082_2);
