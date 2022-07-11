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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004645_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004645_2 "ds.reserved_keywords.attribute_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004645, VkglTestCase_004645_1, VkglTestCase_004645_2);

#define VkglTestCase_004646_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004646_2 "s.reserved_keywords.attribute_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004646, VkglTestCase_004646_1, VkglTestCase_004646_2);

#define VkglTestCase_004647_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004647_2 "rds.reserved_keywords.varying_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004647, VkglTestCase_004647_1, VkglTestCase_004647_2);

#define VkglTestCase_004648_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004648_2 "ds.reserved_keywords.varying_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004648, VkglTestCase_004648_1, VkglTestCase_004648_2);

#define VkglTestCase_004649_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004649_2 "ds.reserved_keywords.coherent_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004649, VkglTestCase_004649_1, VkglTestCase_004649_2);

#define VkglTestCase_004650_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004650_2 "s.reserved_keywords.coherent_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004650, VkglTestCase_004650_1, VkglTestCase_004650_2);

#define VkglTestCase_004651_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004651_2 "ds.reserved_keywords.restrict_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004651, VkglTestCase_004651_1, VkglTestCase_004651_2);

#define VkglTestCase_004652_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004652_2 "s.reserved_keywords.restrict_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004652, VkglTestCase_004652_1, VkglTestCase_004652_2);

#define VkglTestCase_004653_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004653_2 "ds.reserved_keywords.readonly_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004653, VkglTestCase_004653_1, VkglTestCase_004653_2);

#define VkglTestCase_004654_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004654_2 "s.reserved_keywords.readonly_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004654, VkglTestCase_004654_1, VkglTestCase_004654_2);

#define VkglTestCase_004655_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004655_2 "ds.reserved_keywords.writeonly_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004655, VkglTestCase_004655_1, VkglTestCase_004655_2);

#define VkglTestCase_004656_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004656_2 "s.reserved_keywords.writeonly_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004656, VkglTestCase_004656_1, VkglTestCase_004656_2);

#define VkglTestCase_004657_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004657_2 "ds.reserved_keywords.resource_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004657, VkglTestCase_004657_1, VkglTestCase_004657_2);

#define VkglTestCase_004658_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004658_2 "s.reserved_keywords.resource_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004658, VkglTestCase_004658_1, VkglTestCase_004658_2);

#define VkglTestCase_004659_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004659_2 "s.reserved_keywords.atomic_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004659, VkglTestCase_004659_1, VkglTestCase_004659_2);

#define VkglTestCase_004660_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004660_2 ".reserved_keywords.atomic_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004660, VkglTestCase_004660_1, VkglTestCase_004660_2);

#define VkglTestCase_004661_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004661_2 ".reserved_keywords.noperspective_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004661, VkglTestCase_004661_1, VkglTestCase_004661_2);

#define VkglTestCase_004662_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004662_2 "reserved_keywords.noperspective_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004662, VkglTestCase_004662_1, VkglTestCase_004662_2);

#define VkglTestCase_004663_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004663_2 "ords.reserved_keywords.patch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004663, VkglTestCase_004663_1, VkglTestCase_004663_2);

#define VkglTestCase_004664_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004664_2 "rds.reserved_keywords.patch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004664, VkglTestCase_004664_1, VkglTestCase_004664_2);

#define VkglTestCase_004665_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004665_2 "rds.reserved_keywords.sample_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004665, VkglTestCase_004665_1, VkglTestCase_004665_2);

#define VkglTestCase_004666_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004666_2 "ds.reserved_keywords.sample_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004666, VkglTestCase_004666_1, VkglTestCase_004666_2);

#define VkglTestCase_004667_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004667_2 "s.reserved_keywords.subroutine_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004667, VkglTestCase_004667_1, VkglTestCase_004667_2);

#define VkglTestCase_004668_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004668_2 ".reserved_keywords.subroutine_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004668, VkglTestCase_004668_1, VkglTestCase_004668_2);

#define VkglTestCase_004669_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004669_2 "rds.reserved_keywords.common_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004669, VkglTestCase_004669_1, VkglTestCase_004669_2);

