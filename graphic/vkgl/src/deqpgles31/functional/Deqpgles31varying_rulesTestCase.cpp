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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004445_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004445_2 ".geometry.varying.rules.input_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004445, VkglTestCase_004445_1, VkglTestCase_004445_2);

#define VkglTestCase_004446_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004446_2 ".geometry.varying.rules.output_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004446, VkglTestCase_004446_1, VkglTestCase_004446_2);

#define VkglTestCase_004447_1 "dEQP-GLES31.functional.shaders.linkage.es31.ge"
#define VkglTestCase_004447_2 "ometry.varying.rules.input_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004447, VkglTestCase_004447_1, VkglTestCase_004447_2);

#define VkglTestCase_004448_1 "dEQP-GLES31.functional.shaders.linkage.es31.ge"
#define VkglTestCase_004448_2 "ometry.varying.rules.output_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004448, VkglTestCase_004448_1, VkglTestCase_004448_2);

#define VkglTestCase_004449_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004449_2 ".geometry.varying.rules.input_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004449, VkglTestCase_004449_1, VkglTestCase_004449_2);

#define VkglTestCase_004450_1 "dEQP-GLES31.functional.shaders.linkage.es31."
#define VkglTestCase_004450_2 "geometry.varying.rules.output_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004450, VkglTestCase_004450_1, VkglTestCase_004450_2);

#define VkglTestCase_004451_1 "dEQP-GLES31.functional.shaders.linkage.es31.geom"
#define VkglTestCase_004451_2 "etry.varying.rules.input_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004451, VkglTestCase_004451_1, VkglTestCase_004451_2);

#define VkglTestCase_004452_1 "dEQP-GLES31.functional.shaders.linkage.es31.geom"
#define VkglTestCase_004452_2 "etry.varying.rules.output_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004452, VkglTestCase_004452_1, VkglTestCase_004452_2);

#define VkglTestCase_004453_1 "dEQP-GLES31.functional.shaders.linkage.es31.ge"
#define VkglTestCase_004453_2 "ometry.varying.rules.input_array_explicit_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004453, VkglTestCase_004453_1, VkglTestCase_004453_2);

#define VkglTestCase_004454_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004454_2 "31.geometry.varying.rules.input_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004454, VkglTestCase_004454_1, VkglTestCase_004454_2);

#define VkglTestCase_004455_1 "dEQP-GLES31.functional.shaders.linkage.es31.ge"
#define VkglTestCase_004455_2 "ometry.varying.rules.input_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004455, VkglTestCase_004455_1, VkglTestCase_004455_2);

#define VkglTestCase_004456_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004456_2 "es31.geometry.varying.rules.input_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004456, VkglTestCase_004456_1, VkglTestCase_004456_2);

#define VkglTestCase_004457_1 "dEQP-GLES31.functional.shaders.linkage.es31.ge"
#define VkglTestCase_004457_2 "ometry.varying.rules.input_block_explicit_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004457, VkglTestCase_004457_1, VkglTestCase_004457_2);

#define VkglTestCase_004458_1 "dEQP-GLES31.functional.shaders.linkage.es31."
#define VkglTestCase_004458_2 "geometry.varying.rules.input_block_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004458, VkglTestCase_004458_1, VkglTestCase_004458_2);

#define VkglTestCase_004459_1 "dEQP-GLES31.functional.shaders.linkage.es31.geome"
#define VkglTestCase_004459_2 "try.varying.rules.input_block_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004459, VkglTestCase_004459_1, VkglTestCase_004459_2);

#define VkglTestCase_004460_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004460_2 "es31.geometry.varying.rules.output_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004460, VkglTestCase_004460_1, VkglTestCase_004460_2);

#define VkglTestCase_004461_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004461_2 "1.geometry.varying.rules.output_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004461, VkglTestCase_004461_1, VkglTestCase_004461_2);

