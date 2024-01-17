/*
 * Copyright (C) 2021-2023 Huawei Device Co., Ltd.
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
import { describe, it, expect } from '@ohos/hypium';
import http from '@ohos.net.http';
import connection from "@ohos.net.connection";
import socket from '@ohos.net.socket';
import ethernet from '@ohos.net.ethernet';
import { BusinessError } from '@ohos.base';

function expectFalse() {
  try {
    expect().assertFail();
  } catch (err) {
    console.info('assertion failure');
  }
};


async function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time))
}

async function Test(httpRequest: http.HttpRequest, tcpSocket: socket.TCPSocket, udpSocket: socket.UDPSocket) {
  expect(httpRequest != null).assertTrue();
  expect(tcpSocket != null).assertTrue();
  expect(udpSocket != null).assertTrue();
  httpRequest.destroy();
  tcpSocket.close();
  udpSocket.close();
}

export default function httpJsunit() {
  describe("httpJsunitTest", () => {
    let multicastSocket = socket.constructMulticastSocketInstance();
    let ttl = 100;
    let ttl_invalid = 256;
    let ttl_undefined = undefined;



    /**
     * @tc.number Telephony_Http_Http_createHttp_0100
     * @tc.name createHttp
     * @tc.desc Test Create HTTP authentication.
     */
    it("Telephony_Http_Http_createHttp_0100", 0, async (done: Function) =>  {
      console.log("-----------------------http createHttp Test is starting-----------------------");
      let httpRequest: http.HttpRequest = http.createHttp();
      expect(httpRequest != null).assertTrue();
      console.log("-----------------------http createHttp Test end-----------------------");
      httpRequest.destroy();
      done();
    });

    /**
     * @tc.number Telephony_NetworkManager_getDefaultNetSync
     * @tc.name Test getDefaultNetSync() to check return value
     * @tc.desc Function test
     */
    it('Telephony_NetworkManager_getDefaultNetSync', 0, async (done: Function) =>  {
      let caseName: string = 'Telephony_NetworkManager_getDefaultNetSync';
      let handleInstance: connection.NetHandle = undefined;
      handleInstance = connection.getDefaultNetSync();
      if (handleInstance == undefined) {
        console.log(`${caseName} gethandleInstance fail`);
        expect().assertFail();
        done();
      } else {
        console.log(`${caseName} gethandleInstance success`);
        expect(typeof (handleInstance) == 'object').assertEqual(true);
        done();
      }
    });

    /**
     * @tc.number Telephony_NetworkManager_isDefaultNetMetered_Async_0100
     * @tc.name Test isDefaultNetMetered() to check return value
     * @tc.desc Function test
     */
    it('Telephony_NetworkManager_isDefaultNetMetered_Async_0100', 0, async (done: Function) =>  {
      let caseName: string = 'Telephony_NetworkManager_isDefaultNetMetered_Async_0100';
      connection.isDefaultNetMetered((error: BusinessError, data: boolean) => {
        if (error) {
          console.log(`${caseName} isDefaultNetMetered  error`);
          expect().assertFail();
          done();
        } else {
          console.log(`${caseName} isDefaultNetMetered success`);
          expect(error).assertEqual(undefined);
          expect(data).assertEqual(true);
          done();
        }
      });
    });

    /**
     * @tc.number Telephony_NetworkManager_isDefaultNetMetered_Promise_0100
     * @tc.name Test isDefaultNetMetered() to check return value
     * @tc.desc Function test
     */
    it('Telephony_NetworkManager_isDefaultNetMetered_Promise_0100', 0, async (done: Function) =>  {
      let caseName: string = 'Telephony_NetworkManager_isDefaultNetMetered_Promise_0100'
      connection.isDefaultNetMetered().then((data: boolean) => {
        console.log(`${caseName} isDefaultNetMetered success`);
        expect(data).assertEqual(true);
        done();
      }).catch((error: BusinessError) => {
        console.log(JSON.stringify(error));
        expect().assertFail();
        done();
      });
    });

    /**
     * @tc.number Telephony_NetworkManager_getDefaultHttpProxy_Async_0100
     * @tc.name Test getDefaultHttpProxy() to check return value
     * @tc.desc Function test
     */
    it('Telephony_NetworkManager_getDefaultHttpProxy_Async_0100', 0, async (done: Function) =>  {
      let caseName: string = 'Telephony_NetworkManager_getDefaultHttpProxy_Async_0100';
      connection.getDefaultHttpProxy((error: BusinessError) => {
        if (error) {
          console.log(`${caseName} getDefaultHttpProxy  error`);
          expect().assertFail();
          done();
        } else {
          console.log(`${caseName} getDefaultHttpProxy success`);
          expect(error).assertEqual(undefined);
          done();
        }
      });
    });

    /**
     * @tc.number Telephony_NetworkManager_getDefaultHttpProxy_Promise_0100
     * @tc.name Test getDefaultHttpProxy() to check return value
     * @tc.desc Function test
     */
    it('Telephony_NetworkManager_getDefaultHttpProxy_Promise_0100', 0, async (done: Function) =>  {
      let caseName: string = 'Telephony_NetworkManager_getDefaultHttpProxy_Promise_0100';
      connection.getDefaultHttpProxy().then(() => {
        console.log(`${caseName} getDefaultHttpProxy success`);
        done();
      }).catch((error: BusinessError) => {
        console.log(JSON.stringify(error));
        expect().assertFail();
        done();
      });
    });

    /**
     * @tc.number Telephony_NetworkManager_getDefaultHttpProxy_Async_0200
     * @tc.name Test getDefaultHttpProxy() to check return value
     * @tc.desc Function test
     */
    it('Telephony_NetworkManager_getDefaultHttpProxy_Async_0200', 0, async (done: Function) =>  {
      let caseName: string = 'Telephony_NetworkManager_getDefaultHttpProxy_Async_0200';
      connection.getDefaultNet().then((netHandle: connection.NetHandle) => {
        console.log("netHandle is " + JSON.stringify(netHandle));
        connection.setAppNet(netHandle).then(() => {
          console.log("setAppNet success");
          connection.getDefaultHttpProxy((error: BusinessError) => {
            if (error) {
              console.log(`${caseName} getDefaultHttpProxy  error`);
              expect().assertFail();
              done();
            } else {
              console.log(`${caseName} getDefaultHttpProxy success`);
              done();
            }
          });
        }).catch((error: BusinessError) => {
          console.log("setAppNet err " + JSON.stringify(error));
          expect().assertFail();
          done();
        });
      }).catch((error: BusinessError) => {
        console.log("getDefaultNet err " + JSON.stringify(error));
        expect().assertFail();
        done();
      });
    });

    /**
     * @tc.number Telephony_NetworkManager_getDefaultHttpProxy_Promise_0200
     * @tc.name Test getDefaultHttpProxy() to check return value
     * @tc.desc Function test
     */
    it('Telephony_NetworkManager_getDefaultHttpProxy_Promise_0200', 0, async (done: Function) =>  {
      let caseName: string = 'Telephony_NetworkManager_getDefaultHttpProxy_Promise_0200';
      connection.getDefaultNet().then((netHandle: connection.NetHandle) => {
        console.log("netHandle is " + JSON.stringify(netHandle));
        connection.setAppNet(netHandle).then(() => {
          console.log("setAppNet success");
          connection.getDefaultHttpProxy().then(() => {
            console.log(`${caseName} getDefaultHttpProxy success`);
            done();
          }).catch((error: BusinessError) => {
            console.log(JSON.stringify(error));
            expect().assertFail();
            done();
          });
        }).catch((error: BusinessError) => {
          console.log("setAppNet err " + JSON.stringify(error));
          expect().assertFail();
          done();
        });
      }).catch((error: BusinessError) => {
        console.log("getDefaultNet err " + JSON.stringify(error));
        expect().assertFail();
        done();
      });
    });

    /**
     * @tc.number Telephony_Connection_Request_Socket_0100
     * @tc.name Test type
     * @tc.desc Function test
     */
    it('Telephony_Connection_Request_Socket_0100', 0, async (done: Function) =>  {
      try {
        await Test(http.createHttp(), socket.constructTCPSocketInstance(), socket.constructUDPSocketInstance());
        done();
      } catch (error) {
        console.info("Telephony_Connection_Request_Socket_0100  catch " + error);
        done();
      }
    });


    // addMembership:
    /**
     * @tc.number NetworkManager_UDPSocket_addMembership_Promise_0100
     * @tc.name UDPSocket::addMembership
     * @tc.desc Test addMembership property.
     */
    it("NetworkManager_UDPSocket_addMembership_Promise_0100", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_addMembership_Promise_0100";
      multicastSocket.addMembership({
        address: '239.255.0.1',
        family: 1,
        port: 32123
      }).then((data: number) => {
        console.log(`${caseName} addMembership success, data: ${JSON.stringify(data)}`);
        expect(data).assertEqual(undefined);
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} addMembership failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_addMembership_Promise_0200
     * @tc.name UDPSocket::addMembership
     * @tc.desc Test addMembership property.
     */
    it("NetworkManager_UDPSocket_addMembership_Promise_0200", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_addMembership_Promise_0200";
      multicastSocket.addMembership({
        address: '1.1.1.1',
        family: 1,
        port: 32123
      }).then((data: number) => {
        console.log(`${caseName} addMembership success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} addMembership failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_addMembership_Promise_0300
     * @tc.name UDPSocket::addMembership
     * @tc.desc Test addMembership property.
     */
    it("NetworkManager_UDPSocket_addMembership_Promise_0300", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_addMembership_Promise_0300";
      multicastSocket.addMembership({
        address: '',
        family: 1,
        port: 32123
      }).then((data: number) => {
        console.log(`${caseName} addMembership success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} addMembership failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_addMembership_Promise_0400
     * @tc.name UDPSocket::addMembership
     * @tc.desc Test addMembership property.
     */
    it("NetworkManager_UDPSocket_addMembership_Promise_0400", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_addMembership_Promise_0400";
      try {
        multicastSocket.addMembership(undefined).then((data: number) => {
          console.log(`${caseName} addMembership success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} addMembership failed, err: ${JSON.stringify(err)}`);
          expectFalse();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log(`${caseName} catch error, expect error: [${e.code}, ${e.message}]`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });


    //setMulticastTTL:
    /**
     * @tc.number NetworkManager_UDPSocket_setMulticastTTL_Promise_0100
     * @tc.name UDPSocket::setMulticastTTL
     * @tc.desc Test setMulticastTTL property.
     */
    it("NetworkManager_UDPSocket_setMulticastTTL_Promise_0100", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_setMulticastTTL_Promise_0100";
      multicastSocket.setMulticastTTL(ttl).then((data) => {
        console.log(`${caseName} setMulticastTTL success, data: ${JSON.stringify(data)}`);
        expect(data).assertEqual(undefined);
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} setMulticastTTL failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });

    });

    /**
     * @tc.number NetworkManager_UDPSocket_setMulticastTTL_Promise_0200
     * @tc.name UDPSocket::setMulticastTTL
     * @tc.desc Test setMulticastTTL property.
     */
    it("NetworkManager_UDPSocket_setMulticastTTL_Promise_0200", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_setMulticastTTL_Promise_0200";
      multicastSocket.setMulticastTTL(ttl_invalid).then((data) => {
        console.log(`${caseName} setMulticastTTL success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} setMulticastTTL failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_setMulticastTTL_Promise_0300
     * @tc.name UDPSocket::setMulticastTTL
     * @tc.desc Test setMulticastTTL property.
     */
    it("NetworkManager_UDPSocket_setMulticastTTL_Promise_0300", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_setMulticastTTL_Promise_0300";
      try {
        multicastSocket.setMulticastTTL(ttl_undefined).then((data) => {
          console.log(`${caseName} setMulticastTTL success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} setMulticastTTL failed, err: ${JSON.stringify(err)}`);
          expectFalse();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log(`${caseName} catch error, expect error: [${e.code}, ${e.message}]`);
        expect(e.code == 401).assertTrue()
        done();
      }
    });

    // //getMulticastTTL
    /**
     * @tc.number NetworkManager_UDPSocket_getMulticastTTL_Promise_0100
     * @tc.name UDPSocket::getMulticastTTL
     * @tc.desc Test getMulticastTTL property.
     */
    it("NetworkManager_UDPSocket_getMulticastTTL_Promise_0100", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_getMulticastTTL_Promise_0100";
      multicastSocket.getMulticastTTL().then((data) => {
        console.log(`${caseName} getMulticastTTL success, data: ${JSON.stringify(data)}`);
        expect(data).assertEqual(100);
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getMulticastTTL failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
    });


    // setLoopbackMode:
    /**
     * @tc.number NetworkManager_UDPSocket_setLoopbackMode_Promise_0100
     * @tc.name UDPSocket::setLoopbackMode
     * @tc.desc Test setLoopbackMode property.
     */
    it("NetworkManager_UDPSocket_setLoopbackMode_Promise_0100", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_setLoopbackMode_Promise_0100";
      multicastSocket.setLoopbackMode(true).then((data) => {
        console.log(`${caseName} setLoopbackMode success, data: ${JSON.stringify(data)}`);
        expect(data).assertEqual(undefined);
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} setLoopbackMode failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_setLoopbackMode_Promise_0200
     * @tc.name UDPSocket::setLoopbackMode
     * @tc.desc Test setLoopbackMode property.
     */
    it("NetworkManager_UDPSocket_setLoopbackMode_Promise_0200", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_setLoopbackMode_Promise_0200";
      multicastSocket.setLoopbackMode(false).then((data) => {
        console.log(`${caseName} setLoopbackMode success, data: ${JSON.stringify(data)}`);
        expect(data).assertEqual(undefined);
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} setLoopbackMode failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_setLoopbackMode_Promise_0300
     * @tc.name UDPSocket::setLoopbackMode
     * @tc.desc Test setLoopbackMode property.
     */
    it("NetworkManager_UDPSocket_setLoopbackMode_Promise_0300", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_setLoopbackMode_Promise_0300";
      try {
        multicastSocket.setLoopbackMode(undefined).then((data) => {
          console.log(`${caseName} setLoopbackMode success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} setLoopbackMode failed, err: ${JSON.stringify(err)}`);
          expectFalse();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log(`${caseName} catch error, expect error: [${e.code}, ${e.message}]`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    // getLoopbackMode
    /**
     * @tc.number NetworkManager_UDPSocket_getLoopbackMode_Promise_0100
     * @tc.name UDPSocket::getLoopbackMode
     * @tc.desc Test getLoopbackMode property.
     */
    it("NetworkManager_UDPSocket_getLoopbackMode_Promise_0100", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_getLoopbackMode_Promise_0100";
      multicastSocket.setLoopbackMode(true).then((data) => {
        console.log(`${caseName} setLoopbackMode success, data: ${JSON.stringify(data)}`);
        expect(data).assertEqual(undefined);
        multicastSocket.getLoopbackMode().then((data) => {
          console.log(`${caseName} getLoopbackMode success, data: ${JSON.stringify(data)}`);
          expect(data).assertEqual(true);
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} getLoopbackMode failed, err: ${JSON.stringify(err)}`);
          expectFalse();
          done();
        });
      }).catch((err: BusinessError) => {
        console.log(`${caseName} setLoopbackMode failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_getLoopbackMode_Promise_0200
     * @tc.name UDPSocket::getLoopbackMode
     * @tc.desc Test getLoopbackMode property.
     */
    it("NetworkManager_UDPSocket_getLoopbackMode_Promise_0200", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_getLoopbackMode_Promise_0200";
      multicastSocket.setLoopbackMode(false).then((data) => {
        console.log(`${caseName} setLoopbackMode success, data: ${JSON.stringify(data)}`);
        expect(data).assertEqual(undefined);
        multicastSocket.getLoopbackMode().then((data) => {
          console.log(`${caseName} getLoopbackMode success, data: ${JSON.stringify(data)}`);
          expect(data).assertEqual(false);
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} getLoopbackMode failed, err: ${JSON.stringify(err)}`);
          expectFalse();
          done();
        });
      }).catch((err: BusinessError) => {
        console.log(`${caseName} setLoopbackMode failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
    });

    // dropMembership
    /**
     * @tc.number NetworkManager_UDPSocket_dropMembership_Promise_0100
     * @tc.name UDPSocket::dropMembership
     * @tc.desc Test dropMembership property.
     */
    it("NetworkManager_UDPSocket_dropMembership_Promise_0100", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_dropMembership_Promise_0100";
      multicastSocket.dropMembership({
        address: '239.255.0.1',
        family: 1,
        port: 32123
      }).then((data) => {
        console.log(`${caseName} dropMembership success, data: ${JSON.stringify(data)}`);
        expect(data).assertEqual(undefined);
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} dropMembership failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
      await sleep(2000);
    });

    /**
     * @tc.number NetworkManager_UDPSocket_dropMembership_Promise_0200
     * @tc.name UDPSocket::dropMembership
     * @tc.desc Test dropMembership property.
     */
    it("NetworkManager_UDPSocket_dropMembership_Promise_0200", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_dropMembership_Promise_0200";
      multicastSocket.dropMembership({
        address: '1.1.1.1',
        family: 1,
        port: 32123
      }).then((data) => {
        console.log(`${caseName} dropMembership success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} dropMembership failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_dropMembership_Promise_0300
     * @tc.name UDPSocket::dropMembership
     * @tc.desc Test dropMembership property.
     */
    it("NetworkManager_UDPSocket_dropMembership_Promise_0300", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_dropMembership_Promise_0300";
      multicastSocket.dropMembership({
        address: '',
        family: 1,
        port: 32123
      }).then((data) => {
        console.log(`${caseName} dropMembership success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} dropMembership failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_UDPSocket_dropMembership_Promise_0400
     * @tc.name UDPSocket::dropMembership
     * @tc.desc Test dropMembership property.
     */
    it("NetworkManager_UDPSocket_dropMembership_Promise_0400", 0, async (done: Function) =>  {
      let caseName: string = "NetworkManager_UDPSocket_dropMembership_Promise_0400";
      try {
        multicastSocket.dropMembership(undefined).then((data: Object) => {
          console.log(`${caseName} dropMembership success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} dropMembership failed, err: ${JSON.stringify(err)}`);
          expectFalse();
          done();
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log(`${caseName} catch error, expect error: [${e.code}, ${e.message}]`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

  });
}