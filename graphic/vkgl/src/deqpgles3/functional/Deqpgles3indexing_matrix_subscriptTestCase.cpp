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
#include "../ActsDeqpgles30007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006391_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006391_2 "subscript.mat2_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006391, VkglTestCase_006391_1, VkglTestCase_006391_2);

#define VkglTestCase_006392_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006392_2 "ubscript.mat2_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006392, VkglTestCase_006392_1, VkglTestCase_006392_2);

#define VkglTestCase_006393_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006393_2 "subscript.mat2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006393, VkglTestCase_006393_1, VkglTestCase_006393_2);

#define VkglTestCase_006394_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006394_2 "ubscript.mat2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006394, VkglTestCase_006394_1, VkglTestCase_006394_2);

#define VkglTestCase_006395_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006395_2 "bscript.mat2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006395, VkglTestCase_006395_1, VkglTestCase_006395_2);

#define VkglTestCase_006396_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006396_2 "script.mat2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006396, VkglTestCase_006396_1, VkglTestCase_006396_2);

#define VkglTestCase_006397_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006397_2 "script.mat2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006397, VkglTestCase_006397_1, VkglTestCase_006397_2);

#define VkglTestCase_006398_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006398_2 "cript.mat2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006398, VkglTestCase_006398_1, VkglTestCase_006398_2);

#define VkglTestCase_006399_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006399_2 "subscript.mat2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006399, VkglTestCase_006399_1, VkglTestCase_006399_2);

#define VkglTestCase_006400_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006400_2 "ubscript.mat2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006400, VkglTestCase_006400_1, VkglTestCase_006400_2);

#define VkglTestCase_006401_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006401_2 "ubscript.mat2_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006401, VkglTestCase_006401_1, VkglTestCase_006401_2);

#define VkglTestCase_006402_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006402_2 "bscript.mat2_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006402, VkglTestCase_006402_1, VkglTestCase_006402_2);

#define VkglTestCase_006403_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006403_2 "script.mat2_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006403, VkglTestCase_006403_1, VkglTestCase_006403_2);

#define VkglTestCase_006404_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006404_2 "cript.mat2_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006404, VkglTestCase_006404_1, VkglTestCase_006404_2);

#define VkglTestCase_006405_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006405_2 "script.mat2_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006405, VkglTestCase_006405_1, VkglTestCase_006405_2);

#define VkglTestCase_006406_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006406_2 "cript.mat2_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006406, VkglTestCase_006406_1, VkglTestCase_006406_2);

#define VkglTestCase_006407_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006407_2 "bscript.mat2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006407, VkglTestCase_006407_1, VkglTestCase_006407_2);

#define VkglTestCase_006408_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006408_2 "script.mat2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006408, VkglTestCase_006408_1, VkglTestCase_006408_2);

#define VkglTestCase_006409_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006409_2 "script.mat2_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006409, VkglTestCase_006409_1, VkglTestCase_006409_2);

#define VkglTestCase_006410_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006410_2 "cript.mat2_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006410, VkglTestCase_006410_1, VkglTestCase_006410_2);

#define VkglTestCase_006411_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006411_2 "ript.mat2_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006411, VkglTestCase_006411_1, VkglTestCase_006411_2);

#define VkglTestCase_006412_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006412_2 "ipt.mat2_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006412, VkglTestCase_006412_1, VkglTestCase_006412_2);

#define VkglTestCase_006413_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006413_2 "ript.mat2_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006413, VkglTestCase_006413_1, VkglTestCase_006413_2);

#define VkglTestCase_006414_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006414_2 "ipt.mat2_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006414, VkglTestCase_006414_1, VkglTestCase_006414_2);

#define VkglTestCase_006415_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006415_2 "script.mat2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006415, VkglTestCase_006415_1, VkglTestCase_006415_2);

#define VkglTestCase_006416_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006416_2 "cript.mat2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006416, VkglTestCase_006416_1, VkglTestCase_006416_2);

#define VkglTestCase_006417_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006417_2 "script.mat2_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006417, VkglTestCase_006417_1, VkglTestCase_006417_2);

#define VkglTestCase_006418_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006418_2 "cript.mat2_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006418, VkglTestCase_006418_1, VkglTestCase_006418_2);

#define VkglTestCase_006419_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006419_2 "ript.mat2_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006419, VkglTestCase_006419_1, VkglTestCase_006419_2);

#define VkglTestCase_006420_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006420_2 "ipt.mat2_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006420, VkglTestCase_006420_1, VkglTestCase_006420_2);

#define VkglTestCase_006421_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006421_2 "ipt.mat2_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006421, VkglTestCase_006421_1, VkglTestCase_006421_2);

#define VkglTestCase_006422_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006422_2 "pt.mat2_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006422, VkglTestCase_006422_1, VkglTestCase_006422_2);

#define VkglTestCase_006423_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006423_2 "ubscript.mat2x3_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006423, VkglTestCase_006423_1, VkglTestCase_006423_2);

#define VkglTestCase_006424_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006424_2 "bscript.mat2x3_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006424, VkglTestCase_006424_1, VkglTestCase_006424_2);

#define VkglTestCase_006425_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006425_2 "ubscript.mat2x3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006425, VkglTestCase_006425_1, VkglTestCase_006425_2);

#define VkglTestCase_006426_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006426_2 "bscript.mat2x3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006426, VkglTestCase_006426_1, VkglTestCase_006426_2);

