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
#include "../ActsDeqpgles30036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035941_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035941_2 "bo.random.vector_types.0"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035941, VkglTestCase_035941_1, VkglTestCase_035941_2);

#define VkglTestCase_035942_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035942_2 "bo.random.vector_types.1"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035942, VkglTestCase_035942_1, VkglTestCase_035942_2);

#define VkglTestCase_035943_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035943_2 "bo.random.vector_types.2"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035943, VkglTestCase_035943_1, VkglTestCase_035943_2);

#define VkglTestCase_035944_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035944_2 "bo.random.vector_types.3"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035944, VkglTestCase_035944_1, VkglTestCase_035944_2);

#define VkglTestCase_035945_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035945_2 "bo.random.vector_types.4"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035945, VkglTestCase_035945_1, VkglTestCase_035945_2);

#define VkglTestCase_035946_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035946_2 "bo.random.vector_types.5"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035946, VkglTestCase_035946_1, VkglTestCase_035946_2);

#define VkglTestCase_035947_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035947_2 "bo.random.vector_types.6"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035947, VkglTestCase_035947_1, VkglTestCase_035947_2);

#define VkglTestCase_035948_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035948_2 "bo.random.vector_types.7"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035948, VkglTestCase_035948_1, VkglTestCase_035948_2);

#define VkglTestCase_035949_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035949_2 "bo.random.vector_types.8"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035949, VkglTestCase_035949_1, VkglTestCase_035949_2);

#define VkglTestCase_035950_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035950_2 "bo.random.vector_types.9"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035950, VkglTestCase_035950_1, VkglTestCase_035950_2);

#define VkglTestCase_035951_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035951_2 "o.random.vector_types.10"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035951, VkglTestCase_035951_1, VkglTestCase_035951_2);

#define VkglTestCase_035952_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035952_2 "o.random.vector_types.11"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035952, VkglTestCase_035952_1, VkglTestCase_035952_2);

#define VkglTestCase_035953_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035953_2 "o.random.vector_types.12"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035953, VkglTestCase_035953_1, VkglTestCase_035953_2);

#define VkglTestCase_035954_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035954_2 "o.random.vector_types.13"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035954, VkglTestCase_035954_1, VkglTestCase_035954_2);

#define VkglTestCase_035955_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035955_2 "o.random.vector_types.14"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035955, VkglTestCase_035955_1, VkglTestCase_035955_2);

#define VkglTestCase_035956_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035956_2 "o.random.vector_types.15"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035956, VkglTestCase_035956_1, VkglTestCase_035956_2);

#define VkglTestCase_035957_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035957_2 "o.random.vector_types.16"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035957, VkglTestCase_035957_1, VkglTestCase_035957_2);

#define VkglTestCase_035958_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035958_2 "o.random.vector_types.17"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035958, VkglTestCase_035958_1, VkglTestCase_035958_2);

#define VkglTestCase_035959_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035959_2 "o.random.vector_types.18"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035959, VkglTestCase_035959_1, VkglTestCase_035959_2);

#define VkglTestCase_035960_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035960_2 "o.random.vector_types.19"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035960, VkglTestCase_035960_1, VkglTestCase_035960_2);

#define VkglTestCase_035961_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035961_2 "o.random.vector_types.20"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035961, VkglTestCase_035961_1, VkglTestCase_035961_2);

#define VkglTestCase_035962_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035962_2 "o.random.vector_types.21"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035962, VkglTestCase_035962_1, VkglTestCase_035962_2);

#define VkglTestCase_035963_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035963_2 "o.random.vector_types.22"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035963, VkglTestCase_035963_1, VkglTestCase_035963_2);

#define VkglTestCase_035964_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035964_2 "o.random.vector_types.23"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035964, VkglTestCase_035964_1, VkglTestCase_035964_2);

#define VkglTestCase_035965_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035965_2 "o.random.vector_types.24"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035965, VkglTestCase_035965_1, VkglTestCase_035965_2);
