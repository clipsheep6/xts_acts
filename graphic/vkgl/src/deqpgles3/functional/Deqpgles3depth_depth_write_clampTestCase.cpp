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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032041_1 "dEQP-GLES3.functional.fbo.depth.de"
#define VkglTestCase_032041_2 "pth_write_clamp.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032041, VkglTestCase_032041_1, VkglTestCase_032041_2);

#define VkglTestCase_032042_1 "dEQP-GLES3.functional.fbo.depth.d"
#define VkglTestCase_032042_2 "epth_write_clamp.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032042, VkglTestCase_032042_1, VkglTestCase_032042_2);

#define VkglTestCase_032043_1 "dEQP-GLES3.functional.fbo.depth.d"
#define VkglTestCase_032043_2 "epth_write_clamp.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032043, VkglTestCase_032043_1, VkglTestCase_032043_2);

#define VkglTestCase_032044_1 "dEQP-GLES3.functional.fbo.depth.d"
#define VkglTestCase_032044_2 "epth_write_clamp.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032044, VkglTestCase_032044_1, VkglTestCase_032044_2);

#define VkglTestCase_032045_1 "dEQP-GLES3.functional.fbo.depth.d"
#define VkglTestCase_032045_2 "epth_write_clamp.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032045, VkglTestCase_032045_1, VkglTestCase_032045_2);
