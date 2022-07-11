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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031120_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031120_2 "class_32_bits.rgb9_e5_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031120, VkglTestCase_031120_1, VkglTestCase_031120_2);

#define VkglTestCase_031121_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031121_2 "class_32_bits.rgb9_e5_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031121, VkglTestCase_031121_1, VkglTestCase_031121_2);

#define VkglTestCase_031122_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031122_2 "wclass_32_bits.rgb9_e5_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031122, VkglTestCase_031122_1, VkglTestCase_031122_2);

#define VkglTestCase_031123_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031123_2 "ss_32_bits.rgb9_e5_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031123, VkglTestCase_031123_1, VkglTestCase_031123_2);

#define VkglTestCase_031124_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031124_2 "lass_32_bits.rgb9_e5_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031124, VkglTestCase_031124_1, VkglTestCase_031124_2);

#define VkglTestCase_031125_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031125_2 "class_32_bits.rgb9_e5_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031125, VkglTestCase_031125_1, VkglTestCase_031125_2);

#define VkglTestCase_031126_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031126_2 "class_32_bits.rgb9_e5_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031126, VkglTestCase_031126_1, VkglTestCase_031126_2);

#define VkglTestCase_031127_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031127_2 "wclass_32_bits.rgb9_e5_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031127, VkglTestCase_031127_1, VkglTestCase_031127_2);

#define VkglTestCase_031128_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031128_2 "ss_32_bits.rgb9_e5_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031128, VkglTestCase_031128_1, VkglTestCase_031128_2);

#define VkglTestCase_031129_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031129_2 "lass_32_bits.rgb9_e5_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031129, VkglTestCase_031129_1, VkglTestCase_031129_2);

#define VkglTestCase_031130_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031130_2 "wclass_32_bits.rgb9_e5_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031130, VkglTestCase_031130_1, VkglTestCase_031130_2);

#define VkglTestCase_031131_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031131_2 "wclass_32_bits.rgb9_e5_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031131, VkglTestCase_031131_1, VkglTestCase_031131_2);

#define VkglTestCase_031132_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031132_2 "ewclass_32_bits.rgb9_e5_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031132, VkglTestCase_031132_1, VkglTestCase_031132_2);

#define VkglTestCase_031133_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031133_2 "ass_32_bits.rgb9_e5_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031133, VkglTestCase_031133_1, VkglTestCase_031133_2);

#define VkglTestCase_031134_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031134_2 "class_32_bits.rgb9_e5_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031134, VkglTestCase_031134_1, VkglTestCase_031134_2);

#define VkglTestCase_031135_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031135_2 "ss_32_bits.rgb9_e5_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031135, VkglTestCase_031135_1, VkglTestCase_031135_2);

#define VkglTestCase_031136_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031136_2 "ss_32_bits.rgb9_e5_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031136, VkglTestCase_031136_1, VkglTestCase_031136_2);

#define VkglTestCase_031137_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031137_2 "ass_32_bits.rgb9_e5_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031137, VkglTestCase_031137_1, VkglTestCase_031137_2);

#define VkglTestCase_031138_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_031138_2 "32_bits.rgb9_e5_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031138, VkglTestCase_031138_1, VkglTestCase_031138_2);

#define VkglTestCase_031139_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031139_2 "s_32_bits.rgb9_e5_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031139, VkglTestCase_031139_1, VkglTestCase_031139_2);
