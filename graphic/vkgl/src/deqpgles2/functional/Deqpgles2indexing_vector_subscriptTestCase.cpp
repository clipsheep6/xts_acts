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

#define VkglTestCase_002995_1 "dEQP-GLES2.functional.shaders.indexing.vector_"
#define VkglTestCase_002995_2 "subscript.vec2_direct_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002995, VkglTestCase_002995_1, VkglTestCase_002995_2);

#define VkglTestCase_002996_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_002996_2 "ubscript.vec2_direct_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002996, VkglTestCase_002996_1, VkglTestCase_002996_2);

#define VkglTestCase_002997_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_002997_2 "ubscript.vec2_direct_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002997, VkglTestCase_002997_1, VkglTestCase_002997_2);

#define VkglTestCase_002998_1 "dEQP-GLES2.functional.shaders.indexing.vector_su"
#define VkglTestCase_002998_2 "bscript.vec2_direct_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002998, VkglTestCase_002998_1, VkglTestCase_002998_2);

#define VkglTestCase_002999_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_002999_2 "ript.vec2_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002999, VkglTestCase_002999_1, VkglTestCase_002999_2);

#define VkglTestCase_003000_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003000_2 "ipt.vec2_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003000, VkglTestCase_003000_1, VkglTestCase_003000_2);

#define VkglTestCase_003001_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003001_2 "ript.vec2_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003001, VkglTestCase_003001_1, VkglTestCase_003001_2);

#define VkglTestCase_003002_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003002_2 "ipt.vec2_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003002, VkglTestCase_003002_1, VkglTestCase_003002_2);

#define VkglTestCase_003003_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003003_2 "pt.vec2_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003003, VkglTestCase_003003_1, VkglTestCase_003003_2);

#define VkglTestCase_003004_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003004_2 "t.vec2_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003004, VkglTestCase_003004_1, VkglTestCase_003004_2);

#define VkglTestCase_003005_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003005_2 "t.vec2_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003005, VkglTestCase_003005_1, VkglTestCase_003005_2);

#define VkglTestCase_003006_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003006_2 ".vec2_direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003006, VkglTestCase_003006_1, VkglTestCase_003006_2);

#define VkglTestCase_003007_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_003007_2 "ubscript.vec2_component_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003007, VkglTestCase_003007_1, VkglTestCase_003007_2);

#define VkglTestCase_003008_1 "dEQP-GLES2.functional.shaders.indexing.vector_su"
#define VkglTestCase_003008_2 "bscript.vec2_component_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003008, VkglTestCase_003008_1, VkglTestCase_003008_2);

#define VkglTestCase_003009_1 "dEQP-GLES2.functional.shaders.indexing.vector_sub"
#define VkglTestCase_003009_2 "script.vec2_component_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003009, VkglTestCase_003009_1, VkglTestCase_003009_2);

#define VkglTestCase_003010_1 "dEQP-GLES2.functional.shaders.indexing.vector_subs"
#define VkglTestCase_003010_2 "cript.vec2_component_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003010, VkglTestCase_003010_1, VkglTestCase_003010_2);

#define VkglTestCase_003011_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003011_2 "ipt.vec2_component_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003011, VkglTestCase_003011_1, VkglTestCase_003011_2);

#define VkglTestCase_003012_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003012_2 "pt.vec2_component_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003012, VkglTestCase_003012_1, VkglTestCase_003012_2);

#define VkglTestCase_003013_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003013_2 "pt.vec2_component_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003013, VkglTestCase_003013_1, VkglTestCase_003013_2);

#define VkglTestCase_003014_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003014_2 "t.vec2_component_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003014, VkglTestCase_003014_1, VkglTestCase_003014_2);

#define VkglTestCase_003015_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003015_2 ".vec2_component_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003015, VkglTestCase_003015_1, VkglTestCase_003015_2);

#define VkglTestCase_003016_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003016_2 "vec2_component_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003016, VkglTestCase_003016_1, VkglTestCase_003016_2);

#define VkglTestCase_003017_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003017_2 ".vec2_component_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003017, VkglTestCase_003017_1, VkglTestCase_003017_2);

#define VkglTestCase_003018_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003018_2 "vec2_component_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003018, VkglTestCase_003018_1, VkglTestCase_003018_2);

#define VkglTestCase_003019_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003019_2 "ript.vec2_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003019, VkglTestCase_003019_1, VkglTestCase_003019_2);

