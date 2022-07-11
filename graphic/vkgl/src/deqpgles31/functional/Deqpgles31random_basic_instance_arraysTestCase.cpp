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

#define VkglTestCase_010114_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010114_2 "ut.random.basic_instance_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010114, VkglTestCase_010114_1, VkglTestCase_010114_2);

#define VkglTestCase_010115_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010115_2 "ut.random.basic_instance_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010115, VkglTestCase_010115_1, VkglTestCase_010115_2);

#define VkglTestCase_010116_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010116_2 "ut.random.basic_instance_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010116, VkglTestCase_010116_1, VkglTestCase_010116_2);

#define VkglTestCase_010117_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010117_2 "ut.random.basic_instance_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010117, VkglTestCase_010117_1, VkglTestCase_010117_2);

#define VkglTestCase_010118_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010118_2 "ut.random.basic_instance_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010118, VkglTestCase_010118_1, VkglTestCase_010118_2);

#define VkglTestCase_010119_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010119_2 "ut.random.basic_instance_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010119, VkglTestCase_010119_1, VkglTestCase_010119_2);

#define VkglTestCase_010120_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010120_2 "ut.random.basic_instance_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010120, VkglTestCase_010120_1, VkglTestCase_010120_2);

#define VkglTestCase_010121_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010121_2 "ut.random.basic_instance_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010121, VkglTestCase_010121_1, VkglTestCase_010121_2);

#define VkglTestCase_010122_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010122_2 "ut.random.basic_instance_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010122, VkglTestCase_010122_1, VkglTestCase_010122_2);

#define VkglTestCase_010123_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010123_2 "ut.random.basic_instance_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010123, VkglTestCase_010123_1, VkglTestCase_010123_2);

#define VkglTestCase_010124_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010124_2 "t.random.basic_instance_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010124, VkglTestCase_010124_1, VkglTestCase_010124_2);

#define VkglTestCase_010125_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010125_2 "t.random.basic_instance_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010125, VkglTestCase_010125_1, VkglTestCase_010125_2);

#define VkglTestCase_010126_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010126_2 "t.random.basic_instance_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010126, VkglTestCase_010126_1, VkglTestCase_010126_2);

#define VkglTestCase_010127_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010127_2 "t.random.basic_instance_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010127, VkglTestCase_010127_1, VkglTestCase_010127_2);

#define VkglTestCase_010128_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010128_2 "t.random.basic_instance_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010128, VkglTestCase_010128_1, VkglTestCase_010128_2);

#define VkglTestCase_010129_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010129_2 "t.random.basic_instance_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010129, VkglTestCase_010129_1, VkglTestCase_010129_2);

#define VkglTestCase_010130_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010130_2 "t.random.basic_instance_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010130, VkglTestCase_010130_1, VkglTestCase_010130_2);

#define VkglTestCase_010131_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010131_2 "t.random.basic_instance_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010131, VkglTestCase_010131_1, VkglTestCase_010131_2);

#define VkglTestCase_010132_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010132_2 "t.random.basic_instance_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010132, VkglTestCase_010132_1, VkglTestCase_010132_2);

#define VkglTestCase_010133_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010133_2 "t.random.basic_instance_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010133, VkglTestCase_010133_1, VkglTestCase_010133_2);

#define VkglTestCase_010134_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010134_2 "t.random.basic_instance_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010134, VkglTestCase_010134_1, VkglTestCase_010134_2);

#define VkglTestCase_010135_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010135_2 "t.random.basic_instance_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010135, VkglTestCase_010135_1, VkglTestCase_010135_2);

#define VkglTestCase_010136_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010136_2 "t.random.basic_instance_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010136, VkglTestCase_010136_1, VkglTestCase_010136_2);

#define VkglTestCase_010137_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010137_2 "t.random.basic_instance_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010137, VkglTestCase_010137_1, VkglTestCase_010137_2);

#define VkglTestCase_010138_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010138_2 "t.random.basic_instance_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010138, VkglTestCase_010138_1, VkglTestCase_010138_2);
