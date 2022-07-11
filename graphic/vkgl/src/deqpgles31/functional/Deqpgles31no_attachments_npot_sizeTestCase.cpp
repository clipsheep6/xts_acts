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

#define VkglTestCase_019985_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019985_2 "no_attachments.npot_size.1x1"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019985, VkglTestCase_019985_1, VkglTestCase_019985_2);

#define VkglTestCase_019986_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019986_2 "no_attachments.npot_size.3x3"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019986, VkglTestCase_019986_1, VkglTestCase_019986_2);

#define VkglTestCase_019987_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_019987_2 "o_attachments.npot_size.15x15"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019987, VkglTestCase_019987_1, VkglTestCase_019987_2);

#define VkglTestCase_019988_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_019988_2 "o_attachments.npot_size.17x17"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019988, VkglTestCase_019988_1, VkglTestCase_019988_2);

#define VkglTestCase_019989_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_019989_2 "o_attachments.npot_size.31x31"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019989, VkglTestCase_019989_1, VkglTestCase_019989_2);

#define VkglTestCase_019990_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_019990_2 "o_attachments.npot_size.33x33"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019990, VkglTestCase_019990_1, VkglTestCase_019990_2);

#define VkglTestCase_019991_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_019991_2 "o_attachments.npot_size.63x63"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019991, VkglTestCase_019991_1, VkglTestCase_019991_2);

#define VkglTestCase_019992_1 "dEQP-GLES31.functional.fbo.n"
#define VkglTestCase_019992_2 "o_attachments.npot_size.65x65"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019992, VkglTestCase_019992_1, VkglTestCase_019992_2);

#define VkglTestCase_019993_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_019993_2 "_attachments.npot_size.127x127"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019993, VkglTestCase_019993_1, VkglTestCase_019993_2);

#define VkglTestCase_019994_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_019994_2 "_attachments.npot_size.129x129"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019994, VkglTestCase_019994_1, VkglTestCase_019994_2);

#define VkglTestCase_019995_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_019995_2 "_attachments.npot_size.255x255"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019995, VkglTestCase_019995_1, VkglTestCase_019995_2);

#define VkglTestCase_019996_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_019996_2 "_attachments.npot_size.257x257"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019996, VkglTestCase_019996_1, VkglTestCase_019996_2);

#define VkglTestCase_019997_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_019997_2 "_attachments.npot_size.511x511"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019997, VkglTestCase_019997_1, VkglTestCase_019997_2);

#define VkglTestCase_019998_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_019998_2 "_attachments.npot_size.513x513"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019998, VkglTestCase_019998_1, VkglTestCase_019998_2);

#define VkglTestCase_019999_1 "dEQP-GLES31.functional.fbo.no_"
#define VkglTestCase_019999_2 "attachments.npot_size.1023x1023"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019999, VkglTestCase_019999_1, VkglTestCase_019999_2);

#define VkglTestCase_020000_1 "dEQP-GLES31.functional.fbo.no_"
#define VkglTestCase_020000_2 "attachments.npot_size.1025x1025"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_020000, VkglTestCase_020000_1, VkglTestCase_020000_2);

#define VkglTestCase_020001_1 "dEQP-GLES31.functional.fbo.no_"
#define VkglTestCase_020001_2 "attachments.npot_size.2047x2047"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_020001, VkglTestCase_020001_1, VkglTestCase_020001_2);

#define VkglTestCase_020002_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_020002_2 "_attachments.npot_size.15x511"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_020002, VkglTestCase_020002_1, VkglTestCase_020002_2);

#define VkglTestCase_020003_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_020003_2 "_attachments.npot_size.127x15"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_020003, VkglTestCase_020003_1, VkglTestCase_020003_2);

#define VkglTestCase_020004_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_020004_2 "_attachments.npot_size.129x127"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_020004, VkglTestCase_020004_1, VkglTestCase_020004_2);

#define VkglTestCase_020005_1 "dEQP-GLES31.functional.fbo.no"
#define VkglTestCase_020005_2 "_attachments.npot_size.511x127"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_020005, VkglTestCase_020005_1, VkglTestCase_020005_2);

#define VkglTestCase_020006_1 "dEQP-GLES31.functional.fbo.no_"
#define VkglTestCase_020006_2 "attachments.npot_size.2047x1025"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_020006, VkglTestCase_020006_1, VkglTestCase_020006_2);