#define VkglTestCase_004670_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004670_2 "ds.reserved_keywords.common_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004670, VkglTestCase_004670_1, VkglTestCase_004670_2);

#define VkglTestCase_004671_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004671_2 "ds.reserved_keywords.partition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004671, VkglTestCase_004671_1, VkglTestCase_004671_2);

#define VkglTestCase_004672_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004672_2 "s.reserved_keywords.partition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004672, VkglTestCase_004672_1, VkglTestCase_004672_2);

#define VkglTestCase_004673_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004673_2 "rds.reserved_keywords.active_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004673, VkglTestCase_004673_1, VkglTestCase_004673_2);

#define VkglTestCase_004674_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004674_2 "ds.reserved_keywords.active_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004674, VkglTestCase_004674_1, VkglTestCase_004674_2);

#define VkglTestCase_004675_1 "dEQP-GLES3.functional.shaders.key"
#define VkglTestCase_004675_2 "words.reserved_keywords.asm_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004675, VkglTestCase_004675_1, VkglTestCase_004675_2);

#define VkglTestCase_004676_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004676_2 "ords.reserved_keywords.asm_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004676, VkglTestCase_004676_1, VkglTestCase_004676_2);

#define VkglTestCase_004677_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004677_2 "ords.reserved_keywords.class_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004677, VkglTestCase_004677_1, VkglTestCase_004677_2);

#define VkglTestCase_004678_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004678_2 "rds.reserved_keywords.class_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004678, VkglTestCase_004678_1, VkglTestCase_004678_2);

#define VkglTestCase_004679_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004679_2 "ords.reserved_keywords.union_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004679, VkglTestCase_004679_1, VkglTestCase_004679_2);

#define VkglTestCase_004680_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004680_2 "rds.reserved_keywords.union_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004680, VkglTestCase_004680_1, VkglTestCase_004680_2);

#define VkglTestCase_004681_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004681_2 "ords.reserved_keywords.enum_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004681, VkglTestCase_004681_1, VkglTestCase_004681_2);

#define VkglTestCase_004682_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004682_2 "rds.reserved_keywords.enum_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004682, VkglTestCase_004682_1, VkglTestCase_004682_2);

#define VkglTestCase_004683_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004683_2 "rds.reserved_keywords.typedef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004683, VkglTestCase_004683_1, VkglTestCase_004683_2);

#define VkglTestCase_004684_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004684_2 "ds.reserved_keywords.typedef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004684, VkglTestCase_004684_1, VkglTestCase_004684_2);

#define VkglTestCase_004685_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004685_2 "ds.reserved_keywords.template_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004685, VkglTestCase_004685_1, VkglTestCase_004685_2);

#define VkglTestCase_004686_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004686_2 "s.reserved_keywords.template_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004686, VkglTestCase_004686_1, VkglTestCase_004686_2);

#define VkglTestCase_004687_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004687_2 "ords.reserved_keywords.this_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004687, VkglTestCase_004687_1, VkglTestCase_004687_2);

#define VkglTestCase_004688_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004688_2 "rds.reserved_keywords.this_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004688, VkglTestCase_004688_1, VkglTestCase_004688_2);

#define VkglTestCase_004689_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004689_2 "ords.reserved_keywords.goto_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004689, VkglTestCase_004689_1, VkglTestCase_004689_2);

#define VkglTestCase_004690_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004690_2 "rds.reserved_keywords.goto_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004690, VkglTestCase_004690_1, VkglTestCase_004690_2);

#define VkglTestCase_004691_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004691_2 "rds.reserved_keywords.inline_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004691, VkglTestCase_004691_1, VkglTestCase_004691_2);

#define VkglTestCase_004692_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004692_2 "ds.reserved_keywords.inline_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004692, VkglTestCase_004692_1, VkglTestCase_004692_2);

#define VkglTestCase_004693_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004693_2 "ds.reserved_keywords.noinline_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004693, VkglTestCase_004693_1, VkglTestCase_004693_2);

#define VkglTestCase_004694_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004694_2 "s.reserved_keywords.noinline_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004694, VkglTestCase_004694_1, VkglTestCase_004694_2);

