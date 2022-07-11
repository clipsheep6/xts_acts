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

#define VkglTestCase_019913_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019913_2 "bug.object_labels.initial"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019913, VkglTestCase_019913_1, VkglTestCase_019913_2);

#define VkglTestCase_019914_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019914_2 "bug.object_labels.clearing"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019914, VkglTestCase_019914_1, VkglTestCase_019914_2);

#define VkglTestCase_019915_1 "dEQP-GLES31.functional.debug.ob"
#define VkglTestCase_019915_2 "ject_labels.specify_with_length"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019915, VkglTestCase_019915_1, VkglTestCase_019915_2);

#define VkglTestCase_019916_1 "dEQP-GLES31.functional.debug.ob"
#define VkglTestCase_019916_2 "ject_labels.buffer_limited_query"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019916, VkglTestCase_019916_1, VkglTestCase_019916_2);

#define VkglTestCase_019917_1 "dEQP-GLES31.functional.debug."
#define VkglTestCase_019917_2 "object_labels.max_label_length"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019917, VkglTestCase_019917_1, VkglTestCase_019917_2);

#define VkglTestCase_019918_1 "dEQP-GLES31.functional.debug.o"
#define VkglTestCase_019918_2 "bject_labels.query_length_only"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019918, VkglTestCase_019918_1, VkglTestCase_019918_2);

#define VkglTestCase_019919_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019919_2 "ebug.object_labels.buffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019919, VkglTestCase_019919_1, VkglTestCase_019919_2);

#define VkglTestCase_019920_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019920_2 "ebug.object_labels.shader"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019920, VkglTestCase_019920_1, VkglTestCase_019920_2);

#define VkglTestCase_019921_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019921_2 "bug.object_labels.program"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019921, VkglTestCase_019921_1, VkglTestCase_019921_2);

#define VkglTestCase_019922_1 "dEQP-GLES31.functional.d"
#define VkglTestCase_019922_2 "ebug.object_labels.query"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019922, VkglTestCase_019922_1, VkglTestCase_019922_2);

#define VkglTestCase_019923_1 "dEQP-GLES31.functional.debug."
#define VkglTestCase_019923_2 "object_labels.program_pipeline"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019923, VkglTestCase_019923_1, VkglTestCase_019923_2);

#define VkglTestCase_019924_1 "dEQP-GLES31.functional.debug.o"
#define VkglTestCase_019924_2 "bject_labels.transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019924, VkglTestCase_019924_1, VkglTestCase_019924_2);

#define VkglTestCase_019925_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019925_2 "bug.object_labels.sampler"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019925, VkglTestCase_019925_1, VkglTestCase_019925_2);

#define VkglTestCase_019926_1 "dEQP-GLES31.functional.de"
#define VkglTestCase_019926_2 "bug.object_labels.texture"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019926, VkglTestCase_019926_1, VkglTestCase_019926_2);

#define VkglTestCase_019927_1 "dEQP-GLES31.functional.debu"
#define VkglTestCase_019927_2 "g.object_labels.renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019927, VkglTestCase_019927_1, VkglTestCase_019927_2);

#define VkglTestCase_019928_1 "dEQP-GLES31.functional.debu"
#define VkglTestCase_019928_2 "g.object_labels.framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019928, VkglTestCase_019928_1, VkglTestCase_019928_2);

#define VkglTestCase_019929_1 "dEQP-GLES31.functional."
#define VkglTestCase_019929_2 "debug.object_labels.sync"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019929, VkglTestCase_019929_1, VkglTestCase_019929_2);
