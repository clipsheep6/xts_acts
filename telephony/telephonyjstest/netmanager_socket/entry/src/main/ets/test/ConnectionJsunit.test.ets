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
    const addressBaidu = "https://www.baidu.com/"
    console.log("************* connection Test start*************");

    it('Telephony_Connection_Request_Socket_0100', 0, function (done) {
      type HttpRequest = http.HttpRequest
      ;
      type TCPSocket = socket.TCPSocket
      ;
      type UDPSocket = socket.UDPSocket
      ;
      test(http.createHttp(),socket.constructTCPSocketInstance(),socket.constructUDPSocketInstance());
      function test(httpRequest:HttpRequest,tcpSocket:TCPSocket,udpSocket:UDPSocket){
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
        expect(true).assertTrue();
      } catch (error) {
        expect().assertFail();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0100 Test end*************");
      done();
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
        expect(true).assertTrue();
      } catch (error) {
        expect().assertFail();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0200 Test end*************");
      done();
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
        expect(true).assertTrue();
      } catch (error) {
        expect().assertFail();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0300 Test end*************");
      done();
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
        expect(true).assertTrue();
      } catch (error) {
        expect().assertFail();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0400 Test end*************");
      done();
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
        expect(true).assertTrue();
      } catch (error) {
        expect().assertFail();
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0500 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getDefaultNet_0100
     * @tc.name      : getDefaultNet
     * @tc.desc      : Obtains the data network that is activated by default.
     */
    it('Telephony_Connection_Connection_getDefaultNet_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0100 Test start*************");
      connection.getDefaultNet((error, data) => {
        expect().assertFail();
        done();
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0100 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getDefaultNet_0200
     * @tc.name      : getDefaultNet
     * @tc.desc      : Obtains the data network that is activated by default.
     */
    it('Telephony_Connection_Connection_getDefaultNet_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0200 Test start*************");
      connection.getDefaultNet().then(data => {
        console.log("Telephony_Connection_Connection_getDefaultNet_0200 getDefaultNet success, case fail");
        expect().assertFail();
      }).catch(err => {
        console.log("Telephony_Connection_Connection_getDefaultNet_0200 getDefaultNet error, case success");
        expect(true).assertTrue();
      });
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0200 Test end*************");
      done();
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
          expect(true).assertTrue();
          return;
        }
        expect().assertFail();
      });
      done();
      console.log("************* Telephony_Connection_Connection_getAllNets_0100 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getAllNets_0200
     * @tc.name      : getAllNets
     * @tc.desc      : Obtains the list of data networks that are activated.
     */
    it('Telephony_Connection_Connection_getAllNets_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getAllNets_0200 Test start*************");
      connection.getAllNets().then(data => {
        expect(true).assertTrue();
      }).catch(err => {
        console.log("Telephony_Connection_Connection_getAllNets_0200 getAllNets error ");
        expect().assertFail();
      });
      done();
      console.log("************* Telephony_Connection_Connection_getAllNets_0200 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0100
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0100 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = undefined;
        console.log('Telephony_Connection_Connection_getConnectionProperties_0100 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getConnectionProperties(netHandle,(error, data) => {
          expect().assertFail();
          done();
      });
      })
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0100 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0200
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0200 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 0;
        console.log('Telephony_Connection_Connection_getConnectionProperties_0200 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getConnectionProperties(netHandle).then(data => {
          expect().assertFail();
        }).catch(err => {
          expect(true).assertTrue();
        });
      })

      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0200 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0300
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0300 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_getConnectionProperties_0300 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getConnectionProperties(netHandle, (error, data) => {

          if (error) {
            expect(true).assertTrue();
            done();
          } 
          expect().assertFail();
          done();
        });
      });
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0300 Test end*************");
      done();
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
          expect().assertFail();
          done();
          return;
        } else {
          connection.getConnectionProperties(value[0], (error, value_2) => {
            if (!error) {
              console.log(`Telephony_Connection_Connection_getConnectionProperties_0400  get value success: ${JSON.stringify(value_2)}`);
            }
          });
        }
      });
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0400 Test end*************");
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0100
     * @tc.name      : getNetCapabilities
     * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
     */
    it('Telephony_Connection_Connection_getNetCapabilities_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0100 Test start*************");
      
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = undefined;
        console.log('Telephony_Connection_Connection_getNetCapabilities_0100 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getNetCapabilities(netHandle,(error, data) => {
          expect().assertFail();
          done();
        });
      })
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0100 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0200
     * @tc.name      : getNetCapabilities
     * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
     */
    it('Telephony_Connection_Connection_getNetCapabilities_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0200 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_getNetCapabilities_0200 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getNetCapabilities(netHandle, (error, data) => {
          if (!error) {
            expect().assertFail();
            done();
          }
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0200 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0300
     * @tc.name      : getNetCapabilities
     * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
     */
    it('Telephony_Connection_Connection_getNetCapabilities_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0300 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 0;
        console.log('Telephony_Connection_Connection_getNetCapabilities_0300 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getNetCapabilities(netHandle).then(data => {
          expect().assertFail();
        }).catch(err => {
          expect(true).assertTrue();
        });
      });
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0300 Test end*************");
      done();
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
        } else {
          console.log(`getAllNets netID value : ${JSON.stringify(value[0].netId)}`);
          connection.getNetCapabilities(value[0], (error, data) => {
            if (error) {
              console.log(`${caseName}  get ID fail: ${error}`);
              expect().assertFail();
              done();
            } else {
              console.log(`${caseName}  get value success: ${JSON.stringify(data)}`);
              console.log(`${caseName}  get value success123456: ${JSON.stringify(data)}`);
              console.log(`${caseName}  get value success122222: ${JSON.stringify(data[0].networkCap)}`);
              expect(data[0].networkCap != "").assertTrue();
              done();
            }
          });
        }
      });
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0400 Test end*************");
      done();
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
          expect(true).assertTrue();
          done();
          return;
        }
        expect().assertFail();
        done();
      });
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0100 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_hasDefaultNet_0200
         * @tc.name      : hasDefaultNet
         * @tc.desc      : Checks whether the default data network is activated.
         */
    it('Telephony_Connection_Connection_hasDefaultNet_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0200 Test start*************");
      connection.hasDefaultNet().then(activated => {
        expect().assertFail();
      }).catch(error => {
        console.log(`Telephony_Connection_Connection_hasDefaultNet_0200 hasDefaultNet error,case success,error: ` + JSON.stringify(error));
        expect(true).assertTrue();
      })
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0200 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetConnected_0100
         * @tc.name      : reportNetConnected
         * @tc.desc      : Reports the network state is connected.
         */
    it('Telephony_Connection_Connection_reportNetConnected_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0100 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = undefined;
        console.log('Telephony_Connection_Connection_reportNetConnected_0100 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetConnected(netHandle,(error, data) => {
          if (error) {
            expect(true).assertTrue();
            done();
            return;
          }
          expect().assertFail();
          done();
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0100 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetConnected_0200
         * @tc.name      : reportNetConnected
         * @tc.desc      : Reports the network state is connected.
         */
    it('Telephony_Connection_Connection_reportNetConnected_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0200 Test start*************");
      
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_reportNetConnected_0200 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetConnected(netHandle, (error, data) => {
          if (error) {
            expect(true).assertTrue();
            done();
            return;
          }
          expect().assertFail();
          done();
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0200 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetConnected_0300
         * @tc.name      : reportNetConnected
         * @tc.desc      : Reports the network state is connected.
         */
    it('Telephony_Connection_Connection_reportNetConnected_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0300 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 0;
        console.log('Telephony_Connection_Connection_reportNetConnected_0300 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetConnected(netHandle).then(() => {
          expect().assertFail();
        }).catch(err => {
          expect(true).assertTrue();
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0300 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetConnected_0400
         * @tc.name      : reportNetConnected
         * @tc.desc      : Reports the network state is connected.
         */
    it('Telephony_Connection_Connection_reportNetConnected_0400', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0400 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_reportNetConnected_0400 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetConnected(netHandle).then(() => {
          expect().assertFail();
        }).catch(err => {
          expect(true).assertTrue();
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0400 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetDisconnected_0100
         * @tc.name      : reportNetDisconnected
         * @tc.desc      : Reports the network state is disconnected.
         */
    it('Telephony_Connection_Connection_reportNetDisconnected_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0100 Test start*************");
      
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = undefined;
        console.log('Telephony_Connection_Connection_reportNetDisconnected_0100 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetDisconnected(netHandle,(error, data) => {
          if (error) {
            expect(true).assertTrue();
            done();
            return;
          }
          expect().assertFail();
          done();
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0100 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetDisconnected_0200
         * @tc.name      : reportNetDisconnected
         * @tc.desc      : Reports the network state is disconnected.
         */
    it('Telephony_Connection_Connection_reportNetDisconnected_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0200 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_reportNetDisconnected_0200 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetDisconnected(netHandle, (error, data) => {
          if (error) {
            expect(true).assertTrue();
            done();
            return;
          }
          expect().assertFail();
          done();
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0200 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetDisconnected_0300
         * @tc.name      : reportNetDisconnected
         * @tc.desc      : Reports the network state is disconnected.
         */
    it('Telephony_Connection_Connection_reportNetDisconnected_0300', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0300 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 0;
        console.log('Telephony_Connection_Connection_reportNetDisconnected_0300 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetDisconnected(netHandle).then(() => {
          expect().assertFail();
        }).catch(err => {
          expect(true).assertTrue();
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0300 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_reportNetDisconnected_0400
         * @tc.name      : reportNetDisconnected
         * @tc.desc      : Reports the network state is disconnected.
         */
    it('Telephony_Connection_Connection_reportNetDisconnected_0400', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0400 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_reportNetDisconnected_0400 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.reportNetDisconnected(netHandle).then(() => {
          expect().assertFail();
        }).catch(err => {
          expect(true).assertTrue();
        });
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0400 Test end*************");
      done();
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
          expect(true).assertTrue();
          done();
          return;
        }
        expect().assertFail();
        done();
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0100 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_getAddressesByName_0200
         * @tc.name      : getAddressesByName
         * @tc.desc      : Resolves the host name to obtain all IP addresses based on the default data network.
         */
    it('Telephony_Connection_Connection_getAddressesByName_0200', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0200 Test start*************");
      connection.getAddressesByName('www.test.com').then(data => {
        expect().assertFail();
        done();
        return;
      }).catch(error => {
        console.log(`Telephony_Connection_Connection_getAddressesByName_0200 getAddressesByName error,case success,error: ` + JSON.stringify(error));
        expect(true).assertTrue();
      })
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0200 Test end*************");
      done();
    });

    /**
     * @tc.number  Telephony_Connection_Connection_netAvailable_0100
     * @tc.name    netAvailable
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_netAvailable_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netAvailable_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.register(function (error) {
          console.log("Telephony_Connection_Connection_netAvailable_0100 register error = "+JSON.stringify(error))
        })        
        netConn.on('netAvailable', function (data) {
          console.log("Telephony_Connection_Connection_netAvailable_0100 netAvailable on  = "+JSON.stringify(data))
        })
        netConn.unregister(function (error) {
          console.log("Telephony_Connection_Connection_netAvailable_0100 unregister error = "+JSON.stringify(error))
        })
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netAvailable_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_netBlockStatusChange_0100
     * @tc.name    netBlockStatusChange
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_netBlockStatusChange_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netBlockStatusChange_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.register(function (error) {
          console.log("Telephony_Connection_Connection_netBlockStatusChange_0100 register error = "+JSON.stringify(error))
        })        
        netConn.on('netBlockStatusChange', function (data) {
          console.log("Telephony_Connection_Connection_netBlockStatusChange_0100 netAvailable on  = "+JSON.stringify(data))
        })
        netConn.unregister(function (error) {
          console.log("Telephony_Connection_Connection_netBlockStatusChange_0100 unregister error = "+JSON.stringify(error))
        })
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netBlockStatusChange_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_netCapabilitiesChange_0100
     * @tc.name    netCapabilitiesChange
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_netCapabilitiesChange_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netCapabilitiesChange_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.register(function (error) {
          console.log("Telephony_Connection_Connection_netCapabilitiesChange_0100 register error = "+JSON.stringify(error))
        })        
        netConn.on('netCapabilitiesChange', function (data) {
          console.log("Telephony_Connection_Connection_netCapabilitiesChange_0100 netAvailable on  = " +JSON.stringify(data))
        })
        netConn.unregister(function (error) {
          console.log("Telephony_Connection_Connection_netCapabilitiesChange_0100 unregister error = "+JSON.stringify(error))
        })
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netCapabilitiesChange_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_netConnectionPropertiesChange_0100
     * @tc.name    netConnectionPropertiesChange
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_netConnectionPropertiesChange_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netConnectionPropertiesChange_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.register(function (error) {
          console.log("Telephony_Connection_Connection_netConnectionPropertiesChange_0100 register error = "+JSON.stringify(error))
        })        
        netConn.on('netConnectionPropertiesChange', function (data) {
          console.log("Telephony_Connection_Connection_netConnectionPropertiesChange_0100 netAvailable on  = "+JSON.stringify(data))
        })
        netConn.unregister(function (error) {
          console.log("Telephony_Connection_Connection_netConnectionPropertiesChange_0100 unregister error = "+JSON.stringify(error))
        })
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netConnectionPropertiesChange_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_netLost_0100
     * @tc.name    netLost
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_netLost_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netLost_0100 Test start*************");
      try {
        let netConn = connection.createNetConnection();
        netConn.register(function (error) {
          console.log("Telephony_Connection_Connection_netLost_0100 register error = "+JSON.stringify(error))
        })        
        netConn.on('netLost', function (data) {
          console.log("Telephony_Connection_Connection_netLost_0100 netAvailable on  = "+JSON.stringify(data))
        })
        netConn.unregister(function (error) {
          console.log("Telephony_Connection_Connection_netLost_0100 unregister error = "+JSON.stringify(error))
        })
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netLost_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_netUnavailable_0100
     * @tc.name    netUnavailable
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_netUnavailable_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_netUnavailable_0100 Test start*************");
      try {

        let netConn = connection.createNetConnection();
        netConn.register(function (error) {
          console.log("Telephony_Connection_Connection_netUnavailable_0100 register error = "+JSON.stringify(error))
        })        
        netConn.on('netUnavailable', function (data) {
          console.log("Telephony_Connection_Connection_netUnavailable_0100 netAvailable on  = "+JSON.stringify(data))
        })
        netConn.unregister(function (error) {
          console.log("Telephony_Connection_Connection_netUnavailable_0100 unregister error = "+JSON.stringify(error))
        })
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netUnavailable_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_NetSpecifier_0100
     * @tc.name    NetSpecifier
     * @tc.desc    netCapabilities bearerPrivateIdentifier test
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
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_NetSpecifier_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_bindSocket_0100
     * @tc.name    bindSocket
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_bindSocket_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_bindSocket_0100 Test start*************");
      connection.getDefaultNet().then((handle) => {
        handle.bindSocket(1, (error, value) => {
          if (error) {
            expect().assertFail();
            done();
          }
        });
      }).catch((error) => {
        expect(true).assertTrue();
      });
      done();
      console.log("************* Telephony_Connection_Connection_bindSocket_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_NetHandle_getAddressesByName_0100
     * @tc.name    getAddressesByName
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_NetHandle_getAddressesByName_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 Test start*************");
      connection.getDefaultNet().then((handle) => {
        handle.getAddressesByName(addressBaidu, (error, value) => {
          if (error) {
            expect().assertFail();
            done();
          }
        });
      }).catch((error) => {
        expect(true).assertTrue();
      });
      done();
      console.log("************* Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_getAddressByName_0100
     * @tc.name    getAddressByName
     * @tc.desc    Function test
     */
    it('Telephony_Connection_Connection_getAddressByName_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_getAddressByName_0100 Test start*************");
      connection.getDefaultNet().then((handle) => {
        handle.getAddressByName(addressBaidu, (error, value) => {
          if (error) {
            expect().assertFail();
          }
          done();
        });
      }).catch((error) => {
        expect(true).assertTrue();
      });
      done();
      console.log("************* Telephony_Connection_Connection_getAddressByName_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_linkUpBandwidthKbps_0100
     * @tc.name    linkUpBandwidthKbps
     * @tc.desc    linkUpBandwidthKbps test
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
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_linkUpBandwidthKbps_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_linkDownBandwidthKbps_0100
     * @tc.name    linkDownBandwidthKbps
     * @tc.desc    nlinkDownBandwidthKbps test
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
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_linkDownBandwidthKbps_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_networkCap_0100
     * @tc.name    networkCap
     * @tc.desc    networkCap test
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
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_networkCap_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_bearerTypes_0100
     * @tc.name    bearerTypes
     * @tc.desc    bearerTypes test
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
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_bearerTypes_0100 Test end*************");
    })

    /**
     * @tc.number  Telephony_Connection_Connection_register_0100
     * @tc.name    register
     * @tc.desc    Receives status change notifications of a specified network.
     */
    it('Telephony_Connection_Connection_register_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_register_0100 Test start*************");
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
        }
      });
      netConn.unregister((error) => {
        if (error) {
          console.log(`${caseName} unregister fail: ${error}`);
        }
      });
      expect(true).assertTrue();
	  console.log("************* Telephony_Connection_Connection_register_0100 Test end*************");
      done();
      
    });

    /**
     * @tc.number  Telephony_Connection_Connection_unregister_0100
     * @tc.name    unregister
     * @tc.desc    Cancels listening for network status changes. test
     */
    it('Telephony_Connection_Connection_unregister_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_unregister_0100 Test start*************");
      let caseName = 'Telephony_Connection_Connection_unregister_0100';
      let netSpecifier = {
        netCapabilities: {
          linkUpBandwidthKbps: 10,
          linkDownBandwidthKbps: 11,
          bearerTypes: [0],
          networkCap: [0],
        }, bearerPrivateIdentifier: '123'
      }
      let netConn = connection.createNetConnection(netSpecifier, TIMEOUT);
      netConn.register((error) => {
        if (error) {
          console.log(`${caseName} register fail: ${error}`);
        }
      });
      netConn.unregister((error) => {
        if (error) {
          console.log(`${caseName} unregister fail: ${error}`);
        }
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_unregister_0100 Test end*************");
	  done();
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
          expect(true).assertTrue();
        } else {
          expect(data.netId).assertEqual(100);
        }
      });
      console.log("************* Telephony_Connection_Connection_netId_0100 Test end*************");
      done();
    });

    /*
         * @tc.number    : Telephony_Connection_Connection_domains_0100
         * @tc.name      : domains
         * @tc.desc      : domains test.
         */
    it('Telephony_Connection_Connection_domains_0100', 0, function (done) {
      console.log("************* Telephony_Connection_Connection_domains_0100 Test start*************");
      connection.getDefaultNet((error, netHandle) => {
        netHandle.netId = 99;
        console.log('Telephony_Connection_Connection_domains_0100 getDefaultNet = ' + JSON.stringify(netHandle));
        connection.getConnectionProperties(netHandle, (error, data) => {
          if (error) {
            expect(true).assertTrue();
          } else {
            expect(data.domains).assertEqual("");
          }
        });
      });
      console.log("************* Telephony_Connection_Connection_domains_0100 Test end*************");
      done();
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
          console.log("getDefaultNet error " + JSON.stringify(error));
        }
        console.log("getDefaultNet success " + JSON.stringify(netHandle));
        connection.setAppNet(netHandle, (error, data) => {
          if (error) {
            console.log("setAppNet error " + JSON.stringify(error));
            expect(true).assertFalse();
            done();
            return;
          }
          console.log("setAppNet success " + JSON.stringify(data));
          connection.getAppNet((error, data) => {
            if (error) {
              console.log("getAppNet error " + JSON.stringify(error));
              expect(true).assertFalse();
              done();
              return;
            }
            console.log("getAppNet success " + JSON.stringify(data));
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
          console.log("getDefaultNet error " + JSON.stringify(error));
        }
        console.log("getDefaultNet success " + JSON.stringify(netHandle));
        connection.setAppNet(netHandle).then((data) => {
          console.log("setAppNet success " + JSON.stringify(data));
          connection.getAppNet().then((data) => {
            console.log("getAppNet success " + JSON.stringify(data));
            expect(netHandle.netId == data.netId).assertTrue();
            done();
          }).catch(error => {
            console.log("getAppNet error " + JSON.stringify(error));
            expect(true).assertFalse();
            done();
          })
        }).catch(error => {
          console.log("setAppNet error " + JSON.stringify(error));
          expect(true).assertFalse();
          done();
        })
      })
    });

    console.log("************* connection Test end*************");
  })
}
