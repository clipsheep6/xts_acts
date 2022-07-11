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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000001_1 "dEQP-GLES2."
#define VkglTestCase_000001_2 "info.vendor"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000001, VkglTestCase_000001_1, VkglTestCase_000001_2);

#define VkglTestCase_000002_1 "dEQP-GLES2.i"
#define VkglTestCase_000002_2 "nfo.renderer"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000002, VkglTestCase_000002_1, VkglTestCase_000002_2);

#define VkglTestCase_000003_1 "dEQP-GLES2."
#define VkglTestCase_000003_2 "info.version"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000003, VkglTestCase_000003_1, VkglTestCase_000003_2);

#define VkglTestCase_000004_1 "dEQP-GLES2.info.shad"
#define VkglTestCase_000004_2 "ing_language_version"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000004, VkglTestCase_000004_1, VkglTestCase_000004_2);

#define VkglTestCase_000005_1 "dEQP-GLES2.in"
#define VkglTestCase_000005_2 "fo.extensions"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000005, VkglTestCase_000005_1, VkglTestCase_000005_2);

#define VkglTestCase_000006_1 "dEQP-GLES2.inf"
#define VkglTestCase_000006_2 "o.render_target"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000006, VkglTestCase_000006_1, VkglTestCase_000006_2);
