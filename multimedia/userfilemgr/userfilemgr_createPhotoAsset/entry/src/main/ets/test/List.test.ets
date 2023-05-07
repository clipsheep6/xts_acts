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

import createPhotoAssetCallback from "./createPhotoAssetCallback.test.ets";
import createPhotoAssetPromise from "./createPhotoAssetPromise.test.ets";
import deleteCallback from "./deleteCallback.test.ets";
import deletePromise from "./deletePromise.test.ets";
import openCallback from "./openCallback.test.ets";
import openPromise from "./openPromise.test.ets";

export default function testsuite() {
    createPhotoAssetCallback(globalThis.abilityContext);
    createPhotoAssetPromise(globalThis.abilityContext);
    openCallback(globalThis.abilityContext);
    openPromise(globalThis.abilityContext);
    deleteCallback(globalThis.abilityContext);
    deletePromise(globalThis.abilityContext);
}
