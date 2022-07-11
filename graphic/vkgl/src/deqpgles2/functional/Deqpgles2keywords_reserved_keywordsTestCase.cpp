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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002305_1 "dEQP-GLES2.functional.shaders.key"
#define VkglTestCase_002305_2 "words.reserved_keywords.asm_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002305, VkglTestCase_002305_1, VkglTestCase_002305_2);

#define VkglTestCase_002306_1 "dEQP-GLES2.functional.shaders.keyw"
#define VkglTestCase_002306_2 "ords.reserved_keywords.asm_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002306, VkglTestCase_002306_1, VkglTestCase_002306_2);

#define VkglTestCase_002307_1 "dEQP-GLES2.functional.shaders.keyw"
#define VkglTestCase_002307_2 "ords.reserved_keywords.class_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002307, VkglTestCase_002307_1, VkglTestCase_002307_2);

#define VkglTestCase_002308_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002308_2 "rds.reserved_keywords.class_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002308, VkglTestCase_002308_1, VkglTestCase_002308_2);

#define VkglTestCase_002309_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002309_2 "rds.reserved_keywords.typedef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002309, VkglTestCase_002309_1, VkglTestCase_002309_2);

#define VkglTestCase_002310_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002310_2 "ds.reserved_keywords.typedef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002310, VkglTestCase_002310_1, VkglTestCase_002310_2);

#define VkglTestCase_002311_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002311_2 "ds.reserved_keywords.template_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002311, VkglTestCase_002311_1, VkglTestCase_002311_2);

#define VkglTestCase_002312_1 "dEQP-GLES2.functional.shaders.keyword"
#define VkglTestCase_002312_2 "s.reserved_keywords.template_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002312, VkglTestCase_002312_1, VkglTestCase_002312_2);

#define VkglTestCase_002313_1 "dEQP-GLES2.functional.shaders.keyw"
#define VkglTestCase_002313_2 "ords.reserved_keywords.this_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002313, VkglTestCase_002313_1, VkglTestCase_002313_2);

#define VkglTestCase_002314_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002314_2 "rds.reserved_keywords.this_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002314, VkglTestCase_002314_1, VkglTestCase_002314_2);

#define VkglTestCase_002315_1 "dEQP-GLES2.functional.shaders.keyw"
#define VkglTestCase_002315_2 "ords.reserved_keywords.goto_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002315, VkglTestCase_002315_1, VkglTestCase_002315_2);

#define VkglTestCase_002316_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002316_2 "rds.reserved_keywords.goto_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002316, VkglTestCase_002316_1, VkglTestCase_002316_2);

#define VkglTestCase_002317_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002317_2 "rds.reserved_keywords.switch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002317, VkglTestCase_002317_1, VkglTestCase_002317_2);

#define VkglTestCase_002318_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002318_2 "ds.reserved_keywords.switch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002318, VkglTestCase_002318_1, VkglTestCase_002318_2);

#define VkglTestCase_002319_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002319_2 "rds.reserved_keywords.default_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002319, VkglTestCase_002319_1, VkglTestCase_002319_2);

#define VkglTestCase_002320_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002320_2 "ds.reserved_keywords.default_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002320, VkglTestCase_002320_1, VkglTestCase_002320_2);

#define VkglTestCase_002321_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002321_2 "rds.reserved_keywords.inline_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002321, VkglTestCase_002321_1, VkglTestCase_002321_2);

#define VkglTestCase_002322_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002322_2 "ds.reserved_keywords.inline_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002322, VkglTestCase_002322_1, VkglTestCase_002322_2);

#define VkglTestCase_002323_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002323_2 "ds.reserved_keywords.volatile_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002323, VkglTestCase_002323_1, VkglTestCase_002323_2);

#define VkglTestCase_002324_1 "dEQP-GLES2.functional.shaders.keyword"
#define VkglTestCase_002324_2 "s.reserved_keywords.volatile_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002324, VkglTestCase_002324_1, VkglTestCase_002324_2);

#define VkglTestCase_002325_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002325_2 "rds.reserved_keywords.static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002325, VkglTestCase_002325_1, VkglTestCase_002325_2);

#define VkglTestCase_002326_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002326_2 "ds.reserved_keywords.static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002326, VkglTestCase_002326_1, VkglTestCase_002326_2);

#define VkglTestCase_002327_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002327_2 "rds.reserved_keywords.extern_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002327, VkglTestCase_002327_1, VkglTestCase_002327_2);

#define VkglTestCase_002328_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002328_2 "ds.reserved_keywords.extern_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002328, VkglTestCase_002328_1, VkglTestCase_002328_2);

#define VkglTestCase_002329_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002329_2 "ds.reserved_keywords.interface_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002329, VkglTestCase_002329_1, VkglTestCase_002329_2);

#define VkglTestCase_002330_1 "dEQP-GLES2.functional.shaders.keyword"
#define VkglTestCase_002330_2 "s.reserved_keywords.interface_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002330, VkglTestCase_002330_1, VkglTestCase_002330_2);

#define VkglTestCase_002331_1 "dEQP-GLES2.functional.shaders.keyw"
#define VkglTestCase_002331_2 "ords.reserved_keywords.flat_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002331, VkglTestCase_002331_1, VkglTestCase_002331_2);

#define VkglTestCase_002332_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002332_2 "rds.reserved_keywords.flat_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002332, VkglTestCase_002332_1, VkglTestCase_002332_2);

#define VkglTestCase_002333_1 "dEQP-GLES2.functional.shaders.keyw"
#define VkglTestCase_002333_2 "ords.reserved_keywords.short_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002333, VkglTestCase_002333_1, VkglTestCase_002333_2);

#define VkglTestCase_002334_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002334_2 "rds.reserved_keywords.short_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002334, VkglTestCase_002334_1, VkglTestCase_002334_2);

#define VkglTestCase_002335_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002335_2 "ds.reserved_keywords.unsigned_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002335, VkglTestCase_002335_1, VkglTestCase_002335_2);

#define VkglTestCase_002336_1 "dEQP-GLES2.functional.shaders.keyword"
#define VkglTestCase_002336_2 "s.reserved_keywords.unsigned_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002336, VkglTestCase_002336_1, VkglTestCase_002336_2);

#define VkglTestCase_002337_1 "dEQP-GLES2.functional.shaders.keywo"
#define VkglTestCase_002337_2 "rds.reserved_keywords.superp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002337, VkglTestCase_002337_1, VkglTestCase_002337_2);

#define VkglTestCase_002338_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002338_2 "ds.reserved_keywords.superp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002338, VkglTestCase_002338_1, VkglTestCase_002338_2);

#define VkglTestCase_002339_1 "dEQP-GLES2.functional.shaders.keywor"
#define VkglTestCase_002339_2 "ds.reserved_keywords.namespace_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002339, VkglTestCase_002339_1, VkglTestCase_002339_2);

#define VkglTestCase_002340_1 "dEQP-GLES2.functional.shaders.keyword"
#define VkglTestCase_002340_2 "s.reserved_keywords.namespace_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002340, VkglTestCase_002340_1, VkglTestCase_002340_2);
