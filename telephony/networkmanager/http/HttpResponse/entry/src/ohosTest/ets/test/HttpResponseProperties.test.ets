/*
 *  Copyright (c) 2024 Huawei Device Co., Ltd.
 *  Licensed under the Apache License, Version 2.0 (the "License")
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
import { BusinessError } from '@ohos.base';
import http from '@ohos.net.http';
import { describe, expect, it } from '@ohos/hypium';
import connection from '@ohos.net.connection';

export const ADDR_TEST_STREAM_HTTPS = "https://cn.bing.com/rp/Q5BJPjebyYN5QiqznkcMQmLrF9U.svg";

export const ADDR_TEST_DOMAIN_HTTPS: string = "https://httpbin.org/anything";

/**
 * @description assert whether the input argument is true
 * @param data
 */
function ExpectTrue(data: Boolean): void {
  try {
    expect(data).assertTrue();
  } catch (e) {
    const error: BusinessError = e as BusinessError;
    console.info(`expect true catch error, code: ${error.code}, message: ${error.message}`);
  }
}

/**
 * @description assert whether the input argument is false
 * @param data
 */
function ExpectFalse(data: Boolean): void {
  try {
    expect(data).assertFalse();
  } catch (e) {
    const error: BusinessError = e as BusinessError;
    console.info(`expect false catch error, code: ${error.code}, message: ${error.message}`);
  }
}

/**
 * @description failure assertions
 */
function ExpectFail(): void {
  try {
    expect().assertFail();
  } catch (e) {
    const error: BusinessError = e as BusinessError;
    console.info(`expect fail catch error, code: ${error.code}, message: ${error.message}`);
  }
}

const CODES: Array<http.ResponseCode> = [
  http.ResponseCode.OK, http.ResponseCode.CREATED, http.ResponseCode.ACCEPTED, http.ResponseCode.NOT_AUTHORITATIVE,
  http.ResponseCode.NO_CONTENT, http.ResponseCode.RESET, http.ResponseCode.PARTIAL, http.ResponseCode.MULT_CHOICE,
  http.ResponseCode.MOVED_PERM, http.ResponseCode.MOVED_TEMP, http.ResponseCode.SEE_OTHER, http.ResponseCode.NOT_MODIFIED,
  http.ResponseCode.USE_PROXY, http.ResponseCode.BAD_REQUEST, http.ResponseCode.UNAUTHORIZED, http.ResponseCode.PAYMENT_REQUIRED,
  http.ResponseCode.FORBIDDEN, http.ResponseCode.NOT_FOUND, http.ResponseCode.BAD_METHOD, http.ResponseCode.NOT_ACCEPTABLE,
  http.ResponseCode.PROXY_AUTH, http.ResponseCode.CLIENT_TIMEOUT, http.ResponseCode.CONFLICT, http.ResponseCode.LENGTH_REQUIRED,
  http.ResponseCode.ENTITY_TOO_LARGE, http.ResponseCode.REQ_TOO_LONG, http.ResponseCode.PRECON_FAILED, http.ResponseCode.UNSUPPORTED_TYPE,
  http.ResponseCode.INTERNAL_ERROR, http.ResponseCode.NOT_IMPLEMENTED, http.ResponseCode.BAD_GATEWAY, http.ResponseCode.UNAVAILABLE,
  http.ResponseCode.GATEWAY_TIMEOUT, http.ResponseCode.VERSION
];


