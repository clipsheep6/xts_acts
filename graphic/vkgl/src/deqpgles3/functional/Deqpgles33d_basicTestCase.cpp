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

#define VkglTestCase_025129_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025129_2 "map.3d.basic.nearest_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025129, VkglTestCase_025129_1, VkglTestCase_025129_2);

#define VkglTestCase_025130_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025130_2 ".3d.basic.nearest_nearest_clamp_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025130, VkglTestCase_025130_1, VkglTestCase_025130_2);

#define VkglTestCase_025131_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025131_2 "ap.3d.basic.nearest_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025131, VkglTestCase_025131_1, VkglTestCase_025131_2);

#define VkglTestCase_025132_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025132_2 ".3d.basic.nearest_nearest_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025132, VkglTestCase_025132_1, VkglTestCase_025132_2);

#define VkglTestCase_025133_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025133_2 "ap.3d.basic.nearest_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025133, VkglTestCase_025133_1, VkglTestCase_025133_2);

#define VkglTestCase_025134_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025134_2 ".3d.basic.nearest_nearest_mirror_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025134, VkglTestCase_025134_1, VkglTestCase_025134_2);

#define VkglTestCase_025135_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025135_2 "map.3d.basic.linear_nearest_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025135, VkglTestCase_025135_1, VkglTestCase_025135_2);

#define VkglTestCase_025136_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025136_2 "p.3d.basic.linear_nearest_clamp_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025136, VkglTestCase_025136_1, VkglTestCase_025136_2);

#define VkglTestCase_025137_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025137_2 "map.3d.basic.linear_nearest_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025137, VkglTestCase_025137_1, VkglTestCase_025137_2);

#define VkglTestCase_025138_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025138_2 ".3d.basic.linear_nearest_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025138, VkglTestCase_025138_1, VkglTestCase_025138_2);

#define VkglTestCase_025139_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025139_2 "map.3d.basic.linear_nearest_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025139, VkglTestCase_025139_1, VkglTestCase_025139_2);

#define VkglTestCase_025140_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025140_2 ".3d.basic.linear_nearest_mirror_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025140, VkglTestCase_025140_1, VkglTestCase_025140_2);

#define VkglTestCase_025141_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025141_2 "map.3d.basic.nearest_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025141, VkglTestCase_025141_1, VkglTestCase_025141_2);

#define VkglTestCase_025142_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025142_2 "p.3d.basic.nearest_linear_clamp_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025142, VkglTestCase_025142_1, VkglTestCase_025142_2);

#define VkglTestCase_025143_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025143_2 "map.3d.basic.nearest_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025143, VkglTestCase_025143_1, VkglTestCase_025143_2);

#define VkglTestCase_025144_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025144_2 ".3d.basic.nearest_linear_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025144, VkglTestCase_025144_1, VkglTestCase_025144_2);

#define VkglTestCase_025145_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025145_2 "map.3d.basic.nearest_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025145, VkglTestCase_025145_1, VkglTestCase_025145_2);

#define VkglTestCase_025146_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025146_2 ".3d.basic.nearest_linear_mirror_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025146, VkglTestCase_025146_1, VkglTestCase_025146_2);

#define VkglTestCase_025147_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025147_2 "pmap.3d.basic.linear_linear_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025147, VkglTestCase_025147_1, VkglTestCase_025147_2);

#define VkglTestCase_025148_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025148_2 "p.3d.basic.linear_linear_clamp_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025148, VkglTestCase_025148_1, VkglTestCase_025148_2);

#define VkglTestCase_025149_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025149_2 "map.3d.basic.linear_linear_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025149, VkglTestCase_025149_1, VkglTestCase_025149_2);

#define VkglTestCase_025150_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025150_2 "p.3d.basic.linear_linear_repeat_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025150, VkglTestCase_025150_1, VkglTestCase_025150_2);

#define VkglTestCase_025151_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025151_2 "map.3d.basic.linear_linear_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025151, VkglTestCase_025151_1, VkglTestCase_025151_2);

#define VkglTestCase_025152_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025152_2 "p.3d.basic.linear_linear_mirror_npot"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025152, VkglTestCase_025152_1, VkglTestCase_025152_2);
