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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026933_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026933_2 "n.texstorage3d.size.2d_array_1x1x1_1_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026933, VkglTestCase_026933_1, VkglTestCase_026933_2);

#define VkglTestCase_026934_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026934_2 "n.texstorage3d.size.2d_array_2x2x2_2_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026934, VkglTestCase_026934_1, VkglTestCase_026934_2);

#define VkglTestCase_026935_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026935_2 ".texstorage3d.size.2d_array_64x32x3_7_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026935, VkglTestCase_026935_1, VkglTestCase_026935_2);

#define VkglTestCase_026936_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026936_2 ".texstorage3d.size.2d_array_32x64x3_4_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026936, VkglTestCase_026936_1, VkglTestCase_026936_2);

#define VkglTestCase_026937_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026937_2 ".texstorage3d.size.2d_array_57x63x5_1_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026937, VkglTestCase_026937_1, VkglTestCase_026937_2);

#define VkglTestCase_026938_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026938_2 ".texstorage3d.size.2d_array_57x63x5_2_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026938, VkglTestCase_026938_1, VkglTestCase_026938_2);

#define VkglTestCase_026939_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026939_2 ".texstorage3d.size.2d_array_57x63x5_6_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026939, VkglTestCase_026939_1, VkglTestCase_026939_2);

#define VkglTestCase_026940_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026940_2 "tion.texstorage3d.size.3d_1x1x1_1_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026940, VkglTestCase_026940_1, VkglTestCase_026940_2);

#define VkglTestCase_026941_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026941_2 "tion.texstorage3d.size.3d_2x2x2_2_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026941, VkglTestCase_026941_1, VkglTestCase_026941_2);

#define VkglTestCase_026942_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026942_2 "on.texstorage3d.size.3d_64x32x16_7_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026942, VkglTestCase_026942_1, VkglTestCase_026942_2);

#define VkglTestCase_026943_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026943_2 "on.texstorage3d.size.3d_32x64x16_4_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026943, VkglTestCase_026943_1, VkglTestCase_026943_2);

#define VkglTestCase_026944_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026944_2 "on.texstorage3d.size.3d_32x16x64_4_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026944, VkglTestCase_026944_1, VkglTestCase_026944_2);

#define VkglTestCase_026945_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026945_2 "on.texstorage3d.size.3d_57x63x11_1_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026945, VkglTestCase_026945_1, VkglTestCase_026945_2);

#define VkglTestCase_026946_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026946_2 "on.texstorage3d.size.3d_57x63x11_2_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026946, VkglTestCase_026946_1, VkglTestCase_026946_2);

#define VkglTestCase_026947_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026947_2 "on.texstorage3d.size.3d_57x63x11_6_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026947, VkglTestCase_026947_1, VkglTestCase_026947_2);
