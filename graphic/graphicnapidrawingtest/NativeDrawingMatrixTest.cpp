/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, Hardware
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "gtest/gtest.h"

#include "drawing_matrix.h"
#include "utils/scalar.h"

using namespace testing;
using namespace testing::ext;

namespace OHOS {
namespace Rosen {
namespace Drawing {
class NativeDrawingMatrixTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp() override;
    void TearDown() override;
};

void NativeDrawingMatrixTest::SetUpTestCase() {}
void NativeDrawingMatrixTest::TearDownTestCase() {}
void NativeDrawingMatrixTest::SetUp() {}
void NativeDrawingMatrixTest::TearDown() {}

/*
 * @tc.name: NativeDrawingMatrixTest_SetMatrix
 * @tc.desc: test for SetMatrix.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_SetMatrix, TestSize.Level1)
{
    OH_Drawing_Matrix* matrix = OH_Drawing_MatrixCreate();
    OH_Drawing_MatrixSetMatrix(
        matrix,
        1, 0, 0,
        0, -1, 0,
        0, 0, 1);
    OH_Drawing_MatrixDestroy(matrix);
    OH_Drawing_MatrixDestroy(nullptr);
}
/*
 * @tc.name: NativeDrawingMatrixTest_CreateRotation
 * @tc.desc: test for CreateRotation.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_CreateRotation, TestSize.Level1)
{
    OH_Drawing_Matrix* matrix = OH_Drawing_MatrixCreateRotation(180, 1, 1);
    float value;
    value = OH_Drawing_MatrixGetValue(matrix, 0);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -1));
    value = OH_Drawing_MatrixGetValue(matrix, 1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 2);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 2));

    value = OH_Drawing_MatrixGetValue(matrix, 3);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 4);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -1));
    value = OH_Drawing_MatrixGetValue(matrix, 5);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 2));

    value = OH_Drawing_MatrixGetValue(matrix, 6);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 7);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));

    OH_Drawing_MatrixDestroy(matrix);
}

/*
 * @tc.name: NativeDrawingMatrixTest_CreateScale
 * @tc.desc: test for CreateScale.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_CreateScale, TestSize.Level1)
{
    OH_Drawing_Matrix* matrix = OH_Drawing_MatrixCreateScale(10, 10, 10, 10);
    float value;
    value = OH_Drawing_MatrixGetValue(matrix, 0);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 10));
    value = OH_Drawing_MatrixGetValue(matrix, 1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 2);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -90));

    value = OH_Drawing_MatrixGetValue(matrix, 3);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 4);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 10));
    value = OH_Drawing_MatrixGetValue(matrix, 5);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -90));

    value = OH_Drawing_MatrixGetValue(matrix, 6);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 7);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));

    OH_Drawing_MatrixDestroy(matrix);
}

/*
 * @tc.name: NativeDrawingMatrixTest_CreateTranslation
 * @tc.desc: test for CreateTranslation.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_CreateTranslation, TestSize.Level1)
{
    OH_Drawing_Matrix* matrix = OH_Drawing_MatrixCreateTranslation(100, 200);
    float value;
    value = OH_Drawing_MatrixGetValue(matrix, 0);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));
    value = OH_Drawing_MatrixGetValue(matrix, 1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 2);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 100));

    value = OH_Drawing_MatrixGetValue(matrix, 3);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 4);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));
    value = OH_Drawing_MatrixGetValue(matrix, 5);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 200));

    value = OH_Drawing_MatrixGetValue(matrix, 6);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 7);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));

    OH_Drawing_MatrixDestroy(matrix);
}

/*
 * @tc.name: NativeDrawingMatrixTest_Concat
 * @tc.desc: test for Concat.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_Concat, TestSize.Level1)
{
    OH_Drawing_Matrix* matrixA = OH_Drawing_MatrixCreate();
    OH_Drawing_Matrix* matrixB = OH_Drawing_MatrixCreate();
    bool ret;
    ret = OH_Drawing_MatrixIsEqual(nullptr, matrixB);
    EXPECT_TRUE(!ret);
    ret = OH_Drawing_MatrixIsEqual(matrixA, nullptr);
    EXPECT_TRUE(!ret);
    ret = OH_Drawing_MatrixIsEqual(matrixA, matrixB);
    EXPECT_TRUE(ret);
    OH_Drawing_MatrixSetMatrix(
        matrixA,
        1, 0, 0,
        0, -1, 0,
        0, 0, 1);
    OH_Drawing_MatrixSetMatrix(
        matrixB,
        1, 0, 100,
        0, -1, 200,
        0, 0, 1);
    ret = OH_Drawing_MatrixIsEqual(matrixA, matrixB);
    EXPECT_TRUE(!ret);
    OH_Drawing_Matrix* matrix = OH_Drawing_MatrixCreate();
    OH_Drawing_MatrixConcat(nullptr, matrixA, matrixB);
    OH_Drawing_MatrixConcat(matrix, nullptr, matrixB);
    OH_Drawing_MatrixConcat(matrix, matrixA, nullptr);
    OH_Drawing_MatrixConcat(matrix, matrixA, matrixB);
    float value;
    value = OH_Drawing_MatrixGetValue(matrix, 0);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));
    value = OH_Drawing_MatrixGetValue(matrix, 1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 2);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 100));

    value = OH_Drawing_MatrixGetValue(matrix, 3);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 4);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));
    value = OH_Drawing_MatrixGetValue(matrix, 5);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -200));

    value = OH_Drawing_MatrixGetValue(matrix, 6);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 7);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));

    OH_Drawing_MatrixDestroy(matrix);
    OH_Drawing_MatrixDestroy(matrixA);
    OH_Drawing_MatrixDestroy(matrixB);
}

/*
 * @tc.name: NativeDrawingMatrixTest_Rotate
 * @tc.desc: test for Rotate.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_Rotate, TestSize.Level1)
{
    OH_Drawing_Matrix* matrix = OH_Drawing_MatrixCreate();
    OH_Drawing_MatrixRotate(nullptr, 180, 1, 1);
    OH_Drawing_MatrixRotate(matrix, 180, 1, 1);
    float value;
    value = OH_Drawing_MatrixGetValue(matrix, 0);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -1));
    value = OH_Drawing_MatrixGetValue(matrix, 1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 2);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 2));

    value = OH_Drawing_MatrixGetValue(matrix, 3);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 4);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -1));
    value = OH_Drawing_MatrixGetValue(matrix, 5);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 2));

    value = OH_Drawing_MatrixGetValue(matrix, 6);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 7);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));

    value = OH_Drawing_MatrixGetValue(nullptr, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, -1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 9);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));

    OH_Drawing_MatrixDestroy(matrix);
}

/*
 * @tc.name: NativeDrawingMatrixTest_Scale
 * @tc.desc: test for Scale.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_Scale, TestSize.Level1)
{
    OH_Drawing_Matrix* matrix = OH_Drawing_MatrixCreate();
    OH_Drawing_MatrixScale(nullptr, 10, 10, 10, 10);
    OH_Drawing_MatrixScale(matrix, 10, 10, 10, 10);
    float value;
    value = OH_Drawing_MatrixGetValue(matrix, 0);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 10));
    value = OH_Drawing_MatrixGetValue(matrix, 1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 2);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -90));

    value = OH_Drawing_MatrixGetValue(matrix, 3);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 4);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 10));
    value = OH_Drawing_MatrixGetValue(matrix, 5);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -90));

    value = OH_Drawing_MatrixGetValue(matrix, 6);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 7);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));

    OH_Drawing_MatrixDestroy(matrix);
}

/*
 * @tc.name: NativeDrawingMatrixTest_Translate
 * @tc.desc: test for Translate.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_Translate, TestSize.Level1)
{
    OH_Drawing_Matrix* matrix = OH_Drawing_MatrixCreate();
    bool ret;
    ret = OH_Drawing_MatrixIsIdentity(matrix);
    EXPECT_TRUE(ret);
    ret = OH_Drawing_MatrixIsIdentity(nullptr);
    EXPECT_TRUE(!ret);
    OH_Drawing_MatrixTranslate(nullptr, 100, 200);
    OH_Drawing_MatrixTranslate(matrix, 100, 200);
    ret = OH_Drawing_MatrixIsIdentity(matrix);
    EXPECT_TRUE(!ret);
    float value;
    value = OH_Drawing_MatrixGetValue(matrix, 0);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));
    value = OH_Drawing_MatrixGetValue(matrix, 1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 2);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 100));

    value = OH_Drawing_MatrixGetValue(matrix, 3);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 4);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));
    value = OH_Drawing_MatrixGetValue(matrix, 5);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 200));

    value = OH_Drawing_MatrixGetValue(matrix, 6);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 7);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrix, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));

    OH_Drawing_MatrixDestroy(matrix);
}

/*
 * @tc.name: NativeDrawingMatrixTest_Invert
 * @tc.desc: test for Invert.
 * @tc.size  : MediumTest
 * @tc.type  : Function
 * @tc.level : Level 1
 */
HWTEST_F(NativeDrawingMatrixTest, NativeDrawingMatrixTest_Invert, TestSize.Level1)
{
    bool ret;
    ret = OH_Drawing_MatrixInvert(nullptr, nullptr);
    EXPECT_TRUE(!ret);
    OH_Drawing_Matrix* matrixA = OH_Drawing_MatrixCreate();
    OH_Drawing_Matrix* matrixB = OH_Drawing_MatrixCreate();
    ret = OH_Drawing_MatrixInvert(nullptr, matrixB);
    EXPECT_TRUE(!ret);
    ret = OH_Drawing_MatrixInvert(matrixA, nullptr);
    EXPECT_TRUE(!ret);
    ret = OH_Drawing_MatrixInvert(matrixA, matrixB);
    EXPECT_TRUE(ret);
    OH_Drawing_MatrixSetMatrix(
        matrixA,
        1, 0, 0,
        0, -0.5, 0,
        0, 0, 1);
    ret = OH_Drawing_MatrixInvert(matrixA, matrixB);
    EXPECT_TRUE(ret);

    float value;
    value = OH_Drawing_MatrixGetValue(matrixB, 0);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));
    value = OH_Drawing_MatrixGetValue(matrixB, 1);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrixB, 2);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));

    value = OH_Drawing_MatrixGetValue(matrixB, 3);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrixB, 4);
    EXPECT_TRUE(IsScalarAlmostEqual(value, -2));
    value = OH_Drawing_MatrixGetValue(matrixB, 5);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));

    value = OH_Drawing_MatrixGetValue(matrixB, 6);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrixB, 7);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 0));
    value = OH_Drawing_MatrixGetValue(matrixB, 8);
    EXPECT_TRUE(IsScalarAlmostEqual(value, 1));

    OH_Drawing_MatrixDestroy(matrixA);
    OH_Drawing_MatrixDestroy(matrixB);
}
} // namespace Drawing
} // namespace Rosen
} // namespace OHOS