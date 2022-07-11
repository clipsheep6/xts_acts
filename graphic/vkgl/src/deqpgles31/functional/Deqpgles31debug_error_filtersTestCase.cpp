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

#define VkglTestCase_019849_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019849_2 "ebug.error_filters.case_0"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019849, VkglTestCase_019849_1, VkglTestCase_019849_2);

#define VkglTestCase_019850_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019850_2 "ebug.error_filters.case_1"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019850, VkglTestCase_019850_1, VkglTestCase_019850_2);

#define VkglTestCase_019851_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019851_2 "ebug.error_filters.case_2"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019851, VkglTestCase_019851_1, VkglTestCase_019851_2);

#define VkglTestCase_019852_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019852_2 "ebug.error_filters.case_3"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019852, VkglTestCase_019852_1, VkglTestCase_019852_2);

#define VkglTestCase_019853_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019853_2 "ebug.error_filters.case_4"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019853, VkglTestCase_019853_1, VkglTestCase_019853_2);

#define VkglTestCase_019854_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019854_2 "ebug.error_filters.case_5"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019854, VkglTestCase_019854_1, VkglTestCase_019854_2);

#define VkglTestCase_019855_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019855_2 "ebug.error_filters.case_6"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019855, VkglTestCase_019855_1, VkglTestCase_019855_2);

#define VkglTestCase_019856_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019856_2 "ebug.error_filters.case_7"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019856, VkglTestCase_019856_1, VkglTestCase_019856_2);

#define VkglTestCase_019857_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019857_2 "ebug.error_filters.case_8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019857, VkglTestCase_019857_1, VkglTestCase_019857_2);

#define VkglTestCase_019858_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019858_2 "ebug.error_filters.case_9"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019858, VkglTestCase_019858_1, VkglTestCase_019858_2);

#define VkglTestCase_019859_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019859_2 "bug.error_filters.case_10"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019859, VkglTestCase_019859_1, VkglTestCase_019859_2);

#define VkglTestCase_019860_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019860_2 "bug.error_filters.case_11"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019860, VkglTestCase_019860_1, VkglTestCase_019860_2);

#define VkglTestCase_019861_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019861_2 "bug.error_filters.case_12"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019861, VkglTestCase_019861_1, VkglTestCase_019861_2);

#define VkglTestCase_019862_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019862_2 "bug.error_filters.case_13"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019862, VkglTestCase_019862_1, VkglTestCase_019862_2);

#define VkglTestCase_019863_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019863_2 "bug.error_filters.case_14"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019863, VkglTestCase_019863_1, VkglTestCase_019863_2);

#define VkglTestCase_019864_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019864_2 "bug.error_filters.case_15"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019864, VkglTestCase_019864_1, VkglTestCase_019864_2);

#define VkglTestCase_019865_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019865_2 "bug.error_filters.case_16"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019865, VkglTestCase_019865_1, VkglTestCase_019865_2);

#define VkglTestCase_019866_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019866_2 "bug.error_filters.case_17"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019866, VkglTestCase_019866_1, VkglTestCase_019866_2);

#define VkglTestCase_019867_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019867_2 "bug.error_filters.case_18"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019867, VkglTestCase_019867_1, VkglTestCase_019867_2);

#define VkglTestCase_019868_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019868_2 "bug.error_filters.case_19"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019868, VkglTestCase_019868_1, VkglTestCase_019868_2);

#define VkglTestCase_019869_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019869_2 "bug.error_filters.case_20"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019869, VkglTestCase_019869_1, VkglTestCase_019869_2);

#define VkglTestCase_019870_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019870_2 "bug.error_filters.case_21"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019870, VkglTestCase_019870_1, VkglTestCase_019870_2);

#define VkglTestCase_019871_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019871_2 "bug.error_filters.case_22"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019871, VkglTestCase_019871_1, VkglTestCase_019871_2);

#define VkglTestCase_019872_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019872_2 "bug.error_filters.case_23"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019872, VkglTestCase_019872_1, VkglTestCase_019872_2);

#define VkglTestCase_019873_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019873_2 "bug.error_filters.case_24"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019873, VkglTestCase_019873_1, VkglTestCase_019873_2);

#define VkglTestCase_019874_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019874_2 "bug.error_filters.case_25"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019874, VkglTestCase_019874_1, VkglTestCase_019874_2);

#define VkglTestCase_019875_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019875_2 "bug.error_filters.case_26"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019875, VkglTestCase_019875_1, VkglTestCase_019875_2);

#define VkglTestCase_019876_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019876_2 "bug.error_filters.case_27"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019876, VkglTestCase_019876_1, VkglTestCase_019876_2);

#define VkglTestCase_019877_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019877_2 "bug.error_filters.case_28"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019877, VkglTestCase_019877_1, VkglTestCase_019877_2);

#define VkglTestCase_019878_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019878_2 "bug.error_filters.case_29"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019878, VkglTestCase_019878_1, VkglTestCase_019878_2);

#define VkglTestCase_019879_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019879_2 "bug.error_filters.case_30"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019879, VkglTestCase_019879_1, VkglTestCase_019879_2);

#define VkglTestCase_019880_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019880_2 "bug.error_filters.case_31"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019880, VkglTestCase_019880_1, VkglTestCase_019880_2);
