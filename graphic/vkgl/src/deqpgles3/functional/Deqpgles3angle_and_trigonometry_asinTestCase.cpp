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
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012254_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012254_2 "e_and_trigonometry.asin.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012254, VkglTestCase_012254_1, VkglTestCase_012254_2);

#define VkglTestCase_012255_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012255_2 "_and_trigonometry.asin.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012255, VkglTestCase_012255_1, VkglTestCase_012255_2);

#define VkglTestCase_012256_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012256_2 "le_and_trigonometry.asin.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012256, VkglTestCase_012256_1, VkglTestCase_012256_2);

#define VkglTestCase_012257_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012257_2 "e_and_trigonometry.asin.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012257, VkglTestCase_012257_1, VkglTestCase_012257_2);

#define VkglTestCase_012258_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012258_2 "e_and_trigonometry.asin.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012258, VkglTestCase_012258_1, VkglTestCase_012258_2);

#define VkglTestCase_012259_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012259_2 "_and_trigonometry.asin.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012259, VkglTestCase_012259_1, VkglTestCase_012259_2);

#define VkglTestCase_012260_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012260_2 "le_and_trigonometry.asin.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012260, VkglTestCase_012260_1, VkglTestCase_012260_2);

#define VkglTestCase_012261_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012261_2 "e_and_trigonometry.asin.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012261, VkglTestCase_012261_1, VkglTestCase_012261_2);

#define VkglTestCase_012262_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012262_2 "e_and_trigonometry.asin.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012262, VkglTestCase_012262_1, VkglTestCase_012262_2);

#define VkglTestCase_012263_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012263_2 "_and_trigonometry.asin.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012263, VkglTestCase_012263_1, VkglTestCase_012263_2);

#define VkglTestCase_012264_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012264_2 "le_and_trigonometry.asin.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012264, VkglTestCase_012264_1, VkglTestCase_012264_2);

#define VkglTestCase_012265_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012265_2 "e_and_trigonometry.asin.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012265, VkglTestCase_012265_1, VkglTestCase_012265_2);

#define VkglTestCase_012266_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012266_2 "e_and_trigonometry.asin.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012266, VkglTestCase_012266_1, VkglTestCase_012266_2);

#define VkglTestCase_012267_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012267_2 "_and_trigonometry.asin.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012267, VkglTestCase_012267_1, VkglTestCase_012267_2);

#define VkglTestCase_012268_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012268_2 "le_and_trigonometry.asin.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012268, VkglTestCase_012268_1, VkglTestCase_012268_2);

#define VkglTestCase_012269_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012269_2 "e_and_trigonometry.asin.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012269, VkglTestCase_012269_1, VkglTestCase_012269_2);
