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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024847_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024847_2 "g.image.image3d.vertex_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024847, VkglTestCase_024847_1, VkglTestCase_024847_2);

#define VkglTestCase_024848_1 "dEQP-GLES31.functional.layout_bindi"
#define VkglTestCase_024848_2 "ng.image.image3d.vertex_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024848, VkglTestCase_024848_1, VkglTestCase_024848_2);

#define VkglTestCase_024849_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024849_2 ".image.image3d.vertex_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024849, VkglTestCase_024849_1, VkglTestCase_024849_2);

#define VkglTestCase_024850_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024850_2 "g.image.image3d.vertex_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024850, VkglTestCase_024850_1, VkglTestCase_024850_2);

#define VkglTestCase_024851_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024851_2 "image.image3d.vertex_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024851, VkglTestCase_024851_1, VkglTestCase_024851_2);

#define VkglTestCase_024852_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024852_2 ".image.image3d.fragment_binding_single"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024852, VkglTestCase_024852_1, VkglTestCase_024852_2);

#define VkglTestCase_024853_1 "dEQP-GLES31.functional.layout_bindin"
#define VkglTestCase_024853_2 "g.image.image3d.fragment_binding_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024853, VkglTestCase_024853_1, VkglTestCase_024853_2);

#define VkglTestCase_024854_1 "dEQP-GLES31.functional.layout_binding."
#define VkglTestCase_024854_2 "image.image3d.fragment_binding_multiple"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024854, VkglTestCase_024854_1, VkglTestCase_024854_2);

#define VkglTestCase_024855_1 "dEQP-GLES31.functional.layout_binding"
#define VkglTestCase_024855_2 ".image.image3d.fragment_binding_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024855, VkglTestCase_024855_1, VkglTestCase_024855_2);

#define VkglTestCase_024856_1 "dEQP-GLES31.functional.layout_binding.i"
#define VkglTestCase_024856_2 "mage.image3d.fragment_binding_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024856, VkglTestCase_024856_1, VkglTestCase_024856_2);

#define VkglTestCase_024947_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024947_2 "tive.image.image3d.vertex_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024947, VkglTestCase_024947_1, VkglTestCase_024947_2);

#define VkglTestCase_024948_1 "dEQP-GLES31.functional.layout_binding.negat"
#define VkglTestCase_024948_2 "ive.image.image3d.fragment_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024948, VkglTestCase_024948_1, VkglTestCase_024948_2);

#define VkglTestCase_024949_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024949_2 "e.image.image3d.tess_control_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024949, VkglTestCase_024949_1, VkglTestCase_024949_2);

#define VkglTestCase_024950_1 "dEQP-GLES31.functional.layout_binding.negative"
#define VkglTestCase_024950_2 ".image.image3d.tess_evaluation_binding_over_max"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024950, VkglTestCase_024950_1, VkglTestCase_024950_2);

#define VkglTestCase_024951_1 "dEQP-GLES31.functional.layout_binding.n"
#define VkglTestCase_024951_2 "egative.image.image3d.vertex_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024951, VkglTestCase_024951_1, VkglTestCase_024951_2);

#define VkglTestCase_024952_1 "dEQP-GLES31.functional.layout_binding.ne"
#define VkglTestCase_024952_2 "gative.image.image3d.fragment_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024952, VkglTestCase_024952_1, VkglTestCase_024952_2);

#define VkglTestCase_024953_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024953_2 "tive.image.image3d.tess_control_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024953, VkglTestCase_024953_1, VkglTestCase_024953_2);

#define VkglTestCase_024954_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024954_2 "ve.image.image3d.tess_evaluation_binding_neg"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024954, VkglTestCase_024954_1, VkglTestCase_024954_2);

#define VkglTestCase_024955_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024955_2 "e.image.image3d.vertex_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024955, VkglTestCase_024955_1, VkglTestCase_024955_2);

#define VkglTestCase_024956_1 "dEQP-GLES31.functional.layout_binding.negative"
#define VkglTestCase_024956_2 ".image.image3d.fragment_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024956, VkglTestCase_024956_1, VkglTestCase_024956_2);

#define VkglTestCase_024957_1 "dEQP-GLES31.functional.layout_binding.negative.i"
#define VkglTestCase_024957_2 "mage.image3d.tess_control_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024957, VkglTestCase_024957_1, VkglTestCase_024957_2);

#define VkglTestCase_024958_1 "dEQP-GLES31.functional.layout_binding.negative.im"
#define VkglTestCase_024958_2 "age.image3d.tess_evaluation_binding_over_max_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024958, VkglTestCase_024958_1, VkglTestCase_024958_2);

#define VkglTestCase_024959_1 "dEQP-GLES31.functional.layout_binding.nega"
#define VkglTestCase_024959_2 "tive.image.image3d.vertex_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024959, VkglTestCase_024959_1, VkglTestCase_024959_2);

#define VkglTestCase_024960_1 "dEQP-GLES31.functional.layout_binding.negat"
#define VkglTestCase_024960_2 "ive.image.image3d.fragment_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024960, VkglTestCase_024960_1, VkglTestCase_024960_2);

#define VkglTestCase_024961_1 "dEQP-GLES31.functional.layout_binding.negativ"
#define VkglTestCase_024961_2 "e.image.image3d.tess_control_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024961, VkglTestCase_024961_1, VkglTestCase_024961_2);

#define VkglTestCase_024962_1 "dEQP-GLES31.functional.layout_binding.negative."
#define VkglTestCase_024962_2 "image.image3d.tess_evaluation_binding_neg_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024962, VkglTestCase_024962_1, VkglTestCase_024962_2);

#define VkglTestCase_024963_1 "dEQP-GLES31.functional.layout_binding.neg"
#define VkglTestCase_024963_2 "ative.image.image3d.binding_contradictory"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024963, VkglTestCase_024963_1, VkglTestCase_024963_2);

#define VkglTestCase_024964_1 "dEQP-GLES31.functional.layout_binding.negati"
#define VkglTestCase_024964_2 "ve.image.image3d.binding_contradictory_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024964, VkglTestCase_024964_1, VkglTestCase_024964_2);
