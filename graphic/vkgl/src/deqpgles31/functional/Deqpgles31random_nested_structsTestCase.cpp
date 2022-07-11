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

#define VkglTestCase_010139_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010139_2 "ayout.random.nested_structs.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010139, VkglTestCase_010139_1, VkglTestCase_010139_2);

#define VkglTestCase_010140_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010140_2 "ayout.random.nested_structs.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010140, VkglTestCase_010140_1, VkglTestCase_010140_2);

#define VkglTestCase_010141_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010141_2 "ayout.random.nested_structs.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010141, VkglTestCase_010141_1, VkglTestCase_010141_2);

#define VkglTestCase_010142_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010142_2 "ayout.random.nested_structs.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010142, VkglTestCase_010142_1, VkglTestCase_010142_2);

#define VkglTestCase_010143_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010143_2 "ayout.random.nested_structs.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010143, VkglTestCase_010143_1, VkglTestCase_010143_2);

#define VkglTestCase_010144_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010144_2 "ayout.random.nested_structs.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010144, VkglTestCase_010144_1, VkglTestCase_010144_2);

#define VkglTestCase_010145_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010145_2 "ayout.random.nested_structs.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010145, VkglTestCase_010145_1, VkglTestCase_010145_2);

#define VkglTestCase_010146_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010146_2 "ayout.random.nested_structs.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010146, VkglTestCase_010146_1, VkglTestCase_010146_2);

#define VkglTestCase_010147_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010147_2 "ayout.random.nested_structs.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010147, VkglTestCase_010147_1, VkglTestCase_010147_2);

#define VkglTestCase_010148_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010148_2 "ayout.random.nested_structs.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010148, VkglTestCase_010148_1, VkglTestCase_010148_2);

#define VkglTestCase_010149_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010149_2 "ayout.random.nested_structs.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010149, VkglTestCase_010149_1, VkglTestCase_010149_2);

#define VkglTestCase_010150_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010150_2 "ayout.random.nested_structs.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010150, VkglTestCase_010150_1, VkglTestCase_010150_2);

#define VkglTestCase_010151_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010151_2 "ayout.random.nested_structs.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010151, VkglTestCase_010151_1, VkglTestCase_010151_2);

#define VkglTestCase_010152_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010152_2 "ayout.random.nested_structs.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010152, VkglTestCase_010152_1, VkglTestCase_010152_2);

#define VkglTestCase_010153_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010153_2 "ayout.random.nested_structs.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010153, VkglTestCase_010153_1, VkglTestCase_010153_2);

#define VkglTestCase_010154_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010154_2 "ayout.random.nested_structs.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010154, VkglTestCase_010154_1, VkglTestCase_010154_2);

#define VkglTestCase_010155_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010155_2 "ayout.random.nested_structs.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010155, VkglTestCase_010155_1, VkglTestCase_010155_2);

#define VkglTestCase_010156_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010156_2 "ayout.random.nested_structs.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010156, VkglTestCase_010156_1, VkglTestCase_010156_2);

#define VkglTestCase_010157_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010157_2 "ayout.random.nested_structs.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010157, VkglTestCase_010157_1, VkglTestCase_010157_2);

#define VkglTestCase_010158_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010158_2 "ayout.random.nested_structs.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010158, VkglTestCase_010158_1, VkglTestCase_010158_2);

#define VkglTestCase_010159_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010159_2 "ayout.random.nested_structs.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010159, VkglTestCase_010159_1, VkglTestCase_010159_2);

#define VkglTestCase_010160_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010160_2 "ayout.random.nested_structs.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010160, VkglTestCase_010160_1, VkglTestCase_010160_2);

#define VkglTestCase_010161_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010161_2 "ayout.random.nested_structs.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010161, VkglTestCase_010161_1, VkglTestCase_010161_2);

#define VkglTestCase_010162_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010162_2 "ayout.random.nested_structs.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010162, VkglTestCase_010162_1, VkglTestCase_010162_2);

#define VkglTestCase_010163_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010163_2 "ayout.random.nested_structs.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010163, VkglTestCase_010163_1, VkglTestCase_010163_2);
