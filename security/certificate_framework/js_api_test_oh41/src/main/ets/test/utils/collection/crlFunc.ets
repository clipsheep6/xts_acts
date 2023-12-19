/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import cert from "@ohos.security.cert";
import { expect } from '@ohos/hypium';
import { convertToUint8Array, stringTouInt8Array } from '../common/commonFunction';
import {
  crlVerifyPriKeyHex,
  crlWithExtends,
  CRL_DATA_DER_01,
  CRL_DATA_DER_02,
  CRL_DATA_PEM_01,
  CRL_DATA_PEM_02,
  DER,
  pemCrlWithSingleRevokedCert,
  testCrlDer,
  testCrlPem
} from '../common/commonParam';
import * as certFunc from "./certFunc";
import * as collectionFunc from "./collectionFunc";

/**
 * Create Customized X509 CRL.
 *
 * @param certType   pem/der
 * @param index      0->
 * @returns Promise<cert.X509CRL>
 */
function createCustomizedX509CRLPromise(certType: string, index: number): Promise<cert.X509CRL> {
  let certFormat: cert.EncodingFormat;
  let encodingData: Uint8Array;

  if (certType === DER) {
    certFormat = cert.EncodingFormat.FORMAT_DER;
    encodingData = getDerCRLEncodingData(index);
  } else {
    certFormat = cert.EncodingFormat.FORMAT_PEM;
    encodingData = getPemCRLEncodingData(index);
  }

  let encodingBlob: cert.EncodingBlob = {
    data: encodingData,
    encodingFormat: certFormat,
  };

  return new Promise((resolve, reject) => {
    cert
      .createX509CRL(encodingBlob)
      .then((data) => {
        console.warn(
          "[promise] createX509CRL success! format is: " + certFormat
        );
        resolve(data);
      })
      .catch((err: Error) => {
        reject(err);
      });
  });
}

async function checkCRLMatchPEMX509Cert(certType: string, index: number, certContent: string, expectResult: number): Promise<void> {
  try {
    const x509Cert = await certFunc.createPEMCustomizedX509CertPromise(certContent);
    expect(x509Cert != null).assertTrue();
    const param: cert.X509CRLMatchParameters = {
      x509Cert: x509Cert
    };
    await checkCRLMatchParam(certType, index, param, expectResult);
  }
  catch (err) {
    expect(null).assertFail();
  }
}

async function checkCRLMatchParam(certType: string, index: number, param: cert.X509CRLMatchParameters, expectResult: number): Promise<void> {
  try {
    const x509CRL = await createCustomizedX509CRLPromise(certType, index);
    const result = x509CRL.match(param);
    switch (expectResult) {
      case 0:
        expect(result).assertTrue();
        return;
      case 1:
        expect(result).assertFalse();
        return;
      default:
        expect(null).assertFail();
        return;
    }
  }
  catch (err) {
    console.error("checkCRLMatchParam error");
    expect(null).assertFail();
  }
}

async function checkCRLMatchParamWithError(certType: string, index: number, param: cert.X509CRLMatchParameters, errorCode: number): Promise<void> {
  let x509CRL: cert.X509CRL = {} as cert.X509CRL;
  try {
    x509CRL = await createCustomizedX509CRLPromise(certType, index);
  }
  catch (err) {
    console.error("checkCRLMatchIssuer error");
    expect(null).assertFail();
  }

  try {
    const result = x509CRL.match(param);
    expect(null).assertFail();
  }
  catch (err) {
    console.error("checkCRLMatchIssuer error");
    expect(err.code).assertEqual(errorCode);
  }
}

/**
 * 以callback方式调用selectCRLs
 * @param collection 存储crls的collection
 * @param param 查询参数
 * @returns 符合条件的crl列表
 */
async function selectCRLsCallback(collection: cert.CertCRLCollection, param: cert.X509CRLMatchParameters): Promise<Array<cert.X509CRL>> {
  return new Promise((resolve, reject) => {
    collection.selectCRLs(param, (err, crls) => {
      if (err) {
        console.error(
          "[callback] selectCRLs failed! error code is: " + err.code
        );
        reject(err);
      } else {
        console.info(
          "[callback] selectCRLs success!"
        );
        resolve(crls);
      }
    });
  })
}

async function checkSelectCRLs(certType: string, indexArr: number[], param: cert.X509CRLMatchParameters, expectArrayLength: number, isPromise: boolean): Promise<Array<cert.X509CRL>> {
  let crls: Array<cert.X509CRL> = [];
  try {
    const collection: cert.CertCRLCollection = await collectionFunc.createCollection([], indexArr, certType);
    if (isPromise) {
      crls = await collection.selectCRLs(param);
    }
    else {
      crls = await selectCRLsCallback(collection, param);
    }
    expect(crls != null).assertTrue();
    expect(crls.length === expectArrayLength).assertTrue();
  }
  catch (err) {
    console.error("checkCRLMatchIssuer error");
    expect(null).assertFail();
  }
  return crls;
}

async function checkSelectCRLsWithError(certType: string, indexArr: number[], param: cert.X509CRLMatchParameters, errorCode: number, isPromise: boolean): Promise<Array<cert.X509CRL>> {
  let collection: cert.CertCRLCollection = {} as cert.CertCRLCollection;
  try {
    collection = await collectionFunc.createCollection([], indexArr, certType);
  }
  catch (err) {
    console.error("createCollection error");
    expect(null).assertFail();
  }
  let crlArray: Array<cert.X509CRL> = [];
  try {
    if (isPromise) {
      crlArray = await collection.selectCRLs(param);
    }
    else {
      crlArray = await selectCRLsCallback(collection, param);
    }
    expect(null).assertFail();
  }
  catch (err) {
    console.error("selectCRLs error");
    expect(err.code).assertEqual(errorCode);
  }
  return crlArray;
}

async function checkSelectCRLsX509Cert(certType: string, indexArr: number[], certContent: string, expectArrayLength: number, isPromise: boolean): Promise<void> {
  try {
    const x509Cert = await certFunc.createPEMCustomizedX509CertPromise(certContent);
    expect(x509Cert != null).assertTrue();
    const param: cert.X509CRLMatchParameters = {
      x509Cert: x509Cert
    };
    await checkSelectCRLs(certType, indexArr, param, expectArrayLength, isPromise);
  }
  catch (err) {
    expect(null).assertFail();
  }
}



function getDerCRLEncodingData(index: number): Uint8Array {
  switch (index) {
    case 1:
      return new Uint8Array(CRL_DATA_DER_01);
    case 2:
      return new Uint8Array(CRL_DATA_DER_02);
    default:
      return new Uint8Array(CRL_DATA_DER_01);
  }
}

function getPemCRLEncodingData(index: number): Uint8Array {
  switch (index) {
    case 1:
      return stringTouInt8Array(CRL_DATA_PEM_01);
    case 2:
      return stringTouInt8Array(CRL_DATA_PEM_02);
    default:
      return stringTouInt8Array(CRL_DATA_PEM_02);
  }
}

export {
  createCustomizedX509CRLPromise,
  checkCRLMatchPEMX509Cert,
  checkCRLMatchParam,
  checkCRLMatchParamWithError,
  checkSelectCRLs,
  checkSelectCRLsX509Cert,
  checkSelectCRLsWithError,
};