#define VkglTestCase_004695_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004695_2 "ds.reserved_keywords.volatile_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004695, VkglTestCase_004695_1, VkglTestCase_004695_2);

#define VkglTestCase_004696_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004696_2 "s.reserved_keywords.volatile_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004696, VkglTestCase_004696_1, VkglTestCase_004696_2);

#define VkglTestCase_004697_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004697_2 "rds.reserved_keywords.public_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004697, VkglTestCase_004697_1, VkglTestCase_004697_2);

#define VkglTestCase_004698_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004698_2 "ds.reserved_keywords.public_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004698, VkglTestCase_004698_1, VkglTestCase_004698_2);

#define VkglTestCase_004699_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004699_2 "rds.reserved_keywords.static_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004699, VkglTestCase_004699_1, VkglTestCase_004699_2);

#define VkglTestCase_004700_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004700_2 "ds.reserved_keywords.static_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004700, VkglTestCase_004700_1, VkglTestCase_004700_2);

#define VkglTestCase_004701_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004701_2 "rds.reserved_keywords.extern_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004701, VkglTestCase_004701_1, VkglTestCase_004701_2);

#define VkglTestCase_004702_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004702_2 "ds.reserved_keywords.extern_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004702, VkglTestCase_004702_1, VkglTestCase_004702_2);

#define VkglTestCase_004703_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004703_2 "ds.reserved_keywords.external_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004703, VkglTestCase_004703_1, VkglTestCase_004703_2);

#define VkglTestCase_004704_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004704_2 "s.reserved_keywords.external_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004704, VkglTestCase_004704_1, VkglTestCase_004704_2);

#define VkglTestCase_004705_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004705_2 "ds.reserved_keywords.interface_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004705, VkglTestCase_004705_1, VkglTestCase_004705_2);

#define VkglTestCase_004706_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004706_2 "s.reserved_keywords.interface_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004706, VkglTestCase_004706_1, VkglTestCase_004706_2);

#define VkglTestCase_004707_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004707_2 "ords.reserved_keywords.long_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004707, VkglTestCase_004707_1, VkglTestCase_004707_2);

#define VkglTestCase_004708_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004708_2 "rds.reserved_keywords.long_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004708, VkglTestCase_004708_1, VkglTestCase_004708_2);

#define VkglTestCase_004709_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004709_2 "ords.reserved_keywords.short_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004709, VkglTestCase_004709_1, VkglTestCase_004709_2);

#define VkglTestCase_004710_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004710_2 "rds.reserved_keywords.short_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004710, VkglTestCase_004710_1, VkglTestCase_004710_2);

#define VkglTestCase_004711_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004711_2 "rds.reserved_keywords.double_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004711, VkglTestCase_004711_1, VkglTestCase_004711_2);

#define VkglTestCase_004712_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004712_2 "ds.reserved_keywords.double_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004712, VkglTestCase_004712_1, VkglTestCase_004712_2);

#define VkglTestCase_004713_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004713_2 "ords.reserved_keywords.half_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004713, VkglTestCase_004713_1, VkglTestCase_004713_2);

#define VkglTestCase_004714_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004714_2 "rds.reserved_keywords.half_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004714, VkglTestCase_004714_1, VkglTestCase_004714_2);

#define VkglTestCase_004715_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004715_2 "ords.reserved_keywords.fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004715, VkglTestCase_004715_1, VkglTestCase_004715_2);

#define VkglTestCase_004716_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004716_2 "rds.reserved_keywords.fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004716, VkglTestCase_004716_1, VkglTestCase_004716_2);

#define VkglTestCase_004717_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004717_2 "ds.reserved_keywords.unsigned_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004717, VkglTestCase_004717_1, VkglTestCase_004717_2);

#define VkglTestCase_004718_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004718_2 "s.reserved_keywords.unsigned_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004718, VkglTestCase_004718_1, VkglTestCase_004718_2);

#define VkglTestCase_004719_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004719_2 "rds.reserved_keywords.superp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004719, VkglTestCase_004719_1, VkglTestCase_004719_2);

