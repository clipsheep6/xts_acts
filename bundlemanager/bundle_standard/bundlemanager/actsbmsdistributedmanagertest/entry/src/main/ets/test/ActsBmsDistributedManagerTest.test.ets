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
const ERROR_PARAM_CHECK_ERROR = 401;
const ERROR_DISTRIBUTED_SERVICE_NOT_RUNNING = 17700027;

export default function actsBmsDistributedManagerTest() {

  describe('actsBmsDistributedManagerTest', function () {
    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0010
    * @tc.name: getRemoteAbilityInfoInvalidType
    * @tc.desc: test invalid type bundleName
    */
    it('getRemoteAbilityInfoInvalidType', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo({
          deviceId: "",
          bundleName: 111,
          abilityName: ABILITY_NAME
        }).then(data => {
            expect(data).assertFail();
          }).catch((err) => {
            expect(err).assertFail();
          });
      } catch (err) {
        expect(err.code).assertFail(ERROR_PARAM_CHECK_ERROR);
        console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
        done();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0020
    * @tc.name: getRemoteAbilityInfoInvalidTypeCallback
    * @tc.desc: test getRemoteAbilityInfo callback
    */
    it('getRemoteAbilityInfoInvalidTypeCallback', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo({
          deviceId: "",
          bundleName: 111,
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
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0030
    * @tc.name: getRemoteAbilityInfoDistributeNotRunning
    * @tc.desc: test getRemoteAbilityInfo distributed service not running
    */
    it('getRemoteAbilityInfoDistributeNotRunning', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo({
          deviceId: "111",
          bundleName: BUNDLE_NAME,
          abilityName: ABILITY_NAME
        }, (err, data) => {
          if (err) {
            expect(err.code).assertEqual(ERROR_DISTRIBUTED_SERVICE_NOT_RUNNING);
            console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
            done();
          }
          expect(err).assertFail();
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
          deviceId: "111",
          bundleName: BUNDLE_NAME,
          abilityName: ABILITY_NAME
        }, "English", (err, data) => {
          if (err) {
            expect(err.code).assertEqual(ERROR_DISTRIBUTED_SERVICE_NOT_RUNNING);
            console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
            done();
          }
          expect(err).assertFail();
        });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0050
    * @tc.name: getRemoteAbilityInfoDistributeNotRunning with invalid type locale
    * @tc.desc: test getRemoteAbilityInfo distributed service not running
    */
    it('getRemoteAbilityInfoWithLocale', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo({
          deviceId: "111",
          bundleName: BUNDLE_NAME,
          abilityName: ABILITY_NAME
        }, 111, (err, data) => {
          if (err) {
            expect(err).assertFail();
          }
          expect(err).assertFail();
        });
      } catch (err) {
        expect(err.code).assertEqual(ERROR_PARAM_CHECK_ERROR);
        console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
        done();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0060
    * @tc.name: getRemoteAbilityInfoDistributeNotRunning with array
    * @tc.desc: test getRemoteAbilityInfo distributed service not running
    */
    it('getRemoteAbilityInfoWithLocale', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo([
          {
            deviceId: "111",
            bundleName: BUNDLE_NAME,
            abilityName: ABILITY_NAME
          },
          {
            deviceId: "111",
            bundleName: 111,
            abilityName: ABILITY_NAME
          }
        ], (err, data) => {
          if (err) {
            expect(err).assertFail();
          }
          expect(err).assertFail();
        });
      } catch (err) {
        expect(err.code).assertEqual(ERROR_PARAM_CHECK_ERROR);
        console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
        done();
      }
    });

    /*
    * @tc.number: SUB_BMS_DISTRIBUTED_MANAGER_0070
    * @tc.name: getRemoteAbilityInfo with array
    * @tc.desc: test getRemoteAbilityInfo distributed service not running
    */
    it('getRemoteAbilityInfoWithLocale', 0, async function (done) {
      try {
        distributedMgr.getRemoteAbilityInfo([
          {
            deviceId: "111",
            bundleName: BUNDLE_NAME,
            abilityName: ABILITY_NAME
          },
          {
            deviceId: "111",
            bundleName: BUNDLE_NAME,
            abilityName: ABILITY_NAME
          }
        ], "English", (err, data) => {
          if (err) {
            expect(err.code).assertEqual(ERROR_DISTRIBUTED_SERVICE_NOT_RUNNING);
            console.error('[getRemoteAbilityInfo]Operation failed:' + err.message);
            done();
          }
          expect(data).assertFail();
        });
      } catch (err) {
        expect(data).assertFail();
      }
    });
  });
}