#define VkglTestCase_004462_1 "dEQP-GLES31.functional.shaders.linkage.es31.geome"
#define VkglTestCase_004462_2 "try.varying.rules.unspecified_input_primitive_type"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004462, VkglTestCase_004462_1, VkglTestCase_004462_2);

#define VkglTestCase_004463_1 "dEQP-GLES31.functional.shaders.linkage.es31.geomet"
#define VkglTestCase_004463_2 "ry.varying.rules.unspecified_output_primitive_type"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004463, VkglTestCase_004463_1, VkglTestCase_004463_2);

#define VkglTestCase_004464_1 "dEQP-GLES31.functional.shaders.linkage.es31.geometry.v"
#define VkglTestCase_004464_2 "arying.rules.unspecified_output_primitive_num_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004464, VkglTestCase_004464_1, VkglTestCase_004464_2);

#define VkglTestCase_004465_1 "dEQP-GLES31.functional.shaders.linkage.es31.geometry.v"
#define VkglTestCase_004465_2 "arying.rules.access_more_than_available_input_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004465, VkglTestCase_004465_1, VkglTestCase_004465_2);

#define VkglTestCase_004520_1 "dEQP-GLES31.functional.shaders.linkage.es31.t"
#define VkglTestCase_004520_2 "essellation.varying.rules.input_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004520, VkglTestCase_004520_1, VkglTestCase_004520_2);

#define VkglTestCase_004521_1 "dEQP-GLES31.functional.shaders.linkage.es31.t"
#define VkglTestCase_004521_2 "essellation.varying.rules.output_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004521, VkglTestCase_004521_1, VkglTestCase_004521_2);

#define VkglTestCase_004522_1 "dEQP-GLES31.functional.shaders.linkage.es31.te"
#define VkglTestCase_004522_2 "ssellation.varying.rules.internal_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004522, VkglTestCase_004522_1, VkglTestCase_004522_2);

#define VkglTestCase_004523_1 "dEQP-GLES31.functional.shaders.linkage.es31.tess"
#define VkglTestCase_004523_2 "ellation.varying.rules.input_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004523, VkglTestCase_004523_1, VkglTestCase_004523_2);

#define VkglTestCase_004524_1 "dEQP-GLES31.functional.shaders.linkage.es31.tess"
#define VkglTestCase_004524_2 "ellation.varying.rules.output_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004524, VkglTestCase_004524_1, VkglTestCase_004524_2);

#define VkglTestCase_004525_1 "dEQP-GLES31.functional.shaders.linkage.es31.tesse"
#define VkglTestCase_004525_2 "llation.varying.rules.internal_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004525, VkglTestCase_004525_1, VkglTestCase_004525_2);

#define VkglTestCase_004526_1 "dEQP-GLES31.functional.shaders.linkage.es31.t"
#define VkglTestCase_004526_2 "essellation.varying.rules.input_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004526, VkglTestCase_004526_1, VkglTestCase_004526_2);

#define VkglTestCase_004527_1 "dEQP-GLES31.functional.shaders.linkage.es31.te"
#define VkglTestCase_004527_2 "ssellation.varying.rules.output_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004527, VkglTestCase_004527_1, VkglTestCase_004527_2);

#define VkglTestCase_004528_1 "dEQP-GLES31.functional.shaders.linkage.es31.tes"
#define VkglTestCase_004528_2 "sellation.varying.rules.internal_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004528, VkglTestCase_004528_1, VkglTestCase_004528_2);

#define VkglTestCase_004529_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessel"
#define VkglTestCase_004529_2 "lation.varying.rules.input_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004529, VkglTestCase_004529_1, VkglTestCase_004529_2);

#define VkglTestCase_004530_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessel"
#define VkglTestCase_004530_2 "lation.varying.rules.output_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004530, VkglTestCase_004530_1, VkglTestCase_004530_2);

#define VkglTestCase_004531_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessell"
#define VkglTestCase_004531_2 "ation.varying.rules.internal_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004531, VkglTestCase_004531_1, VkglTestCase_004531_2);