#define VkglTestCase_003020_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003020_2 "ipt.vec2_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003020, VkglTestCase_003020_1, VkglTestCase_003020_2);

#define VkglTestCase_003021_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003021_2 "ipt.vec2_static_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003021, VkglTestCase_003021_1, VkglTestCase_003021_2);

#define VkglTestCase_003022_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003022_2 "pt.vec2_static_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003022, VkglTestCase_003022_1, VkglTestCase_003022_2);

#define VkglTestCase_003023_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003023_2 "vec2_static_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003023, VkglTestCase_003023_1, VkglTestCase_003023_2);

#define VkglTestCase_003024_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003024_2 "ec2_static_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003024, VkglTestCase_003024_1, VkglTestCase_003024_2);

#define VkglTestCase_003025_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003025_2 "vec2_static_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003025, VkglTestCase_003025_1, VkglTestCase_003025_2);

#define VkglTestCase_003026_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003026_2 "ec2_static_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003026, VkglTestCase_003026_1, VkglTestCase_003026_2);

#define VkglTestCase_003027_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003027_2 "c2_static_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003027, VkglTestCase_003027_1, VkglTestCase_003027_2);

#define VkglTestCase_003028_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003028_2 "2_static_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003028, VkglTestCase_003028_1, VkglTestCase_003028_2);

#define VkglTestCase_003029_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003029_2 "2_static_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003029, VkglTestCase_003029_1, VkglTestCase_003029_2);

#define VkglTestCase_003030_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_003030_2 "_static_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003030, VkglTestCase_003030_1, VkglTestCase_003030_2);

#define VkglTestCase_003031_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003031_2 "ript.vec2_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003031, VkglTestCase_003031_1, VkglTestCase_003031_2);

#define VkglTestCase_003032_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003032_2 "ipt.vec2_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003032, VkglTestCase_003032_1, VkglTestCase_003032_2);

#define VkglTestCase_003033_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003033_2 "pt.vec2_dynamic_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003033, VkglTestCase_003033_1, VkglTestCase_003033_2);

#define VkglTestCase_003034_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003034_2 "t.vec2_dynamic_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003034, VkglTestCase_003034_1, VkglTestCase_003034_2);

#define VkglTestCase_003035_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003035_2 "vec2_dynamic_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003035, VkglTestCase_003035_1, VkglTestCase_003035_2);

#define VkglTestCase_003036_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003036_2 "ec2_dynamic_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003036, VkglTestCase_003036_1, VkglTestCase_003036_2);

#define VkglTestCase_003037_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003037_2 "ec2_dynamic_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003037, VkglTestCase_003037_1, VkglTestCase_003037_2);

#define VkglTestCase_003038_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003038_2 "c2_dynamic_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003038, VkglTestCase_003038_1, VkglTestCase_003038_2);

#define VkglTestCase_003039_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003039_2 "2_dynamic_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003039, VkglTestCase_003039_1, VkglTestCase_003039_2);

#define VkglTestCase_003040_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_003040_2 "_dynamic_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003040, VkglTestCase_003040_1, VkglTestCase_003040_2);

#define VkglTestCase_003041_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003041_2 "2_dynamic_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003041, VkglTestCase_003041_1, VkglTestCase_003041_2);

#define VkglTestCase_003042_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_003042_2 "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003042, VkglTestCase_003042_1, VkglTestCase_003042_2);

#define VkglTestCase_003043_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003043_2 "pt.vec2_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003043, VkglTestCase_003043_1, VkglTestCase_003043_2);

#define VkglTestCase_003044_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003044_2 "t.vec2_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003044, VkglTestCase_003044_1, VkglTestCase_003044_2);

#define VkglTestCase_003045_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003045_2 ".vec2_static_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003045, VkglTestCase_003045_1, VkglTestCase_003045_2);

#define VkglTestCase_003046_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003046_2 "vec2_static_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003046, VkglTestCase_003046_1, VkglTestCase_003046_2);

#define VkglTestCase_003047_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003047_2 "c2_static_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003047, VkglTestCase_003047_1, VkglTestCase_003047_2);

#define VkglTestCase_003048_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003048_2 "2_static_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003048, VkglTestCase_003048_1, VkglTestCase_003048_2);

#define VkglTestCase_003049_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003049_2 "2_static_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003049, VkglTestCase_003049_1, VkglTestCase_003049_2);

