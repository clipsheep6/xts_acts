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

import { BusinessError } from '@ohos.base';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import base from '@ohos.base';
import bundleManager from '@ohos.bundle.bundleManager';
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';
import hilog from '@ohos.hilog';
import installer from '@ohos.bundle.installer';
import Want from '@ohos.app.ability.Want';

let subscribe: commonEventManager.CommonEventSubscriber;
let testAbilityContext: common.UIAbilityContext;
let abilityDelegator: abilityDelegatorRegistry.AbilityDelegator;
let commonEvent: commonEventManager.CommonEventSubscribeInfo = {
  events: [
    'FormUpdateDurationTest_AddForm',
  ]
};
let testTag: string = 'CloudUpdateDurationTest';
let bundleNameProviderOne: string = 'com.example.cloudupdatedurationtestformproviderone';
let bundleNameProviderTwo: string = 'com.example.cloudupdatedurationtestformprovidertwo';
let bundleNameProviderThree: string = 'com.example.cloudupdatedurationtestformproviderthree';
let bundleNameFormUser: string = 'com.example.cloudupdatedurationtestformuser';
let moduleNameEntry: string = 'entry';
let abilityNameEntryAbility: string = 'EntryAbility';

let realPath: string = "/data/app/el2/100/base/com.example.actsformcloudupdatedurationtest/haps/entry_test/files/";
let testHapPath: string = '/data/FormUpdateDurationTest/';
let formProviderOneNoUpdateHap: string = 'FormProviderOneNoUpdate.hap';
let formProviderOneUpdateAtTimeHap: string = 'FormProviderOneUpdateAtTime.hap';
let formProviderOneUpdateDuration4Hap: string = 'FormProviderOneUpdateDuration4.hap';
let formProviderOneUpdateDuration6Hap: string = 'FormProviderOneUpdateDuration6.hap';
let formProviderTwoHap: string = 'FormProviderTwo.hap';
let formId: string = "";
let cmd: string = "";

function sleep(delay: Number) {
  let start = (new Date()).getTime();
  while ((new Date()).getTime() - start < delay) {
    continue;
  }
}

function deleteForm(formId: string) {
  let options: commonEventManager.CommonEventPublishData = {
    parameters: {
      'formId': formId,
    }
  }
  commonEventManager.publish('FormUpdateDurationTest_DeleteForm', options, async () => {
  })
}


