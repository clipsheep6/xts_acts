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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002059_1 "KHR-GLES31.core.draw_indi"
#define VkglTestCase_002059_2 "rect.basic-binding-default"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002059, VkglTestCase_002059_1, VkglTestCase_002059_2);

#define VkglTestCase_002060_1 "KHR-GLES31.core.draw_ind"
#define VkglTestCase_002060_2 "irect.basic-binding-zero"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002060, VkglTestCase_002060_1, VkglTestCase_002060_2);

#define VkglTestCase_002061_1 "KHR-GLES31.core.draw_indi"
#define VkglTestCase_002061_2 "rect.basic-binding-single"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002061, VkglTestCase_002061_1, VkglTestCase_002061_2);

#define VkglTestCase_002062_1 "KHR-GLES31.core.draw_ind"
#define VkglTestCase_002062_2 "irect.basic-binding-multi"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002062, VkglTestCase_002062_1, VkglTestCase_002062_2);

#define VkglTestCase_002063_1 "KHR-GLES31.core.draw_indi"
#define VkglTestCase_002063_2 "rect.basic-binding-delete"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002063, VkglTestCase_002063_1, VkglTestCase_002063_2);

#define VkglTestCase_002064_1 "KHR-GLES31.core.draw_in"
#define VkglTestCase_002064_2 "direct.basic-buffer-data"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002064, VkglTestCase_002064_1, VkglTestCase_002064_2);

#define VkglTestCase_002065_1 "KHR-GLES31.core.draw_indi"
#define VkglTestCase_002065_2 "rect.basic-buffer-subData"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002065, VkglTestCase_002065_1, VkglTestCase_002065_2);

#define VkglTestCase_002066_1 "KHR-GLES31.core.draw_indire"
#define VkglTestCase_002066_2 "ct.basic-buffer-getPointerv"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002066, VkglTestCase_002066_1, VkglTestCase_002066_2);

#define VkglTestCase_002067_1 "KHR-GLES31.core.draw_indi"
#define VkglTestCase_002067_2 "rect.basic-buffer-mapRange"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002067, VkglTestCase_002067_1, VkglTestCase_002067_2);

#define VkglTestCase_002068_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002068_2 ".basic-buffer-flushMappedRange"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002068, VkglTestCase_002068_1, VkglTestCase_002068_2);

#define VkglTestCase_002069_1 "KHR-GLES31.core.draw_indire"
#define VkglTestCase_002069_2 "ct.basic-buffer-copySubData"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002069, VkglTestCase_002069_1, VkglTestCase_002069_2);

#define VkglTestCase_002070_1 "KHR-GLES31.core.draw_indirect.b"
#define VkglTestCase_002070_2 "asic-drawArrays-singlePrimitive"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002070, VkglTestCase_002070_1, VkglTestCase_002070_2);

#define VkglTestCase_002071_1 "KHR-GLES31.core.draw_indirect."
#define VkglTestCase_002071_2 "basic-drawArrays-manyPrimitives"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002071, VkglTestCase_002071_1, VkglTestCase_002071_2);

#define VkglTestCase_002072_1 "KHR-GLES31.core.draw_indirec"
#define VkglTestCase_002072_2 "t.basic-drawArrays-instancing"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002072, VkglTestCase_002072_1, VkglTestCase_002072_2);

#define VkglTestCase_002073_1 "KHR-GLES31.core.draw_indirec"
#define VkglTestCase_002073_2 "t.basic-drawArrays-xfbPaused"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002073, VkglTestCase_002073_1, VkglTestCase_002073_2);

#define VkglTestCase_002074_1 "KHR-GLES31.core.draw_indirect.ba"
#define VkglTestCase_002074_2 "sic-drawElements-singlePrimitive"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002074, VkglTestCase_002074_1, VkglTestCase_002074_2);

#define VkglTestCase_002075_1 "KHR-GLES31.core.draw_indirect.b"
#define VkglTestCase_002075_2 "asic-drawElements-manyPrimitives"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002075, VkglTestCase_002075_1, VkglTestCase_002075_2);

#define VkglTestCase_002076_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002076_2 ".basic-drawElements-instancing"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002076, VkglTestCase_002076_1, VkglTestCase_002076_2);