#define VkglTestCase_004532_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessellat"
#define VkglTestCase_004532_2 "ion.varying.rules.vertex_fragment_same_varying_name_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004532, VkglTestCase_004532_1, VkglTestCase_004532_2);

#define VkglTestCase_004533_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessellat"
#define VkglTestCase_004533_2 "ion.varying.rules.vertex_fragment_same_varying_name_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004533, VkglTestCase_004533_1, VkglTestCase_004533_2);

#define VkglTestCase_004534_1 "dEQP-GLES31.functional.shaders.linkage.es31.t"
#define VkglTestCase_004534_2 "essellation.varying.rules.invalid_vertex_index"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004534, VkglTestCase_004534_1, VkglTestCase_004534_2);

#define VkglTestCase_004535_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004535_2 ".tessellation.varying.rules.input_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004535, VkglTestCase_004535_1, VkglTestCase_004535_2);

#define VkglTestCase_004536_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004536_2 ".tessellation.varying.rules.output_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004536, VkglTestCase_004536_1, VkglTestCase_004536_2);

#define VkglTestCase_004537_1 "dEQP-GLES31.functional.shaders.linkage.es31.tess"
#define VkglTestCase_004537_2 "ellation.varying.rules.input_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004537, VkglTestCase_004537_1, VkglTestCase_004537_2);

#define VkglTestCase_004538_1 "dEQP-GLES31.functional.shaders.linkage.es31.tesse"
#define VkglTestCase_004538_2 "llation.varying.rules.internal_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004538, VkglTestCase_004538_1, VkglTestCase_004538_2);

#define VkglTestCase_004539_1 "dEQP-GLES31.functional.shaders.linkage.es31.te"
#define VkglTestCase_004539_2 "ssellation.varying.rules.invalid_patch_in_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004539, VkglTestCase_004539_1, VkglTestCase_004539_2);

#define VkglTestCase_004540_1 "dEQP-GLES31.functional.shaders.linkage.es31.tes"
#define VkglTestCase_004540_2 "sellation.varying.rules.invalid_patch_out_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004540, VkglTestCase_004540_1, VkglTestCase_004540_2);

#define VkglTestCase_004541_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessella"
#define VkglTestCase_004541_2 "tion.varying.rules.invalid_per_patch_qualifier_usage"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004541, VkglTestCase_004541_1, VkglTestCase_004541_2);

#define VkglTestCase_004542_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessel"
#define VkglTestCase_004542_2 "lation.varying.rules.per_patch_qualifier_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004542, VkglTestCase_004542_1, VkglTestCase_004542_2);

#define VkglTestCase_004543_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessel"
#define VkglTestCase_004543_2 "lation.varying.rules.per_patch_qualifier_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004543, VkglTestCase_004543_1, VkglTestCase_004543_2);

#define VkglTestCase_004544_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004544_2 "31.tessellation.varying.rules.input_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004544, VkglTestCase_004544_1, VkglTestCase_004544_2);

#define VkglTestCase_004545_1 "dEQP-GLES31.functional.shaders.linkage.es31.te"
#define VkglTestCase_004545_2 "ssellation.varying.rules.input_block_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004545, VkglTestCase_004545_1, VkglTestCase_004545_2);

#define VkglTestCase_004546_1 "dEQP-GLES31.functional.shaders.linkage.es31.te"
#define VkglTestCase_004546_2 "ssellation.varying.rules.output_block_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004546, VkglTestCase_004546_1, VkglTestCase_004546_2);

#define VkglTestCase_004547_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessell"
#define VkglTestCase_004547_2 "ation.varying.rules.input_block_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004547, VkglTestCase_004547_1, VkglTestCase_004547_2);

#define VkglTestCase_004548_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004548_2 "31.tessellation.varying.rules.output_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004548, VkglTestCase_004548_1, VkglTestCase_004548_2);

#define VkglTestCase_004549_1 "dEQP-GLES31.functional.shaders.linkage.es31."
#define VkglTestCase_004549_2 "tessellation.varying.rules.output_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004549, VkglTestCase_004549_1, VkglTestCase_004549_2);

