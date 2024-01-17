/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, expect, it, afterEach, afterAll } from '@ohos/hypium';
import connection from '@ohos.net.connection';
import { BusinessError } from '@ohos.base';

let host: string = 'syysystem';
let host1: string = 'sytuingm';
let host2: string = 'awsyssy';
let ip: Array<string> = ['1.2.1.2', '2.3.2.3'];
let ip1: Array<string> = ['1.2.3.4', '2.4.2.5'];
let ip2: Array<string> = ['1.2.3.3', '2.3.2.6'];
let host_null: string = '';

function expectFalse() {
  try {
    expect().assertFail();
  } catch (err) {
    console.info('assertion failure');
  }
};

export default function MultiCastConnectionPromiseTest() {

  describe("MultiCastConnectionPromiseTest", () => {
    afterAll(async () => {
      console.log('MultiCastConnectionPromiseTest afterAll start');
      console.log('MultiCastConnectionPromiseTest afterAll end');
    });

    /**
     * @tc.number SUB_NetworkManager_DNS_addCustomDNSRule_Promise_0100
     * @tc.name connection::addCustomDnsRule
     * @tc.desc Test addCustomDNSRule property
     * @tc.level Level1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_NetworkManager_DNS_addCustomDNSRule_Promise_0100", 0, async (done: Function) => {
      let caseName: string = "SUB_NetworkManager_DNS_addCustomDNSRule_Promise_0100";
      connection.addCustomDnsRule(host, ip).then((data) => {
        console.log(`${caseName} addCustomDNSRule success, data: ${JSON.stringify(data)}`);
        expect(data == undefined).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} addCustomDNSRule failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number NetworkManager_DNS_addCustomDNSRule_Promise_0300
     * @tc.name connection::addCustomDnsRule
     * @tc.desc Test addCustomDNSRule property
     * @tc.level Level1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_NetworkManager_DNS_addCustomDNSRule_Promise_0300", 0, async (done: Function) => {
      let caseName: string = "SUB_NetworkManager_DNS_addCustomDNSRule_Promise_0300";
      connection.addCustomDnsRule(host_null, ip).then((data) => {
        console.log(`${caseName} addCustomDNSRule failed, data: ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} addCustomDNSRule failed, err: ${JSON.stringify(err)}`);
        expect(err.code == 401).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_NetworkManager_DNS_removeCustomDNSRule_Promise_0100
     * @tc.name connection::removeCustomDnsRule
     * @tc.desc Test removeCustomDNSRule property
     * @tc.level Level1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_NetworkManager_DNS_removeCustomDNSRule_Promise_0100", 0, async (done: Function) => {
      await connection.addCustomDnsRule(host1, ip1);
      let caseName: string = "SUB_NetworkManager_DNS_removeCustomDNSRule_Promise_0100";
      connection.removeCustomDnsRule(host).then((data) => {
        console.log(`${caseName} removeCustomDNSRule success, data: ${JSON.stringify(data)}`);
        expect(data == undefined).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} removeCustomDNSRule failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number SUB_NetworkManager_DNS_removeCustomDNSRule_Promise_0300
     * @tc.name connection::removeCustomDnsRule
     * @tc.desc Test removeCustomDNSRule property
     * @tc.level Level1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_NetworkManager_DNS_removeCustomDNSRule_Promise_0300", 0, async (done: Function) => {
      await connection.addCustomDnsRule(host1, ip1);
      connection.removeCustomDnsRule(host_null).then((data) => {
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        expect(err.code == 401).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_NetworkManager_DNS_clearCustomDNSRule_Promise_0100
     * @tc.name connection::clearCustomDnsRules
     * @tc.desc Test clearCustomDnsRules property
     * @tc.level Level1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_NetworkManager_DNS_clearCustomDNSRule_Promise_0100", 0, async (done: Function) => {
      await connection.addCustomDnsRule(host1, ip1);
      await connection.addCustomDnsRule(host2, ip2);
      let caseName: string = "SUB_NetworkManager_DNS_clearCustomDNSRule_Promise_0100";
      connection.clearCustomDnsRules().then((data) => {
        console.log(`${caseName} clearCustomDnsRules success, data: ${JSON.stringify(data)}`);
        expect(data == undefined).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} clearCustomDnsRules failed, err: ${JSON.stringify(err)}`);
        expectFalse();
        done();
      })
    });
  })
};