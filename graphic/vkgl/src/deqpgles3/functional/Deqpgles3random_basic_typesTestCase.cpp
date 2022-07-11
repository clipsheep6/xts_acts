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

#define VkglTestCase_035966_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035966_2 "bo.random.basic_types.0"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035966, VkglTestCase_035966_1, VkglTestCase_035966_2);

#define VkglTestCase_035967_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035967_2 "bo.random.basic_types.1"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035967, VkglTestCase_035967_1, VkglTestCase_035967_2);

#define VkglTestCase_035968_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035968_2 "bo.random.basic_types.2"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035968, VkglTestCase_035968_1, VkglTestCase_035968_2);

#define VkglTestCase_035969_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035969_2 "bo.random.basic_types.3"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035969, VkglTestCase_035969_1, VkglTestCase_035969_2);

#define VkglTestCase_035970_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035970_2 "bo.random.basic_types.4"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035970, VkglTestCase_035970_1, VkglTestCase_035970_2);

#define VkglTestCase_035971_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035971_2 "bo.random.basic_types.5"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035971, VkglTestCase_035971_1, VkglTestCase_035971_2);

#define VkglTestCase_035972_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035972_2 "bo.random.basic_types.6"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035972, VkglTestCase_035972_1, VkglTestCase_035972_2);

#define VkglTestCase_035973_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035973_2 "bo.random.basic_types.7"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035973, VkglTestCase_035973_1, VkglTestCase_035973_2);

#define VkglTestCase_035974_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035974_2 "bo.random.basic_types.8"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035974, VkglTestCase_035974_1, VkglTestCase_035974_2);

#define VkglTestCase_035975_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035975_2 "bo.random.basic_types.9"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035975, VkglTestCase_035975_1, VkglTestCase_035975_2);

#define VkglTestCase_035976_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035976_2 "bo.random.basic_types.10"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035976, VkglTestCase_035976_1, VkglTestCase_035976_2);

#define VkglTestCase_035977_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035977_2 "bo.random.basic_types.11"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035977, VkglTestCase_035977_1, VkglTestCase_035977_2);

#define VkglTestCase_035978_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035978_2 "bo.random.basic_types.12"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035978, VkglTestCase_035978_1, VkglTestCase_035978_2);

#define VkglTestCase_035979_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035979_2 "bo.random.basic_types.13"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035979, VkglTestCase_035979_1, VkglTestCase_035979_2);

#define VkglTestCase_035980_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035980_2 "bo.random.basic_types.14"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035980, VkglTestCase_035980_1, VkglTestCase_035980_2);

#define VkglTestCase_035981_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035981_2 "bo.random.basic_types.15"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035981, VkglTestCase_035981_1, VkglTestCase_035981_2);

#define VkglTestCase_035982_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035982_2 "bo.random.basic_types.16"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035982, VkglTestCase_035982_1, VkglTestCase_035982_2);

#define VkglTestCase_035983_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035983_2 "bo.random.basic_types.17"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035983, VkglTestCase_035983_1, VkglTestCase_035983_2);

#define VkglTestCase_035984_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035984_2 "bo.random.basic_types.18"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035984, VkglTestCase_035984_1, VkglTestCase_035984_2);

#define VkglTestCase_035985_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035985_2 "bo.random.basic_types.19"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035985, VkglTestCase_035985_1, VkglTestCase_035985_2);

#define VkglTestCase_035986_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035986_2 "bo.random.basic_types.20"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035986, VkglTestCase_035986_1, VkglTestCase_035986_2);

#define VkglTestCase_035987_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035987_2 "bo.random.basic_types.21"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035987, VkglTestCase_035987_1, VkglTestCase_035987_2);

#define VkglTestCase_035988_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035988_2 "bo.random.basic_types.22"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035988, VkglTestCase_035988_1, VkglTestCase_035988_2);

#define VkglTestCase_035989_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035989_2 "bo.random.basic_types.23"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035989, VkglTestCase_035989_1, VkglTestCase_035989_2);

#define VkglTestCase_035990_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035990_2 "bo.random.basic_types.24"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035990, VkglTestCase_035990_1, VkglTestCase_035990_2);
