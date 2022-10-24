/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import distributedMgr from '@ohos.bundle.distributedBundle'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'

const BUNDLE_NAME = 'com.example.actsbmsdistributedmanager';
const ABILITY_NAME = 'com.example.actsbmsdistributedmanager.MainAbility';
const DEVICE_ID = '111';
const ERROR_PARAM_CHECK_ERROR = 401;
const ERROR_DISTRIBUTED_SERVICE_NOT_RUNNING = 17700027;

export default function actsBmsDistributedManagerTest() {

  describe('actsBmsDistributedManagerTest', function () {
    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0010
    * @tc.name: getRemoteAbilityInfoNoDeviceId
    * @tc.desc: test no deviceId
    */
    it('getRemoteAbilityInfoNoDeviceId', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo({
          bundleName: BUNDLE_NAME,
          abilityName: ABILITY_NAME
        }, (err, data) => {
          if (err) {
            expect(err).assertFail();
          }
          expect(data).assertFail();
        });
      } catch (err) {
        expect(err.code).assertEqual(ERROR_PARAM_CHECK_ERROR);
        console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
        done();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0020
    * @tc.name: getRemoteAbilityInfoNoDeviceIdWithLocale
    * @tc.desc: test getRemoteAbilityInfo callback
    */
    it('getRemoteAbilityInfoNoDeviceIdWithLocale', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo({
          bundleName: BUNDLE_NAME,
          abilityName: ABILITY_NAME
        }, "English", (err, data) => {
          if (err) {
            expect(err).assertFail();
          }
          expect(data).assertFail();
        });
      } catch (err) {
        expect(err.code).assertEqual(ERROR_PARAM_CHECK_ERROR);
        console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
        done();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0030
    * @tc.name: getRemoteAbilityInfoDistributeNotRunning
    * @tc.desc: test getRemoteAbilityInfo distributed service not running
    */
    it('getRemoteAbilityInfoDistributeNotRunning', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo({
          deviceId: DEVICE_ID,
          bundleName: BUNDLE_NAME,
          abilityName: ABILITY_NAME
        }, (err, data) => {
          if (err) {
            expect(err.code).assertEqual(ERROR_DISTRIBUTED_SERVICE_NOT_RUNNING);
            console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
          } else {
            expect(data).assertFail();
          }
          done();
        });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0040
    * @tc.name: getRemoteAbilityInfoDistributeNotRunning with locale
    * @tc.desc: test getRemoteAbilityInfo distributed service not running
    */
    it('getRemoteAbilityInfoWithLocale', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo({
          deviceId: DEVICE_ID,
          bundleName: BUNDLE_NAME,
          abilityName: ABILITY_NAME
        }, "English", (err, data) => {
          if (err) {
            expect(err.code).assertEqual(ERROR_DISTRIBUTED_SERVICE_NOT_RUNNING);
            console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
          } else {
            expect(data).assertFail();
          }
          done();
        });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0050
    * @tc.name: getRemoteAbilityInfoDistributeNotRunning with array
    * @tc.desc: test getRemoteAbilityInfo distributed service not running
    */
    it('getRemoteAbilityInfoWithArray', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo(
          [{
            bundleName: BUNDLE_NAME,
            abilityName: ABILITY_NAME
          }], (err, data) => {
            if (err) {
              expect(err).assertFail();
            } else {
              expect(data).assertFail();
            }
        });
      } catch (err) {
        expect(err.code).assertEqual(ERROR_PARAM_CHECK_ERROR);
        console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
        done();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0060
    * @tc.name: getRemoteAbilityInfo with array
    * @tc.desc: test getRemoteAbilityInfo distributed service not running
    */
    it('getRemoteAbilityInfoWithLocaleAndArray', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo([{
            deviceId: DEVICE_ID,
            bundleName: BUNDLE_NAME,
            abilityName: ABILITY_NAME
          }], "English", (err, data) => {
          if (err) {
            expect(err.code).assertEqual(ERROR_DISTRIBUTED_SERVICE_NOT_RUNNING);
            console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
          } else {
            expect(data).assertFail();
          }
          done();
        });
      } catch (err) {
        expect(err).assertFail();
      }
    });
  });
}
