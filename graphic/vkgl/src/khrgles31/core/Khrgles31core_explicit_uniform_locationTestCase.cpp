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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002131_1 "KHR-GLES31.core.explicit_u"
#define VkglTestCase_002131_2 "niform_location.uniform-loc"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002131, VkglTestCase_002131_1, VkglTestCase_002131_2);

#define VkglTestCase_002132_1 "KHR-GLES31.core.explicit_uniform"
#define VkglTestCase_002132_2 "_location.uniform-loc-nondecimal"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002132, VkglTestCase_002132_1, VkglTestCase_002132_2);

#define VkglTestCase_002133_1 "KHR-GLES31.core.explicit_uniform"
#define VkglTestCase_002133_2 "_location.uniform-loc-all-stages"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002133, VkglTestCase_002133_1, VkglTestCase_002133_2);

#define VkglTestCase_002134_1 "KHR-GLES31.core.explicit_uniform_lo"
#define VkglTestCase_002134_2 "cation.uniform-loc-multiple-uniforms"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002134, VkglTestCase_002134_1, VkglTestCase_002134_2);

#define VkglTestCase_002135_1 "KHR-GLES31.core.explicit_unifor"
#define VkglTestCase_002135_2 "m_location.uniform-loc-types-mix"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002135, VkglTestCase_002135_1, VkglTestCase_002135_2);

#define VkglTestCase_002136_1 "KHR-GLES31.core.explicit_unifor"
#define VkglTestCase_002136_2 "m_location.uniform-loc-types-mat"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002136, VkglTestCase_002136_1, VkglTestCase_002136_2);

#define VkglTestCase_002137_1 "KHR-GLES31.core.explicit_uniform_"
#define VkglTestCase_002137_2 "location.uniform-loc-types-structs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002137, VkglTestCase_002137_1, VkglTestCase_002137_2);

#define VkglTestCase_002138_1 "KHR-GLES31.core.explicit_uniform_l"
#define VkglTestCase_002138_2 "ocation.uniform-loc-types-samplers"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002138, VkglTestCase_002138_1, VkglTestCase_002138_2);

#define VkglTestCase_002139_1 "KHR-GLES31.core.explicit_uniform_lo"
#define VkglTestCase_002139_2 "cation.uniform-loc-arrays-nonspaced"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002139, VkglTestCase_002139_1, VkglTestCase_002139_2);

#define VkglTestCase_002140_1 "KHR-GLES31.core.explicit_uniform_"
#define VkglTestCase_002140_2 "location.uniform-loc-arrays-spaced"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002140, VkglTestCase_002140_1, VkglTestCase_002140_2);

#define VkglTestCase_002141_1 "KHR-GLES31.core.explicit_uniform_lo"
#define VkglTestCase_002141_2 "cation.uniform-loc-arrays-of-arrays"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002141, VkglTestCase_002141_1, VkglTestCase_002141_2);

#define VkglTestCase_002142_1 "KHR-GLES31.core.explicit_uniform_lo"
#define VkglTestCase_002142_2 "cation.uniform-loc-mix-with-implicit"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002142, VkglTestCase_002142_1, VkglTestCase_002142_2);

#define VkglTestCase_002143_1 "KHR-GLES31.core.explicit_uniform_loc"
#define VkglTestCase_002143_2 "ation.uniform-loc-mix-with-implicit2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002143, VkglTestCase_002143_1, VkglTestCase_002143_2);

#define VkglTestCase_002144_1 "KHR-GLES31.core.explicit_uniform_loc"
#define VkglTestCase_002144_2 "ation.uniform-loc-mix-with-implicit3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002144, VkglTestCase_002144_1, VkglTestCase_002144_2);

#define VkglTestCase_002145_1 "KHR-GLES31.core.explicit_uniform_loca"
#define VkglTestCase_002145_2 "tion.uniform-loc-mix-with-implicit-max"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002145, VkglTestCase_002145_1, VkglTestCase_002145_2);

#define VkglTestCase_002146_1 "KHR-GLES31.core.explicit_uniform_locatio"
#define VkglTestCase_002146_2 "n.uniform-loc-mix-with-implicit-max-array"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002146, VkglTestCase_002146_1, VkglTestCase_002146_2);

#define VkglTestCase_002147_1 "KHR-GLES31.core.explicit_uniform_locat"
#define VkglTestCase_002147_2 "ion.uniform-loc-implicit-in-some-stages"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002147, VkglTestCase_002147_1, VkglTestCase_002147_2);

#define VkglTestCase_002148_1 "KHR-GLES31.core.explicit_uniform_locati"
#define VkglTestCase_002148_2 "on.uniform-loc-implicit-in-some-stages2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002148, VkglTestCase_002148_1, VkglTestCase_002148_2);

#define VkglTestCase_002149_1 "KHR-GLES31.core.explicit_uniform_locati"
#define VkglTestCase_002149_2 "on.uniform-loc-implicit-in-some-stages3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002149, VkglTestCase_002149_1, VkglTestCase_002149_2);

#define VkglTestCase_002150_1 "KHR-GLES31.core.explicit_uniform_location.un"
#define VkglTestCase_002150_2 "iform-loc-negative-compile-non-number-literal"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002150, VkglTestCase_002150_1, VkglTestCase_002150_2);

#define VkglTestCase_002151_1 "KHR-GLES31.core.explicit_uniform_location"
#define VkglTestCase_002151_2 ".uniform-loc-negative-compile-nonconst-loc"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002151, VkglTestCase_002151_1, VkglTestCase_002151_2);

#define VkglTestCase_002152_1 "KHR-GLES31.core.explicit_uniform_location."
#define VkglTestCase_002152_2 "uniform-loc-negative-link-location-reused1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002152, VkglTestCase_002152_1, VkglTestCase_002152_2);

#define VkglTestCase_002153_1 "KHR-GLES31.core.explicit_uniform_location."
#define VkglTestCase_002153_2 "uniform-loc-negative-link-location-reused2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002153, VkglTestCase_002153_1, VkglTestCase_002153_2);

#define VkglTestCase_002154_1 "KHR-GLES31.core.explicit_uniform_locatio"
#define VkglTestCase_002154_2 "n.uniform-loc-negative-link-max-location"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002154, VkglTestCase_002154_1, VkglTestCase_002154_2);

#define VkglTestCase_002155_1 "KHR-GLES31.core.explicit_uniform_location.un"
#define VkglTestCase_002155_2 "iform-loc-negative-link-max-num-of-locations"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002155, VkglTestCase_002155_1, VkglTestCase_002155_2);
