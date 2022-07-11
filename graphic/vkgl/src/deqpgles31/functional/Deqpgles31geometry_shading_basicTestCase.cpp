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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016306_1 "dEQP-GLES31.functional.geom"
#define VkglTestCase_016306_2 "etry_shading.basic.output_10"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016306, VkglTestCase_016306_1, VkglTestCase_016306_2);

#define VkglTestCase_016307_1 "dEQP-GLES31.functional.geome"
#define VkglTestCase_016307_2 "try_shading.basic.output_128"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016307, VkglTestCase_016307_1, VkglTestCase_016307_2);

#define VkglTestCase_016308_1 "dEQP-GLES31.functional.geome"
#define VkglTestCase_016308_2 "try_shading.basic.output_256"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016308, VkglTestCase_016308_1, VkglTestCase_016308_2);

#define VkglTestCase_016309_1 "dEQP-GLES31.functional.geome"
#define VkglTestCase_016309_2 "try_shading.basic.output_max"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016309, VkglTestCase_016309_1, VkglTestCase_016309_2);

#define VkglTestCase_016310_1 "dEQP-GLES31.functional.geometry"
#define VkglTestCase_016310_2 "_shading.basic.output_10_and_100"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016310, VkglTestCase_016310_1, VkglTestCase_016310_2);

#define VkglTestCase_016311_1 "dEQP-GLES31.functional.geometry"
#define VkglTestCase_016311_2 "_shading.basic.output_100_and_10"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016311, VkglTestCase_016311_1, VkglTestCase_016311_2);

#define VkglTestCase_016312_1 "dEQP-GLES31.functional.geometry"
#define VkglTestCase_016312_2 "_shading.basic.output_0_and_128"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016312, VkglTestCase_016312_1, VkglTestCase_016312_2);

#define VkglTestCase_016313_1 "dEQP-GLES31.functional.geometry"
#define VkglTestCase_016313_2 "_shading.basic.output_128_and_0"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016313, VkglTestCase_016313_1, VkglTestCase_016313_2);

#define VkglTestCase_016314_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016314_2 "ding.basic.output_vary_by_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016314, VkglTestCase_016314_1, VkglTestCase_016314_2);

#define VkglTestCase_016315_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016315_2 "ading.basic.output_vary_by_uniform"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016315, VkglTestCase_016315_1, VkglTestCase_016315_2);

#define VkglTestCase_016316_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016316_2 "ading.basic.output_vary_by_texture"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016316, VkglTestCase_016316_1, VkglTestCase_016316_2);

#define VkglTestCase_016317_1 "dEQP-GLES31.functional.geome"
#define VkglTestCase_016317_2 "try_shading.basic.point_size"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016317, VkglTestCase_016317_1, VkglTestCase_016317_2);

#define VkglTestCase_016318_1 "dEQP-GLES31.functional.geometr"
#define VkglTestCase_016318_2 "y_shading.basic.primitive_id_in"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016318, VkglTestCase_016318_1, VkglTestCase_016318_2);

#define VkglTestCase_016319_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016319_2 "ding.basic.primitive_id_in_restarted"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016319, VkglTestCase_016319_1, VkglTestCase_016319_2);

#define VkglTestCase_016320_1 "dEQP-GLES31.functional.geomet"
#define VkglTestCase_016320_2 "ry_shading.basic.primitive_id"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016320, VkglTestCase_016320_1, VkglTestCase_016320_2);
