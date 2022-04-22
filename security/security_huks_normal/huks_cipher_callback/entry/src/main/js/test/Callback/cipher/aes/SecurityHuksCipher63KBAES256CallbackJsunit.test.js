/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import { describe, it } from 'deccjsunit/index';
import {
  HuksCipherAES,
  genHuksOptions,
} from '../../../../../../../../../utils/param/cipher/publicCipherParam.js';
import { stringToUint8Array } from '../../../../../../../../../utils/param/publicFunc.js';
import { publicCipherFunc } from '../../../../../../../../../utils/param/cipher/publicCipherCallback.js';
import { HksTag } from '../../../../../../../../../utils/param/publicParam.js';
import * as Control from '../../../switchControl.js';

let IV = '0000000000000000';

let defaultData = '0';
let srcData65 =
  'Hks_AES_Cipher_Test_00000000000000000000000000000000000000000000000000000_string';
let srcData65Kb = stringToUint8Array(srcData65);

let srcData63 = 'Hks_AES_Cipher_Test_000000000000000000000_string';
let srcData63Kb = stringToUint8Array(srcData63);

let updateResult = new Array();

describe('SecurityHuksCipherAESCallbackJsunit', function () {
  it('testCipherAESSize256PADDINGNONEMODECBC001', 0, async function (done) {
    const srcKeyAlies = 'testCipherAESSize256PADDINGNONEMODECBCKeyAlias001';
    genHuksOptions.properties.splice(2, 1, HuksCipherAES.HuksKeyAESSize256);
    genHuksOptions.properties.splice(3, 1, HuksCipherAES.HuksKeyAESBLOCKMODE);
    genHuksOptions.properties.splice(4, 1, HuksCipherAES.HuksKeyAESPADDINGNONE);
    let HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeENCRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODE,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: srcData63Kb,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    console.log(`test updateResult ${updateResult.length}`);
    HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeDECRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODE,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherAESSize256PADDINGNONEMODECBC002', 0, async function (done) {
    const srcKeyAlies = 'testCipherAESSize256PADDINGNONEMODECBCKeyAlias002';
    let HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeENCRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODE,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  it('testCipherAESSize256PADDINGPKCS7MODECBC001', 0, async function (done) {
    const srcKeyAlies = 'testCipherAESSize256PADDINGPKCS7MODECBCKeyAlias001';
    genHuksOptions.properties.splice(2, 1, HuksCipherAES.HuksKeyAESSize256);
    genHuksOptions.properties.splice(
      3,
      1,
      HuksCipherAES.HuksKeyAESPADDINGPKCS7
    );
    genHuksOptions.properties.splice(4, 1, HuksCipherAES.HuksKeyAESBLOCKMODE);
    let HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeENCRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGPKCS7,
        HuksCipherAES.HuksKeyAESBLOCKMODE,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: srcData65Kb,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeDECRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGPKCS7,
        HuksCipherAES.HuksKeyAESBLOCKMODE,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherAESSize256PADDINGPKCS7MODECBC002', 0, async function (done) {
    const srcKeyAlies = 'testCipherAESSize256PADDINGPKCS7MODECBCKeyAlias002';
    let HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeENCRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGPKCS7,
        HuksCipherAES.HuksKeyAESBLOCKMODE,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  it('testCipherAESSize256PADDINGNONEMODECTR001', 0, async function (done) {
    const srcKeyAlies = 'testCipherAESSize256PADDINGNONEMODECTRKeyAlias001';
    genHuksOptions.properties.splice(2, 1, HuksCipherAES.HuksKeyAESPADDINGNONE);
    genHuksOptions.properties.splice(3, 1, HuksCipherAES.HuksKeyAESSize256);
    genHuksOptions.properties.splice(
      4,
      1,
      HuksCipherAES.HuksKeyAESBLOCKMODECTR
    );
    let HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeENCRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODECTR,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: srcData63Kb,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeDECRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODECTR,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherAESSize256PADDINGNONEMODECTR002', 0, async function (done) {
    const srcKeyAlies = 'testCipherAESSize256PADDINGNONEMODECTRKeyAlias002';
    let HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeENCRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODECTR,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  it('testCipherAESSize256PADDINGNONEMODEECB001', 0, async function (done) {
    const srcKeyAlies = 'testCipherAESSize256PADDINGNONEMODEECBKeyAlias001';
    genHuksOptions.properties.splice(2, 1, HuksCipherAES.HuksKeyAESSize256);
    genHuksOptions.properties.splice(
      3,
      1,
      HuksCipherAES.HuksKeyAESBLOCKMODEECB
    );
    genHuksOptions.properties.splice(4, 1, HuksCipherAES.HuksKeyAESPADDINGNONE);
    let HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeENCRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODEECB,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: srcData63Kb,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeDECRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODEECB,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherAESSize256PADDINGNONEMODEECB002', 0, async function (done) {
    const srcKeyAlies = 'testCipherAESSize256PADDINGNONEMODEECBKeyAlias002';
    let HuksOptions = {
      properties: new Array(
        HuksCipherAES.HuksKeyAlgAES,
        HuksCipherAES.HuksKeyPurposeENCRYPT,
        HuksCipherAES.HuksKeyAESSize256,
        HuksCipherAES.HuksKeyAESPADDINGNONE,
        HuksCipherAES.HuksKeyAESBLOCKMODEECB,
        HuksCipherAES.HuksKeyAESDIGESTNONE,
        { tag: HksTag.HKS_TAG_IV, value: stringToUint8Array(IV) }
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  if (Control.isOpenSSL) {
    it('testCipherAESSize256PADDINGPKCS7MODEECB001', 0, async function (done) {
      const srcKeyAlies = 'testCipherAESSize256PADDINGPKCS7MODEECBKeyAlias001';
      genHuksOptions.properties.splice(2, 1, HuksCipherAES.HuksKeyAESSize256);
      genHuksOptions.properties.splice(
        3,
        1,
        HuksCipherAES.HuksKeyAESPADDINGPKCS7
      );
      genHuksOptions.properties.splice(
        4,
        1,
        HuksCipherAES.HuksKeyAESBLOCKMODEECB
      );
      let HuksOptions = {
        properties: new Array(
          HuksCipherAES.HuksKeyAlgAES,
          HuksCipherAES.HuksKeyPurposeENCRYPT,
          HuksCipherAES.HuksKeyAESSize256,
          HuksCipherAES.HuksKeyAESPADDINGPKCS7,
          HuksCipherAES.HuksKeyAESBLOCKMODEECB,
          HuksCipherAES.HuksKeyAESDIGESTNONE,
          {
            tag: HksTag.HKS_TAG_IV,
            value: stringToUint8Array(IV),
          }
        ),
        inData: srcData65Kb,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        true
      );
      HuksOptions = {
        properties: new Array(
          HuksCipherAES.HuksKeyAlgAES,
          HuksCipherAES.HuksKeyPurposeDECRYPT,
          HuksCipherAES.HuksKeyAESSize256,
          HuksCipherAES.HuksKeyAESPADDINGPKCS7,
          HuksCipherAES.HuksKeyAESBLOCKMODEECB,
          HuksCipherAES.HuksKeyAESDIGESTNONE,
          {
            tag: HksTag.HKS_TAG_IV,
            value: stringToUint8Array(IV),
          }
        ),
        inData: new Uint8Array(updateResult),
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        false
      );
      done();
    });

    it('testCipherAESSize256PADDINGPKCS7MODEECB002', 0, async function (done) {
      const srcKeyAlies = 'testCipherAESSize256PADDINGPKCS7MODEECBKeyAlias002';
      let HuksOptions = {
        properties: new Array(
          HuksCipherAES.HuksKeyAlgAES,
          HuksCipherAES.HuksKeyPurposeENCRYPT,
          HuksCipherAES.HuksKeyAESSize256,
          HuksCipherAES.HuksKeyAESPADDINGPKCS7,
          HuksCipherAES.HuksKeyAESBLOCKMODEECB,
          HuksCipherAES.HuksKeyAESDIGESTNONE,
          {
            tag: HksTag.HKS_TAG_IV,
            value: stringToUint8Array(IV),
          }
        ),
        inData: srcData65Kb,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'abort',
        true
      );
      done();
    });
  }
});
