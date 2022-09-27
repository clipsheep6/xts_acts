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
import { stringTouInt8Array, uInt8ArrayToShowStr, uInt8ArrayToString } from "../common/publicDoString";

function testEncryptionDecryptionPromise(asyAlgoName, cipherAlgoName) {
    var globalPubkey;
    var globalPrikey;
    var globalCipherEncrypt;
    var globalCipherDecrypt;
    var globalCipherBlob;
    var globalText = "This is a cipher test";

    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.error("start testEncryptionDecryptionPromise test");
            resolve("");
        }, 1200)
    }).then(() => {
        console.error("algoname: " + asyAlgoName);
        let rsaGenerator = cryptoFramework.createAsyKeyGenerator(asyAlgoName);
        console.warn("[Promise]: algName = " + rsaGenerator.algName);
        expect(rsaGenerator != null).assertTrue();
        globalCipherEncrypt = cryptoFramework.createCipher(cipherAlgoName);
        expect(globalCipherEncrypt != null).assertTrue();
        let keyGenPromise = rsaGenerator.generateKeyPair();
        expect(keyGenPromise != null).assertTrue();
        return keyGenPromise;
    }).then(rsaKeyPair => {
        globalPubkey = rsaKeyPair.pubKey;
        let encodedPubKey = globalPubkey.getEncoded();
        console.warn("[Promise]: pubKey.getAlgorithm= " + globalPubkey.algName);
        console.warn("[Promise]: pubKey.getEncoded= " + encodedPubKey.data);
        console.warn("[Promise]: pubKey.getFormat= " + globalPubkey.format);
        globalPrikey = rsaKeyPair.priKey;
        let encodedPriKey = globalPrikey.getEncoded();
        console.warn("[Promise]: priKey.getAlgorithm= " + globalPrikey.algName);
        console.warn("[Promise]: priKey.getEncoded= " + encodedPriKey.data);
        console.warn("[Promise]: priKey.getFormat= " + globalPrikey.format);
        return rsaKeyPair.pubKey;
    }).then(pubKey => {
        console.info("[Promise]:start init =====================[encrypt]");
        globalCipherEncrypt.init(cryptoFramework.CryptoMode.ENCRYPT_MODE, pubKey, null);
        return;
    }).then(() => {
        let input = { data: stringTouInt8Array(globalText) };
        console.warn("plaintext hex: " + uInt8ArrayToShowStr(input.data));
        console.info("[Promise]:start doFinal =====================[encrypt]");
        let cipherFinalPromise = globalCipherEncrypt.doFinal(input);
        expect(cipherFinalPromise != null).assertTrue();
        return cipherFinalPromise;
    }).then(dataBlob => {
        globalCipherBlob = dataBlob;
        console.log("cipherOutput: " + uInt8ArrayToShowStr(dataBlob.data));
        globalCipherDecrypt = cryptoFramework.createCipher(cipherAlgoName);
        expect(globalCipherDecrypt != null).assertTrue();
        console.log("[Promise]:start init =====================[decrypt]");
        var promiseInit = globalCipherDecrypt.init(cryptoFramework.CryptoMode.DECRYPT_MODE, globalPrikey, null);
        return promiseInit;
    }).then(() => {
        console.log("[Promise]:start doFinal =====================[decrypt]");
        let promiseFinal = globalCipherDecrypt.doFinal(globalCipherBlob);
        return promiseFinal;
    }).then(finalOutput => {
        expect(finalOutput != null).assertTrue();
        if (finalOutput == null) {
            console.warn("decrypt doFinal out is null");
        } else {
            console.warn("decrypt doFinal output hex:" + uInt8ArrayToShowStr(finalOutput.data));
            console.warn("decrypt doFinal output :" + uInt8ArrayToString(finalOutput.data));
        }
        let decryptData = uInt8ArrayToString(finalOutput.data);
        expect(decryptData == globalText).assertTrue();
    }).catch(err => {
        console.error("err: " + err.code);
        expect(null).assertFail();
    })
}


export { testEncryptionDecryptionPromise };
