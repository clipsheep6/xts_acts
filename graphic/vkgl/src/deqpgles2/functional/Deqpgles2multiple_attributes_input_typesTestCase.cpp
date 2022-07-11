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
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013465_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013465_2 "tes.input_types.3_fixed2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013465, VkglTestCase_013465_1, VkglTestCase_013465_2);

#define VkglTestCase_013466_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013466_2 "tes.input_types.3_fixed2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013466, VkglTestCase_013466_1, VkglTestCase_013466_2);

#define VkglTestCase_013467_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013467_2 "tes.input_types.3_fixed2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013467, VkglTestCase_013467_1, VkglTestCase_013467_2);

#define VkglTestCase_013468_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013468_2 "input_types.3_fixed2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013468, VkglTestCase_013468_1, VkglTestCase_013468_2);

#define VkglTestCase_013469_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013469_2 "nput_types.3_fixed2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013469, VkglTestCase_013469_1, VkglTestCase_013469_2);

#define VkglTestCase_013470_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013470_2 "tes.input_types.3_fixed2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013470, VkglTestCase_013470_1, VkglTestCase_013470_2);

#define VkglTestCase_013471_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_013471_2 "utes.input_types.3_fixed2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013471, VkglTestCase_013471_1, VkglTestCase_013471_2);

#define VkglTestCase_013472_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013472_2 "tes.input_types.3_fixed2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013472, VkglTestCase_013472_1, VkglTestCase_013472_2);

#define VkglTestCase_013473_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013473_2 "input_types.3_fixed2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013473, VkglTestCase_013473_1, VkglTestCase_013473_2);

#define VkglTestCase_013474_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013474_2 "input_types.3_fixed2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013474, VkglTestCase_013474_1, VkglTestCase_013474_2);

#define VkglTestCase_013475_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013475_2 "tes.input_types.3_fixed2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013475, VkglTestCase_013475_1, VkglTestCase_013475_2);

#define VkglTestCase_013476_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013476_2 "tes.input_types.3_fixed2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013476, VkglTestCase_013476_1, VkglTestCase_013476_2);

#define VkglTestCase_013477_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013477_2 "tes.input_types.3_fixed2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013477, VkglTestCase_013477_1, VkglTestCase_013477_2);

#define VkglTestCase_013478_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013478_2 "input_types.3_fixed2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013478, VkglTestCase_013478_1, VkglTestCase_013478_2);

#define VkglTestCase_013479_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013479_2 "nput_types.3_fixed2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013479, VkglTestCase_013479_1, VkglTestCase_013479_2);

#define VkglTestCase_013480_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013480_2 "input_types.3_fixed2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013480, VkglTestCase_013480_1, VkglTestCase_013480_2);

#define VkglTestCase_013481_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013481_2 "input_types.3_fixed2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013481, VkglTestCase_013481_1, VkglTestCase_013481_2);

#define VkglTestCase_013482_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013482_2 "input_types.3_fixed2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013482, VkglTestCase_013482_1, VkglTestCase_013482_2);

#define VkglTestCase_013483_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013483_2 "t_types.3_fixed2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013483, VkglTestCase_013483_1, VkglTestCase_013483_2);

#define VkglTestCase_013484_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013484_2 "_types.3_fixed2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013484, VkglTestCase_013484_1, VkglTestCase_013484_2);

#define VkglTestCase_013485_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013485_2 "nput_types.3_fixed2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013485, VkglTestCase_013485_1, VkglTestCase_013485_2);

#define VkglTestCase_013486_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013486_2 "input_types.3_fixed2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013486, VkglTestCase_013486_1, VkglTestCase_013486_2);

#define VkglTestCase_013487_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013487_2 "nput_types.3_fixed2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013487, VkglTestCase_013487_1, VkglTestCase_013487_2);

#define VkglTestCase_013488_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013488_2 "_types.3_fixed2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013488, VkglTestCase_013488_1, VkglTestCase_013488_2);

#define VkglTestCase_013489_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013489_2 "_types.3_fixed2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013489, VkglTestCase_013489_1, VkglTestCase_013489_2);

#define VkglTestCase_013490_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013490_2 "tes.input_types.3_byte2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013490, VkglTestCase_013490_1, VkglTestCase_013490_2);

