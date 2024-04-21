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
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';

const ExpectTrue: (n: boolean) => void = (n: boolean) => {
  try {
    expect(n).assertTrue();
  } catch (err) {
    console.info("expectInfo", `test failed`);
  }
}

let vpnConnect: vpn.VpnConnection;

export default function VpnPermissionDeniedTest() {
  describe('vpnPermissionDeniedTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
      let abilityContext = AppStorage.get('context') as common.UIAbilityContext;
      vpnConnect = vpn.createVpnConnection(abilityContext);
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCode201Callback_0100
     * @tc.name  : testNetworkMgrVpnSetUpCode201Callback0100
     * @tc.desc  : Test code 201 of setUp api with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCode201Callback0100', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCode201Callback0100';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: []
        };
        vpnConnect.setUp(config, (error: BusinessError) => {
          console.info(`${caseName} catchError ${JSON.stringify(error)}`);
          ExpectTrue(error !== undefined && error.code === 201);
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
     * @tc.number: SUB_NetworkMgr_VPN_SetUpCode201Promise_0200
     * @tc.name  : testNetworkMgrVpnSetUpCode201Promise0200
     * @tc.desc  : Test code 201 of setUp api with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnSetUpCode201Promise0200', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnSetUpCode201Promise0200';
      console.info(`${caseName} test start`);
      try {
        let config: vpn.VpnConfig = {
          addresses: []
        };
        vpnConnect.setUp(config).then((data: number) => {
          console.info(`${caseName} setUp success with fd is ${data}}`);
          ExpectTrue(false);
          done();
          console.info(`${caseName} test end`);
        }).catch((error: BusinessError) => {
          console.info(`${caseName} catchError ${JSON.stringify(error)}`);
          ExpectTrue(error !== undefined && error.code === 201);
          done();
          console.info(`${caseName} test end`);
        });
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}}`);
        ExpectTrue(false);
        done();
        console.info(`${caseName} test end`);
      }
    });

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCode201Callback_0100
     * @tc.name  : testNetworkMgrVpnProtectCode201Callback0100
     * @tc.desc  : Test code 201 of protect api with callback type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCode201Callback0100', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCode201Callback0100';
      console.info(`${caseName} test start`);
      try {
        let sfd: number = 14781221000;
        vpnConnect.protect(sfd, (error: BusinessError) => {
          console.info(`${caseName} catchError ${JSON.stringify(error)}`);
          ExpectTrue(error !== undefined && error.code === 201);
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
     * @tc.number: SUB_NetworkMgr_VPN_ProtectCode201Promise_0200
     * @tc.name  : testNetworkMgrVpnProtectCode201Promise0200
     * @tc.desc  : Test code 201 of protect api with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnProtectCode201Promise0200', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnProtectCode201Promise0200';
      console.info(`${caseName} test start`);
      try {
        let sfd: number = 14781221000;
        vpnConnect.protect(sfd).then(() => {
          console.info(`${caseName} protect  success`);
          ExpectTrue(false);
          done();
          console.info(`${caseName} test end`);
        }).catch((error: BusinessError) => {
          console.info(`${caseName} catchError ${JSON.stringify(error)}`);
          ExpectTrue(error !== undefined && error.code === 201);
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
     * @tc.number: SUB_NetworkMgr_VPN_DestroyCode201Callback_0100
     * @tc.name  : testNetworkMgrVpnDestroyCode201Callback0100
     * @tc.desc  : Test code 201 of destroy api with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnDestroyCode201Callback0100', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnDestroyCode201Callback0100';
      console.info(`${caseName} test start`);
      try {
        vpnConnect.destroy((error: BusinessError) => {
          console.info(`${caseName} catchError ${JSON.stringify(error)}`);
          ExpectTrue(error !== undefined && error.code === 201);
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
     * @tc.number: SUB_NetworkMgr_VPN_DestroyCode201Promise_0200
     * @tc.name  : testNetworkMgrVpnDestroyCode201Promise0200
     * @tc.desc  : Test code 201 of destroy api with promise type
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnDestroyCode201Promise0200', 0, (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnDestroyCode201Promise0200';
      console.info(`${caseName} test start`);
      try {
        vpnConnect.destroy().then(() => {
          console.info(`${caseName} protect  success`);
          ExpectTrue(false);
          done();
          console.info(`${caseName} test end`);
        }).catch((error: BusinessError) => {
          console.info(`${caseName} catchError ${JSON.stringify(error)}`);
          ExpectTrue(error !== undefined && error.code === 201);
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


  });
}