#define VkglTestCase_006427_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006427_2 "script.mat2x3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006427, VkglTestCase_006427_1, VkglTestCase_006427_2);

#define VkglTestCase_006428_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006428_2 "cript.mat2x3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006428, VkglTestCase_006428_1, VkglTestCase_006428_2);

#define VkglTestCase_006429_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006429_2 "cript.mat2x3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006429, VkglTestCase_006429_1, VkglTestCase_006429_2);

#define VkglTestCase_006430_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006430_2 "ript.mat2x3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006430, VkglTestCase_006430_1, VkglTestCase_006430_2);

#define VkglTestCase_006431_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006431_2 "ubscript.mat2x3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006431, VkglTestCase_006431_1, VkglTestCase_006431_2);

#define VkglTestCase_006432_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006432_2 "bscript.mat2x3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006432, VkglTestCase_006432_1, VkglTestCase_006432_2);

#define VkglTestCase_006433_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006433_2 "bscript.mat2x3_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006433, VkglTestCase_006433_1, VkglTestCase_006433_2);

#define VkglTestCase_006434_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006434_2 "script.mat2x3_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006434, VkglTestCase_006434_1, VkglTestCase_006434_2);

#define VkglTestCase_006435_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006435_2 "cript.mat2x3_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006435, VkglTestCase_006435_1, VkglTestCase_006435_2);

#define VkglTestCase_006436_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006436_2 "ript.mat2x3_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006436, VkglTestCase_006436_1, VkglTestCase_006436_2);

#define VkglTestCase_006437_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006437_2 "cript.mat2x3_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006437, VkglTestCase_006437_1, VkglTestCase_006437_2);

#define VkglTestCase_006438_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006438_2 "ript.mat2x3_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006438, VkglTestCase_006438_1, VkglTestCase_006438_2);

#define VkglTestCase_006439_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006439_2 "script.mat2x3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006439, VkglTestCase_006439_1, VkglTestCase_006439_2);

#define VkglTestCase_006440_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006440_2 "cript.mat2x3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006440, VkglTestCase_006440_1, VkglTestCase_006440_2);

#define VkglTestCase_006441_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006441_2 "cript.mat2x3_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006441, VkglTestCase_006441_1, VkglTestCase_006441_2);

#define VkglTestCase_006442_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006442_2 "ript.mat2x3_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006442, VkglTestCase_006442_1, VkglTestCase_006442_2);

#define VkglTestCase_006443_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006443_2 "ipt.mat2x3_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006443, VkglTestCase_006443_1, VkglTestCase_006443_2);

#define VkglTestCase_006444_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006444_2 "pt.mat2x3_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006444, VkglTestCase_006444_1, VkglTestCase_006444_2);

#define VkglTestCase_006445_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006445_2 "ipt.mat2x3_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006445, VkglTestCase_006445_1, VkglTestCase_006445_2);

#define VkglTestCase_006446_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006446_2 "pt.mat2x3_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006446, VkglTestCase_006446_1, VkglTestCase_006446_2);

#define VkglTestCase_006447_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006447_2 "cript.mat2x3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006447, VkglTestCase_006447_1, VkglTestCase_006447_2);

#define VkglTestCase_006448_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006448_2 "ript.mat2x3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006448, VkglTestCase_006448_1, VkglTestCase_006448_2);

#define VkglTestCase_006449_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006449_2 "cript.mat2x3_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006449, VkglTestCase_006449_1, VkglTestCase_006449_2);

#define VkglTestCase_006450_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006450_2 "ript.mat2x3_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006450, VkglTestCase_006450_1, VkglTestCase_006450_2);

#define VkglTestCase_006451_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006451_2 "ipt.mat2x3_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006451, VkglTestCase_006451_1, VkglTestCase_006451_2);

#define VkglTestCase_006452_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006452_2 "pt.mat2x3_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006452, VkglTestCase_006452_1, VkglTestCase_006452_2);

#define VkglTestCase_006453_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006453_2 "pt.mat2x3_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006453, VkglTestCase_006453_1, VkglTestCase_006453_2);

#define VkglTestCase_006454_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
#define VkglTestCase_006454_2 "t.mat2x3_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006454, VkglTestCase_006454_1, VkglTestCase_006454_2);

#define VkglTestCase_006455_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006455_2 "ubscript.mat2x4_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006455, VkglTestCase_006455_1, VkglTestCase_006455_2);

#define VkglTestCase_006456_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006456_2 "bscript.mat2x4_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006456, VkglTestCase_006456_1, VkglTestCase_006456_2);

#define VkglTestCase_006457_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006457_2 "ubscript.mat2x4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006457, VkglTestCase_006457_1, VkglTestCase_006457_2);

#define VkglTestCase_006458_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006458_2 "bscript.mat2x4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006458, VkglTestCase_006458_1, VkglTestCase_006458_2);

#define VkglTestCase_006459_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006459_2 "script.mat2x4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006459, VkglTestCase_006459_1, VkglTestCase_006459_2);

#define VkglTestCase_006460_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006460_2 "cript.mat2x4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006460, VkglTestCase_006460_1, VkglTestCase_006460_2);

#define VkglTestCase_006461_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006461_2 "cript.mat2x4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006461, VkglTestCase_006461_1, VkglTestCase_006461_2);

#define VkglTestCase_006462_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006462_2 "ript.mat2x4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006462, VkglTestCase_006462_1, VkglTestCase_006462_2);

#define VkglTestCase_006463_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006463_2 "ubscript.mat2x4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006463, VkglTestCase_006463_1, VkglTestCase_006463_2);

