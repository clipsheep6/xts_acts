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

#define VkglTestCase_009964_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009964_2 "layout.random.scalar_types.0"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009964, VkglTestCase_009964_1, VkglTestCase_009964_2);

#define VkglTestCase_009965_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009965_2 "layout.random.scalar_types.1"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009965, VkglTestCase_009965_1, VkglTestCase_009965_2);

#define VkglTestCase_009966_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009966_2 "layout.random.scalar_types.2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009966, VkglTestCase_009966_1, VkglTestCase_009966_2);

#define VkglTestCase_009967_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009967_2 "layout.random.scalar_types.3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009967, VkglTestCase_009967_1, VkglTestCase_009967_2);

#define VkglTestCase_009968_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009968_2 "layout.random.scalar_types.4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009968, VkglTestCase_009968_1, VkglTestCase_009968_2);

#define VkglTestCase_009969_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009969_2 "layout.random.scalar_types.5"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009969, VkglTestCase_009969_1, VkglTestCase_009969_2);

#define VkglTestCase_009970_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009970_2 "layout.random.scalar_types.6"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009970, VkglTestCase_009970_1, VkglTestCase_009970_2);

#define VkglTestCase_009971_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009971_2 "layout.random.scalar_types.7"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009971, VkglTestCase_009971_1, VkglTestCase_009971_2);

#define VkglTestCase_009972_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009972_2 "layout.random.scalar_types.8"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009972, VkglTestCase_009972_1, VkglTestCase_009972_2);

#define VkglTestCase_009973_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009973_2 "layout.random.scalar_types.9"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009973, VkglTestCase_009973_1, VkglTestCase_009973_2);

#define VkglTestCase_009974_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009974_2 "layout.random.scalar_types.10"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009974, VkglTestCase_009974_1, VkglTestCase_009974_2);

#define VkglTestCase_009975_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009975_2 "layout.random.scalar_types.11"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009975, VkglTestCase_009975_1, VkglTestCase_009975_2);

#define VkglTestCase_009976_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009976_2 "layout.random.scalar_types.12"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009976, VkglTestCase_009976_1, VkglTestCase_009976_2);

#define VkglTestCase_009977_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009977_2 "layout.random.scalar_types.13"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009977, VkglTestCase_009977_1, VkglTestCase_009977_2);

#define VkglTestCase_009978_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009978_2 "layout.random.scalar_types.14"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009978, VkglTestCase_009978_1, VkglTestCase_009978_2);

#define VkglTestCase_009979_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009979_2 "layout.random.scalar_types.15"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009979, VkglTestCase_009979_1, VkglTestCase_009979_2);

#define VkglTestCase_009980_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009980_2 "layout.random.scalar_types.16"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009980, VkglTestCase_009980_1, VkglTestCase_009980_2);

#define VkglTestCase_009981_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009981_2 "layout.random.scalar_types.17"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009981, VkglTestCase_009981_1, VkglTestCase_009981_2);

#define VkglTestCase_009982_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009982_2 "layout.random.scalar_types.18"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009982, VkglTestCase_009982_1, VkglTestCase_009982_2);

#define VkglTestCase_009983_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009983_2 "layout.random.scalar_types.19"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009983, VkglTestCase_009983_1, VkglTestCase_009983_2);

#define VkglTestCase_009984_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009984_2 "layout.random.scalar_types.20"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009984, VkglTestCase_009984_1, VkglTestCase_009984_2);

#define VkglTestCase_009985_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009985_2 "layout.random.scalar_types.21"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009985, VkglTestCase_009985_1, VkglTestCase_009985_2);

#define VkglTestCase_009986_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009986_2 "layout.random.scalar_types.22"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009986, VkglTestCase_009986_1, VkglTestCase_009986_2);

#define VkglTestCase_009987_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009987_2 "layout.random.scalar_types.23"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009987, VkglTestCase_009987_1, VkglTestCase_009987_2);

#define VkglTestCase_009988_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_009988_2 "layout.random.scalar_types.24"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009988, VkglTestCase_009988_1, VkglTestCase_009988_2);
