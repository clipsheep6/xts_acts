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
#include "../ActsDeqpgles310011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010189_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010189_2 "ndom.nested_structs_instance_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010189, VkglTestCase_010189_1, VkglTestCase_010189_2);

#define VkglTestCase_010190_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010190_2 "ndom.nested_structs_instance_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010190, VkglTestCase_010190_1, VkglTestCase_010190_2);

#define VkglTestCase_010191_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010191_2 "ndom.nested_structs_instance_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010191, VkglTestCase_010191_1, VkglTestCase_010191_2);

#define VkglTestCase_010192_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010192_2 "ndom.nested_structs_instance_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010192, VkglTestCase_010192_1, VkglTestCase_010192_2);

#define VkglTestCase_010193_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010193_2 "ndom.nested_structs_instance_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010193, VkglTestCase_010193_1, VkglTestCase_010193_2);

#define VkglTestCase_010194_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010194_2 "ndom.nested_structs_instance_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010194, VkglTestCase_010194_1, VkglTestCase_010194_2);

#define VkglTestCase_010195_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010195_2 "ndom.nested_structs_instance_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010195, VkglTestCase_010195_1, VkglTestCase_010195_2);

#define VkglTestCase_010196_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010196_2 "ndom.nested_structs_instance_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010196, VkglTestCase_010196_1, VkglTestCase_010196_2);

#define VkglTestCase_010197_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010197_2 "ndom.nested_structs_instance_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010197, VkglTestCase_010197_1, VkglTestCase_010197_2);

#define VkglTestCase_010198_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010198_2 "ndom.nested_structs_instance_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010198, VkglTestCase_010198_1, VkglTestCase_010198_2);

#define VkglTestCase_010199_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010199_2 "ndom.nested_structs_instance_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010199, VkglTestCase_010199_1, VkglTestCase_010199_2);

#define VkglTestCase_010200_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010200_2 "ndom.nested_structs_instance_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010200, VkglTestCase_010200_1, VkglTestCase_010200_2);

#define VkglTestCase_010201_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010201_2 "ndom.nested_structs_instance_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010201, VkglTestCase_010201_1, VkglTestCase_010201_2);

#define VkglTestCase_010202_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010202_2 "ndom.nested_structs_instance_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010202, VkglTestCase_010202_1, VkglTestCase_010202_2);

#define VkglTestCase_010203_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010203_2 "ndom.nested_structs_instance_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010203, VkglTestCase_010203_1, VkglTestCase_010203_2);

#define VkglTestCase_010204_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010204_2 "ndom.nested_structs_instance_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010204, VkglTestCase_010204_1, VkglTestCase_010204_2);

#define VkglTestCase_010205_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010205_2 "ndom.nested_structs_instance_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010205, VkglTestCase_010205_1, VkglTestCase_010205_2);

#define VkglTestCase_010206_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010206_2 "ndom.nested_structs_instance_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010206, VkglTestCase_010206_1, VkglTestCase_010206_2);

#define VkglTestCase_010207_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010207_2 "ndom.nested_structs_instance_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010207, VkglTestCase_010207_1, VkglTestCase_010207_2);

#define VkglTestCase_010208_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010208_2 "ndom.nested_structs_instance_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010208, VkglTestCase_010208_1, VkglTestCase_010208_2);

#define VkglTestCase_010209_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010209_2 "ndom.nested_structs_instance_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010209, VkglTestCase_010209_1, VkglTestCase_010209_2);

#define VkglTestCase_010210_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010210_2 "ndom.nested_structs_instance_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010210, VkglTestCase_010210_1, VkglTestCase_010210_2);

#define VkglTestCase_010211_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010211_2 "ndom.nested_structs_instance_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010211, VkglTestCase_010211_1, VkglTestCase_010211_2);

#define VkglTestCase_010212_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010212_2 "ndom.nested_structs_instance_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010212, VkglTestCase_010212_1, VkglTestCase_010212_2);

#define VkglTestCase_010213_1 "dEQP-GLES31.functional.ssbo.layout.ra"
#define VkglTestCase_010213_2 "ndom.nested_structs_instance_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010213, VkglTestCase_010213_1, VkglTestCase_010213_2);
