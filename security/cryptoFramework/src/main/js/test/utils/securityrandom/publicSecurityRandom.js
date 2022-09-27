/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import { expect } from "@ohos/hypium";
import cryptoFramework from "@ohos.security.cryptoFramework";
import {
    stringTouInt8Array,
    uInt8ArrayToShowStr,
    uInt8ArrayToString,
} from "../common/publicDoString";

async function testSecurityRandomPromise(length) {
    var rand;
    var promiseGenerateRand;

    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.error("start testSecurityRandomPromise");
            resolve("")
        }, 20);
    }).then(() => {
        rand = cryptoFramework.createRandom();
        console.warn("start to call generateRandom() by promise");
        expect(rand != null).assertTrue();
        promiseGenerateRand = rand.generateRandom(length);
        expect(promiseGenerateRand != null).assertTrue();
        return promiseGenerateRand;
    }).then(randData => {
        console.log("[Promise] rand result first:" +uInt8ArrayToShowStr(randData.data));
        let ret = rand.setSeed(randData);
        expect(ret != null).assertTrue();
    }).then(() => {
        console.log("[Promise] setSeed success");
    }).then(() => {
        promiseGenerateRand = rand.generateRandom(length);
        expect(promiseGenerateRand != null).assertTrue();
        return promiseGenerateRand;
    }).then((randData) => {
        console.log("[Promise] rand result second: " + uInt8ArrayToShowStr(randData.data));
    }).catch(err => {
        console.error("[promise]catch err:" + err.code);
        expect(null).assertFail();
    })
}

export { testSecurityRandomPromise };
