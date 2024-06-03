/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import { describe, it, expect, beforeEach } from '@ohos/hypium';
import { BusinessError } from '@ohos.base';
import webSocket from '@ohos.net.webSocket';


function expectTrue(exp: boolean, info: string = ''): void {
  try {
    expect(exp).assertTrue();
  } catch (err) {
    console.info(`${info} test failed`);
  }
}

function expectFail(info: string = ''): void {
  try {
    expect().assertFail();
  } catch (err) {
    console.info(`${info} test failed`);
  }
}

function expectEqual(exp: string | number | boolean, assert: string | number | boolean, info: string = ''): void {
  try {
    expect(exp).assertEqual(assert);
  } catch (err) {
    console.info(`${info} test failed`);
  }
}

let options: webSocket.WebSocketRequestOptions = {
  header: {
    'Content-Type': 'application/json'
  }
};

let sendLongMessage: string = '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。' +
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'+
  '创建要上传或下载的任务，并将其排入队列，每个应用最多支持创建10个未完成的任务。使用callback异步回调。'

let ws: webSocket.WebSocket;
let availableWebSocketAddress: string = 'wss://ws.welive.huawei.com/';

export default function WebSocketApiTest() {
  describe('webSocketApiTest', () => {
    beforeEach((done: Function) => {
      ws = webSocket.createWebSocket();
      done();
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0100
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0100
     * @tc.desc  : Establish a WebSocket connection based on the URL address(url is null)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 1
     */
    it('testNetworkMgrWebSocketConnectCallback0100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0100';
      console.info(`${caseName} test start`);
      try {
        ws.connect(null, (error: BusinessError, value: boolean) => {
          console.info(`${caseName} test result error ${JSON.stringify(error)} and value is ${value}`);
          expectTrue(error !== undefined && error.code === 401);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catch error ${JSON.stringify(err)}`);
        expectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0200
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0200
     * @tc.desc  : Establish a WebSocket connection based on the URL address(url is '')
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0200';
      console.info(`${caseName} test start`);
      try {
        ws.connect('', (error: BusinessError, value: boolean) => {
          console.info(`${caseName} test result error ${JSON.stringify(error)} and value is ${value}`);
          expectTrue(error !== undefined && error.code === 2302001); // {"code":2302001,"message":"Websocket url error"}
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catch error ${JSON.stringify(err)}`);
        expectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0300
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0300
     * @tc.desc  : Establish a WebSocket connection based on the URL address(url is 'hello')
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback0300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0300';
      console.info(`${caseName} test start`);
      try {
        ws.connect('hello', (error: BusinessError, value: boolean) => {
          console.info(`${caseName} test result error ${JSON.stringify(error)} and value is ${value}`);
          expectTrue(error !== undefined && error.code === 2302001); // {"code":2302001,"message":"Websocket url error"}
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catch error ${JSON.stringify(err)}`);
        expectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0400
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0400
     * @tc.desc  : Establish a WebSocket connection based on the URL address(url is 'ws://')
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback0400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0400';
      console.info(`${caseName} test start`);
      try {
        ws.connect('ws://', (error: BusinessError, value: boolean) => {
          console.info(`${caseName} test result error ${JSON.stringify(error)} and value is ${value}`);
          expectTrue(error !== undefined && error.code === -1); // {"code":-1,"message":"Websocket connect failed"}
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catch error ${JSON.stringify(err)}`);
        expectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0500
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0500
     * @tc.desc  : Establish a WebSocket connection based on the URL address(url is availableWebSocketAddress)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback0500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0500';
      console.info(`${caseName} test start`);
      try {
        let url: string = availableWebSocketAddress;
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        })
        ws.connect(url, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectTrue(value);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catch error ${JSON.stringify(err)}`);
        expectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0600
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0600
     * @tc.desc  : Establish a WebSocket connection based on the URL address(connect twice)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback0600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0600';
      console.info(`${caseName} test start`);
      try {
        let url: string = availableWebSocketAddress;
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        })
        ws.connect(url, (error: BusinessError, value: boolean) => { // first
          console.info(`${caseName} test fisrt result error ${JSON.stringify(error)} and value is ${value}`);
          expectTrue(error === undefined && value);
          ws.connect(url, (error: BusinessError, value: boolean) => { // second
            console.info(`${caseName} test second result error ${JSON.stringify(error)} and value is ${value}`);
            expectTrue(error !== undefined && error.code === 2302003); // {"code":2302003,"message":"Websocket connection exist"}
            done();
            console.info(`${caseName} test end`);
          });
        });
      } catch (err) {
        console.info(`${caseName} catch error ${JSON.stringify(err)}`);
        expectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0700
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0700
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(null url,correct options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback0700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0700';
      console.info(`${caseName} test start`);
      try {
        ws.connect(null, options, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectEqual(err.code,401);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectFail(`${caseName} test connect success`);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0800
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0800
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(url is '',correct options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback0800', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0800';
      console.info(`${caseName} test start`);
      try {
        ws.connect('', options, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectEqual(err.code,2302001);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectFail(`${caseName} test connect success`);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_0900
     * @tc.name  : testNetworkMgrWebSocketConnectCallback0900
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(url is '123',correct options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback0900', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback0900';
      console.info(`${caseName} test start`);
      try {
        ws.connect('123', options, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectEqual(err.code,2302001);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectFail(`${caseName} test connect success`);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_1000
     * @tc.name  : testNetworkMgrWebSocketConnectCallback1000
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(url is 'ws://',correct options,callback)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback1000', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback1000';
      console.info(`${caseName} test start`);
      try {
        ws.connect('ws://', options, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectEqual(err.code,-1);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectFail(`${caseName} test connect success`);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_1100
     * @tc.name  : testNetworkMgrWebSocketConnectCallback1100
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(correct url,options is null,callback)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback1100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback1100';
      console.info(`${caseName} test start`);
      try {
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        })
        ws.connect(availableWebSocketAddress, null, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectEqual(err.code,401);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectFail(`${caseName} test connect success`);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_1200
     * @tc.name  : testNetworkMgrWebSocketConnectCallback1200
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(correct url,options is {},callback)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback1200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback1200';
      console.info(`${caseName} test start`);
      try {
        ws.connect(availableWebSocketAddress, {}, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectTrue(value);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_1300
     * @tc.name  : testNetworkMgrWebSocketConnectCallback1300
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(correct url,wrong options,callback)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback1300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback1300';
      console.info(`${caseName} test start`);
      try {
        ws.connect(availableWebSocketAddress, { header: {'Content-Type': 30} }, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectTrue(value);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_1400
     * @tc.name  : testNetworkMgrWebSocketConnectCallback1400
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(null url,null options,callback)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback1400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback1400';
      console.info(`${caseName} test start`);
      try {
        ws.connect(null, null, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectEqual(err.code,401);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectFail(`${caseName} test connect success`);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_1500
     * @tc.name  : testNetworkMgrWebSocketConnectCallback1500
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(correct url,correct options,callback)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback1500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback1500';
      console.info(`${caseName} test start`);
      try {
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        })
        ws.connect(availableWebSocketAddress, options, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectTrue(value);
            done();
            console.info(`${caseName} test end`);
          }
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectCallback_1600
     * @tc.name  : testNetworkMgrWebSocketConnectCallback1600
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(connect twice)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectCallback1600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectCallback1600';
      console.info(`${caseName} test start`);
      try {
        ws.connect(availableWebSocketAddress, options, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect1 fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect1 fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect1 success and value is ${value}`);
            ws.connect(availableWebSocketAddress, options, (err: BusinessError, value: boolean) => {
              if (err) {
                console.info(`${caseName} test connect2 fail ${JSON.stringify(err)}`);
                expectEqual(err.code,2302003);
                done();
                console.info(`${caseName} test end`);
              } else {
                console.info(`${caseName} test connect2 success and value is ${value}`);
                expectFail(`${caseName} test connect2 success`);
                done();
                console.info(`${caseName} test end`);
              }
            })
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0100
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0100
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(null url,correct options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0100';
      console.info(`${caseName} test start`);
      try {
        ws.connect(null,options).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectFail(`${caseName} test connect success`);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectEqual(err.code,401);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0200
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0200
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(url is '',correct options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0200';
      console.info(`${caseName} test start`);
      try {
        ws.connect('',options).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectFail(`${caseName} test connect success`);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectEqual(err.code,2302001);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0300
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0300
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(url is '123',correct options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0300';
      console.info(`${caseName} test start`);
      try {
        ws.connect('123',options).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectFail(`${caseName} test connect success`);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectEqual(err.code,2302001);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0400
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0400
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(url is 'ws://',correct options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0400';
      console.info(`${caseName} test start`);
      try {
        ws.connect('ws://',options).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectFail(`${caseName} test connect success`);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectEqual(err.code,-1);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0500
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0500
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(correct url,options is null)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0500';
      console.info(`${caseName} test start`);
      try {
        ws.connect(availableWebSocketAddress).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectTrue(value);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectFail(`${caseName} test connect fail`);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0600
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0600
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(correct url,options is empty)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0600';
      console.info(`${caseName} test start`);
      try {
        ws.connect(availableWebSocketAddress,{}).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectTrue(value);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectFail(`${caseName} test connect fail`);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0700
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0700
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(correct url,wrong options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0700';
      console.info(`${caseName} test start`);
      try {
        ws.connect(availableWebSocketAddress,{ header: {'Content-Type': 30} }).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectTrue(value);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectFail(`${caseName} test connect fail`);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0800
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0800
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(null url,null options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0800', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0800';
      console.info(`${caseName} test start`);
      try {
        ws.connect(null).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectFail(`${caseName} test connect success`);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectEqual(err.code,401);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_0900
     * @tc.name  : testNetworkMgrWebSocketConnectPromise0900
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(correct url,correct options)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise0900', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise0900';
      console.info(`${caseName} test start`);
      try {
        ws.connect(availableWebSocketAddress,options).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          expectTrue(value);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectFail(`${caseName} test connect fail`);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_ConnectPromise_1000
     * @tc.name  : testNetworkMgrWebSocketConnectPromise1000
     * @tc.desc  : Establish a WebSocket connection based on the URL address and header(Connect twice)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketConnectPromise1000', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketConnectPromise1000';
      console.info(`${caseName} test start`);
      try {
        ws.connect(availableWebSocketAddress,options).then((value: boolean) => {
          console.info(`${caseName} test connect success and value is ${value}`);
          ws.connect(availableWebSocketAddress,options).then((value: boolean) => {
            console.info(`${caseName} test connect success and value is ${value}`);
            expectFail(`${caseName} test connect success`);
            done();
            console.info(`${caseName} test end`);
          }).catch((err: BusinessError) => {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectEqual(err.code,2302003);
            done();
            console.info(`${caseName} test end`);
          });
        }).catch((err: BusinessError) => {
          console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
          expectFail(`${caseName} test connect fail`);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendCallback_0100
     * @tc.name  : testNetworkMgrWebSocketSendCallback0100
     * @tc.desc  : Sending data through WebSocket connection(data is null)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendCallback0100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendCallback0100';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send(null, (err: BusinessError, value: boolean) => {
            if (err) {
              console.info(`${caseName} send fail ${JSON.stringify(err)}`);
              expectEqual(err.code,401);
              done();
              console.info(`${caseName} test end`);
            } else {
              console.info(`${caseName} send success and value is ${value}`);
              expectFail(`${caseName} send success`);
              done();
              console.info(`${caseName} test end`);
            }
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendCallback_0200
     * @tc.name  : testNetworkMgrWebSocketSendCallback0200
     * @tc.desc  : Sending data through WebSocket connection(data is '')
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendCallback0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendCallback0200';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send('', (err: BusinessError, value: boolean) => {
            if (err) {
              console.info(`${caseName} send fail ${JSON.stringify(err)}`);
              expectTrue(false);
              done();
              console.info(`${caseName} test end`);
            } else {
              console.info(`${caseName} send success and value is ${value}`);
              expectTrue(value);
              done();
              console.info(`${caseName} test end`);
            }
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendCallback_0300
     * @tc.name  : testNetworkMgrWebSocketSendCallback0300
     * @tc.desc  : Sending data through WebSocket connection(data is string)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendCallback0300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendCallback0300';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send('Hello', (err: BusinessError, value: boolean) => {
            if (err) {
              console.info(`${caseName} send fail ${JSON.stringify(err)}`);
              expectFail(`${caseName} send fail`);
              done();
              console.info(`${caseName} test end`);
            } else {
              console.info(`${caseName} send success and value is ${value}`);
              expectTrue(value);
              done();
              console.info(`${caseName} test end`);
            }
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendCallback_0400
     * @tc.name  : testNetworkMgrWebSocketSendCallback0400
     * @tc.desc  : Sending data through WebSocket connection(data is ArrayBuffer)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendCallback0400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendCallback0400';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        let sendMessage: ArrayBuffer = new ArrayBuffer(96);
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send(sendMessage, (err: BusinessError, value: boolean) => {
            if (err) {
              console.info(`${caseName} send fail ${JSON.stringify(err)}`);
              expectFail(`${caseName} send fail`);
              done();
              console.info(`${caseName} test end`);
            } else {
              console.info(`${caseName} send success and value is ${value}`);
              expectTrue(value);
              done();
              console.info(`${caseName} test end`);
            }
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendCallback_0500
     * @tc.name  : testNetworkMgrWebSocketSendCallback0500
     * @tc.desc  : Sending data through WebSocket connection(data is Int8Array)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendCallback0500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendCallback0500';
      console.info(`${caseName} test start`);
      try {
        let sendMessage: Int8Array = new Int8Array(0);
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send(sendMessage, (err: BusinessError, value: boolean) => {
            if (err) {
              console.info(`${caseName} send fail ${JSON.stringify(err)}`);
              expectEqual(err.code,401);
              done();
              console.info(`${caseName} test end`);
            } else {
              console.info(`${caseName} send success and value is ${value}`);
              expectFail(`${caseName} send success`);
              done();
              console.info(`${caseName} test end`);
            }
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendCallback_0600
     * @tc.name  : testNetworkMgrWebSocketSendCallback0600
     * @tc.desc  : Sending data through WebSocket connection(no connect)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendCallback0600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendCallback0600';
      console.info(`${caseName} test start`);
      try {
        ws.send('Hello', (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} send fail ${JSON.stringify(err)}`);
            expectEqual(err.code,-1);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} send success and value is ${value}`);
            expectFail(`${caseName} send success`);
            done();
            console.info(`${caseName} test end`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendCallback_0700
     * @tc.name  : testNetworkMgrWebSocketSendCallback0700
     * @tc.desc  : Sending data through WebSocket connection(send twice)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendCallback0700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendCallback0700';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send('Hello', (err: BusinessError, value: boolean) => {
            if (err) {
              console.info(`${caseName} send1 fail ${JSON.stringify(err)}`);
              expectFail(`${caseName} send1 fail`);
              done();
              console.info(`${caseName} test end`);
            } else {
              console.info(`${caseName} send1 success and value is ${value}`);
              ws.send('Hello', (err: BusinessError, value: boolean) => {
                if (err) {
                  console.info(`${caseName} send2 fail ${JSON.stringify(err)}`);
                  expectFail(`${caseName} send2 fail`);
                  done();
                  console.info(`${caseName} test end`);
                } else {
                  console.info(`${caseName} send2 success and value is ${value}`);
                  expectTrue(value);
                  done();
                  console.info(`${caseName} test end`);
                }
              })
            }
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendCallback_0800
     * @tc.name  : testNetworkMgrWebSocketSendCallback0800
     * @tc.desc  : Sending data through WebSocket connection(send long message)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendCallback0800', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendCallback0800';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send(sendLongMessage, (err: BusinessError, value: boolean) => {
            if (err) {
              console.info(`${caseName} send fail ${JSON.stringify(err)}`);
              expectFail(`${caseName} send fail`);
              done();
              console.info(`${caseName} test end`);
            } else {
              console.info(`${caseName} send success and value is ${value}`);
              expectTrue(value);
              done();
              console.info(`${caseName} test end`);
            }
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendPromise_0100
     * @tc.name  : testNetworkMgrWebSocketSendPromise0100
     * @tc.desc  : Sending data through WebSocket connection(data is null)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendPromise0100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendPromise0100';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send(null).then((value: boolean) => {
            console.info(`${caseName} send success and value is ${value}`);
            expectFail(`${caseName} send success`);
            done();
            console.info(`${caseName} test end`);
          }).catch((err: BusinessError) => {
            console.info(`${caseName} send fail ${JSON.stringify(err)}`);
            expectEqual(err.code,401);
            done();
            console.info(`${caseName} test end`);
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendPromise_0200
     * @tc.name  : testNetworkMgrWebSocketSendPromise0200
     * @tc.desc  : Sending data through WebSocket connection(data is '')
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendPromise0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendPromise0200';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send('').then((value: boolean) => {
            console.info(`${caseName} send success and value is ${value}`);
            expectTrue(value);
            done();
            console.info(`${caseName} test end`);
          }).catch((err: BusinessError) => {
            console.info(`${caseName} send fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} send fail`);
            done();
            console.info(`${caseName} test end`);
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendPromise_0300
     * @tc.name  : testNetworkMgrWebSocketSendPromise0300
     * @tc.desc  : Sending data through WebSocket connection(data is string)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendPromise0300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendPromise0300';
      console.info(`${caseName} test start`);
      try {
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send('Hello').then((value: boolean) => {
            console.info(`${caseName} send success and value is ${value}`);
            expectTrue(value);
            done();
            console.info(`${caseName} test end`);
          }).catch((err: BusinessError) => {
            console.info(`${caseName} send fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} send fail`);
            done();
            console.info(`${caseName} test end`);
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendPromise_0400
     * @tc.name  : testNetworkMgrWebSocketSendPromise0400
     * @tc.desc  : Sending data through WebSocket connection(data is ArrayBuffer)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendPromise0400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendPromise0400';
      console.info(`${caseName} test start`);
      try {
        let sendMessage: ArrayBuffer = new ArrayBuffer(96);
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send(sendMessage).then((value: boolean) => {
            console.info(`${caseName} send success and value is ${value}`);
            expectTrue(value);
            done();
            console.info(`${caseName} test end`);
          }).catch((err: BusinessError) => {
            console.info(`${caseName} send fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} send fail`);
            done();
            console.info(`${caseName} test end`);
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendPromise_0500
     * @tc.name  : testNetworkMgrWebSocketSendPromise0500
     * @tc.desc  : Sending data through WebSocket connection(data is Int8Array)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendPromise0500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendPromise0500';
      console.info(`${caseName} test start`);
      try {
        let sendMessage: Int8Array = new Int8Array(0);
        class OutValue {
          status: number = 0
          message: string = ""
        }
        ws.on('error', (err: BusinessError) => {
          console.info(`${caseName} findError" + ${JSON.stringify(err)}`);
        });
        ws.on('open', (err: BusinessError, value: Object) => {
          console.info(`${caseName} onopen err is ${JSON.stringify(err)} and value is ${JSON.stringify(value)}`);
          const status: number = (value as OutValue).status;
          expectEqual(status,101);
          ws.send(sendMessage).then((value: boolean) => {
            console.info(`${caseName} send success and value is ${value}`);
            expectFail(`${caseName} send success`);
            done();
            console.info(`${caseName} test end`);
          }).catch((err: BusinessError) => {
            console.info(`${caseName} send fail ${JSON.stringify(err)}`);
            expectEqual(err.code,401);
            done();
            console.info(`${caseName} test end`);
          })
        });
        ws.connect(availableWebSocketAddress, (err: BusinessError, value: boolean) => {
          if (err) {
            console.info(`${caseName} test connect fail ${JSON.stringify(err)}`);
            expectFail(`${caseName} test connect fail`);
            done();
            console.info(`${caseName} test end`);
          } else {
            console.info(`${caseName} test connect success and value is ${value}`);
          }
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    /* *
     * @tc.number: SUB_NetworkMgr_WebSocket_SendPromise_0600
     * @tc.name  : testNetworkMgrWebSocketSendPromise0600
     * @tc.desc  : Sending data through WebSocket connection(no connect)
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrWebSocketSendPromise0600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrWebSocketSendPromise0600';
      console.info(`${caseName} test start`);
      try {
        ws.send('Hello').then((value: boolean) => {
          console.info(`${caseName} send success and value is ${value}`);
          expectFail(`${caseName} send success`);
          done();
          console.info(`${caseName} test end`);
        }).catch((err: BusinessError) => {
          console.info(`${caseName} send fail ${JSON.stringify(err)}`);
          expectEqual(err.code,-1);
          done();
          console.info(`${caseName} test end`);
        })
      } catch (err) {
        console.info(`${caseName} catchError ${JSON.stringify(err)}`);
        expectFail(`${caseName} fail,errInfo->${JSON.stringify(err)}`);
        done();
        console.info(`${caseName} test end`);
      }
    })

    
  });
}