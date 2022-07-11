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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009989_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009989_2 "layout.random.vector_types.0"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009989, VkglTestCase_009989_1, VkglTestCase_009989_2);

#define VkglTestCase_009990_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009990_2 "layout.random.vector_types.1"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009990, VkglTestCase_009990_1, VkglTestCase_009990_2);

#define VkglTestCase_009991_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009991_2 "layout.random.vector_types.2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009991, VkglTestCase_009991_1, VkglTestCase_009991_2);

#define VkglTestCase_009992_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009992_2 "layout.random.vector_types.3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009992, VkglTestCase_009992_1, VkglTestCase_009992_2);

#define VkglTestCase_009993_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009993_2 "layout.random.vector_types.4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009993, VkglTestCase_009993_1, VkglTestCase_009993_2);

#define VkglTestCase_009994_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009994_2 "layout.random.vector_types.5"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009994, VkglTestCase_009994_1, VkglTestCase_009994_2);

#define VkglTestCase_009995_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009995_2 "layout.random.vector_types.6"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009995, VkglTestCase_009995_1, VkglTestCase_009995_2);

#define VkglTestCase_009996_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009996_2 "layout.random.vector_types.7"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009996, VkglTestCase_009996_1, VkglTestCase_009996_2);

#define VkglTestCase_009997_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009997_2 "layout.random.vector_types.8"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009997, VkglTestCase_009997_1, VkglTestCase_009997_2);

#define VkglTestCase_009998_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009998_2 "layout.random.vector_types.9"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009998, VkglTestCase_009998_1, VkglTestCase_009998_2);

#define VkglTestCase_009999_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009999_2 "layout.random.vector_types.10"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009999, VkglTestCase_009999_1, VkglTestCase_009999_2);

#define VkglTestCase_010000_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010000_2 "layout.random.vector_types.11"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010000, VkglTestCase_010000_1, VkglTestCase_010000_2);

#define VkglTestCase_010001_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010001_2 "layout.random.vector_types.12"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010001, VkglTestCase_010001_1, VkglTestCase_010001_2);

#define VkglTestCase_010002_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010002_2 "layout.random.vector_types.13"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010002, VkglTestCase_010002_1, VkglTestCase_010002_2);

#define VkglTestCase_010003_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010003_2 "layout.random.vector_types.14"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010003, VkglTestCase_010003_1, VkglTestCase_010003_2);

#define VkglTestCase_010004_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010004_2 "layout.random.vector_types.15"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010004, VkglTestCase_010004_1, VkglTestCase_010004_2);

#define VkglTestCase_010005_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010005_2 "layout.random.vector_types.16"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010005, VkglTestCase_010005_1, VkglTestCase_010005_2);

#define VkglTestCase_010006_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010006_2 "layout.random.vector_types.17"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010006, VkglTestCase_010006_1, VkglTestCase_010006_2);

#define VkglTestCase_010007_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010007_2 "layout.random.vector_types.18"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010007, VkglTestCase_010007_1, VkglTestCase_010007_2);

#define VkglTestCase_010008_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010008_2 "layout.random.vector_types.19"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010008, VkglTestCase_010008_1, VkglTestCase_010008_2);

#define VkglTestCase_010009_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010009_2 "layout.random.vector_types.20"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010009, VkglTestCase_010009_1, VkglTestCase_010009_2);

#define VkglTestCase_010010_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010010_2 "layout.random.vector_types.21"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010010, VkglTestCase_010010_1, VkglTestCase_010010_2);

#define VkglTestCase_010011_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010011_2 "layout.random.vector_types.22"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010011, VkglTestCase_010011_1, VkglTestCase_010011_2);

#define VkglTestCase_010012_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010012_2 "layout.random.vector_types.23"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010012, VkglTestCase_010012_1, VkglTestCase_010012_2);

#define VkglTestCase_010013_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010013_2 "layout.random.vector_types.24"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010013, VkglTestCase_010013_1, VkglTestCase_010013_2);