export default function abilityTest() {
  describe('ActsAbilityTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async (done: Function) => {
      testAbilityContext = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
      abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      done();
    })

    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })

    afterEach(async (done: Function) => {
      await sleep(1000);
      let cmd = 'aa force-stop com.example.cloudupdatedurationtestformuser';
      await abilityDelegator.executeShellCommand(cmd);
      cmd = 'rm ' + realPath + '*.hap';
      await abilityDelegator.executeShellCommand(cmd);
      commonEventManager.unsubscribe(subscribe, () => {
        done();
      });
    })
    afterAll(async () => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
      // let cmd = 'rm -rf ' + testHapPath;
      // await abilityDelegator.executeShellCommand(cmd);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0100
     * @tc.name Testing the provider hap API less than 11, use local configuration update duration.
     * @tc.desc Use provider hap create a form, set cloud update duration invalid, use local configuration update duration.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0100', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0100 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0100 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0100 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [14400000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0100 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:10"
          bundleManager.setAdditionalInfo(bundleNameProviderThree, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_0100"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0200
     * @tc.name Add multiple timed refresh forms.
     * @tc.desc Use provider hap create multiple forms, set cloud update duration.
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0200', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0200 Start');
        let subscribeCallBack = async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0200 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            let formId1: string = data.parameters['widgetFormUpdateDuration2FormId'].toString();
            let formId2: string = data.parameters['widgetFormUpdateDuration4FormId'].toString();
            let formId3: string = data.parameters['widgetFormUpdateDuration6FormId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId1 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0200 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [7200000]");
                deleteForm(formId1);
              } catch {
                expect().assertFail();
                deleteForm(formId1);
                deleteForm(formId2);
                deleteForm(formId3);
                done();
              }
            })

            cmd = 'hidumper -s FormMgr -a \'-i ' + formId2 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0200 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [7200000]");
                deleteForm(formId2);
              } catch {
                expect().assertFail();
                deleteForm(formId2);
                deleteForm(formId3);
                done();
              }
            })

            cmd = 'hidumper -s FormMgr -a \'-i ' + formId3 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0200 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId3);
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0200 End');
                done();
              } catch {
                expect().assertFail();
                deleteForm(formId3);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:4"
          bundleManager.setAdditionalInfo(bundleNameProviderTwo, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_0200"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0300
     * @tc.name The provider hap update.
     * @tc.desc Use no update provider hap create a form, set cloud update duration and update the provider hap.
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0300', 0, async (done: Function) => {
      setTimeout(async () => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0300 Start');
        let updateProviderHap = async () => {
          cmd = "cp " + testHapPath + formProviderOneUpdateDuration4Hap + " " + realPath;
          await abilityDelegator.executeShellCommand(cmd);
          let hapFilePaths = ['/data/storage/el2/base/haps/entry_test/files/' + formProviderOneUpdateDuration4Hap];
          let installParam: installer.InstallParam = {
            userId: 100,
            isKeepData: true,
            installFlag: 1,
            additionalInfo: "formUpdateLevel:8",
          }
          try {
            installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
              data.install(hapFilePaths, installParam, (err: BusinessError) => {
                if (err) {
                  hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0300 install failed. Cause: %{public}s', err.message);
                } else {
                  cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
                  abilityDelegator.executeShellCommand(cmd).then((data) => {
                    hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0300 Step2 FormInfo: %{public}s', JSON.stringify(data) ?? '');
                    try {
                      expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                      expect(JSON.stringify(data)).assertContain("updateDuration [14400000]");
                      deleteForm(formId);
                      done();
                      hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0300 End');
                    } catch {
                      expect().assertFail();
                      deleteForm(formId);
                      done();
                    }
                  })
                }
              })
            }).catch((error: BusinessError) => {
              hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0300 getBundleInstaller failed. Cause: %{public}s', error.message);
            })
          } catch (error) {
            hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0300 getBundleInstaller failed. Cause: %{public}s', error.message);
          }
        }

        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0300 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0300 Step1 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [0]");
                updateProviderHap();
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        cmd = "bm uninstall -n " + bundleNameProviderOne;
        await abilityDelegator.executeShellCommand(cmd);

        cmd = "bm install -p " + testHapPath + formProviderOneNoUpdateHap;
        await abilityDelegator.executeShellCommand(cmd);

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_0300"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0400
     * @tc.name The provider hap update.
     * @tc.desc Use has update duration provider hap create a form, set cloud update duration and update the provider hap.
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0400', 0, async (done: Function) => {
      setTimeout(async () => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0400 Start');
        let updateProviderHap = async () => {
          cmd = "cp " + testHapPath + formProviderOneUpdateDuration6Hap + " " + realPath;
          await abilityDelegator.executeShellCommand(cmd);
          let hapFilePaths = ['/data/storage/el2/base/haps/entry_test/files/' + formProviderOneUpdateDuration6Hap];
          let installParam: installer.InstallParam = {
            userId: 100,
            isKeepData: true,
            installFlag: 1,
            additionalInfo: "formUpdateLevel:8",
          }
          try {
            installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
              data.install(hapFilePaths, installParam, (err: BusinessError) => {
                if (err) {
                  hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0400 install failed. Cause: %{public}s', err.message);
                } else {
                  cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
                  abilityDelegator.executeShellCommand(cmd).then((data) => {
                    hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0400 Step2 FormInfo: %{public}s', JSON.stringify(data) ?? '');
                    try {
                      expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                      expect(JSON.stringify(data)).assertContain("updateDuration [14400000]");
                      deleteForm(formId);
                      done();
                      hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0400 End');
                    } catch {
                      expect().assertFail();
                      deleteForm(formId);
                      done();
                    }
                  })
                }
              })
            }).catch((error: BusinessError) => {
              hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0400 getBundleInstaller failed. Cause: %{public}s', error.message);
            })
          } catch (error) {
            hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0400 getBundleInstaller failed. Cause: %{public}s', error.message);
          }
        }

        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0400 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0400 Step1 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [7200000]");
                updateProviderHap();
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        cmd = "bm uninstall -n " + bundleNameProviderOne;
        await abilityDelegator.executeShellCommand(cmd);

        cmd = "bm install -p " + testHapPath + formProviderOneUpdateDuration4Hap;
        await abilityDelegator.executeShellCommand(cmd);

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_0400"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0500
     * @tc.name The provider hap update.
     * @tc.desc Use has update at time provider hap create a form, set cloud update duration and update the provider hap.
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0500', 0, async (done: Function) => {
      setTimeout(async () => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0500 Start');
        let updateProviderHap = async () => {
          cmd = "cp " + testHapPath + formProviderOneUpdateDuration6Hap + " " + realPath;
          await abilityDelegator.executeShellCommand(cmd);
          let hapFilePaths = ['/data/storage/el2/base/haps/entry_test/files/' + formProviderOneUpdateDuration6Hap];
          let installParam: installer.InstallParam = {
            userId: 100,
            isKeepData: true,
            installFlag: 1,
            additionalInfo: "formUpdateLevel:8",
          }
          try {
            installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
              data.install(hapFilePaths, installParam, (err: BusinessError) => {
                if (err) {
                  hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0500 install failed. Cause: %{public}s', err.message);
                } else {
                  cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
                  abilityDelegator.executeShellCommand(cmd).then((data) => {
                    hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0500 Step2 FormInfo: %{public}s', JSON.stringify(data) ?? '');
                    try {
                      expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                      expect(JSON.stringify(data)).assertContain("updateDuration [14400000]");
                      deleteForm(formId);
                      done();
                      hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0500 End');
                    } catch {
                      expect().assertFail();
                      deleteForm(formId);
                      done();
                    }
                  })
                }
              })
            }).catch((error: BusinessError) => {
              hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0500 getBundleInstaller failed. Cause: %{public}s', error.message);
            })
          } catch (error) {
            hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0500 getBundleInstaller failed. Cause: %{public}s', error.message);
          }
        }

        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0500 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0500 Step1 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateAtHour [10]");
                expect(JSON.stringify(data)).assertContain("updateAtMin [30]");
                updateProviderHap();
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        cmd = "bm uninstall -n " + bundleNameProviderOne;
        await abilityDelegator.executeShellCommand(cmd);

        cmd = "bm install -p " + testHapPath + formProviderOneUpdateAtTimeHap;
        await abilityDelegator.executeShellCommand(cmd);

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_0500"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0600
     * @tc.name The cloud update duration update.
     * @tc.desc Use provider hap create multiple forms, update the cloud update duration.
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0600', 0, async (done: Function) => {
      setTimeout(async () => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 Start');
        let subscribeCallBack = async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            let formId1: string = data.parameters['widgetFormUpdateDuration2FormId'].toString();
            let formId2: string = data.parameters['widgetFormUpdateDuration4FormId'].toString();
            let formId3: string = data.parameters['widgetFormUpdateDuration6FormId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId1 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [3600000]");
              } catch {
                expect().assertFail();
                deleteForm(formId1);
                deleteForm(formId2);
                deleteForm(formId3);
                done();
              }
            })

            cmd = 'hidumper -s FormMgr -a \'-i ' + formId2 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [7200000]");
              } catch {
                expect().assertFail();
                deleteForm(formId1);
                deleteForm(formId2);
                deleteForm(formId3);
                done();
              }
            })

            cmd = 'hidumper -s FormMgr -a \'-i ' + formId3 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
              } catch {
                expect().assertFail();
                deleteForm(formId1);
                deleteForm(formId2);
                deleteForm(formId3);
                done();
              }
            })

            try {
              let additionalInfo = "formUpdateLevel:4"
              bundleManager.setAdditionalInfo(bundleNameProviderTwo, additionalInfo);
              hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
            } catch (err) {
              let message = (err as BusinessError).message;
              hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
              expect().assertFail();
              done();
            }

            cmd = 'hidumper -s FormMgr -a \'-i ' + formId1 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [7200000]");
                deleteForm(formId1);
              } catch {
                expect().assertFail();
                deleteForm(formId1);
                deleteForm(formId2);
                deleteForm(formId3);
                done();
              }
            })

            cmd = 'hidumper -s FormMgr -a \'-i ' + formId2 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [7200000]");
                deleteForm(formId2);
              } catch {
                expect().assertFail();
                deleteForm(formId2);
                deleteForm(formId3);
                done();
              }
            })

            cmd = 'hidumper -s FormMgr -a \'-i ' + formId3 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId3);
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0600 End');
                done();
              } catch {
                expect().assertFail();
                deleteForm(formId3);
                done();
              }
            })

          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        cmd = "bm uninstall -n " + bundleNameProviderTwo;
        await abilityDelegator.executeShellCommand(cmd);

        cmd = "bm install -p " + testHapPath + formProviderTwoHap;
        await abilityDelegator.executeShellCommand(cmd);

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_0600"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0700
     * @tc.name Cloud based issuance of update strategies for multiple provider haps.
     * @tc.desc Use provider haps create multiple forms, update cloud update duration.
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0700', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0700 Start');
        let subscribeCallBack = async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0700 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            let formId1: string = data.parameters['widgetFormUpdateDuration2FormId'].toString();
            let formId2: string = data.parameters['widgetFormUpdateDuration6FormId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId1 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0700 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [7200000]");
                deleteForm(formId1);
              } catch {
                expect().assertFail();
                deleteForm(formId1);
                deleteForm(formId2);
                done();
              }
            })

            cmd = 'hidumper -s FormMgr -a \'-i ' + formId2 + '\'';
            await abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0700 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId2);
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0700 End');
                done();
              } catch {
                expect().assertFail();
                deleteForm(formId2);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:4"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        try {
          let additionalInfo = "formUpdateLevel:4"
          bundleManager.setAdditionalInfo(bundleNameProviderTwo, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_0700"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0800
     * @tc.name Set the cloud update duration when install the provider hap.
     * @tc.desc Use provider hap create a form.
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0800', 0, async (done: Function) => {
      setTimeout(async () => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0800 Start');
        let installProviderHap = async () => {
          cmd = "cp " + testHapPath + formProviderOneUpdateDuration6Hap + " " + realPath;
          await abilityDelegator.executeShellCommand(cmd);
          let hapFilePaths = ['/data/storage/el2/base/haps/entry_test/files/' + formProviderOneUpdateDuration6Hap];
          let installParam: installer.InstallParam = {
            userId: 100,
            isKeepData: true,
            installFlag: 1,
            additionalInfo: "formUpdateLevel:8",
          }
          try {
            installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
              data.install(hapFilePaths, installParam, (err: BusinessError) => {
                if (err) {
                  hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0800 install failed. Cause: %{public}s', err.message);
                } else {
                  let want: Want = {
                    bundleName: bundleNameFormUser,
                    moduleName: moduleNameEntry,
                    abilityName: abilityNameEntryAbility,
                    parameters: {
                      'testcase': "Acts_FormUpdateDurationTest_0800"
                    }
                  };
                  testAbilityContext.startAbility(want);
                }
              })
            }).catch((error: BusinessError) => {
              hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0800 getBundleInstaller failed. Cause: %{public}s', error.message);
            })
          } catch (error) {
            hilog.error(0x0000, testTag, 'Acts_FormUpdateDurationTest_0800 getBundleInstaller failed. Cause: %{public}s', error.message);
          }
        }

        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0800 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0800 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [14400000]");
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0800 End');
                deleteForm(formId);
                done();
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        cmd = "bm uninstall -n " + bundleNameProviderOne;
        await abilityDelegator.executeShellCommand(cmd);
        installProviderHap();
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_0900
     * @tc.name The cloud update duration is invalid.
     * @tc.desc Use provider hap create a form, cloud set additional info is "formUpdateLevel:".
     *          Use local configuration update duration.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_0900', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0900 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0900 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0900 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_0900 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_0900"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_1000
     * @tc.name The cloud update duration is invalid.
     * @tc.desc Use provider hap create a form, cloud set additional info is "formUpdateLevel:abc".
     *          Use local configuration update duration.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_1000', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1000 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1000 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1000 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1000 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:abc"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_1000"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_1100
     * @tc.name The cloud update duration is invalid.
     * @tc.desc Use provider hap create a form, cloud set additional info is "formUpdateLevel:0".
     *          Use local configuration update duration.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_1100', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1100 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1100 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1100 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1100 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:0"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_1100"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_1200
     * @tc.name The cloud update duration is invalid.
     * @tc.desc Use provider hap create a form, cloud set additional info is "formUpdateLevel:-1".
     *          Use local configuration update duration.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_1200', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1200 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1200 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1200 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1200 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:-1"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_1200"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_1300
     * @tc.name The cloud update duration is min.
     * @tc.desc Use provider hap create a form, cloud set additional info is "formUpdateLevel:1".
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_1300', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1300 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1300 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1300 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1300 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:1"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_1300"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_1400
     * @tc.name The cloud update duration is max.
     * @tc.desc Use provider hap create a form, cloud set additional info is "formUpdateLevel:336".
     *          Compare with local configuration update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_1400', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1400 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1400 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1400 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [604800000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1400 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:336"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_1400"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_1500
     * @tc.name The cloud update duration is invalid.
     * @tc.desc Use provider hap create a form, cloud set additional info is "formUpdateLevel:1000".
     *          Use local configuration update duration.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_1500', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1500 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1500 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1500 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [10800000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1500 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:1000"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_1500"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })

    /**
     * @tc.number Acts_FormUpdateDurationTest_1600
     * @tc.name The cloud update duration has multiple levels.
     * @tc.desc Use provider hap create a form, cloud set additional info is "formUpdateLevel:2, formUpdateLevel:8, formUpdateLevel:0".
     *          Compare the last valid value width locally configuredlocal update duration and use larger values.
     * @ts.size MediumTest
     * @ts.type Function
     * @ts.level Level 3
     */
    it('Acts_FormUpdateDurationTest_1600', 0, async (done: Function) => {
      setTimeout(() => {
        hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1600 Start');
        let subscribeCallBack = (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1600 subscribeCallBack data: %{public}s', JSON.stringify(data));
          if (data.event === "FormUpdateDurationTest_AddForm" && data.parameters) {
            formId = data.parameters['formId'].toString();
            cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
            abilityDelegator.executeShellCommand(cmd).then((data) => {
              hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1600 FormInfo: %{public}s', JSON.stringify(data) ?? '');
              try {
                expect(JSON.stringify(data)).assertContain("isEnableUpdate [1]");
                expect(JSON.stringify(data)).assertContain("updateDuration [14400000]");
                deleteForm(formId);
                done();
                hilog.info(0x0000, testTag, 'Acts_FormUpdateDurationTest_1600 End');
              } catch {
                expect().assertFail();
                deleteForm(formId);
                done();
              }
            })
          }
        }

        subscribe = commonEventManager.createSubscriberSync(commonEvent);
        commonEventManager.subscribe(subscribe, subscribeCallBack);

        try {
          let additionalInfo = "formUpdateLevel:2, formUpdateLevel:8, formUpdateLevel:0"
          bundleManager.setAdditionalInfo(bundleNameProviderOne, additionalInfo);
          hilog.info(0x0000, testTag, 'setAdditionalInfo successfully.');
        } catch (err) {
          let message = (err as BusinessError).message;
          hilog.error(0x0000, testTag, 'setAdditionalInfo failed. Cause: %{public}s', message);
          expect().assertFail();
          done();
        }

        let want: Want = {
          bundleName: bundleNameFormUser,
          moduleName: moduleNameEntry,
          abilityName: abilityNameEntryAbility,
          parameters: {
            'testcase': "Acts_FormUpdateDurationTest_1600"
          }
        };

        testAbilityContext.startAbility(want);
      }, 1000);
    })
  })
}
