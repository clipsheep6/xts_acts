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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000996_1 "dEQP-GLES3.functional.shaders.preprocessor.undefin"
#define VkglTestCase_000996_2 "ed_identifiers.valid_undefined_identifier_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000996, VkglTestCase_000996_1, VkglTestCase_000996_2);

#define VkglTestCase_000997_1 "dEQP-GLES3.functional.shaders.preprocessor.undefine"
#define VkglTestCase_000997_2 "d_identifiers.valid_undefined_identifier_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000997, VkglTestCase_000997_1, VkglTestCase_000997_2);

#define VkglTestCase_000998_1 "dEQP-GLES3.functional.shaders.preprocessor.undefin"
#define VkglTestCase_000998_2 "ed_identifiers.valid_undefined_identifier_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000998, VkglTestCase_000998_1, VkglTestCase_000998_2);

#define VkglTestCase_000999_1 "dEQP-GLES3.functional.shaders.preprocessor.undefine"
#define VkglTestCase_000999_2 "d_identifiers.valid_undefined_identifier_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000999, VkglTestCase_000999_1, VkglTestCase_000999_2);

#define VkglTestCase_001000_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001000_2 "fined_identifiers.undefined_identifier_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001000, VkglTestCase_001000_1, VkglTestCase_001000_2);

#define VkglTestCase_001001_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001001_2 "ined_identifiers.undefined_identifier_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001001, VkglTestCase_001001_1, VkglTestCase_001001_2);

#define VkglTestCase_001002_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001002_2 "fined_identifiers.undefined_identifier_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001002, VkglTestCase_001002_1, VkglTestCase_001002_2);

#define VkglTestCase_001003_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001003_2 "ined_identifiers.undefined_identifier_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001003, VkglTestCase_001003_1, VkglTestCase_001003_2);

#define VkglTestCase_001004_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001004_2 "fined_identifiers.undefined_identifier_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001004, VkglTestCase_001004_1, VkglTestCase_001004_2);

#define VkglTestCase_001005_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001005_2 "ined_identifiers.undefined_identifier_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001005, VkglTestCase_001005_1, VkglTestCase_001005_2);

#define VkglTestCase_001006_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001006_2 "fined_identifiers.undefined_identifier_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001006, VkglTestCase_001006_1, VkglTestCase_001006_2);

#define VkglTestCase_001007_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001007_2 "ined_identifiers.undefined_identifier_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001007, VkglTestCase_001007_1, VkglTestCase_001007_2);

#define VkglTestCase_001008_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001008_2 "fined_identifiers.undefined_identifier_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001008, VkglTestCase_001008_1, VkglTestCase_001008_2);

#define VkglTestCase_001009_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001009_2 "ined_identifiers.undefined_identifier_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001009, VkglTestCase_001009_1, VkglTestCase_001009_2);

#define VkglTestCase_001010_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001010_2 "fined_identifiers.undefined_identifier_6_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001010, VkglTestCase_001010_1, VkglTestCase_001010_2);

#define VkglTestCase_001011_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001011_2 "ined_identifiers.undefined_identifier_6_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001011, VkglTestCase_001011_1, VkglTestCase_001011_2);

#define VkglTestCase_001012_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001012_2 "fined_identifiers.undefined_identifier_7_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001012, VkglTestCase_001012_1, VkglTestCase_001012_2);

#define VkglTestCase_001013_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001013_2 "ined_identifiers.undefined_identifier_7_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001013, VkglTestCase_001013_1, VkglTestCase_001013_2);

#define VkglTestCase_001014_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001014_2 "fined_identifiers.undefined_identifier_8_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001014, VkglTestCase_001014_1, VkglTestCase_001014_2);

#define VkglTestCase_001015_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001015_2 "ined_identifiers.undefined_identifier_8_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001015, VkglTestCase_001015_1, VkglTestCase_001015_2);

#define VkglTestCase_001016_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001016_2 "fined_identifiers.undefined_identifier_9_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001016, VkglTestCase_001016_1, VkglTestCase_001016_2);

#define VkglTestCase_001017_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001017_2 "ined_identifiers.undefined_identifier_9_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001017, VkglTestCase_001017_1, VkglTestCase_001017_2);

#define VkglTestCase_001018_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001018_2 "fined_identifiers.undefined_identifier_10_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001018, VkglTestCase_001018_1, VkglTestCase_001018_2);

#define VkglTestCase_001019_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001019_2 "ined_identifiers.undefined_identifier_10_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001019, VkglTestCase_001019_1, VkglTestCase_001019_2);

#define VkglTestCase_001020_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001020_2 "fined_identifiers.undefined_identifier_11_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001020, VkglTestCase_001020_1, VkglTestCase_001020_2);

#define VkglTestCase_001021_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001021_2 "ined_identifiers.undefined_identifier_11_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001021, VkglTestCase_001021_1, VkglTestCase_001021_2);

#define VkglTestCase_001022_1 "dEQP-GLES3.functional.shaders.preprocessor.unde"
#define VkglTestCase_001022_2 "fined_identifiers.undefined_identifier_12_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001022, VkglTestCase_001022_1, VkglTestCase_001022_2);

#define VkglTestCase_001023_1 "dEQP-GLES3.functional.shaders.preprocessor.undef"
#define VkglTestCase_001023_2 "ined_identifiers.undefined_identifier_12_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_001023, VkglTestCase_001023_1, VkglTestCase_001023_2);
