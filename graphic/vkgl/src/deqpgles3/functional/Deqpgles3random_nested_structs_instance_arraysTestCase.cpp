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

#define VkglTestCase_036091_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036091_2 ".nested_structs_instance_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036091, VkglTestCase_036091_1, VkglTestCase_036091_2);

#define VkglTestCase_036092_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036092_2 ".nested_structs_instance_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036092, VkglTestCase_036092_1, VkglTestCase_036092_2);

#define VkglTestCase_036093_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036093_2 ".nested_structs_instance_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036093, VkglTestCase_036093_1, VkglTestCase_036093_2);

#define VkglTestCase_036094_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036094_2 ".nested_structs_instance_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036094, VkglTestCase_036094_1, VkglTestCase_036094_2);

#define VkglTestCase_036095_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036095_2 ".nested_structs_instance_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036095, VkglTestCase_036095_1, VkglTestCase_036095_2);

#define VkglTestCase_036096_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036096_2 ".nested_structs_instance_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036096, VkglTestCase_036096_1, VkglTestCase_036096_2);

#define VkglTestCase_036097_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036097_2 ".nested_structs_instance_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036097, VkglTestCase_036097_1, VkglTestCase_036097_2);

#define VkglTestCase_036098_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036098_2 ".nested_structs_instance_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036098, VkglTestCase_036098_1, VkglTestCase_036098_2);

#define VkglTestCase_036099_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036099_2 ".nested_structs_instance_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036099, VkglTestCase_036099_1, VkglTestCase_036099_2);

#define VkglTestCase_036100_1 "dEQP-GLES3.functional.ubo.random"
#define VkglTestCase_036100_2 ".nested_structs_instance_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036100, VkglTestCase_036100_1, VkglTestCase_036100_2);

#define VkglTestCase_036101_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036101_2 "nested_structs_instance_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036101, VkglTestCase_036101_1, VkglTestCase_036101_2);

#define VkglTestCase_036102_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036102_2 "nested_structs_instance_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036102, VkglTestCase_036102_1, VkglTestCase_036102_2);

#define VkglTestCase_036103_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036103_2 "nested_structs_instance_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036103, VkglTestCase_036103_1, VkglTestCase_036103_2);

#define VkglTestCase_036104_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036104_2 "nested_structs_instance_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036104, VkglTestCase_036104_1, VkglTestCase_036104_2);

#define VkglTestCase_036105_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036105_2 "nested_structs_instance_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036105, VkglTestCase_036105_1, VkglTestCase_036105_2);

#define VkglTestCase_036106_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036106_2 "nested_structs_instance_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036106, VkglTestCase_036106_1, VkglTestCase_036106_2);

#define VkglTestCase_036107_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036107_2 "nested_structs_instance_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036107, VkglTestCase_036107_1, VkglTestCase_036107_2);

#define VkglTestCase_036108_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036108_2 "nested_structs_instance_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036108, VkglTestCase_036108_1, VkglTestCase_036108_2);

#define VkglTestCase_036109_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036109_2 "nested_structs_instance_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036109, VkglTestCase_036109_1, VkglTestCase_036109_2);

#define VkglTestCase_036110_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036110_2 "nested_structs_instance_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036110, VkglTestCase_036110_1, VkglTestCase_036110_2);

#define VkglTestCase_036111_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036111_2 "nested_structs_instance_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036111, VkglTestCase_036111_1, VkglTestCase_036111_2);

#define VkglTestCase_036112_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036112_2 "nested_structs_instance_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036112, VkglTestCase_036112_1, VkglTestCase_036112_2);

#define VkglTestCase_036113_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036113_2 "nested_structs_instance_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036113, VkglTestCase_036113_1, VkglTestCase_036113_2);

#define VkglTestCase_036114_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036114_2 "nested_structs_instance_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036114, VkglTestCase_036114_1, VkglTestCase_036114_2);

#define VkglTestCase_036115_1 "dEQP-GLES3.functional.ubo.random."
#define VkglTestCase_036115_2 "nested_structs_instance_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036115, VkglTestCase_036115_1, VkglTestCase_036115_2);
