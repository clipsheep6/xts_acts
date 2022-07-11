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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019969_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019969_2 ".no_attachments.size.16x16"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019969, VkglTestCase_019969_1, VkglTestCase_019969_2);

#define VkglTestCase_019970_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019970_2 ".no_attachments.size.16x64"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019970, VkglTestCase_019970_1, VkglTestCase_019970_2);

#define VkglTestCase_019971_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019971_2 ".no_attachments.size.16x256"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019971, VkglTestCase_019971_1, VkglTestCase_019971_2);

#define VkglTestCase_019972_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019972_2 "no_attachments.size.16x1024"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019972, VkglTestCase_019972_1, VkglTestCase_019972_2);

#define VkglTestCase_019973_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019973_2 ".no_attachments.size.64x16"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019973, VkglTestCase_019973_1, VkglTestCase_019973_2);

#define VkglTestCase_019974_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019974_2 ".no_attachments.size.64x64"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019974, VkglTestCase_019974_1, VkglTestCase_019974_2);

#define VkglTestCase_019975_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019975_2 ".no_attachments.size.64x256"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019975, VkglTestCase_019975_1, VkglTestCase_019975_2);

#define VkglTestCase_019976_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019976_2 "no_attachments.size.64x1024"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019976, VkglTestCase_019976_1, VkglTestCase_019976_2);

#define VkglTestCase_019977_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019977_2 ".no_attachments.size.256x16"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019977, VkglTestCase_019977_1, VkglTestCase_019977_2);

#define VkglTestCase_019978_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019978_2 ".no_attachments.size.256x64"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019978, VkglTestCase_019978_1, VkglTestCase_019978_2);

#define VkglTestCase_019979_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019979_2 "no_attachments.size.256x256"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019979, VkglTestCase_019979_1, VkglTestCase_019979_2);

#define VkglTestCase_019980_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019980_2 "no_attachments.size.256x1024"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019980, VkglTestCase_019980_1, VkglTestCase_019980_2);

#define VkglTestCase_019981_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019981_2 "no_attachments.size.1024x16"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019981, VkglTestCase_019981_1, VkglTestCase_019981_2);

#define VkglTestCase_019982_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019982_2 "no_attachments.size.1024x64"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019982, VkglTestCase_019982_1, VkglTestCase_019982_2);

#define VkglTestCase_019983_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019983_2 "no_attachments.size.1024x256"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019983, VkglTestCase_019983_1, VkglTestCase_019983_2);

#define VkglTestCase_019984_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_019984_2 "o_attachments.size.1024x1024"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019984, VkglTestCase_019984_1, VkglTestCase_019984_2);
