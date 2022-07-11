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
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000521_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000521_2 "p.write.explicit_flush.array_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000521, VkglTestCase_000521_1, VkglTestCase_000521_2);

#define VkglTestCase_000522_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000522_2 "write.explicit_flush.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000522, VkglTestCase_000522_1, VkglTestCase_000522_2);

#define VkglTestCase_000523_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000523_2 "write.explicit_flush.copy_read_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000523, VkglTestCase_000523_1, VkglTestCase_000523_2);

#define VkglTestCase_000524_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000524_2 "ite.explicit_flush.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000524, VkglTestCase_000524_1, VkglTestCase_000524_2);

#define VkglTestCase_000525_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000525_2 "rite.explicit_flush.copy_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000525, VkglTestCase_000525_1, VkglTestCase_000525_2);

#define VkglTestCase_000526_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000526_2 "te.explicit_flush.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000526, VkglTestCase_000526_1, VkglTestCase_000526_2);

#define VkglTestCase_000527_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000527_2 "ite.explicit_flush.element_array_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000527, VkglTestCase_000527_1, VkglTestCase_000527_2);

#define VkglTestCase_000528_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000528_2 "e.explicit_flush.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000528, VkglTestCase_000528_1, VkglTestCase_000528_2);

#define VkglTestCase_000529_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000529_2 "rite.explicit_flush.pixel_pack_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000529, VkglTestCase_000529_1, VkglTestCase_000529_2);

#define VkglTestCase_000530_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000530_2 "te.explicit_flush.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000530, VkglTestCase_000530_1, VkglTestCase_000530_2);

#define VkglTestCase_000531_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000531_2 "ite.explicit_flush.pixel_unpack_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000531, VkglTestCase_000531_1, VkglTestCase_000531_2);

#define VkglTestCase_000532_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000532_2 "e.explicit_flush.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000532, VkglTestCase_000532_1, VkglTestCase_000532_2);

#define VkglTestCase_000533_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000533_2 ".explicit_flush.transform_feedback_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000533, VkglTestCase_000533_1, VkglTestCase_000533_2);

#define VkglTestCase_000534_1 "dEQP-GLES3.functional.buffer.map.write.e"
#define VkglTestCase_000534_2 "xplicit_flush.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000534, VkglTestCase_000534_1, VkglTestCase_000534_2);

#define VkglTestCase_000535_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000535_2 ".write.explicit_flush.uniform_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000535, VkglTestCase_000535_1, VkglTestCase_000535_2);

#define VkglTestCase_000536_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000536_2 "rite.explicit_flush.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000536, VkglTestCase_000536_1, VkglTestCase_000536_2);
