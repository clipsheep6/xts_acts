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

#define VkglTestCase_032051_1 "dEQP-GLES3.functional.fbo.st"
#define VkglTestCase_032051_2 "encil.basic.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032051, VkglTestCase_032051_1, VkglTestCase_032051_2);

#define VkglTestCase_032052_1 "dEQP-GLES3.functional.fbo.stenc"
#define VkglTestCase_032052_2 "il.basic.depth32f_stencil8_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032052, VkglTestCase_032052_1, VkglTestCase_032052_2);

#define VkglTestCase_032053_1 "dEQP-GLES3.functional.fbo.st"
#define VkglTestCase_032053_2 "encil.basic.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032053, VkglTestCase_032053_1, VkglTestCase_032053_2);

#define VkglTestCase_032054_1 "dEQP-GLES3.functional.fbo.stenc"
#define VkglTestCase_032054_2 "il.basic.depth24_stencil8_depth"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032054, VkglTestCase_032054_1, VkglTestCase_032054_2);

#define VkglTestCase_032055_1 "dEQP-GLES3.functional.fbo.s"
#define VkglTestCase_032055_2 "tencil.basic.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032055, VkglTestCase_032055_1, VkglTestCase_032055_2);
