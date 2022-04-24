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

import { describe, it, expect } from 'deccjsunit/index';
import { HuksCipherRSA } from '../../../../../../../../../utils/param/cipher/publicCipherParam.js';
import { stringToUint8Array } from '../../../../../../../../../utils/param/publicFunc.js';
import { publicCipherFunc } from '../../../../../../../../../utils/param/cipher/publicCipherCallbackRSA.js';
import * as Control from '../../../switchControl.js';
let defaultData = '0';
let gInData5 = 'RSA_5';
let gInData12 = 'RSA_12_ttttt';
let gInData32 = 'RSA_32_ttttttttttttttttttttttttt';
let gInData96 =
  'RSA_96_ttttttttttttttttttttttttttttttttttttttttttttttttttttttttt' +
  'tttttttttttttttttttttttttttttttt';

let gInData5Array = stringToUint8Array(gInData5);
let gInData12Array = stringToUint8Array(gInData12);
let gInData32Array = stringToUint8Array(gInData32);
let gInData96Array = stringToUint8Array(gInData96);

let updateResult = new Array();

let genHuksOptions = {
  properties: new Array(
    HuksCipherRSA.HuksKeyAlgRSA,
    HuksCipherRSA.HuksKeyPurpose,
    HuksCipherRSA.HuksKeyRSASize768
  ),
  inData: new Uint8Array(defaultData),
};