#define VkglTestCase_002077_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002077_2 ".basic-drawElements-xfbPaused"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002077, VkglTestCase_002077_1, VkglTestCase_002077_2);

#define VkglTestCase_002078_1 "KHR-GLES31.core.draw_indir"
#define VkglTestCase_002078_2 "ect.basic-drawArrays-simple"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002078, VkglTestCase_002078_1, VkglTestCase_002078_2);

#define VkglTestCase_002079_1 "KHR-GLES31.core.draw_indire"
#define VkglTestCase_002079_2 "ct.basic-drawArrays-noFirst"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002079, VkglTestCase_002079_1, VkglTestCase_002079_2);

#define VkglTestCase_002080_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002080_2 ".basic-drawArrays-bufferOffset"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002080, VkglTestCase_002080_1, VkglTestCase_002080_2);

#define VkglTestCase_002081_1 "KHR-GLES31.core.draw_indirec"
#define VkglTestCase_002081_2 "t.basic-drawArrays-vertexIds"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002081, VkglTestCase_002081_1, VkglTestCase_002081_2);

#define VkglTestCase_002082_1 "KHR-GLES31.core.draw_indire"
#define VkglTestCase_002082_2 "ct.basic-drawElements-simple"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002082, VkglTestCase_002082_1, VkglTestCase_002082_2);

#define VkglTestCase_002083_1 "KHR-GLES31.core.draw_indirect."
#define VkglTestCase_002083_2 "basic-drawElements-noFirstIndex"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002083, VkglTestCase_002083_1, VkglTestCase_002083_2);

#define VkglTestCase_002084_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002084_2 ".basic-drawElements-basevertex"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002084, VkglTestCase_002084_1, VkglTestCase_002084_2);

#define VkglTestCase_002085_1 "KHR-GLES31.core.draw_indirect."
#define VkglTestCase_002085_2 "basic-drawElements-bufferOffset"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002085, VkglTestCase_002085_1, VkglTestCase_002085_2);

#define VkglTestCase_002086_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002086_2 ".basic-drawElements-vertexIds"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002086, VkglTestCase_002086_1, VkglTestCase_002086_2);

#define VkglTestCase_002087_1 "KHR-GLES31.core.draw_indirect.bas"
#define VkglTestCase_002087_2 "ic-indicesDataType-unsigned_short"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002087, VkglTestCase_002087_1, VkglTestCase_002087_2);

#define VkglTestCase_002088_1 "KHR-GLES31.core.draw_indirect.ba"
#define VkglTestCase_002088_2 "sic-indicesDataType-unsigned_byte"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002088, VkglTestCase_002088_1, VkglTestCase_002088_2);

#define VkglTestCase_002089_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002089_2 ".basic-mode-drawArrays-points"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002089, VkglTestCase_002089_1, VkglTestCase_002089_2);

#define VkglTestCase_002090_1 "KHR-GLES31.core.draw_indirec"
#define VkglTestCase_002090_2 "t.basic-mode-drawArrays-lines"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002090, VkglTestCase_002090_1, VkglTestCase_002090_2);

#define VkglTestCase_002091_1 "KHR-GLES31.core.draw_indirect.b"
#define VkglTestCase_002091_2 "asic-mode-drawArrays-line_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002091, VkglTestCase_002091_1, VkglTestCase_002091_2);

#define VkglTestCase_002092_1 "KHR-GLES31.core.draw_indirect."
#define VkglTestCase_002092_2 "basic-mode-drawArrays-line_loop"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002092, VkglTestCase_002092_1, VkglTestCase_002092_2);

#define VkglTestCase_002093_1 "KHR-GLES31.core.draw_indirect.bas"
#define VkglTestCase_002093_2 "ic-mode-drawArrays-triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002093, VkglTestCase_002093_1, VkglTestCase_002093_2);

#define VkglTestCase_002094_1 "KHR-GLES31.core.draw_indirect.ba"
#define VkglTestCase_002094_2 "sic-mode-drawArrays-triangle_fan"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002094, VkglTestCase_002094_1, VkglTestCase_002094_2);

