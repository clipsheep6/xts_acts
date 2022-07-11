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
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012491_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012491_2 "rmat.unsized.alpha_cube_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012491, VkglTestCase_012491_1, VkglTestCase_012491_2);

#define VkglTestCase_012492_1 "dEQP-GLES31.functional.texture.fo"
#define VkglTestCase_012492_2 "rmat.unsized.alpha_cube_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012492, VkglTestCase_012492_1, VkglTestCase_012492_2);

#define VkglTestCase_012493_1 "dEQP-GLES31.functional.texture.form"
#define VkglTestCase_012493_2 "at.unsized.luminance_cube_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012493, VkglTestCase_012493_1, VkglTestCase_012493_2);

#define VkglTestCase_012494_1 "dEQP-GLES31.functional.texture.form"
#define VkglTestCase_012494_2 "at.unsized.luminance_cube_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012494, VkglTestCase_012494_1, VkglTestCase_012494_2);

#define VkglTestCase_012495_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012495_2 "unsized.luminance_alpha_cube_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012495, VkglTestCase_012495_1, VkglTestCase_012495_2);

#define VkglTestCase_012496_1 "dEQP-GLES31.functional.texture.format."
#define VkglTestCase_012496_2 "unsized.luminance_alpha_cube_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012496, VkglTestCase_012496_1, VkglTestCase_012496_2);

#define VkglTestCase_012497_1 "dEQP-GLES31.functional.texture.format.unsi"
#define VkglTestCase_012497_2 "zed.rgb_unsigned_short_5_6_5_cube_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012497, VkglTestCase_012497_1, VkglTestCase_012497_2);

#define VkglTestCase_012498_1 "dEQP-GLES31.functional.texture.format.unsiz"
#define VkglTestCase_012498_2 "ed.rgb_unsigned_short_5_6_5_cube_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012498, VkglTestCase_012498_1, VkglTestCase_012498_2);

#define VkglTestCase_012499_1 "dEQP-GLES31.functional.texture.format.u"
#define VkglTestCase_012499_2 "nsized.rgb_unsigned_byte_cube_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012499, VkglTestCase_012499_1, VkglTestCase_012499_2);

#define VkglTestCase_012500_1 "dEQP-GLES31.functional.texture.format.u"
#define VkglTestCase_012500_2 "nsized.rgb_unsigned_byte_cube_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012500, VkglTestCase_012500_1, VkglTestCase_012500_2);

#define VkglTestCase_012501_1 "dEQP-GLES31.functional.texture.format.unsize"
#define VkglTestCase_012501_2 "d.rgba_unsigned_short_4_4_4_4_cube_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012501, VkglTestCase_012501_1, VkglTestCase_012501_2);

#define VkglTestCase_012502_1 "dEQP-GLES31.functional.texture.format.unsize"
#define VkglTestCase_012502_2 "d.rgba_unsigned_short_4_4_4_4_cube_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012502, VkglTestCase_012502_1, VkglTestCase_012502_2);

#define VkglTestCase_012503_1 "dEQP-GLES31.functional.texture.format.unsize"
#define VkglTestCase_012503_2 "d.rgba_unsigned_short_5_5_5_1_cube_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012503, VkglTestCase_012503_1, VkglTestCase_012503_2);

#define VkglTestCase_012504_1 "dEQP-GLES31.functional.texture.format.unsize"
#define VkglTestCase_012504_2 "d.rgba_unsigned_short_5_5_5_1_cube_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012504, VkglTestCase_012504_1, VkglTestCase_012504_2);

#define VkglTestCase_012505_1 "dEQP-GLES31.functional.texture.format.u"
#define VkglTestCase_012505_2 "nsized.rgba_unsigned_byte_cube_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012505, VkglTestCase_012505_1, VkglTestCase_012505_2);

#define VkglTestCase_012506_1 "dEQP-GLES31.functional.texture.format.un"
#define VkglTestCase_012506_2 "sized.rgba_unsigned_byte_cube_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012506, VkglTestCase_012506_1, VkglTestCase_012506_2);