#define VkglTestCase_004720_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004720_2 "ds.reserved_keywords.superp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004720, VkglTestCase_004720_1, VkglTestCase_004720_2);

#define VkglTestCase_004721_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004721_2 "ords.reserved_keywords.input_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004721, VkglTestCase_004721_1, VkglTestCase_004721_2);

#define VkglTestCase_004722_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004722_2 "rds.reserved_keywords.input_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004722, VkglTestCase_004722_1, VkglTestCase_004722_2);

#define VkglTestCase_004723_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004723_2 "rds.reserved_keywords.output_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004723, VkglTestCase_004723_1, VkglTestCase_004723_2);

#define VkglTestCase_004724_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004724_2 "ds.reserved_keywords.output_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004724, VkglTestCase_004724_1, VkglTestCase_004724_2);

#define VkglTestCase_004725_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004725_2 "ords.reserved_keywords.hvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004725, VkglTestCase_004725_1, VkglTestCase_004725_2);

#define VkglTestCase_004726_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004726_2 "rds.reserved_keywords.hvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004726, VkglTestCase_004726_1, VkglTestCase_004726_2);

#define VkglTestCase_004727_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004727_2 "ords.reserved_keywords.hvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004727, VkglTestCase_004727_1, VkglTestCase_004727_2);

#define VkglTestCase_004728_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004728_2 "rds.reserved_keywords.hvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004728, VkglTestCase_004728_1, VkglTestCase_004728_2);

#define VkglTestCase_004729_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004729_2 "ords.reserved_keywords.hvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004729, VkglTestCase_004729_1, VkglTestCase_004729_2);

#define VkglTestCase_004730_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004730_2 "rds.reserved_keywords.hvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004730, VkglTestCase_004730_1, VkglTestCase_004730_2);

#define VkglTestCase_004731_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004731_2 "ords.reserved_keywords.dvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004731, VkglTestCase_004731_1, VkglTestCase_004731_2);

#define VkglTestCase_004732_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004732_2 "rds.reserved_keywords.dvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004732, VkglTestCase_004732_1, VkglTestCase_004732_2);

#define VkglTestCase_004733_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004733_2 "ords.reserved_keywords.dvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004733, VkglTestCase_004733_1, VkglTestCase_004733_2);

#define VkglTestCase_004734_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004734_2 "rds.reserved_keywords.dvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004734, VkglTestCase_004734_1, VkglTestCase_004734_2);

#define VkglTestCase_004735_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004735_2 "ords.reserved_keywords.dvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004735, VkglTestCase_004735_1, VkglTestCase_004735_2);

#define VkglTestCase_004736_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004736_2 "rds.reserved_keywords.dvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004736, VkglTestCase_004736_1, VkglTestCase_004736_2);

#define VkglTestCase_004737_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004737_2 "ords.reserved_keywords.fvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004737, VkglTestCase_004737_1, VkglTestCase_004737_2);

#define VkglTestCase_004738_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004738_2 "rds.reserved_keywords.fvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004738, VkglTestCase_004738_1, VkglTestCase_004738_2);

#define VkglTestCase_004739_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004739_2 "ords.reserved_keywords.fvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004739, VkglTestCase_004739_1, VkglTestCase_004739_2);

#define VkglTestCase_004740_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004740_2 "rds.reserved_keywords.fvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004740, VkglTestCase_004740_1, VkglTestCase_004740_2);

#define VkglTestCase_004741_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004741_2 "ords.reserved_keywords.fvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004741, VkglTestCase_004741_1, VkglTestCase_004741_2);

#define VkglTestCase_004742_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004742_2 "rds.reserved_keywords.fvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004742, VkglTestCase_004742_1, VkglTestCase_004742_2);

#define VkglTestCase_004743_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004743_2 ".reserved_keywords.sampler3DRect_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004743, VkglTestCase_004743_1, VkglTestCase_004743_2);

#define VkglTestCase_004744_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004744_2 "reserved_keywords.sampler3DRect_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004744, VkglTestCase_004744_1, VkglTestCase_004744_2);