#define VkglTestCase_013491_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_013491_2 "utes.input_types.3_byte2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013491, VkglTestCase_013491_1, VkglTestCase_013491_2);

#define VkglTestCase_013492_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013492_2 "tes.input_types.3_byte2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013492, VkglTestCase_013492_1, VkglTestCase_013492_2);

#define VkglTestCase_013493_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013493_2 "input_types.3_byte2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013493, VkglTestCase_013493_1, VkglTestCase_013493_2);

#define VkglTestCase_013494_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013494_2 "input_types.3_byte2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013494, VkglTestCase_013494_1, VkglTestCase_013494_2);

#define VkglTestCase_013495_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_013495_2 "utes.input_types.3_byte2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013495, VkglTestCase_013495_1, VkglTestCase_013495_2);

#define VkglTestCase_013496_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_013496_2 "utes.input_types.3_byte2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013496, VkglTestCase_013496_1, VkglTestCase_013496_2);

#define VkglTestCase_013497_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_013497_2 "utes.input_types.3_byte2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013497, VkglTestCase_013497_1, VkglTestCase_013497_2);

#define VkglTestCase_013498_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes"
#define VkglTestCase_013498_2 ".input_types.3_byte2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013498, VkglTestCase_013498_1, VkglTestCase_013498_2);

#define VkglTestCase_013499_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013499_2 "input_types.3_byte2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013499, VkglTestCase_013499_1, VkglTestCase_013499_2);

#define VkglTestCase_013500_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013500_2 "tes.input_types.3_byte2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013500, VkglTestCase_013500_1, VkglTestCase_013500_2);

#define VkglTestCase_013501_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_013501_2 "utes.input_types.3_byte2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013501, VkglTestCase_013501_1, VkglTestCase_013501_2);

#define VkglTestCase_013502_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013502_2 "tes.input_types.3_byte2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013502, VkglTestCase_013502_1, VkglTestCase_013502_2);

#define VkglTestCase_013503_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013503_2 "input_types.3_byte2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013503, VkglTestCase_013503_1, VkglTestCase_013503_2);

#define VkglTestCase_013504_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013504_2 "input_types.3_byte2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013504, VkglTestCase_013504_1, VkglTestCase_013504_2);

#define VkglTestCase_013505_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013505_2 "input_types.3_byte2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013505, VkglTestCase_013505_1, VkglTestCase_013505_2);

#define VkglTestCase_013506_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes"
#define VkglTestCase_013506_2 ".input_types.3_byte2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013506, VkglTestCase_013506_1, VkglTestCase_013506_2);

#define VkglTestCase_013507_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013507_2 "input_types.3_byte2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013507, VkglTestCase_013507_1, VkglTestCase_013507_2);

#define VkglTestCase_013508_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013508_2 "t_types.3_byte2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013508, VkglTestCase_013508_1, VkglTestCase_013508_2);

#define VkglTestCase_013509_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013509_2 "t_types.3_byte2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013509, VkglTestCase_013509_1, VkglTestCase_013509_2);

#define VkglTestCase_013510_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013510_2 "input_types.3_byte2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013510, VkglTestCase_013510_1, VkglTestCase_013510_2);

#define VkglTestCase_013511_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013511_2 "input_types.3_byte2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013511, VkglTestCase_013511_1, VkglTestCase_013511_2);

#define VkglTestCase_013512_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013512_2 "input_types.3_byte2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013512, VkglTestCase_013512_1, VkglTestCase_013512_2);

#define VkglTestCase_013513_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013513_2 "t_types.3_byte2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013513, VkglTestCase_013513_1, VkglTestCase_013513_2);

#define VkglTestCase_013514_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013514_2 "_types.3_byte2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013514, VkglTestCase_013514_1, VkglTestCase_013514_2);

#define VkglTestCase_013515_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013515_2 "tes.input_types.3_short2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013515, VkglTestCase_013515_1, VkglTestCase_013515_2);

#define VkglTestCase_013516_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013516_2 "tes.input_types.3_short2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013516, VkglTestCase_013516_1, VkglTestCase_013516_2);

