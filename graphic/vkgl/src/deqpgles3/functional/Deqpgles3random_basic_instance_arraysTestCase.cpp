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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036016_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036016_2 "ndom.basic_instance_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036016, VkglTestCase_036016_1, VkglTestCase_036016_2);

#define VkglTestCase_036017_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036017_2 "ndom.basic_instance_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036017, VkglTestCase_036017_1, VkglTestCase_036017_2);

#define VkglTestCase_036018_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036018_2 "ndom.basic_instance_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036018, VkglTestCase_036018_1, VkglTestCase_036018_2);

#define VkglTestCase_036019_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036019_2 "ndom.basic_instance_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036019, VkglTestCase_036019_1, VkglTestCase_036019_2);

#define VkglTestCase_036020_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036020_2 "ndom.basic_instance_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036020, VkglTestCase_036020_1, VkglTestCase_036020_2);

#define VkglTestCase_036021_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036021_2 "ndom.basic_instance_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036021, VkglTestCase_036021_1, VkglTestCase_036021_2);

#define VkglTestCase_036022_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036022_2 "ndom.basic_instance_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036022, VkglTestCase_036022_1, VkglTestCase_036022_2);

#define VkglTestCase_036023_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036023_2 "ndom.basic_instance_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036023, VkglTestCase_036023_1, VkglTestCase_036023_2);

#define VkglTestCase_036024_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036024_2 "ndom.basic_instance_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036024, VkglTestCase_036024_1, VkglTestCase_036024_2);

#define VkglTestCase_036025_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036025_2 "ndom.basic_instance_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036025, VkglTestCase_036025_1, VkglTestCase_036025_2);

#define VkglTestCase_036026_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036026_2 "ndom.basic_instance_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036026, VkglTestCase_036026_1, VkglTestCase_036026_2);

#define VkglTestCase_036027_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036027_2 "ndom.basic_instance_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036027, VkglTestCase_036027_1, VkglTestCase_036027_2);

#define VkglTestCase_036028_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036028_2 "ndom.basic_instance_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036028, VkglTestCase_036028_1, VkglTestCase_036028_2);

#define VkglTestCase_036029_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036029_2 "ndom.basic_instance_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036029, VkglTestCase_036029_1, VkglTestCase_036029_2);

#define VkglTestCase_036030_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036030_2 "ndom.basic_instance_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036030, VkglTestCase_036030_1, VkglTestCase_036030_2);

#define VkglTestCase_036031_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036031_2 "ndom.basic_instance_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036031, VkglTestCase_036031_1, VkglTestCase_036031_2);

#define VkglTestCase_036032_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036032_2 "ndom.basic_instance_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036032, VkglTestCase_036032_1, VkglTestCase_036032_2);

#define VkglTestCase_036033_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036033_2 "ndom.basic_instance_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036033, VkglTestCase_036033_1, VkglTestCase_036033_2);

#define VkglTestCase_036034_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036034_2 "ndom.basic_instance_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036034, VkglTestCase_036034_1, VkglTestCase_036034_2);

#define VkglTestCase_036035_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036035_2 "ndom.basic_instance_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036035, VkglTestCase_036035_1, VkglTestCase_036035_2);

#define VkglTestCase_036036_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036036_2 "ndom.basic_instance_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036036, VkglTestCase_036036_1, VkglTestCase_036036_2);

#define VkglTestCase_036037_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036037_2 "ndom.basic_instance_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036037, VkglTestCase_036037_1, VkglTestCase_036037_2);

#define VkglTestCase_036038_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036038_2 "ndom.basic_instance_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036038, VkglTestCase_036038_1, VkglTestCase_036038_2);

#define VkglTestCase_036039_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036039_2 "ndom.basic_instance_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036039, VkglTestCase_036039_1, VkglTestCase_036039_2);

#define VkglTestCase_036040_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036040_2 "ndom.basic_instance_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036040, VkglTestCase_036040_1, VkglTestCase_036040_2);
