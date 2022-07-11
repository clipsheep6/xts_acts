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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025644_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025644_2 "ewclass_64_bits.rg32f_rgba16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025644, VkglTestCase_025644_1, VkglTestCase_025644_2);

#define VkglTestCase_025645_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025645_2 "ewclass_64_bits.rg32f_rgba16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025645, VkglTestCase_025645_1, VkglTestCase_025645_2);

#define VkglTestCase_025646_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025646_2 "iewclass_64_bits.rg32f_rgba16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025646, VkglTestCase_025646_1, VkglTestCase_025646_2);

#define VkglTestCase_025647_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025647_2 "lass_64_bits.rg32f_rgba16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025647, VkglTestCase_025647_1, VkglTestCase_025647_2);

#define VkglTestCase_025648_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025648_2 "class_64_bits.rg32f_rgba16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025648, VkglTestCase_025648_1, VkglTestCase_025648_2);

#define VkglTestCase_025649_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025649_2 "ewclass_64_bits.rg32f_rgba16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025649, VkglTestCase_025649_1, VkglTestCase_025649_2);

#define VkglTestCase_025650_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025650_2 "ewclass_64_bits.rg32f_rgba16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025650, VkglTestCase_025650_1, VkglTestCase_025650_2);

#define VkglTestCase_025651_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025651_2 "iewclass_64_bits.rg32f_rgba16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025651, VkglTestCase_025651_1, VkglTestCase_025651_2);

#define VkglTestCase_025652_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025652_2 "lass_64_bits.rg32f_rgba16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025652, VkglTestCase_025652_1, VkglTestCase_025652_2);

#define VkglTestCase_025653_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025653_2 "class_64_bits.rg32f_rgba16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025653, VkglTestCase_025653_1, VkglTestCase_025653_2);

#define VkglTestCase_025654_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025654_2 "iewclass_64_bits.rg32f_rgba16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025654, VkglTestCase_025654_1, VkglTestCase_025654_2);

#define VkglTestCase_025655_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025655_2 "iewclass_64_bits.rg32f_rgba16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025655, VkglTestCase_025655_1, VkglTestCase_025655_2);

#define VkglTestCase_025656_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025656_2 "viewclass_64_bits.rg32f_rgba16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025656, VkglTestCase_025656_1, VkglTestCase_025656_2);

#define VkglTestCase_025657_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025657_2 "class_64_bits.rg32f_rgba16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025657, VkglTestCase_025657_1, VkglTestCase_025657_2);

#define VkglTestCase_025658_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025658_2 "wclass_64_bits.rg32f_rgba16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025658, VkglTestCase_025658_1, VkglTestCase_025658_2);

#define VkglTestCase_025659_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025659_2 "lass_64_bits.rg32f_rgba16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025659, VkglTestCase_025659_1, VkglTestCase_025659_2);

#define VkglTestCase_025660_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025660_2 "lass_64_bits.rg32f_rgba16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025660, VkglTestCase_025660_1, VkglTestCase_025660_2);

#define VkglTestCase_025661_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025661_2 "class_64_bits.rg32f_rgba16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025661, VkglTestCase_025661_1, VkglTestCase_025661_2);

#define VkglTestCase_025662_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025662_2 "s_64_bits.rg32f_rgba16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025662, VkglTestCase_025662_1, VkglTestCase_025662_2);

#define VkglTestCase_025663_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025663_2 "ss_64_bits.rg32f_rgba16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025663, VkglTestCase_025663_1, VkglTestCase_025663_2);
