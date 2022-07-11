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

#define VkglTestCase_035991_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035991_2 "bo.random.basic_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035991, VkglTestCase_035991_1, VkglTestCase_035991_2);

#define VkglTestCase_035992_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035992_2 "bo.random.basic_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035992, VkglTestCase_035992_1, VkglTestCase_035992_2);

#define VkglTestCase_035993_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035993_2 "bo.random.basic_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035993, VkglTestCase_035993_1, VkglTestCase_035993_2);

#define VkglTestCase_035994_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035994_2 "bo.random.basic_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035994, VkglTestCase_035994_1, VkglTestCase_035994_2);

#define VkglTestCase_035995_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035995_2 "bo.random.basic_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035995, VkglTestCase_035995_1, VkglTestCase_035995_2);

#define VkglTestCase_035996_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035996_2 "bo.random.basic_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035996, VkglTestCase_035996_1, VkglTestCase_035996_2);

#define VkglTestCase_035997_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035997_2 "bo.random.basic_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035997, VkglTestCase_035997_1, VkglTestCase_035997_2);

#define VkglTestCase_035998_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035998_2 "bo.random.basic_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035998, VkglTestCase_035998_1, VkglTestCase_035998_2);

#define VkglTestCase_035999_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_035999_2 "bo.random.basic_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035999, VkglTestCase_035999_1, VkglTestCase_035999_2);

#define VkglTestCase_036000_1 "dEQP-GLES3.functional.u"
#define VkglTestCase_036000_2 "bo.random.basic_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036000, VkglTestCase_036000_1, VkglTestCase_036000_2);

#define VkglTestCase_036001_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036001_2 "o.random.basic_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036001, VkglTestCase_036001_1, VkglTestCase_036001_2);

#define VkglTestCase_036002_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036002_2 "o.random.basic_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036002, VkglTestCase_036002_1, VkglTestCase_036002_2);

#define VkglTestCase_036003_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036003_2 "o.random.basic_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036003, VkglTestCase_036003_1, VkglTestCase_036003_2);

#define VkglTestCase_036004_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036004_2 "o.random.basic_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036004, VkglTestCase_036004_1, VkglTestCase_036004_2);

#define VkglTestCase_036005_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036005_2 "o.random.basic_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036005, VkglTestCase_036005_1, VkglTestCase_036005_2);

#define VkglTestCase_036006_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036006_2 "o.random.basic_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036006, VkglTestCase_036006_1, VkglTestCase_036006_2);

#define VkglTestCase_036007_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036007_2 "o.random.basic_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036007, VkglTestCase_036007_1, VkglTestCase_036007_2);

#define VkglTestCase_036008_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036008_2 "o.random.basic_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036008, VkglTestCase_036008_1, VkglTestCase_036008_2);

#define VkglTestCase_036009_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036009_2 "o.random.basic_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036009, VkglTestCase_036009_1, VkglTestCase_036009_2);

#define VkglTestCase_036010_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036010_2 "o.random.basic_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036010, VkglTestCase_036010_1, VkglTestCase_036010_2);

#define VkglTestCase_036011_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036011_2 "o.random.basic_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036011, VkglTestCase_036011_1, VkglTestCase_036011_2);

#define VkglTestCase_036012_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036012_2 "o.random.basic_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036012, VkglTestCase_036012_1, VkglTestCase_036012_2);

#define VkglTestCase_036013_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036013_2 "o.random.basic_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036013, VkglTestCase_036013_1, VkglTestCase_036013_2);

#define VkglTestCase_036014_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036014_2 "o.random.basic_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036014, VkglTestCase_036014_1, VkglTestCase_036014_2);

#define VkglTestCase_036015_1 "dEQP-GLES3.functional.ub"
#define VkglTestCase_036015_2 "o.random.basic_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_036015, VkglTestCase_036015_1, VkglTestCase_036015_2);