describe('SecurityHuksCipherRSACallbackJsunit', function () {
  if (Control.isOpenSSL) {
    it('testCipherRSASize768PADDINGNONESHA256001', 0, async function (done) {
      const srcKeyAlies = 'testCipherRSASize768PADDINGNONESHA256KeyAlias001';
      const newSrcKeyAlies =
        'testCipherRSASize768PADDINGNONESHA256NewKeyAlias001';
      genHuksOptions.properties.splice(
        3,
        1,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB
      );
      genHuksOptions.properties.splice(
        4,
        1,
        HuksCipherRSA.HuksKeyRSAPADDINGNONE
      );
      genHuksOptions.properties.splice(
        5,
        1,
        HuksCipherRSA.HuksKeyRSADIGESTSHA256
      );

      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData96Array,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        true
      );
      HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeDECRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: new Uint8Array(updateResult),
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        false
      );
      done();
    });

    it('testCipherRSASize768PADDINGNONESHA256002', 0, async function (done) {
      const srcKeyAlies = 'testCipherRSASize768PADDINGNONESHA256KeyAlias002';
      const newSrcKeyAlies =
        'testCipherRSASize768PADDINGNONESHA256NewKeyAlias001';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData96Array,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'abort',
        true
      );
      done();
    });

    it('testCipherRSASize768PADDINGNONESHA256003', 0, async function (done) {
      const srcKeyAlies = 'testCipherRSASize768PADDINGNONESHA256KeyAlias001';
      const newSrcKeyAlies =
        'testCipherRSASize768PADDINGNONESHA256NewKeyAlias001';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData96Array,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        true
      );
      HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeDECRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: new Uint8Array(updateResult),
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        false
      );
      done();
    });

    it('testCipherRSASize768PADDINGNONESHA256004', 0, async function (done) {
      const srcKeyAlies = 'testCipherRSASize768PADDINGNONESHA256KeyAlias002';
      const newSrcKeyAlies =
        'testCipherRSASize768PADDINGNONESHA256NewKeyAlias001';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData96Array,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'abort',
        true
      );
      done();
    });
  }

  it(
    'testCipherRSASize768PADDINGPKCS1_V1_5SHA256001',
    0,
    async function (done) {
      const srcKeyAlies =
        'testCipherRSASize768PADDINGPKCS1_V1_5SHA256KeyAlias001';
      const newSrcKeyAlies =
        'testCipherRSASize768PADDINGPKCS1_V1_5SHA256NewKeyAlias001';
      genHuksOptions.properties.splice(
        3,
        1,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB
      );
      genHuksOptions.properties.splice(
        4,
        1,
        HuksCipherRSA.HuksKeyRSAPADDINGPKCS1V15
      );
      genHuksOptions.properties.splice(
        5,
        1,
        HuksCipherRSA.HuksKeyRSADIGESTSHA256
      );

      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGPKCS1V15,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData32Array,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        true
      );
      HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeDECRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGPKCS1V15,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: new Uint8Array(updateResult),
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        false
      );
      done();
    }
  );

  it(
    'testCipherRSASize768PADDINGPKCS1_V1_5SHA256002',
    0,
    async function (done) {
      const srcKeyAlies =
        'testCipherRSASize768PADDINGPKCS1_V1_5SHA256KeyAlias002';
      const newSrcKeyAlies =
        'testCipherRSASize768PADDINGPKCS1_V1_5SHA256NewKeyAlias001';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGPKCS1V15,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData32Array,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'abort',
        true
      );
      done();
    }
  );

  it(
    'testCipherRSASize768PADDINGPKCS1_V1_5SHA256003',
    0,
    async function (done) {
      const srcKeyAlies =
        'testCipherRSASize768PADDINGPKCS1_V1_5SHA256KeyAlias001';
      const newSrcKeyAlies =
        'testCipherRSASize768PADDINGPKCS1_V1_5SHA256NewKeyAlias001';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGPKCS1V15,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData32Array,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        true
      );
      HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeDECRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGPKCS1V15,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: new Uint8Array(updateResult),
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'finish',
        false
      );
      done();
    }
  );

  it(
    'testCipherRSASize768PADDINGPKCS1_V1_5SHA256004',
    0,
    async function (done) {
      const srcKeyAlies =
        'testCipherRSASize768PADDINGPKCS1_V1_5SHA256KeyAlias002';
      const newSrcKeyAlies =
        'testCipherRSASize768PADDINGPKCS1_V1_5SHA256NewKeyAlias001';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize768,
          HuksCipherRSA.HuksKeyRSAPADDINGPKCS1V15,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData32Array,
        outData: stringToUint8Array('0'),
      };
      updateResult = await publicCipherFunc(
        srcKeyAlies,
        newSrcKeyAlies,
        genHuksOptions,
        HuksOptions,
        'abort',
        true
      );
      done();
    }
  );

  it('testCipherRSASize768PADDINGOAEPSHA1001', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA1KeyAlias001';
    const newSrcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA1NewKeyAlias001';
    genHuksOptions.properties.splice(
      3,
      1,
      HuksCipherRSA.HuksKeyRSABLOCKMODEECB
    );
    genHuksOptions.properties.splice(4, 1, HuksCipherRSA.HuksKeyRSAPADDINGOAEP);
    genHuksOptions.properties.splice(5, 1, HuksCipherRSA.HuksKeyRSADIGESTSHA1);

    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA1
      ),
      inData: gInData32Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeDECRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA1
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA1002', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA256KeyAlias002';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA256NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA1
      ),
      inData: gInData32Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA1003', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA1KeyAlias001';
    const newSrcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA1NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA1
      ),
      inData: gInData32Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeDECRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA1
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA1004', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA1KeyAlias002';
    const newSrcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA1NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA1
      ),
      inData: gInData32Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA224001', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA224KeyAlias001';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA224NewKeyAlias001';
    genHuksOptions.properties.splice(
      3,
      1,
      HuksCipherRSA.HuksKeyRSABLOCKMODEECB
    );
    genHuksOptions.properties.splice(4, 1, HuksCipherRSA.HuksKeyRSAPADDINGOAEP);
    genHuksOptions.properties.splice(
      5,
      1,
      HuksCipherRSA.HuksKeyRSADIGESTSHA224
    );

    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA224
      ),
      inData: gInData32Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeDECRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA224
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA224002', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA256KeyAlias002';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA256NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA224
      ),
      inData: gInData32Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA224003', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA224KeyAlias001';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA224NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA224
      ),
      inData: gInData32Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeDECRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA224
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA224004', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA224KeyAlias002';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA224NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA224
      ),
      inData: gInData32Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA256001', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA256KeyAlias001';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA256NewKeyAlias001';
    genHuksOptions.properties.splice(
      3,
      1,
      HuksCipherRSA.HuksKeyRSABLOCKMODEECB
    );
    genHuksOptions.properties.splice(4, 1, HuksCipherRSA.HuksKeyRSAPADDINGOAEP);
    genHuksOptions.properties.splice(
      5,
      1,
      HuksCipherRSA.HuksKeyRSADIGESTSHA256
    );

    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA256
      ),
      inData: gInData12Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeDECRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA256
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA256002', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA256KeyAlias002';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA256NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA256
      ),
      inData: gInData12Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA256003', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA256KeyAlias001';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA256NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA256
      ),
      inData: gInData12Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      true
    );
    HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeDECRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA256
      ),
      inData: new Uint8Array(updateResult),
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'finish',
      false
    );
    done();
  });

  it('testCipherRSASize768PADDINGOAEPSHA256004', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize768PADDINGOAEPSHA256KeyAlias002';
    const newSrcKeyAlies =
      'testCipherRSASize768PADDINGOAEPSHA256NewKeyAlias001';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize768,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
        HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
        HuksCipherRSA.HuksKeyRSADIGESTSHA256
      ),
      inData: gInData12Array,
      outData: stringToUint8Array('0'),
    };
    updateResult = await publicCipherFunc(
      srcKeyAlies,
      newSrcKeyAlies,
      genHuksOptions,
      HuksOptions,
      'abort',
      true
    );
    done();
  });
});