#define VkglTestCase_013517_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013517_2 "tes.input_types.3_short2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013517, VkglTestCase_013517_1, VkglTestCase_013517_2);

#define VkglTestCase_013518_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013518_2 "input_types.3_short2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013518, VkglTestCase_013518_1, VkglTestCase_013518_2);

#define VkglTestCase_013519_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013519_2 "nput_types.3_short2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013519, VkglTestCase_013519_1, VkglTestCase_013519_2);

#define VkglTestCase_013520_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013520_2 "tes.input_types.3_short2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013520, VkglTestCase_013520_1, VkglTestCase_013520_2);

#define VkglTestCase_013521_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attrib"
#define VkglTestCase_013521_2 "utes.input_types.3_short2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013521, VkglTestCase_013521_1, VkglTestCase_013521_2);

#define VkglTestCase_013522_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013522_2 "tes.input_types.3_short2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013522, VkglTestCase_013522_1, VkglTestCase_013522_2);

#define VkglTestCase_013523_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013523_2 "input_types.3_short2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013523, VkglTestCase_013523_1, VkglTestCase_013523_2);

#define VkglTestCase_013524_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013524_2 "input_types.3_short2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013524, VkglTestCase_013524_1, VkglTestCase_013524_2);

#define VkglTestCase_013525_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013525_2 "tes.input_types.3_short2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013525, VkglTestCase_013525_1, VkglTestCase_013525_2);

#define VkglTestCase_013526_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013526_2 "tes.input_types.3_short2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013526, VkglTestCase_013526_1, VkglTestCase_013526_2);

#define VkglTestCase_013527_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attribu"
#define VkglTestCase_013527_2 "tes.input_types.3_short2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013527, VkglTestCase_013527_1, VkglTestCase_013527_2);

#define VkglTestCase_013528_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013528_2 "input_types.3_short2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013528, VkglTestCase_013528_1, VkglTestCase_013528_2);

#define VkglTestCase_013529_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013529_2 "nput_types.3_short2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013529, VkglTestCase_013529_1, VkglTestCase_013529_2);

#define VkglTestCase_013530_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013530_2 "input_types.3_short2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013530, VkglTestCase_013530_1, VkglTestCase_013530_2);

#define VkglTestCase_013531_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013531_2 "input_types.3_short2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013531, VkglTestCase_013531_1, VkglTestCase_013531_2);

#define VkglTestCase_013532_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013532_2 "input_types.3_short2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013532, VkglTestCase_013532_1, VkglTestCase_013532_2);

#define VkglTestCase_013533_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013533_2 "t_types.3_short2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013533, VkglTestCase_013533_1, VkglTestCase_013533_2);

#define VkglTestCase_013534_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013534_2 "_types.3_short2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013534, VkglTestCase_013534_1, VkglTestCase_013534_2);

#define VkglTestCase_013535_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013535_2 "nput_types.3_short2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013535, VkglTestCase_013535_1, VkglTestCase_013535_2);

#define VkglTestCase_013536_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013536_2 "input_types.3_short2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013536, VkglTestCase_013536_1, VkglTestCase_013536_2);

#define VkglTestCase_013537_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013537_2 "nput_types.3_short2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013537, VkglTestCase_013537_1, VkglTestCase_013537_2);

#define VkglTestCase_013538_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013538_2 "_types.3_short2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013538, VkglTestCase_013538_1, VkglTestCase_013538_2);

#define VkglTestCase_013539_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013539_2 "_types.3_short2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013539, VkglTestCase_013539_1, VkglTestCase_013539_2);

#define VkglTestCase_013540_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013540_2 "input_types.3_unsigned_byte2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013540, VkglTestCase_013540_1, VkglTestCase_013540_2);

#define VkglTestCase_013541_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013541_2 "input_types.3_unsigned_byte2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013541, VkglTestCase_013541_1, VkglTestCase_013541_2);

#define VkglTestCase_013542_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013542_2 "input_types.3_unsigned_byte2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013542, VkglTestCase_013542_1, VkglTestCase_013542_2);

#define VkglTestCase_013543_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013543_2 "t_types.3_unsigned_byte2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013543, VkglTestCase_013543_1, VkglTestCase_013543_2);

