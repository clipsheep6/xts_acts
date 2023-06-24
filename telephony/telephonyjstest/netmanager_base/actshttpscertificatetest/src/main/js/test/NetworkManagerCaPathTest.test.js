/**
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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
import http from '@ohos.net.http';

export default function NetworkManagerCaPathTest() {
    describe('NetworkManagerCaPathTest', function () {

        let caPath1 = "/etc/ssl/certs/OpenHarmonyCA.pem";
        let caPath2 = "/etc/ssl/test/OpenHarmonyCA.pem";
        let caPath3 = "/data/storage/el2/base/files/OpenHarmonyCA.pem";
        let caPath4 = "/data/storage/el2/base/test/OpenHarmonyCA.pem";
        let URL1 = "https://www.openharmony.cn";
        let URL2 = "http://www.openharmony.cn";
        let URL3 = "https://www.aliyun.com";

        let httpRequestOptions1 = {
            method: http.RequestMethod.GET,
            header: {
                'Content-Type': 'application/json'
            },
            caPath: caPath1
        }
        let httpRequestOptions2 = {
            method: http.RequestMethod.GET,
            header: {
                'Content-Type': 'application/json'
            },
            caPath: ""
        }
        let httpRequestOptions3 = {
            method: http.RequestMethod.GET,
            header: {
                'Content-Type': 'application/json'
            }
        }
        let httpRequestOptions4 = {
            method: http.RequestMethod.GET,
            header: {
                'Content-Type': 'application/json'
            },
            caPath: undefined
        }
        let httpRequestOptions5 = {
            method: http.RequestMethod.GET,
            header: {
                'Content-Type': 'application/json'
            },
            caPath: caPath2
        }
        let httpRequestOptions6 = {
            method: http.RequestMethod.GET,
            header: {
                'Content-Type': 'application/json'
            },
            caPath: caPath3
        }
        let httpRequestOptions7 = {
            method: http.RequestMethod.GET,
            header: {
                'Content-Type': 'application/json'
            },
            caPath: caPath4
        }

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0100
         * @tc.name request: input https://www.openharmony.cn & correct caPath by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0100", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0100';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions1).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                expect(data.result !== "").assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error).assertFail();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0100
         * @tc.name request: input https://www.openharmony.cn & correct caPath by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0100", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0100';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions1, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err).assertFail();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                    expect(data.result !== "").assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0200
         * @tc.name request: input https://www.openharmony.cn & empty of caPath by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0200", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0200';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions2).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                expect(data.result !== "").assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error).assertFail();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0200
         * @tc.name request: input https://www.openharmony.cn & empty of caPath by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0200", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0200';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions2, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err).assertFail();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                    expect(data.result !== "").assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0300
         * @tc.name request: input https://www.openharmony.cn by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0300", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0300';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions3).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                expect(data.result !== "").assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error).assertFail();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0300
         * @tc.name request: input https://www.openharmony.cn by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0300", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0300';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions3, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err).assertFail();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                    expect(data.result !== "").assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0400
         * @tc.name request: input https://www.openharmony.cn & undefined of caPath by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0400", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0400';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions4).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                expect(data.result !== "").assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error).assertFail();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0400
         * @tc.name request: input https://www.openharmony.cn & undefined of caPath by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0400", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0400';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions4, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err).assertFail();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                    expect(data.result !== "").assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0500
         * @tc.name request: input http://www.openharmony.cn by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0500", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0500';
            let httpRequest = http.createHttp();
            httpRequest.request(URL2, httpRequestOptions3).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                expect(data.result !== "").assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error).assertFail();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0500
         * @tc.name request: input http://www.openharmony.cn by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0500", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0500';
            let httpRequest = http.createHttp();
            httpRequest.request(URL2, httpRequestOptions3, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err).assertFail();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                    expect(data.result !== "").assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0600
         * @tc.name request: input http://www.openharmony.cn & correct of caPath by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0600", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0600';
            let httpRequest = http.createHttp();
            httpRequest.request(URL2, httpRequestOptions1).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                expect(data.result !== "").assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error).assertFail();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0600
         * @tc.name request: input http://www.openharmony.cn & correct of caPath by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0600", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0600';
            let httpRequest = http.createHttp();
            httpRequest.request(URL2, httpRequestOptions1, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err).assertFail();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                    expect(data.result !== "").assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0700
         * @tc.name request: input https://www.aliyun.com/ & caPath to openharmony by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0700", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0700';
            let httpRequest = http.createHttp();
            httpRequest.request(URL3, httpRequestOptions1).then((data) => {
                console.info(`${CASE_NAME} httpsRequest fail, data: ${JSON.stringify(data)}`);
                expect(false).assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest success, err: ${JSON.stringify(error)}`);
                expect(error.code == 2300060).assertTrue();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0700
         * @tc.name request: input https://www.aliyun.com/ & caPath to openharmony by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0700", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0700';
            let httpRequest = http.createHttp();
            httpRequest.request(URL3, httpRequestOptions1, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest success, err: ${JSON.stringify(err)}`);
                    expect(err.code == 2300060).assertTrue();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest fail, data: ${JSON.stringify(data)}`);
                    expect(false).assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0800
         * @tc.name request: input https://www.openharmony.cn/ & empty of Path by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0800", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0800';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions5).then((data) => {
                console.info(`${CASE_NAME} httpsRequest fail, data: ${JSON.stringify(data)}`);
                expect(false).assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest success, err: ${JSON.stringify(error)}`);
                expect(error.code == 2300077).assertTrue();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0800
         * @tc.name request: input https://www.openharmony.cn/ & empty of Path by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0800", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0800';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions5, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest success, err: ${JSON.stringify(err)}`);
                    expect(err.code == 2300077).assertTrue();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest fail, data: ${JSON.stringify(data)}`);
                    expect(false).assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_0900
         * @tc.name request: input https://www.openharmony.cn/ & sandbox Path by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_0900", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_0900';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions6).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                expect(data.result !== "").assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error).assertFail();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_0900
         * @tc.name request: input https://www.openharmony.cn/ & sandbox Path by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_0900", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_0900';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions6, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err).assertFail();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                    expect(data.result !== "").assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_1000
         * @tc.name request: input https://www.openharmony.cn/ & empty of caPath by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_1000", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_1000';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions2).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                expect(data.result !== "").assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error).assertFail();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_1000
         * @tc.name request: input https://www.openharmony.cn/ & empty of caPath by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_1000", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_1000';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions2, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err).assertFail();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(data.responseCode === http.ResponseCode.OK).assertTrue();
                    expect(data.result !== "").assertTrue();
                    done();
                }
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Promise_1100
         * @tc.name request: input https://www.openharmony.cn/ & error of caPath by Promise
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Promise_1100", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Promise_1100';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions7).then((data) => {
                console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                expect(false).assertTrue();
                done();
            }).catch((error) => {
                console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(error)}`);
                expect(error.code == 2300077).assertTrue();
                done();
            });
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HTTPSCertificate_Async_1100
         * @tc.name request: input https://www.openharmony.cn/ & error of caPath by Async
         * @tc.desc Function test
         */
        it("SUB_Telephony_NetStack_HTTPSCertificate_Async_1100", 0, function (done) {
            let CASE_NAME = 'SUB_Telephony_NetStack_HTTPSCertificate_Async_1100';
            let httpRequest = http.createHttp();
            httpRequest.request(URL1, httpRequestOptions7, (err, data) => {
                if (err) {
                    console.info(`${CASE_NAME} httpsRequest fail, err: ${JSON.stringify(err)}`);
                    expect(err.code == 2300077).assertTrue();
                    done();
                } else {
                    console.info(`${CASE_NAME} httpsRequest success, data: ${JSON.stringify(data)}`);
                    expect(false).assertTrue();
                    done();
                }
            });
        });     
    });
}