#define VkglTestCase_004550_1 "dEQP-GLES31.functional.shaders.linkage.es31.tes"
#define VkglTestCase_004550_2 "sellation.varying.rules.unspecified_vertex_count"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004550, VkglTestCase_004550_1, VkglTestCase_004550_2);

#define VkglTestCase_004551_1 "dEQP-GLES31.functional.shaders.linkage.es31.tess"
#define VkglTestCase_004551_2 "ellation.varying.rules.unspecified_primitive_mode"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004551, VkglTestCase_004551_1, VkglTestCase_004551_2);

#define VkglTestCase_004616_1 "dEQP-GLES31.functional.shaders.linkage.es31.te"
#define VkglTestCase_004616_2 "ssellation_geometry.varying.rules.type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004616, VkglTestCase_004616_1, VkglTestCase_004616_2);

#define VkglTestCase_004617_1 "dEQP-GLES31.functional.shaders.linkage.es31.tesse"
#define VkglTestCase_004617_2 "llation_geometry.varying.rules.different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004617, VkglTestCase_004617_1, VkglTestCase_004617_2);

#define VkglTestCase_004618_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessel"
#define VkglTestCase_004618_2 "lation_geometry.varying.rules.no_output_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004618, VkglTestCase_004618_1, VkglTestCase_004618_2);

#define VkglTestCase_004619_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessellatio"
#define VkglTestCase_004619_2 "n_geometry.varying.rules.superfluous_output_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004619, VkglTestCase_004619_1, VkglTestCase_004619_2);

#define VkglTestCase_004620_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessellation_"
#define VkglTestCase_004620_2 "geometry.varying.rules.vertex_geometry_same_varying_name_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004620, VkglTestCase_004620_1, VkglTestCase_004620_2);

#define VkglTestCase_004621_1 "dEQP-GLES31.functional.shaders.linkage.es31.tessellation_"
#define VkglTestCase_004621_2 "geometry.varying.rules.vertex_geometry_same_varying_name_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004621, VkglTestCase_004621_1, VkglTestCase_004621_2);

#define VkglTestCase_004622_1 "dEQP-GLES31.functional.shaders.linkage.es31."
#define VkglTestCase_004622_2 "tessellation_geometry.varying.rules.io_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004622, VkglTestCase_004622_1, VkglTestCase_004622_2);

#define VkglTestCase_004623_1 "dEQP-GLES31.functional.shaders.linkage.es31.tess"
#define VkglTestCase_004623_2 "ellation_geometry.varying.rules.array_in_io_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004623, VkglTestCase_004623_1, VkglTestCase_004623_2);

#define VkglTestCase_004716_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004716_2 ".geometry.varying.rules.input_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004716, VkglTestCase_004716_1, VkglTestCase_004716_2);

#define VkglTestCase_004717_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004717_2 ".geometry.varying.rules.output_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004717, VkglTestCase_004717_1, VkglTestCase_004717_2);

#define VkglTestCase_004718_1 "dEQP-GLES31.functional.shaders.linkage.es32.ge"
#define VkglTestCase_004718_2 "ometry.varying.rules.input_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004718, VkglTestCase_004718_1, VkglTestCase_004718_2);

#define VkglTestCase_004719_1 "dEQP-GLES31.functional.shaders.linkage.es32.ge"
#define VkglTestCase_004719_2 "ometry.varying.rules.output_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004719, VkglTestCase_004719_1, VkglTestCase_004719_2);

#define VkglTestCase_004720_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004720_2 ".geometry.varying.rules.input_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004720, VkglTestCase_004720_1, VkglTestCase_004720_2);

#define VkglTestCase_004721_1 "dEQP-GLES31.functional.shaders.linkage.es32."
#define VkglTestCase_004721_2 "geometry.varying.rules.output_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004721, VkglTestCase_004721_1, VkglTestCase_004721_2);