#define VkglTestCase_013544_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013544_2 "_types.3_unsigned_byte2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013544, VkglTestCase_013544_1, VkglTestCase_013544_2);

#define VkglTestCase_013545_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013545_2 "input_types.3_unsigned_byte2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013545, VkglTestCase_013545_1, VkglTestCase_013545_2);

#define VkglTestCase_013546_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes"
#define VkglTestCase_013546_2 ".input_types.3_unsigned_byte2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013546, VkglTestCase_013546_1, VkglTestCase_013546_2);

#define VkglTestCase_013547_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013547_2 "input_types.3_unsigned_byte2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013547, VkglTestCase_013547_1, VkglTestCase_013547_2);

#define VkglTestCase_013548_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013548_2 "t_types.3_unsigned_byte2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013548, VkglTestCase_013548_1, VkglTestCase_013548_2);

#define VkglTestCase_013549_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013549_2 "t_types.3_unsigned_byte2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013549, VkglTestCase_013549_1, VkglTestCase_013549_2);

#define VkglTestCase_013550_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013550_2 "input_types.3_unsigned_byte2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013550, VkglTestCase_013550_1, VkglTestCase_013550_2);

#define VkglTestCase_013551_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013551_2 "input_types.3_unsigned_byte2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013551, VkglTestCase_013551_1, VkglTestCase_013551_2);

#define VkglTestCase_013552_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013552_2 "input_types.3_unsigned_byte2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013552, VkglTestCase_013552_1, VkglTestCase_013552_2);

#define VkglTestCase_013553_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013553_2 "t_types.3_unsigned_byte2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013553, VkglTestCase_013553_1, VkglTestCase_013553_2);

#define VkglTestCase_013554_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013554_2 "_types.3_unsigned_byte2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013554, VkglTestCase_013554_1, VkglTestCase_013554_2);

#define VkglTestCase_013555_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013555_2 "t_types.3_unsigned_byte2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013555, VkglTestCase_013555_1, VkglTestCase_013555_2);

#define VkglTestCase_013556_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013556_2 "t_types.3_unsigned_byte2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013556, VkglTestCase_013556_1, VkglTestCase_013556_2);

#define VkglTestCase_013557_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013557_2 "t_types.3_unsigned_byte2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013557, VkglTestCase_013557_1, VkglTestCase_013557_2);

#define VkglTestCase_013558_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input_ty"
#define VkglTestCase_013558_2 "pes.3_unsigned_byte2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013558, VkglTestCase_013558_1, VkglTestCase_013558_2);

#define VkglTestCase_013559_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_013559_2 "es.3_unsigned_byte2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013559, VkglTestCase_013559_1, VkglTestCase_013559_2);

#define VkglTestCase_013560_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013560_2 "_types.3_unsigned_byte2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013560, VkglTestCase_013560_1, VkglTestCase_013560_2);

#define VkglTestCase_013561_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013561_2 "t_types.3_unsigned_byte2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013561, VkglTestCase_013561_1, VkglTestCase_013561_2);

#define VkglTestCase_013562_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013562_2 "_types.3_unsigned_byte2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013562, VkglTestCase_013562_1, VkglTestCase_013562_2);

#define VkglTestCase_013563_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_013563_2 "es.3_unsigned_byte2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013563, VkglTestCase_013563_1, VkglTestCase_013563_2);

#define VkglTestCase_013564_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_013564_2 "es.3_unsigned_byte2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013564, VkglTestCase_013564_1, VkglTestCase_013564_2);

#define VkglTestCase_013565_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013565_2 "nput_types.3_unsigned_short2_vec2_fixed2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013565, VkglTestCase_013565_1, VkglTestCase_013565_2);

#define VkglTestCase_013566_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013566_2 "input_types.3_unsigned_short2_vec2_fixed2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013566, VkglTestCase_013566_1, VkglTestCase_013566_2);

#define VkglTestCase_013567_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013567_2 "nput_types.3_unsigned_short2_vec2_fixed2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013567, VkglTestCase_013567_1, VkglTestCase_013567_2);

#define VkglTestCase_013568_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013568_2 "_types.3_unsigned_short2_vec2_fixed2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013568, VkglTestCase_013568_1, VkglTestCase_013568_2);

