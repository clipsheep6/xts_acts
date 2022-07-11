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
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041872_1 "dEQP-GLES3.functional.shader_api.s"
#define VkglTestCase_041872_2 "hader_source.replace_source_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041872, VkglTestCase_041872_1, VkglTestCase_041872_2);

#define VkglTestCase_041873_1 "dEQP-GLES3.functional.shader_api.sh"
#define VkglTestCase_041873_2 "ader_source.replace_source_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041873, VkglTestCase_041873_1, VkglTestCase_041873_2);

#define VkglTestCase_041874_1 "dEQP-GLES3.functional.shader_api.shader_so"
#define VkglTestCase_041874_2 "urce.split_source_2_null_terminated_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041874, VkglTestCase_041874_1, VkglTestCase_041874_2);

#define VkglTestCase_041875_1 "dEQP-GLES3.functional.shader_api.shader_sou"
#define VkglTestCase_041875_2 "rce.split_source_2_null_terminated_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041875, VkglTestCase_041875_1, VkglTestCase_041875_2);

#define VkglTestCase_041876_1 "dEQP-GLES3.functional.shader_api.shader_so"
#define VkglTestCase_041876_2 "urce.split_source_4_null_terminated_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041876, VkglTestCase_041876_1, VkglTestCase_041876_2);

#define VkglTestCase_041877_1 "dEQP-GLES3.functional.shader_api.shader_sou"
#define VkglTestCase_041877_2 "rce.split_source_4_null_terminated_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041877, VkglTestCase_041877_1, VkglTestCase_041877_2);

#define VkglTestCase_041878_1 "dEQP-GLES3.functional.shader_api.shader_so"
#define VkglTestCase_041878_2 "urce.split_source_8_null_terminated_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041878, VkglTestCase_041878_1, VkglTestCase_041878_2);

#define VkglTestCase_041879_1 "dEQP-GLES3.functional.shader_api.shader_sou"
#define VkglTestCase_041879_2 "rce.split_source_8_null_terminated_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041879, VkglTestCase_041879_1, VkglTestCase_041879_2);

#define VkglTestCase_041880_1 "dEQP-GLES3.functional.shader_api.shader_so"
#define VkglTestCase_041880_2 "urce.split_source_2_specify_lengths_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041880, VkglTestCase_041880_1, VkglTestCase_041880_2);

#define VkglTestCase_041881_1 "dEQP-GLES3.functional.shader_api.shader_sou"
#define VkglTestCase_041881_2 "rce.split_source_2_specify_lengths_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041881, VkglTestCase_041881_1, VkglTestCase_041881_2);

#define VkglTestCase_041882_1 "dEQP-GLES3.functional.shader_api.shader_so"
#define VkglTestCase_041882_2 "urce.split_source_4_specify_lengths_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041882, VkglTestCase_041882_1, VkglTestCase_041882_2);

#define VkglTestCase_041883_1 "dEQP-GLES3.functional.shader_api.shader_sou"
#define VkglTestCase_041883_2 "rce.split_source_4_specify_lengths_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041883, VkglTestCase_041883_1, VkglTestCase_041883_2);

#define VkglTestCase_041884_1 "dEQP-GLES3.functional.shader_api.shader_so"
#define VkglTestCase_041884_2 "urce.split_source_8_specify_lengths_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041884, VkglTestCase_041884_1, VkglTestCase_041884_2);

#define VkglTestCase_041885_1 "dEQP-GLES3.functional.shader_api.shader_sou"
#define VkglTestCase_041885_2 "rce.split_source_8_specify_lengths_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041885, VkglTestCase_041885_1, VkglTestCase_041885_2);

#define VkglTestCase_041886_1 "dEQP-GLES3.functional.shader_api.shader_sourc"
#define VkglTestCase_041886_2 "e.split_source_2_random_negative_length_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041886, VkglTestCase_041886_1, VkglTestCase_041886_2);

#define VkglTestCase_041887_1 "dEQP-GLES3.functional.shader_api.shader_source"
#define VkglTestCase_041887_2 ".split_source_2_random_negative_length_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041887, VkglTestCase_041887_1, VkglTestCase_041887_2);

#define VkglTestCase_041888_1 "dEQP-GLES3.functional.shader_api.shader_sourc"
#define VkglTestCase_041888_2 "e.split_source_4_random_negative_length_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041888, VkglTestCase_041888_1, VkglTestCase_041888_2);

#define VkglTestCase_041889_1 "dEQP-GLES3.functional.shader_api.shader_source"
#define VkglTestCase_041889_2 ".split_source_4_random_negative_length_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041889, VkglTestCase_041889_1, VkglTestCase_041889_2);

#define VkglTestCase_041890_1 "dEQP-GLES3.functional.shader_api.shader_sourc"
#define VkglTestCase_041890_2 "e.split_source_8_random_negative_length_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041890, VkglTestCase_041890_1, VkglTestCase_041890_2);

#define VkglTestCase_041891_1 "dEQP-GLES3.functional.shader_api.shader_source"
#define VkglTestCase_041891_2 ".split_source_8_random_negative_length_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041891, VkglTestCase_041891_1, VkglTestCase_041891_2);