#define VkglTestCase_004722_1 "dEQP-GLES31.functional.shaders.linkage.es32.geom"
#define VkglTestCase_004722_2 "etry.varying.rules.input_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004722, VkglTestCase_004722_1, VkglTestCase_004722_2);

#define VkglTestCase_004723_1 "dEQP-GLES31.functional.shaders.linkage.es32.geom"
#define VkglTestCase_004723_2 "etry.varying.rules.output_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004723, VkglTestCase_004723_1, VkglTestCase_004723_2);

#define VkglTestCase_004724_1 "dEQP-GLES31.functional.shaders.linkage.es32.ge"
#define VkglTestCase_004724_2 "ometry.varying.rules.input_array_explicit_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004724, VkglTestCase_004724_1, VkglTestCase_004724_2);

#define VkglTestCase_004725_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004725_2 "32.geometry.varying.rules.input_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004725, VkglTestCase_004725_1, VkglTestCase_004725_2);

#define VkglTestCase_004726_1 "dEQP-GLES31.functional.shaders.linkage.es32.ge"
#define VkglTestCase_004726_2 "ometry.varying.rules.input_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004726, VkglTestCase_004726_1, VkglTestCase_004726_2);

#define VkglTestCase_004727_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004727_2 "es32.geometry.varying.rules.input_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004727, VkglTestCase_004727_1, VkglTestCase_004727_2);

#define VkglTestCase_004728_1 "dEQP-GLES31.functional.shaders.linkage.es32.ge"
#define VkglTestCase_004728_2 "ometry.varying.rules.input_block_explicit_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004728, VkglTestCase_004728_1, VkglTestCase_004728_2);

#define VkglTestCase_004729_1 "dEQP-GLES31.functional.shaders.linkage.es32."
#define VkglTestCase_004729_2 "geometry.varying.rules.input_block_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004729, VkglTestCase_004729_1, VkglTestCase_004729_2);

#define VkglTestCase_004730_1 "dEQP-GLES31.functional.shaders.linkage.es32.geome"
#define VkglTestCase_004730_2 "try.varying.rules.input_block_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004730, VkglTestCase_004730_1, VkglTestCase_004730_2);

#define VkglTestCase_004731_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004731_2 "es32.geometry.varying.rules.output_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004731, VkglTestCase_004731_1, VkglTestCase_004731_2);

#define VkglTestCase_004732_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004732_2 "2.geometry.varying.rules.output_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004732, VkglTestCase_004732_1, VkglTestCase_004732_2);

#define VkglTestCase_004733_1 "dEQP-GLES31.functional.shaders.linkage.es32.geome"
#define VkglTestCase_004733_2 "try.varying.rules.unspecified_input_primitive_type"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004733, VkglTestCase_004733_1, VkglTestCase_004733_2);

#define VkglTestCase_004734_1 "dEQP-GLES31.functional.shaders.linkage.es32.geomet"
#define VkglTestCase_004734_2 "ry.varying.rules.unspecified_output_primitive_type"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004734, VkglTestCase_004734_1, VkglTestCase_004734_2);

#define VkglTestCase_004735_1 "dEQP-GLES31.functional.shaders.linkage.es32.geometry.v"
#define VkglTestCase_004735_2 "arying.rules.unspecified_output_primitive_num_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004735, VkglTestCase_004735_1, VkglTestCase_004735_2);

#define VkglTestCase_004736_1 "dEQP-GLES31.functional.shaders.linkage.es32.geometry.v"
#define VkglTestCase_004736_2 "arying.rules.access_more_than_available_input_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004736, VkglTestCase_004736_1, VkglTestCase_004736_2);

#define VkglTestCase_004791_1 "dEQP-GLES31.functional.shaders.linkage.es32.t"
#define VkglTestCase_004791_2 "essellation.varying.rules.input_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004791, VkglTestCase_004791_1, VkglTestCase_004791_2);

#define VkglTestCase_004792_1 "dEQP-GLES31.functional.shaders.linkage.es32.t"
#define VkglTestCase_004792_2 "essellation.varying.rules.output_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004792, VkglTestCase_004792_1, VkglTestCase_004792_2);

