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
import installer from '@ohos.bundle.installer';
import { BusinessError } from '@ohos.base';
import { describe, afterEach, afterAll, it, expect } from '@ohos/hypium'
import osAccount from '@ohos.account.osAccount';
import bundleManager from "@ohos.bundle.bundleManager";

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    let accountId;
    let osAccountManager = osAccount.getAccountManager();
    let actsAppCirculationUpdateRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationUpdateRely/ActsAppCirculationUpdateRely.hap'];
    let actsAppCirculationDiffModuleUpdateRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationDiffModuleUpdateRely/ActsAppCirculationDiffModuleUpdateRely.hap'];
    let actsAppCirculationBaseRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationBaseRely/ActsAppCirculationBaseRely.hap'];
    let actsAppCirculationDiffModuleIdUpdateRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationDiffModuleIdUpdateRely/ActsAppCirculationDiffModuleIdUpdateRely.hap'];
    let actsAppCirculationDiffAppIdUpdateRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationDiffAppIdUpdateRely/ActsAppCirculationDiffAppIdUpdateRely.hap'];
    let actsAppCirculationDiffAppIdModuleUpdateRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationDiffAppIdModuleUpdateRely/ActsAppCirculationDiffAppIdModuleUpdateRely.hap'];
    let actsAppCirculationBaseWithoutAppIdentifierRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationBaseWithoutAppIdentifierRely/ActsAppCirculationBaseWithoutAppIdentifierRely.hap'];
    let actsAppCirculationUpdateWithoutAppIdentifierDiffAppIdRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationUpdateWithoutAppIdentifierDiffAppIdRely/ActsAppCirculationUpdateWithoutAppIdentifierDiffAppIdRely.hap'];
    let actsAppCirculationUpdateWithoutAppIdentifierDiffModuleAppIdRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationUpdateWithoutAppIdentifierDiffModuleAppIdRely/ActsAppCirculationUpdateWithoutAppIdentifierDiffModuleAppIdRely.hap'];
    let actsAppCirculationUpdateWithoutAppIdentifierRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationUpdateWithoutAppIdentifierRely/ActsAppCirculationUpdateWithoutAppIdentifierRely.hap'];
    let actsAppCirculationUpdateWithoutAppIdentifierDiffModuleRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/actsAppCirculationUpdateWithoutAppIdentifierDiffModuleRelyFilePaths/actsAppCirculationUpdateWithoutAppIdentifierDiffModuleRelyFilePaths.hap'];
    let actsAppCirculationDiffIdUpdateRelyFilePaths = ['/data/storage/el2/base/haps/entry_test/ActsAppCirculationDiffIdUpdateRely/ActsAppCirculationDiffIdUpdateRely.hap'];

    function sleep(ms) {
      return new Promise(resolve => setTimeout(resolve, ms));
    }

    afterEach(async function () {
      let bundleName = 'com.example.actsappcirculationrely';
      installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.uninstall(bundleName, (err: BusinessError) => {
          if (err) {
            console.error('After each uninstall failed:' + err.message);
          } else {
            console.info('After each uninstall successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
      });
      await sleep(1000);
    })
    afterAll(async function () {
      await osAccountManager.removeOsAccount(accountId).then((data) => {
        console.log("AfterAll removeOsAccount successful");
      }).catch((err) => {
        console.log("AfterAll removeOsAccount fail" + JSON.stringify(err));
        expect().assertFail()
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0100
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0100', 0, async function (done) {
      console.log("Acts_AppCirculation_0100 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0200
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0200', 0, async function (done) {
      console.log("Acts_AppCirculation_0200 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0300
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0300', 0, async function (done) {
      console.log("Acts_AppCirculation_0300 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationDiffIdUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            done();
          } else {
            console.info('install successfully.');
            expect().assertFail();
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0400
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0400', 0, async function (done) {
      console.log("Acts_AppCirculation_0400 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationDiffModuleIdUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            done();
          } else {
            console.info('install successfully.');
            expect().assertFail();
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0500
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0500', 0, async function (done) {
      console.log("Acts_AppCirculation_0500 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationDiffAppIdUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0600
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0600', 0, async function (done) {
      console.log("Acts_AppCirculation_0600 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationDiffAppIdModuleUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0700
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0700', 0, async function (done) {
      console.log("Acts_AppCirculation_0700 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseWithoutAppIdentifierRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateWithoutAppIdentifierDiffAppIdRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            done();
          } else {
            console.info('install successfully.');
            expect().assertFail();
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0800
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0800', 0, async function (done) {
      console.log("Acts_AppCirculation_0800 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseWithoutAppIdentifierRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateWithoutAppIdentifierDiffModuleAppIdRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            done();
          } else {
            console.info('install successfully.');
            expect().assertFail();
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_0900
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_0900', 0, async function (done) {
      console.log("Acts_AppCirculation_0900 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseWithoutAppIdentifierRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_1000
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1000', 0, async function (done) {
      console.log("Acts_AppCirculation_1000 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseWithoutAppIdentifierRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationDiffModuleUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(1000);
      bundleManager.getAppProvisionInfo("com.example.actsappcirculationrely", 100, (err, data) => {
        console.info('The appIdentifier of com.example.actsappcirculationrely is:' + data.appIdentifier);
        expect(data.appIdentifier).assertEqual("E64B13B84E6D2167F73B46530C6E");
        done();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_1100
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1100', 0, async function (done) {
      console.log("Acts_AppCirculation_1100 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateWithoutAppIdentifierRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_1200
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1200', 0, async function (done) {
      console.log("Acts_AppCirculation_1200 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateWithoutAppIdentifierDiffModuleRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_1300
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1300', 0, async function (done) {
      console.log("Acts_AppCirculation_1300 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseWithoutAppIdentifierRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateWithoutAppIdentifierRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_1400
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1400', 0, async function (done) {
      console.log("Acts_AppCirculation_1400 start");
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseWithoutAppIdentifierRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
            done();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationUpdateWithoutAppIdentifierDiffModuleRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_1900
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_1900', 0, async function (done) {
      console.log("Acts_AppCirculation_1900 start");
      let bundleFlags = bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SIGNATURE_INFO;
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationDiffAppIdUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(1000);
      await bundleManager.getBundleInfo('com.example.actsappcirculationrely', bundleFlags).then((data) => {
        console.log('Bundleinfo data is:' + JSON.stringify(data));
        expect(JSON.stringify(data))
          .assertContain('BH44SJJ7ZBsNGCSrqqmo+Leud3LZE1h5oZ1dkbiR0XykCuLX5rRU/hNRE4glPeOVbzKVaq1npODzUXwp3eO0bwk');
        done();
      }).catch((err: BusinessError) => {
        console.log('Bundleinfo err is:' + err);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_2000
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_2000', 0, async function (done) {
      console.log("Acts_AppCirculation_2000 start");
      let isMultipleUserEnabled = await osAccountManager.checkMultiOsAccountEnabled();
      if (!isMultipleUserEnabled) {
        console.log("Acts_AppCirculation_2000 checkMultiOsAccountEnabled fail ");
        done();
        return;
      }
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationBaseRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
      await osAccountManager.createOsAccount("200", osAccount.OsAccountType.NORMAL).then((data) => {
        console.log("Acts_AppCirculation_2000 createOsAccount successful" + JSON.stringify(data));
        accountId = data.localId;
      }).catch((err) => {
        console.error("Acts_AppCirculation_2000 createOsAccount fail" + JSON.stringify(err));
        expect().assertFail()
      });
      await osAccountManager.activateOsAccount(accountId).then((data) => {
        console.log("Acts_AppCirculation_2000 activateOsAccount successful");
      }).catch((err) => {
        console.error("Acts_AppCirculation_2000 activateOsAccount fail" + JSON.stringify(err));
        expect().assertFail()
      });
      await sleep(1000);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(actsAppCirculationDiffIdUpdateRelyFilePaths, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            done();
          } else {
            console.info('install successfully.');
            expect().assertFail();
            done();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })

    /*
     * @tc.number: Acts_AppCirculation_2300
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_2300', 0, async function (done) {
      console.log("Acts_AppCirculation_2300 start");
      let hapTestPath = ['/data/storage/el2/base/haps/entry_test/haptest/'];
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(hapTestPath, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            done();
          } else {
            console.info('install successfully.');
            expect().assertFail();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(500);
    })

    /*
     * @tc.number: Acts_AppCirculation_2400
     * @tc.name: Signature circulation test
     * @tc.desc: Deploy different identifier test whether the transfer was successful
     * @tc.level:1
     */
    it('Acts_AppCirculation_2400', 0, async function (done) {
      console.log("Acts_AppCirculation_2400 start");
      let hapTestPathA = ['/data/storage/el2/base/haps/entry_test/haptest/ActsAppCirculationSameVersionEntryRely.hap'];
      let hapTestPathB = ['/data/storage/el2/base/haps/entry_test/haptest/ActsAppCirculationSameVersionFeatureRely.hap'];
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(hapTestPathA, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            expect().assertFail();
          } else {
            console.info('install successfully.');
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
      await sleep(1000);
      await installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(hapTestPathB, (err: BusinessError) => {
          if (err) {
            console.error('install failed:' + err.message);
            done();
          } else {
            console.info('install successfully.');
            expect().assertFail();
          }
        });
      }).catch((error: BusinessError) => {
        console.error('getBundleInstaller failed. Cause: ' + error.message);
        expect().assertFail();
      });
    })
  })
}