#define VkglTestCase_003050_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_003050_2 "_static_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003050, VkglTestCase_003050_1, VkglTestCase_003050_2);

#define VkglTestCase_003051_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2_"
#define VkglTestCase_003051_2 "static_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003051, VkglTestCase_003051_1, VkglTestCase_003051_2);

#define VkglTestCase_003052_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2_s"
#define VkglTestCase_003052_2 "tatic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003052, VkglTestCase_003052_1, VkglTestCase_003052_2);

#define VkglTestCase_003053_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2_"
#define VkglTestCase_003053_2 "static_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003053, VkglTestCase_003053_1, VkglTestCase_003053_2);

#define VkglTestCase_003054_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2_s"
#define VkglTestCase_003054_2 "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003054, VkglTestCase_003054_1, VkglTestCase_003054_2);

#define VkglTestCase_003055_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003055_2 "t.vec2_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003055, VkglTestCase_003055_1, VkglTestCase_003055_2);

#define VkglTestCase_003056_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003056_2 ".vec2_dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003056, VkglTestCase_003056_1, VkglTestCase_003056_2);

#define VkglTestCase_003057_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003057_2 ".vec2_dynamic_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003057, VkglTestCase_003057_1, VkglTestCase_003057_2);

#define VkglTestCase_003058_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003058_2 "vec2_dynamic_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003058, VkglTestCase_003058_1, VkglTestCase_003058_2);

#define VkglTestCase_003059_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003059_2 "2_dynamic_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003059, VkglTestCase_003059_1, VkglTestCase_003059_2);

#define VkglTestCase_003060_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_003060_2 "_dynamic_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003060, VkglTestCase_003060_1, VkglTestCase_003060_2);

#define VkglTestCase_003061_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003061_2 "2_dynamic_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003061, VkglTestCase_003061_1, VkglTestCase_003061_2);

#define VkglTestCase_003062_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2"
#define VkglTestCase_003062_2 "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003062, VkglTestCase_003062_1, VkglTestCase_003062_2);

#define VkglTestCase_003063_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2_"
#define VkglTestCase_003063_2 "dynamic_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003063, VkglTestCase_003063_1, VkglTestCase_003063_2);

#define VkglTestCase_003064_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2_d"
#define VkglTestCase_003064_2 "ynamic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003064, VkglTestCase_003064_1, VkglTestCase_003064_2);

#define VkglTestCase_003065_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2_d"
#define VkglTestCase_003065_2 "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003065, VkglTestCase_003065_1, VkglTestCase_003065_2);

#define VkglTestCase_003066_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec2_dy"
#define VkglTestCase_003066_2 "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003066, VkglTestCase_003066_1, VkglTestCase_003066_2);

#define VkglTestCase_003067_1 "dEQP-GLES2.functional.shaders.indexing.vector_"
#define VkglTestCase_003067_2 "subscript.vec3_direct_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003067, VkglTestCase_003067_1, VkglTestCase_003067_2);

#define VkglTestCase_003068_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_003068_2 "ubscript.vec3_direct_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003068, VkglTestCase_003068_1, VkglTestCase_003068_2);

#define VkglTestCase_003069_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_003069_2 "ubscript.vec3_direct_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003069, VkglTestCase_003069_1, VkglTestCase_003069_2);

#define VkglTestCase_003070_1 "dEQP-GLES2.functional.shaders.indexing.vector_su"
#define VkglTestCase_003070_2 "bscript.vec3_direct_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003070, VkglTestCase_003070_1, VkglTestCase_003070_2);

#define VkglTestCase_003071_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003071_2 "ript.vec3_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003071, VkglTestCase_003071_1, VkglTestCase_003071_2);

#define VkglTestCase_003072_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003072_2 "ipt.vec3_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003072, VkglTestCase_003072_1, VkglTestCase_003072_2);

#define VkglTestCase_003073_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003073_2 "ript.vec3_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003073, VkglTestCase_003073_1, VkglTestCase_003073_2);

#define VkglTestCase_003074_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003074_2 "ipt.vec3_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003074, VkglTestCase_003074_1, VkglTestCase_003074_2);

#define VkglTestCase_003075_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003075_2 "pt.vec3_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003075, VkglTestCase_003075_1, VkglTestCase_003075_2);

#define VkglTestCase_003076_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003076_2 "t.vec3_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003076, VkglTestCase_003076_1, VkglTestCase_003076_2);