#define VkglTestCase_006464_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006464_2 "bscript.mat2x4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006464, VkglTestCase_006464_1, VkglTestCase_006464_2);

#define VkglTestCase_006465_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006465_2 "bscript.mat2x4_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006465, VkglTestCase_006465_1, VkglTestCase_006465_2);

#define VkglTestCase_006466_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006466_2 "script.mat2x4_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006466, VkglTestCase_006466_1, VkglTestCase_006466_2);

#define VkglTestCase_006467_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006467_2 "cript.mat2x4_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006467, VkglTestCase_006467_1, VkglTestCase_006467_2);

#define VkglTestCase_006468_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006468_2 "ript.mat2x4_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006468, VkglTestCase_006468_1, VkglTestCase_006468_2);

#define VkglTestCase_006469_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006469_2 "cript.mat2x4_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006469, VkglTestCase_006469_1, VkglTestCase_006469_2);

#define VkglTestCase_006470_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006470_2 "ript.mat2x4_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006470, VkglTestCase_006470_1, VkglTestCase_006470_2);

#define VkglTestCase_006471_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006471_2 "script.mat2x4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006471, VkglTestCase_006471_1, VkglTestCase_006471_2);

#define VkglTestCase_006472_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006472_2 "cript.mat2x4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006472, VkglTestCase_006472_1, VkglTestCase_006472_2);

#define VkglTestCase_006473_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006473_2 "cript.mat2x4_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006473, VkglTestCase_006473_1, VkglTestCase_006473_2);

#define VkglTestCase_006474_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006474_2 "ript.mat2x4_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006474, VkglTestCase_006474_1, VkglTestCase_006474_2);

#define VkglTestCase_006475_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006475_2 "ipt.mat2x4_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006475, VkglTestCase_006475_1, VkglTestCase_006475_2);

#define VkglTestCase_006476_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006476_2 "pt.mat2x4_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006476, VkglTestCase_006476_1, VkglTestCase_006476_2);

#define VkglTestCase_006477_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006477_2 "ipt.mat2x4_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006477, VkglTestCase_006477_1, VkglTestCase_006477_2);

#define VkglTestCase_006478_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006478_2 "pt.mat2x4_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006478, VkglTestCase_006478_1, VkglTestCase_006478_2);

#define VkglTestCase_006479_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006479_2 "cript.mat2x4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006479, VkglTestCase_006479_1, VkglTestCase_006479_2);

#define VkglTestCase_006480_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006480_2 "ript.mat2x4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006480, VkglTestCase_006480_1, VkglTestCase_006480_2);

#define VkglTestCase_006481_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006481_2 "cript.mat2x4_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006481, VkglTestCase_006481_1, VkglTestCase_006481_2);

#define VkglTestCase_006482_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006482_2 "ript.mat2x4_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006482, VkglTestCase_006482_1, VkglTestCase_006482_2);

#define VkglTestCase_006483_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006483_2 "ipt.mat2x4_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006483, VkglTestCase_006483_1, VkglTestCase_006483_2);

#define VkglTestCase_006484_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006484_2 "pt.mat2x4_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006484, VkglTestCase_006484_1, VkglTestCase_006484_2);

#define VkglTestCase_006485_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006485_2 "pt.mat2x4_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006485, VkglTestCase_006485_1, VkglTestCase_006485_2);

#define VkglTestCase_006486_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
#define VkglTestCase_006486_2 "t.mat2x4_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006486, VkglTestCase_006486_1, VkglTestCase_006486_2);

#define VkglTestCase_006487_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006487_2 "ubscript.mat3x2_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006487, VkglTestCase_006487_1, VkglTestCase_006487_2);

#define VkglTestCase_006488_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006488_2 "bscript.mat3x2_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006488, VkglTestCase_006488_1, VkglTestCase_006488_2);

#define VkglTestCase_006489_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006489_2 "ubscript.mat3x2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006489, VkglTestCase_006489_1, VkglTestCase_006489_2);

#define VkglTestCase_006490_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006490_2 "bscript.mat3x2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006490, VkglTestCase_006490_1, VkglTestCase_006490_2);

#define VkglTestCase_006491_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006491_2 "script.mat3x2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006491, VkglTestCase_006491_1, VkglTestCase_006491_2);

#define VkglTestCase_006492_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006492_2 "cript.mat3x2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006492, VkglTestCase_006492_1, VkglTestCase_006492_2);

#define VkglTestCase_006493_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006493_2 "cript.mat3x2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006493, VkglTestCase_006493_1, VkglTestCase_006493_2);

#define VkglTestCase_006494_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006494_2 "ript.mat3x2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006494, VkglTestCase_006494_1, VkglTestCase_006494_2);

#define VkglTestCase_006495_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006495_2 "ubscript.mat3x2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006495, VkglTestCase_006495_1, VkglTestCase_006495_2);

#define VkglTestCase_006496_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006496_2 "bscript.mat3x2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006496, VkglTestCase_006496_1, VkglTestCase_006496_2);

#define VkglTestCase_006497_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006497_2 "bscript.mat3x2_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006497, VkglTestCase_006497_1, VkglTestCase_006497_2);

#define VkglTestCase_006498_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006498_2 "script.mat3x2_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006498, VkglTestCase_006498_1, VkglTestCase_006498_2);

#define VkglTestCase_006499_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006499_2 "cript.mat3x2_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006499, VkglTestCase_006499_1, VkglTestCase_006499_2);

