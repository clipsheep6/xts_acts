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

#define VkglTestCase_032741_1 "dEQP-GLES3.functional.fbo.msaa.r"
#define VkglTestCase_032741_2 "enderbuffer_resize.nonms_to_nonms"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032741, VkglTestCase_032741_1, VkglTestCase_032741_2);

#define VkglTestCase_032742_1 "dEQP-GLES3.functional.fbo.msaa."
#define VkglTestCase_032742_2 "renderbuffer_resize.nonms_to_ms"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032742, VkglTestCase_032742_1, VkglTestCase_032742_2);

#define VkglTestCase_032743_1 "dEQP-GLES3.functional.fbo.msaa."
#define VkglTestCase_032743_2 "renderbuffer_resize.ms_to_nonms"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032743, VkglTestCase_032743_1, VkglTestCase_032743_2);

#define VkglTestCase_032744_1 "dEQP-GLES3.functional.fbo.msa"
#define VkglTestCase_032744_2 "a.renderbuffer_resize.ms_to_ms"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032744, VkglTestCase_032744_1, VkglTestCase_032744_2);
