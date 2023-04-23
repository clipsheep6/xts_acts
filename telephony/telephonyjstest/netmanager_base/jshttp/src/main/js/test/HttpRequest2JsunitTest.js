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

import { describe, expect, it } from '@ohos/hypium';
import http from '@ohos.net.http';


let httpRequestOptions = {
    method: http.RequestMethod.GET,
    extraData: null,
    header: "content-type': 'application/json",
    readTimeout: 60000,
    connectTimeout: 60000
};

let delayTime = 4000;
let dataReceive_status;
let dataProgress_status;
let dataEnd_status;
let Address_Baidu = "https://www.baidu.com/";

function dataReceive_on_callback(data) {
    console.log("dataReceive_on_callback receive len:" + JSON.stringify(data.byteLength));
    dataReceive_status = true;
}

function dataEnd_on_callback() {
    console.log("dataEnd_on_callback callback function");
    dataEnd_status = true;
}

function dataProgress_on_callback(data) {
    console.log("dataProgress_on_callback receive datProgress:" + JSON.stringify(data));
    dataProgress_status = true;
}

export default function HttpRequest2JsunitTest() {
    describe("HttpRequest2JsunitTest", function () {
        /**
         * @tc.number Telephony_http_HttpRequest_request2_0100
         * @tc.name httprequest2::request2
         * @tc.desc Test request2(url: string, callback: AsyncCallback<void>): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_Async_0100", 0, async function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_Async_0100";
            let Address_Img = "https://img1.baidu.com/it/u=3010094603,1247181326&fm=253&fmt=auto&app=138&f=JPEG?w=800&h=500";
            let httpRequest = http.createHttp();
            try {
                httpRequest.on("dataReceive", dataReceive_on_callback);
                httpRequest.on("dataProgress", dataProgress_on_callback);
                httpRequest.on("dataEnd", dataEnd_on_callback);
                httpRequest.request2(Address_Img, httpRequestOptions, (err,data) => {
                    console.info(CaseName + " responseCode data : " + data);
                    console.log(CaseName + "NETSTACK request2 OK!");
                    httpRequest.off("dataReceive");
                    console.log("NETSTACK off dataReceive success!");
                    httpRequest.off("dataProgress");
                    console.log("NETSTACK off dataProgress success!");
                    httpRequest.off("dataEnd");
                    console.log("NETSTACK off dataEnd success!");
                    httpRequest.destroy();
                    done();
                })
            } catch (error) {
                console.log("NETSTACK request2 catch : error = " + JSON.stringify(error));
                expect(error).assertFalse();
                done();
            }
        });


        /**
         * @tc.number Telephony_http_HttpRequest_request2_0200
         * @tc.name httprequest2::request2
         * @tc.desc Test request2(url: string, options: HttpRequestOptions, callback: AsyncCallback<void>): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_Async_0200", 0, async function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_Async_0200"
            var httpRequest = http.createHttp();
            httpRequest.request2(Address_Baidu, (err,data) => {
                if (err) {
                    console.log(CaseName + " request2 ERROR" + JSON.stringify(err));
                    expect().assertFail();
                    done();
                }
                httpRequest.destroy();
                console.log(CaseName + " request2 Finish responseCode " + data);
                done();
            });
        });

        /**
         * @tc.number Telephony_http_HttpRequest_request2_0100
         * @tc.name httprequest2::request2
         * @tc.desc Test request2(url: string, options: HttpRequestOptions): Promise<void>.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_Promise_0100", 0, async function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_Promise_0100";
            var httpRequest = http.createHttp();
            httpRequest.request2(Address_Baidu, httpRequestOptions).then(function (data) {
                console.log(CaseName + " request2 Finish responseCode " + data);
                httpRequest.destroy();
                done();
            }).catch(function (err) {
                console.log(CaseName + " error = " + JSON.stringify(err));
                expect().assertFail();
                done();
            });
        });

        /**
         * @tc.number Telephony_http_HttpRequest_request2_0100
         * @tc.name httprequest2::request2
         * @tc.desc Test request2(url: string): Promise<void>.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_Promise_0200", 0, async function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_Promise_0200";
            var httpRequest = http.createHttp();
            httpRequest.request2(Address_Baidu).then(function (data) {
                console.log(CaseName + " request2 Finish responseCode " + data);
                httpRequest.destroy();
                done();
            }).catch(function (err) {
                console.log(CaseName + " : error = " + JSON.stringify(err));
                expect().assertFail();
                done();
            });
        });


        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_on_dataReceive_0100
         * @tc.name httprequest2::on_dataReceive
         * @tc.desc Test on(type: "dataReceive", callback: Callback<ArrayBuffer>): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_on_dataReceive_0100", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_on_dataReceive_0100";
            try {
                var httpRequest = http.createHttp();
                httpRequest.on("dataReceive", dataReceive_on_callback);
                httpRequest.request2(Address_Baidu).then(function () {
                    setTimeout(() => {
                        expect(dataReceive_status).assertEqual(true);
                        console.log(CaseName + " on dataReceive Finish ");
                        httpRequest.destroy();
                        done();
                    }, delayTime);
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });


        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_off_dataReceive_0100
         * @tc.name httprequest2::off_dataReceive
         * @tc.desc Test off(type: "dataReceive", callback: Callback<ArrayBuffer>): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_off_dataReceive_0100", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_off_dataReceive_0100";
            try {
                var httpRequest = http.createHttp();
                httpRequest.request2(Address_Baidu).then(function () {
                    httpRequest.off("dataReceive", dataReceive_on_callback);
                    dataEnd_status = false;
                    setTimeout(() => {
                        expect(dataReceive_status).assertEqual(false);
                    }, delayTime);
                    console.log(CaseName + " off dataReceive Finish ");
                    httpRequest.destroy();
                    done();
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });


        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_off_dataReceive_0200
         * @tc.name httprequest2::off_dataReceive
         * @tc.desc Test off(type: "dataReceive"): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_off_dataReceive_0200", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_off_dataReceive_0200";
            try {
                var httpRequest = http.createHttp();
                httpRequest.on("dataReceive", dataReceive_on_callback);
                httpRequest.request2(Address_Baidu).then(function () {
                    setTimeout(() => {
                        httpRequest.off("dataReceive");
                    }, delayTime);
                    console.log(CaseName + " off dataReceive Finish ");
                    httpRequest.destroy();
                    done();
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_on_dataProgress_0100
         * @tc.name httprequest2::on_dataProgress
         * @tc.desc Test on(type: "dataProgress", callback: Callback<{ receiveSize: number, totalSize: number }>): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_on_dataProgress_0100", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_on_dataProgress_0100";
            try {
                var httpRequest = http.createHttp();
                httpRequest.on("dataProgress", dataProgress_on_callback);
                httpRequest.request2(Address_Baidu).then(function () {
                    setTimeout(() => {
                        expect(dataProgress_status).assertEqual(true);
                    }, delayTime);
                    console.log(CaseName + " on dataProgress Finish ");
                    httpRequest.destroy();
                    done();
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });

        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_off_dataProgress_0100
         * @tc.name httprequest2::off_dataProgress
         * @tc.desc Test off(type: "dataProgress", callback: Callback<{ receiveSize: number, totalSize: number }>): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_off_dataProgress_0100", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_off_dataProgress_0100";
            try {
                var httpRequest = http.createHttp();
                httpRequest.request2(Address_Baidu).then(function () {
                    httpRequest.off("dataProgress", dataProgress_on_callback);
                    dataEnd_status = false;
                    setTimeout(() => {
                        expect(dataProgress_status).assertEqual(false);
                    }, delayTime);
                    console.log(CaseName + " off dataProgress Finish ");
                    httpRequest.destroy();
                    done();
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });


        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_off_dataProgress_0200
         * @tc.name httprequest2::off_dataProgress
         * @tc.desc Test off(type: "dataProgress"): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_off_dataProgress_0200", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_off_dataProgress_0200";
            try {
                var httpRequest = http.createHttp();
                httpRequest.on("dataProgress", dataProgress_on_callback);
                httpRequest.request2(Address_Baidu).then(function () {
                    setTimeout(() => {
                        httpRequest.off("dataProgress");
                    }, delayTime);
                    console.log(CaseName + " off dataProgress Finish ");
                    httpRequest.destroy();
                    done();
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });


        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_on_dataEnd_0100
         * @tc.name httprequest2::on_dataEnd
         * @tc.desc Test on(type: "dataEnd", callback: Callback<void>): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_on_dataEnd_0100", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_on_dataEnd_0100";
            try {
                var httpRequest = http.createHttp();
                httpRequest.on("dataEnd", dataEnd_on_callback);
                httpRequest.request2(Address_Baidu).then(function () {
                    setTimeout(() => {
                        expect(dataEnd_status).assertEqual(true);
                    }, delayTime);
                    console.log(CaseName + " on dataEnd Finish ");
                    httpRequest.destroy();
                    done();
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });


        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_off_dataEnd_0100
         * @tc.name httprequest2::off_dataEnd
         * @tc.desc Test off(type: "dataEnd", callback?: Callback<void>): void.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_off_dataEnd_0100", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_off_dataEnd_0100";
            try {
                var httpRequest = http.createHttp();
                httpRequest.off("dataEnd", dataEnd_on_callback);
                dataEnd_status = false;
                httpRequest.request2(Address_Baidu).then(function () {
                    setTimeout(() => {
                        expect(dataEnd_status).assertEqual(false);
                    }, delayTime);
                    console.log(CaseName + " off dataEnd Finish ");
                    httpRequest.destroy();
                    done();
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });


        /**
         * @tc.number SUB_Telephony_NetStack_HttpRequest2_off_dataEnd_0200
         * @tc.name httprequest2::off_dataEnd
         * @tc.desc Test off(type: "dataEnd"): void;.
         */
        it("SUB_Telephony_NetStack_HttpRequest2_off_dataEnd_0200", 0, function (done) {
            let CaseName = "SUB_Telephony_NetStack_HttpRequest2_off_dataEnd_0200";
            try {
                var httpRequest = http.createHttp();
                httpRequest.on("dataEnd", dataEnd_on_callback);
                httpRequest.request2(Address_Baidu).then(function () {
                    setTimeout(() => {
                        httpRequest.off("dataEnd");
                    }, delayTime);
                    console.log(CaseName + " off dataEnd Finish ");
                    httpRequest.destroy();
                    done();
                }).catch(function (err) {
                    console.log(CaseName + " : error = " + JSON.stringify(err));
                    expect().assertFail();
                    done();
                });
            } catch (error) {
                console.log(CaseName + " : error = " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        });
    });
}