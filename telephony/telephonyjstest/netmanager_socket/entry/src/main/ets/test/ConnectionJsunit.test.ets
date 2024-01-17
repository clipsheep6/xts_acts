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
import { describe, expect, it } from '@ohos/hypium';
import connection from '@ohos.net.connection'
import http from "@ohos.net.http";
import socket from "@ohos.net.socket";
import utils from './Utils';
import statistics from '@ohos.net.statistics';
import { BusinessError } from '@ohos.base';
import webSocket from '@ohos.net.webSocket';

interface NetConnectionInterface {
  netHandle: connection.NetHandle;
  blocked: boolean
}

interface NetConnectionInterface2 {
  netHandle: connection.NetHandle,
  connectionProperties: connection.ConnectionProperties
}

function expectFalse() {
  try {
    expect().assertFail();
  } catch (err) {
    console.info('assertion failure');
  }
};

export default function connectionJsunit() {
  describe('connectionTest', () => {
    const TIMEOUT: number = 100;
    const NETID_IVVALID: number = 99;
    const NETID_IVVALID2: number = 0;
    let envReady: boolean = false;
    const addressBaidu: string = 'www.baidu.com';

    let sockfd1: number = 10;
    let sockfd2: number = -1;


    console.log("************* connection Test start*************");

    it('Telephony_Connection_Request_Socket_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      type HttpRequest = http.HttpRequest;
      type TCPSocket = socket.TCPSocket;
      type UDPSocket = socket.UDPSocket;
      expect(typeof HttpRequest == typeof connection.HttpRequest).assertTrue();
      expect(typeof TCPSocket == typeof connection.TCPSocket).assertTrue();
      expect(typeof UDPSocket == typeof connection.UDPSocket).assertTrue();
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_createNetConnection_0100
     * @tc.name      : createNetConnection
     * @tc.desc      : Create a network connection with optional netSpefifier and timeout.
     */
    it('Telephony_Connection_Connection_createNetConnection_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0100 Test start*************");
      try {
        connection.createNetConnection(undefined, 5000);
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
    it('Telephony_Connection_Connection_createNetConnection_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0200 Test start*************");
      try {
        connection.createNetConnection(undefined, 3000);
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
    it('Telephony_Connection_Connection_createNetConnection_0300', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0300 Test start*************");
      try {
        connection.createNetConnection(undefined, 8000);
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
    it('Telephony_Connection_Connection_createNetConnection_0400', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0400 Test start*************");
      try {
        let netSpecifier: connection.NetSpecifier = {
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
    it('Telephony_Connection_Connection_createNetConnection_0500', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_createNetConnection_0500 Test start*************");
      try {
        let netSpecifier: connection.NetSpecifier = {
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
    it('Telephony_Connection_Connection_getDefaultNet_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0100 Test start*************");
      connection.getDefaultNet(() => {
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
    it('Telephony_Connection_Connection_getDefaultNet_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getDefaultNet_0200 Test start*************");
      connection.getDefaultNet().then(() => {
        console.log("Telephony_Connection_Connection_getDefaultNet_0200 getDefaultNet success, case fail");
        expect().assertFail();
      }).catch((err: BusinessError) => {
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
    it('Telephony_Connection_Connection_getAllNets_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getAllNets_0100 Test start*************");
      connection.getAllNets((error: BusinessError) => {
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
    it('Telephony_Connection_Connection_getAllNets_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getAllNets_0200 Test start*************");
      connection.getAllNets().then(() => {
        expect(true).assertTrue();
      }).catch(() => {
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
    it('Telephony_Connection_Connection_getConnectionProperties_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0100 Test start*************");
      connection.getConnectionProperties(undefined, () => {
        expect().assertFail();
        done();
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0100 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0200
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0200 Test start*************");
      if (utils.notCheck) {
        expect(true).assertTrue();
        done();
        return;
      }
      connection.getConnectionProperties(null).then(() => {
        expect().assertFail();
      }).catch(() => {
        expect(true).assertTrue();
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0200 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0300
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0300', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0300 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        },
      };
      connection.getConnectionProperties(handle, (error: BusinessError) => {
        if (error) {
          expect(true).assertTrue();
          done();
        } else {
          done();
        }
      });
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0300 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getConnectionProperties_0400
     * @tc.name      : getConnectionProperties
     * @tc.desc      : Queries the connection properties of a network.
     */
    it('Telephony_Connection_Connection_getConnectionProperties_0400', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getConnectionProperties_0400 Test start*************");
      connection.getAllNets((error: BusinessError, value: Array<connection.NetHandle>) => {
        if (error) {
          expect().assertFail();
          done();
          return;
        } else {
          connection.getConnectionProperties(value[0], (error: BusinessError, value_2: connection.ConnectionProperties) => {
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
    it('Telephony_Connection_Connection_getNetCapabilities_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0100 Test start*************");
      connection.getNetCapabilities(undefined, () => {
        expect().assertFail();
        done();
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0100 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0200
     * @tc.name      : getNetCapabilities
     * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
     */
    it('Telephony_Connection_Connection_getNetCapabilities_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0200 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        },
      };
      connection.getNetCapabilities(handle, (error: BusinessError) => {
        if (!error) {
          expect().assertFail();
          done();
        }
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
    it('Telephony_Connection_Connection_getNetCapabilities_0300', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0300 Test start*************");
      if (false) {
        expect(true).assertTrue();
        done();
        return;
      }
      connection.getNetCapabilities(null).then(() => {
        expect().assertFail();
      }).catch(() => {
        expect(true).assertTrue();
      });
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0300 Test end*************");
      done();
    });

    /*
     * @tc.number    : Telephony_Connection_Connection_getNetCapabilities_0400
     * @tc.name      : getNetCapabilities
     * @tc.desc      : Obtains {@link NetCapabilities} of a {@link NetHandle} object.
     */
    it('Telephony_Connection_Connection_getNetCapabilities_0400', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getNetCapabilities_0400 Test start*************");
      let caseName: string = 'Telephony_Connection_Connection_getNetCapabilities_0400';
      connection.getAllNets((error: BusinessError, value: Array<connection.NetHandle>) => {
        if (error) {
          console.log(`${caseName}  get data fail: ${error}`);
          expect().assertFail();
          done();
          return;
        } else {
          console.log(`getAllNets netID value : ${JSON.stringify(value[0].netId)}`);
          connection.getNetCapabilities(value[0], (error: BusinessError, data: connection.NetCapabilities) => {
            if (error) {
              console.log(`${caseName}  get ID fail: ${error}`);
              expect().assertFail();
              done();
            } else {
              console.log(`${caseName}  get value success: ${JSON.stringify(data)}`);
              console.log(`${caseName}  get value success123456: ${JSON.stringify(data.networkCap)}`);
              console.log(`${caseName}  get value success122222: ${JSON.stringify(data.networkCap[0])}`);
              expect(String(data.networkCap[0]) != "").assertTrue();
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
    it('Telephony_Connection_Connection_hasDefaultNet_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0100 Test start*************");
      connection.hasDefaultNet((error: BusinessError) => {
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
    it('Telephony_Connection_Connection_hasDefaultNet_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_hasDefaultNet_0200 Test start*************");
      connection.hasDefaultNet().then(() => {
        expect().assertFail();
      }).catch((error: BusinessError) => {
        console.log(`Telephony_Connection_Connection_hasDefaultNet_0200 hasDefaultNet error,case success,error:${JSON.stringify(error)}`);
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
    it('Telephony_Connection_Connection_reportNetConnected_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0100 Test start*************");
      connection.reportNetConnected(null, (error: BusinessError) => {
        if (error) {
          expect(true).assertTrue();
          done();
          return;
        }
        expect().assertFail();
        done();
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
    it('Telephony_Connection_Connection_reportNetConnected_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0200 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        },
      };
      connection.reportNetConnected(handle, (error: BusinessError) => {
        if (error) {
          expect(true).assertTrue();
          done();
          return;
        }
        expect().assertFail();
        done();
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
    it('Telephony_Connection_Connection_reportNetConnected_0300', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0300 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID2,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        },
      };
      connection.reportNetConnected(handle).then(() => {
        expect().assertFail();
      }).catch(() => {
        expect(true).assertTrue();
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
    it('Telephony_Connection_Connection_reportNetConnected_0400', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_reportNetConnected_0400 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        },
      };
      connection.reportNetConnected(handle).then(() => {
        expect().assertFail();
      }).catch(() => {
        expect(true).assertTrue();
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
    it('Telephony_Connection_Connection_reportNetDisconnected_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0100 Test start*************");
      connection.reportNetDisconnected(null, (error: BusinessError) => {
        if (error) {
          expect(true).assertTrue();
          done();
          return;
        }
        expect().assertFail();
        done();
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
    it('Telephony_Connection_Connection_reportNetDisconnected_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0200 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        },
      };
      connection.reportNetDisconnected(handle, (error: BusinessError) => {
        if (error) {
          expect(true).assertTrue();
          done();
          return;
        }
        expect().assertFail();
        done();
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
    it('Telephony_Connection_Connection_reportNetDisconnected_0300', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0300 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID2,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        },
      };
      connection.reportNetDisconnected(handle).then(() => {
        expect().assertFail();
      }).catch(() => {
        expect(true).assertTrue();
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
    it('Telephony_Connection_Connection_reportNetDisconnected_0400', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_reportNetDisconnected_0400 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        },
      };
      connection.reportNetDisconnected(handle).then(() => {
        expect().assertFail();
      }).catch(() => {
        expect(true).assertTrue();
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
    it('Telephony_Connection_Connection_getAddressesByName_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0100 Test start*************");
      connection.getAddressesByName('www.test.com', (error: BusinessError) => {
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
    it('Telephony_Connection_Connection_getAddressesByName_0200', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0200 Test start*************");
      connection.getAddressesByName('www.test.com').then(() => {
        expect().assertFail();
        done();
        return;
      }).catch((error: BusinessError) => {
        console.log(`Telephony_Connection_Connection_getAddressesByName_0200 getAddressesByName error,case success,error:${JSON.stringify(error)}`);
        expect(true).assertTrue();
      })
      console.log("************* Telephony_Connection_Connection_getAddressesByName_0200 Test end*************");
      done();
    });

    /**
     * @tc.number Telephony_Connection_Connection_netAvailable_0100
     * @tc.name netAvailable
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netAvailable_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_netAvailable_0100 Test start*************");
      try {
        let netConn: connection.NetConnection = connection.createNetConnection();
        netConn.on('netAvailable', (data: connection.NetHandle) => {
          if (data) {
            console.log(`netAvailable data: ${data}`);
          }
        });
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netAvailable_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netBlockStatusChange_0100
     * @tc.name netBlockStatusChange
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netBlockStatusChange_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_netBlockStatusChange_0100 Test start*************");
      try {
        let netConn: connection.NetConnection = connection.createNetConnection();
        netConn.on('netBlockStatusChange', (data: NetConnectionInterface) => {
          if (data) {
            console.log(`netBlockStatusChange data: ${data}`);
          }
        });
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netBlockStatusChange_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netCapabilitiesChange_0100
     * @tc.name netCapabilitiesChange
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netCapabilitiesChange_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_netCapabilitiesChange_0100 Test start*************");
      try {
        let netConn: connection.NetConnection = connection.createNetConnection();
        netConn.on('netCapabilitiesChange', (data: connection.NetCapabilityInfo) => {
          if (data) {
            console.log(`netCapabilitiesChange data: ${data}`);
          }
        });
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netCapabilitiesChange_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netConnectionPropertiesChange_0100
     * @tc.name netConnectionPropertiesChange
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netConnectionPropertiesChange_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_netConnectionPropertiesChange_0100 Test start*************");
      try {
        let netConn: connection.NetConnection = connection.createNetConnection();
        netConn.on('netConnectionPropertiesChange', (data: NetConnectionInterface2) => {
          if (data) {
            console.log(`netConnectionPropertiesChange data: ${data}`);
          }
        });
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netConnectionPropertiesChange_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netLost_0100
     * @tc.name netLost
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netLost_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_netLost_0100 Test start*************");
      try {
        let netConn: connection.NetConnection = connection.createNetConnection();
        netConn.on('netLost', (data: connection.NetHandle) => {
          if (data) {
            console.log(`netLost data: ${data}`);
          }
        });
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netLost_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_netUnavailable_0100
     * @tc.name netUnavailable
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_netUnavailable_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_netUnavailable_0100 Test start*************");
      try {
        let netConn: connection.NetConnection = connection.createNetConnection();
        netConn.on('netUnavailable', (data: void) => {
          console.log(`netUnavailable data: ${data}`);
        });
      } catch (error) {
        expect().assertFail();
      }
      expect(true).assertTrue();
      done();
      console.log("************* Telephony_Connection_Connection_netUnavailable_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_NetSpecifier_0100
     * @tc.name NetSpecifier
     * @tc.desc netCapabilities bearerPrivateIdentifier test
     */
    it('Telephony_Connection_Connection_NetSpecifier_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_NetSpecifier_0100 Test start*************");
      try {
        let netSpecifier: connection.NetSpecifier = {
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
     * @tc.number Telephony_Connection_Connection_bindSocket_0100
     * @tc.name bindSocket
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_bindSocket_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_bindSocket_0100 Test start*************");
      connection.getDefaultNet().then((handle: connection.NetHandle) => {
        handle.bindSocket(socket.constructTCPSocketInstance(), (error: BusinessError) => {
          if (error) {
            expect().assertFail();
            done();
          }
        });
      }).catch(() => {
        expect(true).assertTrue();
      });
      done();
      console.log("************* Telephony_Connection_Connection_bindSocket_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_NetHandle_getAddressesByName_0100
     * @tc.name getAddressesByName
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_NetHandle_getAddressesByName_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 Test start*************");
      connection.getDefaultNet().then((handle: connection.NetHandle) => {
        handle.getAddressesByName(addressBaidu, (error: BusinessError) => {
          if (error) {
            expect().assertFail();
            done();
          }
        });
      }).catch(() => {
        expect(true).assertTrue();
      });
      done();
      console.log("************* Telephony_Connection_Connection_NetHandle_getAddressesByName_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_getAddressByName_0100
     * @tc.name getAddressByName
     * @tc.desc Function test
     */
    it('Telephony_Connection_Connection_getAddressByName_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_getAddressByName_0100 Test start*************");
      connection.getDefaultNet().then((handle: connection.NetHandle) => {
        handle.getAddressByName(addressBaidu, (error: BusinessError) => {
          if (error) {
            expect().assertFail();
          }
          done();
        });
      }).catch(() => {
        expect(true).assertTrue();
      });
      done();
      console.log("************* Telephony_Connection_Connection_getAddressByName_0100 Test end*************");
    })

    /**
     * @tc.number Telephony_Connection_Connection_linkUpBandwidthKbps_0100
     * @tc.name linkUpBandwidthKbps
     * @tc.desc linkUpBandwidthKbps test
     */
    it('Telephony_Connection_Connection_linkUpBandwidthKbps_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_linkUpBandwidthKbps_0100 Test start*************");
      try {
        let netSpecifier: connection.NetSpecifier = {
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
     * @tc.number Telephony_Connection_Connection_linkDownBandwidthKbps_0100
     * @tc.name linkDownBandwidthKbps
     * @tc.desc nlinkDownBandwidthKbps test
     */
    it('Telephony_Connection_Connection_linkDownBandwidthKbps_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_linkDownBandwidthKbps_0100 Test start*************");
      try {
        let netSpecifier: connection.NetSpecifier = {
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
     * @tc.number Telephony_Connection_Connection_networkCap_0100
     * @tc.name networkCap
     * @tc.desc networkCap test
     */
    it('Telephony_Connection_Connection_networkCap_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_networkCap_0100 Test start*************");
      try {
        let netSpecifier: connection.NetSpecifier = {
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
     * @tc.number Telephony_Connection_Connection_bearerTypes_0100
     * @tc.name bearerTypes
     * @tc.desc bearerTypes test
     */
    it('Telephony_Connection_Connection_bearerTypes_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_bearerTypes_0100 Test start*************");
      try {
        let netSpecifier: connection.NetSpecifier = {
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
     * @tc.number Telephony_Connection_Connection_register_0100
     * @tc.name register
     * @tc.desc Receives status change notifications of a specified network.
     */
    it('Telephony_Connection_Connection_register_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_register_0100 Test start*************");
      if (false) {
        expect(true).assertTrue();
        done();
        return;
      }
      let caseName: string = 'Telephony_Connection_Connection_register_0100';
      let netSpecifier: connection.NetSpecifier = {
        netCapabilities: {
          linkUpBandwidthKbps: 0,
          linkDownBandwidthKbps: 0,
          bearerTypes: [0],
          networkCap: [0],
        }, bearerPrivateIdentifier: '123'
      }
      let netConn = connection.createNetConnection(netSpecifier, TIMEOUT);
      netConn.register((error: BusinessError) => {
        if (error) {
          console.log(`${caseName} register fail: ${error}`);
        }
      });
      netConn.unregister((error: BusinessError) => {
        if (error) {
          console.log(`${caseName} unregister fail: ${error}`);
        }
      });
      expect(true).assertTrue();
      console.log("************* Telephony_Connection_Connection_register_0100 Test end*************");
      done();

    });

    /**
     * @tc.number Telephony_Connection_Connection_unregister_0100
     * @tc.name unregister
     * @tc.desc Cancels listening for network status changes. test
     */
    it('Telephony_Connection_Connection_unregister_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_unregister_0100 Test start*************");
      if (false) {
        expect(true).assertTrue();
        done();
        return;
      }
      let caseName: string = 'Telephony_Connection_Connection_unregister_0100';
      let netSpecifier: connection.NetSpecifier = {
        netCapabilities: {
          linkUpBandwidthKbps: 10,
          linkDownBandwidthKbps: 11,
          bearerTypes: [0],
          networkCap: [0],
        }, bearerPrivateIdentifier: '123'
      }
      let netConn = connection.createNetConnection(netSpecifier, TIMEOUT);
      netConn.register((error: BusinessError) => {
        if (error) {
          console.log(`${caseName} register fail: ${error}`);
        }
      });
      netConn.unregister((error: BusinessError) => {
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
    it('Telephony_Connection_Connection_netId_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_netId_0100 Test start*************");
      connection.getDefaultNet((error: BusinessError, data: connection.NetHandle) => {
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
    it('Telephony_Connection_Connection_domains_0100', 0, (done: Function) => {
      if (!envReady) {
        console.info("The environment was not ready");
        done();
        return;
      }
      console.log("************* Telephony_Connection_Connection_domains_0100 Test start*************");
      let handle: connection.NetHandle = {
        netId: NETID_IVVALID,
        bindSocket: () => {
          throw new Error('Function not implemented.');
        },
        getAddressesByName: () => {
          throw new Error('Function not implemented.');
        },
        getAddressByName: () => {
          throw new Error('Function not implemented.');
        }
      };
      connection.getConnectionProperties(handle, (error: BusinessError, data: connection.ConnectionProperties) => {
        if (error) {
          expect(true).assertTrue();
        } else {
          expect(data.domains).assertEqual("");
        }
      });
      console.log("************* Telephony_Connection_Connection_domains_0100 Test end*************");
      done();
    });


    /*
         * @tc.number    : Telephony_Connection_setAppNet_callback_0100
         * @tc.name      : Telephony_Connection_setAppNet_callback_0100
         * @tc.desc      : Telephony_Connection_setAppNet_callback_0100
         */
    it('Telephony_Connection_setAppNet_callback_0100', 0, (done: Function) => {
      connection.getDefaultNet((error: BusinessError, netHandle: connection.NetHandle) => {
        if (error) {
          console.log("getDefaultNet error " + JSON.stringify(error));
          expect(true).assertFalse();
          done();
          return;
        }
        console.log("getDefaultNet success " + JSON.stringify(netHandle));
        connection.setAppNet(netHandle, (error: BusinessError, data: void) => {
          if (error) {
            console.log("setAppNet error " + JSON.stringify(error));
            expect(true).assertFalse();
            done();
            return;
          }
          console.log("setAppNet success " + JSON.stringify(data));
          connection.getAppNet((error: BusinessError, data: connection.NetHandle) => {
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
    it('Telephony_Connection_setAppNet_promise_0100', 0, (done: Function) => {
      connection.getDefaultNet((error: BusinessError, netHandle: connection.NetHandle) => {
        if (error) {
          console.log("getDefaultNet error " + JSON.stringify(error));
          expect(true).assertFalse();
          done();
          return;
        }
        console.log("getDefaultNet success " + JSON.stringify(netHandle));
        connection.setAppNet(netHandle).then((data: void) => {
          console.log("setAppNet success " + JSON.stringify(data));
          connection.getAppNet().then((data: connection.NetHandle) => {
            console.log("getAppNet success " + JSON.stringify(data));
            expect(netHandle.netId == data.netId).assertTrue();
            done();
          }).catch((error: BusinessError) => {
            console.log("getAppNet error " + JSON.stringify(error));
            expect(true).assertFalse();
            done();
          })
        }).catch((error: BusinessError) => {
          console.log("setAppNet error " + JSON.stringify(error));
          expect(true).assertFalse();
          done();
        })
      })
    });


    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockTxBytes_Async_0100
     * @tc.name Statistics::getSockTxBytes
     * @tc.desc Test getSockTxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockTxBytes_Async_0100", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockTxBytes_Async_0100";
      statistics.getSockfdTxBytes(sockfd1, (err: BusinessError, data) => {
        if (err) {
          console.log(`${caseName} getSockTxBytes failed, err: ${JSON.stringify(err)}`);
          expect(err.code !== undefined).assertTrue();
          done();
        } else {
          console.log(`${caseName} getSockTxBytes success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockTxBytes_Async_0200
     * @tc.name Statistics::getSockTxBytes
     * @tc.desc Test getSockTxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockTxBytes_Async_0200", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockTxBytes_Async_0200";
      statistics.getSockfdTxBytes(sockfd2, (err: BusinessError, data) => {
        if (err) {
          console.log(`${caseName} getSockTxBytes failed, err: ${JSON.stringify(err)}`);
          expect(err.code !== undefined).assertTrue();
          done();
        } else {
          console.log(`${caseName} getSockTxBytes success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockTxBytes_Async_0300
     * @tc.name Statistics::getSockTxBytes
     * @tc.desc Test getSockTxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockTxBytes_Async_0300", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockTxBytes_Async_0300";
      try {
        statistics.getSockfdTxBytes(undefined, (err: BusinessError, data) => {
          if (err) {
            console.log(`${caseName} getSockTxBytes failed, err: ${JSON.stringify(err)}`);
            expectFalse();
            done();
          } else {
            console.log(`${caseName} getSockTxBytes success, data: ${JSON.stringify(data)}`);
            expectFalse();
            done();
          }
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log(`${caseName} catch error, expect error: [${e.code}, ${e.message}]`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockTxBytes_Async_0400
     * @tc.name Statistics::getSockTxBytes
     * @tc.desc Test getSockTxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockTxBytes_Async_0400", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockTxBytes_Async_0400";
      try {
        statistics.getSockfdTxBytes(null, (err: BusinessError, data) => {
          if (err) {
            console.log(`${caseName} getSockTxBytes failed, err: ${JSON.stringify(err)}`);
            expectFalse();
            done();
          } else {
            console.log(`${caseName} getSockTxBytes success, data: ${JSON.stringify(data)}`);
            expectFalse();
            done();
          }
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log(`${caseName} catch error, expect error: [${e.code}, ${e.message}]`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0100
     * @tc.name Statistics::getSockTxBytes
     * @tc.desc Test getSockTxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0100", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0100";
      statistics.getSockfdTxBytes(sockfd1).then((data) => {
        console.log(`${caseName} getSockTxBytes success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getSockTxBytes failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0200
     * @tc.name Statistics::getSockTxBytes
     * @tc.desc Test getSockTxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0200", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0200";
      statistics.getSockfdTxBytes(sockfd2).then((data) => {
        console.log(`${caseName} getSockTxBytes success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getSockTxBytes failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0300
     * @tc.name Statistics::getSockTxBytes
     * @tc.desc Test getSockTxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0300", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0300";
      try {
        statistics.getSockfdTxBytes(undefined).then((data) => {
          console.log(`${caseName} getSockTxBytes success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} getSockTxBytes failed, err: ${JSON.stringify(err)}`);
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

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0400
     * @tc.name Statistics::getSockTxBytes
     * @tc.desc Test getSockTxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0400", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockTxBytes_Promise_0400";
      try {
        statistics.getSockfdTxBytes(null).then((data) => {
          console.log(`${caseName} getSockTxBytes success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} getSockTxBytes failed, err: ${JSON.stringify(err)}`);
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

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockRxBytes_Async_0100
     * @tc.name Statistics::getSockRxBytes
     * @tc.desc Test getSockRxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockRxBytes_Async_0100", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockRxBytes_Async_0100";
      statistics.getSockfdRxBytes(sockfd1, (err: BusinessError, data) => {
        if (err) {
          console.log(`${caseName} getSockRxBytes failed, err: ${JSON.stringify(err)}`);
          expect(err.code !== undefined).assertTrue();
          done();
        } else {
          console.log(`${caseName} getSockRxBytes success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockRxBytes_Async_0200
     * @tc.name Statistics::getSockRxBytes
     * @tc.desc Test getSockRxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockRxBytes_Async_0200", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockRxBytes_Async_0200";
      statistics.getSockfdRxBytes(sockfd2, (err: BusinessError, data) => {
        if (err) {
          console.log(`${caseName} getSockRxBytes failed, err: ${JSON.stringify(err)}`);
          expect(err.code !== undefined).assertTrue();
          done();
        } else {
          console.log(`${caseName} getSockRxBytes success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockRxBytes_Async_0300
     * @tc.name Statistics::getSockRxBytes
     * @tc.desc Test getSockRxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockRxBytes_Async_0300", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockRxBytes_Async_0300";
      try {
        statistics.getSockfdRxBytes(undefined, (err: BusinessError, data) => {
          if (err) {
            console.log(`${caseName} getSockRxBytes failed, err: ${JSON.stringify(err)}`);
            expectFalse();
            done();
          } else {
            console.log(`${caseName} getSockRxBytes success, data: ${JSON.stringify(data)}`);
            expectFalse();
            done();
          }
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log(`${caseName} catch error, expect error: [${e.code}, ${e.message}]`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockRxBytes_Async_0400
     * @tc.name Statistics::getSockRxBytes
     * @tc.desc Test getSockRxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockRxBytes_Async_0400", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockRxBytes_Async_0400";
      try {
        statistics.getSockfdRxBytes(null, (err: BusinessError, data) => {
          if (err) {
            console.log(`${caseName} getSockRxBytes failed, err: ${JSON.stringify(err)}`);
            expectFalse();
            done();
          } else {
            console.log(`${caseName} getSockRxBytes success, data: ${JSON.stringify(data)}`);
            expectFalse();
            done();
          }
        });
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.log(`${caseName} catch error, expect error: [${e.code}, ${e.message}]`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0100
     * @tc.name Statistics::getSockRxBytes
     * @tc.desc Test getSockRxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0100", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0100";
      statistics.getSockfdRxBytes(sockfd1).then((data) => {
        console.log(`${caseName} getSockRxBytes success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getSockRxBytes failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0200
     * @tc.name Statistics::getSockRxBytes
     * @tc.desc Test getSockRxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0200", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0200";
      statistics.getSockfdRxBytes(sockfd2).then((data) => {
        console.log(`${caseName} getSockRxBytes success, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getSockRxBytes failed, err: ${JSON.stringify(err)}`);
        expect(err.code !== undefined).assertTrue();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0300
     * @tc.name Statistics::getSockRxBytes
     * @tc.desc Test getSockRxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0300", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0300";
      try {
        statistics.getSockfdRxBytes(undefined).then((data) => {
          console.log(`${caseName} getSockRxBytes success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} getSockRxBytes failed, err: ${JSON.stringify(err)}`);
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

    /**
     * @tc.number NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0400
     * @tc.name Statistics::getSockRxBytes
     * @tc.desc Test getSockRxBytes property
     */
    it("NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0400", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_StatisticsSocket_getSockRxBytes_Promise_0400";
      try {
        statistics..getSockfdRxBytes(null).then((data) => {
          console.log(`${caseName} getSockRxBytes success, data: ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} getSockRxBytes failed, err: ${JSON.stringify(err)}`);
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

    console.log("************* connection Test end*************");
  })
}

@
ohos
  .base
"
)
.
BusinessError
<
void
>
)
=>
void
)
{
  throw new Error('Function not implemented.');
}