#define VkglTestCase_002095_1 "KHR-GLES31.core.draw_indirect.bas"
#define VkglTestCase_002095_2 "ic-mode-drawArrays-lines_adjacency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002095, VkglTestCase_002095_1, VkglTestCase_002095_2);

#define VkglTestCase_002096_1 "KHR-GLES31.core.draw_indirect.basic-"
#define VkglTestCase_002096_2 "mode-drawArrays-line_strip_adjacency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002096, VkglTestCase_002096_1, VkglTestCase_002096_2);

#define VkglTestCase_002097_1 "KHR-GLES31.core.draw_indirect.basic"
#define VkglTestCase_002097_2 "-mode-drawArrays-triangles_adjacency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002097, VkglTestCase_002097_1, VkglTestCase_002097_2);

#define VkglTestCase_002098_1 "KHR-GLES31.core.draw_indirect.basic-mo"
#define VkglTestCase_002098_2 "de-drawArrays-triangle_strip_adjacency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002098, VkglTestCase_002098_1, VkglTestCase_002098_2);

#define VkglTestCase_002099_1 "KHR-GLES31.core.draw_indirect."
#define VkglTestCase_002099_2 "basic-mode-drawElements-points"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002099, VkglTestCase_002099_1, VkglTestCase_002099_2);

#define VkglTestCase_002100_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002100_2 ".basic-mode-drawElements-lines"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002100, VkglTestCase_002100_1, VkglTestCase_002100_2);

#define VkglTestCase_002101_1 "KHR-GLES31.core.draw_indirect.ba"
#define VkglTestCase_002101_2 "sic-mode-drawElements-line_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002101, VkglTestCase_002101_1, VkglTestCase_002101_2);

#define VkglTestCase_002102_1 "KHR-GLES31.core.draw_indirect.b"
#define VkglTestCase_002102_2 "asic-mode-drawElements-line_loop"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002102, VkglTestCase_002102_1, VkglTestCase_002102_2);

#define VkglTestCase_002103_1 "KHR-GLES31.core.draw_indirect.basi"
#define VkglTestCase_002103_2 "c-mode-drawElements-triangle_strip"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002103, VkglTestCase_002103_1, VkglTestCase_002103_2);

#define VkglTestCase_002104_1 "KHR-GLES31.core.draw_indirect.bas"
#define VkglTestCase_002104_2 "ic-mode-drawElements-triangle_fan"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002104, VkglTestCase_002104_1, VkglTestCase_002104_2);

#define VkglTestCase_002105_1 "KHR-GLES31.core.draw_indirect.basi"
#define VkglTestCase_002105_2 "c-mode-drawElements-lines_adjacency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002105, VkglTestCase_002105_1, VkglTestCase_002105_2);

#define VkglTestCase_002106_1 "KHR-GLES31.core.draw_indirect.basic-m"
#define VkglTestCase_002106_2 "ode-drawElements-line_strip_adjacency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002106, VkglTestCase_002106_1, VkglTestCase_002106_2);

#define VkglTestCase_002107_1 "KHR-GLES31.core.draw_indirect.basic-"
#define VkglTestCase_002107_2 "mode-drawElements-triangles_adjacency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002107, VkglTestCase_002107_1, VkglTestCase_002107_2);

#define VkglTestCase_002108_1 "KHR-GLES31.core.draw_indirect.basic-mod"
#define VkglTestCase_002108_2 "e-drawElements-triangle_strip_adjacency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002108, VkglTestCase_002108_1, VkglTestCase_002108_2);

#define VkglTestCase_002109_1 "KHR-GLES31.core.draw_indirect.advan"
#define VkglTestCase_002109_2 "ced-twoPass-transformFeedback-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002109, VkglTestCase_002109_1, VkglTestCase_002109_2);

#define VkglTestCase_002110_1 "KHR-GLES31.core.draw_indirect.advanc"
#define VkglTestCase_002110_2 "ed-twoPass-transformFeedback-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002110, VkglTestCase_002110_1, VkglTestCase_002110_2);

#define VkglTestCase_002111_1 "KHR-GLES31.core.draw_indirect."
#define VkglTestCase_002111_2 "advanced-twoPass-Compute-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002111, VkglTestCase_002111_1, VkglTestCase_002111_2);

