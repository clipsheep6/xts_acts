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
import { HuksCipherRSA } from '../../../../../../../../../utils/param/cipher/publicCipherParam.js';
import { stringToUint8Array } from '../../../../../../../../../utils/param/publicFunc.js';
import { publicCipherFunc } from '../../../../../../../../../utils/param/cipher/publicCipherPromiseRSA.js';
import * as Control from '../../../switchControl.js';

let gInData32 = 'RSA_32_ttttttttttttttttttttttttt';
let gInData128 =
  'RSA_128_tttttttttttttttttttttttttttttttttttttttttttttttttttttttt' +
  'tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt';

let defaultData = '0';

let gInData32Array = stringToUint8Array(gInData32);
let gInData128Array = stringToUint8Array(gInData128);
let updateResult = new Array();

let genHuksOptions = {
  properties: new Array(
    HuksCipherRSA.HuksKeyAlgRSA,
    HuksCipherRSA.HuksKeyPurpose,
    HuksCipherRSA.HuksKeyRSASize1024
  ),
  inData: new Uint8Array(defaultData),
};

describe('SecurityHuksCipherRSAPromiseJsunit', function () {
  if (Control.isOpenSSL) {
    it('testCipherRSASize1024PADDINGNONESHA256101', 0, async function (done) {
      const srcKeyAlies = 'testCipherRSASize1024PADDINGNONESHA256KeyAlias101';
      const newSrcKeyAlies =
        'testCipherRSASize1024PADDINGNONESHA256NewKeyAlias101';
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
          HuksCipherRSA.HuksKeyRSASize1024,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData128Array,
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
          HuksCipherRSA.HuksKeyRSASize1024,
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

    it('testCipherRSASize1024PADDINGNONESHA256102', 0, async function (done) {
      const srcKeyAlies = 'testCipherRSASize1024PADDINGNONESHA256KeyAlias102';
      const newSrcKeyAlies =
        'testCipherRSASize1024PADDINGNONESHA256NewKeyAlias101';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize1024,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData128Array,
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

    it('testCipherRSASize1024PADDINGNONESHA256103', 0, async function (done) {
      const srcKeyAlies = 'testCipherRSASize1024PADDINGNONESHA256KeyAlias101';
      const newSrcKeyAlies =
        'testCipherRSASize1024PADDINGNONESHA256NewKeyAlias101';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize1024,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData128Array,
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
          HuksCipherRSA.HuksKeyRSASize1024,
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

    it('testCipherRSASize1024PADDINGNONESHA256104', 0, async function (done) {
      const srcKeyAlies = 'testCipherRSASize1024PADDINGNONESHA256KeyAlias102';
      const newSrcKeyAlies =
        'testCipherRSASize1024PADDINGNONESHA256NewKeyAlias101';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize1024,
          HuksCipherRSA.HuksKeyRSAPADDINGNONE,
          HuksCipherRSA.HuksKeyRSABLOCKMODEECB,
          HuksCipherRSA.HuksKeyRSADIGESTSHA256
        ),
        inData: gInData128Array,
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
    'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256101',
    0,
    async function (done) {
      const srcKeyAlies =
        'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256KeyAlias101';
      const newSrcKeyAlies =
        'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256NewKeyAlias101';
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
          HuksCipherRSA.HuksKeyRSASize1024,
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
          HuksCipherRSA.HuksKeyRSASize1024,
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
    'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256102',
    0,
    async function (done) {
      const srcKeyAlies =
        'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256KeyAlias102';
      const newSrcKeyAlies =
        'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256NewKeyAlias101';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize1024,
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
    'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256103',
    0,
    async function (done) {
      const srcKeyAlies =
        'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256KeyAlias101';
      const newSrcKeyAlies =
        'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256NewKeyAlias101';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize1024,
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
          HuksCipherRSA.HuksKeyRSASize1024,
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
    'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256104',
    0,
    async function (done) {
      const srcKeyAlies =
        'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256KeyAlias102';
      const newSrcKeyAlies =
        'testCipherRSASize1024PADDINGPKCS1_V1_5SHA256NewKeyAlias101';
      let HuksOptions = {
        properties: new Array(
          HuksCipherRSA.HuksKeyAlgRSA,
          HuksCipherRSA.HuksKeyPurposeENCRYPT,
          HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA1101', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA1KeyAlias101';
    const newSrcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA1NewKeyAlias101';
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
        HuksCipherRSA.HuksKeyRSASize1024,
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
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA1102', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA256KeyAlias102';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA256NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA1103', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA1KeyAlias101';
    const newSrcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA1NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
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
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA1104', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA1KeyAlias102';
    const newSrcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA1NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA224101', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA224KeyAlias101';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA224NewKeyAlias101';
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
        HuksCipherRSA.HuksKeyRSASize1024,
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
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA224102', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA256KeyAlias102';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA256NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA224103', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA224KeyAlias101';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA224NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
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
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA224104', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA224KeyAlias102';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA224NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA256101', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA256KeyAlias101';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA256NewKeyAlias101';
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
        HuksCipherRSA.HuksKeyRSASize1024,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
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
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA256102', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA256KeyAlias102';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA256NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
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
  });

  it('testCipherRSASize1024PADDINGOAEPSHA256103', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA256KeyAlias101';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA256NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
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
        HuksCipherRSA.HuksKeyRSASize1024,
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

  it('testCipherRSASize1024PADDINGOAEPSHA256104', 0, async function (done) {
    const srcKeyAlies = 'testCipherRSASize1024PADDINGOAEPSHA256KeyAlias102';
    const newSrcKeyAlies =
      'testCipherRSASize1024PADDINGOAEPSHA256NewKeyAlias101';
    let HuksOptions = {
      properties: new Array(
        HuksCipherRSA.HuksKeyAlgRSA,
        HuksCipherRSA.HuksKeyPurposeENCRYPT,
        HuksCipherRSA.HuksKeyRSASize1024,
        HuksCipherRSA.HuksKeyRSAPADDINGOAEP,
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
  });
});