#define VkglTestCase_004745_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004745_2 "rds.reserved_keywords.filter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004745, VkglTestCase_004745_1, VkglTestCase_004745_2);

#define VkglTestCase_004746_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004746_2 "ds.reserved_keywords.filter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004746, VkglTestCase_004746_1, VkglTestCase_004746_2);

#define VkglTestCase_004747_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004747_2 "rds.reserved_keywords.image1D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004747, VkglTestCase_004747_1, VkglTestCase_004747_2);

#define VkglTestCase_004748_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004748_2 "ds.reserved_keywords.image1D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004748, VkglTestCase_004748_1, VkglTestCase_004748_2);

#define VkglTestCase_004749_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004749_2 "rds.reserved_keywords.image2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004749, VkglTestCase_004749_1, VkglTestCase_004749_2);

#define VkglTestCase_004750_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004750_2 "ds.reserved_keywords.image2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004750, VkglTestCase_004750_1, VkglTestCase_004750_2);

#define VkglTestCase_004751_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004751_2 "rds.reserved_keywords.image3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004751, VkglTestCase_004751_1, VkglTestCase_004751_2);

#define VkglTestCase_004752_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004752_2 "ds.reserved_keywords.image3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004752, VkglTestCase_004752_1, VkglTestCase_004752_2);

#define VkglTestCase_004753_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004753_2 "ds.reserved_keywords.imageCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004753, VkglTestCase_004753_1, VkglTestCase_004753_2);

#define VkglTestCase_004754_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004754_2 "s.reserved_keywords.imageCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004754, VkglTestCase_004754_1, VkglTestCase_004754_2);

#define VkglTestCase_004755_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004755_2 "ds.reserved_keywords.iimage1D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004755, VkglTestCase_004755_1, VkglTestCase_004755_2);

#define VkglTestCase_004756_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004756_2 "s.reserved_keywords.iimage1D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004756, VkglTestCase_004756_1, VkglTestCase_004756_2);

#define VkglTestCase_004757_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004757_2 "ds.reserved_keywords.iimage2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004757, VkglTestCase_004757_1, VkglTestCase_004757_2);

#define VkglTestCase_004758_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004758_2 "s.reserved_keywords.iimage2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004758, VkglTestCase_004758_1, VkglTestCase_004758_2);

#define VkglTestCase_004759_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004759_2 "ds.reserved_keywords.iimage3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004759, VkglTestCase_004759_1, VkglTestCase_004759_2);

#define VkglTestCase_004760_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004760_2 "s.reserved_keywords.iimage3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004760, VkglTestCase_004760_1, VkglTestCase_004760_2);

#define VkglTestCase_004761_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004761_2 "s.reserved_keywords.iimageCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004761, VkglTestCase_004761_1, VkglTestCase_004761_2);

#define VkglTestCase_004762_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004762_2 ".reserved_keywords.iimageCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004762, VkglTestCase_004762_1, VkglTestCase_004762_2);

#define VkglTestCase_004763_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004763_2 "ds.reserved_keywords.uimage1D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004763, VkglTestCase_004763_1, VkglTestCase_004763_2);

#define VkglTestCase_004764_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004764_2 "s.reserved_keywords.uimage1D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004764, VkglTestCase_004764_1, VkglTestCase_004764_2);

#define VkglTestCase_004765_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004765_2 "ds.reserved_keywords.uimage2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004765, VkglTestCase_004765_1, VkglTestCase_004765_2);

#define VkglTestCase_004766_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004766_2 "s.reserved_keywords.uimage2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004766, VkglTestCase_004766_1, VkglTestCase_004766_2);

#define VkglTestCase_004767_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004767_2 "ds.reserved_keywords.uimage3D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004767, VkglTestCase_004767_1, VkglTestCase_004767_2);

#define VkglTestCase_004768_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004768_2 "s.reserved_keywords.uimage3D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004768, VkglTestCase_004768_1, VkglTestCase_004768_2);

#define VkglTestCase_004769_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004769_2 "s.reserved_keywords.uimageCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004769, VkglTestCase_004769_1, VkglTestCase_004769_2);

