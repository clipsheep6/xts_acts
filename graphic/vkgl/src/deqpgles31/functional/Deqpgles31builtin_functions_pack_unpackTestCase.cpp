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
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000973_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000973_2 "ctions.pack_unpack.packsnorm4x8_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000973, VkglTestCase_000973_1, VkglTestCase_000973_2);

#define VkglTestCase_000974_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000974_2 "ons.pack_unpack.packsnorm4x8_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000974, VkglTestCase_000974_1, VkglTestCase_000974_2);

#define VkglTestCase_000975_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000975_2 "ions.pack_unpack.packsnorm4x8_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000975, VkglTestCase_000975_1, VkglTestCase_000975_2);

#define VkglTestCase_000976_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000976_2 "tions.pack_unpack.packsnorm4x8_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000976, VkglTestCase_000976_1, VkglTestCase_000976_2);

#define VkglTestCase_000977_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000977_2 "tions.pack_unpack.packsnorm4x8_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000977, VkglTestCase_000977_1, VkglTestCase_000977_2);

#define VkglTestCase_000978_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000978_2 "tions.pack_unpack.packsnorm4x8_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000978, VkglTestCase_000978_1, VkglTestCase_000978_2);

#define VkglTestCase_000979_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000979_2 "ions.pack_unpack.packsnorm4x8_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000979, VkglTestCase_000979_1, VkglTestCase_000979_2);

#define VkglTestCase_000980_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000980_2 "s.pack_unpack.packsnorm4x8_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000980, VkglTestCase_000980_1, VkglTestCase_000980_2);

#define VkglTestCase_000981_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000981_2 "ons.pack_unpack.packsnorm4x8_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000981, VkglTestCase_000981_1, VkglTestCase_000981_2);

#define VkglTestCase_000982_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000982_2 "ons.pack_unpack.packsnorm4x8_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000982, VkglTestCase_000982_1, VkglTestCase_000982_2);

#define VkglTestCase_000983_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000983_2 "ons.pack_unpack.packsnorm4x8_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000983, VkglTestCase_000983_1, VkglTestCase_000983_2);

#define VkglTestCase_000984_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000984_2 "ions.pack_unpack.packsnorm4x8_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000984, VkglTestCase_000984_1, VkglTestCase_000984_2);

#define VkglTestCase_000985_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000985_2 "tions.pack_unpack.packsnorm4x8_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000985, VkglTestCase_000985_1, VkglTestCase_000985_2);

#define VkglTestCase_000986_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000986_2 "ns.pack_unpack.packsnorm4x8_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000986, VkglTestCase_000986_1, VkglTestCase_000986_2);

#define VkglTestCase_000987_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000987_2 "ions.pack_unpack.packsnorm4x8_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000987, VkglTestCase_000987_1, VkglTestCase_000987_2);

#define VkglTestCase_000988_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000988_2 "ions.pack_unpack.packsnorm4x8_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000988, VkglTestCase_000988_1, VkglTestCase_000988_2);

#define VkglTestCase_000989_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000989_2 "ions.pack_unpack.packsnorm4x8_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000989, VkglTestCase_000989_1, VkglTestCase_000989_2);

#define VkglTestCase_000990_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000990_2 "tions.pack_unpack.packsnorm4x8_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000990, VkglTestCase_000990_1, VkglTestCase_000990_2);

#define VkglTestCase_000991_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000991_2 "nctions.pack_unpack.unpacksnorm4x8_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000991, VkglTestCase_000991_1, VkglTestCase_000991_2);

#define VkglTestCase_000992_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000992_2 "ions.pack_unpack.unpacksnorm4x8_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000992, VkglTestCase_000992_1, VkglTestCase_000992_2);

#define VkglTestCase_000993_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000993_2 "ctions.pack_unpack.unpacksnorm4x8_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000993, VkglTestCase_000993_1, VkglTestCase_000993_2);

#define VkglTestCase_000994_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000994_2 "ctions.pack_unpack.unpacksnorm4x8_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000994, VkglTestCase_000994_1, VkglTestCase_000994_2);

