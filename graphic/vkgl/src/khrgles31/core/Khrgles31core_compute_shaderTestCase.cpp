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
#include "../ActsKhrgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001964_1 "KHR-GLES31.core.comput"
#define VkglTestCase_001964_2 "e_shader.simple-compute"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001964, VkglTestCase_001964_1, VkglTestCase_001964_2);

#define VkglTestCase_001965_1 "KHR-GLES31.core.comput"
#define VkglTestCase_001965_2 "e_shader.one-work-group"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001965, VkglTestCase_001965_1, VkglTestCase_001965_2);

#define VkglTestCase_001966_1 "KHR-GLES31.core.compu"
#define VkglTestCase_001966_2 "te_shader.resource-ubo"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001966, VkglTestCase_001966_1, VkglTestCase_001966_2);

#define VkglTestCase_001967_1 "KHR-GLES31.core.compute"
#define VkglTestCase_001967_2 "_shader.resource-texture"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001967, VkglTestCase_001967_1, VkglTestCase_001967_2);

#define VkglTestCase_001968_1 "KHR-GLES31.core.comput"
#define VkglTestCase_001968_2 "e_shader.resource-image"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001968, VkglTestCase_001968_1, VkglTestCase_001968_2);

#define VkglTestCase_001969_1 "KHR-GLES31.core.compute_sha"
#define VkglTestCase_001969_2 "der.resource-atomic-counter"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001969, VkglTestCase_001969_1, VkglTestCase_001969_2);

#define VkglTestCase_001970_1 "KHR-GLES31.core.compute"
#define VkglTestCase_001970_2 "_shader.resource-uniform"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001970, VkglTestCase_001970_1, VkglTestCase_001970_2);

#define VkglTestCase_001971_1 "KHR-GLES31.core.compute_"
#define VkglTestCase_001971_2 "shader.built-in-variables"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001971, VkglTestCase_001971_1, VkglTestCase_001971_2);

#define VkglTestCase_001972_1 "KHR-GLES31.core.c"
#define VkglTestCase_001972_2 "ompute_shader.max"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001972, VkglTestCase_001972_1, VkglTestCase_001972_2);

#define VkglTestCase_001973_1 "KHR-GLES31.core.compute"
#define VkglTestCase_001973_2 "_shader.work-group-size"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001973, VkglTestCase_001973_1, VkglTestCase_001973_2);

#define VkglTestCase_001974_1 "KHR-GLES31.core.compute"
#define VkglTestCase_001974_2 "_shader.build-separable"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001974, VkglTestCase_001974_1, VkglTestCase_001974_2);

#define VkglTestCase_001975_1 "KHR-GLES31.core.comput"
#define VkglTestCase_001975_2 "e_shader.shared-simple"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001975, VkglTestCase_001975_1, VkglTestCase_001975_2);

#define VkglTestCase_001976_1 "KHR-GLES31.core.comput"
#define VkglTestCase_001976_2 "e_shader.shared-struct"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001976, VkglTestCase_001976_1, VkglTestCase_001976_2);

#define VkglTestCase_001977_1 "KHR-GLES31.core.compute_"
#define VkglTestCase_001977_2 "shader.dispatch-indirect"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001977, VkglTestCase_001977_1, VkglTestCase_001977_2);

#define VkglTestCase_001978_1 "KHR-GLES31.core.compute_s"
#define VkglTestCase_001978_2 "hader.sso-compute-pipeline"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001978, VkglTestCase_001978_1, VkglTestCase_001978_2);

#define VkglTestCase_001979_1 "KHR-GLES31.core.comp"
#define VkglTestCase_001979_2 "ute_shader.sso-case2"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001979, VkglTestCase_001979_1, VkglTestCase_001979_2);

#define VkglTestCase_001980_1 "KHR-GLES31.core.comp"
#define VkglTestCase_001980_2 "ute_shader.sso-case3"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001980, VkglTestCase_001980_1, VkglTestCase_001980_2);

#define VkglTestCase_001981_1 "KHR-GLES31.core.compu"
#define VkglTestCase_001981_2 "te_shader.atomic-case1"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001981, VkglTestCase_001981_1, VkglTestCase_001981_2);