#define VkglTestCase_003077_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003077_2 "t.vec3_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003077, VkglTestCase_003077_1, VkglTestCase_003077_2);

#define VkglTestCase_003078_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003078_2 ".vec3_direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003078, VkglTestCase_003078_1, VkglTestCase_003078_2);

#define VkglTestCase_003079_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_003079_2 "ubscript.vec3_component_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003079, VkglTestCase_003079_1, VkglTestCase_003079_2);

#define VkglTestCase_003080_1 "dEQP-GLES2.functional.shaders.indexing.vector_su"
#define VkglTestCase_003080_2 "bscript.vec3_component_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003080, VkglTestCase_003080_1, VkglTestCase_003080_2);

#define VkglTestCase_003081_1 "dEQP-GLES2.functional.shaders.indexing.vector_sub"
#define VkglTestCase_003081_2 "script.vec3_component_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003081, VkglTestCase_003081_1, VkglTestCase_003081_2);

#define VkglTestCase_003082_1 "dEQP-GLES2.functional.shaders.indexing.vector_subs"
#define VkglTestCase_003082_2 "cript.vec3_component_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003082, VkglTestCase_003082_1, VkglTestCase_003082_2);

#define VkglTestCase_003083_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003083_2 "ipt.vec3_component_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003083, VkglTestCase_003083_1, VkglTestCase_003083_2);

#define VkglTestCase_003084_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003084_2 "pt.vec3_component_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003084, VkglTestCase_003084_1, VkglTestCase_003084_2);

#define VkglTestCase_003085_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003085_2 "pt.vec3_component_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003085, VkglTestCase_003085_1, VkglTestCase_003085_2);

#define VkglTestCase_003086_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003086_2 "t.vec3_component_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003086, VkglTestCase_003086_1, VkglTestCase_003086_2);

#define VkglTestCase_003087_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003087_2 ".vec3_component_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003087, VkglTestCase_003087_1, VkglTestCase_003087_2);

#define VkglTestCase_003088_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003088_2 "vec3_component_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003088, VkglTestCase_003088_1, VkglTestCase_003088_2);

#define VkglTestCase_003089_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003089_2 ".vec3_component_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003089, VkglTestCase_003089_1, VkglTestCase_003089_2);

#define VkglTestCase_003090_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003090_2 "vec3_component_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003090, VkglTestCase_003090_1, VkglTestCase_003090_2);

#define VkglTestCase_003091_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003091_2 "ript.vec3_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003091, VkglTestCase_003091_1, VkglTestCase_003091_2);

#define VkglTestCase_003092_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003092_2 "ipt.vec3_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003092, VkglTestCase_003092_1, VkglTestCase_003092_2);

#define VkglTestCase_003093_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003093_2 "ipt.vec3_static_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003093, VkglTestCase_003093_1, VkglTestCase_003093_2);

#define VkglTestCase_003094_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003094_2 "pt.vec3_static_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003094, VkglTestCase_003094_1, VkglTestCase_003094_2);

#define VkglTestCase_003095_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003095_2 "vec3_static_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003095, VkglTestCase_003095_1, VkglTestCase_003095_2);

#define VkglTestCase_003096_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003096_2 "ec3_static_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003096, VkglTestCase_003096_1, VkglTestCase_003096_2);

#define VkglTestCase_003097_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003097_2 "vec3_static_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003097, VkglTestCase_003097_1, VkglTestCase_003097_2);

#define VkglTestCase_003098_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003098_2 "ec3_static_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003098, VkglTestCase_003098_1, VkglTestCase_003098_2);

#define VkglTestCase_003099_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003099_2 "c3_static_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003099, VkglTestCase_003099_1, VkglTestCase_003099_2);

#define VkglTestCase_003100_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003100_2 "3_static_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003100, VkglTestCase_003100_1, VkglTestCase_003100_2);

#define VkglTestCase_003101_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003101_2 "3_static_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003101, VkglTestCase_003101_1, VkglTestCase_003101_2);

#define VkglTestCase_003102_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_003102_2 "_static_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003102, VkglTestCase_003102_1, VkglTestCase_003102_2);

#define VkglTestCase_003103_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003103_2 "ript.vec3_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003103, VkglTestCase_003103_1, VkglTestCase_003103_2);

#define VkglTestCase_003104_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003104_2 "ipt.vec3_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003104, VkglTestCase_003104_1, VkglTestCase_003104_2);

