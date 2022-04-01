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

import { describe, it, beforeEach } from 'deccjsunit/index';
import * as Data from '../../../../../../../../../../utils/data.json';
import { stringToUint8Array } from '../../../../../../../../../../utils/param/publicFunc.js';
import { HksTag } from '../../../../../../../../../../utils/param/publicParam.js';
import { publicDeriveFunc } from '../../../../../../../../../../utils/param/derive/publicDeriveCallbackFunc.js';
import { HuksDeriveHKDF } from '../../../../../../../../../../utils/param/derive/publicDeriveParam.js';

let srcData63 = Data.Date63KB;
let srcData63Kb = stringToUint8Array(srcData63);
let HuksOptions63kb = {};

describe('SecurityHuksDeriveHKDFCallbackJsunit', function () {
  beforeEach(function () {
    HuksOptions63kb = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeyAlgAES,
        HuksDeriveHKDF.HuksKeyPurposeHKDF,
        HuksDeriveHKDF.HuksTagHKDFDigestSHA512,
        HuksDeriveHKDF.HuksKeyHKDFSize128
      ),
      inData: srcData63Kb,
    };
    console.info('test beforeEach called');
  });
  it('testDeriveHKDFSize128SHA512Abort63KBDerive001', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_001';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive002', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_002';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive003', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_003';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGPKCS7,
        HuksDeriveHKDF.HuksKeyBLOCKMODECBC
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive004', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_004';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGPKCS7,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive005', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_005';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODECCM
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive006', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_006';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEGCM
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive007', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_007';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODECTR
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive008', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_008';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeDERIVE,
        HuksDeriveHKDF.HuksKeyDIGESTSHA256,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive009', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_009';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeDERIVE,
        HuksDeriveHKDF.HuksKeyDIGESTSHA384,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive010', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_010';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeDERIVE,
        HuksDeriveHKDF.HuksKeyDIGESTSHA512,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive011', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_011';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODECBC
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive012', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_012';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive013', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_013';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGPKCS7,
        HuksDeriveHKDF.HuksKeyBLOCKMODECBC
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive014', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_014';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGPKCS7,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive015', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_015';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODECCM
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive016', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_016';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEGCM
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive017', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_017';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODECTR
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive018', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_018';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeDERIVE,
        HuksDeriveHKDF.HuksKeyDIGESTSHA256,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive019', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_019';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTSHA384,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive020', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_020';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE128,
        HuksDeriveHKDF.HuksKeyPurposeDERIVE,
        HuksDeriveHKDF.HuksKeyDIGESTSHA512,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive021', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_021';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODECBC
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive022', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_022';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive023', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_023';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGPKCS7,
        HuksDeriveHKDF.HuksKeyBLOCKMODECBC
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive024', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_024';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGPKCS7,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive025', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_025';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODECCM
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive026', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_026';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEGCM
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive027', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_027';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeENCRYPTDECRYPT,
        HuksDeriveHKDF.HuksKeyDIGESTNONE,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODECTR
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive028', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_028';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeDERIVE,
        HuksDeriveHKDF.HuksKeyDIGESTSHA256,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive029', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_029';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeDERIVE,
        HuksDeriveHKDF.HuksKeyDIGESTSHA512,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive030', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_030';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMHMAC,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeMAC,
        HuksDeriveHKDF.HuksKeyDIGESTSHA1,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive031', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_031';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMHMAC,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeMAC,
        HuksDeriveHKDF.HuksKeyDIGESTSHA224,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive032', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_032';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMHMAC,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeMAC,
        HuksDeriveHKDF.HuksKeyDIGESTSHA256,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive033', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_033';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMHMAC,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeMAC,
        HuksDeriveHKDF.HuksKeyDIGESTSHA384,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive034', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_034';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMHMAC,
        HuksDeriveHKDF.HuksKeySIZE256,
        HuksDeriveHKDF.HuksKeyPurposeMAC,
        HuksDeriveHKDF.HuksKeyDIGESTSHA512,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });

  it('testDeriveHKDFSize128SHA512Abort63KBDerive035', 0, async function (done) {
    const srcKeyAliesFrist =
      'testDeriveHKDFSize128SHA512Abort63KBDeriveKeyAlias_01_035';
    let HuksOptionsFinish = {
      properties: new Array(
        HuksDeriveHKDF.HuksKeySTORAGE,
        HuksDeriveHKDF.HuksKeyISKEYALIAS,
        HuksDeriveHKDF.HuksKeyALGORITHMAES,
        HuksDeriveHKDF.HuksKeySIZE192,
        HuksDeriveHKDF.HuksKeyPurposeDERIVE,
        HuksDeriveHKDF.HuksKeyDIGESTSHA384,
        {
          tag: HksTag.HKS_TAG_KEY_ALIAS,
          value: stringToUint8Array(srcKeyAliesFrist),
        },
        HuksDeriveHKDF.HuksKeyPADDINGNONE,
        HuksDeriveHKDF.HuksKeyBLOCKMODEECB
      ),
      inData: srcData63Kb,
    };
    await publicDeriveFunc(
      srcKeyAliesFrist,
      HuksOptions63kb,
      HuksOptionsFinish,
      'abort'
    );
    done();
  });
});
