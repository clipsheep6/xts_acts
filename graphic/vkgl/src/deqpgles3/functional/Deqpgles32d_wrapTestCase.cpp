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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026984_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_026984_2 "e.vertex.2d.wrap.clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026984, VkglTestCase_026984_1, VkglTestCase_026984_2);

#define VkglTestCase_026985_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_026985_2 "e.vertex.2d.wrap.clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026985, VkglTestCase_026985_1, VkglTestCase_026985_2);

#define VkglTestCase_026986_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_026986_2 "e.vertex.2d.wrap.clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026986, VkglTestCase_026986_1, VkglTestCase_026986_2);

#define VkglTestCase_026987_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_026987_2 "e.vertex.2d.wrap.repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026987, VkglTestCase_026987_1, VkglTestCase_026987_2);

#define VkglTestCase_026988_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_026988_2 ".vertex.2d.wrap.repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026988, VkglTestCase_026988_1, VkglTestCase_026988_2);

#define VkglTestCase_026989_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_026989_2 ".vertex.2d.wrap.repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026989, VkglTestCase_026989_1, VkglTestCase_026989_2);

#define VkglTestCase_026990_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_026990_2 "e.vertex.2d.wrap.mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026990, VkglTestCase_026990_1, VkglTestCase_026990_2);

#define VkglTestCase_026991_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_026991_2 ".vertex.2d.wrap.mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026991, VkglTestCase_026991_1, VkglTestCase_026991_2);

#define VkglTestCase_026992_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_026992_2 ".vertex.2d.wrap.mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026992, VkglTestCase_026992_1, VkglTestCase_026992_2);