#define VkglTestCase_003105_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003105_2 "pt.vec3_dynamic_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003105, VkglTestCase_003105_1, VkglTestCase_003105_2);

#define VkglTestCase_003106_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003106_2 "t.vec3_dynamic_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003106, VkglTestCase_003106_1, VkglTestCase_003106_2);

#define VkglTestCase_003107_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003107_2 "vec3_dynamic_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003107, VkglTestCase_003107_1, VkglTestCase_003107_2);

#define VkglTestCase_003108_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003108_2 "ec3_dynamic_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003108, VkglTestCase_003108_1, VkglTestCase_003108_2);

#define VkglTestCase_003109_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003109_2 "ec3_dynamic_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003109, VkglTestCase_003109_1, VkglTestCase_003109_2);

#define VkglTestCase_003110_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003110_2 "c3_dynamic_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003110, VkglTestCase_003110_1, VkglTestCase_003110_2);

#define VkglTestCase_003111_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003111_2 "3_dynamic_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003111, VkglTestCase_003111_1, VkglTestCase_003111_2);

#define VkglTestCase_003112_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_003112_2 "_dynamic_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003112, VkglTestCase_003112_1, VkglTestCase_003112_2);

#define VkglTestCase_003113_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003113_2 "3_dynamic_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003113, VkglTestCase_003113_1, VkglTestCase_003113_2);

#define VkglTestCase_003114_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_003114_2 "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003114, VkglTestCase_003114_1, VkglTestCase_003114_2);

#define VkglTestCase_003115_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003115_2 "pt.vec3_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003115, VkglTestCase_003115_1, VkglTestCase_003115_2);

#define VkglTestCase_003116_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003116_2 "t.vec3_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003116, VkglTestCase_003116_1, VkglTestCase_003116_2);

#define VkglTestCase_003117_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003117_2 ".vec3_static_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003117, VkglTestCase_003117_1, VkglTestCase_003117_2);

#define VkglTestCase_003118_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003118_2 "vec3_static_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003118, VkglTestCase_003118_1, VkglTestCase_003118_2);

#define VkglTestCase_003119_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003119_2 "c3_static_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003119, VkglTestCase_003119_1, VkglTestCase_003119_2);

#define VkglTestCase_003120_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003120_2 "3_static_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003120, VkglTestCase_003120_1, VkglTestCase_003120_2);

#define VkglTestCase_003121_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003121_2 "3_static_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003121, VkglTestCase_003121_1, VkglTestCase_003121_2);

#define VkglTestCase_003122_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_003122_2 "_static_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003122, VkglTestCase_003122_1, VkglTestCase_003122_2);

#define VkglTestCase_003123_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3_"
#define VkglTestCase_003123_2 "static_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003123, VkglTestCase_003123_1, VkglTestCase_003123_2);

#define VkglTestCase_003124_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3_s"
#define VkglTestCase_003124_2 "tatic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003124, VkglTestCase_003124_1, VkglTestCase_003124_2);

#define VkglTestCase_003125_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3_"
#define VkglTestCase_003125_2 "static_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003125, VkglTestCase_003125_1, VkglTestCase_003125_2);

#define VkglTestCase_003126_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3_s"
#define VkglTestCase_003126_2 "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003126, VkglTestCase_003126_1, VkglTestCase_003126_2);

#define VkglTestCase_003127_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003127_2 "t.vec3_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003127, VkglTestCase_003127_1, VkglTestCase_003127_2);

#define VkglTestCase_003128_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003128_2 ".vec3_dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003128, VkglTestCase_003128_1, VkglTestCase_003128_2);

#define VkglTestCase_003129_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003129_2 ".vec3_dynamic_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003129, VkglTestCase_003129_1, VkglTestCase_003129_2);

#define VkglTestCase_003130_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003130_2 "vec3_dynamic_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003130, VkglTestCase_003130_1, VkglTestCase_003130_2);

#define VkglTestCase_003131_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003131_2 "3_dynamic_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003131, VkglTestCase_003131_1, VkglTestCase_003131_2);

#define VkglTestCase_003132_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_003132_2 "_dynamic_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003132, VkglTestCase_003132_1, VkglTestCase_003132_2);

#define VkglTestCase_003133_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003133_2 "3_dynamic_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003133, VkglTestCase_003133_1, VkglTestCase_003133_2);

#define VkglTestCase_003134_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3"
#define VkglTestCase_003134_2 "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003134, VkglTestCase_003134_1, VkglTestCase_003134_2);

