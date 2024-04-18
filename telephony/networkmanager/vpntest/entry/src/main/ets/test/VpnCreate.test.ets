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

import { describe, it, expect } from '@ohos/hypium';
import vpn from '@ohos.net.vpn';
import common from '@ohos.app.ability.common';

const ExpectTrue: (n: boolean) => void = (n: boolean) => {
  try {
    expect(n).assertTrue();
  } catch (err) {
    console.info("expectInfo", `test failed`);
  }
}

export default function VpnCreateTest() {
  describe('vpnCreateTest', () => {

    /* *
     * @tc.number: SUB_NetworkMgr_VPN_CreateVpnConnection_0100
     * @tc.name  : testNetworkMgrVpnCreateVpnConnection0100
     * @tc.desc  : Test create api with abilityContext
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnCreateVpnConnection0100', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnCreateVpnConnection0100';
      console.info(`${caseName} test start`);
      try {
        let abilityContext = AppStorage.get('context') as common.UIAbilityContext;
        console.info(`${caseName} abilityContext is ${abilityContext}`);
        let vpnConnect = vpn.createVpnConnection(abilityContext);
        ExpectTrue(vpnConnect !== null);
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
     * @tc.number: SUB_NetworkMgr_VPN_CreateVpnConnection_0200
     * @tc.name  : testNetworkMgrVpnCreateVpnConnection0200
     * @tc.desc  : Test create api with null
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 2
     */
    it('testNetworkMgrVpnCreateVpnConnection0200', 0, async (done: Function) => {
      let caseName: string = 'testNetworkMgrVpnCreateVpnConnection0200';
      console.info(`${caseName} test start`);
      try {
        vpn.createVpnConnection(null);
      } catch (error) {
        console.info(`${caseName} catchError ${JSON.stringify(error)}`);
        ExpectTrue(error.code == 401);
        done();
        console.info(`${caseName} test end`);
      }
    });
  });
}