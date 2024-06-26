/*
 * Copyright (c) 2021-2023 Huawei Device Co., Ltd.
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

#ifndef ACTS_SCALAR_H
#define ACTS_SCALAR_H

#include <cmath>
#include <limits>

namespace OHOS {
namespace Rosen {
namespace Drawing {

typedef float scalar;
bool IsScalarAlmostEqual(scalar a, scalar b) { return fabs(a - b) < std::numeric_limits<scalar>::min(); }

} // namespace Drawing
} // namespace Rosen
} // namespace OHOS
#endif
