
/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { describe, it, expect, beforeAll, afterAll, afterEach } from '@ohos/hypium';
import statistics from '@ohos.net.statistics';
import utils from './Utils.ets';

export default function networkManagerStatisticsTest() {
  describe('networkManagerStatisticsTest', function () {
    let delayTime = 5000;
    const DATA_0 = 0;
    let code_201 = 201;
    let errCode_201 = "201";

    beforeAll(async function () {
      console.log('NetworkManager_ActsNetworkManagerStatisticsTest beforeAll start');
      console.log('NetworkManager_ActsNetworkManagerStatisticsTest beforeAll end');
    });

    afterAll(async function () {
      console.log('NetworkManager_ActsNetworkManagerStatisticsTest afterAll start');
      console.log('NetworkManager_ActsNetworkManagerStatisticsTest afterAll end');
    });

    /**
     * @tc.number NetworkManager_statistics_on_0100
     * @tc.name Test on() interface
     * @tc.desc Function test
     */
    it('NetworkManager_statistics_on_0100', 0, async function (done) {
      let caseName = 'NetworkManager_statistics_on_0100';
      try {
        statistics.on('netStatsChange', (err) => {
          if (err) {
            console.log(`${caseName} on netStatsChange fail ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return
          } else {
            expect().assertFail();
            done();
            return
          }
        });
      } catch (error) {
        console.log(`${caseName} catch error, expect error: [${error.code}, ${error.message}]`);
        expect(error.code).assertEqual(errCode_201);
        done();
        return
      }
    });

    /**
     * @tc.number NetworkManager_statistics_off_0100
     * @tc.name Test off() interface
     * @tc.desc Function test
     */
    it('NetworkManager_statistics_off_0100', 0, async function (done) {
      let caseName = 'NetworkManager_statistics_off_0100';
      try {
        statistics.off('netStatsChange', (err) => {
          if (err) {
            console.log(`${caseName} off netStatsChange fail ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return
          } else {
            expect().assertFail();
            done();
            return
          }
        });
      } catch (error) {
        console.log(`${caseName} catch error, expect error: [${error.code}, ${error.message}]`);
        expect(error.code).assertEqual(errCode_201);
        done();
        return
      }
    });

    /**
     * @tc.number NetworkManager_getTrafficStatsByIface_Async_0100
     * @tc.name Test getTrafficStatsByIface() interface
     * @tc.desc Function test
     */
    it('NetworkManager_getTrafficStatsByIface_Async_0100', 0, async function (done) {
      let caseName = 'NetworkManager_getTrafficStatsByIface_Async_0100';
      let ifaceInfo = {
        iface: "eth0",
        startTime: Date.now() - 60 * 60,
        endTime: Date.now()
      };
      try {
        statistics.getTrafficStatsByIface(ifaceInfo, (err, data) => {
          if (err) {
            console.log(`${caseName} getTrafficStatsByIface fail ${JSON.stringify(err)}`);
            expect(err.code).assertEqual(code_201);
            done();
            return
          } else {
            expect().assertFail();
            done();
            return
          }
        });
      } catch (error) {
        console.log(`${caseName} catch error, expect error: [${error.code}, ${error.message}]`);
        expect().assertFail();
        done();
        return;
      }
    });

    /**
     * @tc.number NetworkManager_getTrafficStatsByIface_Promise_0100
     * @tc.name Test getTrafficStatsByIface() interface
     * @tc.desc Function test
     */
    it('NetworkManager_getTrafficStatsByIface_Promise_0100', 0, async function (done) {
      let caseName = 'NetworkManager_getTrafficStatsByIface_Promise_0100';
      let ifaceInfo = {
        iface: "eth0",
        startTime: Date.now() - 60 * 60,
        endTime: Date.now()
      };
      try {
        statistics.getTrafficStatsByIface(ifaceInfo).then((data) => {
          expect().assertFail();
          done();
          return;
        }).catch((err) => {
          console.log(`${caseName} getTrafficStatsByIface fail ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(code_201);
          done();
          return;
        });
      } catch (error) {
        console.log(`${caseName} catch error, expect error: [${error.code}, ${error.message}]`);
        expect().assertFail();
        done();
        return;
      }
    });
  });
}