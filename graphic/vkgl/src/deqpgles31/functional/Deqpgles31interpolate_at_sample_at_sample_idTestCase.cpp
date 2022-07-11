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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003183_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003183_2 "n.interpolate_at_sample.at_sample_id.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003183, VkglTestCase_003183_1, VkglTestCase_003183_2);

#define VkglTestCase_003184_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003184_2 ".interpolate_at_sample.at_sample_id.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003184, VkglTestCase_003184_1, VkglTestCase_003184_2);

#define VkglTestCase_003185_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003185_2 ".interpolate_at_sample.at_sample_id.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003185, VkglTestCase_003185_1, VkglTestCase_003185_2);

#define VkglTestCase_003186_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003186_2 ".interpolate_at_sample.at_sample_id.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003186, VkglTestCase_003186_1, VkglTestCase_003186_2);

#define VkglTestCase_003187_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003187_2 ".interpolate_at_sample.at_sample_id.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003187, VkglTestCase_003187_1, VkglTestCase_003187_2);

#define VkglTestCase_003188_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003188_2 ".interpolate_at_sample.at_sample_id.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003188, VkglTestCase_003188_1, VkglTestCase_003188_2);

#define VkglTestCase_003189_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003189_2 "interpolate_at_sample.at_sample_id.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003189, VkglTestCase_003189_1, VkglTestCase_003189_2);

#define VkglTestCase_003190_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003190_2 "on.interpolate_at_sample.at_sample_id.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003190, VkglTestCase_003190_1, VkglTestCase_003190_2);

#define VkglTestCase_003191_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003191_2 "on.interpolate_at_sample.at_sample_id.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003191, VkglTestCase_003191_1, VkglTestCase_003191_2);

#define VkglTestCase_003192_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003192_2 "on.interpolate_at_sample.at_sample_id.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003192, VkglTestCase_003192_1, VkglTestCase_003192_2);

#define VkglTestCase_003193_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003193_2 "on.interpolate_at_sample.at_sample_id.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003193, VkglTestCase_003193_1, VkglTestCase_003193_2);

#define VkglTestCase_003194_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003194_2 "on.interpolate_at_sample.at_sample_id.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003194, VkglTestCase_003194_1, VkglTestCase_003194_2);

#define VkglTestCase_003195_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003195_2 "n.interpolate_at_sample.at_sample_id.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003195, VkglTestCase_003195_1, VkglTestCase_003195_2);
