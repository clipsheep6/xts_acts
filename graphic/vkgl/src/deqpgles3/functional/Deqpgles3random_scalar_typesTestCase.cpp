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

#define VkglTestCase_035916_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035916_2 "bo.random.scalar_types.0"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035916, VkglTestCase_035916_1, VkglTestCase_035916_2);

#define VkglTestCase_035917_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035917_2 "bo.random.scalar_types.1"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035917, VkglTestCase_035917_1, VkglTestCase_035917_2);

#define VkglTestCase_035918_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035918_2 "bo.random.scalar_types.2"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035918, VkglTestCase_035918_1, VkglTestCase_035918_2);

#define VkglTestCase_035919_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035919_2 "bo.random.scalar_types.3"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035919, VkglTestCase_035919_1, VkglTestCase_035919_2);

#define VkglTestCase_035920_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035920_2 "bo.random.scalar_types.4"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035920, VkglTestCase_035920_1, VkglTestCase_035920_2);

#define VkglTestCase_035921_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035921_2 "bo.random.scalar_types.5"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035921, VkglTestCase_035921_1, VkglTestCase_035921_2);

#define VkglTestCase_035922_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035922_2 "bo.random.scalar_types.6"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035922, VkglTestCase_035922_1, VkglTestCase_035922_2);

#define VkglTestCase_035923_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035923_2 "bo.random.scalar_types.7"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035923, VkglTestCase_035923_1, VkglTestCase_035923_2);

#define VkglTestCase_035924_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035924_2 "bo.random.scalar_types.8"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035924, VkglTestCase_035924_1, VkglTestCase_035924_2);

#define VkglTestCase_035925_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035925_2 "bo.random.scalar_types.9"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035925, VkglTestCase_035925_1, VkglTestCase_035925_2);

#define VkglTestCase_035926_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035926_2 "o.random.scalar_types.10"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035926, VkglTestCase_035926_1, VkglTestCase_035926_2);

#define VkglTestCase_035927_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035927_2 "o.random.scalar_types.11"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035927, VkglTestCase_035927_1, VkglTestCase_035927_2);

#define VkglTestCase_035928_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035928_2 "o.random.scalar_types.12"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035928, VkglTestCase_035928_1, VkglTestCase_035928_2);

#define VkglTestCase_035929_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035929_2 "o.random.scalar_types.13"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035929, VkglTestCase_035929_1, VkglTestCase_035929_2);

#define VkglTestCase_035930_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035930_2 "o.random.scalar_types.14"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035930, VkglTestCase_035930_1, VkglTestCase_035930_2);

#define VkglTestCase_035931_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035931_2 "o.random.scalar_types.15"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035931, VkglTestCase_035931_1, VkglTestCase_035931_2);

#define VkglTestCase_035932_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035932_2 "o.random.scalar_types.16"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035932, VkglTestCase_035932_1, VkglTestCase_035932_2);

#define VkglTestCase_035933_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035933_2 "o.random.scalar_types.17"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035933, VkglTestCase_035933_1, VkglTestCase_035933_2);

#define VkglTestCase_035934_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035934_2 "o.random.scalar_types.18"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035934, VkglTestCase_035934_1, VkglTestCase_035934_2);

#define VkglTestCase_035935_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035935_2 "o.random.scalar_types.19"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035935, VkglTestCase_035935_1, VkglTestCase_035935_2);

#define VkglTestCase_035936_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035936_2 "o.random.scalar_types.20"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035936, VkglTestCase_035936_1, VkglTestCase_035936_2);

#define VkglTestCase_035937_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035937_2 "o.random.scalar_types.21"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035937, VkglTestCase_035937_1, VkglTestCase_035937_2);

#define VkglTestCase_035938_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035938_2 "o.random.scalar_types.22"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035938, VkglTestCase_035938_1, VkglTestCase_035938_2);

#define VkglTestCase_035939_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035939_2 "o.random.scalar_types.23"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035939, VkglTestCase_035939_1, VkglTestCase_035939_2);

#define VkglTestCase_035940_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_035940_2 "o.random.scalar_types.24"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035940, VkglTestCase_035940_1, VkglTestCase_035940_2);
