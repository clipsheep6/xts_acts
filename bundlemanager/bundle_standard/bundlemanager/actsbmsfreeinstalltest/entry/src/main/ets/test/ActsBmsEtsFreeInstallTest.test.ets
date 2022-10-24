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

import freeInstall from '@ohos.bundle.freeInstall'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'

const BUNDLE_NAME_1 = 'com.example.actsbmsfreeinstall';
const BUNDLE_NAME_2 = 'com.example.test';
const MODULE_NAME_1 = 'entry';
const MODULE_NAME_2 = 'no';
const ERR_CODE_BUNDLE_NAME_NOT_EXIST = 17700001;
const ERR_CODE_MODULE_NAME_NOT_EXIST = 17700002;

export default function actsBmsEtsFreeInstallTest() {

  describe('actsBmsEtsFreeInstallTest', function () {
    /*
    * @tc.number: SUB_BMS_FREE_INSTALL_0010
    * @tc.name: setHapModuleUpgradeFlagInvalidBundleName
    * @tc.desc: test invalid bundleName
    */
    it('setHapModuleUpgradeFlagInvalidBundleName', 0, async function (done) {
      try {
        freeInstall.setHapModuleUpgradeFlag(BUNDLE_NAME_2, MODULE_NAME_1, freeInstall.UpgradeFlag.NOT_UPGRADE)
          .then(data => {
            expect(data).assertFail();
          }).catch((err) => {
            console.error('[setHapModuleUpgradeFlag]Operation failed. Err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_CODE_BUNDLE_NAME_NOT_EXIST);
            done();
          });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_FREE_INSTALL_0020
    * @tc.name: setHapModuleUpgradeFlagInvalidModuleName
    * @tc.desc: test invalid moduleName
    */
    it('setHapModuleUpgradeFlagInvalidModuleName', 0, async function (done) {
      try {
        freeInstall.setHapModuleUpgradeFlag(BUNDLE_NAME_1, MODULE_NAME_2, freeInstall.UpgradeFlag.NOT_UPGRADE)
          .then(data => {
            expect(data).assertFail();
          }).catch((err) => {
            console.error('[setHapModuleUpgradeFlag]Operation failed. Err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_CODE_MODULE_NAME_NOT_EXIST);
            done();
          });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_FREE_INSTALL_0030
    * @tc.name: isHapModuleRemovableInvalidBundleName
    * @tc.desc: test invalid bundleName
    */
    it('isHapModuleRemovableInvalidBundleName', 0, async function (done) {
      try {
        freeInstall.isHapModuleRemovable(BUNDLE_NAME_2, MODULE_NAME_1)
          .then(data => {
            expect(data).assertFail();
          }).catch((err) => {
            console.error('[isHapModuleRemovable]Operation failed. Err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_CODE_BUNDLE_NAME_NOT_EXIST);
            done();
          });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_FREE_INSTALL_0040
    * @tc.name: isHapModuleRemovableInvalidModuleName
    * @tc.desc: test invalid moduleName
    */
    it('isHapModuleRemovableInvalidModuleName', 0, async function (done) {
      try {
        freeInstall.isHapModuleRemovable(BUNDLE_NAME_1, MODULE_NAME_2)
          .then(data => {
            expect(data).assertFail();
          }).catch((err) => {
            console.error('[isHapModuleRemovable]Operation failed. Err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(ERR_CODE_MODULE_NAME_NOT_EXIST);
            done();
          });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_FREE_INSTALL_0050
    * @tc.name: isHapModuleRemovable
    * @tc.desc: test isHapModuleRemovable
    */
    it('isHapModuleRemovable', 0, async function (done) {
      try {
        freeInstall.isHapModuleRemovable(BUNDLE_NAME_1, MODULE_NAME_1)
          .then(data => {
            expect(data).assertFalse();
            done();
          }).catch((err) => {
            console.error('[isHapModuleRemovable]Operation failed. Err: ' + JSON.stringify(err));
            expect(err).assertFail();
          });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_FREE_INSTALL_0060
    * @tc.name: getBundlePackInfoInvalidBundleName
    * @tc.desc: test invalid bundleName
    */
    it('getBundlePackInfoInvalidBundleName', 0, async function (done) {
      try {
        freeInstall.getBundlePackInfo(BUNDLE_NAME_2, freeInstall.BundlePackFlag.GET_PACK_INFO_ALL)
          .then(data => {
            expect(data).assertFail();
          }).catch((err) => {
            console.error('[getBundlePackInfo]Operation failed. Err: ' + JSON.stringify(err));
            expect(err.code).assert(ERR_CODE_BUNDLE_NAME_NOT_EXIST);
            done();
          });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_FREE_INSTALL_0070
    * @tc.name: getDispatchInfo
    * @tc.desc: test getDispatchInfo
    */
    it('getDispatchInfo', 0, async function (done) {
      try {
        freeInstall.getDispatchInfo()
          .then(data => {
            expect(data.version).assertEqual("1");
            expect(data.dispatchAPI).assertEqual("1.0");
            done();
          }).catch((err) => {
            console.error('[getDispatchInfo]Operation failed. Err: ' + JSON.stringify(err));
            expect(err).assertFail();
          });
      } catch (err) {
        expect(err).assertFail();
      }
    });

    /*
    * @tc.number: SUB_BMS_FREE_INSTALL_0080
    * @tc.name: isHapModuleRemovable
    * @tc.desc: test isHapModuleRemovable callback
    */
    it('isHapModuleRemovableInvalidBundleName', 0, async function (done) {
      try {
        freeInstall.isHapModuleRemovable(BUNDLE_NAME_1, MODULE_NAME_1, (err, data) => {
          if (err) {
            expect(err).assertFail();
          }
          expect(data).assertFalse();
          done();
        });
      } catch (err) {
        expect(err).assertFail();
      }
    });


  });
}
