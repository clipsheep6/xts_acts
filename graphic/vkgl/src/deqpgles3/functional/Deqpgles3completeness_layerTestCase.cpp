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

#define VkglTestCase_031405_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031405_2 "ompleteness.layer.2darr_1_0"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031405, VkglTestCase_031405_1, VkglTestCase_031405_2);

#define VkglTestCase_031406_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031406_2 "ompleteness.layer.2darr_1_3"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031406, VkglTestCase_031406_1, VkglTestCase_031406_2);

#define VkglTestCase_031407_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031407_2 "ompleteness.layer.2darr_4_3"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031407, VkglTestCase_031407_1, VkglTestCase_031407_2);

#define VkglTestCase_031408_1 "dEQP-GLES3.functional.fbo.c"
#define VkglTestCase_031408_2 "ompleteness.layer.2darr_4_15"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031408, VkglTestCase_031408_1, VkglTestCase_031408_2);

#define VkglTestCase_031409_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_031409_2 ".completeness.layer.3d_1_0"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031409, VkglTestCase_031409_1, VkglTestCase_031409_2);

#define VkglTestCase_031410_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031410_2 "completeness.layer.3d_1_15"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031410, VkglTestCase_031410_1, VkglTestCase_031410_2);

#define VkglTestCase_031411_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031411_2 "completeness.layer.3d_4_15"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031411, VkglTestCase_031411_1, VkglTestCase_031411_2);

#define VkglTestCase_031412_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_031412_2 "completeness.layer.3d_64_15"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031412, VkglTestCase_031412_1, VkglTestCase_031412_2);