#define VkglTestCase_006500_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006500_2 "ript.mat3x2_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006500, VkglTestCase_006500_1, VkglTestCase_006500_2);

#define VkglTestCase_006501_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006501_2 "cript.mat3x2_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006501, VkglTestCase_006501_1, VkglTestCase_006501_2);

#define VkglTestCase_006502_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006502_2 "ript.mat3x2_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006502, VkglTestCase_006502_1, VkglTestCase_006502_2);

#define VkglTestCase_006503_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006503_2 "script.mat3x2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006503, VkglTestCase_006503_1, VkglTestCase_006503_2);

#define VkglTestCase_006504_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006504_2 "cript.mat3x2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006504, VkglTestCase_006504_1, VkglTestCase_006504_2);

#define VkglTestCase_006505_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006505_2 "cript.mat3x2_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006505, VkglTestCase_006505_1, VkglTestCase_006505_2);

#define VkglTestCase_006506_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006506_2 "ript.mat3x2_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006506, VkglTestCase_006506_1, VkglTestCase_006506_2);

#define VkglTestCase_006507_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006507_2 "ipt.mat3x2_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006507, VkglTestCase_006507_1, VkglTestCase_006507_2);

#define VkglTestCase_006508_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006508_2 "pt.mat3x2_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006508, VkglTestCase_006508_1, VkglTestCase_006508_2);

#define VkglTestCase_006509_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006509_2 "ipt.mat3x2_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006509, VkglTestCase_006509_1, VkglTestCase_006509_2);

#define VkglTestCase_006510_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006510_2 "pt.mat3x2_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006510, VkglTestCase_006510_1, VkglTestCase_006510_2);

#define VkglTestCase_006511_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006511_2 "cript.mat3x2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006511, VkglTestCase_006511_1, VkglTestCase_006511_2);

#define VkglTestCase_006512_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006512_2 "ript.mat3x2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006512, VkglTestCase_006512_1, VkglTestCase_006512_2);

#define VkglTestCase_006513_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006513_2 "cript.mat3x2_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006513, VkglTestCase_006513_1, VkglTestCase_006513_2);

#define VkglTestCase_006514_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006514_2 "ript.mat3x2_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006514, VkglTestCase_006514_1, VkglTestCase_006514_2);

#define VkglTestCase_006515_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006515_2 "ipt.mat3x2_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006515, VkglTestCase_006515_1, VkglTestCase_006515_2);

#define VkglTestCase_006516_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006516_2 "pt.mat3x2_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006516, VkglTestCase_006516_1, VkglTestCase_006516_2);

#define VkglTestCase_006517_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006517_2 "pt.mat3x2_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006517, VkglTestCase_006517_1, VkglTestCase_006517_2);

#define VkglTestCase_006518_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
#define VkglTestCase_006518_2 "t.mat3x2_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006518, VkglTestCase_006518_1, VkglTestCase_006518_2);

#define VkglTestCase_006519_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006519_2 "subscript.mat3_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006519, VkglTestCase_006519_1, VkglTestCase_006519_2);

#define VkglTestCase_006520_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006520_2 "ubscript.mat3_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006520, VkglTestCase_006520_1, VkglTestCase_006520_2);

#define VkglTestCase_006521_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006521_2 "subscript.mat3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006521, VkglTestCase_006521_1, VkglTestCase_006521_2);

#define VkglTestCase_006522_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006522_2 "ubscript.mat3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006522, VkglTestCase_006522_1, VkglTestCase_006522_2);

#define VkglTestCase_006523_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006523_2 "bscript.mat3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006523, VkglTestCase_006523_1, VkglTestCase_006523_2);

#define VkglTestCase_006524_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006524_2 "script.mat3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006524, VkglTestCase_006524_1, VkglTestCase_006524_2);

#define VkglTestCase_006525_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006525_2 "script.mat3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006525, VkglTestCase_006525_1, VkglTestCase_006525_2);

#define VkglTestCase_006526_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006526_2 "cript.mat3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006526, VkglTestCase_006526_1, VkglTestCase_006526_2);

#define VkglTestCase_006527_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006527_2 "subscript.mat3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006527, VkglTestCase_006527_1, VkglTestCase_006527_2);

#define VkglTestCase_006528_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006528_2 "ubscript.mat3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006528, VkglTestCase_006528_1, VkglTestCase_006528_2);

#define VkglTestCase_006529_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006529_2 "ubscript.mat3_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006529, VkglTestCase_006529_1, VkglTestCase_006529_2);

#define VkglTestCase_006530_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006530_2 "bscript.mat3_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006530, VkglTestCase_006530_1, VkglTestCase_006530_2);

#define VkglTestCase_006531_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006531_2 "script.mat3_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006531, VkglTestCase_006531_1, VkglTestCase_006531_2);

#define VkglTestCase_006532_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006532_2 "cript.mat3_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006532, VkglTestCase_006532_1, VkglTestCase_006532_2);

#define VkglTestCase_006533_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006533_2 "script.mat3_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006533, VkglTestCase_006533_1, VkglTestCase_006533_2);

#define VkglTestCase_006534_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006534_2 "cript.mat3_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006534, VkglTestCase_006534_1, VkglTestCase_006534_2);

#define VkglTestCase_006535_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006535_2 "bscript.mat3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006535, VkglTestCase_006535_1, VkglTestCase_006535_2);

#define VkglTestCase_006536_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006536_2 "script.mat3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006536, VkglTestCase_006536_1, VkglTestCase_006536_2);

