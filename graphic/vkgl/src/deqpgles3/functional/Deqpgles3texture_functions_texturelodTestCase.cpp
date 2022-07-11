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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016984_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016984_2 "nctions.texturelod.sampler2d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016984, VkglTestCase_016984_1, VkglTestCase_016984_2);

#define VkglTestCase_016985_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016985_2 "ctions.texturelod.sampler2d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016985, VkglTestCase_016985_1, VkglTestCase_016985_2);

#define VkglTestCase_016986_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016986_2 "nctions.texturelod.sampler2d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016986, VkglTestCase_016986_1, VkglTestCase_016986_2);

#define VkglTestCase_016987_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016987_2 "ctions.texturelod.sampler2d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016987, VkglTestCase_016987_1, VkglTestCase_016987_2);

#define VkglTestCase_016988_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_016988_2 "functions.texturelod.isampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016988, VkglTestCase_016988_1, VkglTestCase_016988_2);

#define VkglTestCase_016989_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016989_2 "unctions.texturelod.isampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016989, VkglTestCase_016989_1, VkglTestCase_016989_2);

#define VkglTestCase_016990_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_016990_2 "functions.texturelod.usampler2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016990, VkglTestCase_016990_1, VkglTestCase_016990_2);

#define VkglTestCase_016991_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016991_2 "unctions.texturelod.usampler2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016991, VkglTestCase_016991_1, VkglTestCase_016991_2);

#define VkglTestCase_016992_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016992_2 "ctions.texturelod.samplercube_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016992, VkglTestCase_016992_1, VkglTestCase_016992_2);

#define VkglTestCase_016993_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016993_2 "tions.texturelod.samplercube_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016993, VkglTestCase_016993_1, VkglTestCase_016993_2);

#define VkglTestCase_016994_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016994_2 "ctions.texturelod.samplercube_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016994, VkglTestCase_016994_1, VkglTestCase_016994_2);

#define VkglTestCase_016995_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016995_2 "tions.texturelod.samplercube_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016995, VkglTestCase_016995_1, VkglTestCase_016995_2);

#define VkglTestCase_016996_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016996_2 "unctions.texturelod.isamplercube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016996, VkglTestCase_016996_1, VkglTestCase_016996_2);

#define VkglTestCase_016997_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016997_2 "nctions.texturelod.isamplercube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016997, VkglTestCase_016997_1, VkglTestCase_016997_2);

#define VkglTestCase_016998_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016998_2 "unctions.texturelod.usamplercube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016998, VkglTestCase_016998_1, VkglTestCase_016998_2);

#define VkglTestCase_016999_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_016999_2 "nctions.texturelod.usamplercube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016999, VkglTestCase_016999_1, VkglTestCase_016999_2);

#define VkglTestCase_017000_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017000_2 "ions.texturelod.sampler2darray_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017000, VkglTestCase_017000_1, VkglTestCase_017000_2);

#define VkglTestCase_017001_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017001_2 "ons.texturelod.sampler2darray_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017001, VkglTestCase_017001_1, VkglTestCase_017001_2);

#define VkglTestCase_017002_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_017002_2 "ions.texturelod.sampler2darray_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017002, VkglTestCase_017002_1, VkglTestCase_017002_2);

#define VkglTestCase_017003_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_017003_2 "ons.texturelod.sampler2darray_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017003, VkglTestCase_017003_1, VkglTestCase_017003_2);

#define VkglTestCase_017004_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017004_2 "nctions.texturelod.isampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017004, VkglTestCase_017004_1, VkglTestCase_017004_2);

#define VkglTestCase_017005_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017005_2 "ctions.texturelod.isampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017005, VkglTestCase_017005_1, VkglTestCase_017005_2);

#define VkglTestCase_017006_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017006_2 "nctions.texturelod.usampler2darray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017006, VkglTestCase_017006_1, VkglTestCase_017006_2);

#define VkglTestCase_017007_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017007_2 "ctions.texturelod.usampler2darray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017007, VkglTestCase_017007_1, VkglTestCase_017007_2);

#define VkglTestCase_017008_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017008_2 "nctions.texturelod.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017008, VkglTestCase_017008_1, VkglTestCase_017008_2);

#define VkglTestCase_017009_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017009_2 "ctions.texturelod.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017009, VkglTestCase_017009_1, VkglTestCase_017009_2);

#define VkglTestCase_017010_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017010_2 "nctions.texturelod.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017010, VkglTestCase_017010_1, VkglTestCase_017010_2);

#define VkglTestCase_017011_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017011_2 "ctions.texturelod.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017011, VkglTestCase_017011_1, VkglTestCase_017011_2);

#define VkglTestCase_017012_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017012_2 "functions.texturelod.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017012, VkglTestCase_017012_1, VkglTestCase_017012_2);

#define VkglTestCase_017013_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017013_2 "unctions.texturelod.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017013, VkglTestCase_017013_1, VkglTestCase_017013_2);

#define VkglTestCase_017014_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_017014_2 "functions.texturelod.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017014, VkglTestCase_017014_1, VkglTestCase_017014_2);

#define VkglTestCase_017015_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_017015_2 "unctions.texturelod.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017015, VkglTestCase_017015_1, VkglTestCase_017015_2);

#define VkglTestCase_017016_1 "dEQP-GLES3.functional.shaders.texture_fu"
#define VkglTestCase_017016_2 "nctions.texturelod.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017016, VkglTestCase_017016_1, VkglTestCase_017016_2);

#define VkglTestCase_017017_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_017017_2 "ctions.texturelod.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_017017, VkglTestCase_017017_1, VkglTestCase_017017_2);
