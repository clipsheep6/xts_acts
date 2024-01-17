/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import testNapi from 'libdnsndknapitest.so'


function expectFalse() {
  try {
    expect().assertFail();
  } catch (err) {
    console.info('assertion failure');
  }
};

export default function NetworkManagerDnsGetAddrInfo1Test() {
  describe("NetworkManagerDnsGetAddrInfo1Test", () => {
    let hostAddressValid: string = 'www.baidu.com';
    let hostAddressInvalid: string = '';
    let serv: string = '';
    let netIdDefault: number = 0;
    let netIdInvalid: number = 10;
    let netIdUnreachable: number = 110;
    let functionValid: number = 0;
    let functionNull: number = 1;

    /* *
    * @tc.number  NETWORKMANAGER_DNS_GETADDRINFO_0100
    * @tc.name    getAddrInfo
    * @tc.desc    check get DNS result
    * @tc.size    MediumTest
    * @tc.type    Function
    * @tc.level   Level 2
    */
    it("NetworkManager_Dns_GetAddrInfo_0100", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_Dns_GetAddrInfo_0100";
      let status = testNapi.getaddrinfo(hostAddressValid, serv, netIdDefault);
      if (status != 0) {
        console.log(`${caseName} failed, err: ${JSON.stringify(status)}`);
        expectFalse();
        done();
      } else {
        console.log(`${caseName} success, data: ${JSON.stringify(status)}`);
        expect(status).assertEqual(0);
        done();
      }
    });

    /* *
    * @tc.number  NETWORKMANAGER_DNS_GETADDRINFO_0200
    * @tc.name    getAddrInfo
    * @tc.desc    check get DNS result
    * @tc.size    MediumTest
    * @tc.type    Function
    * @tc.level   Level 2
    */
    it("NetworkManager_Dns_GetAddrInfo_0200", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_Dns_GetAddrInfo_0200";
      let status = testNapi.getaddrinfo(hostAddressInvalid, serv, netIdDefault);
      if (status != 401) {
        console.log(`${caseName} failed, err: ${JSON.stringify(status)}`);
        expectFalse();
        done();
      } else {
        console.log(`${caseName} success, data: ${JSON.stringify(status)}`);
        expect(status).assertEqual(401);
        done();
      }
    });

    /* *
    * @tc.number  NETWORKMANAGER_DNS_GETADDRINFO_0300
    * @tc.name    getAddrInfo
    * @tc.desc    check get DNS result
    * @tc.size    MediumTest
    * @tc.type    Function
    * @tc.level   Level 2
    */
    it("NetworkManager_Dns_GetAddrInfo_0300", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_Dns_GetAddrInfo_0300";
      let status = testNapi.getaddrinfo(hostAddressValid, serv, netIdInvalid);
      if (status != 401) {
        console.log(`${caseName} failed, err: ${JSON.stringify(status)}`);
        expectFalse();
        done();
      } else {
        console.log(`${caseName} success, data: ${JSON.stringify(status)}`);
        expect(status).assertEqual(401);
        done();
      }
    });

    /* *
    * @tc.number  NETWORKMANAGER_DNS_GETADDRINFO_0400
    * @tc.name    getAddrInfo
    * @tc.desc    check get DNS result
    * @tc.size    MediumTest
    * @tc.type    Function
    * @tc.level   Level 2
    */
    it("NetworkManager_Dns_GetAddrInfo_0400", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_Dns_GetAddrInfo_0400";
      let status = testNapi.getaddrinfo(hostAddressValid, serv, netIdUnreachable);
      if (status != 2100003) {
        console.log(`${caseName} failed, err: ${JSON.stringify(status)}`);
        expectFalse();
        done();
      } else {
        console.log(`${caseName} success, data: ${JSON.stringify(status)}`);
        expect(status).assertEqual(2100003);
        done();
      }
    });

    /* *
    * @tc.number  NetworkManager_Dns_RegisterDnsResolver_0100
    * @tc.name    registerdnsresolver
    * @tc.desc    check register dns resolver
    * @tc.size    MediumTest
    * @tc.type    Function
    * @tc.level   Level 2
    */
    it("NetworkManager_Dns_RegisterDnsResolver_0100", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_Dns_RegisterDnsResolver_0100";
      let status = testNapi.registerdnsresolver(functionValid);
      if (status != 0) {
        console.log(`${caseName} failed, err: ${JSON.stringify(status)}`);
        expectFalse();
        done();
      } else {
        console.log(`${caseName} success, data: ${JSON.stringify(status)}`);
        expect(status).assertEqual(0);
        done();
      }
    });

    /* *
    * @tc.number  NetworkManager_Dns_RegisterDnsResolver_0200
    * @tc.name    registerdnsresolver
    * @tc.desc    check register dns resolver
    * @tc.size    MediumTest
    * @tc.type    Function
    * @tc.level   Level 2
    */
    it("NetworkManager_Dns_RegisterDnsResolver_0200", 0, async (done: Function) => {
      let caseName: string = "NetworkManager_Dns_RegisterDnsResolver_0200";
      let status = testNapi.registerdnsresolver(functionNull);
      if (status != 401) {
        console.log(`${caseName} failed, err: ${JSON.stringify(status)}`);
        expectFalse();
        done();
      } else {
        console.log(`${caseName} success, data: ${JSON.stringify(status)}`);
        expect(status).assertEqual(401);
        done();
      }
    });
  })
}