#define VkglTestCase_003135_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3_"
#define VkglTestCase_003135_2 "dynamic_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003135, VkglTestCase_003135_1, VkglTestCase_003135_2);

#define VkglTestCase_003136_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3_d"
#define VkglTestCase_003136_2 "ynamic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003136, VkglTestCase_003136_1, VkglTestCase_003136_2);

#define VkglTestCase_003137_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3_d"
#define VkglTestCase_003137_2 "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003137, VkglTestCase_003137_1, VkglTestCase_003137_2);

#define VkglTestCase_003138_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec3_dy"
#define VkglTestCase_003138_2 "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003138, VkglTestCase_003138_1, VkglTestCase_003138_2);

#define VkglTestCase_003139_1 "dEQP-GLES2.functional.shaders.indexing.vector_"
#define VkglTestCase_003139_2 "subscript.vec4_direct_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003139, VkglTestCase_003139_1, VkglTestCase_003139_2);

#define VkglTestCase_003140_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_003140_2 "ubscript.vec4_direct_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003140, VkglTestCase_003140_1, VkglTestCase_003140_2);

#define VkglTestCase_003141_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_003141_2 "ubscript.vec4_direct_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003141, VkglTestCase_003141_1, VkglTestCase_003141_2);

#define VkglTestCase_003142_1 "dEQP-GLES2.functional.shaders.indexing.vector_su"
#define VkglTestCase_003142_2 "bscript.vec4_direct_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003142, VkglTestCase_003142_1, VkglTestCase_003142_2);

#define VkglTestCase_003143_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003143_2 "ript.vec4_direct_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003143, VkglTestCase_003143_1, VkglTestCase_003143_2);

#define VkglTestCase_003144_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003144_2 "ipt.vec4_direct_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003144, VkglTestCase_003144_1, VkglTestCase_003144_2);

#define VkglTestCase_003145_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003145_2 "ript.vec4_direct_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003145, VkglTestCase_003145_1, VkglTestCase_003145_2);

#define VkglTestCase_003146_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003146_2 "ipt.vec4_direct_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003146, VkglTestCase_003146_1, VkglTestCase_003146_2);

#define VkglTestCase_003147_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003147_2 "pt.vec4_direct_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003147, VkglTestCase_003147_1, VkglTestCase_003147_2);

#define VkglTestCase_003148_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003148_2 "t.vec4_direct_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003148, VkglTestCase_003148_1, VkglTestCase_003148_2);

#define VkglTestCase_003149_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003149_2 "t.vec4_direct_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003149, VkglTestCase_003149_1, VkglTestCase_003149_2);

#define VkglTestCase_003150_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003150_2 ".vec4_direct_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003150, VkglTestCase_003150_1, VkglTestCase_003150_2);

#define VkglTestCase_003151_1 "dEQP-GLES2.functional.shaders.indexing.vector_s"
#define VkglTestCase_003151_2 "ubscript.vec4_component_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003151, VkglTestCase_003151_1, VkglTestCase_003151_2);

#define VkglTestCase_003152_1 "dEQP-GLES2.functional.shaders.indexing.vector_su"
#define VkglTestCase_003152_2 "bscript.vec4_component_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003152, VkglTestCase_003152_1, VkglTestCase_003152_2);

#define VkglTestCase_003153_1 "dEQP-GLES2.functional.shaders.indexing.vector_sub"
#define VkglTestCase_003153_2 "script.vec4_component_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003153, VkglTestCase_003153_1, VkglTestCase_003153_2);

#define VkglTestCase_003154_1 "dEQP-GLES2.functional.shaders.indexing.vector_subs"
#define VkglTestCase_003154_2 "cript.vec4_component_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003154, VkglTestCase_003154_1, VkglTestCase_003154_2);

#define VkglTestCase_003155_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003155_2 "ipt.vec4_component_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003155, VkglTestCase_003155_1, VkglTestCase_003155_2);

#define VkglTestCase_003156_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003156_2 "pt.vec4_component_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003156, VkglTestCase_003156_1, VkglTestCase_003156_2);

#define VkglTestCase_003157_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003157_2 "pt.vec4_component_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003157, VkglTestCase_003157_1, VkglTestCase_003157_2);

#define VkglTestCase_003158_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003158_2 "t.vec4_component_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003158, VkglTestCase_003158_1, VkglTestCase_003158_2);

