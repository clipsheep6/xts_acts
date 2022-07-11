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

#define VkglTestCase_010214_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010214_2 "m.nested_structs_arrays_instance_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010214, VkglTestCase_010214_1, VkglTestCase_010214_2);

#define VkglTestCase_010215_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010215_2 "m.nested_structs_arrays_instance_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010215, VkglTestCase_010215_1, VkglTestCase_010215_2);

#define VkglTestCase_010216_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010216_2 "m.nested_structs_arrays_instance_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010216, VkglTestCase_010216_1, VkglTestCase_010216_2);

#define VkglTestCase_010217_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010217_2 "m.nested_structs_arrays_instance_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010217, VkglTestCase_010217_1, VkglTestCase_010217_2);

#define VkglTestCase_010218_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010218_2 "m.nested_structs_arrays_instance_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010218, VkglTestCase_010218_1, VkglTestCase_010218_2);

#define VkglTestCase_010219_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010219_2 "m.nested_structs_arrays_instance_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010219, VkglTestCase_010219_1, VkglTestCase_010219_2);

#define VkglTestCase_010220_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010220_2 "m.nested_structs_arrays_instance_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010220, VkglTestCase_010220_1, VkglTestCase_010220_2);

#define VkglTestCase_010221_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010221_2 "m.nested_structs_arrays_instance_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010221, VkglTestCase_010221_1, VkglTestCase_010221_2);

#define VkglTestCase_010222_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010222_2 "m.nested_structs_arrays_instance_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010222, VkglTestCase_010222_1, VkglTestCase_010222_2);

#define VkglTestCase_010223_1 "dEQP-GLES31.functional.ssbo.layout.rando"
#define VkglTestCase_010223_2 "m.nested_structs_arrays_instance_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010223, VkglTestCase_010223_1, VkglTestCase_010223_2);

#define VkglTestCase_010224_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010224_2 ".nested_structs_arrays_instance_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010224, VkglTestCase_010224_1, VkglTestCase_010224_2);

#define VkglTestCase_010225_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010225_2 ".nested_structs_arrays_instance_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010225, VkglTestCase_010225_1, VkglTestCase_010225_2);

#define VkglTestCase_010226_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010226_2 ".nested_structs_arrays_instance_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010226, VkglTestCase_010226_1, VkglTestCase_010226_2);

#define VkglTestCase_010227_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010227_2 ".nested_structs_arrays_instance_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010227, VkglTestCase_010227_1, VkglTestCase_010227_2);

#define VkglTestCase_010228_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010228_2 ".nested_structs_arrays_instance_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010228, VkglTestCase_010228_1, VkglTestCase_010228_2);

#define VkglTestCase_010229_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010229_2 ".nested_structs_arrays_instance_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010229, VkglTestCase_010229_1, VkglTestCase_010229_2);

#define VkglTestCase_010230_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010230_2 ".nested_structs_arrays_instance_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010230, VkglTestCase_010230_1, VkglTestCase_010230_2);

#define VkglTestCase_010231_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010231_2 ".nested_structs_arrays_instance_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010231, VkglTestCase_010231_1, VkglTestCase_010231_2);

#define VkglTestCase_010232_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010232_2 ".nested_structs_arrays_instance_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010232, VkglTestCase_010232_1, VkglTestCase_010232_2);

#define VkglTestCase_010233_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010233_2 ".nested_structs_arrays_instance_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010233, VkglTestCase_010233_1, VkglTestCase_010233_2);

#define VkglTestCase_010234_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010234_2 ".nested_structs_arrays_instance_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010234, VkglTestCase_010234_1, VkglTestCase_010234_2);

#define VkglTestCase_010235_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010235_2 ".nested_structs_arrays_instance_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010235, VkglTestCase_010235_1, VkglTestCase_010235_2);

#define VkglTestCase_010236_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010236_2 ".nested_structs_arrays_instance_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010236, VkglTestCase_010236_1, VkglTestCase_010236_2);

#define VkglTestCase_010237_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010237_2 ".nested_structs_arrays_instance_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010237, VkglTestCase_010237_1, VkglTestCase_010237_2);

#define VkglTestCase_010238_1 "dEQP-GLES31.functional.ssbo.layout.random"
#define VkglTestCase_010238_2 ".nested_structs_arrays_instance_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010238, VkglTestCase_010238_1, VkglTestCase_010238_2);
