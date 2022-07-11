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

#define VkglTestCase_010992_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010992_2 ".vertex.cube.wrap.clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010992, VkglTestCase_010992_1, VkglTestCase_010992_2);

#define VkglTestCase_010993_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010993_2 ".vertex.cube.wrap.clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010993, VkglTestCase_010993_1, VkglTestCase_010993_2);

#define VkglTestCase_010994_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010994_2 ".vertex.cube.wrap.clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010994, VkglTestCase_010994_1, VkglTestCase_010994_2);

#define VkglTestCase_010995_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010995_2 ".vertex.cube.wrap.repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010995, VkglTestCase_010995_1, VkglTestCase_010995_2);

#define VkglTestCase_010996_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010996_2 "vertex.cube.wrap.repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010996, VkglTestCase_010996_1, VkglTestCase_010996_2);

#define VkglTestCase_010997_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010997_2 "vertex.cube.wrap.repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010997, VkglTestCase_010997_1, VkglTestCase_010997_2);

#define VkglTestCase_010998_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010998_2 ".vertex.cube.wrap.mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010998, VkglTestCase_010998_1, VkglTestCase_010998_2);

#define VkglTestCase_010999_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010999_2 "vertex.cube.wrap.mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010999, VkglTestCase_010999_1, VkglTestCase_010999_2);

#define VkglTestCase_011000_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_011000_2 "vertex.cube.wrap.mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_011000, VkglTestCase_011000_1, VkglTestCase_011000_2);
