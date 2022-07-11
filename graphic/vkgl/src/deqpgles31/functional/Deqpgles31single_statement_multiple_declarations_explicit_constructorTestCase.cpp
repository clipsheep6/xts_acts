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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004106_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement"
#define VkglTestCase_004106_2 "_multiple_declarations.explicit_constructor.float_2_dimensions_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004106, VkglTestCase_004106_1, VkglTestCase_004106_2);

#define VkglTestCase_004107_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement_"
#define VkglTestCase_004107_2 "multiple_declarations.explicit_constructor.float_2_dimensions_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004107, VkglTestCase_004107_1, VkglTestCase_004107_2);

#define VkglTestCase_004108_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statemen"
#define VkglTestCase_004108_2 "t_multiple_declarations.explicit_constructor.int_3_dimensions_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004108, VkglTestCase_004108_1, VkglTestCase_004108_2);

#define VkglTestCase_004109_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement"
#define VkglTestCase_004109_2 "_multiple_declarations.explicit_constructor.int_3_dimensions_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004109, VkglTestCase_004109_1, VkglTestCase_004109_2);

#define VkglTestCase_004398_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement"
#define VkglTestCase_004398_2 "_multiple_declarations.explicit_constructor.float_2_dimensions_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004398, VkglTestCase_004398_1, VkglTestCase_004398_2);

#define VkglTestCase_004399_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement_"
#define VkglTestCase_004399_2 "multiple_declarations.explicit_constructor.float_2_dimensions_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004399, VkglTestCase_004399_1, VkglTestCase_004399_2);

#define VkglTestCase_004400_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statemen"
#define VkglTestCase_004400_2 "t_multiple_declarations.explicit_constructor.int_3_dimensions_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004400, VkglTestCase_004400_1, VkglTestCase_004400_2);

#define VkglTestCase_004401_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement"
#define VkglTestCase_004401_2 "_multiple_declarations.explicit_constructor.int_3_dimensions_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004401, VkglTestCase_004401_1, VkglTestCase_004401_2);
