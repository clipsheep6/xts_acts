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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010657_1 "dEQP-GLES2.functional.texture.m"
#define VkglTestCase_010657_2 "ipmap.cube.basic.linear_nearest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010657, VkglTestCase_010657_1, VkglTestCase_010657_2);

#define VkglTestCase_010658_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010658_2 "mipmap.cube.basic.linear_linear"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010658, VkglTestCase_010658_1, VkglTestCase_010658_2);
