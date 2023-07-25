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
import {describe, it, expect} from 'hypium/index';
import connection from '@ohos.net.connection'
import http from "@ohos.net.http";
import socket from "@ohos.net.socket";

export default function connectionJsunit() {
  describe('connectionTest', function () {
    const TIMEOUT = 100;
    const DELAY = 1000;
    const addressBaidu = "www.baidu.com"
    console.log("************* connection Test start*************");

    it('Telephony_Connection_Request_Socket_0100', 0, function (done) {
      type HttpRequest = http.HttpRequest;
      type TCPSocket = socket.TCPSocket;
      type UDPSocket = socket.UDPSocket;
      test(http.createHttp(), socket.constructTCPSocketInstance(), socket.constructUDPSocketInstance());

      function test(httpRequest: HttpRequest, tcpSocket: TCPSocket, udpSocket: UDPSocket) {
        expect(httpRequest != null).assertTrue();
        expect(tcpSocket != null).assertTrue();
        expect(udpSocket != null).assertTrue();
        done();
      }
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_createNetConnection_0100
     * @tc.name      : createNetConnection
     * @tc.desc      : Create a network connection with optional netSpefifier and timeout.
     */
    it('Telephony_Connection_Connection_createNetConnection_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_createNetConnection_0100 Test start*************");
      try {
        let netSpecifier = undefined;
        connection.createNetConnection(netSpecifier, 5000);
        console.log("Telephony_Connection_Connection_createNetConnection_0100 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_createNetConnection_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0100 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_createNetConnection_0200
     * @tc.name      : createNetConnection
     * @tc.desc      : Create a network connection with optional netSpefifier and timeout.
     */
    it('Telephony_Connection_Connection_createNetConnection_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_createNetConnection_0200 Test start*************");
      try {
        let netSpecifier = undefined;
        connection.createNetConnection(netSpecifier, 3000);
        console.log("Telephony_Connection_Connection_createNetConnection_0200 try success")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_createNetConnection_0200 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0200 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_createNetConnection_0300
     * @tc.name      : createNetConnection
     * @tc.desc      : Create a network connection with optional netSpefifier and timeout.
     */
    it('Telephony_Connection_Connection_createNetConnection_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_createNetConnection_0300 Test start*************");
      try {
        let netSpecifier = undefined;
        connection.createNetConnection(netSpecifier, 8000);
        console.log("Telephony_Connection_Connection_createNetConnection_0300 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_createNetConnection_0300 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0300 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_createNetConnection_0400
     * @tc.name      : createNetConnection
     * @tc.desc      : Create a network connection with optional netSpefifier and timeout.
     */
    it('Telephony_Connection_Connection_createNetConnection_0400', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_createNetConnection_0400 Test start*************");
      try {
        let netSpecifier = {
          netCapabilities: {
            linkUpBandwidthKbps: 1000,
            linkDownBandwidthKbps: 2000,
            bearerTypes: [1],
            networkCap: [0],
          }, bearerPrivateIdentifier: '123'
        }
        connection.createNetConnection(netSpecifier, 5000);
        console.log("Telephony_Connection_Connection_createNetConnection_0400 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_createNetConnection_0400 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0400 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_createNetConnection_0500
     * @tc.name      : createNetConnection
     * @tc.desc      : Create a network connection with optional netSpefifier and timeout.
     */
    it('Telephony_Connection_Connection_createNetConnection_0500', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_createNetConnection_0500 Test start*************");
      try {
        let netSpecifier = {
          netCapabilities: {
            linkUpBandwidthKbps: 0,
            linkDownBandwidthKbps: 0,
            bearerTypes: [0],
            networkCap: [0],
          }, bearerPrivateIdentifier: '123'
        }
        connection.createNetConnection(netSpecifier, 5000);
        console.log("Telephony_Connection_Connection_createNetConnection_0500 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_createNetConnection_0500 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0500 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getDefaultNet_0100
     * @tc.name      : getDefaultNet
     * @tc.desc      : Obtains the data network that is activated by default.
     */
    it('Telephony_Connection_Connection_getDefaultNet_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0100 Test start*************");
      connection.getDefaultNet((error, data) => {
        if (error) {
          console.log("Telephony_Connection_Connection_getDefaultNet_0100 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_Connection_getDefaultNet_0100 getDefaultNet data " + JSON.stringify(data))
        expect(true).assertTrue();
        done();
      });
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0100 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getDefaultNet_0200
     * @tc.name      : getDefaultNet
     * @tc.desc      : Obtains the data network that is activated by default.
     */
    it('Telephony_Connection_Connection_getDefaultNet_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0200 Test start*************");
      connection.getDefaultNet().then((data) => {
        console.log("Telephony_Connection_Connection_getDefaultNet_0200 getDefaultNet data " + JSON.stringify(data))
        expect(true).assertTrue();
        done();
      }).catch((err) => {
        console.log("Telephony_Connection_Connection_getDefaultNet_0200 getDefaultNet err " + JSON.stringify(err))
        expect().assertFail();
        done();
      });
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0200 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getAllNets_0100
     * @tc.name      : getAllNets
     * @tc.desc      : Obtains the list of data networks that are activated.
     */
    it('Telephony_Connection_Connection_getAllNets_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getAllNets_0100 Test start*************");
      connection.getAllNets((error, data) => {
        if (error) {
          console.log("Telephony_Connection_Connection_getAllNets_0100 getAllNets error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_Connection_getAllNets_0100 getAllNets data " + JSON.stringify(data))
        expect(true).assertTrue();
        done();
      });
      console.log("************* Telephony_Connection_Connection_getAllNets_0100 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getAllNets_0200
     * @tc.name      : getAllNets
     * @tc.desc      : Obtains the list of data networks that are activated.
     */
    it('Telephony_Connection_Connection_getAllNets_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getAllNets_0200 Test start*************");
      connection.getAllNets().then((data) => {
        console.log("Telephony_Connection_Connection_getAllNets_0200 getAllNets data " + JSON.stringify(data))
        expect(true).assertTrue();
        done();
      }).catch((err) => {
        console.log("Telephony_Connection_Connection_getAllNets_0200 getAllNets err " + JSON.stringify(err))
        expect().assertFail();
        done();
      });
      console.log("************* Telephony_Connection_Connection_getAllNets_0200 Test end*************");
    });

    // /*
    //  * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0100
    //  * @tc.name      : getConnectionProperties
    //  * @tc.desc      : Queries the connection properties of a network.
    //  */
    // it('Telephony_Connection_Connection_getConnectionProperties_0100', 0, function (done) {
    //   console.log("************* Telephony_Connection_Connection_getConnectionProperties_0100 Test start*************");
    //   connection.getDefaultNet((error, netHandle) => {
    //     if (error) {
    //       console.log("Telephony_Connection_Connection_getConnectionProperties_0100 getDefaultNet error " + JSON.stringify(error))
    //       expect().assertFail();
    //       done();
    //       return;
    //     }
    //     netHandle.netId = undefined;
    //     console.log('Telephony_Connection_Connection_getConnectionProperties_0100 getDefaultNet = ' + JSON.stringify(netHandle));
    //     connection.getConnectionProperties(netHandle, (error, data) => {
    //       if (error) {
    //         console.log("Telephony_Connection_Connection_getConnectionProperties_0100 getConnectionProperties error " + JSON.stringify(error))
    //         expect(true).assertTrue();
    //         done();
    //         return;
    //       }
    //       console.log("Telephony_Connection_Connection_getConnectionProperties_0100 getConnectionProperties data " + JSON.stringify(data))
    //       expect().assertFail();
    //       done();
    //     });
    //   })
    //   console.log("************* Telephony_Connection_Connection_getConnectionProperties_0100 Test end*************");
    // });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0200
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0200 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_getConnectionProperties_0200 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 0;
        console.log('Telephony_Connection_Connection_getConnectionProperties_0200 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getConnectionProperties(netHandle).then((data) => {
          console.log("Telephony_Connection_Connection_getConnectionProperties_0200 getConnectionProperties data " + JSON.stringify(data))
          expect().assertFail();
          done();
        }).catch((err) => {
          console.log("Telephony_Connection_Connection_getConnectionProperties_0200 getConnectionProperties err " + JSON.stringify(err))
          expect(true).assertTrue();
          done();
        });
      })
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0200 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0300
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0300 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_getConnectionProperties_0300 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_getConnectionProperties_0300 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getConnectionProperties(netHandle, (error, data) => {
          if (error) {
            console.log("Telephony_Connection_Connection_getConnectionProperties_0300 getConnectionProperties error " + JSON.stringify(error))
            expect(true).assertTrue();
            done();
            return;
          }
          console.log("Telephony_Connection_Connection_getConnectionProperties_0300 getConnectionProperties data " + JSON.stringify(data))
          expect().assertFail();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0300 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0400
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0400', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0400 Test start*************");
      connection.getAllNets((error, value) => {
        if (error) {
          console.log("Telephony_Connection_Connection_getConnectionProperties_0400 getAllNets error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_Connection_getConnectionProperties_0400 getAllNets value " + JSON.stringify(value))
        if (value = []) {
          expect(true).assertTrue();
          done();
          return;
        } else {
          connection.getConnectionProperties(value[0], (error, value_2) => {
            if (error) {
              console.log(`Telephony_Connection_Connection_getConnectionProperties_0400  get value error: ${JSON.stringify(error)}`);
              expect().assertFail();
              done();
              return;
            }
            console.log("Telephony_Connection_Connection_getConnectionProperties_0400 getConnectionProperties value_2 " + JSON.stringify(value_2))
            expect(true).assertTrue();
            done();
          });
        }
      });
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0400 Test end*************");
    });

    // /*
    //  * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0100
    //  * @tc.name      : getNetCapabilities
    //  * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
    //  */
    // it('Telephony_Connection_Connection_getNetCapabilities_0100', 0, function (done) {
    //   console.log("************* Telephony_Connection_Connection_getNetCapabilities_0100 Test start*************");
    //   connection.getDefaultNet((error, netHandle) => {
    //     if (error) {
    //       console.log("Telephony_Connection_Connection_getNetCapabilities_0100 getDefaultNet error " + JSON.stringify(error))
    //       expect().assertFail();
    //       done();
    //       return;
    //     }
    //     netHandle.netId = undefined;
    //     console.log('Telephony_Connection_Connection_getNetCapabilities_0100 getDefaultNet = ' + JSON.stringify(netHandle));
    //     connection.getNetCapabilities(netHandle, (error, data) => {
    //       if (error) {
    //         console.log("Telephony_Connection_Connection_getNetCapabilities_0100 err" + JSON.stringify(error))
    //         expect(true).assertTrue();
    //         done();
    //         return;
    //       }
    //       console.log("Telephony_Connection_Connection_getNetCapabilities_0100 data" + JSON.stringify(data))
    //       expect().assertFail();
    //       done();
    //     });
    //   })
    //   console.log("************* Telephony_Connection_Connection_getNetCapabilities_0100 Test end*************");
    // });

    /*
     * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0200
     * @tc.name      : getNetCapabilities
     * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
     */
    it('Telephony_Connection_Connection_getNetCapabilities_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0200 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_getNetCapabilities_0200 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_getNetCapabilities_0200 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getNetCapabilities(netHandle, (error, data) => {
          if (error) {
            console.log("Telephony_Connection_Connection_getNetCapabilities_0200 getNetCapabilities error " + JSON.stringify(error))
            expect(true).assertTrue();
            done();
            return;
          }
          console.log("Telephony_Connection_Connection_getNetCapabilities_0200 getNetCapabilities data " + JSON.stringify(data))
          expect().assertFail();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0200 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0300
     * @tc.name      : getNetCapabilities
     * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
     */
    it('Telephony_Connection_Connection_getNetCapabilities_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0300 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_getNetCapabilities_0300 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 0;
        console.log('Telephony_Connection_Connection_getNetCapabilities_0300 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getNetCapabilities(netHandle).then((data) => {
          console.log("Telephony_Connection_Connection_getNetCapabilities_0300 getNetCapabilities data " + JSON.stringify(data))
          expect().assertFail();
          done();
        }).catch((err) => {
          console.log("Telephony_Connection_Connection_getNetCapabilities_0300 getNetCapabilities err " + JSON.stringify(err))
          expect(true).assertTrue();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0300 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0400
     * @tc.name      : getNetCapabilities
     * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
     */
    it('Telephony_Connection_Connection_getNetCapabilities_0400', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0400 Test start*************");
      let caseName = 'Telephony_Connection_Connection_getNetCapabilities_0400';
      connection.getAllNets((error, value) => {
        if (error) {
          console.log(`${caseName}  get data fail: ${error}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${caseName} getAllNets netID value : ${JSON.stringify(value)}`);
        if (value = []) {
          expect(true).assertTrue();
          done();
          return;
        } else {
          connection.getNetCapabilities(value[0], (error, data) => {
            if (error) {
              console.log(`${caseName}  get ID fail: ${error}`);
              expect().assertFail();
              done();
              return;
            } else {
              console.log(`${caseName}  get value success: ${JSON.stringify(data)}`);
              expect(data.networkCap != []).assertTrue();
              done();
            }
          });
        }
      });
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0400 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_hasDefaultNet_0100
         * @tc.name      : hasDefaultNet
         * @tc.desc      : Checks whether the default data network is activated.
         */
    it('Telephony_Connection_Connection_hasDefaultNet_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0100 Test start*************");
      connection.hasDefaultNet((error, data) => {
        if (error) {
          console.log("Telephony_Connection_Connection_hasDefaultNet_0100 hasDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_Connection_hasDefaultNet_0100 hasDefaultNet data " + JSON.stringify(data))
        expect(true).assertTrue();
        done();
      });
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0100 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_hasDefaultNet_0200
         * @tc.name      : hasDefaultNet
         * @tc.desc      : Checks whether the default data network is activated.
         */
    it('Telephony_Connection_Connection_hasDefaultNet_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0200 Test start*************");
      connection.hasDefaultNet().then((activated) => {
        console.log("Telephony_Connection_Connection_hasDefaultNet_0200 hasDefaultNet  activated" + JSON.stringify(activated))
        expect(true).assertTrue();
        done();
      }).catch((error) => {
        console.log("Telephony_Connection_Connection_hasDefaultNet_0200 hasDefaultNet error " + JSON.stringify(error))
        expect().assertFail();
        done();
      })
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0200 Test end*************");
    });

    // /*
    //      * @tc.number    : Telephony_Connection_Connection_reportNetConnected_0100
    //      * @tc.name      : reportNetConnected
    //      * @tc.desc      : Reports the network state is connected.
    //      */
    // it('Telephony_Connection_Connection_reportNetConnected_0100', 0, function (done) {
    //   console.log("************* Telephony_Connection_Connection_reportNetConnected_0100 Test start*************");
    //   connection.getDefaultNet((error, netHandle) => {
    //     if (error) {
    //       console.log("Telephony_Connection_Connection_reportNetConnected_0100 getDefaultNet error " + JSON.stringify(error))
    //       expect().assertFail();
    //       done();
    //       return;
    //     }
    //     netHandle.netId = undefined;
    //     console.log('Telephony_Connection_Connection_reportNetConnected_0100 getDefaultNet = ' + JSON.stringify(netHandle));
    //     connection.reportNetConnected(netHandle, (error, data) => {
    //       if (error) {
    //         console.log("Telephony_Connection_Connection_reportNetConnected_0100 reportNetConnected error " + JSON.stringify(error))
    //         expect(true).assertTrue();
    //         done();
    //         return;
    //       }
    //       console.log("Telephony_Connection_Connection_reportNetConnected_0100 reportNetConnected data " + JSON.stringify(data))
    //       expect().assertFail();
    //       done();
    //     });
    //   });
    //   console.log("************* Telephony_Connection_Connection_reportNetConnected_0100 Test end*************");
    // });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetConnected_0200
         * @tc.name      : reportNetConnected
         * @tc.desc      : Reports the network state is connected.
         */
    it('Telephony_Connection_Connection_reportNetConnected_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0200 Test start*************");

      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_reportNetConnected_0200 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_reportNetConnected_0200 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetConnected(netHandle, (error, data) => {
          if (error) {
            console.log("Telephony_Connection_Connection_reportNetConnected_0200 reportNetConnected error " + JSON.stringify(error))
            expect(true).assertTrue();
            done();
            return;
          }
          console.log("Telephony_Connection_Connection_reportNetConnected_0200 reportNetConnected data " + JSON.stringify(data))
          expect().assertFail();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0200 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetConnected_0300
         * @tc.name      : reportNetConnected
         * @tc.desc      : Reports the network state is connected.
         */
    it('Telephony_Connection_Connection_reportNetConnected_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0300 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_reportNetConnected_0300 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 0;
        console.log('Telephony_Connection_Connection_reportNetConnected_0300 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetConnected(netHandle).then(() => {
          console.log("Telephony_Connection_Connection_reportNetConnected_0300 reportNetConnected success ")
          expect().assertFail();
          done();
        }).catch((err) => {
          console.log("Telephony_Connection_Connection_reportNetConnected_0300 reportNetConnected err " + JSON.stringify(err))
          expect(true).assertTrue();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0300 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetConnected_0400
         * @tc.name      : reportNetConnected
         * @tc.desc      : Reports the network state is connected.
         */
    it('Telephony_Connection_Connection_reportNetConnected_0400', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0400 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_reportNetConnected_0400 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_reportNetConnected_0400 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetConnected(netHandle).then(() => {
          console.log("Telephony_Connection_Connection_reportNetConnected_0400 reportNetConnected success ")
          expect().assertFail();
          done();
        }).catch((err) => {
          console.log("Telephony_Connection_Connection_reportNetConnected_0400 reportNetConnected err " + JSON.stringify(err))
          expect(true).assertTrue();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0400 Test end*************");
    });
    //
    // /*
    //      * @tc.number    : Telephony_Connection_Connection_reportNetDisconnected_0100
    //      * @tc.name      : reportNetDisconnected
    //      * @tc.desc      : Reports the network state is disconnected.
    //      */
    // it('Telephony_Connection_Connection_reportNetDisconnected_0100', 0, function (done) {
    //   console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0100 Test start*************");
    //   connection.getDefaultNet((error, netHandle) => {
    //     if (error) {
    //       console.log("Telephony_Connection_Connection_reportNetDisconnected_0100 getDefaultNet error " + JSON.stringify(error))
    //       expect().assertFail();
    //       done();
    //       return;
    //     }
    //     netHandle.netId = undefined;
    //     console.log('Telephony_Connection_Connection_reportNetDisconnected_0100 getDefaultNet = ' + JSON.stringify(netHandle));
    //     connection.reportNetDisconnected(netHandle, (error, data) => {
    //       if (error) {
    //         console.log("Telephony_Connection_Connection_reportNetDisconnected_0100 reportNetDisconnected error " + JSON.stringify(error))
    //         expect(true).assertTrue();
    //         done();
    //         return;
    //       }
    //       console.log("Telephony_Connection_Connection_reportNetDisconnected_0100 reportNetDisconnected data " + JSON.stringify(data))
    //       expect().assertFail();
    //       done();
    //     });
    //   });
    //   console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0100 Test end*************");
    // });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetDisconnected_0200
         * @tc.name      : reportNetDisconnected
         * @tc.desc      : Reports the network state is disconnected.
         */
    it('Telephony_Connection_Connection_reportNetDisconnected_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0200 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_reportNetDisconnected_0200 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_reportNetDisconnected_0200 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetDisconnected(netHandle, (error, data) => {
          if (error) {
            console.log("Telephony_Connection_Connection_reportNetDisconnected_0200 reportNetDisconnected error " + JSON.stringify(error))
            expect(true).assertTrue();
            done();
            return;
          }
          console.log("Telephony_Connection_Connection_reportNetDisconnected_0200 reportNetDisconnected data " + JSON.stringify(data))
          expect().assertFail();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0200 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetDisconnected_0300
         * @tc.name      : reportNetDisconnected
         * @tc.desc      : Reports the network state is disconnected.
         */
    it('Telephony_Connection_Connection_reportNetDisconnected_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0300 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_reportNetDisconnected_0300 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        netHandle.netId = 0;
        console.log('Telephony_Connection_Connection_reportNetDisconnected_0300 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetDisconnected(netHandle).then(() => {
          console.log("Telephony_Connection_Connection_reportNetDisconnected_0300 reportNetDisconnected success ")
          expect().assertFail();
          done();
        }).catch((err) => {
          console.log("Telephony_Connection_Connection_reportNetDisconnected_0300 reportNetDisconnected err " + JSON.stringify(err))
          expect(true).assertTrue();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0300 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetDisconnected_0400
         * @tc.name      : reportNetDisconnected
         * @tc.desc      : Reports the network state is disconnected.
         */
    it('Telephony_Connection_Connection_reportNetDisconnected_0400', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0400 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_reportNetDisconnected_0400 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log('Telephony_Connection_Connection_reportNetDisconnected_0400 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetDisconnected(netHandle).then(() => {
          console.log("Telephony_Connection_Connection_reportNetDisconnected_0400 reportNetDisconnected success ")
          expect(true).assertTrue();
          done();
        }).catch((err) => {
          console.log("Telephony_Connection_Connection_reportNetDisconnected_0400 reportNetDisconnected err " + JSON.stringify(err))
          expect().assertFail();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0400 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_getAddressesByName_0100
         * @tc.name      : getAddressesByName
         * @tc.desc      : Resolves the host name to obtain all IP addresses based on the default data network.
         */
    it('Telephony_Connection_Connection_getAddressesByName_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0100 Test start*************");
      connection.getAddressesByName('www.test.com', (error, data) => {
        if (error) {
          console.log("Telephony_Connection_Connection_getAddressesByName_0100 getAddressesByName error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_Connection_getAddressesByName_0100 getAddressesByName data " + JSON.stringify(data))
        expect(data != []).assertTrue();
        done();
      });
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0100 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_getAddressesByName_0200
         * @tc.name      : getAddressesByName
         * @tc.desc      : Resolves the host name to obtain all IP addresses based on the default data network.
         */
    it('Telephony_Connection_Connection_getAddressesByName_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0200 Test start*************");
      connection.getAddressesByName('www.test.com').then((data) => {
        console.log("Telephony_Connection_Connection_getAddressesByName_0200 getAddressesByName data " + JSON.stringify(data))
        expect(data != []).assertTrue();
        done();
        return;
      }).catch((error) => {
        console.log("Telephony_Connection_Connection_getAddressesByName_0200 getAddressesByName error " + JSON.stringify(error))
        expect().assertFail();
        done();
      })
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0200 Test end*************");
    });

    /**
     * @tc.number Telephony_Connection_Connection_netAvailable_0100
     * @tc.name netAvailable
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netAvailable_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netAvailable_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.on('netAvailable', function (data) {
          console.log("Telephony_Connection_Connection_netAvailable_0100 netAvailable on  = " + JSON.stringify(data))
        })
        console.log("Telephony_Connection_Connection_netAvailable_0100 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_netAvailable_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_netAvailable_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netBlockStatusChange_0100
     * @tc.name netBlockStatusChange
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netBlockStatusChange_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netBlockStatusChange_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.on('netBlockStatusChange', function (data) {
          console.log("Telephony_Connection_Connection_netBlockStatusChange_0100 netAvailable on  = " + JSON.stringify(data))
        })
        console.log("Telephony_Connection_Connection_netBlockStatusChange_0100 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_netBlockStatusChange_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_netBlockStatusChange_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netCapabilitiesChange_0100
     * @tc.name netCapabilitiesChange
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netCapabilitiesChange_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netCapabilitiesChange_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.on('netCapabilitiesChange', function (data) {
          console.log("Telephony_Connection_Connection_netCapabilitiesChange_0100 netAvailable on  = " + JSON.stringify(data))
        })
        console.log("Telephony_Connection_Connection_netCapabilitiesChange_0100 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_netCapabilitiesChange_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_netCapabilitiesChange_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netConnectionPropertiesChange_0100
     * @tc.name netConnectionPropertiesChange
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netConnectionPropertiesChange_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netConnectionPropertiesChange_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.on('netConnectionPropertiesChange', function (data) {
          console.log("Telephony_Connection_Connection_netConnectionPropertiesChange_0100 netAvailable on  = " + JSON.stringify(data))
        })
        console.log("Telephony_Connection_Connection_netConnectionPropertiesChange_0100 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_netConnectionPropertiesChange_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_netConnectionPropertiesChange_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netLost_0100
     * @tc.name netLost
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netLost_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netLost_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.on('netLost', function (data) {
          console.log("Telephony_Connection_Connection_netLost_0100 netAvailable on  = " + JSON.stringify(data))
        })
        console.log("Telephony_Connection_Connection_netLost_0100 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_netLost_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_netLost_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netUnavailable_0100
     * @tc.name netUnavailable
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netUnavailable_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netUnavailable_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.on('netUnavailable', function (data) {
          console.log("Telephony_Connection_Connection_netUnavailable_0100 netAvailable on  = " + JSON.stringify(data))
        })
        console.log("Telephony_Connection_Connection_netUnavailable_0100 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_netUnavailable_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_netUnavailable_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_NetSpecifier_0100
     * @tc.name NetSpecifier
     * @tc.desc netCapabilities bearerPrivateIdentifier test
     */
    it('Telephony_Connection_Connection_NetSpecifier_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_NetSpecifier_0100 Test start*************");
      try {
        let netSpecifier = {
          netCapabilities: {
            linkUpBandwidthKbps: 1,
            linkDownBandwidthKbps: 2,
            bearerTypes: [0],
            networkCap: [11],
          }, bearerPrivateIdentifier: '123'
        }
        connection.createNetConnection(netSpecifier, TIMEOUT);
        console.log("Telephony_Connection_Connection_NetSpecifier_0100 try success ")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_NetSpecifier_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_NetSpecifier_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_bindSocket_0100
     * @tc.name bindSocket
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_bindSocket_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_bindSocket_0100 Test start*************");
      let tcp = socket.constructTCPSocketInstance();
      tcp.bind({
        address: 'localhost', port: 8080, family: 1
      }, (error, value) => {
        if (error) {
          console.log("Telephony_Connection_Connection_bindSocket_0100 tcp  bind error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_Connection_bindSocket_0100 tcp  bind value " + JSON.stringify(value))
        connection.getDefaultNet().then((handle) => {
          console.log("Telephony_Connection_Connection_bindSocket_0100 getDefaultNet value " + JSON.stringify(handle))
          handle.bindSocket(tcp, (error, value) => {
            if (error) {
              console.log("Telephony_Connection_Connection_bindSocket_0100 bindSocket error " + JSON.stringify(error))
              expect().assertFail();
              done();
              return;
            }
            console.log("Telephony_Connection_Connection_bindSocket_0100 bindSocket value " + JSON.stringify(value))
            expect(true).assertTrue();
            done();
          });
        }).catch((error) => {
          console.log("Telephony_Connection_Connection_bindSocket_0100 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
        });
      })
      console.log("************* Telephony_Connection_Connection_bindSocket_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_bindSocket_0200
     * @tc.name bindSocket
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_bindSocket_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_bindSocket_0200 Test start*************");
      var udp = socket.constructUDPSocketInstance();

      udp.bind({
        address: 'localhost', port: 8080, family: 1
      }, (error, value) => {
        if (error) {
          console.log("Telephony_Connection_Connection_bindSocket_0200 udp  bind error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_Connection_bindSocket_0200 udp  bind value " + JSON.stringify(value))
        connection.getDefaultNet().then((handle) => {
          console.log("Telephony_Connection_Connection_bindSocket_0200 getDefaultNet handle " + JSON.stringify(handle))
          handle.bindSocket(udp).then((data) => {
            console.log("Telephony_Connection_Connection_bindSocket_0200 bindSocket value " + JSON.stringify(data))
            expect(true).assertTrue();
            done();
          }).catch((error) => {
            console.log("Telephony_Connection_Connection_bindSocket_0200 bindSocket error " + JSON.stringify(error))
            expect().assertFail();
            done();
          })
        }).catch((error) => {
          console.log("Telephony_Connection_Connection_bindSocket_0200 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
        });
      })
      console.log("************* Telephony_Connection_Connection_bindSocket_0200 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_NetHandle_getAddressesByName_0100
     * @tc.name getAddressesByName
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_NetHandle_getAddressesByName_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 Test start*************");
      connection.getDefaultNet().then((handle) => {
        handle.getAddressesByName(addressBaidu, (error, value) => {
          if (error) {
            console.log("Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 getAddressesByName error " + JSON.stringify(error))
            expect().assertFail();
            done();
            return;
          }
          console.log("Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 getAddressesByName success " + JSON.stringify(value))
          expect(true).assertTrue();
          done();
        });
      }).catch((error) => {
        console.log("Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 getDefaultNet error " + JSON.stringify(error))
        expect(true).assertTrue();
        done();
      });
      console.log("************* Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_getAddressByName_0100
     * @tc.name getAddressByName
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_getAddressByName_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getAddressByName_0100 Test start*************");
      connection.getDefaultNet().then((handle) => {
        handle.getAddressByName(addressBaidu, (error, value) => {
          if (error) {
            console.log("Telephony_Connection_Connection_getAddressByName_0100 err =" + JSON.stringify(error))
            expect().assertFail();
            done();
            return;
          }
          console.log("Telephony_Connection_Connection_getAddressByName_0100 value =" + JSON.stringify(value))
          expect(true).assertTrue();
          done();
        });
      }).catch((error) => {
        console.log("Telephony_Connection_Connection_getAddressByName_0100 getDefaultNet error " + JSON.stringify(error))
        expect().assertFail();
        done();
        return;
      });
      console.log("************* Telephony_Connection_Connection_getAddressByName_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_linkUpBandwidthKbps_0100
     * @tc.name linkUpBandwidthKbps
     * @tc.desc linkUpBandwidthKbps test
     */
    it('Telephony_Connection_Connection_linkUpBandwidthKbps_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_linkUpBandwidthKbps_0100 Test start*************");
      try {
        let netSpecifier = {
          netCapabilities: {
            linkUpBandwidthKbps: 10,
            linkDownBandwidthKbps: 22,
            bearerTypes: [0],
            networkCap: [11],
          }, bearerPrivateIdentifier: '456'
        }
        connection.createNetConnection(netSpecifier, TIMEOUT);
        console.log("Telephony_Connection_Connection_linkUpBandwidthKbps_0100 try success")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_linkUpBandwidthKbps_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_linkUpBandwidthKbps_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_linkDownBandwidthKbps_0100
     * @tc.name linkDownBandwidthKbps
     * @tc.desc nlinkDownBandwidthKbps test
     */
    it('Telephony_Connection_Connection_linkDownBandwidthKbps_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_linkDownBandwidthKbps_0100 Test start*************");
      try {
        let netSpecifier = {
          netCapabilities: {
            linkUpBandwidthKbps: 44,
            linkDownBandwidthKbps: 55,
            bearerTypes: [1],
            networkCap: [12],
          }, bearerPrivateIdentifier: '789'
        }
        connection.createNetConnection(netSpecifier, TIMEOUT);
        console.log("Telephony_Connection_Connection_linkDownBandwidthKbps_0100 try success")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_linkDownBandwidthKbps_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_linkDownBandwidthKbps_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_networkCap_0100
     * @tc.name networkCap
     * @tc.desc networkCap test
     */
    it('Telephony_Connection_Connection_networkCap_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_networkCap_0100 Test start*************");
      try {
        let netSpecifier = {
          netCapabilities: {
            linkUpBandwidthKbps: 18,
            linkDownBandwidthKbps: 29,
            bearerTypes: [3],
            networkCap: [5],
          }, bearerPrivateIdentifier: '321'
        }
        connection.createNetConnection(netSpecifier, TIMEOUT);
        console.log("Telephony_Connection_Connection_networkCap_0100 try success")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_networkCap_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }

      console.log("************* Telephony_Connection_Connection_networkCap_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_bearerTypes_0100
     * @tc.name bearerTypes
     * @tc.desc bearerTypes test
     */
    it('Telephony_Connection_Connection_bearerTypes_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_bearerTypes_0100 Test start*************");
      try {
        let netSpecifier = {
          netCapabilities: {
            linkUpBandwidthKbps: 41,
            linkDownBandwidthKbps: 62,
            bearerTypes: [1],
            networkCap: [9],
          }, bearerPrivateIdentifier: '876'
        }
        connection.createNetConnection(netSpecifier, TIMEOUT);
        console.log("Telephony_Connection_Connection_bearerTypes_0100 try success")
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.log("Telephony_Connection_Connection_bearerTypes_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_bearerTypes_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_register_0100
     * @tc.name register
     * @tc.desc Receives status change notifications of a specified network.
     */
    it('Telephony_Connection_Connection_register_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_register_0100 Test start*************");
      try {
        let caseName = 'Telephony_Connection_Connection_register_0100';
        let netSpecifier = {
          netCapabilities: {
            linkUpBandwidthKbps: 0,
            linkDownBandwidthKbps: 0,
            bearerTypes: [0],
            networkCap: [0],
          }, bearerPrivateIdentifier: '123'
        }
        let netConn = connection.createNetConnection(netSpecifier, TIMEOUT);
        netConn.register((error) => {
          if (error) {
            console.log(`${caseName} register fail: ${error}`);
            expect().assertFail();
            done();
            return;
          }
          netConn.unregister((error) => {
            if (error) {
              console.log(`${caseName} register fail: ${error}`);
              expect().assertFail();
              done();
              return;
            }
            console.log("Telephony_Connection_Connection_register_0100 try success")
            expect(true).assertTrue();
            done();
          });
        });
      } catch (error) {
        console.log("Telephony_Connection_Connection_register_0100 try error " + JSON.stringify(error))
        expect().assertFail();
        done();
      }
      console.log("************* Telephony_Connection_Connection_register_0100 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_netId_0100
         * @tc.name      : netId
         * @tc.desc      : netId test.
         */
    it('Telephony_Connection_Connection_netId_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netId_0100 Test start*************");
      connection.getDefaultNet((error, data) => {
        if (error) {
          console.log("Telephony_Connection_Connection_netId_0100 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        } else {
          console.log("Telephony_Connection_Connection_netId_0100 getDefaultNet data " + JSON.stringify(data))
          expect(true).assertTrue();
          done();
        }
      });
      console.log("************* Telephony_Connection_Connection_netId_0100 Test end*************");
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_domains_0100
         * @tc.name      : domains
         * @tc.desc      : domains test.
         */
    it('Telephony_Connection_Connection_domains_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_domains_0100 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_Connection_domains_0100 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log('Telephony_Connection_Connection_domains_0100 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getConnectionProperties(netHandle, (error, data) => {
          if (error) {
            console.log("Telephony_Connection_Connection_domains_0100 getConnectionProperties error " + JSON.stringify(error))
            expect().assertFail();
            done();
            return;
          } else {
            console.log("Telephony_Connection_Connection_domains_0100 getConnectionProperties data " + JSON.stringify(data))
            expect(data.domains).assertEqual("");
            done();
          }
        });
      });
      console.log("************* Telephony_Connection_Connection_domains_0100 Test end*************");
    });


    /*
         * @tc.number    : Telephony_Connection_setAppNet_callback_0100
         * @tc.name      : Telephony_Connection_setAppNet_callback_0100
         * @tc.desc      : Telephony_Connection_setAppNet_callback_0100
         */
    it('Telephony_Connection_setAppNet_callback_0100', 0, function (done) {
      console.log("************* Telephony_Connection_setAppNet_callback_0100 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_setAppNet_promise_0100 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_setAppNet_promise_0100 getDefaultNet success " + JSON.stringify(netHandle));
        connection.setAppNet(netHandle, (error, data) => {
          if (error) {
            console.log("Telephony_Connection_setAppNet_promise_0100 setAppNet error " + JSON.stringify(error));
            expect(true).assertFalse();
            done();
            return;
          }
          console.log("Telephony_Connection_setAppNet_promise_0100 setAppNet success " + JSON.stringify(data));
          connection.getAppNet((error, data) => {
            if (error) {
              console.log("Telephony_Connection_setAppNet_promise_0100 getAppNet error " + JSON.stringify(error));
              expect(true).assertFalse();
              done();
              return;
            }
            console.log("Telephony_Connection_setAppNet_promise_0100 getAppNet success " + JSON.stringify(data));
            expect(netHandle.netId == data.netId).assertTrue();
            done();
          })
        });
      })
    });

    /*
         * @tc.number    : Telephony_Connection_setAppNet_promise_0100
         * @tc.name      : Telephony_Connection_setAppNet_promise_0100
         * @tc.desc      : Telephony_Connection_setAppNet_promise_0100
         */
    it('Telephony_Connection_setAppNet_promise_0100', 0, function (done) {
      console.log("************* Telephony_Connection_setAppNet_promise_0100 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        if (error) {
          console.log("Telephony_Connection_setAppNet_promise_0100 getDefaultNet error " + JSON.stringify(error))
          expect().assertFail();
          done();
          return;
        }
        console.log("Telephony_Connection_setAppNet_promise_0100 getDefaultNet success " + JSON.stringify(netHandle));
        connection.setAppNet(netHandle).then((data) => {
          console.log("Telephony_Connection_setAppNet_promise_0100 setAppNet success " + JSON.stringify(data));
          connection.getAppNet().then((data) => {
            console.log("Telephony_Connection_setAppNet_promise_0100 getAppNet success " + JSON.stringify(data));
            expect(netHandle.netId == data.netId).assertTrue();
            done();
          }).catch((error) => {
            console.log("Telephony_Connection_setAppNet_promise_0100 getAppNet error " + JSON.stringify(error));
            expect(true).assertFalse();
            done();
          })
        }).catch((error) => {
          console.log("Telephony_Connection_setAppNet_promise_0100 setAppNet error " + JSON.stringify(error));
          expect(true).assertFalse();
          done();
        })
      })
    });

    console.log("************* connection Test end*************");
  })
}
