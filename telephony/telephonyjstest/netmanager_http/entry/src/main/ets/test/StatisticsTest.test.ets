/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import statistics from '@ohos.net.statistics';
import sim from '@ohos.telephony.sim';
import radio from '@ohos.telephony.radio';
import { BusinessError } from '@ohos.base';

function expectFalse() {
  try {
    expect().assertFail();
  } catch (err) {
    console.info('assertion failure');
  }
}

export default function StatisticsTest() {
  describe("StatisticsTest", () => {
    let delayTime: number = 5000;
    const DATA_0: number = 0;
    let code_201: number = 201;
    let errCode_201: string = "201";

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0100
     * @tc.name Test getIfaceRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0100';
      let ifaceName: string = "eth0";
      statistics.getIfaceRxBytes(ifaceName, (err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getIfaceRxBytes fail ${JSON.stringify(err)} `);
          expect(err.code == 2103005 || err.code == 2103012).assertTrue();
          done();
        } else {
          console.log(`${caseName} getIfaceRxBytes ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0200
     * @tc.name Test getIfaceRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0200', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0200';
      let ifaceName: string = "wlan0";
      statistics.getIfaceRxBytes(ifaceName, (err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getIfaceRxBytes fail ${JSON.stringify(err)} `);
          expectFalse();
          done();
        } else {
          console.log(`${caseName} getIfaceRxBytes success ${JSON.stringify(data)}`);
          expect(data >= DATA_0).assertTrue();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0300
     * @tc.name Test getIfaceRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0300', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0300';
      let ifaceName: string = "wlan1";
      statistics.getIfaceRxBytes(ifaceName, (err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getIfaceRxBytes fail ${JSON.stringify(err)} `);
          expect(err.code == 2103005 || err.code == 2103012).assertTrue();
          done();
        } else {
          console.log(`${caseName} getIfaceRxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0400
     * @tc.name Test getIfaceRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0400', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceRxBytes_Async_0400';
      let iFaceName: string = null;
      try {
        statistics.getIfaceRxBytes(iFaceName, (err: BusinessError, data: number) => {
          if (err) {
            console.log(`${caseName} getIfaceRxBytes fail ${JSON.stringify(err)}`);
            expect(err != undefined).assertTrue();
            done();
          } else {
            console.log(`${caseName} getIfaceRxBytes success ${JSON.stringify(data)}`);
            expectFalse();
            done();
          }
        });
      } catch (err) {
        let e: BusinessError = err as BusinessError;
        console.log(`${caseName} getIfaceRxBytes into catch ${JSON.stringify(e)}`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0100
     * @tc.name Test getIfaceRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0100';
      let ifaceName: string = "eth0";
      statistics.getIfaceRxBytes(ifaceName).then((data: number) => {
        console.log(`${caseName} getIfaceRxBytes success ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getIfaceRxBytes fail ${JSON.stringify(err)} `);
        expect(err.code == 2103005 || err.code == 2103012).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0200
     * @tc.name Test getIfaceRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0200', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0200';
      let ifaceName: string = "wlan0";
      statistics.getIfaceRxBytes(ifaceName).then((data) => {
        console.log(`${caseName} getIfaceRxBytes success ${JSON.stringify(data)}`);
        expect(data >= DATA_0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getIfaceRxBytes fail ${JSON.stringify(err)} `);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0300
     * @tc.name Test getIfaceRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0300', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0300';
      let ifaceName: string = "wlan1";
      statistics.getIfaceRxBytes(ifaceName).then((data) => {
        console.log(`${caseName} getIfaceRxBytes success ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getIfaceRxBytes fail ${JSON.stringify(err)} `);
        expect(err.code == 2103005 || err.code == 2103012).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0400
     * @tc.name Test getIfaceRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0400', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceRxBytes_Promise_0400';
      let iFaceName: string = null;
      try {
        statistics.getIfaceRxBytes(iFaceName).then((data: number) => {
          console.log(`${caseName} getIfaceRxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} getIfaceRxBytes fail ${JSON.stringify(err)}`);
          expect(err != undefined).assertTrue();
          done();
        });
      } catch (err) {
        let e: BusinessError = err as BusinessError;
        console.log(`${caseName} getIfaceRxBytes into catch ${JSON.stringify(e)}`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0100
     * @tc.name Test getIfaceTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0100';
      let ifaceName: string = "eth0";
      statistics.getIfaceTxBytes(ifaceName, (err, data) => {
        if (err) {
          console.log(`${caseName} getIfaceTxBytes fail ${JSON.stringify(err)} `);
          expect(err.code == 2103005 || err.code == 2103012).assertTrue();
          done();
        } else {
          console.log(`${caseName} getIfaceTxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0200
     * @tc.name Test getIfaceTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0200', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0200';
      let ifaceName: string = "wlan0";
      statistics.getIfaceTxBytes(ifaceName, (err, data) => {
        if (err) {
          console.log(`${caseName} getIfaceTxBytes fail ${JSON.stringify(err)} `);
          expectFalse();
          done();
        } else {
          console.log(`${caseName} getIfaceTxBytes success ${JSON.stringify(data)}`);
          expect(data >= DATA_0).assertTrue();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0300
     * @tc.name Test getIfaceTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0300', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0300';
      let ifaceName: string = "wlan1";
      statistics.getIfaceTxBytes(ifaceName, (err, data) => {
        if (err) {
          console.log(`${caseName} getIfaceTxBytes fail ${JSON.stringify(err)} `);
          expect(err.code == 2103005 || err.code == 2103012).assertTrue();
          done();
        } else {
          console.log(`${caseName} getIfaceTxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0400
     * @tc.name Test getIfaceTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0400', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceTxBytes_Async_0400';
      let iFaceName: string = null;
      try {
        statistics.getIfaceTxBytes(iFaceName, (err: BusinessError, data: number) => {
          if (err) {
            console.log(`${caseName} getIfaceTxBytes fail ${JSON.stringify(err)}`);
            expect(err != undefined).assertTrue();
            done();
          } else {
            console.log(`${caseName} getIfaceTxBytes success ${JSON.stringify(data)}`);
            expectFalse();
            done();
          }
        });
      } catch (err) {
        let e: BusinessError = err as BusinessError;
        console.log(`${caseName} getIfaceTxBytes into catch ${JSON.stringify(e)}`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0100
     * @tc.name Test getIfaceTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0100';
      let ifaceName: string = "eth0";
      statistics.getIfaceTxBytes(ifaceName).then((data) => {
        console.log(`${caseName} getIfaceTxBytes success ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getIfaceTxBytes fail ${JSON.stringify(err)} `);
        expect(err.code == 2103005 || err.code == 2103012).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0200
     * @tc.name Test getIfaceTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0200', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0200';
      let ifaceName: string = "wlan0";
      statistics.getIfaceTxBytes(ifaceName).then((data) => {
        console.log(`${caseName} getIfaceTxBytes success ${JSON.stringify(data)}`);
        expect(data >= DATA_0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getIfaceTxBytes fail ${JSON.stringify(err)} `);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0300
     * @tc.name Test getIfaceTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0300', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0300';
      let ifaceName: string = "wlan1";
      statistics.getIfaceTxBytes(ifaceName).then((data) => {
        console.log(`${caseName} getIfaceTxBytes success ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getIfaceTxBytes fail ${JSON.stringify(err)} `);
        expect(err.code == 2103005 || err.code == 2103012).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0400
     * @tc.name Test getIfaceTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0400', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getIfaceTxBytes_Promise_0400';
      let iFaceName: string = null;
      try {
        statistics.getIfaceTxBytes(iFaceName).then((data: number) => {
          console.log(`${caseName} getIfaceTxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }).catch((err: BusinessError) => {
          console.log(`${caseName} getIfaceTxBytes fail ${JSON.stringify(err)}`);
          expect(err != undefined).assertTrue();
          done();
        });
      } catch (err) {
        let e: BusinessError = err as BusinessError;
        console.log(`${caseName} getIfaceTxBytes into catch ${JSON.stringify(e)}`);
        expect(e.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getAllTxBytes_Async_0100
     * @tc.name Test getAllTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getAllTxBytes_Async_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getAllTxBytes_Async_0100';
      statistics.getAllTxBytes((err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getAllTxBytes fail ${JSON.stringify(err)} `);
          expectFalse();
          done();
        } else {
          console.log(`${caseName} getAllTxBytes success ${JSON.stringify(data)}`);
          expect(data >= DATA_0).assertTrue();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getAllTxBytes_Promise_0100
     * @tc.name Test getAllTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getAllTxBytes_Promise_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getAllTxBytes_Promise_0100';
      statistics.getAllTxBytes().then((data: number) => {
        console.log(`${caseName} getAllTxBytes success ${JSON.stringify(data)}`);
        expect(data >= DATA_0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getAllTxBytes fail ${JSON.stringify(err)} `);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getAllRxBytes_Async_0100
     * @tc.name Test getAllRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getAllRxBytes_Async_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getAllRxBytes_Async_0100';
      statistics.getAllRxBytes((err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getAllRxBytes fail ${JSON.stringify(err)} `);
          expectFalse();
          done();
        } else {
          console.log(`${caseName} getAllRxBytes success ${JSON.stringify(data)}`);
          expect(data >= DATA_0).assertTrue();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getAllRxBytes_Promise_0100
     * @tc.name Test getAllRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getAllRxBytes_Promise_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getAllRxBytes_Promise_0100';
      statistics.getAllRxBytes().then((data: number) => {
        console.log(`${caseName} getAllRxBytes success ${JSON.stringify(data)}`);
        expect(data >= DATA_0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getAllRxBytes fail ${JSON.stringify(err)} `);
        expectFalse();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getUidRxBytes_Async_0100
     * @tc.name Test getUidRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getUidRxBytes_Async_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getUidRxBytes_Async_0100';
      let uid: number = 20010084;
      statistics.getUidRxBytes(uid, (err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getUidRxBytes fail ${JSON.stringify(err)} `);
          expect(err.code == 2103005).assertTrue();
          done();
        } else {
          console.log(`${caseName} getUidRxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getUidRxBytes_Async_0200
     * @tc.name Test getUidRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getUidRxBytes_Async_0200', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getUidRxBytes_Async_0200';
      let uid: number = 20010084;
      statistics.getUidRxBytes(uid, (err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getUidRxBytes fail ${JSON.stringify(err)} `);
          expect(err.code == 2103005).assertTrue();
          done();
        } else {
          console.log(`${caseName} getUidRxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getUidRxBytes_Promise_0100
     * @tc.name Test getUidRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getUidRxBytes_Promise_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getUidRxBytes_Promise_0100';
      let uid: number = 20010084;
      statistics.getUidRxBytes(uid).then((data: number) => {
        console.log(`${caseName} getUidRxBytes success ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getUidRxBytes fail ${JSON.stringify(err)} `);
        expect(err.code == 2103005).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getUidRxBytes_Promise_0200
     * @tc.name Test getUidRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getUidRxBytes_Promise_0200', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getUidRxBytes_Promise_0200';
      let uid: number = 20010084;
      statistics.getUidRxBytes(uid).then((data: number) => {
        console.log(`${caseName} getUidRxBytes success ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getUidRxBytes fail ${JSON.stringify(err)} `);
        expect(err.code == 2103005).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getUidTxBytes_Async_0100
     * @tc.name Test getUidTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getUidTxBytes_Async_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getUidTxBytes_Async_0100';
      let uid: number = 20010084;
      statistics.getUidTxBytes(uid, (err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getUidTxBytes fail ${JSON.stringify(err)} `);
          expect(err.code == 2103005).assertTrue();
          done();
        } else {
          console.log(`${caseName} getUidTxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getUidTxBytes_Async_0200
     * @tc.name Test getUidTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getUidTxBytes_Async_0200', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getUidTxBytes_Async_0200';
      let uid: number = 20010084;
      statistics.getUidTxBytes(uid, (err: BusinessError, data: number) => {
        if (err) {
          console.log(`${caseName} getUidTxBytes fail ${JSON.stringify(err)} `);
          expect(err.code == 2103005).assertTrue();
          done();
        } else {
          console.log(`${caseName} getUidTxBytes success ${JSON.stringify(data)}`);
          expectFalse();
          done();
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getUidTxBytes_Promise_0100
     * @tc.name Test getUidTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getUidTxBytes_Promise_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getUidTxBytes_Promise_0100';
      let uid: number = 20010084;
      statistics.getUidTxBytes(uid).then((data: number) => {
        console.log(`${caseName} getUidTxBytes success ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getUidTxBytes fail ${JSON.stringify(err)} `);
        expect(err.code == 2103005).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getUidTxBytes_Promise_0200
     * @tc.name Test getUidTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getUidTxBytes_Promise_0200', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getUidTxBytes_Promise_0200';
      let uid: number = 20010084;
      statistics.getUidTxBytes(uid).then((data: number) => {
        console.log(`${caseName} getUidTxBytes success ${JSON.stringify(data)}`);
        expectFalse();
        done();
      }).catch((err: BusinessError) => {
        console.log(`${caseName} getUidTxBytes fail ${JSON.stringify(err)} `);
        expect(err.code == 2103005).assertTrue();
        done();
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getCellularRxBytes_Async_0100
     * @tc.name Test getCellularRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getCellularRxBytes_Async_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getCellularRxBytes_Async_0100';
      sim.hasSimCard(0, (err: BusinessError, data: boolean) => {
        if (data === false) {
          console.info(`${caseName} hasSimCard fail ${JSON.stringify(err)} `);
          done();
          return;
        } else {
          radio.isRadioOn(0).then((data: boolean) => {
            console.info(`${caseName} isRadioOn  ${JSON.stringify(data)} `);
            expect(data == true).assertTrue();
            statistics.getCellularRxBytes((err: BusinessError, data: number) => {
              if (err) {
                console.log(`${caseName} getCellularRxBytes fail ${JSON.stringify(err)} `);
                expect(err.code).assertEqual(2103012);
                done();
              } else {
                console.log(`${caseName} getCellularRxBytes success ${JSON.stringify(data)}`);
                expectFalse();
                done();
              }
            });
          }).catch((err: BusinessError) => {
            console.error('When the device has no modem, the interface reports an error' + JSON.stringify(err));
            expect(err.code).assertEqual(8300003);
            done();
            return;
          });
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getCellularRxBytes_Promise_0100
     * @tc.name Test getCellularRxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getCellularRxBytes_Promise_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getCellularRxBytes_Promise_0100';
      sim.hasSimCard(0, (err: BusinessError, data: boolean) => {
        if (data === false) {
          console.info(`${caseName} hasSimCard fail ${JSON.stringify(err)} `);
          done();
          return;
        } else {
          radio.isRadioOn(0).then((data: boolean) => {
            console.info(`${caseName} isRadioOn  ${JSON.stringify(data)} `);
            expect(data == true).assertTrue();
            statistics.getCellularRxBytes().then((data: number) => {
              console.log(`${caseName} getCellularRxBytes success ${JSON.stringify(data)}`);
              expectFalse();
              done();
            }).catch((err: BusinessError) => {
              console.log(`${caseName} getCellularRxBytes fail ${JSON.stringify(err)} `);
              expect(err.code == 2103012).assertTrue();
              done();
            });
          }).catch((err: BusinessError) => {
            console.error('When the device has no modem, the interface reports an error' + JSON.stringify(err));
            expect(err.code).assertEqual(8300003);
            done();
            return;
          });
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getCellularTxBytes_Async_0100
     * @tc.name Test getCellularTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getCellularTxBytes_Async_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getCellularTxBytes_Async_0100';
      sim.hasSimCard(0, (err: BusinessError, data: boolean) => {
        if (data === false) {
          console.info(`${caseName} hasSimCard fail ${JSON.stringify(err)} `);
          done();
          return;
        } else {
          radio.isRadioOn(0).then((data: boolean) => {
            console.info(`${caseName} isRadioOn  ${JSON.stringify(data)} `);
            expect(data == true).assertTrue();
            statistics.getCellularTxBytes((err: BusinessError, data: number) => {
              if (err) {
                console.log(`${caseName} getCellularTxBytes fail ${JSON.stringify(err)} `);
                expect(err.code == 2103012).assertTrue();
                done();
              } else {
                console.log(`${caseName} getCellularTxBytes success ${JSON.stringify(data)}`);
                expectFalse();
                done();
              }
            });
          }).catch((err: BusinessError) => {
            console.error('When the device has no modem, the interface reports an error' + JSON.stringify(err));
            expect(err.code).assertEqual(8300003);
            done();
            return;
          });
        }
      });
    });

    /**
     * @tc.number SUB_Telephony_NetworkManager_getCellularTxBytes_Promise_0100
     * @tc.name Test getCellularTxBytes() interface
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it('SUB_Telephony_NetworkManager_getCellularTxBytes_Promise_0100', 0, async (done: Function) => {
      let caseName: string = 'SUB_Telephony_NetworkManager_getCellularTxBytes_Promise_0100';
      sim.hasSimCard(0, (err: BusinessError, data: boolean) => {
        if (data === false) {
          console.info(`${caseName} hasSimCard fail ${JSON.stringify(err)} `);
          done();
          return;
        } else {
          radio.isRadioOn(0).then((data: boolean) => {
            console.info(`${caseName} isRadioOn  ${JSON.stringify(data)} `);
            expect(data == true).assertTrue();
            statistics.getCellularTxBytes().then((data: number) => {
              console.log(`${caseName} getCellularTxBytes success ${JSON.stringify(data)}`);
              expectFalse();
              done();
            }).catch((err: BusinessError) => {
              console.log(`${caseName} getCellularTxBytes fail ${JSON.stringify(err)} `);
              expect(err.code).assertEqual(2103012);
              done();
            });
          }).catch((err: BusinessError) => {
            console.error('When the device has no modem, the interface reports an error' + JSON.stringify(err));
            expect(err.code).assertEqual(8300003);
            done();
            return;
          });
        }
      });
    });
  });
};