#define VkglTestCase_000995_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000995_2 "ctions.pack_unpack.unpacksnorm4x8_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000995, VkglTestCase_000995_1, VkglTestCase_000995_2);

#define VkglTestCase_000996_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000996_2 "nctions.pack_unpack.unpacksnorm4x8_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000996, VkglTestCase_000996_1, VkglTestCase_000996_2);

#define VkglTestCase_000997_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000997_2 "ctions.pack_unpack.packunorm4x8_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000997, VkglTestCase_000997_1, VkglTestCase_000997_2);

#define VkglTestCase_000998_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000998_2 "ons.pack_unpack.packunorm4x8_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000998, VkglTestCase_000998_1, VkglTestCase_000998_2);

#define VkglTestCase_000999_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000999_2 "ions.pack_unpack.packunorm4x8_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000999, VkglTestCase_000999_1, VkglTestCase_000999_2);

#define VkglTestCase_001000_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001000_2 "tions.pack_unpack.packunorm4x8_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001000, VkglTestCase_001000_1, VkglTestCase_001000_2);

#define VkglTestCase_001001_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001001_2 "tions.pack_unpack.packunorm4x8_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001001, VkglTestCase_001001_1, VkglTestCase_001001_2);

#define VkglTestCase_001002_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001002_2 "tions.pack_unpack.packunorm4x8_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001002, VkglTestCase_001002_1, VkglTestCase_001002_2);

#define VkglTestCase_001003_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001003_2 "ions.pack_unpack.packunorm4x8_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001003, VkglTestCase_001003_1, VkglTestCase_001003_2);

#define VkglTestCase_001004_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001004_2 "s.pack_unpack.packunorm4x8_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001004, VkglTestCase_001004_1, VkglTestCase_001004_2);

#define VkglTestCase_001005_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001005_2 "ons.pack_unpack.packunorm4x8_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001005, VkglTestCase_001005_1, VkglTestCase_001005_2);

#define VkglTestCase_001006_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001006_2 "ons.pack_unpack.packunorm4x8_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001006, VkglTestCase_001006_1, VkglTestCase_001006_2);

#define VkglTestCase_001007_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001007_2 "ons.pack_unpack.packunorm4x8_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001007, VkglTestCase_001007_1, VkglTestCase_001007_2);

#define VkglTestCase_001008_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001008_2 "ions.pack_unpack.packunorm4x8_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001008, VkglTestCase_001008_1, VkglTestCase_001008_2);

#define VkglTestCase_001009_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001009_2 "tions.pack_unpack.packunorm4x8_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001009, VkglTestCase_001009_1, VkglTestCase_001009_2);

#define VkglTestCase_001010_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001010_2 "ns.pack_unpack.packunorm4x8_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001010, VkglTestCase_001010_1, VkglTestCase_001010_2);

#define VkglTestCase_001011_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001011_2 "ions.pack_unpack.packunorm4x8_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001011, VkglTestCase_001011_1, VkglTestCase_001011_2);

#define VkglTestCase_001012_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001012_2 "ions.pack_unpack.packunorm4x8_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001012, VkglTestCase_001012_1, VkglTestCase_001012_2);

#define VkglTestCase_001013_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001013_2 "ions.pack_unpack.packunorm4x8_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001013, VkglTestCase_001013_1, VkglTestCase_001013_2);

#define VkglTestCase_001014_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001014_2 "tions.pack_unpack.packunorm4x8_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001014, VkglTestCase_001014_1, VkglTestCase_001014_2);

#define VkglTestCase_001015_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001015_2 "nctions.pack_unpack.unpackunorm4x8_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001015, VkglTestCase_001015_1, VkglTestCase_001015_2);

#define VkglTestCase_001016_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001016_2 "ions.pack_unpack.unpackunorm4x8_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001016, VkglTestCase_001016_1, VkglTestCase_001016_2);

#define VkglTestCase_001017_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001017_2 "ctions.pack_unpack.unpackunorm4x8_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001017, VkglTestCase_001017_1, VkglTestCase_001017_2);

