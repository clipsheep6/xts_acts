/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import { BusinessError } from '@ohos.base';
import connection from '@ohos.net.connection';

const ExpectFail = () => {
  try {
    expect().assertFail();
  } catch (err) {
    console.info("expectInfo", `test failed`);
  }
}

const ExpectTrue = (n: boolean) => {
  try {
    expect(n).assertTrue();
  } catch (err) {
    console.info("expectInfo", `test failed`);
  }
}

export default function HttpRequestOffTest() {
  describe('HttpRequestOffTest', () => {
    let XTS_TEST_HTTP_URL: string = 'http://www.baidu.com/';
    let XTS_TEST_STREAM_HTTPS_URL: string = "https://cn.bing.com/rp/Q5BJPjebyYN5QiqznkcMQmLrF9U.svg";
    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0100
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0100
     * @tc.desc   : Unsubscribe from HTTP Response Header event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0100', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0100';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: (header: Object) => void = (header: Object) => {
              count = count + 1;
              console.info(`${caseName} callback header: ${JSON.stringify(header)}`);
              console.info(`${caseName} callback  count: ${count}`);
            }
            httpRequest.on("headersReceive", callback);
            httpRequest.off("headersReceive", callback);
            httpRequest.request(XTS_TEST_HTTP_URL,
              (err: BusinessError) => {
                if (err) {
                  console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                  ExpectFail();
                  httpRequest.destroy();
                  done();
                } else {
                  console.info(`${caseName} count: ${count}`);
                  ExpectTrue(count == 1);
                  httpRequest.destroy();
                  done();
                }
              });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0200
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0200
     * @tc.desc   : Unsubscribe from HTTP Response Header event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0200', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0200';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            httpRequest.on("headersReceive", (header: Object) => {
              count = count + 1;
              console.info(`${caseName} header: ${JSON.stringify(header)}`);
            });
            httpRequest.off("headersReceive");
            httpRequest.request(XTS_TEST_HTTP_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0300
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0300
     * @tc.desc   : Unsubscribe from HTTP streaming response data receiving events.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0300', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0300';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            httpRequest.on("dataReceive", (data: ArrayBuffer) => {
              count = count + 1;
              console.info(`${caseName} dataReceive length: ${JSON.stringify(data.byteLength)}`);
            });
            httpRequest.off("dataReceive");
            httpRequest.request(XTS_TEST_STREAM_HTTPS_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0400
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0400
     * @tc.desc   : Unsubscribe from HTTP streaming response data receiving events.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0400', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0400';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: (data: ArrayBuffer) => void = (data: ArrayBuffer) => {
              count = count + 1;
              console.info(`${caseName} dataReceive length: ${JSON.stringify(data.byteLength)}`);
            }
            httpRequest.on("dataReceive", callback);
            httpRequest.off("dataReceive", callback);
            httpRequest.requestInStream(XTS_TEST_STREAM_HTTPS_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0500
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0500
     * @tc.desc   : Unsubscribe from the HTTP streaming response data reception completion event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0500', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0500';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            httpRequest.on("dataEnd", () => {
              count = count + 1;
              console.info(`${caseName} Receive dataEnd`);
            });
            httpRequest.off("dataEnd");
            httpRequest.requestInStream(XTS_TEST_STREAM_HTTPS_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0600
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0600
     * @tc.desc   : Unsubscribe from the HTTP streaming response data reception completion event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0600', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0600';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: () => void = () => {
              count = count + 1;
              console.info(`${caseName} Receive dataEnd`);
            }
            httpRequest.on("dataEnd", callback);
            httpRequest.off("dataEnd", callback);
            httpRequest.requestInStream(XTS_TEST_STREAM_HTTPS_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0700
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0700
     * @tc.desc   : Unsubscribe from HTTP streaming response data receiving progress events.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0700', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0700';
      console.info(`${caseName}---Start`);

      class RequestData {
        receiveSize: number = 2000;
        totalSize: number = 2000;
      }

      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            httpRequest.on("dataReceiveProgress", (data: RequestData) => {
              count = count + 1;
              console.info(`${caseName} dataReceiveProgress:${JSON.stringify(data)}`);
            });
            httpRequest.off("dataReceiveProgress");
            httpRequest.requestInStream(XTS_TEST_STREAM_HTTPS_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0800
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0800
     * @tc.desc   : Unsubscribe from HTTP streaming response data receiving progress events.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0800', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0800';
      console.info(`${caseName}---Start`);

      class RequestData {
        receiveSize: number = 2000;
        totalSize: number = 2000;
      }

      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: (data: RequestData) => void = (data: RequestData) => {
              count = count + 1;
              console.info(`${caseName} dataReceiveProgress:${JSON.stringify(data)}`);
            }
            httpRequest.on("dataReceiveProgress", callback);
            httpRequest.off("dataReceiveProgress", callback);
            httpRequest.requestInStream(XTS_TEST_STREAM_HTTPS_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_0900
     * @tc.name   : testNetworkMgrHttpHttpRequestOff0900
     * @tc.desc   : Unsubscribe from HTTP network request data sending progress event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff0900', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff0900';
      console.info(`${caseName}---Start`);

      class SendData {
        sendSize: number = 2000;
        totalSize: number = 2000;
      }

      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            httpRequest.on("dataSendProgress", (data: SendData) => {
              count = count + 1;
              console.info(`${caseName} dataSendProgress: ${JSON.stringify(data)}`);
            });
            httpRequest.off("dataSendProgress");
            httpRequest.request(XTS_TEST_HTTP_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_1000
     * @tc.name   : testNetworkMgrHttpHttpRequestOff1000
     * @tc.desc   : Unsubscribe from HTTP network request data sending progress event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff1000', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff1000';
      console.info(`${caseName}---Start`);

      class SendData {
        sendSize: number = 2000;
        totalSize: number = 2000;
      }

      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: (data: SendData) => void = (data: SendData) => {
              count = count + 1;
              console.info(`${caseName} dataSendProgress: ${JSON.stringify(data)}`);
            }
            httpRequest.on("dataSendProgress", callback);
            httpRequest.off("dataSendProgress", callback);
            httpRequest.request(XTS_TEST_HTTP_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_1100
     * @tc.name   : testNetworkMgrHttpHttpRequestOff1100
     * @tc.desc   : Unsubscribe from HTTP Response Header event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff1100', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff1100';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: (data: BusinessError) => void = (data: BusinessError) => {
              count = count + 1;
              console.info(`${caseName} data: ${JSON.stringify(data)}`);
            }
            httpRequest.on("headerReceive", callback);
            httpRequest.off("headerReceive", callback);
            httpRequest.request(XTS_TEST_HTTP_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_1200
     * @tc.name   : testNetworkMgrHttpHttpRequestOff1200
     * @tc.desc   : Unsubscribe from HTTP Response Header event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff1200', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff1200';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            httpRequest.on("headerReceive", (data: BusinessError) => {
              count = count + 1;
              console.info(`${caseName} data: ${JSON.stringify(data)}`);
            });
            httpRequest.off("headerReceive");
            httpRequest.request(XTS_TEST_HTTP_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_1300
     * @tc.name   : testNetworkMgrHttpHttpRequestOff1300
     * @tc.desc   : Unsubscribe from HTTP Response Header event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff1300', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff1300';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: (data: BusinessError) => void = (data: BusinessError) => {
              count = count + 1;
              console.info(`${caseName} data: ${JSON.stringify(data)}`);
            }
            httpRequest.off("headerReceive", callback);
            httpRequest.request(XTS_TEST_HTTP_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_1400
     * @tc.name   : testNetworkMgrHttpHttpRequestOff1400
     * @tc.desc   : Unsubscribe from HTTP Response Header event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff1400', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff1400';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: (header: Object) => void = (header: Object) => {
              count = count + 1;
              console.info(`${caseName} header: ${JSON.stringify(header)}`);
            }
            httpRequest.off("headersReceive", callback);
            httpRequest.request(XTS_TEST_HTTP_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_1500
     * @tc.name   : testNetworkMgrHttpHttpRequestOff1500
     * @tc.desc   : Unsubscribe from HTTP streaming response data receiving events.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff1500', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff1500';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: (data: ArrayBuffer) => void = (data: ArrayBuffer) => {
              count = count + 1;
              console.info(`${caseName} dataReceive length: ${JSON.stringify(data.byteLength)}`);
            }
            httpRequest.off("dataReceive", callback);
            httpRequest.requestInStream(XTS_TEST_STREAM_HTTPS_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });

    /**
     * @tc.number : SUB_NetworkMgr_Http_HttpRequest_Off_1600
     * @tc.name   : testNetworkMgrHttpHttpRequestOff1600
     * @tc.desc   : Unsubscribe from the HTTP streaming response data reception completion event.
     * @tc.level  : Level 3
     * @tc.type   : Function
     * @tc.size   : MediumTest
     */
    it('testNetworkMgrHttpHttpRequestOff1600', 0, async (done: Function) => {
      const caseName: string = 'testNetworkMgrHttpHttpRequestOff1600';
      console.info(`${caseName}---Start`);
      try {
        connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
          if (data.netId == 0) {
            console.info(`${caseName} Please connect to the network`);
            ExpectFail();
            done();
          } else {
            console.info(`${caseName} Network connected`);
            let httpRequest: http.HttpRequest = http.createHttp();
            let count: number = 1;
            const callback: () => void = () => {
              count = count + 1;
              console.info(`${caseName} Receive dataEnd`);
            }
            httpRequest.off("dataEnd", callback);
            httpRequest.requestInStream(XTS_TEST_STREAM_HTTPS_URL, (err: BusinessError) => {
              if (err) {
                console.info(`${caseName} request err: ${JSON.stringify(err)}`);
                ExpectFail();
                httpRequest.destroy();
                done();
              } else {
                console.info(`${caseName} count: ${count}`);
                ExpectTrue(count == 1);
                httpRequest.destroy();
                done();
              }
            });
          }
        });
      } catch (err) {
        console.info(`${caseName} trycatch failed ${JSON.stringify(err)}`);
        ExpectFail();
        done();
      }
      console.info(`${caseName}---End`);
    });
  });
}

