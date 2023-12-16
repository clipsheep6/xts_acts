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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import certFramework from '@ohos.security.cert';
import { BusinessError } from '@ohos.base';
import cryptoFramework from '@ohos.security.cryptoFramework';


// 证书二进制数据，需业务自行赋值
let certData = '-----BEGIN CERTIFICATE-----\n' +
  'MIIBHTCBwwICA+gwCgYIKoZIzj0EAwIwGjEYMBYGA1UEAwwPRXhhbXBsZSBSb290\n' +
  'IENBMB4XDTIzMDkwNTAyNDgyMloXDTI2MDUzMTAyNDgyMlowGjEYMBYGA1UEAwwP\n' +
  'RXhhbXBsZSBSb290IENBMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEHjG74yMI\n' +
  'ueO7z3T+dyuEIrhxTg2fqgeNB3SGfsIXlsiUfLTatUsU0i/sePnrKglj2H8Abbx9\n' +
  'PK0tsW/VgqwDIDAKBggqhkjOPQQDAgNJADBGAiEApVZno/Z7WyDc/muRN1y57uaY\n' +
  'Mjrgnvp/AMdE8qmFiDwCIQCrIYdHVO1awaPgcdALZY+uLQi6mEs/oMJLUcmaag3E\n' +
  'Qw==\n' +
  '-----END CERTIFICATE-----\n';

// string转Uint8Array
let arr: Array<number> = [];
for (let i = 0, j = certData.length; i < j; i++) {
  arr.push(certData.charCodeAt(i));
}
let uint8Array:Uint8Array = new Uint8Array(arr);

let encodingBlob: certFramework.EncodingBlob = {
  data: uint8Array,
  // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
  encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
};

