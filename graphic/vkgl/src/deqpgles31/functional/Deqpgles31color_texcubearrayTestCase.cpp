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
#include "../ActsDeqpgles310020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019930_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019930_2 ".color.texcubearray.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019930, VkglTestCase_019930_1, VkglTestCase_019930_2);

#define VkglTestCase_019931_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019931_2 "color.texcubearray.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019931, VkglTestCase_019931_1, VkglTestCase_019931_2);

#define VkglTestCase_019932_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019932_2 ".color.texcubearray.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019932, VkglTestCase_019932_1, VkglTestCase_019932_2);

#define VkglTestCase_019933_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019933_2 "color.texcubearray.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019933, VkglTestCase_019933_1, VkglTestCase_019933_2);

#define VkglTestCase_019934_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019934_2 "o.color.texcubearray.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019934, VkglTestCase_019934_1, VkglTestCase_019934_2);

#define VkglTestCase_019935_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019935_2 ".color.texcubearray.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019935, VkglTestCase_019935_1, VkglTestCase_019935_2);

#define VkglTestCase_019936_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019936_2 ".color.texcubearray.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019936, VkglTestCase_019936_1, VkglTestCase_019936_2);

#define VkglTestCase_019937_1 "dEQP-GLES31.functional.fbo.co"
#define VkglTestCase_019937_2 "lor.texcubearray.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019937, VkglTestCase_019937_1, VkglTestCase_019937_2);

#define VkglTestCase_019938_1 "dEQP-GLES31.functional.fbo."
#define VkglTestCase_019938_2 "color.texcubearray.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019938, VkglTestCase_019938_1, VkglTestCase_019938_2);

#define VkglTestCase_019939_1 "dEQP-GLES31.functional.fbo.c"
#define VkglTestCase_019939_2 "olor.texcubearray.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019939, VkglTestCase_019939_1, VkglTestCase_019939_2);

#define VkglTestCase_019940_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019940_2 "o.color.texcubearray.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019940, VkglTestCase_019940_1, VkglTestCase_019940_2);

#define VkglTestCase_019941_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019941_2 ".color.texcubearray.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019941, VkglTestCase_019941_1, VkglTestCase_019941_2);

#define VkglTestCase_019942_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019942_2 "o.color.texcubearray.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019942, VkglTestCase_019942_1, VkglTestCase_019942_2);

#define VkglTestCase_019943_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019943_2 ".color.texcubearray.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019943, VkglTestCase_019943_1, VkglTestCase_019943_2);

#define VkglTestCase_019944_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019944_2 "o.color.texcubearray.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019944, VkglTestCase_019944_1, VkglTestCase_019944_2);

#define VkglTestCase_019945_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019945_2 ".color.texcubearray.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019945, VkglTestCase_019945_1, VkglTestCase_019945_2);

#define VkglTestCase_019946_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019946_2 "o.color.texcubearray.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019946, VkglTestCase_019946_1, VkglTestCase_019946_2);

#define VkglTestCase_019947_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019947_2 ".color.texcubearray.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019947, VkglTestCase_019947_1, VkglTestCase_019947_2);

#define VkglTestCase_019948_1 "dEQP-GLES31.functional.f"
#define VkglTestCase_019948_2 "bo.color.texcubearray.rg8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019948, VkglTestCase_019948_1, VkglTestCase_019948_2);

#define VkglTestCase_019949_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019949_2 "o.color.texcubearray.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019949, VkglTestCase_019949_1, VkglTestCase_019949_2);

#define VkglTestCase_019950_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019950_2 "o.color.texcubearray.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019950, VkglTestCase_019950_1, VkglTestCase_019950_2);

#define VkglTestCase_019951_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019951_2 "o.color.texcubearray.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019951, VkglTestCase_019951_1, VkglTestCase_019951_2);

#define VkglTestCase_019952_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019952_2 "o.color.texcubearray.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019952, VkglTestCase_019952_1, VkglTestCase_019952_2);

#define VkglTestCase_019953_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019953_2 "o.color.texcubearray.r16i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019953, VkglTestCase_019953_1, VkglTestCase_019953_2);

#define VkglTestCase_019954_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019954_2 "o.color.texcubearray.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019954, VkglTestCase_019954_1, VkglTestCase_019954_2);

#define VkglTestCase_019955_1 "dEQP-GLES31.functional.f"
#define VkglTestCase_019955_2 "bo.color.texcubearray.r8"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019955, VkglTestCase_019955_1, VkglTestCase_019955_2);

#define VkglTestCase_019956_1 "dEQP-GLES31.functional.f"
#define VkglTestCase_019956_2 "bo.color.texcubearray.r8i"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019956, VkglTestCase_019956_1, VkglTestCase_019956_2);

#define VkglTestCase_019957_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019957_2 "o.color.texcubearray.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019957, VkglTestCase_019957_1, VkglTestCase_019957_2);

#define VkglTestCase_019958_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019958_2 ".color.texcubearray.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019958, VkglTestCase_019958_1, VkglTestCase_019958_2);

#define VkglTestCase_019959_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019959_2 ".color.texcubearray.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019959, VkglTestCase_019959_1, VkglTestCase_019959_2);

#define VkglTestCase_019960_1 "dEQP-GLES31.functional.fbo.col"
#define VkglTestCase_019960_2 "or.texcubearray.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019960, VkglTestCase_019960_1, VkglTestCase_019960_2);

#define VkglTestCase_019961_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019961_2 "o.color.texcubearray.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019961, VkglTestCase_019961_1, VkglTestCase_019961_2);

#define VkglTestCase_019962_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019962_2 "o.color.texcubearray.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019962, VkglTestCase_019962_1, VkglTestCase_019962_2);

#define VkglTestCase_019963_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019963_2 "o.color.texcubearray.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019963, VkglTestCase_019963_1, VkglTestCase_019963_2);

#define VkglTestCase_019964_1 "dEQP-GLES31.functional.fb"
#define VkglTestCase_019964_2 "o.color.texcubearray.r16f"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019964, VkglTestCase_019964_1, VkglTestCase_019964_2);

#define VkglTestCase_019965_1 "dEQP-GLES31.functional.fbo"
#define VkglTestCase_019965_2 ".color.texcubearray.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles310020TestSuite, TestCase_019965, VkglTestCase_019965_1, VkglTestCase_019965_2);
