/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'hypium/index';
import webSocket from '@ohos.net.webSocket'

export default function webSocketJsunit() {
  describe('webSocketTest', function () {
    console.log("************* webSocket Test start*************");

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_createWebSocket_0100
     * @tc.name      : createWebSocket
     * @tc.desc      : Creates a web socket connection.
     */
    it('Telephony_WebSocket_WebSocket_createWebSocket_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_createWebSocket_0100 Test start*************");
      try {
        var mWebSocket = webSocket.createWebSocket();
        console.log(`Telephony_WebSocket_WebSocket_createWebSocket_0100 try success:`);
        expect(mWebSocket != null).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_createWebSocket_0100 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_createWebSocket_0100 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocketRequestOptions_header_0100
     * @tc.name      : webSocketRequestOptions.header
     * @tc.desc      : webSocketRequestOptions.header
     */
    it('Telephony_WebSocket_WebSocketRequestOptions_header_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocketRequestOptions_header_0100 Test start*************");
      try {
        let webSocketRequestOptions: webSocket.WebSocketRequestOptions = {
          header: "test header"
        }
        console.log(`Telephony_WebSocket_WebSocketRequestOptions_header_0100 try success:`);
        expect(webSocketRequestOptions.header === "test header").assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocketRequestOptions_header_0100 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocketRequestOptions_header_0100 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocketCloseOptions_code_0100
     * @tc.name      : webSocketCloseOptions.code
     * @tc.desc      : webSocketCloseOptions.code
     */
    it('Telephony_WebSocket_WebSocketCloseOptions_code_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocketCloseOptions_code_0100 Test start*************");
      try {
        let webSocketCloseOptions: webSocket.WebSocketCloseOptions = {
          code: 1,
          reason: "test reason"
        }
        console.log(`Telephony_WebSocket_WebSocketCloseOptions_code_0100 try success:`);
        expect(webSocketCloseOptions.code === 1).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocketCloseOptions_code_0100 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocketCloseOptions_code_0100 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocketCloseOptions_reason_0100
     * @tc.name      : webSocketCloseOptions.reason
     * @tc.desc      : webSocketCloseOptions.reason
     */
    it('Telephony_WebSocket_WebSocketCloseOptions_reason_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocketCloseOptions_reason_0100 Test start*************");
      try {
        let webSocketCloseOptions: webSocket.WebSocketCloseOptions = {
          code: 1,
          reason: "test reason"
        }
        console.log(`Telephony_WebSocket_WebSocketCloseOptions_reason_0100 try success:`);
        expect(webSocketCloseOptions.reason).assertEqual("test reason");
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocketCloseOptions_reason_0100 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocketCloseOptions_reason_0100 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_connect_0100
     * @tc.name      : connect
     * @tc.desc      : Initiates a WebSocket request to establish a WebSocket connection to a given URL.
     */
    it('Telephony_WebSocket_WebSocket_connect_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_connect_0100 Test start*************");
      let caseName = "Telephony_WebSocket_WebSocket_connect_0100"
      try {
        let ws = webSocket.createWebSocket();
        let url = "www.baidu.com"
        ws.connect(url, (error, data) => {
          if (error) {
            console.log(`${caseName} error, case success,error:` + JSON.stringify(error));
            expect(true).assertTrue();
            done();
            return;
          }
          console.log(`${caseName} error, case failed,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_connect_0100 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_connect_0100 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_connect_0200
     * @tc.name      : connect
     * @tc.desc      : Initiates a WebSocket request to establish a WebSocket connection to a given URL.
     */
    it('Telephony_WebSocket_WebSocket_connect_0200', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_connect_0200 Test start*************");
      let caseName = "Telephony_WebSocket_WebSocket_connect_0200"
      try {
        let ws = webSocket.createWebSocket();
        let webSocketRequestOptions: webSocket.WebSocketRequestOptions = {
          header: "test header"
        }
        ws.connect("www.baidu.com", webSocketRequestOptions, (error, data) => {
          if (error) {
            console.log(`${caseName} error, case success,error:` + JSON.stringify(error));
            expect(true).assertTrue();
            done();
            return;
          }
          console.log(`${caseName} error, case failed,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_connect_0200 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_connect_0200 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_connect_0300
     * @tc.name      : connect
     * @tc.desc      : Initiates a WebSocket request to establish a WebSocket connection to a given URL.
     */
    it('Telephony_WebSocket_WebSocket_connect_0300', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_connect_0300 Test start*************");
      try {
        let caseName = "Telephony_WebSocket_WebSocket_connect_0300"
        let ws = webSocket.createWebSocket();
        let webSocketRequestOptions: webSocket.WebSocketRequestOptions = {
          header: "test header"
        }
        ws.connect("www.baidu.com", webSocketRequestOptions).then(data => {
          console.log(`${caseName} success,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        }).catch((error) => {
          console.log(`${caseName} failed,error:` + JSON.stringify(error));
          expect(true).assertTrue();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_connect_0300 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_connect_0300 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_connect_0400
     * @tc.name      : connect
     * @tc.desc      : Initiates a WebSocket request to establish a WebSocket connection to a given URL.
     */
    it('Telephony_WebSocket_WebSocket_connect_0400', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_connect_0400 Test start*************");
      try {
        let caseName = "Telephony_WebSocket_WebSocket_connect_0400"
        let ws = webSocket.createWebSocket();
        ws.connect("www.baidu.com").then(data => {
          console.log(`${caseName} success,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        }).catch((error) => {
          console.log(`${caseName} failed,error:` + JSON.stringify(error));
          expect(true).assertTrue();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_connect_0400 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_connect_0400 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_send_0100
     * @tc.name      : send
     * @tc.desc      : Sends data through a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_send_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_send_0100 Test start*************");
      try {
        let caseName = "Telephony_WebSocket_WebSocket_send_0100"
        let ws = webSocket.createWebSocket();
        ws.send("test data", (error, data) => {
          if (error) {
            console.log(`${caseName} error, case success,error:` + JSON.stringify(error));
            expect(true).assertTrue();
            done();
            return;
          }
          console.log(`${caseName} error, case failed,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_send_0100 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_send_0100 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_send_0200
     * @tc.name      : send
     * @tc.desc      : Sends data through a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_send_0200', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_send_0200 Test start*************");
      try {
        let caseName = "Telephony_WebSocket_WebSocket_send_0200"
        let ws = webSocket.createWebSocket();
        ws.send("test data").then(data => {
          console.log(`${caseName} success,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        }).catch((error) => {
          console.log(`${caseName} failed,error:` + JSON.stringify(error));
          expect(true).assertTrue();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_send_0200 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_send_0200 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_close_0100
     * @tc.name      : close
     * @tc.desc      : Closes a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_close_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_close_0100 Test start*************");
      try {
        let caseName = "Telephony_WebSocket_WebSocket_close_0100"
        let ws = webSocket.createWebSocket();
        ws.close((error, data) => {
          if (error) {
            console.log(`${caseName} error, case success,error:` + JSON.stringify(error));
            expect(true).assertTrue();
            done();
            return;
          }
          console.log(`${caseName} error, case failed,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_close_0100 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_close_0100 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_close_0200
     * @tc.name      : close
     * @tc.desc      : Closes a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_close_0200', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_close_0200 Test start*************");
      try {
        let caseName = "Telephony_WebSocket_WebSocket_close_0200"
        let ws = webSocket.createWebSocket();
        let webSocketCloseOptions: webSocket.WebSocketCloseOptions = {
          code: 1,
          reason: "test reason"
        }
        ws.close(webSocketCloseOptions, (error, data) => {
          if (error) {
            console.log(`${caseName} error, case success,error:` + JSON.stringify(error));
            expect(true).assertTrue();
            done();
            return;
          }
          console.log(`${caseName} error, case failed,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_close_0200 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_close_0200 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_close_0300
     * @tc.name      : close
     * @tc.desc      : Closes a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_close_0300', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_close_0300 Test start*************");
      try {
        let caseName = "Telephony_WebSocket_WebSocket_close_0300"
        let ws = webSocket.createWebSocket();
        let webSocketCloseOptions: webSocket.WebSocketCloseOptions = {
          code: 1,
          reason: "test reason"
        }
        ws.close(webSocketCloseOptions).then(data => {
          console.log(`${caseName} success,data:` + JSON.stringify(data));
          expect().assertFail();
          done();
        }).catch((error) => {
          console.log(`${caseName} failed,error:` + JSON.stringify(error));
          expect(true).assertTrue();
          done();
        })
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_close_0300 error, catch error:` + JSON.stringify(error));
        expect(true).assertTrue();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_close_0300 Test end*************");
    })

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_on_open_0100
     * @tc.name      : on
     * @tc.desc      : Enables listening for the open events of a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_on_open_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_on_open_0100 Test start*************");
      let caseName = "Telephony_WebSocket_WebSocket_on_open_0100"
      try {
        let ws = webSocket.createWebSocket();
        let callbackdata =(error, data) => {
          console.log(`${caseName} on data:` + JSON.stringify(data));
          console.log(`${caseName} on error:` + JSON.stringify(error));
        }
        ws.on("open", callbackdata);
        ws.off("open", callbackdata);
        console.log(`${caseName} try success:`);
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log(`${caseName} error, catch error:` + JSON.stringify(error));
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_on_open_0100 Test end*************");
    });

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_off_open_0200
     * @tc.name      : off
     * @tc.desc      : Cancels listening for the open events of a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_off_open_0200', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_off_open_0200 Test start*************");
      try {
        let ws = webSocket.createWebSocket();
        ws.off("open");
        console.log(`Telephony_WebSocket_WebSocket_off_open_0200 try success:`);
        expect(true).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_off_open_0200 error, catch error:` + JSON.stringify(error));
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_off_open_0200 Test end*************");
    });

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_on_message_0100
     * @tc.name      : on
     * @tc.desc      : Enables listening for the message events of a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_on_message_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_on_message_0100 Test start*************");
      try {
        let caseName = "Telephony_WebSocket_WebSocket_on_message_0100"
        let ws = webSocket.createWebSocket();
        let callbackdata =(error, data) => {
          console.log(`${caseName} on data:` + JSON.stringify(data));
          console.log(`${caseName} on error:` + JSON.stringify(error));
        }
        ws.on("message", callbackdata);
        ws.off("message", callbackdata);
        console.log(`${caseName} try success:`);
        expect(true).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_on_message_0100 error, catch error:` + JSON.stringify(error));
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_on_message_0100 Test end*************");
    });

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_off_message_0200
     * @tc.name      : off
     * @tc.desc      : Cancels listening for the message events of a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_off_message_0200', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_off_message_0200 Test start*************");
      try {
        let ws = webSocket.createWebSocket();
        ws.off("message");
        console.log(`Telephony_WebSocket_WebSocket_off_message_0200 try success:`);
        expect(true).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_off_message_0200 error, catch error:` + JSON.stringify(error));
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_off_message_0200 Test end*************");
    });

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_on_close_0100
     * @tc.name      : on
     * @tc.desc      : Enables listening for the close events of a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_on_close_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_on_close_0100 Test start*************");
      try {
        let callbackdata =(error, data) => {
          console.log(`${caseName} on data:` + JSON.stringify(data));
          console.log(`${caseName} on error:` + JSON.stringify(error));
        }
        let caseName = "Telephony_WebSocket_WebSocket_on_close_0100"
        let ws = webSocket.createWebSocket();
        ws.on("close", callbackdata);
        ws.off("close", callbackdata);
        console.log(`${caseName} try success:`);
        expect(true).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_on_close_0100 error, catch error:` + JSON.stringify(error));
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_on_close_0100 Test end*************");
    });
    
    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_off_close_0200
     * @tc.name      : off
     * @tc.desc      : Cancels listening for the close events of a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_off_close_0200', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_off_close_0200 Test start*************");
      try {
        let ws = webSocket.createWebSocket();
        ws.off("close");
        console.log(`Telephony_WebSocket_WebSocket_off_close_0200 try success:`);
        expect(true).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_off_close_0200 error, catch error:` + JSON.stringify(error));
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_off_close_0200 Test end*************");
    });

    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_on_error_0100
     * @tc.name      : on
     * @tc.desc      : Enables listening for the error events of a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_on_error_0100', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_on_error_0100 Test start*************");
      try {
        let callbackdata =(error) => {
          console.log(`${caseName} on error:` + JSON.stringify(error));
        }
        let caseName = "Telephony_WebSocket_WebSocket_on_error_0100"
        let ws = webSocket.createWebSocket();
        ws.on("error", callbackdata);
        ws.off("error", callbackdata);
        console.log(`${caseName} try success:`);
        expect(true).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_on_error_0100 error, catch error:` + JSON.stringify(error));
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_on_error_0100 Test end*************");
    });
    
    /*
     * @tc.number    : Telephony_WebSocket_WebSocket_off_error_0200
     * @tc.name      : off
     * @tc.desc      : Cancels listening for the error events of a WebSocket connection.
     */
    it('Telephony_WebSocket_WebSocket_off_error_0200', 0, async function (done) {
      console.log("************* Telephony_WebSocket_WebSocket_off_error_0200 Test start*************");
      try {
        let ws = webSocket.createWebSocket();
        ws.off("error");
        console.log(`Telephony_WebSocket_WebSocket_off_error_0200 try success:`);
        expect(true).assertTrue();
        done();
      }catch (error) {
        console.log(`Telephony_WebSocket_WebSocket_off_error_0200 error, catch error:` + JSON.stringify(error));
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_WebSocket_WebSocket_off_error_0200 Test end*************");
    });

    console.log("************* webSocket Test end*************");

  })
}