export default function certTest() {
  describe('ActsAbilityTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    it('assertContain', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      let a = 'abc';
      let b = 'b';
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.
      expect(a).assertContain(b);
      expect(a).assertEqual(a);
    })

    /**
     *@tc.number    : testCertResult001
     *@tc.name      : testCertResult001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCertResult001', 0, async (done:Function) => {

      expect(certFramework.CertResult.INVALID_PARAMS === 401).assertTrue();
      expect(certFramework.CertResult.NOT_SUPPORT === 801).assertTrue();
      expect(certFramework.CertResult.ERR_OUT_OF_MEMORY === 19020001).assertTrue();
      expect(certFramework.CertResult.ERR_RUNTIME_ERROR === 19020002).assertTrue();
      expect(certFramework.CertResult.ERR_CRYPTO_OPERATION === 19030001).assertTrue();
      expect(certFramework.CertResult.ERR_CERT_SIGNATURE_FAILURE === 19030002).assertTrue();
      expect(certFramework.CertResult.ERR_CERT_NOT_YET_VALID === 19030003).assertTrue();
      expect(certFramework.CertResult.ERR_CERT_HAS_EXPIRED === 19030004).assertTrue();
      expect(certFramework.CertResult.ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY === 19030005).assertTrue();
      expect(certFramework.CertResult.ERR_KEYUSAGE_NO_CERTSIGN === 19030006).assertTrue();
      expect(certFramework.CertResult.ERR_KEYUSAGE_NO_DIGITAL_SIGNATURE === 19030007).assertTrue();

      done();

    })

    /**
     *@tc.number    : testDataBlob001
     *@tc.name      : testDataBlob001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testDataBlob001', 0, async (done:Function) => {

      expect(certFramework.EncodingFormat.FORMAT_DER === 0).assertTrue();

    })

    /**
     *@tc.number    : testCertItemType001
     *@tc.name      : testCertItemType001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCertItemType001', 0, async (done:Function) => {

      expect(certFramework.CertItemType.CERT_ITEM_TYPE_TBS === 0).assertTrue();
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_PUBLIC_KEY === 1).assertTrue();
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_ISSUER_UNIQUE_ID === 2).assertTrue();
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_SUBJECT_UNIQUE_ID === 3).assertTrue();
      expect(certFramework.CertItemType.CERT_ITEM_TYPE_EXTENSIONS === 4).assertTrue();

      done();

    })

    /**
     *@tc.number    : testExtensionOidType001
     *@tc.name      : testExtensionOidType001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testExtensionOidType001', 0, async (done:Function) => {

      expect(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_ALL === 0).assertTrue();
      expect(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_CRITICAL === 1).assertTrue();
      expect(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_UNCRITICAL === 2).assertTrue();

      done();

    })

    /**
     *@tc.number    : testExtensionEntryType001
     *@tc.name      : testExtensionEntryType001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testExtensionEntryType001', 0, async (done:Function) => {

      expect(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY === 0).assertTrue();
      expect(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY_CRITICAL === 1).assertTrue();
      expect(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY_VALUE === 2).assertTrue();

      done();

    })


    /**
     *@tc.number    : testCreateX509Cert001
     *@tc.name      : testCreateX509Cert001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCreateX509Cert001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob).then(x509Cert => {
        console.log('createX509Cert success');
        console.log('createX509Cert success' + x509Cert);
        expect(x509Cert).not().assertUndefined();
        done();
      }).catch((error: BusinessError) => {
        console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        done();
      });
    })

    /**
     *@tc.number    : testX509CertVerify001
     *@tc.name      : testX509CertVerify001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertVerify001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob).then(x509Cert => {
        console.log('createX509Cert success');
        try {
          // 业务需通过上级X509Cert证书对象（或当前证书对象为自签名的证书）的getPublicKey获取PubKey
          let pubKey = x509Cert.getPublicKey();
          x509Cert.verify(pubKey).then(result => {
            console.log('verify success');
            done();
          }).catch((error: BusinessError) => {
            console.error('verify failed, errCode: ' + error.code + ', errMsg: ' + error.message);
            done();
          });
        } catch (err) {
          console.error('get public key failed');
          done();
        }
      }).catch((error: BusinessError) => {
        console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        done();
      });

    })

    /**
     *@tc.number    : testX509CertGetEncoded001
     *@tc.name      : testX509CertGetEncoded001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetEncoded001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          x509Cert.getEncoded((error, data) => {
            if (error != null) {
              console.error('getEncoded failed, errCode: ' + error.code + ', errMsg: ' + error.message);
              done();
            } else {
              console.log('getEncoded success' + data);
              expect(data).not().assertUndefined();
              done();
            }
          });
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetPublicKey001
     *@tc.name      : testX509CertGetPublicKey001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetPublicKey001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let pubKey = x509Cert.getPublicKey();
            expect(pubKey).not().assertUndefined();
            done();
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('getPublicKey failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertCheckValidityWithDate001
     *@tc.name      : testX509CertCheckValidityWithDate001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertCheckValidityWithDate001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Cert success');

          let date = '231001000001Z';
          // Verify the certificate validity period.
          try {
            x509Cert.checkValidityWithDate(date);
            done();
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('checkValidityWithDate failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertCheckValidityWithDate001
     *@tc.name      : testX509CertCheckValidityWithDate001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertCheckValidityWithDate001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Cert success');

          let date = '231001000001Z';
          // Verify the certificate validity period.
          try {
            x509Cert.checkValidityWithDate(date);
            done();
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('checkValidityWithDate failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetVersion001
     *@tc.name      : testX509CertGetVersion001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetVersion001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          let version = x509Cert.getVersion();
          expect(version).not().assertNaN();
          done();
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetCertSerialNumber001
     *@tc.name      : testX509CertGetCertSerialNumber001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetCertSerialNumber001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let serialNumber = x509Cert.getCertSerialNumber();
            expect(serialNumber).not().assertNaN();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getCertSerialNumber failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     * 测试到这里了，拿到开发板在测试，目前进度：完成X509Cert
     */

    /**
     *@tc.number    : testX509CertGetIssuerName001
     *@tc.name      : testX509CertGetIssuerName001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetIssuerName001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let issuerName = x509Cert.getIssuerName();
            console.log('createX509Cert success:' + issuerName);
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getIssuerName failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetSubjectName001
     *@tc.name      : testX509CertGetSubjectName001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetSubjectName001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let subjectName = x509Cert.getSubjectName();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSubjectName failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetNotBeforeTime001
     *@tc.name      : testX509CertGetNotBeforeTime001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetNotBeforeTime001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let notBefore = x509Cert.getNotBeforeTime();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getNotBeforeTime failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetNotAfterTime001
     *@tc.name      : testX509CertGetNotAfterTime001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetNotAfterTime001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let notAfter = x509Cert.getNotAfterTime();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getNotAfterTime failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetSignature001
     *@tc.name      : testX509CertGetSignature001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetSignature001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let signature = x509Cert.getSignature();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSignature failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetSignatureAlgName001
     *@tc.name      : testX509CertGetSignatureAlgName001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetSignatureAlgName001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let sigAlgName = x509Cert.getSignatureAlgName();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSignatureAlgName failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetSignatureAlgOid001
     *@tc.name      : testX509CertGetSignatureAlgOid001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetSignatureAlgOid001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let sigAlgOid = x509Cert.getSignatureAlgOid();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSignatureAlgOid failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetSignatureAlgParams001
     *@tc.name      : testX509CertGetSignatureAlgParams001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetSignatureAlgParams001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let sigAlgParams = x509Cert.getSignatureAlgParams();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSignatureAlgParams failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetKeyUsage001
     *@tc.name      : testX509CertGetKeyUsage001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetKeyUsage001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let keyUsage = x509Cert.getKeyUsage();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getKeyUsage failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetExtKeyUsage001
     *@tc.name      : testX509CertGetExtKeyUsage001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetExtKeyUsage001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let extKeyUsage = x509Cert.getExtKeyUsage();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getNotBeforeTime failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetBasicConstraints001
     *@tc.name      : testX509CertGetBasicConstraints001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetBasicConstraints001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          let basicConstraints = x509Cert.getBasicConstraints();
          done();
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetSubjectAltNames001
     *@tc.name      : testX509CertGetSubjectAltNames001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetSubjectAltNames001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let subjectAltNames = x509Cert.getSubjectAltNames();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSubjectAltNames failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetIssuerAltNames001
     *@tc.name      : testX509CertGetIssuerAltNames001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetIssuerAltNames001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let issuerAltNames = x509Cert.getIssuerAltNames();
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getIssuerAltNames failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CertGetItem001
     *@tc.name      : testX509CertGetItem001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CertGetItem001', 0, async (done:Function) => {

      certFramework.createX509Cert(encodingBlob, (error, x509Cert) => {
        if (error != null) {
          console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          done();
        } else {
          console.log('createX509Cert success');
          try {
            let tbs = x509Cert.getItem(certFramework.CertItemType.CERT_ITEM_TYPE_TBS);
            let pubKey = x509Cert.getItem(certFramework.CertItemType.CERT_ITEM_TYPE_PUBLIC_KEY);
            done();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getItem failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            done();
          }
        }
      });

    })

    // 证书扩展域段二进制数据，需业务自行赋值
    let extData = new Uint8Array([
      0x30, 0x40, 0x30, 0x0F, 0x06, 0x03, 0x55, 0x1D,
      0x13, 0x01, 0x01, 0xFF, 0x04, 0x05, 0x30, 0x03,
      0x01, 0x01, 0xFF, 0x30, 0x0E, 0x06, 0x03, 0x55,
      0x1D, 0x0F, 0x01, 0x01, 0xFF, 0x04, 0x04, 0x03,
      0x02, 0x01, 0xC6, 0x30, 0x1D, 0x06, 0x03, 0x55,
      0x1D, 0x0E, 0x04, 0x16, 0x04, 0x14, 0xE0, 0x8C,
      0x9B, 0xDB, 0x25, 0x49, 0xB3, 0xF1, 0x7C, 0x86,
      0xD6, 0xB2, 0x42, 0x87, 0x0B, 0xD0, 0x6B, 0xA0,
      0xD9, 0xE4
    ]);

    let encodingBlob2: certFramework.EncodingBlob = {
      data: extData,
      // 根据encodingData的格式进行赋值，仅支持FORMAT_DER
      encodingFormat: certFramework.EncodingFormat.FORMAT_DER
    };

    /**
     *@tc.number    : testCreateCertExtension001
     *@tc.name      : testCreateCertExtension001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCreateCertExtension001', 0, async (done:Function) => {

      certFramework.createCertExtension(encodingBlob2).then(certExt => {
        console.log('createCertExtension success');
      }).catch((error: BusinessError) => {
        console.error('createCertExtension failed, errCode: ' + error.code + ', errMsg: ' + error.message);
      });

    })

    /**
     *@tc.number    : testGetEncoded001
     *@tc.name      : testGetEncoded001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetEncoded001', 0, async (done:Function) => {

      certFramework.createCertExtension(encodingBlob2, (error, certExt) => {
        if (error != null) {
          console.error('createCertExtension failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createCertExtension success');
          try {
            let extEncodedBlob = certExt.getEncoded();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('ext getEncoded failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetOidList001
     *@tc.name      : testGetOidList001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetOidList001', 0, async (done:Function) => {

      certFramework.createCertExtension(encodingBlob2, (error, certExt) => {
        if (error != null) {
          console.error('createCertExtension failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createCertExtension success');
          try {
            let oidList = certExt.getOidList(certFramework.ExtensionOidType.EXTENSION_OID_TYPE_ALL);
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('ext getOidList failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetEntry001
     *@tc.name      : testGetEntry001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetEntry001', 0, async (done:Function) => {

      certFramework.createCertExtension(encodingBlob2, (error, certExt) => {
        if (error != null) {
          console.error('createCertExtension failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createCertExtension success');
          let oid = new Uint8Array([0x32, 0x2e, 0x35, 0x2e, 0x32, 0x39, 0x2e, 0x31, 0x35]);
          let oidBlob: certFramework.DataBlob = {
            data: oid
          }
          try {
            let entry = certExt.getEntry(certFramework.ExtensionEntryType.EXTENSION_ENTRY_TYPE_ENTRY, oidBlob);
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('ext getEntry failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testCheckCA001
     *@tc.name      : testCheckCA001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCheckCA001', 0, async (done:Function) => {

      certFramework.createCertExtension(encodingBlob2, (error, certExt) => {
        if (error != null) {
          console.error('createCertExtension failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createCertExtension success');
          try {
            let res = certExt.checkCA();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('ext checkCA failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })


    let crlData = '-----BEGIN X509 CRL-----\n' +
      'MIHzMF4CAQMwDQYJKoZIhvcNAQEEBQAwFTETMBEGA1UEAxMKQ1JMIGlzc3VlchcN\n' +
      'MTcwODA3MTExOTU1WhcNMzIxMjE0MDA1MzIwWjAVMBMCAgPoFw0zMjEyMTQwMDUz\n' +
      'MjBaMA0GCSqGSIb3DQEBBAUAA4GBACEPHhlaCTWA42ykeaOyR0SGQIHIOUR3gcDH\n' +
      'J1LaNwiL+gDxI9rMQmlhsUGJmPIPdRs9uYyI+f854lsWYisD2PUEpn3DbEvzwYeQ\n' +
      '5SqQoPDoM+YfZZa23hoTLsu52toXobP74sf/9K501p/+8hm4ROMLBoRT86GQKY6g\n' +
      'eavsH0Q3\n' +
      '-----END X509 CRL-----\n';

    let certData = '-----BEGIN CERTIFICATE-----\n' +
      'MIIBLzCB1QIUO/QDVJwZLIpeJyPjyTvE43xvE5cwCgYIKoZIzj0EAwIwGjEYMBYG\n' +
      'A1UEAwwPRXhhbXBsZSBSb290IENBMB4XDTIzMDkwNDExMjAxOVoXDTI2MDUzMDEx\n' +
      'MjAxOVowGjEYMBYGA1UEAwwPRXhhbXBsZSBSb290IENBMFkwEwYHKoZIzj0CAQYI\n' +
      'KoZIzj0DAQcDQgAEHjG74yMIueO7z3T+dyuEIrhxTg2fqgeNB3SGfsIXlsiUfLTa\n' +
      'tUsU0i/sePnrKglj2H8Abbx9PK0tsW/VgqwDIDAKBggqhkjOPQQDAgNJADBGAiEA\n' +
      '0ce/fvA4tckNZeB865aOApKXKlBjiRlaiuq5mEEqvNACIQDPD9WyC21MXqPBuRUf\n' +
      'BetUokslUfjT6+s/X4ByaxycAA==\n' +
      '-----END CERTIFICATE-----\n';

    let arr: Array<number> = [];
    for (let i = 0, j = crlData.length; i < j; i++) {
      arr.push(crlData.charCodeAt(i));
    }
    let stringToUint8Array:Uint8Array = new Uint8Array(arr);

    // 证书吊销列表二进制数据，需业务自行赋值
    let encodingBlobCrl: certFramework.EncodingBlob = {
      data: stringToUint8Array,
      // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
      encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
    };

    let arr2: Array<number> = [];
    for (let i = 0, j = crlData.length; i < j; i++) {
      arr2.push(crlData.charCodeAt(i));
    }
    let certStringToUint8Array:Uint8Array = new Uint8Array(arr2);

    let certEncodingBlob: certFramework.EncodingBlob = {
      data: certStringToUint8Array,
      // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
      encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
    };

    /**
     *@tc.number    : testCreateX509Crl001
     *@tc.name      : testCreateX509Crl001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCreateX509Crl001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
        }
      });

    })

    /**
     *@tc.number    : testIsRevoked001
     *@tc.name      : testIsRevoked001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testIsRevoked001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          // Create an X509Cert instance.
          certFramework.createX509Cert(certEncodingBlob, (error, x509Cert) => {
            if (error == null) {
              try {
                let revokedFlag = x509Crl.isRevoked(x509Cert);
              } catch (error) {
                let e: BusinessError = error as BusinessError;
                console.error('isRevoked failed, errCode: ' + e.code + ', errMsg: ' + e.message);
              }
            }
          });
        }
      });

    })

    /**
     *@tc.number    : testGetType001
     *@tc.name      : testGetType001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetType001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          let type = x509Crl.getType();
        }
      });

    })

    /**
     *@tc.number    : testGetEncoded001
     *@tc.name      : testGetEncoded001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetEncoded001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          x509Crl.getEncoded((error, data) => {
            if (error != null) {
              console.error('getEncoded failed, errCode: ' + error.code + ', errMsg: ' + error.message);
            } else {
              console.log('getEncoded success');
            }
          });
        }
      });

    })

    /**
     *@tc.number    : testGetEncoded002
     *@tc.name      : testGetEncoded002
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetEncoded002', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlob).then(x509Crl => {
        console.log('createX509Crl success');
        x509Crl.getEncoded().then(result => {
          console.log('getEncoded success');
        }).catch((error: BusinessError) => {
          console.error('getEncoded failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        });
      }).catch((error: BusinessError) => {
        console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
      });

    })

    /**
     *@tc.number    : testX509CrlVerify001
     *@tc.name      : testX509CrlVerify001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CrlVerify001', 0, async (done:Function) => {

      let crlData = '-----BEGIN X509 CRL-----\n' +
        'MIHzMF4CAQMwDQYJKoZIhvcNAQEEBQAwFTETMBEGA1UEAxMKQ1JMIGlzc3VlchcN\n' +
        'MTcwODA3MTExOTU1WhcNMzIxMjE0MDA1MzIwWjAVMBMCAgPoFw0zMjEyMTQwMDUz\n' +
        'MjBaMA0GCSqGSIb3DQEBBAUAA4GBACEPHhlaCTWA42ykeaOyR0SGQIHIOUR3gcDH\n' +
        'J1LaNwiL+gDxI9rMQmlhsUGJmPIPdRs9uYyI+f854lsWYisD2PUEpn3DbEvzwYeQ\n' +
        '5SqQoPDoM+YfZZa23hoTLsu52toXobP74sf/9K501p/+8hm4ROMLBoRT86GQKY6g\n' +
        'eavsH0Q3\n' +
        '-----END X509 CRL-----\n';

      let pubKeyData = new Uint8Array([
        0x30, 0x81, 0x9F, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01,
        0x05, 0x00, 0x03, 0x81, 0x8D, 0x00, 0x30, 0x81, 0x89, 0x02, 0x81, 0x81, 0x00, 0xDC, 0x4C, 0x2D,
        0x57, 0x49, 0x3D, 0x42, 0x52, 0x1A, 0x09, 0xED, 0x3E, 0x90, 0x29, 0x51, 0xF7, 0x70, 0x15, 0xFE,
        0x76, 0xB0, 0xDB, 0xDF, 0xA1, 0x2C, 0x6C, 0x67, 0x95, 0xDA, 0x63, 0x3D, 0x4F, 0x71, 0x48, 0x8C,
        0x3E, 0xFA, 0x24, 0x79, 0xE9, 0xF2, 0xF2, 0x20, 0xCB, 0xF1, 0x59, 0x6B, 0xED, 0xC8, 0x72, 0x66,
        0x6E, 0x31, 0xD4, 0xF3, 0xCE, 0x0B, 0x12, 0xC4, 0x17, 0x39, 0xB4, 0x52, 0x16, 0xD3, 0xE3, 0xC0,
        0xF8, 0x48, 0xB3, 0xF6, 0x40, 0xD5, 0x47, 0x23, 0x30, 0x7F, 0xA7, 0xC5, 0x5A, 0x5A, 0xBB, 0x5C,
        0x7B, 0xEF, 0x69, 0xE2, 0x74, 0x35, 0x24, 0x22, 0x25, 0x45, 0x7E, 0xFC, 0xE8, 0xC4, 0x52, 0x65,
        0xA0, 0x4E, 0xBC, 0xFD, 0x3F, 0xD9, 0x85, 0x14, 0x8A, 0x5A, 0x93, 0x02, 0x24, 0x6C, 0x19, 0xBA,
        0x81, 0xBE, 0x65, 0x2E, 0xCB, 0xBB, 0xE9, 0x91, 0x7B, 0x7C, 0x47, 0xC2, 0x61, 0x02, 0x03, 0x01,
        0x00, 0x01
      ]);

      let priKeyData = new Uint8Array([
        0x30, 0x82, 0x02, 0x77, 0x02, 0x01, 0x00, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7,
        0x0D, 0x01, 0x01, 0x01, 0x05, 0x00, 0x04, 0x82, 0x02, 0x61, 0x30, 0x82, 0x02, 0x5D, 0x02, 0x01,
        0x00, 0x02, 0x81, 0x81, 0x00, 0xDC, 0x4C, 0x2D, 0x57, 0x49, 0x3D, 0x42, 0x52, 0x1A, 0x09, 0xED,
        0x3E, 0x90, 0x29, 0x51, 0xF7, 0x70, 0x15, 0xFE, 0x76, 0xB0, 0xDB, 0xDF, 0xA1, 0x2C, 0x6C, 0x67,
        0x95, 0xDA, 0x63, 0x3D, 0x4F, 0x71, 0x48, 0x8C, 0x3E, 0xFA, 0x24, 0x79, 0xE9, 0xF2, 0xF2, 0x20,
        0xCB, 0xF1, 0x59, 0x6B, 0xED, 0xC8, 0x72, 0x66, 0x6E, 0x31, 0xD4, 0xF3, 0xCE, 0x0B, 0x12, 0xC4,
        0x17, 0x39, 0xB4, 0x52, 0x16, 0xD3, 0xE3, 0xC0, 0xF8, 0x48, 0xB3, 0xF6, 0x40, 0xD5, 0x47, 0x23,
        0x30, 0x7F, 0xA7, 0xC5, 0x5A, 0x5A, 0xBB, 0x5C, 0x7B, 0xEF, 0x69, 0xE2, 0x74, 0x35, 0x24, 0x22,
        0x25, 0x45, 0x7E, 0xFC, 0xE8, 0xC4, 0x52, 0x65, 0xA0, 0x4E, 0xBC, 0xFD, 0x3F, 0xD9, 0x85, 0x14,
        0x8A, 0x5A, 0x93, 0x02, 0x24, 0x6C, 0x19, 0xBA, 0x81, 0xBE, 0x65, 0x2E, 0xCB, 0xBB, 0xE9, 0x91,
        0x7B, 0x7C, 0x47, 0xC2, 0x61, 0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x81, 0x80, 0x5A, 0xCF, 0x0F,
        0xF5, 0xA6, 0x1C, 0x19, 0x65, 0x8C, 0x94, 0x40, 0xF6, 0x84, 0x28, 0x74, 0x40, 0x42, 0x34, 0xDE,
        0xC3, 0x00, 0x5E, 0x72, 0x4D, 0x96, 0xE9, 0x4C, 0xBD, 0xC9, 0xDB, 0x14, 0x9F, 0xD5, 0xBB, 0xA9,
        0x0C, 0x20, 0xC2, 0xBE, 0x7A, 0x80, 0x89, 0xEC, 0x99, 0x04, 0xF0, 0xEE, 0x7B, 0x83, 0x20, 0x1D,
        0x37, 0x19, 0x55, 0x85, 0xF6, 0x8E, 0x3B, 0xFB, 0x16, 0xF3, 0xD3, 0x6F, 0xEE, 0x73, 0x12, 0x53,
        0xCA, 0x77, 0xD7, 0x6C, 0x29, 0xF5, 0x08, 0xA3, 0x09, 0x01, 0x0B, 0x00, 0x05, 0x57, 0xAD, 0x4D,
        0xF0, 0x92, 0xB2, 0x5A, 0x8B, 0x19, 0x09, 0x81, 0x86, 0xFE, 0x66, 0xB9, 0x33, 0x88, 0x28, 0xF3,
        0x37, 0x73, 0x09, 0x5F, 0xD7, 0xC9, 0xC6, 0xFA, 0x13, 0x74, 0xFE, 0xAE, 0x53, 0xA9, 0x71, 0x67,
        0xCE, 0x3A, 0xE6, 0x8D, 0x35, 0xD1, 0xB8, 0xFD, 0x6F, 0x0D, 0x43, 0xC2, 0xD1, 0x02, 0x41, 0x00,
        0xF7, 0x33, 0xE5, 0x6C, 0x29, 0x5A, 0x30, 0x58, 0xA4, 0x52, 0x65, 0xA0, 0x39, 0xC2, 0xE8, 0xAE,
        0x5F, 0xA3, 0x2D, 0x0C, 0x65, 0xB1, 0x7B, 0xFD, 0x92, 0xBF, 0x47, 0x87, 0x97, 0x40, 0xCB, 0x54,
        0xF9, 0xBB, 0x50, 0x27, 0x70, 0x51, 0xD0, 0xD8, 0x48, 0x0D, 0xC6, 0x47, 0x60, 0xF8, 0x4E, 0x0A,
        0x32, 0x76, 0x6D, 0xA4, 0xBA, 0x40, 0xE5, 0x58, 0xF8, 0x4A, 0x39, 0x4E, 0xF8, 0x3F, 0x4E, 0x2D,
        0x02, 0x41, 0x00, 0xE4, 0x23, 0x2A, 0x5F, 0x59, 0xCF, 0x7C, 0x91, 0x24, 0x0D, 0xA2, 0x44, 0x17,
        0xCD, 0x37, 0xDE, 0x1F, 0x53, 0x4D, 0x33, 0x9F, 0x90, 0x4D, 0xD9, 0x72, 0x64, 0x25, 0xBA, 0xAB,
        0x47, 0x91, 0xC4, 0x99, 0x95, 0x86, 0xB5, 0x8A, 0xEA, 0x77, 0xF7, 0x64, 0x72, 0x5E, 0xB7, 0xBB,
        0x16, 0xA1, 0x64, 0xA4, 0xE1, 0x2D, 0x76, 0x6D, 0xEF, 0xB1, 0x5E, 0xD6, 0x17, 0xE8, 0xAA, 0xB6,
        0xA0, 0xD9, 0x85, 0x02, 0x41, 0x00, 0xDF, 0xC8, 0x5B, 0x28, 0x4F, 0x47, 0x15, 0xFD, 0x28, 0xC4,
        0x6E, 0xBB, 0x5D, 0x8E, 0xD4, 0x95, 0x06, 0x7E, 0xF1, 0x89, 0x07, 0x86, 0x64, 0x78, 0x69, 0x20,
        0x3F, 0xE0, 0xBF, 0x4C, 0x28, 0xC6, 0x04, 0x4D, 0x4D, 0x82, 0x66, 0x6B, 0xAA, 0x64, 0x20, 0xD6,
        0x57, 0x68, 0xC6, 0xA0, 0x02, 0x05, 0xB9, 0x28, 0xFC, 0x98, 0xE3, 0x03, 0x5C, 0x9B, 0xEE, 0x29,
        0x43, 0x37, 0xFA, 0x03, 0x55, 0x01, 0x02, 0x40, 0x69, 0x5B, 0x7C, 0x24, 0x10, 0xDB, 0xEB, 0x91,
        0x33, 0xEF, 0x3F, 0xF2, 0xE6, 0x73, 0x15, 0xCB, 0xF4, 0xF7, 0x89, 0x7D, 0xBF, 0xC0, 0xEA, 0xD2,
        0xF3, 0x2B, 0x20, 0xE9, 0x76, 0x54, 0x55, 0x13, 0x50, 0x42, 0x67, 0xB5, 0xCB, 0x73, 0xC0, 0xF7,
        0x75, 0x62, 0x04, 0x30, 0x21, 0xAC, 0xAF, 0xD8, 0x44, 0xF4, 0xE1, 0x04, 0x02, 0x7D, 0x61, 0x92,
        0x84, 0x99, 0x02, 0x10, 0x64, 0xCB, 0x1F, 0xE9, 0x02, 0x41, 0x00, 0xAB, 0x4B, 0x7D, 0x90, 0x7C,
        0x57, 0x08, 0x6B, 0xC0, 0x43, 0x72, 0x09, 0x8A, 0x18, 0x35, 0x36, 0x64, 0x9D, 0x84, 0x8D, 0xF1,
        0x84, 0x94, 0x48, 0xC6, 0x80, 0x9D, 0xB9, 0xA2, 0x58, 0x0A, 0x4D, 0x0A, 0xCA, 0x1E, 0xD6, 0x05,
        0x55, 0x5B, 0xFE, 0xD7, 0xAA, 0x70, 0xED, 0x76, 0xB3, 0x40, 0x2E, 0xA0, 0xB3, 0x32, 0x37, 0xB0,
        0xA0, 0xB9, 0x96, 0x2D, 0xC4, 0x70, 0xE9, 0x99, 0x10, 0x67, 0x8D
      ]);

      let arr: Array<number> = [];
      for (let i = 0, j = crlData.length; i < j; i++) {
        arr.push(crlData.charCodeAt(i));
      }
      let stringToUint8Array:Uint8Array = new Uint8Array(arr);

      // 证书吊销列表二进制数据，需业务自行赋值
      let encodingBlob: certFramework.EncodingBlob = {
        data: stringToUint8Array,
        // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
        encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
      };

      certFramework.createX509Crl(encodingBlob, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            // Generate the public key by AsyKeyGenerator.
            let keyGenerator = cryptoFramework.createAsyKeyGenerator('RSA1024|PRIMES_3');
            console.log('createAsyKeyGenerator success');
            let priEncodingBlob: cryptoFramework.DataBlob = {
              data: priKeyData,
            };
            let pubEncodingBlob: cryptoFramework.DataBlob = {
              data: pubKeyData,
            };
            keyGenerator.convertKey(pubEncodingBlob, priEncodingBlob, (e, keyPair) => {
              if (e == null) {
                console.log('convert key success');
                x509Crl.verify(keyPair.pubKey, (err, data) => {
                  if (err == null) {
                    console.log('verify success');
                  } else {
                    console.error('verify failed, errCode: ' + err.code + ', errMsg: ' + err.message);
                  }
                });
              } else {
                console.error('convert key failed, message: ' + e.message + 'code: ' + e.code);
              }
            })
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('get pubKey failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testX509CrlVerify002
     *@tc.name      : testX509CrlVerify002
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CrlVerify002', 0, async (done:Function) => {

      let crlData = '-----BEGIN X509 CRL-----\n' +
        'MIHzMF4CAQMwDQYJKoZIhvcNAQEEBQAwFTETMBEGA1UEAxMKQ1JMIGlzc3VlchcN\n' +
        'MTcwODA3MTExOTU1WhcNMzIxMjE0MDA1MzIwWjAVMBMCAgPoFw0zMjEyMTQwMDUz\n' +
        'MjBaMA0GCSqGSIb3DQEBBAUAA4GBACEPHhlaCTWA42ykeaOyR0SGQIHIOUR3gcDH\n' +
        'J1LaNwiL+gDxI9rMQmlhsUGJmPIPdRs9uYyI+f854lsWYisD2PUEpn3DbEvzwYeQ\n' +
        '5SqQoPDoM+YfZZa23hoTLsu52toXobP74sf/9K501p/+8hm4ROMLBoRT86GQKY6g\n' +
        'eavsH0Q3\n' +
        '-----END X509 CRL-----\n';

      let pubKeyData = new Uint8Array([
        0x30, 0x81, 0x9F, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01,
        0x05, 0x00, 0x03, 0x81, 0x8D, 0x00, 0x30, 0x81, 0x89, 0x02, 0x81, 0x81, 0x00, 0xDC, 0x4C, 0x2D,
        0x57, 0x49, 0x3D, 0x42, 0x52, 0x1A, 0x09, 0xED, 0x3E, 0x90, 0x29, 0x51, 0xF7, 0x70, 0x15, 0xFE,
        0x76, 0xB0, 0xDB, 0xDF, 0xA1, 0x2C, 0x6C, 0x67, 0x95, 0xDA, 0x63, 0x3D, 0x4F, 0x71, 0x48, 0x8C,
        0x3E, 0xFA, 0x24, 0x79, 0xE9, 0xF2, 0xF2, 0x20, 0xCB, 0xF1, 0x59, 0x6B, 0xED, 0xC8, 0x72, 0x66,
        0x6E, 0x31, 0xD4, 0xF3, 0xCE, 0x0B, 0x12, 0xC4, 0x17, 0x39, 0xB4, 0x52, 0x16, 0xD3, 0xE3, 0xC0,
        0xF8, 0x48, 0xB3, 0xF6, 0x40, 0xD5, 0x47, 0x23, 0x30, 0x7F, 0xA7, 0xC5, 0x5A, 0x5A, 0xBB, 0x5C,
        0x7B, 0xEF, 0x69, 0xE2, 0x74, 0x35, 0x24, 0x22, 0x25, 0x45, 0x7E, 0xFC, 0xE8, 0xC4, 0x52, 0x65,
        0xA0, 0x4E, 0xBC, 0xFD, 0x3F, 0xD9, 0x85, 0x14, 0x8A, 0x5A, 0x93, 0x02, 0x24, 0x6C, 0x19, 0xBA,
        0x81, 0xBE, 0x65, 0x2E, 0xCB, 0xBB, 0xE9, 0x91, 0x7B, 0x7C, 0x47, 0xC2, 0x61, 0x02, 0x03, 0x01,
        0x00, 0x01
      ]);

      let priKeyData = new Uint8Array([
        0x30, 0x82, 0x02, 0x77, 0x02, 0x01, 0x00, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7,
        0x0D, 0x01, 0x01, 0x01, 0x05, 0x00, 0x04, 0x82, 0x02, 0x61, 0x30, 0x82, 0x02, 0x5D, 0x02, 0x01,
        0x00, 0x02, 0x81, 0x81, 0x00, 0xDC, 0x4C, 0x2D, 0x57, 0x49, 0x3D, 0x42, 0x52, 0x1A, 0x09, 0xED,
        0x3E, 0x90, 0x29, 0x51, 0xF7, 0x70, 0x15, 0xFE, 0x76, 0xB0, 0xDB, 0xDF, 0xA1, 0x2C, 0x6C, 0x67,
        0x95, 0xDA, 0x63, 0x3D, 0x4F, 0x71, 0x48, 0x8C, 0x3E, 0xFA, 0x24, 0x79, 0xE9, 0xF2, 0xF2, 0x20,
        0xCB, 0xF1, 0x59, 0x6B, 0xED, 0xC8, 0x72, 0x66, 0x6E, 0x31, 0xD4, 0xF3, 0xCE, 0x0B, 0x12, 0xC4,
        0x17, 0x39, 0xB4, 0x52, 0x16, 0xD3, 0xE3, 0xC0, 0xF8, 0x48, 0xB3, 0xF6, 0x40, 0xD5, 0x47, 0x23,
        0x30, 0x7F, 0xA7, 0xC5, 0x5A, 0x5A, 0xBB, 0x5C, 0x7B, 0xEF, 0x69, 0xE2, 0x74, 0x35, 0x24, 0x22,
        0x25, 0x45, 0x7E, 0xFC, 0xE8, 0xC4, 0x52, 0x65, 0xA0, 0x4E, 0xBC, 0xFD, 0x3F, 0xD9, 0x85, 0x14,
        0x8A, 0x5A, 0x93, 0x02, 0x24, 0x6C, 0x19, 0xBA, 0x81, 0xBE, 0x65, 0x2E, 0xCB, 0xBB, 0xE9, 0x91,
        0x7B, 0x7C, 0x47, 0xC2, 0x61, 0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x81, 0x80, 0x5A, 0xCF, 0x0F,
        0xF5, 0xA6, 0x1C, 0x19, 0x65, 0x8C, 0x94, 0x40, 0xF6, 0x84, 0x28, 0x74, 0x40, 0x42, 0x34, 0xDE,
        0xC3, 0x00, 0x5E, 0x72, 0x4D, 0x96, 0xE9, 0x4C, 0xBD, 0xC9, 0xDB, 0x14, 0x9F, 0xD5, 0xBB, 0xA9,
        0x0C, 0x20, 0xC2, 0xBE, 0x7A, 0x80, 0x89, 0xEC, 0x99, 0x04, 0xF0, 0xEE, 0x7B, 0x83, 0x20, 0x1D,
        0x37, 0x19, 0x55, 0x85, 0xF6, 0x8E, 0x3B, 0xFB, 0x16, 0xF3, 0xD3, 0x6F, 0xEE, 0x73, 0x12, 0x53,
        0xCA, 0x77, 0xD7, 0x6C, 0x29, 0xF5, 0x08, 0xA3, 0x09, 0x01, 0x0B, 0x00, 0x05, 0x57, 0xAD, 0x4D,
        0xF0, 0x92, 0xB2, 0x5A, 0x8B, 0x19, 0x09, 0x81, 0x86, 0xFE, 0x66, 0xB9, 0x33, 0x88, 0x28, 0xF3,
        0x37, 0x73, 0x09, 0x5F, 0xD7, 0xC9, 0xC6, 0xFA, 0x13, 0x74, 0xFE, 0xAE, 0x53, 0xA9, 0x71, 0x67,
        0xCE, 0x3A, 0xE6, 0x8D, 0x35, 0xD1, 0xB8, 0xFD, 0x6F, 0x0D, 0x43, 0xC2, 0xD1, 0x02, 0x41, 0x00,
        0xF7, 0x33, 0xE5, 0x6C, 0x29, 0x5A, 0x30, 0x58, 0xA4, 0x52, 0x65, 0xA0, 0x39, 0xC2, 0xE8, 0xAE,
        0x5F, 0xA3, 0x2D, 0x0C, 0x65, 0xB1, 0x7B, 0xFD, 0x92, 0xBF, 0x47, 0x87, 0x97, 0x40, 0xCB, 0x54,
        0xF9, 0xBB, 0x50, 0x27, 0x70, 0x51, 0xD0, 0xD8, 0x48, 0x0D, 0xC6, 0x47, 0x60, 0xF8, 0x4E, 0x0A,
        0x32, 0x76, 0x6D, 0xA4, 0xBA, 0x40, 0xE5, 0x58, 0xF8, 0x4A, 0x39, 0x4E, 0xF8, 0x3F, 0x4E, 0x2D,
        0x02, 0x41, 0x00, 0xE4, 0x23, 0x2A, 0x5F, 0x59, 0xCF, 0x7C, 0x91, 0x24, 0x0D, 0xA2, 0x44, 0x17,
        0xCD, 0x37, 0xDE, 0x1F, 0x53, 0x4D, 0x33, 0x9F, 0x90, 0x4D, 0xD9, 0x72, 0x64, 0x25, 0xBA, 0xAB,
        0x47, 0x91, 0xC4, 0x99, 0x95, 0x86, 0xB5, 0x8A, 0xEA, 0x77, 0xF7, 0x64, 0x72, 0x5E, 0xB7, 0xBB,
        0x16, 0xA1, 0x64, 0xA4, 0xE1, 0x2D, 0x76, 0x6D, 0xEF, 0xB1, 0x5E, 0xD6, 0x17, 0xE8, 0xAA, 0xB6,
        0xA0, 0xD9, 0x85, 0x02, 0x41, 0x00, 0xDF, 0xC8, 0x5B, 0x28, 0x4F, 0x47, 0x15, 0xFD, 0x28, 0xC4,
        0x6E, 0xBB, 0x5D, 0x8E, 0xD4, 0x95, 0x06, 0x7E, 0xF1, 0x89, 0x07, 0x86, 0x64, 0x78, 0x69, 0x20,
        0x3F, 0xE0, 0xBF, 0x4C, 0x28, 0xC6, 0x04, 0x4D, 0x4D, 0x82, 0x66, 0x6B, 0xAA, 0x64, 0x20, 0xD6,
        0x57, 0x68, 0xC6, 0xA0, 0x02, 0x05, 0xB9, 0x28, 0xFC, 0x98, 0xE3, 0x03, 0x5C, 0x9B, 0xEE, 0x29,
        0x43, 0x37, 0xFA, 0x03, 0x55, 0x01, 0x02, 0x40, 0x69, 0x5B, 0x7C, 0x24, 0x10, 0xDB, 0xEB, 0x91,
        0x33, 0xEF, 0x3F, 0xF2, 0xE6, 0x73, 0x15, 0xCB, 0xF4, 0xF7, 0x89, 0x7D, 0xBF, 0xC0, 0xEA, 0xD2,
        0xF3, 0x2B, 0x20, 0xE9, 0x76, 0x54, 0x55, 0x13, 0x50, 0x42, 0x67, 0xB5, 0xCB, 0x73, 0xC0, 0xF7,
        0x75, 0x62, 0x04, 0x30, 0x21, 0xAC, 0xAF, 0xD8, 0x44, 0xF4, 0xE1, 0x04, 0x02, 0x7D, 0x61, 0x92,
        0x84, 0x99, 0x02, 0x10, 0x64, 0xCB, 0x1F, 0xE9, 0x02, 0x41, 0x00, 0xAB, 0x4B, 0x7D, 0x90, 0x7C,
        0x57, 0x08, 0x6B, 0xC0, 0x43, 0x72, 0x09, 0x8A, 0x18, 0x35, 0x36, 0x64, 0x9D, 0x84, 0x8D, 0xF1,
        0x84, 0x94, 0x48, 0xC6, 0x80, 0x9D, 0xB9, 0xA2, 0x58, 0x0A, 0x4D, 0x0A, 0xCA, 0x1E, 0xD6, 0x05,
        0x55, 0x5B, 0xFE, 0xD7, 0xAA, 0x70, 0xED, 0x76, 0xB3, 0x40, 0x2E, 0xA0, 0xB3, 0x32, 0x37, 0xB0,
        0xA0, 0xB9, 0x96, 0x2D, 0xC4, 0x70, 0xE9, 0x99, 0x10, 0x67, 0x8D
      ]);

      let arr: Array<number> = [];
      for (let i = 0, j = crlData.length; i < j; i++) {
        arr.push(crlData.charCodeAt(i));
      }
      let stringToUint8Array:Uint8Array = new Uint8Array(arr);

      // 证书吊销列表二进制数据，需业务自行赋值
      let encodingBlob: certFramework.EncodingBlob = {
        data: stringToUint8Array,
        // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
        encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
      };

      certFramework.createX509Crl(encodingBlob).then(x509Crl => {
        console.log('createX509Crl success');

        try {
          // 生成公钥对象
          let keyGenerator = cryptoFramework.createAsyKeyGenerator('RSA1024|PRIMES_3');
          console.log('createAsyKeyGenerator success');
          let priEncodingBlob: cryptoFramework.DataBlob = {
            data: priKeyData,
          };
          let pubEncodingBlob: cryptoFramework.DataBlob = {
            data: pubKeyData,
          };
          keyGenerator.convertKey(pubEncodingBlob, priEncodingBlob).then((keyPair) => {
            console.log('convert key success');
            x509Crl.verify(keyPair.pubKey).then(result => {
              console.log('verify success');
            }).catch((error: BusinessError) => {
              console.error('verify failed, errCode: ' + error.code + ', errMsg: ' + error.message);
            });
          }).catch((error: BusinessError) => {
            console.error('convert key failed, message: ' + error.message + 'code: ' + error.code);
          });
        } catch (error) {
          let e: BusinessError = error as BusinessError;
          console.error('get pubKey failed, errCode: ' + e.code + ', errMsg: ' + e.message);
        }
      }).catch((error: BusinessError) => {
        console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
      });

    })

    /**
     *@tc.number    : testGetVersion001
     *@tc.name      : testGetVersion001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetVersion001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          let version = x509Crl.getVersion();
        }
      });

    })

    /**
     *@tc.number    : testGetIssuerName001
     *@tc.name      : testGetIssuerName001
     *@tc.desc      : After the installation, user_grant permission is not granted by default(Promise).
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetIssuerName001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            let issuerName = x509Crl.getIssuerName();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getIssuerName failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetLastUpdate001
     *@tc.name      : testGetLastUpdate001
     *@tc.desc      : 表示获取X509证书吊销列表最后一次更新日期。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetLastUpdate001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlob, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            let lastUpdate = x509Crl.getLastUpdate();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getLastUpdate failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetNextUpdate001
     *@tc.name      : testGetNextUpdate001
     *@tc.desc      : 表示获取证书吊销列表下一次更新的日期。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetNextUpdate001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlob, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            let nextUpdate = x509Crl.getNextUpdate();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getNextUpdate failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetRevokedCert001
     *@tc.name      : testGetRevokedCert001
     *@tc.desc      : 表示通过指定证书序列号获取被吊销X509证书对象。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetRevokedCert001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlob, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          let serialNumber = 1000;
          try {
            let entry = x509Crl.getRevokedCert(serialNumber);
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('getRevokedCert failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetRevokedCertWithCert001
     *@tc.name      : testGetRevokedCertWithCert001
     *@tc.desc      : 表示获取被吊销X509证书列表，使用Callback回调异步返回结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetRevokedCertWithCert001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          // 创建X509证书对象.
          certFramework.createX509Cert(certEncodingBlob).then((x509Cert) => {
            try {
              let entry = x509Crl.getRevokedCertWithCert(x509Cert);
            } catch (error) {
              let e: BusinessError = error as BusinessError;
              console.error('getRevokedCertWithCert failed, errCode: ' + e.code + ', errMsg: ' + e.message);
            }
          }).catch((error: BusinessError) => {
            console.error('createX509Cert failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          })
        }
      });

    })

    /**
     *@tc.number    : testGetRevokedCerts001
     *@tc.name      : testGetRevokedCerts001
     *@tc.desc      : 表示通过指定证书序列号获取被吊销X509证书对象。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetRevokedCerts001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          x509Crl.getRevokedCerts((error, array) => {
            if (error != null) {
              console.error('getRevokedCerts failed, errCode: ' + error.code + ', errMsg: ' + error.message);
            } else {
              console.log('getRevokedCerts success');
            }
          });
        }
      });

    })

    /**
     *@tc.number    : testGetRevokedCerts002
     *@tc.name      : testGetRevokedCerts002
     *@tc.desc      : 表示获取被吊销X509证书列表，使用Promise方式异步返回结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetRevokedCerts002', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl).then(x509Crl => {
        console.log('createX509Crl success');
        x509Crl.getRevokedCerts().then(array => {
          console.log('getRevokedCerts success');
        }).catch((error: BusinessError) => {
          console.error('getRevokedCerts failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        });
      }).catch((error: BusinessError) => {
        console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
      });

    })

    /**
     *@tc.number    : testGetTbsInfo001
     *@tc.name      : testGetTbsInfo001
     *@tc.desc      : 表示获取证书吊销列表的tbsCertList信息。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetTbsInfo001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            let tbsInfo = x509Crl.getTbsInfo();
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('getTbsInfo failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetSignature001
     *@tc.name      : testGetSignature001
     *@tc.desc      : 表示获取X509证书吊销列表的签名数据。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetSignature001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            let signature = x509Crl.getSignature();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSignature failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetSignatureAlgName001
     *@tc.name      : testGetSignatureAlgName001
     *@tc.desc      : 表示获取X509证书吊销列表签名的算法名称。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetSignatureAlgName001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            let sigAlgName = x509Crl.getSignatureAlgName();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSignatureAlgName failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetSignatureAlgOid001
     *@tc.name      : testGetSignatureAlgOid001
     *@tc.desc      : 表示获取X509证书吊销列表签名算法的对象标志符OID(Object Identifier)。OID是由国际标准组织(ISO)的名称注册机构分配。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetSignatureAlgOid001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            let sigAlgOid = x509Crl.getSignatureAlgOid();
          } catch (err) {
            let e: BusinessError = err as BusinessError;
            console.error('getSignatureAlgOid failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testGetSignatureAlgParams001
     *@tc.name      : testGetSignatureAlgParams001
     *@tc.desc      : 表示获取X509证书吊销列表签名算法的对象标志符OID(Object Identifier)。OID是由国际标准组织(ISO)的名称注册机构分配。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetSignatureAlgParams001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (error, x509Crl) => {
        if (error != null) {
          console.error('createX509Crl failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        } else {
          console.log('createX509Crl success');
          try {
            let sigAlgParams = x509Crl.getSignatureAlgParams();
          } catch (err) {
            let e: BusinessError = error as BusinessError;
            console.error('getSignatureAlgParams failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      });

    })

    /**
     *@tc.number    : testCreateCertChainValidator001
     *@tc.name      : testCreateCertChainValidator001
     *@tc.desc      : 表示创建证书链校验器对象。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCreateCertChainValidator001', 0, async (done:Function) => {

      try {
        let validator = certFramework.createCertChainValidator('PKIX');
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error('createCertChainValidator failed, errCode: ' + e.code + ', errMsg: ' + e.message);
      }

    })

    /**
     *@tc.number    : testCertChainValidator001
     *@tc.name      : testCertChainValidator001
     *@tc.desc      : 表示校验X509证书链，使用Callback回调异步返回结果。 由于端侧系统时间不可信，证书链校验不包含对证书有效时间的校验。如果需要检查证书的时间有效性，可使用X509证书的checkValidityWithDate方法进行检查。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCertChainValidator001', 0, async (done:Function) => {

      // 证书链二进制数据，需业务自行赋值
      let certChainBuff = new Uint8Array([0x30, 0x82, 0x44]);

      let certChainData: certFramework.CertChainData = {
        data: certChainBuff,
        // 证书链包含的证书个数，需业务自行赋值
        count: 2,
        // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
        encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
      };

      try {
        let validator = certFramework.createCertChainValidator('PKIX');
        validator.validate(certChainData, (error, data) => {
          if (error != null) {
            console.error('validate failed, errCode: ' + error.code + ', errMsg: ' + error.message);
          } else {
            console.log('validate success');
          }
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error('getNotBeforeTime failed, errCode: ' + e.code + ', errMsg: ' + e.message);
      }

    })

    /**
     *@tc.number    : testCertChainValidator002
     *@tc.name      : testCertChainValidator002
     *@tc.desc      : 表示校验X509证书链，使用Promise方式异步返回结果。 由于端侧系统时间不可信，证书链校验不包含对证书有效时间的校验。如果需要检查证书的时间有效性，可使用X509证书的checkValidityWithDate方法进行检查。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCertChainValidator002', 0, async (done:Function) => {

      // 证书链二进制数据，需业务自行赋值
      let certChainBuff = new Uint8Array([0x30, 0x82, 0x44]);

      let certChainData: certFramework.CertChainData = {
        data: certChainBuff,
        // 证书链包含的证书个数，需业务自行赋值
        count: 2,
        // 根据encodingData的格式进行赋值，支持FORMAT_PEM和FORMAT_DER
        encodingFormat: certFramework.EncodingFormat.FORMAT_PEM
      };

      try {
        let validator = certFramework.createCertChainValidator('PKIX');
        validator.validate(certChainData).then(result => {
          console.log('validate success');
        }).catch((error: BusinessError) => {
          console.error('validate failed, errCode: ' + error.code + ', errMsg: ' + error.message);
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error('getNotBeforeTime failed, errCode: ' + e.code + ', errMsg: ' + e.message);
      }

    })

    /**
     *@tc.number    : testCertChainValidatorAlgorithm001
     *@tc.name      : testCertChainValidatorAlgorithm001
     *@tc.desc      : 表示X509证书链校验器算法名称。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testCertChainValidatorAlgorithm001', 0, async (done:Function) => {

      try {
        let validator = certFramework.createCertChainValidator('PKIX');
        let algorithm = validator.algorithm;
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error('createCertChainValidator failed, errCode: ' + e.code + ', errMsg: ' + e.message);
      }

    })

    /**
     *@tc.number    : testX509CrlEntryGetEncoded001
     *@tc.name      : testX509CrlEntryGetEncoded001
     *@tc.desc      : 表示获取被吊销证书的序列化数据，使用Callback回调异步返回结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CrlEntryGetEncoded001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (err, x509Crl) => {
        if (err != null) {
          console.error('createX509Crl failed, errCode: ' + err.code + ', errMsg: ' + err.message);
        } else {
          console.log('create x509 crl success');

          try {
            let serialNumber = 1000;
            let crlEntry = x509Crl.getRevokedCert(serialNumber);
            crlEntry.getEncoded((error, data) => {
              if (error != null) {
                console.error('getEncoded failed, errCode: ' + error.code + ', errMsg: ' + error.message);
              } else {
                console.log('getEncoded success');
              }
            });
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('getRevokedCert failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      })

    })

    /**
     *@tc.number    : testX509CrlEntryGetEncoded002
     *@tc.name      : testX509CrlEntryGetEncoded002
     *@tc.desc      : 表示获取被吊销证书的序列化数据，使用Promise方式异步返回结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testX509CrlEntryGetEncoded002', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlob, (err, x509Crl) => {
        if (err != null) {
          console.error('createX509Crl failed, errCode: ' + err.code + ', errMsg: ' + err.message);
        } else {
          console.log('create x509 crl success');

          try {
            let serialNumber = 1000;
            let crlEntry = x509Crl.getRevokedCert(serialNumber);
            crlEntry.getEncoded().then(result => {
              console.log('getEncoded success');
            }).catch((error: BusinessError) => {
              console.error('getEncoded failed, errCode: ' + error.code + ', errMsg: ' + error.message);
            });
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('getRevokedCert failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      })

    })

    /**
     *@tc.number    : testGetSerialNumber001
     *@tc.name      : testGetSerialNumber001
     *@tc.desc      : 表示获取被吊销证书的序列号。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetSerialNumber001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (err, x509Crl) => {
        if (err != null) {
          console.error('createX509Crl failed, errCode: ' + err.code + ', errMsg: ' + err.message);
        } else {
          console.log('create x509 crl success');

          try {
            let serialNumber = 1000;
            let crlEntry = x509Crl.getRevokedCert(serialNumber);
            serialNumber = crlEntry.getSerialNumber();
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('getRevokedCert or getSerialNumber failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      })

    })

    /**
     *@tc.number    : testGetCertIssuer001
     *@tc.name      : testGetCertIssuer001
     *@tc.desc      : 表示获取被吊销证书的颁发者信息。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetCertIssuer001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (err, x509Crl) => {
        if (err != null) {
          console.error('createX509Crl failed, errCode: ' + err.code + ', errMsg: ' + err.message);
        } else {
          console.log('create x509 crl success');

          try {
            let serialNumber = 1000;
            let crlEntry = x509Crl.getRevokedCert(serialNumber);
            let issuer = crlEntry.getCertIssuer();
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('getRevokedCert or getCertIssuer failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      })

    })

    /**
     *@tc.number    : testGetRevocationDate001
     *@tc.name      : testGetRevocationDate001
     *@tc.desc      : 表示获取证书被吊销的日期。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     */
    it('testGetRevocationDate001', 0, async (done:Function) => {

      certFramework.createX509Crl(encodingBlobCrl, (err, x509Crl) => {
        if (err != null) {
          console.error('createX509Crl failed, errCode: ' + err.code + ', errMsg: ' + err.message);
        } else {
          console.log('create x509 crl success');

          try {
            let serialNumber = 1000;
            let crlEntry = x509Crl.getRevokedCert(serialNumber);
            let date = crlEntry.getRevocationDate();
          } catch (error) {
            let e: BusinessError = error as BusinessError;
            console.error('getRevokedCert or getRevocationDate failed, errCode: ' + e.code + ', errMsg: ' + e.message);
          }
        }
      })

    })



  })
}