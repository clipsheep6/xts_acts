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
#include "../ActsDeqpgles30032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031413_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031413_2 "leteness.samples.rbo0_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031413, VkglTestCase_031413_1, VkglTestCase_031413_2);

#define VkglTestCase_031414_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031414_2 "leteness.samples.rbo1_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031414, VkglTestCase_031414_1, VkglTestCase_031414_2);

#define VkglTestCase_031415_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031415_2 "leteness.samples.rbo2_none_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031415, VkglTestCase_031415_1, VkglTestCase_031415_2);

#define VkglTestCase_031416_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031416_2 "leteness.samples.rbo0_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031416, VkglTestCase_031416_1, VkglTestCase_031416_2);

#define VkglTestCase_031417_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031417_2 "leteness.samples.rbo1_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031417, VkglTestCase_031417_1, VkglTestCase_031417_2);

#define VkglTestCase_031418_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031418_2 "leteness.samples.rbo2_tex_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031418, VkglTestCase_031418_1, VkglTestCase_031418_2);

#define VkglTestCase_031419_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031419_2 "leteness.samples.rbo2_rbo1_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031419, VkglTestCase_031419_1, VkglTestCase_031419_2);

#define VkglTestCase_031420_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031420_2 "leteness.samples.rbo2_rbo2_none"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031420, VkglTestCase_031420_1, VkglTestCase_031420_2);

#define VkglTestCase_031421_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031421_2 "leteness.samples.rbo0_rbo0_tex"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031421, VkglTestCase_031421_1, VkglTestCase_031421_2);

#define VkglTestCase_031422_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031422_2 "leteness.samples.rbo1_rbo2_rbo0"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031422, VkglTestCase_031422_1, VkglTestCase_031422_2);

#define VkglTestCase_031423_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031423_2 "leteness.samples.rbo2_rbo2_rbo0"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031423, VkglTestCase_031423_1, VkglTestCase_031423_2);

#define VkglTestCase_031424_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031424_2 "leteness.samples.rbo1_rbo1_rbo1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031424, VkglTestCase_031424_1, VkglTestCase_031424_2);

#define VkglTestCase_031425_1 "dEQP-GLES3.functional.fbo.comp"
#define VkglTestCase_031425_2 "leteness.samples.rbo1_rbo2_rbo4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031425, VkglTestCase_031425_1, VkglTestCase_031425_2);
