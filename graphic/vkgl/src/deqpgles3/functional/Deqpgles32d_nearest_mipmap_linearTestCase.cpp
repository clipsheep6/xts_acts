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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025376_1 "dEQP-GLES3.functional.texture.shadow.2d.neares"
#define VkglTestCase_025376_2 "t_mipmap_linear.less_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025376, VkglTestCase_025376_1, VkglTestCase_025376_2);

#define VkglTestCase_025377_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest"
#define VkglTestCase_025377_2 "_mipmap_linear.less_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025377, VkglTestCase_025377_1, VkglTestCase_025377_2);

#define VkglTestCase_025378_1 "dEQP-GLES3.functional.texture.shadow.2d.neares"
#define VkglTestCase_025378_2 "t_mipmap_linear.less_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025378, VkglTestCase_025378_1, VkglTestCase_025378_2);

#define VkglTestCase_025379_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest_"
#define VkglTestCase_025379_2 "mipmap_linear.greater_or_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025379, VkglTestCase_025379_1, VkglTestCase_025379_2);

#define VkglTestCase_025380_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest_"
#define VkglTestCase_025380_2 "mipmap_linear.greater_or_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025380, VkglTestCase_025380_1, VkglTestCase_025380_2);

#define VkglTestCase_025381_1 "dEQP-GLES3.functional.texture.shadow.2d.nearest"
#define VkglTestCase_025381_2 "_mipmap_linear.greater_or_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025381, VkglTestCase_025381_1, VkglTestCase_025381_2);

#define VkglTestCase_025382_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025382_2 "arest_mipmap_linear.less_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025382, VkglTestCase_025382_1, VkglTestCase_025382_2);

#define VkglTestCase_025383_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025383_2 "arest_mipmap_linear.less_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025383, VkglTestCase_025383_1, VkglTestCase_025383_2);

#define VkglTestCase_025384_1 "dEQP-GLES3.functional.texture.shadow.2d.n"
#define VkglTestCase_025384_2 "earest_mipmap_linear.less_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025384, VkglTestCase_025384_1, VkglTestCase_025384_2);

#define VkglTestCase_025385_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025385_2 "rest_mipmap_linear.greater_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025385, VkglTestCase_025385_1, VkglTestCase_025385_2);

#define VkglTestCase_025386_1 "dEQP-GLES3.functional.texture.shadow.2d.near"
#define VkglTestCase_025386_2 "est_mipmap_linear.greater_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025386, VkglTestCase_025386_1, VkglTestCase_025386_2);

#define VkglTestCase_025387_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025387_2 "rest_mipmap_linear.greater_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025387, VkglTestCase_025387_1, VkglTestCase_025387_2);

#define VkglTestCase_025388_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025388_2 "arest_mipmap_linear.equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025388, VkglTestCase_025388_1, VkglTestCase_025388_2);

#define VkglTestCase_025389_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025389_2 "rest_mipmap_linear.equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025389, VkglTestCase_025389_1, VkglTestCase_025389_2);

#define VkglTestCase_025390_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025390_2 "arest_mipmap_linear.equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025390, VkglTestCase_025390_1, VkglTestCase_025390_2);

#define VkglTestCase_025391_1 "dEQP-GLES3.functional.texture.shadow.2d.near"
#define VkglTestCase_025391_2 "est_mipmap_linear.not_equal_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025391, VkglTestCase_025391_1, VkglTestCase_025391_2);

#define VkglTestCase_025392_1 "dEQP-GLES3.functional.texture.shadow.2d.neare"
#define VkglTestCase_025392_2 "st_mipmap_linear.not_equal_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025392, VkglTestCase_025392_1, VkglTestCase_025392_2);

#define VkglTestCase_025393_1 "dEQP-GLES3.functional.texture.shadow.2d.near"
#define VkglTestCase_025393_2 "est_mipmap_linear.not_equal_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025393, VkglTestCase_025393_1, VkglTestCase_025393_2);

#define VkglTestCase_025394_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025394_2 "rest_mipmap_linear.always_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025394, VkglTestCase_025394_1, VkglTestCase_025394_2);

#define VkglTestCase_025395_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025395_2 "rest_mipmap_linear.always_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025395, VkglTestCase_025395_1, VkglTestCase_025395_2);

#define VkglTestCase_025396_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025396_2 "arest_mipmap_linear.always_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025396, VkglTestCase_025396_1, VkglTestCase_025396_2);

#define VkglTestCase_025397_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025397_2 "arest_mipmap_linear.never_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025397, VkglTestCase_025397_1, VkglTestCase_025397_2);

#define VkglTestCase_025398_1 "dEQP-GLES3.functional.texture.shadow.2d.nea"
#define VkglTestCase_025398_2 "rest_mipmap_linear.never_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025398, VkglTestCase_025398_1, VkglTestCase_025398_2);

#define VkglTestCase_025399_1 "dEQP-GLES3.functional.texture.shadow.2d.ne"
#define VkglTestCase_025399_2 "arest_mipmap_linear.never_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025399, VkglTestCase_025399_1, VkglTestCase_025399_2);