#define VkglTestCase_006537_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006537_2 "script.mat3_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006537, VkglTestCase_006537_1, VkglTestCase_006537_2);

#define VkglTestCase_006538_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006538_2 "cript.mat3_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006538, VkglTestCase_006538_1, VkglTestCase_006538_2);

#define VkglTestCase_006539_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006539_2 "ript.mat3_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006539, VkglTestCase_006539_1, VkglTestCase_006539_2);

#define VkglTestCase_006540_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006540_2 "ipt.mat3_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006540, VkglTestCase_006540_1, VkglTestCase_006540_2);

#define VkglTestCase_006541_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006541_2 "ript.mat3_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006541, VkglTestCase_006541_1, VkglTestCase_006541_2);

#define VkglTestCase_006542_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006542_2 "ipt.mat3_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006542, VkglTestCase_006542_1, VkglTestCase_006542_2);

#define VkglTestCase_006543_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006543_2 "script.mat3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006543, VkglTestCase_006543_1, VkglTestCase_006543_2);

#define VkglTestCase_006544_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006544_2 "cript.mat3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006544, VkglTestCase_006544_1, VkglTestCase_006544_2);

#define VkglTestCase_006545_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006545_2 "script.mat3_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006545, VkglTestCase_006545_1, VkglTestCase_006545_2);

#define VkglTestCase_006546_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006546_2 "cript.mat3_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006546, VkglTestCase_006546_1, VkglTestCase_006546_2);

#define VkglTestCase_006547_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006547_2 "ript.mat3_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006547, VkglTestCase_006547_1, VkglTestCase_006547_2);

#define VkglTestCase_006548_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006548_2 "ipt.mat3_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006548, VkglTestCase_006548_1, VkglTestCase_006548_2);

#define VkglTestCase_006549_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006549_2 "ipt.mat3_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006549, VkglTestCase_006549_1, VkglTestCase_006549_2);

#define VkglTestCase_006550_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006550_2 "pt.mat3_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006550, VkglTestCase_006550_1, VkglTestCase_006550_2);

#define VkglTestCase_006551_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006551_2 "ubscript.mat3x4_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006551, VkglTestCase_006551_1, VkglTestCase_006551_2);

#define VkglTestCase_006552_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006552_2 "bscript.mat3x4_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006552, VkglTestCase_006552_1, VkglTestCase_006552_2);

#define VkglTestCase_006553_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006553_2 "ubscript.mat3x4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006553, VkglTestCase_006553_1, VkglTestCase_006553_2);

#define VkglTestCase_006554_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006554_2 "bscript.mat3x4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006554, VkglTestCase_006554_1, VkglTestCase_006554_2);

#define VkglTestCase_006555_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006555_2 "script.mat3x4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006555, VkglTestCase_006555_1, VkglTestCase_006555_2);

#define VkglTestCase_006556_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006556_2 "cript.mat3x4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006556, VkglTestCase_006556_1, VkglTestCase_006556_2);

#define VkglTestCase_006557_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006557_2 "cript.mat3x4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006557, VkglTestCase_006557_1, VkglTestCase_006557_2);

#define VkglTestCase_006558_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006558_2 "ript.mat3x4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006558, VkglTestCase_006558_1, VkglTestCase_006558_2);

#define VkglTestCase_006559_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006559_2 "ubscript.mat3x4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006559, VkglTestCase_006559_1, VkglTestCase_006559_2);

#define VkglTestCase_006560_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006560_2 "bscript.mat3x4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006560, VkglTestCase_006560_1, VkglTestCase_006560_2);

#define VkglTestCase_006561_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006561_2 "bscript.mat3x4_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006561, VkglTestCase_006561_1, VkglTestCase_006561_2);

#define VkglTestCase_006562_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006562_2 "script.mat3x4_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006562, VkglTestCase_006562_1, VkglTestCase_006562_2);

#define VkglTestCase_006563_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006563_2 "cript.mat3x4_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006563, VkglTestCase_006563_1, VkglTestCase_006563_2);

#define VkglTestCase_006564_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006564_2 "ript.mat3x4_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006564, VkglTestCase_006564_1, VkglTestCase_006564_2);

#define VkglTestCase_006565_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006565_2 "cript.mat3x4_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006565, VkglTestCase_006565_1, VkglTestCase_006565_2);

#define VkglTestCase_006566_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006566_2 "ript.mat3x4_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006566, VkglTestCase_006566_1, VkglTestCase_006566_2);

#define VkglTestCase_006567_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006567_2 "script.mat3x4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006567, VkglTestCase_006567_1, VkglTestCase_006567_2);

#define VkglTestCase_006568_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006568_2 "cript.mat3x4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006568, VkglTestCase_006568_1, VkglTestCase_006568_2);

#define VkglTestCase_006569_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006569_2 "cript.mat3x4_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006569, VkglTestCase_006569_1, VkglTestCase_006569_2);

#define VkglTestCase_006570_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006570_2 "ript.mat3x4_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006570, VkglTestCase_006570_1, VkglTestCase_006570_2);

#define VkglTestCase_006571_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006571_2 "ipt.mat3x4_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006571, VkglTestCase_006571_1, VkglTestCase_006571_2);

#define VkglTestCase_006572_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006572_2 "pt.mat3x4_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006572, VkglTestCase_006572_1, VkglTestCase_006572_2);

