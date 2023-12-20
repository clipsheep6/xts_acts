/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

#ifndef OPENCV_NATIVE_TEST_H
#define OPENCV_NATIVE_TEST_H

#include "napi/native_api.h"
#include "opencv_native.h"

namespace OHOS {
namespace Media {
class OpenCVNDKTest {
public:
    static napi_value Init(napi_env env, napi_value exports);
    static napi_value Erode(napi_env env, napi_callback_info info);
    static napi_value Dilate(napi_env env, napi_callback_info info);
    static napi_value MorphologyEx(napi_env env, napi_callback_info info);
    static napi_value Resize(napi_env env, napi_callback_info info);
    static napi_value WarpAffine(napi_env env, napi_callback_info info);
    static napi_value WarpPerspective(napi_env env, napi_callback_info info);
    static napi_value Remap(napi_env env, napi_callback_info info);
    static napi_value GetRotationMatrix2D(napi_env env, napi_callback_info info);
    static napi_value GetPerspectiveTransform(napi_env env, napi_callback_info info);
    static napi_value Sobel(napi_env env, napi_callback_info info);
    static napi_value Threshold(napi_env env, napi_callback_info info);
    static napi_value CvtColor(napi_env env, napi_callback_info info);
    static napi_value Blur(napi_env env, napi_callback_info info);
    static napi_value FillPoly(napi_env env, napi_callback_info info);
    static napi_value AdaptiveThreshold(napi_env env, napi_callback_info info);
    static napi_value FindContours(napi_env env, napi_callback_info info);
    static napi_value BoxFilter(napi_env env, napi_callback_info info);
    static napi_value BorderInterpolate(napi_env env, napi_callback_info info);
    static napi_value CountNonZero(napi_env env, napi_callback_info info);
    static napi_value CopyMakeBorder(napi_env env, napi_callback_info info);
    static napi_value Split(napi_env env, napi_callback_info info);
    static napi_value Merge(napi_env env, napi_callback_info info);
    static napi_value MinMaxLoc(napi_env env, napi_callback_info info);
    static napi_value Normalize(napi_env env, napi_callback_info info);
    static napi_value MixChannels(napi_env env, napi_callback_info info);
};
} // namespace Media
} // namespace OHOS
#endif // OPENCV_NATIVE_TEST_H