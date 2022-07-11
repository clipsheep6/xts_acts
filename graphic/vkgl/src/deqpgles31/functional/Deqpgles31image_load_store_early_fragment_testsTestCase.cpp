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
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011954_1 "dEQP-GLES31.functional.image_load_store.early"
#define VkglTestCase_011954_2 "_fragment_tests.no_early_fragment_tests_depth"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011954, VkglTestCase_011954_1, VkglTestCase_011954_2);

#define VkglTestCase_011955_1 "dEQP-GLES31.functional.image_load_store.early_"
#define VkglTestCase_011955_2 "fragment_tests.no_early_fragment_tests_stencil"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011955, VkglTestCase_011955_1, VkglTestCase_011955_2);

#define VkglTestCase_011956_1 "dEQP-GLES31.functional.image_load_store.ear"
#define VkglTestCase_011956_2 "ly_fragment_tests.early_fragment_tests_depth"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011956, VkglTestCase_011956_1, VkglTestCase_011956_2);

#define VkglTestCase_011957_1 "dEQP-GLES31.functional.image_load_store.earl"
#define VkglTestCase_011957_2 "y_fragment_tests.early_fragment_tests_stencil"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011957, VkglTestCase_011957_1, VkglTestCase_011957_2);

#define VkglTestCase_011958_1 "dEQP-GLES31.functional.image_load_store.early_f"
#define VkglTestCase_011958_2 "ragment_tests.no_early_fragment_tests_depth_fbo"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011958, VkglTestCase_011958_1, VkglTestCase_011958_2);

#define VkglTestCase_011959_1 "dEQP-GLES31.functional.image_load_store.early_fr"
#define VkglTestCase_011959_2 "agment_tests.no_early_fragment_tests_stencil_fbo"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011959, VkglTestCase_011959_1, VkglTestCase_011959_2);

#define VkglTestCase_011960_1 "dEQP-GLES31.functional.image_load_store.early"
#define VkglTestCase_011960_2 "_fragment_tests.early_fragment_tests_depth_fbo"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011960, VkglTestCase_011960_1, VkglTestCase_011960_2);

#define VkglTestCase_011961_1 "dEQP-GLES31.functional.image_load_store.early_"
#define VkglTestCase_011961_2 "fragment_tests.early_fragment_tests_stencil_fbo"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011961, VkglTestCase_011961_1, VkglTestCase_011961_2);

#define VkglTestCase_011962_1 "dEQP-GLES31.functional.image_load_store.early_fragment"
#define VkglTestCase_011962_2 "_tests.no_early_fragment_tests_depth_fbo_with_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011962, VkglTestCase_011962_1, VkglTestCase_011962_2);

#define VkglTestCase_011963_1 "dEQP-GLES31.functional.image_load_store.early_fragment_t"
#define VkglTestCase_011963_2 "ests.no_early_fragment_tests_stencil_fbo_with_no_stencil"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011963, VkglTestCase_011963_1, VkglTestCase_011963_2);

#define VkglTestCase_011964_1 "dEQP-GLES31.functional.image_load_store.early_fragme"
#define VkglTestCase_011964_2 "nt_tests.early_fragment_tests_depth_fbo_with_no_depth"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011964, VkglTestCase_011964_1, VkglTestCase_011964_2);

#define VkglTestCase_011965_1 "dEQP-GLES31.functional.image_load_store.early_fragment"
#define VkglTestCase_011965_2 "_tests.early_fragment_tests_stencil_fbo_with_no_stencil"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011965, VkglTestCase_011965_1, VkglTestCase_011965_2);
