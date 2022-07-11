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

#define VkglTestCase_011662_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011662_2 "tore.3d.image_size.readonly_32x32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011662, VkglTestCase_011662_1, VkglTestCase_011662_2);

#define VkglTestCase_011663_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011663_2 "tore.3d.image_size.readonly_12x34x56"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011663, VkglTestCase_011663_1, VkglTestCase_011663_2);

#define VkglTestCase_011664_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011664_2 "store.3d.image_size.readonly_1x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011664, VkglTestCase_011664_1, VkglTestCase_011664_2);

#define VkglTestCase_011665_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011665_2 "store.3d.image_size.readonly_7x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011665, VkglTestCase_011665_1, VkglTestCase_011665_2);

#define VkglTestCase_011666_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011666_2 "ore.3d.image_size.writeonly_32x32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011666, VkglTestCase_011666_1, VkglTestCase_011666_2);

#define VkglTestCase_011667_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011667_2 "ore.3d.image_size.writeonly_12x34x56"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011667, VkglTestCase_011667_1, VkglTestCase_011667_2);

#define VkglTestCase_011668_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011668_2 "store.3d.image_size.writeonly_1x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011668, VkglTestCase_011668_1, VkglTestCase_011668_2);

#define VkglTestCase_011669_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011669_2 "store.3d.image_size.writeonly_7x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011669, VkglTestCase_011669_1, VkglTestCase_011669_2);

#define VkglTestCase_011670_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011670_2 "3d.image_size.readonly_writeonly_32x32x32"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011670, VkglTestCase_011670_1, VkglTestCase_011670_2);

#define VkglTestCase_011671_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011671_2 "3d.image_size.readonly_writeonly_12x34x56"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011671, VkglTestCase_011671_1, VkglTestCase_011671_2);

#define VkglTestCase_011672_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011672_2 ".3d.image_size.readonly_writeonly_1x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011672, VkglTestCase_011672_1, VkglTestCase_011672_2);

#define VkglTestCase_011673_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011673_2 ".3d.image_size.readonly_writeonly_7x1x1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011673, VkglTestCase_011673_1, VkglTestCase_011673_2);