#define VkglTestCase_001018_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001018_2 "ctions.pack_unpack.unpackunorm4x8_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001018, VkglTestCase_001018_1, VkglTestCase_001018_2);

#define VkglTestCase_001019_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001019_2 "ctions.pack_unpack.unpackunorm4x8_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001019, VkglTestCase_001019_1, VkglTestCase_001019_2);

#define VkglTestCase_001020_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001020_2 "nctions.pack_unpack.unpackunorm4x8_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001020, VkglTestCase_001020_1, VkglTestCase_001020_2);

#define VkglTestCase_001021_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001021_2 "ions.pack_unpack.packsnorm2x16_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001021, VkglTestCase_001021_1, VkglTestCase_001021_2);

#define VkglTestCase_001022_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001022_2 "tions.pack_unpack.packsnorm2x16_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001022, VkglTestCase_001022_1, VkglTestCase_001022_2);

#define VkglTestCase_001023_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001023_2 "ons.pack_unpack.packsnorm2x16_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001023, VkglTestCase_001023_1, VkglTestCase_001023_2);

#define VkglTestCase_001024_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001024_2 "ons.pack_unpack.packsnorm2x16_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001024, VkglTestCase_001024_1, VkglTestCase_001024_2);

#define VkglTestCase_001025_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001025_2 "ions.pack_unpack.packsnorm2x16_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001025, VkglTestCase_001025_1, VkglTestCase_001025_2);

#define VkglTestCase_001026_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001026_2 "ions.pack_unpack.packsnorm2x16_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001026, VkglTestCase_001026_1, VkglTestCase_001026_2);

#define VkglTestCase_001027_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001027_2 "ctions.pack_unpack.unpacksnorm2x16_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001027, VkglTestCase_001027_1, VkglTestCase_001027_2);

#define VkglTestCase_001028_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001028_2 "ctions.pack_unpack.unpacksnorm2x16_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001028, VkglTestCase_001028_1, VkglTestCase_001028_2);

#define VkglTestCase_001029_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001029_2 "ions.pack_unpack.packunorm2x16_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001029, VkglTestCase_001029_1, VkglTestCase_001029_2);

#define VkglTestCase_001030_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001030_2 "tions.pack_unpack.packunorm2x16_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001030, VkglTestCase_001030_1, VkglTestCase_001030_2);

#define VkglTestCase_001031_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001031_2 "ons.pack_unpack.packunorm2x16_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001031, VkglTestCase_001031_1, VkglTestCase_001031_2);

#define VkglTestCase_001032_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001032_2 "ons.pack_unpack.packunorm2x16_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001032, VkglTestCase_001032_1, VkglTestCase_001032_2);

#define VkglTestCase_001033_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001033_2 "ions.pack_unpack.packunorm2x16_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001033, VkglTestCase_001033_1, VkglTestCase_001033_2);

#define VkglTestCase_001034_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001034_2 "ions.pack_unpack.packunorm2x16_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001034, VkglTestCase_001034_1, VkglTestCase_001034_2);

#define VkglTestCase_001035_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001035_2 "ctions.pack_unpack.unpackunorm2x16_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001035, VkglTestCase_001035_1, VkglTestCase_001035_2);

#define VkglTestCase_001036_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001036_2 "ctions.pack_unpack.unpackunorm2x16_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001036, VkglTestCase_001036_1, VkglTestCase_001036_2);

#define VkglTestCase_001037_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001037_2 "nctions.pack_unpack.packhalf2x16_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001037, VkglTestCase_001037_1, VkglTestCase_001037_2);

#define VkglTestCase_001038_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001038_2 "unctions.pack_unpack.packhalf2x16_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001038, VkglTestCase_001038_1, VkglTestCase_001038_2);

#define VkglTestCase_001039_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001039_2 "ctions.pack_unpack.unpackhalf2x16_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001039, VkglTestCase_001039_1, VkglTestCase_001039_2);

#define VkglTestCase_001040_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001040_2 "nctions.pack_unpack.unpackhalf2x16_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001040, VkglTestCase_001040_1, VkglTestCase_001040_2);
