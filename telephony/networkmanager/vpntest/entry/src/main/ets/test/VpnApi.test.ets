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

import { describe, beforeAll, it, expect } from '@ohos/hypium';
import vpn from '@ohos.net.vpn';
import common from '@ohos.app.ability.common';
import { BusinessError } from '@ohos.base';
import socket from '@ohos.net.socket';

const ExpectTrue: (n: boolean) => void = (n: boolean) => {
  try {
    expect(n).assertTrue();
  } catch (err) {
    console.info("expectInfo", `test failed`);
  }
}

let vpnConnect: vpn.VpnConnection;

function destroyVpn(caseName: string): Promise<void> {
  try {
    console.info(`${caseName} destroyVpn`);
    return vpnConnect.destroy();
  } catch (error) {
    console.info(`${caseName} destroyVpn with error ${JSON.stringify(error)}`);
    return new Promise((reject) => {
      reject(error);
    });
  }
}

function sleep(time: number): Promise<void> {
  return new Promise((resolve) => {
    setTimeout(resolve, time);
  });
}

export default function VpnApiTest() {
  describe('vpnApiTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
      let abilityContext = AppStorage.get('context') as common.UIAbilityContext;
      vpnConnect = vpn.createVpnConnection(abilityContext);
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0100
     * @tc.name  : testNetworkMgrVpnSetUpCallback0100
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpCallback0100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback0100';
      console.info(`${caseName} test start`);
      try {
        vpnConnect.setUp(null);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0200
     * @tc.name  : testNetworkMgrVpnSetUpCallback0200
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback0200';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: []
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    // /* *
    //  * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0300
    //  * @tc.name  : testNetworkMgrVpnSetUpCallback0300
    //  * @tc.desc  : Test setUp api of vpn with callback type
    //  * @tc.size  : MediumTest
    //  * @tc.type  : Function
    //  * @tc.level : level 2
    //  */
    // it('testNetworkMgrVpnSetUpCallback0300', 0, async (done: Function) => {
    //   let caseName: string = 'testNetworkMgrVpnSetUpCallback0300';
    //   console.info(`${caseName} test start`);
    //   try {
    //     let config: vpn.VpnConfig = {
    //       addresses: [{
    //         address: {
    //           address: '10.0.0.5'
    //         },
    //         prefixLength: 24
    //       }]
    //     };
    //     vpnConnect.setUp(config, (error: BusinessError, data: number) => {
    //       console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
    //       ExpectTrue(error.code === 2203001);
    //       done();
    //       console.info(`${caseName} test end`);
    //     });
    //   } catch (error) {
    //     console.info(`${caseName} catchError ${JSON.stringify(error)}`);
    //     ExpectTrue(false);
    //     done();
    //     console.info(`${caseName} test end`);
    //   }
    // });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0400
     * @tc.name  : testNetworkMgrVpnSetUpCallback0400
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback0400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback0400';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: 24
          }]
        };
        vpnConnect.setUp(config);
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error.code === 2203002);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0500
     * @tc.name  : testNetworkMgrVpnSetUpCallback0500
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback0500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback0500';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: 0
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(false);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0600
     * @tc.name  : testNetworkMgrVpnSetUpCallback0600
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback0600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback0600';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: -10
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(false);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0700
     * @tc.name  : testNetworkMgrVpnSetUpCallback0700
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback0700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback0700';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: -8.8
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(false);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0800
     * @tc.name  : testNetworkMgrVpnSetUpCallback0800
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback0800', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback0800';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: 10
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_0900
     * @tc.name  : testNetworkMgrVpnSetUpCallback0900
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback0900', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback0900';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: 8.8
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1000
     * @tc.name  : testNetworkMgrVpnSetUpCallback1000
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback1000', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1000';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: 'hello'
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1100
     * @tc.name  : testNetworkMgrVpnSetUpCallback1100
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback1100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1100';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: ''
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1200
     * @tc.name  : testNetworkMgrVpnSetUpCallback1200
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback1200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1200';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 1
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1300
     * @tc.name  : testNetworkMgrVpnSetUpCallback1300
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback1300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1300';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 2
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1400
     * @tc.name  : testNetworkMgrVpnSetUpCallback1400
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpCallback1400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1400';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 3
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1500
     * @tc.name  : testNetworkMgrVpnSetUpCallback1500
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpCallback1500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1500';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              port: -1
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1600
     * @tc.name  : testNetworkMgrVpnSetUpCallback1600
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback1600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1600';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              port: 0
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1700
     * @tc.name  : testNetworkMgrVpnSetUpCallback1700
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback1700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1700';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              port: 65535
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1800
     * @tc.name  : testNetworkMgrVpnSetUpCallback1800
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpCallback1800', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1700';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              port: 65536
            },
            prefixLength: 24
          }],
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_1900
     * @tc.name  : testNetworkMgrVpnSetUpCallback1900
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpCallback1900', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback1900';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
            },
            prefixLength: 24
          }],
          routes: [{
            interface: 'hello-world',
            destination: {
              address: {
                address: '10.0.1.5'
              },
              prefixLength: 24
            },
            gateway: {
              address: '10.0.0.0'
            },
            hasGateway: false,
            isDefaultRoute: true
          }]
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_2000
     * @tc.name  : testNetworkMgrVpnSetUpCallback2000
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCallback2000', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback2000';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
            },
            prefixLength: 24
          }],
          routes: []
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_2100
     * @tc.name  : testNetworkMgrVpnSetUpCallback2100
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     * */
    it('testNetworkMgrVpnSetUpCallback2100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback2100';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 1
            },
            prefixLength: 24
          }],
          isIPv4Accepted: false
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_2200
     * @tc.name  : testNetworkMgrVpnSetUpCallback2200
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     * */
    it('testNetworkMgrVpnSetUpCallback2200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback2200';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 1
            },
            prefixLength: 24
          }],
          isIPv4Accepted: true
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_2300
     * @tc.name  : testNetworkMgrVpnSetUpCallback2300
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     * */
    it('testNetworkMgrVpnSetUpCallback2300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback2300';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 2
            },
            prefixLength: 24
          }],
          isIPv6Accepted: true
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCallback_2400
     * @tc.name  : testNetworkMgrVpnSetUpCallback2400
     * @tc.desc  : Test setUp api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     * */
    it('testNetworkMgrVpnSetUpCallback2400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCallback2400';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 2
            },
            prefixLength: 24
          }],
          isIPv6Accepted: false
        };
        vpnConnect.setUp(config, (error: BusinessError, data: number) => {
          console.info(`${caseName} error is ${JSON.stringify(error)} and data is ${data}`);
          ExpectTrue(error === undefined && data > 0);
          done();
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0100
     * @tc.name  : testNetworkMgrVpnSetUpPromise0100
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpPromise0100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise0100';
      console.info(`${caseName} test start`);
      try {
        await vpnConnect.setUp(null);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        let err: BusinessError = error as BusinessError;
        ExpectTrue(err.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0200
     * @tc.name  : testNetworkMgrVpnSetUpPromise0200
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise0200';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: []
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} result sfd is ${sfd}`);
        ExpectTrue(sfd > 0);
        done();
        console.info(`${caseName} test end`);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    // /* *
    //  * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0300
    //  * @tc.name  : testNetworkMgrVpnSetUpPromise0300
    //  * @tc.desc  : Test setUp api of vpn with promise type
    //  * @tc.size  : MediumTest
    //  * @tc.type  : Function
    //  * @tc.level : level 2
    //  */
    // it('testNetworkMgrVpnSetUpPromise0300', 0, async (done: Function) => {
    //   let caseName: string = 'testNetworkMgrVpnSetUpPromise0300';
    //   console.info(`${caseName} test start`);
    //   try {
    //     let config: vpn.VpnConfig = {
    //       addresses: [{
    //         address: {
    //           address: '10.0.0.5'
    //         },
    //         prefixLength: 24
    //       }]
    //     };
    //     await vpnConnect.setUp(config);
    //     ExpectTrue(false);
    //     done();
    //   } catch (error) {
    //     console.info(`${caseName} catchError ${JSON.stringify(error)}`);
    //     let e: BusinessError = error as BusinessError;
    //     ExpectTrue(e.code === 2203001);
    //     done();
    //     console.info(`${caseName} test end`);
    //   }
    // });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0400
     * @tc.name  : testNetworkMgrVpnSetUpPromise0400
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpPromise0400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise0400';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: 24
          }]
        };
        await vpnConnect.setUp(config);
        await vpnConnect.setUp(config);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        let e: BusinessError = error as BusinessError;
        ExpectTrue(e.code === 2203002);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0500
     * @tc.name  : testNetworkMgrVpnSetUpPromise0500
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise0500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise0500';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: 0
          }],
        };
        await vpnConnect.setUp(config);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0600
     * @tc.name  : testNetworkMgrVpnSetUpPromise0600
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpPromise0600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise0600';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: -10
          }],
        };
        await vpnConnect.setUp(config);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0700
     * @tc.name  : testNetworkMgrVpnSetUpPromise0700
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpPromise0700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise0700';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: -8.8
          }],
        };
        await vpnConnect.setUp(config);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0800
     * @tc.name  : testNetworkMgrVpnSetUpPromise0800
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise0800', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise0800';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: 10
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
        console.info(`${caseName} test end`);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_0900
     * @tc.name  : testNetworkMgrVpnSetUpPromise0900
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise0900', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise0900';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5'
            },
            prefixLength: 8.8
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
        console.info(`${caseName} test end`);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1000
     * @tc.name  : testNetworkMgrVpnSetUpPromise1000
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise1000', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1000';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: 'hello'
            },
            prefixLength: 24
          }],
        };
        await vpnConnect.setUp(config);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1100
     * @tc.name  : testNetworkMgrVpnSetUpPromise1100
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpPromise1100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1100';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: ''
            },
            prefixLength: 24
          }],
        };
        await vpnConnect.setUp(config);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1200
     * @tc.name  : testNetworkMgrVpnSetUpPromise1200
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise1200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1200';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 1
            },
            prefixLength: 24
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
        console.info(`${caseName} test end`);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1300
     * @tc.name  : testNetworkMgrVpnSetUpPromise1300
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise1300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1300';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 2
            },
            prefixLength: 24
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
        console.info(`${caseName} test end`);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1400
     * @tc.name  : testNetworkMgrVpnSetUpPromise1400
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise1400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1400';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 3
            },
            prefixLength: 24
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        ExpectTrue(sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1500
     * @tc.name  : testNetworkMgrVpnSetUpPromise1500
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise1500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1500';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              port: -1
            },
            prefixLength: 24
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        ExpectTrue(sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1600
     * @tc.name  : testNetworkMgrVpnSetUpPromise1600
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise1600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1600';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              port: 0
            },
            prefixLength: 24
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} test result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1700
     * @tc.name  : testNetworkMgrVpnSetUpPromise1700
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it('testNetworkMgrVpnSetUpPromise1700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1700';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              port: 65535
            },
            prefixLength: 24
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} test result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1800
     * @tc.name  : testNetworkMgrVpnSetUpPromise1800
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise1800', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1700';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              port: 65536
            },
            prefixLength: 24
          }],
        };
        let sfd: number = await vpnConnect.setUp(config);
        ExpectTrue(sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_1900
     * @tc.name  : testNetworkMgrVpnSetUpPromise1900
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise1900', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise1900';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
            },
            prefixLength: 24
          }],
          routes: [{
            interface: 'hello-world',
            destination: {
              address: {
                address: '10.0.1.5'
              },
              prefixLength: 24
            },
            gateway: {
              address: '10.0.0.0'
            },
            hasGateway: false,
            isDefaultRoute: true
          }]
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} test result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_2000
     * @tc.name  : testNetworkMgrVpnSetUpPromise2000
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpPromise2000', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise2000';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
            },
            prefixLength: 24
          }],
          routes: []
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} test result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_2100
     * @tc.name  : testNetworkMgrVpnSetUpPromise2100
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     * */
    it('testNetworkMgrVpnSetUpPromise2100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise2100';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 1
            },
            prefixLength: 24
          }],
          isIPv4Accepted: false
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} test result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_2200
     * @tc.name  : testNetworkMgrVpnSetUpPromise2200
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     * */
    it('testNetworkMgrVpnSetUpPromise2200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise2200';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 1
            },
            prefixLength: 24
          }],
          isIPv4Accepted: true
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} test result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_2300
     * @tc.name  : testNetworkMgrVpnSetUpPromise2300
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     * */
    it('testNetworkMgrVpnSetUpPromise2300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise2300';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 2
            },
            prefixLength: 24
          }],
          isIPv6Accepted: true
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} test result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpPromise_2400
     * @tc.name  : testNetworkMgrVpnSetUpPromise2400
     * @tc.desc  : Test setUp api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     * */
    it('testNetworkMgrVpnSetUpPromise2400', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpPromise2400';
      console.info(`${caseName} test start`);
      try {
        await destroyVpn(caseName);
        await sleep(1000);
        let config: vpn.VpnConfig = {
          addresses: [{
            address: {
              address: '10.0.0.5',
              family: 2
            },
            prefixLength: 24
          }],
          isIPv6Accepted: false
        };
        let sfd: number = await vpnConnect.setUp(config);
        console.info(`${caseName} test result sfd is ${sfd}`);
        ExpectTrue(sfd !== undefined && sfd > 0);
        done();
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCallback_0100
     * @tc.name  : testNetworkMgrVpnProtectCallback0100
     * @tc.desc  : Test protect api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCallback0100', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCallback0100';
      console.info(`${caseName} test start`);
      try {
        let sfd: number = -1;
        vpnConnect.protect(sfd, (error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 2203004);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCallback_0200
     * @tc.name  : testNetworkMgrVpnProtectCallback0200
     * @tc.desc  : Test protect api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCallback0200', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCallback0200';
      console.info(`${caseName} test start`);
      try {
        let sfd: number = 0;
        vpnConnect.protect(sfd, (error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 2203004);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCallback_0300
     * @tc.name  : testNetworkMgrVpnProtectCallback0300
     * @tc.desc  : Test protect api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCallback0300', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCallback0300';
      console.info(`${caseName} test start`);
      try {
        let sfd: number = 12345678912;
        vpnConnect.protect(sfd, (error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 2203004);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    // /* *
    //  * @tc.number: SUB_NetworkMgr_VPN_ProtectCallback_0400
    //  * @tc.name  : testNetworkMgrVpnProtectCallback0400
    //  * @tc.desc  : Test protect api of vpn with callback type
    //  * @tc.size  : MediumTest
    //  * @tc.type  : Function
    //  * @tc.level : level 2
    //  */
    // it('testNetworkMgrVpnProtectCallback0400', 0, (done: Function) => {
    //   let caseName: string = 'testNetworkMgrVpnProtectCallback0400';
    //   console.info(`${caseName} test start`);
    //   try {
    //     let sfd: number = 1234567890000;
    //     vpnConnect.protect(sfd, (error: BusinessError) => {
    //       console.info(`${caseName} result ${JSON.stringify(error)}`);
    //       ExpectTrue(error.code === 2203004); // {"code":-1,"message":""}
    //       done();
    //       console.info(`${caseName} test end`);
    //     });
    //   } catch (error) {
    //     console.info(`${caseName} catchError ${JSON.stringify(error)}`);
    //     ExpectTrue(false);
    //     done();
    //     console.info(`${caseName} test end`);
    //   }
    // });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCallback_0500
     * @tc.name  : testNetworkMgrVpnProtectCallback0500
     * @tc.desc  : Test protect api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCallback0500', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCallback0500';
      console.info(`${caseName} test start`);
      try {
        vpnConnect.protect(null, (error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(false);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCallback_0600
     * @tc.name  : testNetworkMgrVpnProtectCallback0600
     * @tc.desc  : Test protect api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCallback0600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCallback0600';
      console.info(`${caseName} test start`);
      try {
        let tcp: socket.TCPSocket = socket.constructTCPSocketInstance();
        let ipAddress: socket.NetAddress = {
          address: '0.0.0.0'
        };
        await tcp.bind(ipAddress);
        let sfd: number = await tcp.getSocketFd();
        console.info(`${caseName} sfd is ${sfd}`);
        vpnConnect.protect(sfd, (error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(error === undefined);
          done();
          console.info(`${caseName} test end`);
        });

      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCallback_0700
     * @tc.name  : testNetworkMgrVpnProtectCallback0700
     * @tc.desc  : Test protect api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCallback0700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCallback0700';
      console.info(`${caseName} test start`);
      try {
        let tcp: socket.TCPSocket = socket.constructTCPSocketInstance();
        let ipAddress: socket.NetAddress = {
          address: '0.0.0.0'
        };
        await tcp.bind(ipAddress);
        let sfd: number = await tcp.getSocketFd();
        console.info(`${caseName} sfd is ${sfd}`);
        // fist time
        vpnConnect.protect(sfd, (error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(error === undefined);
          // again
          vpnConnect.protect(sfd, (error: BusinessError) => {
            console.info(`${caseName} result ${JSON.stringify(error)}`);
            ExpectTrue(error === undefined);
            done();
            console.info(`${caseName} test end`);
          });
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCallback_0800
     * @tc.name  : testNetworkMgrVpnProtectCallback0800
     * @tc.desc  : Test protect api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCallback0800', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCallback0800';
      console.info(`${caseName} test start`);
      try {
        class StringToNumber {
        }
        let ts: StringToNumber = {};
        let sfd: number = ts as number;
        console.info(`${caseName} ts is ${JSON.stringify(ts)} and sfd is ${JSON.stringify(sfd)}`);
        vpnConnect.protect(sfd, (error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(false);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code === '401');
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectPromise_0100
     * @tc.name  : testNetworkMgrVpnProtectPromise0100
     * @tc.desc  : Test protect api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectPromise0100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectPromise0100';
      console.info(`${caseName} test start`);
      try {
        let sfd: number = -1;
        await vpnConnect.protect(sfd);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        let e: BusinessError = error as BusinessError;
        ExpectTrue(e.code === 2203004);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectPromise_0200
     * @tc.name  : testNetworkMgrVpnProtectPromise0200
     * @tc.desc  : Test protect api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectPromise0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectPromise0200';
      console.info(`${caseName} test start`);
      try {
        let sfd: number = 0;
        await vpnConnect.protect(sfd);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        let e: BusinessError = error as BusinessError;
        ExpectTrue(e.code === 2203004);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectPromise_0300
     * @tc.name  : testNetworkMgrVpnProtectPromise0300
     * @tc.desc  : Test protect api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectPromise0300', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectPromise0300';
      console.info(`${caseName} test start`);
      try {
        let sfd: number = 12345678912;
        await vpnConnect.protect(sfd);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        let e: BusinessError = error as BusinessError;
        ExpectTrue(e.code === 2203004);
        done();
        console.info(`${caseName} test end`);
      }
    });

    // /* *
    //  * @tc.number: SUB_NetworkMgr_VPN_ProtectPromise_0400
    //  * @tc.name  : testNetworkMgrVpnProtectPromise0400
    //  * @tc.desc  : Test protect api of vpn with promise type
    //  * @tc.size  : MediumTest
    //  * @tc.type  : Function
    //  * @tc.level : level 2
    //  */
    // it('testNetworkMgrVpnProtectPromise0400', 0, async (done: Function) => {
    //   let caseName: string = 'testNetworkMgrVpnProtectPromise0400';
    //   console.info(`${caseName} test start`);
    //   try {
    //     let sfd: number = 1234567890000;
    //     await vpnConnect.protect(sfd);
    //   } catch (error) {
    //     console.info(`${caseName} catchError ${JSON.stringify(error)}`);
    //     let e: BusinessError = error as BusinessError;
    //     ExpectTrue(error.code === 2203004); // {"code":-1,"message":""}
    //     done();
    //     console.info(`${caseName} test end`);
    //   }
    // });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectPromise_0500
     * @tc.name  : testNetworkMgrVpnProtectPromise0500
     * @tc.desc  : Test protect api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectPromise0500', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectPromise0500';
      console.info(`${caseName} test start`);
      try {
        await vpnConnect.protect(null);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectPromise_0600
     * @tc.name  : testNetworkMgrVpnProtectPromise0600
     * @tc.desc  : Test protect api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectPromise0600', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectPromise0600';
      console.info(`${caseName} test start`);
      try {
        let tcp: socket.TCPSocket = socket.constructTCPSocketInstance();
        let ipAddress: socket.NetAddress = {
          address: '0.0.0.0'
        };
        await tcp.bind(ipAddress);
        let sfd: number = await tcp.getSocketFd();
        console.info(`${caseName} sfd is ${sfd}`);
        await vpnConnect.protect(sfd);
        ExpectTrue(true);
        done();
        console.info(`${caseName} test end`);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectPromise_0700
     * @tc.name  : testNetworkMgrVpnProtectPromise0700
     * @tc.desc  : Test protect api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectPromise0700', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectPromise0700';
      console.info(`${caseName} test start`);
      try {
        let tcp: socket.TCPSocket = socket.constructTCPSocketInstance();
        let ipAddress: socket.NetAddress = {
          address: '0.0.0.0'
        };
        await tcp.bind(ipAddress);
        let sfd: number = await tcp.getSocketFd();
        console.info(`${caseName} sfd is ${sfd}`);
        // fist time
        await vpnConnect.protect(sfd);
        // again
        await vpnConnect.protect(sfd);
        ExpectTrue(true);
        done();
        console.info(`${caseName} test end`);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectPromise_0800
     * @tc.name  : testNetworkMgrVpnProtectPromise0800
     * @tc.desc  : Test protect api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectPromise0800', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectPromise0800';
      console.info(`${caseName} test start`);
      try {
        class StringToNumber {
        }
        let ts: StringToNumber = {};
        let sfd: number = ts as number;
        await vpnConnect.protect(sfd);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code === '401');
        done();
        console.info(`${caseName} test end`);
      }
    });


    /* *
     * @tc.number: SUB_NetworkMgr_VPN_DestroyCallback_0100
     * @tc.name  : testNetworkMgrVpnDestroyCallback0100
     * @tc.desc  : Test destroy api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnDestroyCallback0100', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnDestroyCallback0100';
      console.info(`${caseName} test start`);
      try {
        vpnConnect.destroy((error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(error === undefined);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_DestroyCallback_0200
     * @tc.name  : testNetworkMgrVpnDestroyCallback0200
     * @tc.desc  : Test destroy api of vpn with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnDestroyCallback0200', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnDestroyCallback0200';
      console.info(`${caseName} test start`);
      try {
        let callback: (error: BusinessError) => void = (error: BusinessError) => {
          console.info(`${caseName} result ${JSON.stringify(error)}`);
          ExpectTrue(error === undefined);
          done();
          console.info(`${caseName} test end`);
        };
        vpnConnect.destroy(callback);
        vpnConnect.destroy(callback);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_DestroyPromise_0100
     * @tc.name  : testNetworkMgrVpnDestroyPromise0100
     * @tc.desc  : Test destroy api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnDestroyPromise0100', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnDestroyPromise0100';
      console.info(`${caseName} test start`);
      try {
        vpnConnect.destroy().then(() => {
          console.info(`${caseName} success`);
          ExpectTrue(true);
          done();
          console.info(`${caseName} test end`);
        }).catch((error: BusinessError) => {
          console.info(`${caseName} fail with error ${JSON.stringify(error)}`);
          ExpectTrue(false);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_DestroyPromise_0200
     * @tc.name  : testNetworkMgrVpnDestroyPromise0200
     * @tc.desc  : Test destroy api of vpn with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnDestroyPromise0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnDestroyPromise0200';
      console.info(`${caseName} test start`);
      try {
        await vpnConnect.destroy();
        await vpnConnect.destroy();
        ExpectTrue(true);
        done();
        console.info(`${caseName} test end`);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });


  });
}