#define VkglTestCase_004770_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004770_2 ".reserved_keywords.uimageCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004770, VkglTestCase_004770_1, VkglTestCase_004770_2);

#define VkglTestCase_004771_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004771_2 ".reserved_keywords.image1DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004771, VkglTestCase_004771_1, VkglTestCase_004771_2);

#define VkglTestCase_004772_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004772_2 "reserved_keywords.image1DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004772, VkglTestCase_004772_1, VkglTestCase_004772_2);

#define VkglTestCase_004773_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004773_2 ".reserved_keywords.image2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004773, VkglTestCase_004773_1, VkglTestCase_004773_2);

#define VkglTestCase_004774_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004774_2 "reserved_keywords.image2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004774, VkglTestCase_004774_1, VkglTestCase_004774_2);

#define VkglTestCase_004775_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004775_2 ".reserved_keywords.iimage1DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004775, VkglTestCase_004775_1, VkglTestCase_004775_2);

#define VkglTestCase_004776_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004776_2 "reserved_keywords.iimage1DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004776, VkglTestCase_004776_1, VkglTestCase_004776_2);

#define VkglTestCase_004777_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004777_2 ".reserved_keywords.iimage2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004777, VkglTestCase_004777_1, VkglTestCase_004777_2);

#define VkglTestCase_004778_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004778_2 "reserved_keywords.iimage2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004778, VkglTestCase_004778_1, VkglTestCase_004778_2);

#define VkglTestCase_004779_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004779_2 ".reserved_keywords.uimage1DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004779, VkglTestCase_004779_1, VkglTestCase_004779_2);

#define VkglTestCase_004780_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004780_2 "reserved_keywords.uimage1DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004780, VkglTestCase_004780_1, VkglTestCase_004780_2);

#define VkglTestCase_004781_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004781_2 ".reserved_keywords.uimage2DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004781, VkglTestCase_004781_1, VkglTestCase_004781_2);

#define VkglTestCase_004782_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004782_2 "reserved_keywords.uimage2DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004782, VkglTestCase_004782_1, VkglTestCase_004782_2);

#define VkglTestCase_004783_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004783_2 "s.reserved_keywords.imageBuffer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004783, VkglTestCase_004783_1, VkglTestCase_004783_2);

#define VkglTestCase_004784_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004784_2 ".reserved_keywords.imageBuffer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004784, VkglTestCase_004784_1, VkglTestCase_004784_2);

#define VkglTestCase_004785_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004785_2 ".reserved_keywords.iimageBuffer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004785, VkglTestCase_004785_1, VkglTestCase_004785_2);

#define VkglTestCase_004786_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004786_2 "reserved_keywords.iimageBuffer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004786, VkglTestCase_004786_1, VkglTestCase_004786_2);

#define VkglTestCase_004787_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004787_2 ".reserved_keywords.uimageBuffer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004787, VkglTestCase_004787_1, VkglTestCase_004787_2);

#define VkglTestCase_004788_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004788_2 "reserved_keywords.uimageBuffer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004788, VkglTestCase_004788_1, VkglTestCase_004788_2);

#define VkglTestCase_004789_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004789_2 "ds.reserved_keywords.sampler1D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004789, VkglTestCase_004789_1, VkglTestCase_004789_2);

#define VkglTestCase_004790_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004790_2 "s.reserved_keywords.sampler1D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004790, VkglTestCase_004790_1, VkglTestCase_004790_2);

#define VkglTestCase_004791_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004791_2 "reserved_keywords.sampler1DShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004791, VkglTestCase_004791_1, VkglTestCase_004791_2);

#define VkglTestCase_004792_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004792_2 "eserved_keywords.sampler1DShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004792, VkglTestCase_004792_1, VkglTestCase_004792_2);

#define VkglTestCase_004793_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004793_2 "reserved_keywords.sampler1DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004793, VkglTestCase_004793_1, VkglTestCase_004793_2);

#define VkglTestCase_004794_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004794_2 "eserved_keywords.sampler1DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004794, VkglTestCase_004794_1, VkglTestCase_004794_2);