#define VkglTestCase_001982_1 "KHR-GLES31.core.compu"
#define VkglTestCase_001982_2 "te_shader.atomic-case2"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001982, VkglTestCase_001982_1, VkglTestCase_001982_2);

#define VkglTestCase_001983_1 "KHR-GLES31.core.compu"
#define VkglTestCase_001983_2 "te_shader.atomic-case3"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001983, VkglTestCase_001983_1, VkglTestCase_001983_2);

#define VkglTestCase_001984_1 "KHR-GLES31.core.comp"
#define VkglTestCase_001984_2 "ute_shader.copy-image"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001984, VkglTestCase_001984_1, VkglTestCase_001984_2);

#define VkglTestCase_001985_1 "KHR-GLES31.core.compute"
#define VkglTestCase_001985_2 "_shader.pipeline-pre-vs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001985, VkglTestCase_001985_1, VkglTestCase_001985_2);

#define VkglTestCase_001986_1 "KHR-GLES31.core.compute_shad"
#define VkglTestCase_001986_2 "er.pipeline-gen-draw-commands"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001986, VkglTestCase_001986_1, VkglTestCase_001986_2);

#define VkglTestCase_001987_1 "KHR-GLES31.core.compute_sh"
#define VkglTestCase_001987_2 "ader.pipeline-compute-chain"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001987, VkglTestCase_001987_1, VkglTestCase_001987_2);

#define VkglTestCase_001988_1 "KHR-GLES31.core.compute"
#define VkglTestCase_001988_2 "_shader.pipeline-post-fs"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001988, VkglTestCase_001988_1, VkglTestCase_001988_2);

#define VkglTestCase_001989_1 "KHR-GLES31.core.compute_"
#define VkglTestCase_001989_2 "shader.pipeline-post-xfb"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001989, VkglTestCase_001989_1, VkglTestCase_001989_2);

#define VkglTestCase_001990_1 "KHR-GLES31.core.compute"
#define VkglTestCase_001990_2 "_shader.shared-indexing"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001990, VkglTestCase_001990_1, VkglTestCase_001990_2);

#define VkglTestCase_001991_1 "KHR-GLES31.core.comp"
#define VkglTestCase_001991_2 "ute_shader.shared-max"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001991, VkglTestCase_001991_1, VkglTestCase_001991_2);

#define VkglTestCase_001992_1 "KHR-GLES31.core.comput"
#define VkglTestCase_001992_2 "e_shader.resources-max"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001992, VkglTestCase_001992_1, VkglTestCase_001992_2);

#define VkglTestCase_001993_1 "KHR-GLES31.core.compute_sh"
#define VkglTestCase_001993_2 "ader.work-group-size-usage"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001993, VkglTestCase_001993_1, VkglTestCase_001993_2);

#define VkglTestCase_001994_1 "KHR-GLES31.core.compute_sh"
#define VkglTestCase_001994_2 "ader.api-no-active-program"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001994, VkglTestCase_001994_1, VkglTestCase_001994_2);

#define VkglTestCase_001995_1 "KHR-GLES31.core.compute_s"
#define VkglTestCase_001995_2 "hader.api-work-group-count"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001995, VkglTestCase_001995_1, VkglTestCase_001995_2);

#define VkglTestCase_001996_1 "KHR-GLES31.core.compu"
#define VkglTestCase_001996_2 "te_shader.api-indirect"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001996, VkglTestCase_001996_1, VkglTestCase_001996_2);

#define VkglTestCase_001997_1 "KHR-GLES31.core.compu"
#define VkglTestCase_001997_2 "te_shader.api-program"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001997, VkglTestCase_001997_1, VkglTestCase_001997_2);

#define VkglTestCase_001998_1 "KHR-GLES31.core.compute_sha"
#define VkglTestCase_001998_2 "der.glsl-compile-time-errors"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001998, VkglTestCase_001998_1, VkglTestCase_001998_2);

#define VkglTestCase_001999_1 "KHR-GLES31.core.compute_sh"
#define VkglTestCase_001999_2 "ader.glsl-link-time-errors"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001999, VkglTestCase_001999_1, VkglTestCase_001999_2);

#define VkglTestCase_002000_1 "KHR-GLES31.core.compute_"
#define VkglTestCase_002000_2 "shader.api-attach-shader"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_002000, VkglTestCase_002000_1, VkglTestCase_002000_2);