#define VkglTestCase_002112_1 "KHR-GLES31.core.draw_indirect.a"
#define VkglTestCase_002112_2 "dvanced-twoPass-Compute-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002112, VkglTestCase_002112_1, VkglTestCase_002112_2);

#define VkglTestCase_002113_1 "KHR-GLES31.core.draw_indirect.ad"
#define VkglTestCase_002113_2 "vanced-primitiveRestart-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002113, VkglTestCase_002113_1, VkglTestCase_002113_2);

#define VkglTestCase_002114_1 "KHR-GLES31.core.draw_indirec"
#define VkglTestCase_002114_2 "t.negative-noindirect-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002114, VkglTestCase_002114_1, VkglTestCase_002114_2);

#define VkglTestCase_002115_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002115_2 ".negative-noindirect-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002115, VkglTestCase_002115_1, VkglTestCase_002115_2);

#define VkglTestCase_002116_1 "KHR-GLES31.core.draw_indirec"
#define VkglTestCase_002116_2 "t.negative-invalidMode-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002116, VkglTestCase_002116_1, VkglTestCase_002116_2);

#define VkglTestCase_002117_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002117_2 ".negative-invalidMode-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002117, VkglTestCase_002117_1, VkglTestCase_002117_2);

#define VkglTestCase_002118_1 "KHR-GLES31.core.draw_indi"
#define VkglTestCase_002118_2 "rect.negative-noVAO-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002118, VkglTestCase_002118_1, VkglTestCase_002118_2);

#define VkglTestCase_002119_1 "KHR-GLES31.core.draw_indir"
#define VkglTestCase_002119_2 "ect.negative-noVAO-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002119, VkglTestCase_002119_1, VkglTestCase_002119_2);

#define VkglTestCase_002120_1 "KHR-GLES31.core.draw_indi"
#define VkglTestCase_002120_2 "rect.negative-noVBO-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002120, VkglTestCase_002120_1, VkglTestCase_002120_2);

#define VkglTestCase_002121_1 "KHR-GLES31.core.draw_indir"
#define VkglTestCase_002121_2 "ect.negative-noVBO-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002121, VkglTestCase_002121_1, VkglTestCase_002121_2);

#define VkglTestCase_002122_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002122_2 ".negative-bufferMapped-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002122, VkglTestCase_002122_1, VkglTestCase_002122_2);

#define VkglTestCase_002123_1 "KHR-GLES31.core.draw_indirect."
#define VkglTestCase_002123_2 "negative-bufferMapped-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002123, VkglTestCase_002123_1, VkglTestCase_002123_2);

#define VkglTestCase_002124_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002124_2 ".negative-invalidType-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002124, VkglTestCase_002124_1, VkglTestCase_002124_2);

#define VkglTestCase_002125_1 "KHR-GLES31.core.draw_indirec"
#define VkglTestCase_002125_2 "t.negative-wrongOffset-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002125, VkglTestCase_002125_1, VkglTestCase_002125_2);

#define VkglTestCase_002126_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002126_2 ".negative-wrongOffset-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002126, VkglTestCase_002126_1, VkglTestCase_002126_2);

#define VkglTestCase_002127_1 "KHR-GLES31.core.draw_indirec"
#define VkglTestCase_002127_2 "t.negative-invalidSize-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002127, VkglTestCase_002127_1, VkglTestCase_002127_2);

#define VkglTestCase_002128_1 "KHR-GLES31.core.draw_indirect"
#define VkglTestCase_002128_2 ".negative-invalidSize-elements"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002128, VkglTestCase_002128_1, VkglTestCase_002128_2);

#define VkglTestCase_002129_1 "KHR-GLES31.core.draw_indire"
#define VkglTestCase_002129_2 "ct.negative-unalignedOffset"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002129, VkglTestCase_002129_1, VkglTestCase_002129_2);

#define VkglTestCase_002130_1 "KHR-GLES31.core.draw_"
#define VkglTestCase_002130_2 "indirect.negative-xfb"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002130, VkglTestCase_002130_1, VkglTestCase_002130_2);