#define VkglTestCase_003159_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003159_2 ".vec4_component_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003159, VkglTestCase_003159_1, VkglTestCase_003159_2);

#define VkglTestCase_003160_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003160_2 "vec4_component_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003160, VkglTestCase_003160_1, VkglTestCase_003160_2);

#define VkglTestCase_003161_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003161_2 ".vec4_component_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003161, VkglTestCase_003161_1, VkglTestCase_003161_2);

#define VkglTestCase_003162_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003162_2 "vec4_component_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003162, VkglTestCase_003162_1, VkglTestCase_003162_2);

#define VkglTestCase_003163_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003163_2 "ript.vec4_static_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003163, VkglTestCase_003163_1, VkglTestCase_003163_2);

#define VkglTestCase_003164_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003164_2 "ipt.vec4_static_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003164, VkglTestCase_003164_1, VkglTestCase_003164_2);

#define VkglTestCase_003165_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003165_2 "ipt.vec4_static_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003165, VkglTestCase_003165_1, VkglTestCase_003165_2);

#define VkglTestCase_003166_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003166_2 "pt.vec4_static_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003166, VkglTestCase_003166_1, VkglTestCase_003166_2);

#define VkglTestCase_003167_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003167_2 "vec4_static_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003167, VkglTestCase_003167_1, VkglTestCase_003167_2);

#define VkglTestCase_003168_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003168_2 "ec4_static_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003168, VkglTestCase_003168_1, VkglTestCase_003168_2);

#define VkglTestCase_003169_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003169_2 "vec4_static_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003169, VkglTestCase_003169_1, VkglTestCase_003169_2);

#define VkglTestCase_003170_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003170_2 "ec4_static_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003170, VkglTestCase_003170_1, VkglTestCase_003170_2);

#define VkglTestCase_003171_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003171_2 "c4_static_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003171, VkglTestCase_003171_1, VkglTestCase_003171_2);

#define VkglTestCase_003172_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003172_2 "4_static_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003172, VkglTestCase_003172_1, VkglTestCase_003172_2);

#define VkglTestCase_003173_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003173_2 "4_static_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003173, VkglTestCase_003173_1, VkglTestCase_003173_2);

#define VkglTestCase_003174_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_003174_2 "_static_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003174, VkglTestCase_003174_1, VkglTestCase_003174_2);

#define VkglTestCase_003175_1 "dEQP-GLES2.functional.shaders.indexing.vector_subsc"
#define VkglTestCase_003175_2 "ript.vec4_dynamic_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003175, VkglTestCase_003175_1, VkglTestCase_003175_2);

#define VkglTestCase_003176_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscr"
#define VkglTestCase_003176_2 "ipt.vec4_dynamic_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003176, VkglTestCase_003176_1, VkglTestCase_003176_2);

#define VkglTestCase_003177_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003177_2 "pt.vec4_dynamic_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003177, VkglTestCase_003177_1, VkglTestCase_003177_2);

#define VkglTestCase_003178_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003178_2 "t.vec4_dynamic_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003178, VkglTestCase_003178_1, VkglTestCase_003178_2);

#define VkglTestCase_003179_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003179_2 "vec4_dynamic_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003179, VkglTestCase_003179_1, VkglTestCase_003179_2);

#define VkglTestCase_003180_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003180_2 "ec4_dynamic_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003180, VkglTestCase_003180_1, VkglTestCase_003180_2);

#define VkglTestCase_003181_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.v"
#define VkglTestCase_003181_2 "ec4_dynamic_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003181, VkglTestCase_003181_1, VkglTestCase_003181_2);

#define VkglTestCase_003182_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003182_2 "c4_dynamic_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003182, VkglTestCase_003182_1, VkglTestCase_003182_2);

#define VkglTestCase_003183_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003183_2 "4_dynamic_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003183, VkglTestCase_003183_1, VkglTestCase_003183_2);

#define VkglTestCase_003184_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_003184_2 "_dynamic_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003184, VkglTestCase_003184_1, VkglTestCase_003184_2);

#define VkglTestCase_003185_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003185_2 "4_dynamic_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003185, VkglTestCase_003185_1, VkglTestCase_003185_2);

#define VkglTestCase_003186_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_003186_2 "_dynamic_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003186, VkglTestCase_003186_1, VkglTestCase_003186_2);