#define VkglTestCase_006573_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006573_2 "ipt.mat3x4_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006573, VkglTestCase_006573_1, VkglTestCase_006573_2);

#define VkglTestCase_006574_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006574_2 "pt.mat3x4_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006574, VkglTestCase_006574_1, VkglTestCase_006574_2);

#define VkglTestCase_006575_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006575_2 "cript.mat3x4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006575, VkglTestCase_006575_1, VkglTestCase_006575_2);

#define VkglTestCase_006576_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006576_2 "ript.mat3x4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006576, VkglTestCase_006576_1, VkglTestCase_006576_2);

#define VkglTestCase_006577_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006577_2 "cript.mat3x4_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006577, VkglTestCase_006577_1, VkglTestCase_006577_2);

#define VkglTestCase_006578_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006578_2 "ript.mat3x4_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006578, VkglTestCase_006578_1, VkglTestCase_006578_2);

#define VkglTestCase_006579_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006579_2 "ipt.mat3x4_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006579, VkglTestCase_006579_1, VkglTestCase_006579_2);

#define VkglTestCase_006580_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006580_2 "pt.mat3x4_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006580, VkglTestCase_006580_1, VkglTestCase_006580_2);

#define VkglTestCase_006581_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006581_2 "pt.mat3x4_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006581, VkglTestCase_006581_1, VkglTestCase_006581_2);

#define VkglTestCase_006582_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
#define VkglTestCase_006582_2 "t.mat3x4_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006582, VkglTestCase_006582_1, VkglTestCase_006582_2);

#define VkglTestCase_006583_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006583_2 "ubscript.mat4x2_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006583, VkglTestCase_006583_1, VkglTestCase_006583_2);

#define VkglTestCase_006584_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006584_2 "bscript.mat4x2_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006584, VkglTestCase_006584_1, VkglTestCase_006584_2);

#define VkglTestCase_006585_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006585_2 "ubscript.mat4x2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006585, VkglTestCase_006585_1, VkglTestCase_006585_2);

#define VkglTestCase_006586_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006586_2 "bscript.mat4x2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006586, VkglTestCase_006586_1, VkglTestCase_006586_2);

#define VkglTestCase_006587_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006587_2 "script.mat4x2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006587, VkglTestCase_006587_1, VkglTestCase_006587_2);

#define VkglTestCase_006588_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006588_2 "cript.mat4x2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006588, VkglTestCase_006588_1, VkglTestCase_006588_2);

#define VkglTestCase_006589_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006589_2 "cript.mat4x2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006589, VkglTestCase_006589_1, VkglTestCase_006589_2);

#define VkglTestCase_006590_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006590_2 "ript.mat4x2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006590, VkglTestCase_006590_1, VkglTestCase_006590_2);

#define VkglTestCase_006591_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006591_2 "ubscript.mat4x2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006591, VkglTestCase_006591_1, VkglTestCase_006591_2);

#define VkglTestCase_006592_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006592_2 "bscript.mat4x2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006592, VkglTestCase_006592_1, VkglTestCase_006592_2);

#define VkglTestCase_006593_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006593_2 "bscript.mat4x2_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006593, VkglTestCase_006593_1, VkglTestCase_006593_2);

#define VkglTestCase_006594_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006594_2 "script.mat4x2_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006594, VkglTestCase_006594_1, VkglTestCase_006594_2);

#define VkglTestCase_006595_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006595_2 "cript.mat4x2_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006595, VkglTestCase_006595_1, VkglTestCase_006595_2);

#define VkglTestCase_006596_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006596_2 "ript.mat4x2_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006596, VkglTestCase_006596_1, VkglTestCase_006596_2);

#define VkglTestCase_006597_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006597_2 "cript.mat4x2_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006597, VkglTestCase_006597_1, VkglTestCase_006597_2);

#define VkglTestCase_006598_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006598_2 "ript.mat4x2_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006598, VkglTestCase_006598_1, VkglTestCase_006598_2);

#define VkglTestCase_006599_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006599_2 "script.mat4x2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006599, VkglTestCase_006599_1, VkglTestCase_006599_2);

#define VkglTestCase_006600_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006600_2 "cript.mat4x2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006600, VkglTestCase_006600_1, VkglTestCase_006600_2);

#define VkglTestCase_006601_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006601_2 "cript.mat4x2_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006601, VkglTestCase_006601_1, VkglTestCase_006601_2);

#define VkglTestCase_006602_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006602_2 "ript.mat4x2_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006602, VkglTestCase_006602_1, VkglTestCase_006602_2);

#define VkglTestCase_006603_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006603_2 "ipt.mat4x2_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006603, VkglTestCase_006603_1, VkglTestCase_006603_2);

#define VkglTestCase_006604_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006604_2 "pt.mat4x2_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006604, VkglTestCase_006604_1, VkglTestCase_006604_2);

#define VkglTestCase_006605_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006605_2 "ipt.mat4x2_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006605, VkglTestCase_006605_1, VkglTestCase_006605_2);

#define VkglTestCase_006606_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006606_2 "pt.mat4x2_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006606, VkglTestCase_006606_1, VkglTestCase_006606_2);

#define VkglTestCase_006607_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006607_2 "cript.mat4x2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006607, VkglTestCase_006607_1, VkglTestCase_006607_2);

#define VkglTestCase_006608_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006608_2 "ript.mat4x2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006608, VkglTestCase_006608_1, VkglTestCase_006608_2);

#define VkglTestCase_006609_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006609_2 "cript.mat4x2_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006609, VkglTestCase_006609_1, VkglTestCase_006609_2);