#define VkglTestCase_013569_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013569_2 "_types.3_unsigned_short2_vec2_fixed2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013569, VkglTestCase_013569_1, VkglTestCase_013569_2);

#define VkglTestCase_013570_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013570_2 "input_types.3_unsigned_short2_vec2_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013570, VkglTestCase_013570_1, VkglTestCase_013570_2);

#define VkglTestCase_013571_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013571_2 "input_types.3_unsigned_short2_vec2_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013571, VkglTestCase_013571_1, VkglTestCase_013571_2);

#define VkglTestCase_013572_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013572_2 "input_types.3_unsigned_short2_vec2_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013572, VkglTestCase_013572_1, VkglTestCase_013572_2);

#define VkglTestCase_013573_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013573_2 "t_types.3_unsigned_short2_vec2_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013573, VkglTestCase_013573_1, VkglTestCase_013573_2);

#define VkglTestCase_013574_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013574_2 "_types.3_unsigned_short2_vec2_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013574, VkglTestCase_013574_1, VkglTestCase_013574_2);

#define VkglTestCase_013575_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013575_2 "nput_types.3_unsigned_short2_vec2_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013575, VkglTestCase_013575_1, VkglTestCase_013575_2);

#define VkglTestCase_013576_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes."
#define VkglTestCase_013576_2 "input_types.3_unsigned_short2_vec2_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013576, VkglTestCase_013576_1, VkglTestCase_013576_2);

#define VkglTestCase_013577_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.i"
#define VkglTestCase_013577_2 "nput_types.3_unsigned_short2_vec2_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013577, VkglTestCase_013577_1, VkglTestCase_013577_2);

#define VkglTestCase_013578_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013578_2 "_types.3_unsigned_short2_vec2_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013578, VkglTestCase_013578_1, VkglTestCase_013578_2);

#define VkglTestCase_013579_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013579_2 "_types.3_unsigned_short2_vec2_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013579, VkglTestCase_013579_1, VkglTestCase_013579_2);

#define VkglTestCase_013580_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013580_2 "_types.3_unsigned_short2_vec2_unsigned_byte2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013580, VkglTestCase_013580_1, VkglTestCase_013580_2);

#define VkglTestCase_013581_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.inpu"
#define VkglTestCase_013581_2 "t_types.3_unsigned_short2_vec2_unsigned_byte2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013581, VkglTestCase_013581_1, VkglTestCase_013581_2);

#define VkglTestCase_013582_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013582_2 "_types.3_unsigned_short2_vec2_unsigned_byte2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013582, VkglTestCase_013582_1, VkglTestCase_013582_2);

#define VkglTestCase_013583_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_013583_2 "es.3_unsigned_short2_vec2_unsigned_byte2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013583, VkglTestCase_013583_1, VkglTestCase_013583_2);

#define VkglTestCase_013584_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_013584_2 "es.3_unsigned_short2_vec2_unsigned_byte2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013584, VkglTestCase_013584_1, VkglTestCase_013584_2);

#define VkglTestCase_013585_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013585_2 "_types.3_unsigned_short2_vec2_unsigned_short2_vec2_fixed2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013585, VkglTestCase_013585_1, VkglTestCase_013585_2);

#define VkglTestCase_013586_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013586_2 "_types.3_unsigned_short2_vec2_unsigned_short2_vec2_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013586, VkglTestCase_013586_1, VkglTestCase_013586_2);

#define VkglTestCase_013587_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input"
#define VkglTestCase_013587_2 "_types.3_unsigned_short2_vec2_unsigned_short2_vec2_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013587, VkglTestCase_013587_1, VkglTestCase_013587_2);

#define VkglTestCase_013588_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input_typ"
#define VkglTestCase_013588_2 "es.3_unsigned_short2_vec2_unsigned_short2_vec2_unsigned_byte2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013588, VkglTestCase_013588_1, VkglTestCase_013588_2);

#define VkglTestCase_013589_1 "dEQP-GLES2.functional.vertex_arrays.multiple_attributes.input_type"
#define VkglTestCase_013589_2 "s.3_unsigned_short2_vec2_unsigned_short2_vec2_unsigned_short2_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013589, VkglTestCase_013589_1, VkglTestCase_013589_2);
