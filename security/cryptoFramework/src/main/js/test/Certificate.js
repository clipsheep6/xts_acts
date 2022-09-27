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

import { describe, beforeAll, afterEach, it, expect } from "@ohos/hypium";
import * as certPromise from "./utils/certificate/publicCertificatePromise";
import * as certCallback from "./utils/certificate/publicCertificateCallback";

const TIMEOUT = 500;


export default function CertificateJsunit() {
    describe("CertificateJsunit", function () {
        console.info("##########start CertificateJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        function sleep(delay) {
            var start = new Date().getTime();
            var next = new Date().getTime();
            while (next - start < delay) {
                next = new Date().getTime();
            }
        }

        /**
         * @tc.number Security_crypto_framework_X509Cert_0100
         * @tc.name The X509 certificate list can be created for encryption and decryption.
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         */
        it(
            "Security_crypto_framework_X509Cert_0100",
            0,
            async function (done) {
                await certPromise.createX509CertInstancePromise("der").then(data => {
                    expect(data != null).assertTrue();
                }).catch(err => {
                    expect(null).assertFail();
                });

                await certCallback.createX509CertInstanceCallback("der").then(data => {
                    expect(data != null).assertTrue();
                }).catch(err => {
                    expect(null).assertFail();
                });
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_0200
         * @tc.name The X509 certificate list can be created for encryption and decryption.
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509Cert_0200",
            0,
            async function (done) {
                await certPromise.createX509CertInstancePromise("pem").then(data => {
                    expect(data != null).assertTrue();
                }).catch(err => {
                    expect(null).assertFail();
                });

                await certCallback.createX509CertInstanceCallback("pem").then(data => {
                    expect(data != null).assertTrue();
                }).catch(err => {
                    expect(null).assertFail();
                });
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_0300
         * @tc.name verify RSA algorithm for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509Cert_0300",
            0,
            async function (done) {
                await certPromise.verifyX509CertPromise("pem");
                await certCallback.verifyX509CertCallback("pem");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_0700
         * @tc.name check getEncoded interface
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         */
        it(
            "Security_crypto_framework_X509Cert_0700",
            0,
            async function (done) {
                await certPromise.checkGetEncodedX509CertPromise("der");
                await certCallback.checkGetEncodedX509CertCallback("der");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_0800
         * @tc.name check getPublicKey interface
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         */
        it(
            "Security_crypto_framework_X509Cert_0800",
            0,
            async function (done) {
                await certPromise.checkGetPublicKeyX509CertPromise("der");
                await certCallback.checkGetPublicKeyX509CertCallback("der");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_0900
         * @tc.name check validity of the date for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER,date format:20220922145628+0800(YmdHMSz);
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_0900",
            0,
            async function (done) {
                await certPromise.checkValidityX509CertPromise("der", "20220830000000+0800");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_1200
         * @tc.name getVersion for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Callback Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_1200",
            0,
            async function (done) {
                await certCallback.getX509CertInfoCallback("der", "getVersion");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_1300
         * @tc.name getSerialNumber for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Callback Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_1300",
            0,
            async function (done) {
                await certCallback.getX509CertInfoCallback("der", "getSerialNumber");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_1400
         * @tc.name getIssuerName for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Callback Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_1400",
            0,
            async function (done) {
                await certCallback.getX509CertInfoCallback("der", "getIssuerName");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_1500
         * @tc.name getSubjectName for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_1500",
            0,
            async function (done) {
                await certPromise.getX509CertInfoPromise("der", "getSubjectName");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_1600
         * @tc.name getNotBeforeTime for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_1600",
            0,
            async function (done) {
                await certPromise.getX509CertInfoPromise("der", "getNotBeforeTime");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_1700
         * @tc.name getNotAfterTime for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_1700",
            0,
            async function (done) {
                await certPromise.getX509CertInfoPromise("der", "getNotAfterTime");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_1800
         * @tc.name getSignature for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_1800",
            0,
            async function (done) {
                await certPromise.getX509CertInfoPromise("der", "getSignature");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_1900
         * @tc.name getSignatureAlgName for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_1900",
            0,
            async function (done) {
                await certPromise.getX509CertInfoPromise("der", "getSignatureAlgName");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_2000
         * @tc.name getSignatureAlgOid for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Callback Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_2000",
            0,
            async function (done) {
                await certCallback.getX509CertInfoCallback("der", "getSignatureAlgOid");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_2100
         * @tc.name getSignatureAlgParams for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Callback Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_2100",
            0,
            async function (done) {
                await certCallback.getX509CertInfoCallback("der", "getSignatureAlgParams");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_2200
         * @tc.name getIssuerUid for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc getIssuerUid not exist, this case will be cancelled
         */

        /**
         * @tc.number Security_crypto_framework_X509Cert_2300
         * @tc.name getSubjectUid for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc getSubjectUid not exist, this case will be cancelled
         */


        /**
         * @tc.number Security_crypto_framework_X509Cert_2400
         * @tc.name getKeyUsage for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Callback Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_2400",
            0,
            async function (done) {
                await certCallback.getX509CertInfoCallback("der", "getKeyUsage");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_2500
         * @tc.name getExtKeyUsage for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Callback Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_2500",
            0,
            async function (done) {
                await certCallback.getX509CertInfoCallback("der", "getExtKeyUsage");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_2600
         * @tc.name getBasicConstraints for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Callback Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_2600",
            0,
            async function (done) {
                await certCallback.getX509CertInfoCallback("der", "getBasicConstraints");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_2700
         * @tc.name getSubjectAltNames for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_2700",
            0,
            async function (done) {
                await certPromise.getX509CertInfoPromise("der", "getSubjectAltNames");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509Cert_2800
         * @tc.name getIssuerAltNames for X509 certificate
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509Cert_2800",
            0,
            async function (done) {
                await certPromise.getX509CertInfoPromise("der", "getIssuerAltNames");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_0100
         * @tc.name The X509 certificate list can be revoked for encryption and decryption.
         * @tc.desc The X509 certificate FORMAT is FORMAT_DER
         */
        it(
            "Security_crypto_framework_X509CRL_0100",
            0,
            async function (done) {
                await certPromise.createX509CrlInstancePromise("der").then(data => {
                    expect(data != null).assertTrue();
                }).catch(err => {
                    expect(null).assertFail();
                });

                await certCallback.createX509CrlInstanceCallback("der").then(data => {
                    expect(data != null).assertTrue();
                }).catch(err => {
                    expect(null).assertFail();
                });
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_0200
         * @tc.name The X509 certificate list can be revoked for encryption and decryption.
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_0200",
            0,
            async function (done) {
                await certPromise.createX509CrlInstancePromise("pem").then(data => {
                    expect(data != null).assertTrue();
                }).catch(err => {
                    expect(null).assertFail();
                });

                await certCallback.createX509CrlInstanceCallback("pem").then(data => {
                    expect(data != null).assertTrue();
                }).catch(err => {
                    expect(null).assertFail();
                });
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_0300
         * @tc.name Check isRevoked for X509 Crl
         * @tc.desc The X509 Crl FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_0300",
            0,
            async function (done) {
                await  certPromise.createX509CrlInstancePromise("pem")
                    .then(crlInstance => {
                        let result = certPromise.checkIsRevokedX509CrlPromise(crlInstance, "normal");
                        return result;
                    }).then(result => {
                        expect(result == true).assertTrue();
                    }).catch(err => {
                        console.error("[promise] isRevoked failed! error is: " + err);
                        expect(null).assertFail();
                    });
                await  certPromise.createX509CrlInstancePromise("pem")
                    .then(crlInstance => {
                        let result = certCallback.checkIsRevokedX509CrlCallback(crlInstance, "normal");
                        return result;
                    }).then(result => {
                        expect(result == true).assertTrue();
                    }).catch(err => {
                        console.error("[promise] isRevoked failed! error is: " + err);
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_0600
         * @tc.name Check getEncoded for X509 Crl
         * @tc.desc The X509 Crl FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_0600",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getType");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_0700
         * @tc.name Check getEncoded for X509 Crl
         * @tc.desc The X509 Crl FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_0700",
            0,
            async function (done) {
                await certPromise.checkGetEncodedX509CrlPromise("pem");
                await certCallback.checkGetEncodedX509CrlCallback("pem");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_0800
         * @tc.name Check verify for X509 Crl
         * @tc.desc The X509 Crl FORMAT is FORMAT_PEM
         */
//        it(
//            "Security_crypto_framework_X509CRL_0800",
//            0,
//            async function (done) {
//                await certPromise.verifyX509CrlPromise("pem");
//                await certCallback.verifyX509CrlCallback("pem");
//                done();
//            }
//        );


        /**
         * @tc.number Security_crypto_framework_X509CRL_1200
         * @tc.name check getVersion for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509CRL_1200",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getVersion");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_1300
         * @tc.name check getIssuerName for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509CRL_1300",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getIssuerName");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_1400
         * @tc.name check getLastUpdate for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509CRL_1400",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getLastUpdate");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_1500
         * @tc.name check getNextUpdate for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509CRL_1500",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getNextUpdate");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_1600
         * @tc.name check getRevokedCert for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_1600",
            0,
            async function (done) {
                await certCallback.checkGetRevokedCertX509CrlCallback("pem");
                await certPromise.checkGetRevokedCertX509CrlPromise("pem");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_1700
         * @tc.name check getRevokedCert for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_X509CRL_1700",
            0,
            async function (done) {
                await  certPromise.createX509CrlInstancePromise("pem")
                    .then(crlInstance => {
                        let result = certPromise.checkGetRevokedCertWithCertX509CrlPromise(crlInstance, "normal");
                        return result;
                    }).then(result => {
                        expect(result != null).assertTrue();
                    }).catch(err => {
                        console.error("[promise] checkgetRevokedCertWithCertX509CrlPromis failed! error is: " + err);
                        expect(null).assertFail();
                    });
                await  certPromise.createX509CrlInstancePromise("pem")
                    .then(crlInstance => {
                        let result = certCallback.checkGetRevokedCertWithCertX509CrlCallback(crlInstance, "normal");
                        return result;
                    }).then(result => {
                        expect(result != null).assertTrue();
                    }).catch(err => {
                        console.error("[callback] checkgetRevokedCertWithCertX509CrlCallback failed! error is: " + err);
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_1800
         * @tc.name check getRevokedCerts for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_1800",
            0,
            async function (done) {
                await certCallback.checkGetRevokedCertsX509CrlCallback("pem");
                await certPromise.checkGetRevokedCertsX509CrlPromise("pem");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_1900
         * @tc.name check getTbsInfo for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_1900",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getTbsInfo");
                await certCallback.getX509CrlInfoCallback("pem", "getTbsInfo");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_2000
         * @tc.name check getSignature for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_2000",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getSignature");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_2100
         * @tc.name check getSignatureAlgName for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_2100",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getSignatureAlgName");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_2200
         * @tc.name check getSignatureAlgOid for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_2200",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getSignatureAlgOid");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_2300
         * @tc.name check getSignatureAlgOid for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_2300",
            0,
            async function (done) {
                await certPromise.getX509CrlInfoPromise("pem", "getSignatureAlgParams");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_2400
         * @tc.name check getRevokedCerts for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_2400",
            0,
            async function (done) {
                await certCallback.checkGetRevokedCertX509CrlCallback("pem");
                await certPromise.checkGetRevokedCertX509CrlPromise("pem");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_2500
         * @tc.name check getRevokedCerts for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_2500",
            0,
            async function (done) {
                await certCallback.checkGetRevokedCertX509CrlCallback("pem");
                await certPromise.checkGetRevokedCertX509CrlPromise("pem");
                done();
            }
        );


        /**
         * @tc.number Security_crypto_framework_X509CRL_2600
         * @tc.name check getRevokedCerts for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_2600",
            0,
            async function (done) {
                await certCallback.checkGetRevokedCertX509CrlCallback("pem");
                await certPromise.checkGetRevokedCertX509CrlPromise("pem");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_X509CRL_2700
         * @tc.name check getRevokedCerts for X509 Crl
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_X509CRL_2700",
            0,
            async function (done) {
                await certCallback.checkGetRevokedCertX509CrlCallback("pem");
                await certPromise.checkGetRevokedCertX509CrlPromise("pem");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_CertChainValidator_0100
         * @tc.name check validate interface for CertChainValidator
         * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
         */
        it(
            "Security_crypto_framework_CertChainValidator_0100",
            0,
            async function (done) {
                await certPromise.checkValidateOfCertChainValidatorPromise("PKIX");
                await certCallback.checkValidateOfCertChainValidatorCallback("PKIX");
                done();
            }
        );
    });
}