#define VkglTestCase_006610_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006610_2 "ript.mat4x2_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006610, VkglTestCase_006610_1, VkglTestCase_006610_2);

#define VkglTestCase_006611_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006611_2 "ipt.mat4x2_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006611, VkglTestCase_006611_1, VkglTestCase_006611_2);

#define VkglTestCase_006612_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006612_2 "pt.mat4x2_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006612, VkglTestCase_006612_1, VkglTestCase_006612_2);

#define VkglTestCase_006613_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006613_2 "pt.mat4x2_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006613, VkglTestCase_006613_1, VkglTestCase_006613_2);

#define VkglTestCase_006614_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
#define VkglTestCase_006614_2 "t.mat4x2_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006614, VkglTestCase_006614_1, VkglTestCase_006614_2);

#define VkglTestCase_006615_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006615_2 "ubscript.mat4x3_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006615, VkglTestCase_006615_1, VkglTestCase_006615_2);

#define VkglTestCase_006616_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006616_2 "bscript.mat4x3_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006616, VkglTestCase_006616_1, VkglTestCase_006616_2);

#define VkglTestCase_006617_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006617_2 "ubscript.mat4x3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006617, VkglTestCase_006617_1, VkglTestCase_006617_2);

#define VkglTestCase_006618_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006618_2 "bscript.mat4x3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006618, VkglTestCase_006618_1, VkglTestCase_006618_2);

#define VkglTestCase_006619_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006619_2 "script.mat4x3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006619, VkglTestCase_006619_1, VkglTestCase_006619_2);

#define VkglTestCase_006620_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006620_2 "cript.mat4x3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006620, VkglTestCase_006620_1, VkglTestCase_006620_2);

#define VkglTestCase_006621_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006621_2 "cript.mat4x3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006621, VkglTestCase_006621_1, VkglTestCase_006621_2);

#define VkglTestCase_006622_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006622_2 "ript.mat4x3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006622, VkglTestCase_006622_1, VkglTestCase_006622_2);

#define VkglTestCase_006623_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006623_2 "ubscript.mat4x3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006623, VkglTestCase_006623_1, VkglTestCase_006623_2);

#define VkglTestCase_006624_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006624_2 "bscript.mat4x3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006624, VkglTestCase_006624_1, VkglTestCase_006624_2);

#define VkglTestCase_006625_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006625_2 "bscript.mat4x3_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006625, VkglTestCase_006625_1, VkglTestCase_006625_2);

#define VkglTestCase_006626_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006626_2 "script.mat4x3_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006626, VkglTestCase_006626_1, VkglTestCase_006626_2);

#define VkglTestCase_006627_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006627_2 "cript.mat4x3_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006627, VkglTestCase_006627_1, VkglTestCase_006627_2);

#define VkglTestCase_006628_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006628_2 "ript.mat4x3_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006628, VkglTestCase_006628_1, VkglTestCase_006628_2);

#define VkglTestCase_006629_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006629_2 "cript.mat4x3_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006629, VkglTestCase_006629_1, VkglTestCase_006629_2);

#define VkglTestCase_006630_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006630_2 "ript.mat4x3_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006630, VkglTestCase_006630_1, VkglTestCase_006630_2);

#define VkglTestCase_006631_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006631_2 "script.mat4x3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006631, VkglTestCase_006631_1, VkglTestCase_006631_2);

#define VkglTestCase_006632_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006632_2 "cript.mat4x3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006632, VkglTestCase_006632_1, VkglTestCase_006632_2);

#define VkglTestCase_006633_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006633_2 "cript.mat4x3_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006633, VkglTestCase_006633_1, VkglTestCase_006633_2);

#define VkglTestCase_006634_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006634_2 "ript.mat4x3_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006634, VkglTestCase_006634_1, VkglTestCase_006634_2);

#define VkglTestCase_006635_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006635_2 "ipt.mat4x3_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006635, VkglTestCase_006635_1, VkglTestCase_006635_2);

#define VkglTestCase_006636_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006636_2 "pt.mat4x3_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006636, VkglTestCase_006636_1, VkglTestCase_006636_2);

#define VkglTestCase_006637_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006637_2 "ipt.mat4x3_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006637, VkglTestCase_006637_1, VkglTestCase_006637_2);

#define VkglTestCase_006638_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006638_2 "pt.mat4x3_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006638, VkglTestCase_006638_1, VkglTestCase_006638_2);

#define VkglTestCase_006639_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006639_2 "cript.mat4x3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006639, VkglTestCase_006639_1, VkglTestCase_006639_2);

#define VkglTestCase_006640_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006640_2 "ript.mat4x3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006640, VkglTestCase_006640_1, VkglTestCase_006640_2);

#define VkglTestCase_006641_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006641_2 "cript.mat4x3_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006641, VkglTestCase_006641_1, VkglTestCase_006641_2);

#define VkglTestCase_006642_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006642_2 "ript.mat4x3_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006642, VkglTestCase_006642_1, VkglTestCase_006642_2);

#define VkglTestCase_006643_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006643_2 "ipt.mat4x3_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006643, VkglTestCase_006643_1, VkglTestCase_006643_2);

#define VkglTestCase_006644_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006644_2 "pt.mat4x3_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006644, VkglTestCase_006644_1, VkglTestCase_006644_2);

#define VkglTestCase_006645_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006645_2 "pt.mat4x3_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006645, VkglTestCase_006645_1, VkglTestCase_006645_2);

