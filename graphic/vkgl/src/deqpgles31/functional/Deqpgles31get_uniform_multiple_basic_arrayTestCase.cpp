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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016840_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016840_2 "inter.get_uniform.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016840, VkglTestCase_016840_1, VkglTestCase_016840_2);

#define VkglTestCase_016841_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016841_2 "nter.get_uniform.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016841, VkglTestCase_016841_1, VkglTestCase_016841_2);

#define VkglTestCase_016842_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016842_2 "ointer.get_uniform.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016842, VkglTestCase_016842_1, VkglTestCase_016842_2);

#define VkglTestCase_017284_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017284_2 "alue.get_uniform.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017284, VkglTestCase_017284_1, VkglTestCase_017284_2);

#define VkglTestCase_017285_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017285_2 "lue.get_uniform.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017285, VkglTestCase_017285_1, VkglTestCase_017285_2);

#define VkglTestCase_017286_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017286_2 "value.get_uniform.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017286, VkglTestCase_017286_1, VkglTestCase_017286_2);