#define VkglTestCase_003187_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscri"
#define VkglTestCase_003187_2 "pt.vec4_static_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003187, VkglTestCase_003187_1, VkglTestCase_003187_2);

#define VkglTestCase_003188_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003188_2 "t.vec4_static_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003188, VkglTestCase_003188_1, VkglTestCase_003188_2);

#define VkglTestCase_003189_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003189_2 ".vec4_static_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003189, VkglTestCase_003189_1, VkglTestCase_003189_2);

#define VkglTestCase_003190_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003190_2 "vec4_static_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003190, VkglTestCase_003190_1, VkglTestCase_003190_2);

#define VkglTestCase_003191_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.ve"
#define VkglTestCase_003191_2 "c4_static_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003191, VkglTestCase_003191_1, VkglTestCase_003191_2);

#define VkglTestCase_003192_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003192_2 "4_static_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003192, VkglTestCase_003192_1, VkglTestCase_003192_2);

#define VkglTestCase_003193_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003193_2 "4_static_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003193, VkglTestCase_003193_1, VkglTestCase_003193_2);

#define VkglTestCase_003194_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_003194_2 "_static_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003194, VkglTestCase_003194_1, VkglTestCase_003194_2);

#define VkglTestCase_003195_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4_"
#define VkglTestCase_003195_2 "static_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003195, VkglTestCase_003195_1, VkglTestCase_003195_2);

#define VkglTestCase_003196_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4_s"
#define VkglTestCase_003196_2 "tatic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003196, VkglTestCase_003196_1, VkglTestCase_003196_2);

#define VkglTestCase_003197_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4_"
#define VkglTestCase_003197_2 "static_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003197, VkglTestCase_003197_1, VkglTestCase_003197_2);

#define VkglTestCase_003198_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4_s"
#define VkglTestCase_003198_2 "tatic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003198, VkglTestCase_003198_1, VkglTestCase_003198_2);

#define VkglTestCase_003199_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscrip"
#define VkglTestCase_003199_2 "t.vec4_dynamic_loop_subscript_write_direct_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003199, VkglTestCase_003199_1, VkglTestCase_003199_2);

#define VkglTestCase_003200_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003200_2 ".vec4_dynamic_loop_subscript_write_direct_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003200, VkglTestCase_003200_1, VkglTestCase_003200_2);

#define VkglTestCase_003201_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript"
#define VkglTestCase_003201_2 ".vec4_dynamic_loop_subscript_write_component_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003201, VkglTestCase_003201_1, VkglTestCase_003201_2);

#define VkglTestCase_003202_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript."
#define VkglTestCase_003202_2 "vec4_dynamic_loop_subscript_write_component_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003202, VkglTestCase_003202_1, VkglTestCase_003202_2);

#define VkglTestCase_003203_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003203_2 "4_dynamic_loop_subscript_write_static_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003203, VkglTestCase_003203_1, VkglTestCase_003203_2);

#define VkglTestCase_003204_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_003204_2 "_dynamic_loop_subscript_write_static_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003204, VkglTestCase_003204_1, VkglTestCase_003204_2);

#define VkglTestCase_003205_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec"
#define VkglTestCase_003205_2 "4_dynamic_loop_subscript_write_dynamic_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003205, VkglTestCase_003205_1, VkglTestCase_003205_2);

#define VkglTestCase_003206_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4"
#define VkglTestCase_003206_2 "_dynamic_loop_subscript_write_dynamic_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003206, VkglTestCase_003206_1, VkglTestCase_003206_2);

#define VkglTestCase_003207_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4_"
#define VkglTestCase_003207_2 "dynamic_loop_subscript_write_static_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003207, VkglTestCase_003207_1, VkglTestCase_003207_2);

#define VkglTestCase_003208_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4_d"
#define VkglTestCase_003208_2 "ynamic_loop_subscript_write_static_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003208, VkglTestCase_003208_1, VkglTestCase_003208_2);

#define VkglTestCase_003209_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4_d"
#define VkglTestCase_003209_2 "ynamic_loop_subscript_write_dynamic_loop_subscript_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003209, VkglTestCase_003209_1, VkglTestCase_003209_2);

#define VkglTestCase_003210_1 "dEQP-GLES2.functional.shaders.indexing.vector_subscript.vec4_dy"
#define VkglTestCase_003210_2 "namic_loop_subscript_write_dynamic_loop_subscript_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_003210, VkglTestCase_003210_1, VkglTestCase_003210_2);
