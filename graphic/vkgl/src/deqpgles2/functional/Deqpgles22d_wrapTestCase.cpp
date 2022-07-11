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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010947_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010947_2 "e.vertex.2d.wrap.clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010947, VkglTestCase_010947_1, VkglTestCase_010947_2);

#define VkglTestCase_010948_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010948_2 "e.vertex.2d.wrap.clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010948, VkglTestCase_010948_1, VkglTestCase_010948_2);

#define VkglTestCase_010949_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010949_2 "e.vertex.2d.wrap.clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010949, VkglTestCase_010949_1, VkglTestCase_010949_2);

#define VkglTestCase_010950_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010950_2 "e.vertex.2d.wrap.repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010950, VkglTestCase_010950_1, VkglTestCase_010950_2);

#define VkglTestCase_010951_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010951_2 ".vertex.2d.wrap.repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010951, VkglTestCase_010951_1, VkglTestCase_010951_2);

#define VkglTestCase_010952_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010952_2 ".vertex.2d.wrap.repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010952, VkglTestCase_010952_1, VkglTestCase_010952_2);

#define VkglTestCase_010953_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010953_2 "e.vertex.2d.wrap.mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010953, VkglTestCase_010953_1, VkglTestCase_010953_2);

#define VkglTestCase_010954_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010954_2 ".vertex.2d.wrap.mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010954, VkglTestCase_010954_1, VkglTestCase_010954_2);

#define VkglTestCase_010955_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010955_2 ".vertex.2d.wrap.mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010955, VkglTestCase_010955_1, VkglTestCase_010955_2);