#define VkglTestCase_006646_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscrip"
#define VkglTestCase_006646_2 "t.mat4x3_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006646, VkglTestCase_006646_1, VkglTestCase_006646_2);

#define VkglTestCase_006647_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006647_2 "subscript.mat4_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006647, VkglTestCase_006647_1, VkglTestCase_006647_2);

#define VkglTestCase_006648_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006648_2 "ubscript.mat4_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006648, VkglTestCase_006648_1, VkglTestCase_006648_2);

#define VkglTestCase_006649_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006649_2 "subscript.mat4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006649, VkglTestCase_006649_1, VkglTestCase_006649_2);

#define VkglTestCase_006650_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006650_2 "ubscript.mat4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006650, VkglTestCase_006650_1, VkglTestCase_006650_2);

#define VkglTestCase_006651_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006651_2 "bscript.mat4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006651, VkglTestCase_006651_1, VkglTestCase_006651_2);

#define VkglTestCase_006652_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006652_2 "script.mat4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006652, VkglTestCase_006652_1, VkglTestCase_006652_2);

#define VkglTestCase_006653_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006653_2 "script.mat4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006653, VkglTestCase_006653_1, VkglTestCase_006653_2);

#define VkglTestCase_006654_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006654_2 "cript.mat4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006654, VkglTestCase_006654_1, VkglTestCase_006654_2);

#define VkglTestCase_006655_1 "dEQP-GLES3.functional.shaders.indexing.matrix_"
#define VkglTestCase_006655_2 "subscript.mat4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006655, VkglTestCase_006655_1, VkglTestCase_006655_2);

#define VkglTestCase_006656_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006656_2 "ubscript.mat4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006656, VkglTestCase_006656_1, VkglTestCase_006656_2);

#define VkglTestCase_006657_1 "dEQP-GLES3.functional.shaders.indexing.matrix_s"
#define VkglTestCase_006657_2 "ubscript.mat4_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006657, VkglTestCase_006657_1, VkglTestCase_006657_2);

#define VkglTestCase_006658_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006658_2 "bscript.mat4_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006658, VkglTestCase_006658_1, VkglTestCase_006658_2);

#define VkglTestCase_006659_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006659_2 "script.mat4_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006659, VkglTestCase_006659_1, VkglTestCase_006659_2);

#define VkglTestCase_006660_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006660_2 "cript.mat4_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006660, VkglTestCase_006660_1, VkglTestCase_006660_2);

#define VkglTestCase_006661_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006661_2 "script.mat4_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006661, VkglTestCase_006661_1, VkglTestCase_006661_2);

#define VkglTestCase_006662_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006662_2 "cript.mat4_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006662, VkglTestCase_006662_1, VkglTestCase_006662_2);

#define VkglTestCase_006663_1 "dEQP-GLES3.functional.shaders.indexing.matrix_su"
#define VkglTestCase_006663_2 "bscript.mat4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006663, VkglTestCase_006663_1, VkglTestCase_006663_2);

#define VkglTestCase_006664_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006664_2 "script.mat4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006664, VkglTestCase_006664_1, VkglTestCase_006664_2);

#define VkglTestCase_006665_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006665_2 "script.mat4_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006665, VkglTestCase_006665_1, VkglTestCase_006665_2);

#define VkglTestCase_006666_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006666_2 "cript.mat4_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006666, VkglTestCase_006666_1, VkglTestCase_006666_2);

#define VkglTestCase_006667_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006667_2 "ript.mat4_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006667, VkglTestCase_006667_1, VkglTestCase_006667_2);

#define VkglTestCase_006668_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006668_2 "ipt.mat4_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006668, VkglTestCase_006668_1, VkglTestCase_006668_2);

#define VkglTestCase_006669_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006669_2 "ript.mat4_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006669, VkglTestCase_006669_1, VkglTestCase_006669_2);

#define VkglTestCase_006670_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006670_2 "ipt.mat4_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006670, VkglTestCase_006670_1, VkglTestCase_006670_2);

#define VkglTestCase_006671_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006671_2 "script.mat4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006671, VkglTestCase_006671_1, VkglTestCase_006671_2);

#define VkglTestCase_006672_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006672_2 "cript.mat4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006672, VkglTestCase_006672_1, VkglTestCase_006672_2);

#define VkglTestCase_006673_1 "dEQP-GLES3.functional.shaders.indexing.matrix_sub"
#define VkglTestCase_006673_2 "script.mat4_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006673, VkglTestCase_006673_1, VkglTestCase_006673_2);

#define VkglTestCase_006674_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subs"
#define VkglTestCase_006674_2 "cript.mat4_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006674, VkglTestCase_006674_1, VkglTestCase_006674_2);

#define VkglTestCase_006675_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subsc"
#define VkglTestCase_006675_2 "ript.mat4_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006675, VkglTestCase_006675_1, VkglTestCase_006675_2);

#define VkglTestCase_006676_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006676_2 "ipt.mat4_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006676, VkglTestCase_006676_1, VkglTestCase_006676_2);

#define VkglTestCase_006677_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscr"
#define VkglTestCase_006677_2 "ipt.mat4_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006677, VkglTestCase_006677_1, VkglTestCase_006677_2);

#define VkglTestCase_006678_1 "dEQP-GLES3.functional.shaders.indexing.matrix_subscri"
#define VkglTestCase_006678_2 "pt.mat4_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006678, VkglTestCase_006678_1, VkglTestCase_006678_2);
