/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

#ifndef IMAGE_PACKER_TEST_H
#define IMAGE_PACKER_TEST_H

#include <memory>
#include <string>
#include "napi/native_api.h"
#include "napi/native_node_api.h"
#include "image_packer_module_test.h"

namespace OHOS {
namespace Media {
class ImagePackerTest {
public:
    static napi_value JsPackToDataMultiFrames(napi_env env, napi_callback_info info);
    static napi_value JsPackToFileMultiFrames(napi_env env, napi_callback_info info);

private:
};
} // namespace Media
} // namespace OHOS
#endif // IMAGE_PACKER_TEST_H