#define VkglTestCase_004793_1 "dEQP-GLES31.functional.shaders.linkage.es32.te"
#define VkglTestCase_004793_2 "ssellation.varying.rules.internal_type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004793, VkglTestCase_004793_1, VkglTestCase_004793_2);

#define VkglTestCase_004794_1 "dEQP-GLES31.functional.shaders.linkage.es32.tess"
#define VkglTestCase_004794_2 "ellation.varying.rules.input_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004794, VkglTestCase_004794_1, VkglTestCase_004794_2);

#define VkglTestCase_004795_1 "dEQP-GLES31.functional.shaders.linkage.es32.tess"
#define VkglTestCase_004795_2 "ellation.varying.rules.output_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004795, VkglTestCase_004795_1, VkglTestCase_004795_2);

#define VkglTestCase_004796_1 "dEQP-GLES31.functional.shaders.linkage.es32.tesse"
#define VkglTestCase_004796_2 "llation.varying.rules.internal_different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004796, VkglTestCase_004796_1, VkglTestCase_004796_2);

#define VkglTestCase_004797_1 "dEQP-GLES31.functional.shaders.linkage.es32.t"
#define VkglTestCase_004797_2 "essellation.varying.rules.input_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004797, VkglTestCase_004797_1, VkglTestCase_004797_2);

#define VkglTestCase_004798_1 "dEQP-GLES31.functional.shaders.linkage.es32.te"
#define VkglTestCase_004798_2 "ssellation.varying.rules.output_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004798, VkglTestCase_004798_1, VkglTestCase_004798_2);

#define VkglTestCase_004799_1 "dEQP-GLES31.functional.shaders.linkage.es32.tes"
#define VkglTestCase_004799_2 "sellation.varying.rules.internal_no_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004799, VkglTestCase_004799_1, VkglTestCase_004799_2);

#define VkglTestCase_004800_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessel"
#define VkglTestCase_004800_2 "lation.varying.rules.input_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004800, VkglTestCase_004800_1, VkglTestCase_004800_2);

#define VkglTestCase_004801_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessel"
#define VkglTestCase_004801_2 "lation.varying.rules.output_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004801, VkglTestCase_004801_1, VkglTestCase_004801_2);

#define VkglTestCase_004802_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessell"
#define VkglTestCase_004802_2 "ation.varying.rules.internal_superfluous_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004802, VkglTestCase_004802_1, VkglTestCase_004802_2);

#define VkglTestCase_004803_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessellat"
#define VkglTestCase_004803_2 "ion.varying.rules.vertex_fragment_same_varying_name_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004803, VkglTestCase_004803_1, VkglTestCase_004803_2);

#define VkglTestCase_004804_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessellat"
#define VkglTestCase_004804_2 "ion.varying.rules.vertex_fragment_same_varying_name_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004804, VkglTestCase_004804_1, VkglTestCase_004804_2);

#define VkglTestCase_004805_1 "dEQP-GLES31.functional.shaders.linkage.es32.t"
#define VkglTestCase_004805_2 "essellation.varying.rules.invalid_vertex_index"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004805, VkglTestCase_004805_1, VkglTestCase_004805_2);

#define VkglTestCase_004806_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004806_2 ".tessellation.varying.rules.input_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004806, VkglTestCase_004806_1, VkglTestCase_004806_2);

#define VkglTestCase_004807_1 "dEQP-GLES31.functional.shaders.linkage.es32.tess"
#define VkglTestCase_004807_2 "ellation.varying.rules.input_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004807, VkglTestCase_004807_1, VkglTestCase_004807_2);

#define VkglTestCase_004808_1 "dEQP-GLES31.functional.shaders.linkage.es32.tesse"
#define VkglTestCase_004808_2 "llation.varying.rules.internal_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004808, VkglTestCase_004808_1, VkglTestCase_004808_2);

#define VkglTestCase_004809_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessel"
#define VkglTestCase_004809_2 "lation.varying.rules.per_patch_qualifier_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004809, VkglTestCase_004809_1, VkglTestCase_004809_2);

