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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012659_1 "dEQP-GLES2.functional.fbo.re"
#define VkglTestCase_012659_2 "nder.repeated_clear.tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012659, VkglTestCase_012659_1, VkglTestCase_012659_2);

#define VkglTestCase_012660_1 "dEQP-GLES2.functional.fbo.ren"
#define VkglTestCase_012660_2 "der.repeated_clear.tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012660, VkglTestCase_012660_1, VkglTestCase_012660_2);
