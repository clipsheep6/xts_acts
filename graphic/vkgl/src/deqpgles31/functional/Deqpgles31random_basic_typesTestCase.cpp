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
#include "../ActsDeqpgles310011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010014_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010014_2 ".layout.random.basic_types.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010014, VkglTestCase_010014_1, VkglTestCase_010014_2);

#define VkglTestCase_010015_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010015_2 ".layout.random.basic_types.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010015, VkglTestCase_010015_1, VkglTestCase_010015_2);

#define VkglTestCase_010016_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010016_2 ".layout.random.basic_types.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010016, VkglTestCase_010016_1, VkglTestCase_010016_2);

#define VkglTestCase_010017_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010017_2 ".layout.random.basic_types.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010017, VkglTestCase_010017_1, VkglTestCase_010017_2);

#define VkglTestCase_010018_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010018_2 ".layout.random.basic_types.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010018, VkglTestCase_010018_1, VkglTestCase_010018_2);

#define VkglTestCase_010019_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010019_2 ".layout.random.basic_types.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010019, VkglTestCase_010019_1, VkglTestCase_010019_2);

#define VkglTestCase_010020_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010020_2 ".layout.random.basic_types.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010020, VkglTestCase_010020_1, VkglTestCase_010020_2);

#define VkglTestCase_010021_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010021_2 ".layout.random.basic_types.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010021, VkglTestCase_010021_1, VkglTestCase_010021_2);

#define VkglTestCase_010022_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010022_2 ".layout.random.basic_types.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010022, VkglTestCase_010022_1, VkglTestCase_010022_2);

#define VkglTestCase_010023_1 "dEQP-GLES31.functional.ssbo"
#define VkglTestCase_010023_2 ".layout.random.basic_types.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010023, VkglTestCase_010023_1, VkglTestCase_010023_2);

#define VkglTestCase_010024_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010024_2 "layout.random.basic_types.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010024, VkglTestCase_010024_1, VkglTestCase_010024_2);

#define VkglTestCase_010025_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010025_2 "layout.random.basic_types.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010025, VkglTestCase_010025_1, VkglTestCase_010025_2);

#define VkglTestCase_010026_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010026_2 "layout.random.basic_types.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010026, VkglTestCase_010026_1, VkglTestCase_010026_2);

#define VkglTestCase_010027_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010027_2 "layout.random.basic_types.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010027, VkglTestCase_010027_1, VkglTestCase_010027_2);

#define VkglTestCase_010028_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010028_2 "layout.random.basic_types.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010028, VkglTestCase_010028_1, VkglTestCase_010028_2);

#define VkglTestCase_010029_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010029_2 "layout.random.basic_types.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010029, VkglTestCase_010029_1, VkglTestCase_010029_2);

#define VkglTestCase_010030_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010030_2 "layout.random.basic_types.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010030, VkglTestCase_010030_1, VkglTestCase_010030_2);

#define VkglTestCase_010031_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010031_2 "layout.random.basic_types.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010031, VkglTestCase_010031_1, VkglTestCase_010031_2);

#define VkglTestCase_010032_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010032_2 "layout.random.basic_types.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010032, VkglTestCase_010032_1, VkglTestCase_010032_2);

#define VkglTestCase_010033_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010033_2 "layout.random.basic_types.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010033, VkglTestCase_010033_1, VkglTestCase_010033_2);

#define VkglTestCase_010034_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010034_2 "layout.random.basic_types.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010034, VkglTestCase_010034_1, VkglTestCase_010034_2);

#define VkglTestCase_010035_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010035_2 "layout.random.basic_types.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010035, VkglTestCase_010035_1, VkglTestCase_010035_2);

#define VkglTestCase_010036_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010036_2 "layout.random.basic_types.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010036, VkglTestCase_010036_1, VkglTestCase_010036_2);

#define VkglTestCase_010037_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010037_2 "layout.random.basic_types.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010037, VkglTestCase_010037_1, VkglTestCase_010037_2);

#define VkglTestCase_010038_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010038_2 "layout.random.basic_types.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010038, VkglTestCase_010038_1, VkglTestCase_010038_2);
