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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010911_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010911_2 "x.2d.filtering.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010911, VkglTestCase_010911_1, VkglTestCase_010911_2);

#define VkglTestCase_010912_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010912_2 ".2d.filtering.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010912, VkglTestCase_010912_1, VkglTestCase_010912_2);

#define VkglTestCase_010913_1 "dEQP-GLES2.functional.texture.vertex"
#define VkglTestCase_010913_2 ".2d.filtering.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010913, VkglTestCase_010913_1, VkglTestCase_010913_2);

#define VkglTestCase_010914_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010914_2 "x.2d.filtering.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010914, VkglTestCase_010914_1, VkglTestCase_010914_2);

#define VkglTestCase_010915_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010915_2 "x.2d.filtering.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010915, VkglTestCase_010915_1, VkglTestCase_010915_2);

#define VkglTestCase_010916_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010916_2 "x.2d.filtering.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010916, VkglTestCase_010916_1, VkglTestCase_010916_2);

#define VkglTestCase_010917_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010917_2 "x.2d.filtering.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010917, VkglTestCase_010917_1, VkglTestCase_010917_2);

#define VkglTestCase_010918_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010918_2 "x.2d.filtering.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010918, VkglTestCase_010918_1, VkglTestCase_010918_2);

#define VkglTestCase_010919_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010919_2 "x.2d.filtering.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010919, VkglTestCase_010919_1, VkglTestCase_010919_2);

#define VkglTestCase_010920_1 "dEQP-GLES2.functional.texture.vert"
#define VkglTestCase_010920_2 "ex.2d.filtering.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010920, VkglTestCase_010920_1, VkglTestCase_010920_2);

#define VkglTestCase_010921_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010921_2 "x.2d.filtering.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010921, VkglTestCase_010921_1, VkglTestCase_010921_2);

#define VkglTestCase_010922_1 "dEQP-GLES2.functional.texture.verte"
#define VkglTestCase_010922_2 "x.2d.filtering.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010922, VkglTestCase_010922_1, VkglTestCase_010922_2);

#define VkglTestCase_010923_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010923_2 "tering.nearest_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010923, VkglTestCase_010923_1, VkglTestCase_010923_2);

#define VkglTestCase_010924_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010924_2 "tering.nearest_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010924, VkglTestCase_010924_1, VkglTestCase_010924_2);

#define VkglTestCase_010925_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010925_2 "tering.nearest_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010925, VkglTestCase_010925_1, VkglTestCase_010925_2);

#define VkglTestCase_010926_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010926_2 "ltering.nearest_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010926, VkglTestCase_010926_1, VkglTestCase_010926_2);

#define VkglTestCase_010927_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010927_2 "tering.nearest_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010927, VkglTestCase_010927_1, VkglTestCase_010927_2);

#define VkglTestCase_010928_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010928_2 "tering.nearest_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010928, VkglTestCase_010928_1, VkglTestCase_010928_2);

#define VkglTestCase_010929_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010929_2 "ltering.linear_mipmap_nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010929, VkglTestCase_010929_1, VkglTestCase_010929_2);

#define VkglTestCase_010930_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010930_2 "tering.linear_mipmap_nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010930, VkglTestCase_010930_1, VkglTestCase_010930_2);

#define VkglTestCase_010931_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010931_2 "tering.linear_mipmap_nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010931, VkglTestCase_010931_1, VkglTestCase_010931_2);

#define VkglTestCase_010932_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010932_2 "ltering.linear_mipmap_nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010932, VkglTestCase_010932_1, VkglTestCase_010932_2);

#define VkglTestCase_010933_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010933_2 "ltering.linear_mipmap_nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010933, VkglTestCase_010933_1, VkglTestCase_010933_2);

#define VkglTestCase_010934_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010934_2 "ltering.linear_mipmap_nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010934, VkglTestCase_010934_1, VkglTestCase_010934_2);

#define VkglTestCase_010935_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010935_2 "ltering.nearest_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010935, VkglTestCase_010935_1, VkglTestCase_010935_2);

#define VkglTestCase_010936_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010936_2 "tering.nearest_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010936, VkglTestCase_010936_1, VkglTestCase_010936_2);

#define VkglTestCase_010937_1 "dEQP-GLES2.functional.texture.vertex.2d.fil"
#define VkglTestCase_010937_2 "tering.nearest_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010937, VkglTestCase_010937_1, VkglTestCase_010937_2);

#define VkglTestCase_010938_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010938_2 "ltering.nearest_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010938, VkglTestCase_010938_1, VkglTestCase_010938_2);

#define VkglTestCase_010939_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010939_2 "ltering.nearest_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010939, VkglTestCase_010939_1, VkglTestCase_010939_2);

#define VkglTestCase_010940_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010940_2 "ltering.nearest_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010940, VkglTestCase_010940_1, VkglTestCase_010940_2);

#define VkglTestCase_010941_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010941_2 "ltering.linear_mipmap_linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010941, VkglTestCase_010941_1, VkglTestCase_010941_2);

#define VkglTestCase_010942_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010942_2 "ltering.linear_mipmap_linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010942, VkglTestCase_010942_1, VkglTestCase_010942_2);

#define VkglTestCase_010943_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010943_2 "ltering.linear_mipmap_linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010943, VkglTestCase_010943_1, VkglTestCase_010943_2);

#define VkglTestCase_010944_1 "dEQP-GLES2.functional.texture.vertex.2d.f"
#define VkglTestCase_010944_2 "iltering.linear_mipmap_linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010944, VkglTestCase_010944_1, VkglTestCase_010944_2);

#define VkglTestCase_010945_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010945_2 "ltering.linear_mipmap_linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010945, VkglTestCase_010945_1, VkglTestCase_010945_2);

#define VkglTestCase_010946_1 "dEQP-GLES2.functional.texture.vertex.2d.fi"
#define VkglTestCase_010946_2 "ltering.linear_mipmap_linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010946, VkglTestCase_010946_1, VkglTestCase_010946_2);