#define VkglTestCase_004810_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessel"
#define VkglTestCase_004810_2 "lation.varying.rules.per_patch_qualifier_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004810, VkglTestCase_004810_1, VkglTestCase_004810_2);

#define VkglTestCase_004811_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004811_2 "32.tessellation.varying.rules.input_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004811, VkglTestCase_004811_1, VkglTestCase_004811_2);

#define VkglTestCase_004812_1 "dEQP-GLES31.functional.shaders.linkage.es32.te"
#define VkglTestCase_004812_2 "ssellation.varying.rules.input_block_non_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004812, VkglTestCase_004812_1, VkglTestCase_004812_2);

#define VkglTestCase_004813_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessell"
#define VkglTestCase_004813_2 "ation.varying.rules.input_block_array_size_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004813, VkglTestCase_004813_1, VkglTestCase_004813_2);

#define VkglTestCase_004814_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004814_2 "32.tessellation.varying.rules.output_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004814, VkglTestCase_004814_1, VkglTestCase_004814_2);

#define VkglTestCase_004815_1 "dEQP-GLES31.functional.shaders.linkage.es32."
#define VkglTestCase_004815_2 "tessellation.varying.rules.output_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004815, VkglTestCase_004815_1, VkglTestCase_004815_2);

#define VkglTestCase_004816_1 "dEQP-GLES31.functional.shaders.linkage.es32.tes"
#define VkglTestCase_004816_2 "sellation.varying.rules.unspecified_vertex_count"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004816, VkglTestCase_004816_1, VkglTestCase_004816_2);

#define VkglTestCase_004817_1 "dEQP-GLES31.functional.shaders.linkage.es32.tess"
#define VkglTestCase_004817_2 "ellation.varying.rules.unspecified_primitive_mode"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004817, VkglTestCase_004817_1, VkglTestCase_004817_2);

#define VkglTestCase_004876_1 "dEQP-GLES31.functional.shaders.linkage.es32.te"
#define VkglTestCase_004876_2 "ssellation_geometry.varying.rules.type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004876, VkglTestCase_004876_1, VkglTestCase_004876_2);

#define VkglTestCase_004877_1 "dEQP-GLES31.functional.shaders.linkage.es32.tesse"
#define VkglTestCase_004877_2 "llation_geometry.varying.rules.different_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004877, VkglTestCase_004877_1, VkglTestCase_004877_2);

#define VkglTestCase_004878_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessel"
#define VkglTestCase_004878_2 "lation_geometry.varying.rules.no_output_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004878, VkglTestCase_004878_1, VkglTestCase_004878_2);

#define VkglTestCase_004879_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessellatio"
#define VkglTestCase_004879_2 "n_geometry.varying.rules.superfluous_output_declaration"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004879, VkglTestCase_004879_1, VkglTestCase_004879_2);

#define VkglTestCase_004880_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessellation_"
#define VkglTestCase_004880_2 "geometry.varying.rules.vertex_geometry_same_varying_name_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004880, VkglTestCase_004880_1, VkglTestCase_004880_2);

#define VkglTestCase_004881_1 "dEQP-GLES31.functional.shaders.linkage.es32.tessellation_"
#define VkglTestCase_004881_2 "geometry.varying.rules.vertex_geometry_same_varying_name_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004881, VkglTestCase_004881_1, VkglTestCase_004881_2);

#define VkglTestCase_004882_1 "dEQP-GLES31.functional.shaders.linkage.es32."
#define VkglTestCase_004882_2 "tessellation_geometry.varying.rules.io_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004882, VkglTestCase_004882_1, VkglTestCase_004882_2);

#define VkglTestCase_004883_1 "dEQP-GLES31.functional.shaders.linkage.es32.tess"
#define VkglTestCase_004883_2 "ellation_geometry.varying.rules.array_in_io_block"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004883, VkglTestCase_004883_1, VkglTestCase_004883_2);