#define VkglTestCase_004795_1 "dEQP-GLES3.functional.shaders.keywords.res"
#define VkglTestCase_004795_2 "erved_keywords.sampler1DArrayShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004795, VkglTestCase_004795_1, VkglTestCase_004795_2);

#define VkglTestCase_004796_1 "dEQP-GLES3.functional.shaders.keywords.rese"
#define VkglTestCase_004796_2 "rved_keywords.sampler1DArrayShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004796, VkglTestCase_004796_1, VkglTestCase_004796_2);

#define VkglTestCase_004797_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004797_2 "s.reserved_keywords.isampler1D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004797, VkglTestCase_004797_1, VkglTestCase_004797_2);

#define VkglTestCase_004798_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004798_2 ".reserved_keywords.isampler1D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004798, VkglTestCase_004798_1, VkglTestCase_004798_2);

#define VkglTestCase_004799_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004799_2 "reserved_keywords.isampler1DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004799, VkglTestCase_004799_1, VkglTestCase_004799_2);

#define VkglTestCase_004800_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004800_2 "eserved_keywords.isampler1DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004800, VkglTestCase_004800_1, VkglTestCase_004800_2);

#define VkglTestCase_004801_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004801_2 "s.reserved_keywords.usampler1D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004801, VkglTestCase_004801_1, VkglTestCase_004801_2);

#define VkglTestCase_004802_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004802_2 ".reserved_keywords.usampler1D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004802, VkglTestCase_004802_1, VkglTestCase_004802_2);

#define VkglTestCase_004803_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004803_2 "reserved_keywords.usampler1DArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004803, VkglTestCase_004803_1, VkglTestCase_004803_2);

#define VkglTestCase_004804_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004804_2 "eserved_keywords.usampler1DArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004804, VkglTestCase_004804_1, VkglTestCase_004804_2);

#define VkglTestCase_004805_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004805_2 ".reserved_keywords.sampler2DRect_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004805, VkglTestCase_004805_1, VkglTestCase_004805_2);

#define VkglTestCase_004806_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004806_2 "reserved_keywords.sampler2DRect_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004806, VkglTestCase_004806_1, VkglTestCase_004806_2);

#define VkglTestCase_004807_1 "dEQP-GLES3.functional.shaders.keywords.re"
#define VkglTestCase_004807_2 "served_keywords.sampler2DRectShadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004807, VkglTestCase_004807_1, VkglTestCase_004807_2);

#define VkglTestCase_004808_1 "dEQP-GLES3.functional.shaders.keywords.res"
#define VkglTestCase_004808_2 "erved_keywords.sampler2DRectShadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004808, VkglTestCase_004808_1, VkglTestCase_004808_2);

#define VkglTestCase_004809_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004809_2 "reserved_keywords.isampler2DRect_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004809, VkglTestCase_004809_1, VkglTestCase_004809_2);

#define VkglTestCase_004810_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004810_2 "eserved_keywords.isampler2DRect_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004810, VkglTestCase_004810_1, VkglTestCase_004810_2);

#define VkglTestCase_004811_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004811_2 "reserved_keywords.usampler2DRect_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004811, VkglTestCase_004811_1, VkglTestCase_004811_2);

#define VkglTestCase_004812_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004812_2 "eserved_keywords.usampler2DRect_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004812, VkglTestCase_004812_1, VkglTestCase_004812_2);

#define VkglTestCase_004813_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004813_2 ".reserved_keywords.samplerBuffer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004813, VkglTestCase_004813_1, VkglTestCase_004813_2);

#define VkglTestCase_004814_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004814_2 "reserved_keywords.samplerBuffer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004814, VkglTestCase_004814_1, VkglTestCase_004814_2);

#define VkglTestCase_004815_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004815_2 "reserved_keywords.isamplerBuffer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004815, VkglTestCase_004815_1, VkglTestCase_004815_2);

#define VkglTestCase_004816_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004816_2 "eserved_keywords.isamplerBuffer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004816, VkglTestCase_004816_1, VkglTestCase_004816_2);

