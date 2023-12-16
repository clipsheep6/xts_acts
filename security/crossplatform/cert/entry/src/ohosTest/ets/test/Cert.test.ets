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

import { describe, it, expect } from '@ohos/hypium';
import certFramework from '@ohos.security.cert';
import { BusinessError } from '@ohos.base';
import cryptoFramework from '@ohos.security.cryptoFramework';
import {
  chainFirstCaCert,
  chainSecondCaCert,
  selfSignedCaCertPem,
  selfSignedCaCertDer,
  certDataDer,
  testErrorCert,
  testCert,
  testCrlPem,
  testRevokedCrlPem,
  testCrlDer,
  pubKeyData,
  priKeyData,
  extData
} from "./utils/publicParam";
import { stringTouInt8Array } from "./utils/publicDoString";

export default function certTest() {
  describe('certTest', async () => {
    console.log("##########start certificate test##########");

    let getEncodingBlob = (certType: string) => {
      let certFormat: certFramework.EncodingFormat
      let encodingData: Uint8Array
      if (certType == "der") {
        certFormat = certFramework.EncodingFormat.FORMAT_DER;
        encodingData = new Uint8Array(
          (selfSignedCaCertDer.match(new RegExp('[\\da-f]{2}', 'ig')) as string[]).map((h) => {
            return parseInt(h, 16);
          })
        );
      } else {
        certFormat = certFramework.EncodingFormat.FORMAT_PEM;
        encodingData = stringTouInt8Array(selfSignedCaCertPem);
      }
      let encodingBlob: certFramework.EncodingBlob = {
        data: encodingData,
        encodingFormat: certFormat,
      }
      return encodingBlob;
    }

    /* *
    * @tc.number  TEST_CREATEX509CERTCALLBACK_001
    * @tc.name    test createX509Cert method in callback mode
    * @tc.desc    create X509Cert
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCreateX509CertCallback001', 0, async (done: Function) => {
      certFramework.createX509Cert(getEncodingBlob('pem'), (err, x509Cert) => {
        if (err != null) {
          console.log('testCreateX509CertCallback001 errCode: ' + err.code + ', errMsg: ' + err.message);
          expect().assertFail()
        } else {
          console.log('testCreateX509CertCallback001 ' + JSON.stringify(x509Cert));
          expect(x509Cert != null).assertTrue();
        }
        done();
      })
    })

    /* *
    * @tc.number  TEST_CREATEX509CERTCALLBACK_002
    * @tc.name    test createX509Cert method in callback mode
    * @tc.desc    create X509Cert
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCreateX509CertCallback002', 0, async (done: Function) => {
      certFramework.createX509Cert(getEncodingBlob('der'), (err, x509Cert) => {
        if (err != null) {
          console.log('testCreateX509CertCallback002 errCode: ' + err.code + ', errMsg: ' + err.message);
          expect().assertFail();
        } else {
          console.log('testCreateX509CertCallback002 ' + JSON.stringify(x509Cert));
          expect(x509Cert != null).assertTrue();
        }
        done();
      })
    })

    /* *
    * @tc.number  TEST_CREATEX509CERTPROMISE_001
    * @tc.name    test createX509Cert method in promise mode
    * @tc.desc    create X509Cert
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCreateX509CertPromise001', 0, async (done: Function) => {
      certFramework.createX509Cert(getEncodingBlob('pem')).then(x509Cert => {
        console.log('testCreateX509CertPromise001 ' + JSON.stringify(x509Cert));
        expect(x509Cert != null).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log('testCreateX509CertPromise001 errCode: ' + err.code);
        console.log('testCreateX509CertPromise001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      });
    })

    /* *
    * @tc.number  TEST_CREATEX509CERTPROMISE_002
    * @tc.name    test createX509Cert method in promise mode
    * @tc.desc    create X509Cert
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCreateX509CertPromise002', 0, async (done: Function) => {
      certFramework.createX509Cert(getEncodingBlob('der')).then(x509Cert => {
        console.log('testCreateX509CertPromise002 ' + JSON.stringify(x509Cert));
        expect(x509Cert != null).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log('testCreateX509CertPromise002 errCode: ' + err.code);
        console.log('testCreateX509CertPromise002 errMsg: ' + err.message);
        expect().assertFail()
        done();
      });
    })

    let x509CertPem = await certFramework.createX509Cert(getEncodingBlob('pem'))
    let x509CertDer = await certFramework.createX509Cert({
      data: certDataDer,
      encodingFormat: certFramework.EncodingFormat.FORMAT_DER,
    })

    /* *
    * @tc.number  TEST_X509CERTVERIFYCALLBACK_001
    * @tc.name    test Verify method in callback mode
    * @tc.desc    Verify X509Cert
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testX509CertVerifyCallback001', 0, async (done: Function) => {
      // 业务需通过上级X509Cert证书对象（或当前证书对象为自签名的证书）的getPublicKey获取PubKey
      let pubKey = x509CertPem.getPublicKey();
      console.log('testX509CertVerifyCallback001 pubKey ', pubKey);
      x509CertPem.verify(pubKey, (err) => {
        console.log('testX509CertVerifyCallback001 ', err)
        expect(err == null).assertTrue()
        done()
      })
    })

    /* *
    * @tc.number  TEST_X509CERTVERIFYPROMISE_001
    * @tc.name    test Verify method in promise mode
    * @tc.desc    Verify X509Cert
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testX509CertVerifyPromise001', 0, async (done: Function) => {
      // 业务需通过上级X509Cert证书对象（或当前证书对象为自签名的证书）的getPublicKey获取PubKey
      let pubKey = x509CertPem.getPublicKey();
      x509CertPem.verify(pubKey).then(err => {
        console.log('testX509CertVerifyPromise001 result', JSON.stringify(err));
        expect(err == null).assertTrue()
        done();
      }).catch((err: BusinessError) => {
        console.log('testX509CertVerifyPromise001 errCode: ' + err.code);
        console.log('testX509CertVerifyPromise001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      });
    })

    /* *
    * @tc.number  TEST_GETENCODEDCALLBACK_001
    * @tc.name    test getEncoded method in callback mode
    * @tc.desc    get Encoded X509Cert
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testX509CertGetEncodedCallback001', 0, async (done: Function) => {
      x509CertPem.getEncoded((err, data) => {
        if (err != null) {
          console.log('testX509CertGetEncodedCallback001 errCode: ' + err.code + ', errMsg: ' + err.message);
          expect().assertFail()
          done();
        } else {
          console.log('testX509CertGetEncodedCallback001 ' + data);
          expect(data != null).assertTrue();
          done();
        }
      });
    })

    /* *
    * @tc.number  TEST_GETENCODEDPROMISE_001
    * @tc.name    test getEncoded method in promise mode
    * @tc.desc    get Encoded X509Cert
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testX509CertGetEncodedPromise001', 0, async (done: Function) => {
      x509CertPem.getEncoded().then(data => {
        console.log('testX509CertGetEncodedPromise001 ', data);
        expect(data != null).assertTrue();
        done()
      }).catch((err: BusinessError) => {
        console.log('testX509CertGetEncodedPromise001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      });
    })

    /**
     * @tc.number    : TEST_X509CERTGETPUBLICKEY_001
     * @tc.name      : test getPublicKey method
     * @tc.desc      : get the public key of X509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetPublicKey001', 0, async (done: Function) => {
      try {
        let pubKey = x509CertPem.getPublicKey();
        console.log('testX509CertGetPublicKey001 ', pubKey)
        expect(pubKey != null).assertTrue();
        done();
      } catch (err) {
        console.log('testX509CertGetPublicKey001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTCHECKVALIDITYWITHDATE_001
     * @tc.name      : test checkValidityWithDate method
     * @tc.desc      : Verify the certificate validity period
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertCheckValidityWithDate001', 0, async (done: Function) => {
      let date = '20220830000001Z';
      // Verify the certificate validity period.
      try {
        let res = x509CertPem.checkValidityWithDate(date);
        console.log('testX509CertCheckValidityWithDate001: ' + res);
      } catch (err) {
        console.log('testX509CertCheckValidityWithDate001 errCode: ' + err.code);
        console.log('testX509CertCheckValidityWithDate001 errMsg: ' + err.message);
        expect().assertFail()
      }
      done();
    })

    /**
     * @tc.number    : TEST_X509CERTCHECKVALIDITYWITHDATE_002
     * @tc.name      : test checkValidityWithDate method
     * @tc.desc      : Verify the certificate validity period
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertCheckValidityWithDate002', 0, async (done: Function) => {
      let date = '29990830000000Z';
      // Verify the certificate validity period.
      try {
        let res = x509CertPem.checkValidityWithDate(date);
        console.log('testX509CertCheckValidityWithDate002: ' + res);
      } catch (err) {
        console.log('testX509CertCheckValidityWithDate002 errCode: ' + err.code);
        console.log('testX509CertCheckValidityWithDate002 errMsg: ' + err.message);
        expect(err.code == 19030004).assertTrue()
      }
      done();
    })

    /**
     * @tc.number    : TEST_X509CERTGETVERSION_001
     * @tc.name      : test getVersion method
     * @tc.desc      : get Version of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetVersion001', 0, async (done: Function) => {
      try {
        let version = x509CertPem.getVersion();
        console.log('testX509CertGetVersion001 ', version)
        expect(version).assertInstanceOf('Number');
        done();
      } catch (err) {
        console.log('testX509CertGetCertSerialNumber001 errCode: ' + err.code);
        console.log('testX509CertGetCertSerialNumber001 errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETCERTSERIALNUMBER_001
     * @tc.name      : test getCertSerialNumber method
     * @tc.desc      : get SerialNumber of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetCertSerialNumber001', 0, async (done: Function) => {
      try {
        let serialNumber = x509CertPem.getCertSerialNumber();
        console.log('testX509CertGetCertSerialNumber001 ' + serialNumber);
        expect(serialNumber).assertInstanceOf('BigInt');
        done();
      } catch (err) {
        console.log('testX509CertGetCertSerialNumber001 errCode: ' + err.code);
        console.log('testX509CertGetCertSerialNumber001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETISSUERNAME_001
     * @tc.name      : test getIssuerName method
     * @tc.desc      : get the IssuerName of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetIssuerName001', 0, async (done: Function) => {
      try {
        let issuerName = x509CertPem.getIssuerName();
        console.log('testX509CertGetIssuerName001: ' + issuerName);
        expect(issuerName != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetIssuerName001 errCode: ' + err.code);
        console.log('testX509CertGetIssuerName001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETSUBJECTNAME_001
     * @tc.name      : test getSubjectName method
     * @tc.desc      : get the SubjectName of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetSubjectName001', 0, async (done: Function) => {
      try {
        let subjectName = x509CertPem.getSubjectName();
        console.log('testX509CertGetSubjectName001', subjectName)
        expect(subjectName != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetSubjectName001 errCode: ' + err.code);
        console.log('testX509CertGetSubjectName001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETNOTBEFORETIME_001
     * @tc.name      : test getNotBeforeTime method
     * @tc.desc      : get the NotBeforeTime of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetNotBeforeTime001', 0, async (done: Function) => {
      try {
        let notBefore = x509CertPem.getNotBeforeTime();
        console.log('testX509CertGetNotBeforeTime001 ', notBefore)
        expect(notBefore).assertInstanceOf('String')
        done();
      } catch (err) {
        console.log('testX509CertGetNotBeforeTime001 errCode: ' + err.code);
        console.log('testX509CertGetNotBeforeTime001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETNOTAFTERTIME_001
     * @tc.name      : test getNotAfterTime method
     * @tc.desc      : get the NotAfterTime of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetNotAfterTime001', 0, async (done: Function) => {
      try {
        let notAfter = x509CertPem.getNotAfterTime();
        console.log('testX509CertGetNotBeforeTime001 ', notAfter)
        expect(notAfter).assertInstanceOf('String')
        done();
      } catch (err) {
        console.log('testX509CertGetNotBeforeTime001 errCode: ' + err.code);
        console.log('testX509CertGetNotBeforeTime001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETSIGNATURE_001
     * @tc.name      : test getSignature method
     * @tc.desc      : get the Signature of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetSignature001', 0, async (done: Function) => {
      try {
        let signature = x509CertPem.getSignature();
        console.log('testX509CertGetSignature001 ', signature)
        expect(signature != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetSignature001 errCode: ' + err.code);
        console.log('testX509CertGetSignature001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETSIGNATUREALGNAME_001
     * @tc.name      : test getSignatureAlgName method
     * @tc.desc      : get the SignatureAlgName of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetSignatureAlgName001', 0, async (done: Function) => {
      try {
        let sigAlgName = x509CertPem.getSignatureAlgName();
        console.log('testX509CertGetSignatureAlgName001 ', sigAlgName)
        expect(sigAlgName).assertInstanceOf('String')
        done();
      } catch (err) {
        console.log('testX509CertGetSignatureAlgName001 errCode: ' + err.code);
        console.log('testX509CertGetSignatureAlgName001 errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETSIGNATUREALGOID_001
     * @tc.name      : test getSignatureAlgOid method
     * @tc.desc      : get the SignatureAlgOid of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetSignatureAlgOid001', 0, async (done: Function) => {
      try {
        let sigAlgOid = x509CertPem.getSignatureAlgOid();
        console.log('testX509CertGetSignatureAlgOid001 ', sigAlgOid)
        expect(sigAlgOid).assertInstanceOf('String')
        done();
      } catch (err) {
        console.log('testX509CertGetSignatureAlgOid001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETSIGNATUREALGPARAMS_001
     * @tc.name      : test getSignatureAlgParams method
     * @tc.desc      : get the SignatureAlgParams of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetSignatureAlgParams001', 0, async (done: Function) => {
      try {
        let sigAlgParams = x509CertPem.getSignatureAlgParams();
        console.log('testX509CertGetSignatureAlgParams001 ', sigAlgParams)
        expect(sigAlgParams != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetSignatureAlgParams001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETKEYUSAGE_001
     * @tc.name      : test getKeyUsage method
     * @tc.desc      : get the KeyUsage of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetKeyUsage001', 0, async (done: Function) => {
      try {
        let keyUsage = x509CertPem.getKeyUsage();
        console.log('testX509CertGetKeyUsage001 ', keyUsage)
        expect(keyUsage != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetKeyUsage001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETEXTKEYUSAGE_001
     * @tc.name      : test getExtKeyUsage method
     * @tc.desc      : get the ExtKeyUsage of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetExtKeyUsage001', 0, async (done: Function) => {
      try {
        let extKeyUsage = x509CertPem.getExtKeyUsage();
        console.log('testX509CertGetExtKeyUsage001 ', extKeyUsage)
        expect(extKeyUsage != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetExtKeyUsage001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETBASICCONSTRAINTS_001
     * @tc.name      : test getBasicConstraints method
     * @tc.desc      : get the BasicConstraints of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetBasicConstraints001', 0, async (done: Function) => {
      let basicConstraints = x509CertPem.getBasicConstraints();
      console.log('testX509CertGetBasicConstraints001 ', basicConstraints)
      expect(basicConstraints).assertInstanceOf('Number')
      done();
    })

    /**
     * @tc.number    : TEST_X509CERTGETSUBJECTALTNAMES_001
     * @tc.name      : test getSubjectAltNames method
     * @tc.desc      : get the SubjectAltNames of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetSubjectAltNames001', 0, async (done: Function) => {
      try {
        let subjectAltNames = x509CertPem.getSubjectAltNames();
        console.log('testX509CertGetSubjectAltNames001 ', subjectAltNames)
        expect(subjectAltNames != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetSubjectAltNames001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETISSUERALTNAMES_001
     * @tc.name      : test getIssuerAltNames method
     * @tc.desc      : get the IssuerAltNames of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetIssuerAltNames001', 0, async (done: Function) => {
      try {
        let issuerAltNames = x509CertPem.getIssuerAltNames();
        console.log('testX509CertGetIssuerAltNames001 ', issuerAltNames)
        expect(issuerAltNames != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetIssuerAltNames001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETITEM_001
     * @tc.name      : test getItem method
     * @tc.desc      : get the Item of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetItem001', 0, async (done: Function) => {
      try {
        let tbs = x509CertDer.getItem(certFramework.CertItemType.CERT_ITEM_TYPE_TBS);
        console.log('testX509CertGetItem001 tbs ', tbs)
        expect(tbs != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetItem001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETITEM_002
     * @tc.name      : test getItem method
     * @tc.desc      : get the Item of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetItem002', 0, async (done: Function) => {
      try {
        let pubKey = x509CertDer.getItem(certFramework.CertItemType.CERT_ITEM_TYPE_PUBLIC_KEY);
        console.log('testX509CertGetItem002 pubKey ', pubKey)
        expect(pubKey != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetItem002 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETITEM_003
     * @tc.name      : test getItem method
     * @tc.desc      : get the Item of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetItem003', 0, async (done: Function) => {
      try {
        let issuerId = x509CertDer.getItem(certFramework.CertItemType.CERT_ITEM_TYPE_ISSUER_UNIQUE_ID);
        console.log('testX509CertGetItem003 pubKey ', issuerId)
        expect(issuerId != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetItem003 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETITEM_004
     * @tc.name      : test getItem method
     * @tc.desc      : get the Item of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetItem004', 0, async (done: Function) => {
      try {
        let subjectId = x509CertDer.getItem(certFramework.CertItemType.CERT_ITEM_TYPE_SUBJECT_UNIQUE_ID);
        console.log('testX509CertGetItem004 pubKey ', subjectId)
        expect(subjectId != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetItem004 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETITEM_005
     * @tc.name      : test getItem method
     * @tc.desc      : get the Item of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetItem005', 0, async (done: Function) => {
      try {
        let extensions = x509CertDer.getItem(certFramework.CertItemType.CERT_ITEM_TYPE_EXTENSIONS);
        console.log('testX509CertGetItem005 pubKey ', extensions)
        expect(extensions != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetItem005 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done();
      }
    })

    /**
     * @tc.number    : TEST_X509CERTGETITEM_006
     * @tc.name      : test getItem method
     * @tc.desc      : get the Item of x509Cert
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CertGetItem006', 0, async (done: Function) => {
      try {
        let extensions = x509CertDer.getItem(-1);
        console.log('testX509CertGetItem006 pubKey ', extensions)
        expect(extensions != null).assertTrue()
        done();
      } catch (err) {
        console.log('testX509CertGetItem006 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect(err.code == 401).assertTrue()
        done();
      }
    })

    let encodingBlobExtDer: certFramework.EncodingBlob = {
      data: extData,
      // 根据encodingData的格式进行赋值，仅支持FORMAT_DER
      encodingFormat: certFramework.EncodingFormat.FORMAT_DER
    };

    /**
     * @tc.number    : TEST_CREATECERTEXTENSIONCALLBACK_001
     * @tc.name      : test createCertExtension method in callback mode
     * @tc.desc      : create CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCreateCertExtensionCallback001', 0, async (done: Function) => {
      certFramework.createCertExtension(encodingBlobExtDer, (err, certExt) => {
        console.log('testCreateCertExtensionCallback001 ', certExt)
        expect(certExt != null).assertTrue()
        done()
      })
    })

    /**
     * @tc.number    : TEST_CREATECERTEXTENSIONPROMISE_001
     * @tc.name      : test createCertExtension method in promise mode
     * @tc.desc      : create CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCreateCertExtensionPromise001', 0, async (done: Function) => {
      certFramework.createCertExtension(encodingBlobExtDer).then(certExt => {
        console.log('testCreateCertExtensionPromise001 ', certExt)
        expect(certExt != null).assertTrue()
        done()
      }).catch((error: BusinessError) => {
        console.log('testCreateCertExtensionPromise001 errCode: ' + error.code + ', errMsg: ' + error.message);
        done()
      });
    })

    let certExt = await certFramework.createCertExtension(encodingBlobExtDer)
    console.log('certExt value ', certExt)

    /**
     * @tc.number    : TEST_CERTEXTGETENCODED_001
     * @tc.name      : test getEncoded method
     * @tc.desc      : get the Encoded of CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertExtGetEncoded001', 0, async (done: Function) => {
      try {
        let extEncodedBlob = certExt.getEncoded();
        console.log('testCertExtGetEncoded001 ', extEncodedBlob)
        expect(extEncodedBlob != null).assertTrue()
        done()
      } catch (err) {
        console.log('testCertExtGetEncoded001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_CERTEXTGETOIDLIST_001
     * @tc.name      : test getOidList method
     * @tc.desc      : get the OidList of CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertExtGetOidList001', 0, async (done: Function) => {
      try {
        let oidList = certExt.getOidList(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_ALL);
        console.log('testCertExtGetOidList001 ', oidList)
        expect(oidList != null).assertTrue()
        done()
      } catch (err) {
        console.log('testCertExtGetOidList001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_CERTEXTGETOIDLIST_002
     * @tc.name      : test getOidList method
     * @tc.desc      : get the OidList of CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertExtGetOidList002', 0, async (done: Function) => {
      try {
        let oidList = certExt.getOidList(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_CRITICAL);
        console.log('testCertExtGetOidList002 ', oidList)
        expect(oidList != null).assertTrue()
        done()
      } catch (err) {
        console.log('testCertExtGetOidList002 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_CERTEXTGETOIDLIST_003
     * @tc.name      : test getOidList method
     * @tc.desc      : get the OidList of CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertExtGetOidList003', 0, async (done: Function) => {
      try {
        let oidList = certExt.getOidList(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_UNCRITICAL);
        console.log('testCertExtGetOidList003 ', oidList)
        expect(oidList != null).assertTrue()
        done()
      } catch (err) {
        console.log('testCertExtGetOidList003 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_CERTEXTGETENTRY_001
     * @tc.name      : test getEntry method
     * @tc.desc      : get the Entry of CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertExtGetEntry001', 0, async (done: Function) => {
      let oid = new Uint8Array([0x32, 0x2e, 0x35, 0x2e, 0x32, 0x39, 0x2e, 0x31, 0x35]);
      let oidBlob: certFramework.DataBlob = {
        data: oid
      }
      try {
        let entry = certExt.getEntry(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY, oidBlob);
        console.log('testCertExtGetEntry001 ', entry)
        expect(entry != null).assertTrue()
        done()
      } catch (err) {
        console.log('testCertExtGetEntry001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_CERTEXTGETENTRY_002
     * @tc.name      : test getEntry method
     * @tc.desc      : get the Entry of CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertExtGetEntry002', 0, async (done: Function) => {
      let oid = new Uint8Array([0x32, 0x2e, 0x35, 0x2e, 0x32, 0x39, 0x2e, 0x31, 0x35]);
      let oidBlob: certFramework.DataBlob = {
        data: oid
      }
      try {
        let entry = certExt.getEntry(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY_CRITICAL, oidBlob);
        console.log('testCertExtGetEntry002 ', entry)
        expect(entry != null).assertTrue()
        done()
      } catch (err) {
        console.log('testCertExtGetEntry002 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_CERTEXTGETENTRY_003
     * @tc.name      : test getEntry method
     * @tc.desc      : get the Entry of CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertExtGetEntry003', 0, async (done: Function) => {
      let oid = new Uint8Array([0x32, 0x2e, 0x35, 0x2e, 0x32, 0x39, 0x2e, 0x31, 0x35]);
      let oidBlob: certFramework.DataBlob = {
        data: oid
      }
      try {
        let entry = certExt.getEntry(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY_VALUE, oidBlob);
        console.log('testCertExtGetEntry003 ', entry)
        expect(entry != null).assertTrue()
        done()
      } catch (err) {
        console.log('testCertExtGetEntry003 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_CERTEXTCHECKCA_001
     * @tc.name      : test checkCA method
     * @tc.desc      : check the CA of CertExtension
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertExtCheckCA001', 0, async (done: Function) => {
      try {
        let res = certExt.checkCA();
        console.log('testCertExtCheckCA001 ', res)
        expect(res).assertInstanceOf('Number')
        done()
      } catch (err) {
        console.log('testCertExtCheckCA001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    let getEncodingBlobCrl = (certType: string, isRevoked: Boolean = false) => {
      let certFormat: certFramework.EncodingFormat
      let encodingData: Uint8Array
      if (certType == "der") {
        certFormat = certFramework.EncodingFormat.FORMAT_DER;
        encodingData = new Uint8Array(
          (testCrlDer.match(new RegExp('[\\da-f]{2}', 'ig')) as string[]).map((h) => {
            return parseInt(h, 16);
          })
        );
      } else {
        certFormat = certFramework.EncodingFormat.FORMAT_PEM;
        encodingData = stringTouInt8Array(isRevoked ? testRevokedCrlPem : testCrlPem);
      }
      let encodingBlob: certFramework.EncodingBlob = {
        data: encodingData,
        encodingFormat: certFormat,
      }
      return encodingBlob;
    }

    /**
     * @tc.number    : TEST_CREATEX509CRLCALLBACK_001
     * @tc.name      : test createX509Crl method in callback mode
     * @tc.desc      : create X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCreateX509CrlCallback001', 0, async (done: Function) => {
      certFramework.createX509Crl(getEncodingBlobCrl('pem'), (err, x509Crl) => {
        if (err != null) {
          console.log('testCreateX509CrlCallback001 errCode: ' + err.code + ', errMsg: ' + err.message);
          expect().assertFail()
        } else {
          console.log('testCreateX509CrlCallback001 ', x509Crl)
          expect(x509Crl != null).assertTrue()
        }
        done()
      });
    })

    /**
     * @tc.number    : TEST_CREATEX509CRLCALLBACK_002
     * @tc.name      : test createX509Crl method in callback mode
     * @tc.desc      : create X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCreateX509CrlCallback002', 0, async (done: Function) => {
      certFramework.createX509Crl(getEncodingBlobCrl('der'), (err, x509Crl) => {
        if (err != null) {
          console.log('testCreateX509CrlCallback002 errCode: ' + err.code + ', errMsg: ' + err.message);
          expect().assertFail()
        } else {
          console.log('testCreateX509CrlCallback002 ', x509Crl)
          expect(x509Crl != null).assertTrue()
        }
        done()
      });
    })

    /**
     * @tc.number    : TEST_CREATEX509CRLPROMISE_001
     * @tc.name      : test createX509Crl method in promise mode
     * @tc.desc      : create X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCreateX509CrlPromise001', 0, async (done: Function) => {
      certFramework.createX509Crl(getEncodingBlobCrl('pem')).then(x509Crl => {
        console.log('testCreateX509CrlPromise001 ', x509Crl)
        expect(x509Crl != null).assertTrue()
        done()
      }).catch((err: BusinessError) => {
        console.log('testCreateX509CrlPromise001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      })
    })

    /**
     * @tc.number    : TEST_CREATEX509CRLPROMISE_002
     * @tc.name      : test createX509Crl method in promise mode
     * @tc.desc      : create X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCreateX509CrlPromise002', 0, async (done: Function) => {
      certFramework.createX509Crl(getEncodingBlobCrl('der')).then(x509Crl => {
        console.log('testCreateX509CrlPromise002 ', x509Crl)
        expect(x509Crl != null).assertTrue()
        done()
      }).catch((err: BusinessError) => {
        console.log('testCreateX509CrlPromise002 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      })
    })

    let x509CrlPem = await certFramework.createX509Crl(getEncodingBlobCrl('pem'))
    let x509CrlPemRevoked = await certFramework.createX509Crl(getEncodingBlobCrl('pem', true))
    let x509CrlDer: certFramework.X509Crl
    try {
      x509CrlDer = await certFramework.createX509Crl(getEncodingBlobCrl('der'))
    } catch (err) {
      console.log('x509CrlDer', err)
    }

    let getEncodingBlobForCrlTest = (flag: string) => {
      let certFormat: certFramework.EncodingFormat
      let encodingData: Uint8Array
      if (flag == "normal") {
        certFormat = certFramework.EncodingFormat.FORMAT_PEM;
        encodingData = stringTouInt8Array(testCert);
      } else {
        certFormat = certFramework.EncodingFormat.FORMAT_PEM;
        encodingData = stringTouInt8Array(testErrorCert);
      }
      let encodingBlob: certFramework.EncodingBlob = {
        data: encodingData,
        encodingFormat: certFormat,
      }
      return encodingBlob;
    }
    let X509CertForCrlTest_normal: certFramework.X509Cert = await certFramework.createX509Cert(getEncodingBlobForCrlTest('normal'))
    let X509CertForCrlTest_error: certFramework.X509Cert = await certFramework.createX509Cert(getEncodingBlobForCrlTest('error'))


    /**
     * @tc.number    : TEST_X509CRLISREVOKED_001
     * @tc.name      : test isRevoked method
     * @tc.desc      : get the isRevoked of x509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlIsRevoked001', 0, async (done: Function) => {
      try {
        let revokedFlag = x509CrlPemRevoked.isRevoked(X509CertForCrlTest_normal);
        console.log('testX509CrlIsRevoked001 ', revokedFlag)
        expect(revokedFlag).assertInstanceOf('Boolean')
        expect(revokedFlag).assertTrue()
        done()
      } catch (err) {
        console.log('testX509CrlIsRevoked001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLISREVOKED_002
     * @tc.name      : test isRevoked method
     * @tc.desc      : get the isRevoked of x509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlIsRevoked002', 0, async (done: Function) => {
      try {
        let revokedFlag = x509CrlPemRevoked.isRevoked(X509CertForCrlTest_error);
        console.log('testX509CrlIsRevoked002 ', revokedFlag)
        expect(revokedFlag).assertInstanceOf('Boolean')
        expect(revokedFlag).assertFalse()
        done()
      } catch (err) {
        console.log('testX509CrlIsRevoked002 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLGETTYPE_001
     * @tc.name      : test getType method
     * @tc.desc      : get the Type of x509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetType001', 0, async (done: Function) => {
      let type = x509CrlPem.getType();
      console.log('testX509CrlGetType001 ', type)
      expect(type).assertInstanceOf('String')
      done()
    })

    /**
     * @tc.number    : TEST_X509CRLGETENCODEDCALLBACK_001
     * @tc.name      : test getEncoded method in callback mode
     * @tc.desc      : get the Encoded of x509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetEncodedCallback001', 0, async (done: Function) => {
      x509CrlPem.getEncoded((error, data) => {
        if (error != null) {
          console.log('testX509CrlGetEncodedCallback001 errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('testX509CrlGetEncodedCallback001 ', data)
          expect(data != null).assertTrue()
        }
        done()
      });
    })

    /**
     * @tc.number    : TEST_X509CRLGETENCODEDPROMISE_001
     * @tc.name      : test getEncoded method in Promise mode
     * @tc.desc      : get the Encoded of x509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetEncodedPromise001', 0, async (done: Function) => {
      x509CrlPem.getEncoded().then(result => {
        console.log('testX509CrlGetEncodedPromise002 ', result)
        expect(result != null).assertTrue()
        done()
      }).catch((error: BusinessError) => {
        console.log('testX509CrlGetEncodedPromise002 errCode: ' + error.code + ', errMsg: ' + error.message);
        done()
      });
    })

    // Generate the public key by AsyKeyGenerator.
    let keyGenerator = cryptoFramework.createAsyKeyGenerator('RSA1024|PRIMES_3');
    let priEncodingBlob: cryptoFramework.DataBlob = {
      data: priKeyData,
    };
    let pubEncodingBlob: cryptoFramework.DataBlob = {
      data: pubKeyData,
    };

    let keyPair = await keyGenerator.convertKey(pubEncodingBlob, priEncodingBlob)
    console.log('keyPair.pubKey ', keyPair.pubKey)

    /**
     * @tc.number    : TEST_X509CRLVERIFYCALLBACK_001
     * @tc.name      : test verify method in callback mode
     * @tc.desc      : verify the X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlVerifyCallback001', 0, async (done: Function) => {
      try {
        x509CrlPem.verify(keyPair.pubKey, (err) => {
          console.log('testX509CrlVerifyCallback001 err ', err)
          expect(err == null).assertTrue()
          done()
        });
      } catch (err) {
        console.log('testX509CrlVerifyCallback001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLVERIFYPROMISE_001
     * @tc.name      : test verify method in promise mode
     * @tc.desc      : verify the X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlVerifyPromise001', 0, async (done: Function) => {
      x509CrlPem.verify(keyPair.pubKey).then(result => {
        console.log('testX509CrlVerifyPromise001 ', result);
        expect(result == null).assertTrue()
        done()
      }).catch((error: BusinessError) => {
        console.log('testX509CrlVerifyPromise001 errCode: ' + error.code + ', errMsg: ' + error.message);
        done()
      });
    })

    /**
     * @tc.number    : TEST_X509CRLGETVERSION_001
     * @tc.name      : test getVersion method
     * @tc.desc      : get the Version of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetVersion001', 0, async (done: Function) => {
      let version = x509CrlPem.getVersion();
      console.log('testX509CrlGetVersion001 ', version);
      expect(version).assertInstanceOf('Number')
      done()
    })

    /**
     * @tc.number    : TEST_X509CRLGETISSUERNAME_001
     * @tc.name      : test getIssuerName method
     * @tc.desc      : get the IssuerName of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetIssuerName001', 0, async (done: Function) => {
      try {
        let issuerName = x509CrlPem.getIssuerName();
        console.log('testX509CrlGetIssuerName001 ', issuerName);
        expect(issuerName != null).assertTrue()
      } catch (err) {
        console.log('testX509CrlGetIssuerName001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
      }
      done()
    })

    /**
     * @tc.number    : TEST_X509CRLGETLASTUPDATE_001
     * @tc.name      : test getLastUpdate method
     * @tc.desc      : get the LastUpdate of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetLastUpdate001', 0, async (done: Function) => {
      try {
        let lastUpdate = x509CrlPem.getLastUpdate();
        console.log('testX509CrlGetLastUpdate001 ', lastUpdate);
        expect(lastUpdate).assertInstanceOf('String')
        done()
      } catch (err) {
        console.log('testX509CrlGetLastUpdate001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLGETNEXTUPDATE_001
     * @tc.name      : test getNextUpdate method
     * @tc.desc      : get the NextUpdate of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetNextUpdate001', 0, async (done: Function) => {
      try {
        let nextUpdate = x509CrlPem.getNextUpdate();
        console.log('testX509CrlGetNextUpdate001 ', nextUpdate);
        expect(nextUpdate).assertInstanceOf('String')
        done()
      } catch (err) {
        console.log('testX509CrlGetNextUpdate001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLGETREVOKEDCERT_001
     * @tc.name      : test getRevokedCert method
     * @tc.desc      : get the RevokedCert of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetRevokedCert001', 0, async (done: Function) => {
      let serialNumber = 1000;
      try {
        let entry = x509CrlPem.getRevokedCert(serialNumber);
        console.log('testX509CrlGetRevokedCert001 ', entry);
        expect(entry != null).assertTrue()
        let revocation = entry.getRevocationDate();
        console.log("testX509CrlGetRevokedCert001 revocation date is: " + revocation);
        expect(revocation != null).assertTrue();
        let certIssuer = entry.getCertIssuer();
        console.log("testX509CrlGetRevokedCert001 cert issuer is: " + certIssuer);
        expect(certIssuer != null).assertTrue();
        done()
      } catch (err) {
        console.log('testX509CrlGetRevokedCert001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLGETREVOKEDCERTWITHCERT_001
     * @tc.name      : test getRevokedCertWithCert method
     * @tc.desc      : get the RevokedCertWithCert of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetRevokedCertWithCert001', 0, async (done: Function) => {
      try {
        let entry = x509CrlPemRevoked.getRevokedCertWithCert(X509CertForCrlTest_normal);
        console.log('testX509CrlGetRevokedCertWithCert001 ', entry);
        expect(entry != null).assertTrue()
        done()
      } catch (err) {
        console.log('testX509CrlGetRevokedCertWithCert001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLGETREVOKEDCERTSCALLBACK_001
     * @tc.name      : test getRevokedCerts method in callback mode
     * @tc.desc      : get the RevokedCerts of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetRevokedCertsCallback001', 0, async (done: Function) => {
      x509CrlPem.getRevokedCerts((error, array) => {
        if (error != null) {
          console.log('testX509CrlGetRevokedCertsCallback001 errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('testX509CrlGetRevokedCertsCallback001 ', array);
          expect(array != null).assertTrue()
          expect(array.length > 0).assertTrue()
        }
        done()
      });
    })

    /**
     * @tc.number    : TEST_X509CRLGETREVOKEDCERTSPROMISE_001
     * @tc.name      : test getRevokedCerts method in promise mode
     * @tc.desc      : get the RevokedCerts of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetRevokedCertsPromise001', 0, async (done: Function) => {
      x509CrlPem.getRevokedCerts().then(array => {
        console.log('testX509CrlGetRevokedCertsPromise001 ', array);
        expect(array != null).assertTrue()
        expect(array.length > 0).assertTrue()
        done()
      }).catch((error: BusinessError) => {
        console.log('testX509CrlGetRevokedCertsPromise001 errCode: ' + error.code + ', errMsg: ' + error.message);
        done()
      });
    })

    /**
     * @tc.number    : TEST_X509CRLGETTBSINFO_001
     * @tc.name      : test getTbsInfo method
     * @tc.desc      : get the TbsInfo of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetTbsInfo001', 0, async (done: Function) => {
      try {
        let tbsInfo = x509CrlPem.getTbsInfo();
        console.log('testX509CrlGetTbsInfo001 ', tbsInfo);
        expect(tbsInfo != null).assertTrue()
        done()
      } catch (err) {
        console.log('testX509CrlGetTbsInfo001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLGETSIGNATURE_001
     * @tc.name      : test getSignature method
     * @tc.desc      : get the Signature of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetSignature001', 0, async (done: Function) => {
      try {
        let signature = x509CrlPem.getSignature();
        console.log('testX509CrlGetSignature001 ', signature);
        expect(signature != null).assertTrue()
        done()
      } catch (err) {
        console.log('testX509CrlGetSignature001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLGETSIGNATUREALGNAME_001
     * @tc.name      : test getSignatureAlgName method
     * @tc.desc      : get the SignatureAlgName of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetSignatureAlgName001', 0, async (done: Function) => {
      try {
        let sigAlgName = x509CrlPem.getSignatureAlgName();
        console.log('testX509CrlGetSignatureAlgName001 ', sigAlgName);
        expect(sigAlgName).assertInstanceOf('String')
        done()
      } catch (err) {
        console.log('testX509CrlGetSignatureAlgName001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLGETSIGNATUREALGOID_001
     * @tc.name      : test getSignatureAlgOid method
     * @tc.desc      : get the SignatureAlgOid of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetSignatureAlgOid001', 0, async (done: Function) => {
      try {
        let sigAlgOid = x509CrlPem.getSignatureAlgOid();
        console.log('testX509CrlGetSignatureAlgOid001 ', sigAlgOid);
        expect(sigAlgOid).assertInstanceOf('String')
      } catch (err) {
        console.log('testX509CrlGetSignatureAlgOid001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
      }
      done()
    })

    /**
     * @tc.number    : TEST_X509CRLGETSIGNATUREALGPARAMS_001
     * @tc.name      : test getSignatureAlgParams method
     * @tc.desc      : get the SignatureAlgParams of X509Crl
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlGetSignatureAlgParams001', 0, async (done: Function) => {
      try {
        let sigAlgParams = x509CrlPem.getSignatureAlgParams();
        console.log('testX509CrlGetSignatureAlgParams001 ', sigAlgParams);
        expect(sigAlgParams != null).assertTrue()
      } catch (err) {
        console.log('testX509CrlGetSignatureAlgParams001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
      }
      done()
    })

    /**
     * @tc.number    : TEST_CREATECERTCHAINVALIDATOR_001
     * @tc.name      : test createCertChainValidator method
     * @tc.desc      : create CertChainValidator
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCreateCertChainValidator001', 0, async (done: Function) => {
      try {
        let validator = certFramework.createCertChainValidator('PKIX');
        console.log('testCreateCertChainValidator001 ', validator);
        expect(validator != null).assertTrue()
      } catch (err) {
        console.log('testCreateCertChainValidator001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
      }
      done()
    })

    /**
     * @tc.number    : TEST_CREATECERTCHAINVALIDATOR_002
     * @tc.name      : test createCertChainValidator method
     * @tc.desc      : create CertChainValidator
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCreateCertChainValidator002', 0, async (done: Function) => {
      try {
        let validator = certFramework.createCertChainValidator('PKI111');
        console.log('testCreateCertChainValidator002 ', validator);
        expect(validator != null).assertTrue()
      } catch (err) {
        console.log('testCreateCertChainValidator002 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect(err.code == 801).assertTrue()
      }
      done()
    })

    let certArray1 = stringTouInt8Array(chainFirstCaCert);
    let byteLength1 = certArray1.byteLength;
    let uInt16CertLength1 = new Uint16Array([byteLength1]);
    let uInt8CertLength1 = new Uint8Array(uInt16CertLength1.buffer);
    let certArray2 = stringTouInt8Array(chainSecondCaCert);
    let byteLength2 = certArray2.byteLength;
    let uInt16CertLength2 = new Uint16Array([byteLength2]);
    let uInt8CertLength2 = new Uint8Array(uInt16CertLength2.buffer);

    let dataArray = new Uint8Array(
      uInt8CertLength2.length +
      certArray2.length +
      uInt8CertLength1.length +
      certArray1.length
    );
    for (let i = 0; i < uInt8CertLength2.length; i++) {
      dataArray[i] = uInt8CertLength2[i];
    }
    for (let i = 0; i < certArray2.length; i++) {
      dataArray[i + uInt8CertLength2.length] = certArray2[i];
    }
    for (let i = 0; i < uInt8CertLength1.length; i++) {
      dataArray[i + uInt8CertLength2.length + certArray2.length] =
      uInt8CertLength1[i];
    }
    for (let i = 0; i < certArray1.length; i++) {
      dataArray[
      i +
      uInt8CertLength2.length +
      certArray2.length +
      uInt8CertLength1.length
      ] = certArray1[i];
    }

    /**
     * @tc.number    : TEST_CERTCHAINVALIDATORCALLBACK_001
     * @tc.name      : test validate method in callback mode
     * @tc.desc      : validate certChainData
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertChainValidatorCallback001', 0, async (done: Function) => {
      // 证书链二进制数据，需业务自行赋值
      let certChainData: certFramework.CertChainData = {
        data: dataArray,
        // 证书链包含的证书个数，需业务自行赋值
        count: 2,
        // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
        encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
      };
      try {
        let validator = certFramework.createCertChainValidator('PKIX');
        validator.validate(certChainData, (err) => {
          console.log('testCertChainValidatorCallback001 ', err)
          expect(err == null).assertTrue()
          done()
        });
      } catch (err) {
        console.log('testCertChainValidatorCallback001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }

    })

    /**
     * @tc.number    : TEST_CERTCHAINVALIDATORPROMISE_001
     * @tc.name      : test validate method in promise mode
     * @tc.desc      : validate certChainData
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertChainValidatorPromise001', 0, async (done: Function) => {

      // 证书链二进制数据，需业务自行赋值
      let certChainData: certFramework.CertChainData = {
        data: dataArray,
        // 证书链包含的证书个数，需业务自行赋值
        count: 2,
        // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
        encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
      };
      try {
        let validator = certFramework.createCertChainValidator('PKIX');
        validator.validate(certChainData).then(result => {
          console.log('testCertChainValidatorPromise001 ', result);
          expect(result == null).assertTrue()
          done()
        }).catch((error: BusinessError) => {
          console.log('testCertChainValidatorPromise001 errCode: ' + error.code + ', errMsg: ' + error.message);
          expect().assertFail()
          done()
        });
      } catch (err) {
        console.log('testCertChainValidatorPromise001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }

    })

    /**
     * @tc.number    : TEST_CERTCHAINVALIDATORALGORITHM_001
     * @tc.name      : test Algorithm value
     * @tc.desc      : get Algorithm value of CertChainValidator
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertChainValidatorAlgorithm001', 0, async (done: Function) => {

      try {
        let validator = certFramework.createCertChainValidator('PKIX');
        let algorithm = validator.algorithm;
        console.log('testCertChainValidatorAlgorithm001 ', algorithm);
        expect(algorithm).assertEqual('PKIX')
      } catch (err) {
        console.log('testCertChainValidatorAlgorithm001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
      }
      done()
    })

    let serialNumber = 1000;
    let crlEntryPem = x509CrlPem.getRevokedCert(serialNumber);

    /**
     * @tc.number    : TEST_X509CRLENTRYGETENCODEDCALLBACK_001
     * @tc.name      : test getEncoded method in callback
     * @tc.desc      : get the Encoded of X509CrlEntry
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlEntryGetEncodedCallback001', 0, async (done: Function) => {
      try {

        crlEntryPem.getEncoded((error, data) => {
          if (error != null) {
            console.log('testX509CrlEntryGetEncodedCallback001 errCode: ' + error.code + ', errMsg: ' + error.message);
          } else {
            console.log('testX509CrlEntryGetEncodedCallback001 ', data);
            expect(data != null).assertTrue()
          }
          done()
        });
      } catch (err) {
        console.log('testX509CrlEntryGetEncodedCallback001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLENTRYGETENCODEDPROMISE_001
     * @tc.name      : test getEncoded method in promise mode
     * @tc.desc      : get the Encoded of X509CrlEntry
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlEntryGetEncodedPromise001', 0, async (done: Function) => {
      try {
        crlEntryPem.getEncoded().then(result => {
          console.log('testX509CrlEntryGetEncodedPromise001 ', result);
          expect(result != null).assertTrue()
          done()
        }).catch((error: BusinessError) => {
          console.log('testX509CrlEntryGetEncodedPromise001 errCode: ' + error.code + ', errMsg: ' + error.message);
          done()
        });
      } catch (err) {
        console.log('testX509CrlEntryGetEncodedPromise001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : TEST_X509CRLENTRYGETSERIALNUMBER_001
     * @tc.name      : test getSerialNumber method
     * @tc.desc      : get the SerialNumber of X509CrlEntry
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlEntryGetSerialNumber001', 0, async (done: Function) => {
      try {
        serialNumber = crlEntryPem.getSerialNumber();
        console.log('testX509CrlEntryGetSerialNumber001 ', serialNumber);
        expect(serialNumber).assertEqual(1000)
      } catch (err) {
        console.log('testX509CrlEntryGetSerialNumber001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
      }
      done()
    })

    /**
     * @tc.number    : TEST_CRLENTRYGETCERTISSUER_001
     * @tc.name      : test getCertIssuer method
     * @tc.desc      : get the SerialNumber of X509CrlEntry
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlEntryGetCertIssuer001', 0, async (done: Function) => {
      try {
        let issuer = crlEntryPem.getCertIssuer();
        console.log('testX509CrlEntryGetCertIssuer001 ', issuer);
        expect(issuer != null).assertTrue()
      } catch (err) {
        console.log('testX509CrlEntryGetCertIssuer001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
      }
      done()
    })

    /**
     * @tc.number    : TEST_CRLENTRYGETREVOCATIONDATE_001
     * @tc.name      : test getRevocationDate method
     * @tc.desc      : get the SerialNumber of X509CrlEntry
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testX509CrlEntryGetRevocationDate001', 0, async (done: Function) => {
      try {
        let date = crlEntryPem.getRevocationDate();
        console.log('testX509CrlEntryGetRevocationDate001 ', date);
        expect(date).assertInstanceOf('String')
      } catch (err) {
        console.log('testX509CrlEntryGetRevocationDate001 errCode: ' + err.code + ', errMsg: ' + err.message);
        expect().assertFail()
      }
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_001
    * @tc.name    test CertResult
    * @tc.desc    get the value of INVALID_PARAMS
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult001', 0, async (done: Function) => {
      expect(certFramework.CertResult.INVALID_PARAMS === 401).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_002
    * @tc.name    test CertResult
    * @tc.desc    get the value of NOT_SUPPORT
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult002', 0, async (done: Function) => {
      expect(certFramework.CertResult.NOT_SUPPORT === 801).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_003
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_OUT_OF_MEMORY
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult003', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_OUT_OF_MEMORY === 19020001).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_004
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_RUNTIME_ERROR
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult004', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_RUNTIME_ERROR === 19020002).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_005
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_CRYPTO_OPERATION
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult005', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_CRYPTO_OPERATION === 19030001).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_006
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_CERT_SIGNATURE_FAILURE
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult006', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_CERT_SIGNATURE_FAILURE === 19030002).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_007
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_CERT_NOT_YET_VALID
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult007', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_CERT_NOT_YET_VALID === 19030003).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_008
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_CERT_HAS_EXPIRED
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult008', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_CERT_HAS_EXPIRED === 19030004).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_009
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult009', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY === 19030005).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_010
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_KEYUSAGE_NO_CERTSIGN
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult010', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_KEYUSAGE_NO_CERTSIGN === 19030006).assertTrue();
      done()
    })

    /* *
    * @tc.number  TEST_CERTRESULT_011
    * @tc.name    test CertResult
    * @tc.desc    get the value of ERR_KEYUSAGE_NO_DIGITAL_SIGNATURE
    * @tc.size:   MediumTest
    * @tc.type    method
    * @tc.level   level 2
    */
    it('testCertResult011', 0, async (done: Function) => {
      expect(certFramework.CertResult.ERR_KEYUSAGE_NO_DIGITAL_SIGNATURE === 19030007).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_ENCODINGFORMAT_001
     * @tc.name      : test EncodingFormat
     * @tc.desc      : get the value of FORMAT_DER
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testEncodingFormat001', 0, async (done: Function) => {
      expect(certFramework.EncodingFormat.FORMAT_DER === 0).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_ENCODINGFORMAT_002
     * @tc.name      : test EncodingFormat
     * @tc.desc      : get the value of FORMAT_PEM
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testEncodingFormat002', 0, async (done: Function) => {
      expect(certFramework.EncodingFormat.FORMAT_PEM === 1).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_CERTITEMTYPE_001
     * @tc.name      : test CertItemType
     * @tc.desc      : get the value of CERT_ITEM_TYPE_TBS
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertItemType001', 0, async (done: Function) => {
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_TBS === 0).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_CERTITEMTYPE_002
     * @tc.name      : test CertItemType
     * @tc.desc      : get the value of CERT_ITEM_TYPE_PUBLIC_KEY
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertItemType002', 0, async (done: Function) => {
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_PUBLIC_KEY === 1).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_CERTITEMTYPE_003
     * @tc.name      : test CertItemType
     * @tc.desc      : get the value of CERT_ITEM_TYPE_ISSUER_UNIQUE_ID
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertItemType003', 0, async (done: Function) => {
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_ISSUER_UNIQUE_ID === 2).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_CERTITEMTYPE_004
     * @tc.name      : test CertItemType
     * @tc.desc      : get the value of CERT_ITEM_TYPE_SUBJECT_UNIQUE_ID
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertItemType004', 0, async (done: Function) => {
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_SUBJECT_UNIQUE_ID === 3).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_CERTITEMTYPE_005
     * @tc.name      : test CertItemType
     * @tc.desc      : get the value of CERT_ITEM_TYPE_EXTENSIONS
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testCertItemType005', 0, async (done: Function) => {
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_EXTENSIONS === 4).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_EXTENSIONOIDTYPE_001
     * @tc.name      : test ExtensionOidType
     * @tc.desc      : get the value of EXTENSION_OID_TYPE_ALL
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testExtensionOidType001', 0, async (done: Function) => {
      expect(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_ALL === 0).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_EXTENSIONOIDTYPE_002
     * @tc.name      : test ExtensionOidType
     * @tc.desc      : get the value of EXTENSION_OID_TYPE_CRITICAL
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testExtensionOidType002', 0, async (done: Function) => {
      expect(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_CRITICAL === 1).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_EXTENSIONOIDTYPE_003
     * @tc.name      : test ExtensionOidType
     * @tc.desc      : get the value of EXTENSION_OID_TYPE_UNCRITICAL
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testExtensionOidType003', 0, async (done: Function) => {
      expect(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_UNCRITICAL === 2).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_EXTENSIONENTRYTYPE_001
     * @tc.name      : test ExtensionEntryType
     * @tc.desc      : get the value of EXTENSION_ENTRY_TYPE_ENTRY
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testExtensionEntryType001', 0, async (done: Function) => {
      expect(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY === 0).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_EXTENSIONENTRYTYPE_002
     * @tc.name      : test ExtensionEntryType
     * @tc.desc      : get the value of EXTENSION_ENTRY_TYPE_ENTRY_CRITICAL
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testExtensionEntryType002', 0, async (done: Function) => {
      expect(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY_CRITICAL === 1).assertTrue();
      done()
    })

    /**
     * @tc.number    : TEST_EXTENSIONENTRYTYPE_003
     * @tc.name      : test ExtensionEntryType
     * @tc.desc      : get the value of EXTENSION_ENTRY_TYPE_ENTRY_VALUE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testExtensionEntryType003', 0, async (done: Function) => {
      expect(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY_VALUE === 2).assertTrue();
      done()
    })

    console.log("##########end certificate test##########");
  })
}