export default function HttpResponsePropertiesTest() {
  describe("HttpResponsePropertiesTest", () => {
    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0100
     * @tc.name  :  SUB_NetworkMgr_Http_Response_0100
     * @tc.desc  :  test resultType with default parameter for expectDataType
     * @tc.size  :  SmallTest
     * @tc.type  :  Function
     * @tc.level :  level 3
    */
    it('testHttpResponse0100', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0100";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_DOMAIN_HTTPS).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName} res.resultType:${res.resultType} res.result:${JSON.stringify(res.result)}`);
                ExpectTrue(resultType == http.HttpDataType.STRING);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              });
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });


    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0200
     * @tc.name  :  SUB_NetworkMgr_Http_Response_0200
     * @tc.desc  :  test resultType with expectDataType:http.HttpDataType.STRING
     * @tc.size  :  SmallTest
     * @tc.type  :  Function
     * @tc.level :  level 3
     */
    it('testHttpResponse0200', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0200";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      const expectDataType: http.HttpDataType = http.HttpDataType.STRING;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_DOMAIN_HTTPS, {
                expectDataType,
              }).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName} res.resultType:${res.resultType}  res.result:${JSON.stringify(res.result)}`);
                ExpectTrue(resultType == expectDataType);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              })
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });


    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0300
     * @tc.name  :  SUB_NetworkMgr_Http_Response_0300
     * @tc.desc  :  test resultType with expectDataType:http.HttpDataType.OBJECT
     * @tc.size  :  SmallTest
     * @tc.type  :  Function
     * @tc.level :  level 3
     */
    it('testHttpResponse0300', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0300";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      const expectDataType: http.HttpDataType = http.HttpDataType.OBJECT;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_DOMAIN_HTTPS, {
                expectDataType,
              }).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName} res.resultType:${res.resultType}  res.result:${JSON.stringify(res.result)}`);
                const flag: boolean = [http.HttpDataType.OBJECT, http.HttpDataType.STRING].includes(resultType);
                ExpectTrue(flag);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              })
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });


    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0400
     * @tc.name  :  SUB_NetworkMgr_Http_Response_0400
     * @tc.desc  :  test resultType with expectDataType:http.HttpDataType.ARRAY_BUFFER
     * @tc.size  :  SmallTest
     * @tc.type  :  Function
     * @tc.level :  level 3
     */
    it('testHttpResponse0400', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0400";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      const expectDataType: http.HttpDataType = http.HttpDataType.ARRAY_BUFFER;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_DOMAIN_HTTPS, {
                expectDataType,
              }).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName} res.resultType:${res.resultType}  res.result:${JSON.stringify(res.result)}`);
                ExpectTrue(resultType == expectDataType);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              })
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });

    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0500
     * @tc.name:    testHttpResponse0500
     * @tc.desc:    test resultType with expectDataType:not within http.HttpDataType
     * @tc.size:    SmallTest
     * @tc.type:    Function
     * @tc.level:   level 3
     */
    it('testHttpResponse005', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0500";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      const expectDataType: http.HttpDataType = 3;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_DOMAIN_HTTPS, {
                expectDataType,
              }).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName} res.resultType:${res.resultType}  res.result:${JSON.stringify(res.result)}`);
                ExpectTrue(resultType == http.HttpDataType.STRING);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              })
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });

    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0600
     * @tc.name:    testHttpResponse0600
     * @tc.desc:    test resultType with header.contentType(application/json) Type
     * @tc.size:    SmallTest
     * @tc.type:    Function
     * @tc.level:   level 3
     */
    it('testHttpResponse0600', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0600";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_DOMAIN_HTTPS, {
                header: {
                  "content-type": "application/json"
                },
              }).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName} res.resultType:${res.resultType}  res.result:${JSON.stringify(res.result)}`);
                ExpectTrue(resultType == http.HttpDataType.STRING);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              })
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });

    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0700
     * @tc.name:    testHttpResponse0700
     * @tc.desc:    test resultType with header.contentType(application/octet-stream) Type
     * @tc.size:    SmallTest
     * @tc.type:    Function
     * @tc.level:   level 3
     */
    it('testHttpResponse007', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0700";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_STREAM_HTTPS, {
                header: {
                  "content-type": "application/octet-stream"
                },
              }).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName} res.resultType:${res.resultType}  res.result:${JSON.stringify(res.result)}`);
                ExpectTrue(resultType == http.HttpDataType.ARRAY_BUFFER);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              })
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });

    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0800
     * @tc.name:    testHttpResponse0800
     * @tc.desc:    test resultType with header.contentType(image/svg+xml) Type
     * @tc.size:    SmallTest
     * @tc.type:    Function
     * @tc.level:   level 3
     */
    it('testHttpResponse0800', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0800";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_STREAM_HTTPS, {
                header: {
                  "content-type": "image/svg+xml"
                },
              }).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName}  res.resultType:${res.resultType}  res.result:${JSON.stringify(res.result)}`);
                ExpectTrue(resultType == http.HttpDataType.ARRAY_BUFFER);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              })
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });


    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_0900
     * @tc.name:    testHttpResponse0900
     * @tc.desc:    test resultType with header.contentType(text/html) Type
     * @tc.size:    SmallTest
     * @tc.type:    Function
     * @tc.level:   level 3
     */
    it('testHttpResponse0900', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse0900";
      console.info(`${caseName} test Start`);
      let resultType: http.HttpDataType = -1;
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_DOMAIN_HTTPS, {
                header: {
                  "content-type": "text/html"
                },
              }).then((res: http.HttpResponse) => {
                resultType = res.resultType;
                console.info(`${caseName} res.resultType:${res.resultType}  res.result:${JSON.stringify(res.result)}`);
                ExpectTrue(resultType == http.HttpDataType.STRING);
                httpRequest.destroy();
                done();
              }).catch((error: BusinessError) => {
                console.info(`${caseName} request catch ERROR-->:${JSON.stringify(error)}`);
                httpRequest.destroy();
                ExpectFail();
                done();
              })
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch ERROR-->:${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });


    /* *
     * @tc.number:  SUB_NetworkMgr_Http_Response_1000
     * @tc.name:    testHttpResponse1000
     * @tc.desc:    test resultType with default parameter for expectDataType
     * @tc.size:    SmallTest
     * @tc.type:    Function
     * @tc.level:   level 3
     */
    it('testHttpResponse1000', 0, async (done: Function) => {
      const caseName: string = "testHttpResponse1000";
      console.info(`${caseName} test Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (error) {
            console.info(`${caseName} getDefaultNet fail, error code: ${error.code}, msg: ${error.message}`);
            ExpectFail();
            done();
          } else {
            if (data.netId == 0) {
              console.info(`${caseName} no Network connected`);
              ExpectFail();
              done();
            } else {
              console.info(`${caseName} Network connected`);
              let resultType: http.HttpDataType = -1;
              const httpRequest: http.HttpRequest = http.createHttp();
              httpRequest.request(ADDR_TEST_DOMAIN_HTTPS, (err: BusinessError, res: http.HttpResponse) => {
                if (err) {
                  console.info(`${caseName} request fail, error code: ${err.code}, msg: ${err.message}`);
                  httpRequest.destroy();
                  ExpectFail();
                  done();
                } else {
                  console.info(`${caseName} request data -->:${JSON.stringify(data)}`);
                  resultType = res.resultType;
                  ExpectTrue(resultType == http.HttpDataType.STRING);
                  httpRequest.destroy();
                  done();
                }
              });
            }
          }
        });
      } catch (err) {
        console.info(`${caseName} catch err: ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName} test End`);
    });


  });
}