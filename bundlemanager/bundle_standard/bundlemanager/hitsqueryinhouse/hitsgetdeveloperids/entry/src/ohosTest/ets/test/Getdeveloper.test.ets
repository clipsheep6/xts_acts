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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import common from '@ohos.app.ability.common';
import installer from '@ohos.bundle.installer';
import { BusinessError } from '@ohos.base';
import Base from '@ohos.base';
import bundleManager from '@ohos.bundle.bundleManager';
import Utils from './Utils';

const NO_PERMISSION_ERROR_CODE = 201;

export default function getdeveloper() {
  describe('Getdeveloper', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_0100
     * @tc.name: exceptionParameter
     * @tc.desc: getDeveloperIds exception parameter verification.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('exceptionParameter', 0, (done: Function) => {
      try {
        let data = bundleManager.getDeveloperIds(null);
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        expect(true).assertFail()
        done()
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(code).assertEqual(401)
      }

      try {
        let data = bundleManager.getDeveloperIds(undefined);
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        expect(true).assertFail()
        done()
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(code).assertEqual(401)
      }

      try {
        let data = bundleManager.getDeveloperIds(8);
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        expect(true).assertFail()
        done()
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(code).assertEqual(401)
        done()
      }

    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_0700
     * @tc.name: getEnterpriseApplication
     * @tc.desc: getDeveloperIds gets the developerid of the ENTERPRISE_MDM type application.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('getEnterpriseApplication', 0, (done: Function) => {
      let appDistributionType = bundleManager.AppDistributionType.ENTERPRISE_MDM;
      installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(['/data/storage/el2/base/files/HitsBmMdmTest.hap'], (err: BusinessError) => {
          if (err) {
            console.error('install mdm failed:' + err.message);
            if (err.code === NO_PERMISSION_ERROR_CODE) {
              expect(false).assertTrue()
              done()
            }
          } else {
            expect(true).assertTrue()
          }
        });
      }).catch((error: BusinessError) => {
        console.error('install mdm getBundleInstaller failed. Cause: ' + error.message);
        done()
      });
      try {
        let data = bundleManager.getDeveloperIds(appDistributionType);
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        if (data) {
          expect(true).assertTrue()
          done()
        } else {
          expect(false).assertTrue()
          done()
        }

      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(false).assertTrue()
        done()
      }

    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_0900
     * @tc.name: getDeveloperIdsOfCrowdTesting
     * @tc.desc: getDeveloperIds gets the developerid of CROWDTESTING type application.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('getDeveloperIdsOfCrowdTesting', 0, (done: Function) => {
      let appDistributionType = bundleManager.AppDistributionType.CROWDTESTING;
      installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(['/data/storage/el2/base/files/HitsCrowdTestingTest.hap'], (err: BusinessError) => {
          if (err) {
            console.error('install HitsCrowdTestingTest failed:' + err.message);
            if (err.code === NO_PERMISSION_ERROR_CODE) {
              expect(false).assertTrue()
              done()
            }
          } else {
            expect(true).assertTrue()
          }
        });
      }).catch((error: BusinessError) => {
        console.error('install HitsCrowdTestingTest getBundleInstaller failed. Cause: ' + error.message);
        done()
      });
      try {
        Utils.sleep(1000);
        let data = bundleManager.getDeveloperIds(appDistributionType);
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        if (data) {
          expect(true).assertTrue()
          done()
        } else {
          expect(false).assertTrue()
          done()
        }

      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(false).assertTrue()
        done()
      }
    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_1200
     * @tc.name: nonExistentApplication
     * @tc.desc: getDeveloperIds passes in the distribution type of the non-existent application.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('nonExistentApplication', 0, (done: Function) => {
      let appDistributionType = bundleManager.AppDistributionType.APP_GALLERY;
      try {
        let data = bundleManager.getDeveloperIds(appDistributionType);
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        if (data.length === 0) {
          expect(true).assertTrue()
          done()
        } else {
          expect(false).assertTrue()
          done()
        }

      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(false).assertTrue()
        done()
      }

    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_1600
     * @tc.name: getAllBundleInfoByDeveloperIdException
     * @tc.desc: getAllBundleInfoByDeveloperId exception parameter verification.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('getAllBundleInfoByDeveloperIdException', 0, (done: Function) => {
      try {
        let data = bundleManager.getAllBundleInfoByDeveloperId(null);
        hilog.info(0x0000, 'testTag', 'getAllBundleInfoByDeveloperId successfully. Data: %{public}s', JSON.stringify(data));
        expect(true).assertFail()
        done()
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getAllBundleInfoByDeveloperId failed: %{public}s', message);
        expect(code).assertEqual(401)
      }

      try {
        let data = bundleManager.getAllBundleInfoByDeveloperId(undefined);
        hilog.info(0x0000, 'testTag', 'getAllBundleInfoByDeveloperId successfully. Data: %{public}s', JSON.stringify(data));
        expect(true).assertFail()
        done()
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getAllBundleInfoByDeveloperId failed: %{public}s', message);
        expect(code).assertEqual(401)
      }

      try {
        let data = bundleManager.getAllBundleInfoByDeveloperId('');
        hilog.info(0x0000, 'testTag', 'getAllBundleInfoByDeveloperId successfully. Data: %{public}s', JSON.stringify(data));
        expect(true).assertFail()
        done()
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getAllBundleInfoByDeveloperId failed: %{public}s', message);
        expect(code).assertEqual(401)
        done()
      }

    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_1900
     * @tc.name: getBundleInfo
     * @tc.desc: getAllBundleInfoByDeveloperId Gets the bundleInfo of the application.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('getBundleInfo', 0, (done: Function) => {
      try {
        let data = bundleManager.getAllBundleInfoByDeveloperId('OpenHarmony');
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        if (data.length > 0) {
          expect(true).assertTrue()
          done()
        } else {
          expect(false).assertTrue()
          done()
        }

      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(false).assertTrue()
        done()
      }

    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_2000
     * @tc.name: getNonExistentBundleInfo
     * @tc.desc: getAllBundleInfoByDeveloperId Gets the bundleInfo of a non-existent developerId.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('getNonExistentBundleInfo', 0, (done: Function) => {
      try {
        let data = bundleManager.getAllBundleInfoByDeveloperId('sssss');
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        if (data.length > 0) {
          expect(false).assertTrue()
          done()
        }
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(code).assertEqual(17700059)
        done()
      }
    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_2400
     * @tc.name: getAppProvisionInfo
     * @tc.desc: getAppProvisionInfo obtains application information without configured organization.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('getAppProvisionInfo', 0,async  ( done: Function) => {
      try {
        Utils.sleep(1000);
        try {
          let data = await bundleManager.getAppProvisionInfo('com.hits.crowdtesting');
          if (data) {
            if (data.organization) {
              expect(false).assertTrue()
              done()
            } else {
              expect(true).assertTrue()
            }
            if(data.developerId === 'OpenHarmony'){
              expect(true).assertTrue()
              done()
            }else {
              expect(false).assertTrue()
              done()
            }
          }
          hilog.info(0x0000, 'testTag', 'getAppProvisionInfoSync successfully. Data: %{public}s', JSON.stringify(data));
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, 'testTag', 'getAppProvisionInfoSync failed. Cause: %{public}s', message);
        }
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(false).assertTrue()
        done()
      }
    })

    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_2500
     * @tc.name: getAppProvisionInfoSync
     * @tc.desc: getAppProvisionInfoSync obtains application information without configured organization.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('getAppProvisionInfoSync', 0,async  ( done: Function) => {
      try {
        Utils.sleep(1000);
        try {
          let data = await bundleManager.getAppProvisionInfoSync('com.hits.crowdtesting');
          if (data) {
            if (data.organization) {
              expect(false).assertTrue()
              done()
            } else {
              expect(true).assertTrue()
            }
            if(data.developerId === 'OpenHarmony'){
              expect(true).assertTrue()
              done()
            }else {
              expect(false).assertTrue()
              done()
            }
          }
          hilog.info(0x0000, 'testTag', 'getAppProvisionInfoSync successfully. Data: %{public}s', JSON.stringify(data));
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, 'testTag', 'getAppProvisionInfoSync failed. Cause: %{public}s', message);
        }
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(false).assertTrue()
        done()
      }
    })


    /*
   * @tc.number: Sub_Bms_Framework_Query_InHouse_2800
   * @tc.name: queryInstallAndUninstallApps
   * @tc.desc: getDeveloperIds Query to install and uninstall applications.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
    it('queryInstallAndUninstallApps', 0, (done: Function) => {
      let len1: number = 0;
      let len2: number = 0;
      installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(['/data/storage/el2/base/files/HitsOsIntegrationOneHap.hap'], (err: BusinessError) => {
          if (err) {
            console.error('install HitsOsIntegrationOneHap failed:' + err.message);
            expect(false).assertTrue()
            done()
          } else {
            expect(true).assertTrue()
          }
        });
      }).catch((error: BusinessError) => {
        console.error('install HitsOsIntegrationOneHap getBundleInstaller failed. Cause: ' + error.message);
        done()
      });
      Utils.sleep(1000)
      try {
        let appDistributionType = bundleManager.AppDistributionType.OS_INTEGRATION;
        let data = bundleManager.getDeveloperIds(appDistributionType);
        len1 = data.length;
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        if (len1 > 0) {
          expect(true).assertTrue()
        } else {
          expect(false).assertTrue()
          done()
        }
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(code).assertEqual(17700059)
        done()
      }
      Utils.sleep(1000)
      installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.uninstall('com.hits.osintegrationone', (err: BusinessError) => {
          if (err) {
            console.error('uninstall failed:' + err.message);
          } else {
            console.info('uninstall successfully.');
            expect(true).assertTrue();
            done();
          }
        });
      })
      Utils.sleep(1000)
      try {
        let appDistributionType = bundleManager.AppDistributionType.OS_INTEGRATION;
        let data = bundleManager.getDeveloperIds(appDistributionType);
        len2 = data.length;
        hilog.info(0x0000, 'testTag', 'getDeveloperIds successfully. Data: %{public}s', JSON.stringify(data));
        if (len2 < len1) {
          expect(true).assertTrue()
          done()
        } else {
          expect(false).assertTrue()
          done()
        }
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(code).assertEqual(17700059)
        done()
      }
    })


    /*
     * @tc.number: Sub_Bms_Framework_Query_InHouse_2900
     * @tc.name: getAllBundleInfoByDeveloperId
     * @tc.desc: getAllBundleInfoByDeveloperId queries multiple applications.
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('getAllBundleInfoByDeveloperIdMultiple', 0, async (done: Function) => {
      try {
        Utils.sleep(1000);
        try {
          let data = await bundleManager.getAllBundleInfoByDeveloperId('OpenHarmony');
          if (data.length > 0) {
            expect(true).assertTrue()
            done()
          } else {
            expect(false).assertTrue()
            done()
          }
          hilog.info(0x0000, 'testTag', 'getAppProvisionInfoSync successfully. Data: %{public}s', JSON.stringify(data));
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, 'testTag', 'getAppProvisionInfoSync failed. Cause: %{public}s', message);
        }
      } catch (err) {
        let message = (err as BusinessError).message;
        let code = (err as BusinessError).code;
        hilog.error(0x0000, 'testTag', 'getDeveloperIds failed: %{public}s', message);
        expect(false).assertTrue()
        done()
      }
    })
  })
}