#define VkglTestCase_004817_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004817_2 "reserved_keywords.usamplerBuffer_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004817, VkglTestCase_004817_1, VkglTestCase_004817_2);

#define VkglTestCase_004818_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004818_2 "eserved_keywords.usamplerBuffer_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004818, VkglTestCase_004818_1, VkglTestCase_004818_2);

#define VkglTestCase_004819_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004819_2 "s.reserved_keywords.sampler2DMS_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004819, VkglTestCase_004819_1, VkglTestCase_004819_2);

#define VkglTestCase_004820_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004820_2 ".reserved_keywords.sampler2DMS_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004820, VkglTestCase_004820_1, VkglTestCase_004820_2);

#define VkglTestCase_004821_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004821_2 ".reserved_keywords.isampler2DMS_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004821, VkglTestCase_004821_1, VkglTestCase_004821_2);

#define VkglTestCase_004822_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004822_2 "reserved_keywords.isampler2DMS_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004822, VkglTestCase_004822_1, VkglTestCase_004822_2);

#define VkglTestCase_004823_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004823_2 ".reserved_keywords.usampler2DMS_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004823, VkglTestCase_004823_1, VkglTestCase_004823_2);

#define VkglTestCase_004824_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004824_2 "reserved_keywords.usampler2DMS_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004824, VkglTestCase_004824_1, VkglTestCase_004824_2);

#define VkglTestCase_004825_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004825_2 "eserved_keywords.sampler2DMSArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004825, VkglTestCase_004825_1, VkglTestCase_004825_2);

#define VkglTestCase_004826_1 "dEQP-GLES3.functional.shaders.keywords.re"
#define VkglTestCase_004826_2 "served_keywords.sampler2DMSArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004826, VkglTestCase_004826_1, VkglTestCase_004826_2);

#define VkglTestCase_004827_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004827_2 "eserved_keywords.isampler2DMSArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004827, VkglTestCase_004827_1, VkglTestCase_004827_2);

#define VkglTestCase_004828_1 "dEQP-GLES3.functional.shaders.keywords.re"
#define VkglTestCase_004828_2 "served_keywords.isampler2DMSArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004828, VkglTestCase_004828_1, VkglTestCase_004828_2);

#define VkglTestCase_004829_1 "dEQP-GLES3.functional.shaders.keywords.r"
#define VkglTestCase_004829_2 "eserved_keywords.usampler2DMSArray_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004829, VkglTestCase_004829_1, VkglTestCase_004829_2);

#define VkglTestCase_004830_1 "dEQP-GLES3.functional.shaders.keywords.re"
#define VkglTestCase_004830_2 "served_keywords.usampler2DMSArray_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004830, VkglTestCase_004830_1, VkglTestCase_004830_2);

#define VkglTestCase_004831_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004831_2 "rds.reserved_keywords.sizeof_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004831, VkglTestCase_004831_1, VkglTestCase_004831_2);

#define VkglTestCase_004832_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004832_2 "ds.reserved_keywords.sizeof_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004832, VkglTestCase_004832_1, VkglTestCase_004832_2);

#define VkglTestCase_004833_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004833_2 "ords.reserved_keywords.cast_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004833, VkglTestCase_004833_1, VkglTestCase_004833_2);

#define VkglTestCase_004834_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004834_2 "rds.reserved_keywords.cast_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004834, VkglTestCase_004834_1, VkglTestCase_004834_2);

#define VkglTestCase_004835_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004835_2 "ds.reserved_keywords.namespace_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004835, VkglTestCase_004835_1, VkglTestCase_004835_2);

#define VkglTestCase_004836_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004836_2 "s.reserved_keywords.namespace_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004836, VkglTestCase_004836_1, VkglTestCase_004836_2);

#define VkglTestCase_004837_1 "dEQP-GLES3.functional.shaders.keyw"
#define VkglTestCase_004837_2 "ords.reserved_keywords.using_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004837, VkglTestCase_004837_1, VkglTestCase_004837_2);

#define VkglTestCase_004838_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004838_2 "rds.reserved_keywords.using_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004838, VkglTestCase_004838_1, VkglTestCase_004838_2);
