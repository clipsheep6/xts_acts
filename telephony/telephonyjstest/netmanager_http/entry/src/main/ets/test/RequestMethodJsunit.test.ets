/*
 * Copyright (C) 2021-2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http:www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import {describe, it, expect} from '@ohos/hypium';
import http from '@ohos.net.http';
import { BusinessError } from '@ohos.base';

export default function requestMethodJsunit() {
  describe("requestMethodJsunit", () => {

    /**
     * @tc.number Telephony_http_HttpRequestMethod_options_0100
     * @tc.name HttpRequestMethod::options
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_options_0100", 0, async (done: Function) => {
      let caseName: string = 'Telephony_http_HttpRequestMethod_options_0100';
      console.log("-----------------------HttpRequestMethod_options Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.OPTIONS,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions, (err: BusinessError, data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_options Test end-----------------------");
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_Http_HttpRequestMethod_options_0100 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });



    /**
     * @tc.number Telephony_http_HttpRequestMethod_options_0200
     * @tc.name HttpRequestMethod::options
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_options_0200", 0, async (done: Function) => {
      let caseName: string = 'Telephony_http_HttpRequestMethod_options_0200';
      console.log("-----------------------HttpRequestMethod_options_01 Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.OPTIONS,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions).then((data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_options_01 Test end-----------------------");
          done();
        }).catch((error: BusinessError) => {
          console.info(caseName+"errocode" + JSON.stringify(error));
          expect(false).assertTrue();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_options_0200 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });



    /**
     * @tc.number Telephony_http_HttpRequestMethod_GET_0100
     * @tc.name HttpRequestMethod::GET
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_GET_0100", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_GET_0100";
      console.log("-----------------------HttpRequestMethod_GET Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.GET,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions, (err: BusinessError, data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_GET Test end-----------------------");
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_Http_HttpRequestMethod_GET_0100 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });



    /**
     * @tc.number Telephony_http_HttpRequestMethod_GET_0200
     * @tc.name HttpRequestMethod::GET
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_GET_0200", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_GET_0200";
      console.log("-----------------------HttpRequestMethod_GET_01 Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.GET,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions).then((data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_GET_01 Test end-----------------------");
          done();
        }).catch((error: BusinessError) => {
          console.info(caseName+"errocode" + JSON.stringify(error));
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_GET_0200 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_http_HttpRequestMethod_POST_0100
     * @tc.name HttpRequestMethod::POST
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_POST_0100", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_0300";
      console.log("-----------------------HttpRequestMethod_POST Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.POST,
          extraData: {
            //tn=albumsdetail&word=渐变风格插画&fr=albumslist&album_tab=设计素材&album_id=409&rn=30
            tn: "albumsdetail",
            work: "渐变风格插画",
            fr: "albumslist",
            album_tab: "设计素材",
            album_id: "409",
            rn: "30"
          },
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://image.baidu.com/search/albumsdetail/", httpRequestOptions, (err: BusinessError, data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_POST Test end-----------------------");
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_Http_HttpRequestMethod_POST_0100 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });



    /**
     * @tc.number Telephony_http_HttpRequestMethod_POST_0200
     * @tc.name HttpRequestMethod::POST
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_POST_0200", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_POST_0200";
      console.log("-----------------------HttpRequestMethod_POST_01 Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.POST,
          extraData: {
            //tn=albumsdetail&word=渐变风格插画&fr=albumslist&album_tab=设计素材&album_id=409&rn=30
            tn: "albumsdetail",
            work: "渐变风格插画",
            fr: "albumslist",
            album_tab: "设计素材",
            album_id: "409",
            rn: "30"
          },
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://image.baidu.com/search/albumsdetail/", httpRequestOptions).then((data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_POST_01 Test end-----------------------");
          done();
        }).catch((error: BusinessError) => {
          console.info(caseName+"errocode" + JSON.stringify(error));
          expect(false).assertTrue();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_POST_0200 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });



    /**
     * @tc.number Telephony_http_HttpRequestMethod_TRACE_0100
     * @tc.name HttpRequestMethod::TRACE
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_TRACE_0100", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_TRACE_0100";
      console.log("-----------------------HttpRequestMethod_TRACE Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.TRACE,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions, (err: BusinessError, data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_TRACE Test end-----------------------");
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_Http_HttpRequestMethod_TRACE_0100 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });


    /**
     * @tc.number Telephony_http_HttpRequestMethod_TRACE_0200
     * @tc.name HttpRequestMethod::TRACE
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_TRACE_0200", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_TRACE_0200";
      console.log("-----------------------HttpRequestMethod_TRACE_01 Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.TRACE,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions).then((data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_TRACE_01 Test end-----------------------");
          done();
        }).catch((error: BusinessError) => {
          console.info(caseName+"errocode" + JSON.stringify(error));
          expect(false).assertTrue();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_TRACE_0200 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });





    /**
     * @tc.number Telephony_http_HttpRequestMethod_PUT_0100
     * @tc.name HttpRequestMethod::PUT
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_PUT_0100", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_PUT_0100";
      console.log("-----------------------HttpRequestMethod_PUT Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.PUT,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        if (httpRequestOptions.method == http.RequestMethod.PUT) {
          done();
          return;
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions, (err: BusinessError, data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_PUT Test end-----------------------");
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_PUT_0100 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });



    /**
     * @tc.number Telephony_http_HttpRequestMethod_PUT_0200
     * @tc.name HttpRequestMethod::PUT
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_PUT_0200", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_PUT_0200";
      console.log("-----------------------HttpRequestMethod_PUT_01 Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.PUT,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        if (httpRequestOptions.method == http.RequestMethod.PUT) {
          done();
          return;
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions).then((data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_PUT_01 Test end-----------------------");
          done();
        }).catch((error: BusinessError) => {
          console.info(caseName+"errocode" + JSON.stringify(error));
          expect(false).assertTrue();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_PUT_0200 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_http_HttpRequestMethod_head_0100
     * @tc.name HttpRequestMethod::HEAD
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_head_0100", 0, async (done: Function) => {
      let caseName: string = 'Telephony_http_HttpRequestMethod_head_0100';
      console.log("-----------------------HttpRequestMethod_head Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.HEAD,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions, (err: BusinessError, data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_head Test end-----------------------");
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_Http_HttpRequestMethod_head_0100 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_http_HttpRequestMethod_HEAD_0200
     * @tc.name HttpRequestMethod::HEAD
     * @tc.desc Test Test HttpRequestMethod property.
     */
    it("Telephony_http_HttpRequestMethod_HEAD_0200", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_HEAD_0200";
      console.log("-----------------------HttpRequestMethod_HEAD_01 Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.HEAD,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions).then((data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_HEAD_01 Test end-----------------------");
          done();
        }).catch((error: BusinessError) => {
          console.info(caseName+"errocode" + JSON.stringify(error));
          expect(false).assertTrue();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_HEAD_0200 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_http_HttpRequestMethod_DELETE_0100
     * @tc.name HttpRequestMethod::DELETE
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_DELETE_0100", 0, async (done: Function) => {
      let caseName: string = 'Telephony_http_HttpRequestMethod_DELETE_0100';
      console.log("-----------------------HttpRequestMethod_DELETE Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.DELETE,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.openharmony.cn/", httpRequestOptions, (err: BusinessError, data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.responseCode == 405).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_DELETE Test end-----------------------");
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_Http_HttpRequestMethod_DELETE_0100 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_http_HttpRequestMethod_DELETE_0200
     * @tc.name HttpRequestMethod::DELETE
     * @tc.desc Test Test HttpRequestMethod property.
     */
    it("Telephony_http_HttpRequestMethod_DELETE_0200", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_DELETE_0200";
      console.log("-----------------------HttpRequestMethod_DELETE_01 Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.DELETE,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.openharmony.cn/", httpRequestOptions).then((data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(data));
          expect(data.responseCode == 405).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_DELETE_01 Test end-----------------------");
          done();
        }).catch((error: BusinessError) => {
          console.info(caseName+"errocode" + JSON.stringify(error));
          expect(false).assertTrue();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_DELETE_0200 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_http_HttpRequestMethod_CONNECT_0100
     * @tc.name HttpRequestMethod::CONNECT
     * @tc.desc Test Test HttpRequestMethod property.
     */

    it("Telephony_http_HttpRequestMethod_CONNECT_0100", 0, async (done: Function) => {
      let caseName: string = 'Telephony_http_HttpRequestMethod_CONNECT_0100';
      console.log("-----------------------HttpRequestMethod_CONNECT Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.CONNECT,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions, (err: BusinessError, data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_CONNECT Test end-----------------------");
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_Http_HttpRequestMethod_CONNECT_0100 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_http_HttpRequestMethod_CONNECT_0200
     * @tc.name HttpRequestMethod::CONNECT
     * @tc.desc Test Test HttpRequestMethod property.
     */
    it("Telephony_http_HttpRequestMethod_CONNECT_0200", 0, async (done: Function) => {
      let caseName: string = "Telephony_http_HttpRequestMethod_CONNECT_0200";
      console.log("-----------------------HttpRequestMethod_CONNECT_01 Test is starting-----------------------");
      try {
        let httpRequestOptions: http.HttpRequestOptions = {
          method: http.RequestMethod.CONNECT,
          extraData: null,
          header: "content-type': 'application/json",
          readTimeout: 60000,
          connectTimeout: 60000
        }
        let httpRequest: http.HttpRequest = http.createHttp();
        httpRequest.request("https://www.baidu.com/", httpRequestOptions).then((data: http.HttpResponse) => {
          console.log(caseName + JSON.stringify(data));
          expect(data.responseCode == 200).assertTrue();
          httpRequest.destroy();
          console.log("-----------------------HttpRequestMethod_CONNECT_01 Test end-----------------------");
          done();
        }).catch((error: BusinessError) => {
          console.info(caseName+"errocode" + JSON.stringify(error));
          expect(false).assertTrue();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log("Telephony_http_HttpRequestMethod_CONNECT_0200 : error = " + e);
        expect(false).assertTrue();
        done();
      }
    });
  })
};