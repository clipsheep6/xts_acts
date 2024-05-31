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
import { describe, it, expect, beforeAll } from '@ohos/hypium';
import mdns from '@ohos.net.mdns';
import { BusinessError } from '@ohos.base';
import ethernet from '@ohos.net.ethernet';

let context: Context;
const ExpectTrue: (n: boolean, caseName: string) => void = (n: boolean, caseName: string) => {
  try {
    expect(n).assertTrue();
  } catch (err) {
    console.info("expectInfo", `${caseName} testNetworkMgr failed`);
  }
}
let address: string = "202.101.172.35";
const getName:()=>string=()=>{
  return "test"+ (Math.random()*10000).toFixed(0)
}
export default function mdnsTest() {
  describe('mdnsTest', () => {
    beforeAll(async () => {
      context = AppStorage.get('context') as Context;
      let info:ethernet.InterfaceConfiguration=await ethernet.getIfaceConfig('eth1')
      address=info.dnsServers
      console.log(`${JSON.stringify(info)} getAddress`)
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_0100
     * @tc.name  : testNetworkMgrAddLocalService0100
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService0100", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService0100";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
        }
        mdns.addLocalService(null, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${JSON.stringify(data)}`);
          if (error) {
            ExpectTrue(false, caseName);
            done();
          } else {
            ExpectTrue(false, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(true, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_0200
     * @tc.name  : testNetworkMgrAddLocalService0200
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService0200", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService0200";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${JSON.stringify(data)}`);
          if (error) {
            ExpectTrue(error.code === 401, caseName);
            done();
          } else {
            ExpectTrue(false, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_0300
     * @tc.name  : testNetworkMgrAddLocalService0300
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService0300", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService0300";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
          },
          serviceAttribute: [{
            key: "111", value: [1]
          }]
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${JSON.stringify(data)}`);
          if (error) {
            ExpectTrue(false, caseName);
            done();
          } else {
            ExpectTrue(data !== null, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_0400
     * @tc.name  : testNetworkMgrAddLocalService0400
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService0400", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService0400";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._udp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
          },
          serviceAttribute: [{
            key: "111", value: [1]
          }]
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${JSON.stringify(data)}`);
          if (error) {
            ExpectTrue(false, caseName);
            done();
          } else {
            ExpectTrue(data !== null, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_0500
     * @tc.name  : testNetworkMgrAddLocalService0500
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService0500", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService0500";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 10005568,
          host: {
            address: address,
          },
          serviceAttribute: [{
            key: "111", value: [1]
          }]
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${data}`);
          if (error) {
            ExpectTrue(error.code === 401, caseName);
            done();
          } else {
            ExpectTrue(false, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });

    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_0700
     * @tc.name  : testNetworkMgrAddLocalService0700
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService0700", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService0700";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${JSON.stringify(data)}`);
          if (error) {
            ExpectTrue(false, caseName);
            done();
          } else {
            ExpectTrue(data !== null, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });

    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_0900
     * @tc.name  : testNetworkMgrAddLocalService0900
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService0900", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService0900";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${JSON.stringify(data)}`);
          if (error) {
            ExpectTrue(error.code === 401, caseName);
            done();
          } else {
            ExpectTrue(false, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1000
     * @tc.name  : testNetworkMgrAddLocalService1000
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1000", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1000";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "...",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${JSON.stringify(data)}`);
          if (error) {
            ExpectTrue(error.code === 401, caseName);
            done();
          } else {
            ExpectTrue(false, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1100
     * @tc.name  : testNetworkMgrAddLocalService1100
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1100", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1100";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: "",
          port: 8081,
          host: {
            address: address
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: callback : ${JSON.stringify(error)}  | ${JSON.stringify(data)}`);
          if (error) {
            ExpectTrue(error.code === 401, caseName);
            done();
          } else {
            ExpectTrue(false, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1200
     * @tc.name  : testNetworkMgrAddLocalService1200
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1200", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1200";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          mdns.addLocalService(context, localServiceInfo, (error1: BusinessError, data1: mdns.LocalServiceInfo) => {
            if (error1) {
              console.info(`${caseName}: fail ${JSON.stringify(error1)}`);
              ExpectTrue(error1.code === 2204007, caseName);
              done();
            } else {
              console.info(`${caseName}: success ${JSON.stringify(data)}`);
              ExpectTrue(false, caseName);
              done();
            }
          });
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1300
     * @tc.name  : testNetworkMgrAddLocalService1300
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1300", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1300";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
        }
        mdns.addLocalService(null, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(false, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(false, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(true, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1400
     * @tc.name  : testNetworkMgrAddLocalService1400
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1400", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1400";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(false, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 401, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1500
     * @tc.name  : testNetworkMgrAddLocalService1500
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1500", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1500";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
          },
          serviceAttribute: [{
            key: "111", value: [1]
          }]
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(true, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(false, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1600
     * @tc.name  : testNetworkMgrAddLocalService1600
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1600", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1600";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._udp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
          },
          serviceAttribute: [{
            key: "111", value: [1]
          }]
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(data !== null, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(false, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1700
     * @tc.name  : testNetworkMgrAddLocalService1700
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1700", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1700";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 10018568,
          host: {
            address: address,
          },
          serviceAttribute: [{
            key: "111", value: [1]
          }]
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(false, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 401, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });

    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_1900
     * @tc.name  : testNetworkMgrAddLocalService1900
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService1900", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService1900";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(data !== null, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(false, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_2100
     * @tc.name  : testNetworkMgrAddLocalService2100
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService2100", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService2100";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(false, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 401, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_2200
     * @tc.name  : testNetworkMgrAddLocalService2200
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService2200", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService2200";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "...",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(false, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 401, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_2300
     * @tc.name  : testNetworkMgrAddLocalService2300
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService2300", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService2300";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: "",
          port: 8081,
          host: {
            address: address
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(false, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 401, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_2400
     * @tc.name  : testNetworkMgrAddLocalService2400
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService2400", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService2400";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address
          },
          serviceAttribute: []
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
            console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
            ExpectTrue(false, caseName);
            done();
          }).catch((error: BusinessError) => {
            console.info(`${caseName}: fail1 :  ${JSON.stringify(error)}`);
            ExpectTrue(error.code === 2204007, caseName);
            done();
          });
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail2 :  ${JSON.stringify(error)}`);
          ExpectTrue(error.code === 401, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_2500
     * @tc.name  : testNetworkMgrAddLocalService2500
     * @tc.desc  : Add an mDNS service Promise
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService2500", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService2500";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
            family: 2
          },
        }
        mdns.addLocalService(context, localServiceInfo).then((data: mdns.LocalServiceInfo) => {
          console.info(`${caseName}: suscess :  ${JSON.stringify(data)}`);
          ExpectTrue(true, caseName);
          done();
        }).catch((error: BusinessError) => {
          console.info(`${caseName}: fail :  ${JSON.stringify(error)}`);
          ExpectTrue(false, caseName);
          done();
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });

    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_AddLocalService_2700
     * @tc.name  : testNetworkMgrAddLocalService2700
     * @tc.desc  : Add an mDNS service callback
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrAddLocalService2700", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrAddLocalService2700";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
            family: 2
          },
        }
        mdns.addLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          if (error) {
            console.info(`${caseName}: callback : ${JSON.stringify(error)}  `);
            ExpectTrue(false, caseName);
            done();
          } else {
            console.info(`${caseName}: suscess : ${JSON.stringify(data)}`);
            ExpectTrue(true, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });

    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_RemoveLocalService_0100
     * @tc.name  : testNetworkMgrRemoveLocalService0100
     * @tc.desc  : Remove an mDNS service callBack
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrRemoveLocalService0100", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrRemoveLocalService0100";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
        }
        mdns.removeLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          if (error) {
            console.log(`${caseName} fail ${JSON.stringify(error)}`);
            ExpectTrue(error.code === 401, caseName);
            done();
          } else {
            console.log(`${caseName} success ${JSON.stringify(data)}`);
            ExpectTrue(false, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
    /* *
     * @tc.number: SUB_NetworkMgr_Mdns_RemoveLocalService_0200
     * @tc.name  : testNetworkMgrRemoveLocalService0200
     * @tc.desc  : Remove an mDNS service callBack
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : level 3
     */
    it("testNetworkMgrRemoveLocalService0200", 0, async (done: Function) => {
      const caseName: string = "testNetworkMgrRemoveLocalService0200";
      console.info(`${caseName} test start `);
      try {
        let localServiceInfo: mdns.LocalServiceInfo = {
          serviceType: "_print._tcp",
          serviceName: getName(),
          port: 8081,
          host: {
            address: address,
          },
          serviceAttribute: [{
            key: "111", value: [1]
          }]
        }
        mdns.removeLocalService(context, localServiceInfo, (error: BusinessError, data: mdns.LocalServiceInfo) => {
          if (error) {
            console.log(`${caseName} fail ${JSON.stringify(error)}`);
            ExpectTrue(error.code === 401, caseName);
            done();
          } else {
            console.log(`${caseName} success ${JSON.stringify(data)}`);
            ExpectTrue(false, caseName);
            done();
          }
        });
      } catch (err) {
        console.info(`${caseName}: err is catch ${err}`);
        ExpectTrue(false, caseName);
        done();
      }
      console.info(`${caseName} test end `);
    });
  });
}