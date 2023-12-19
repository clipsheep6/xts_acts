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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import base from '@ohos.base';

let subscribe: commonEventManager.CommonEventSubscriber;
let testAbilityContext: common.UIAbilityContext;
let abilityDelegator: abilityDelegatorRegistry.AbilityDelegator;
let commonEvent: commonEventManager.CommonEventSubscribeInfo = {
  events: ['FMS_onAddForm_commonEvent', 'FMS_onUpdateForm_commonEvent', 'FMS_updateForm_commonEvent']
};

function sleep(delay: Number) {
  let start = (new Date()).getTime();
  while ((new Date()).getTime() - start < delay) {
    continue;
  }
}

export default function abilityTest() {
  describe('ActsAbilityTest', () => {

    beforeAll(async (done: Function) => {
      testAbilityContext = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
      abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      done();
    })

    afterEach(async (done: Function) => {
      let cmd = 'aa force-stop com.acts.actsdfxenhanceformprovider';
      await abilityDelegator.executeShellCommand(cmd);
      commonEventManager.publish('FMS_onRemoveForm_commonEvent', async () => {
      });

      testAbilityContext.startAbility({
        bundleName: 'com.acts.actsdfxenhancetest',
        abilityName: 'TestAbility'
      });
      sleep(2000);
      commonEventManager.unsubscribe(subscribe, () => {
        done();
      });
    })

    /**
     * @tc.number: Acts_HiDumpFormSubscribedKeysByFormId_0100
     * @tc.name: hidumper enter in a no subscribe formId
     * @tc.desc: 1.Enter a existent but no subscribe formId to print.
     *           2.Return correct print result.
     */
    it('Acts_HiDumpFormSubscribedKeysByFormId_0100', 0, async (done: Function) => {
      setTimeout(() => {
        commonEventManager.createSubscriber(commonEvent).then(data => {
          subscribe = data;

          commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
            if (data.event === "FMS_onAddForm_commonEvent" && data.parameters) {
              await sleep(1000);
              let formId = '';
              formId = data.parameters['formId'].toString();
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';

              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data)).assertContain("key [ ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [0]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })
              done();
            }
          });

          testAbilityContext.startAbility({
            bundleName: 'com.acts.actsdfxenhancetest',
            abilityName: 'EntryAbility',
            parameters: {
              'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0100'
            }
          });
        })
      }, 1000);
    })

    /**
     * @tc.number: Acts_HiDumpFormSubscribedKeysByFormId_0200
     * @tc.name: hidumper enter in a existent and subscribe successfully formId
     * @tc.desc: 1.Enter a existent and subscribe successfully formId to print.
     *           2.Return correct print result.
     */
    it('Acts_HiDumpFormSubscribedKeysByFormId_0200', 0, async (done: Function) => {
      setTimeout(() => {
        commonEventManager.createSubscriber(commonEvent).then(data => {
          subscribe = data;

          commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
            if (data.event === "FMS_onAddForm_commonEvent" && data.parameters) {
              await sleep(1000);
              let formId = '';
              formId = data.parameters['formId'].toString();
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';

              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data)).assertContain("key [ [cityName] [cityTemperature] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [0]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })
              done();
            }
          });

          testAbilityContext.startAbility({
            bundleName: 'com.acts.actsdfxenhancetest',
            abilityName: 'EntryAbility',
            parameters: {
              'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0200'
            }
          });
        })
      }, 1000);
    })

    /**
     * @tc.number: Acts_HiDumpFormSubscribedKeysByFormId_0300
     * @tc.name: hidumper enter in a existent and subscribe successfully formId
     * @tc.desc: 1.Enter a existent and subscribe successfully formId to print.
     *           2.publish data to form
     *           3.Return correct print result.
     */
    it('Acts_HiDumpFormSubscribedKeysByFormId_0300', 0, async (done: Function) => {
      setTimeout(() => {
        commonEventManager.createSubscriber(commonEvent).then(data => {
          subscribe = data;
          let formId = '';
          commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
            if (data.event === "FMS_onAddForm_commonEvent" && data.parameters) {
              await sleep(1000);
              formId = data.parameters['formId'].toString();
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data)).assertContain("key [ [cityName] [cityTemperature] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [0]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })

              testAbilityContext.startAbility({
                bundleName: 'com.acts.actsdfxenhanceformprovider',
                abilityName: 'EntryAbility',
                parameters: {
                  'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0300',
                  'formId': formId
                }
              });
              await sleep(1000);
            } else if (data.event === "FMS_updateForm_commonEvent") {
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data)).assertContain("key [ [cityName] [cityTemperature] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [1]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })
              done();
            }
          });

          testAbilityContext.startAbility({
            bundleName: 'com.acts.actsdfxenhancetest',
            abilityName: 'EntryAbility',
            parameters: {
              'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0300'
            }
          });
        })
      }, 1000);
    })

    /**
     * @tc.number: Acts_HiDumpFormSubscribedKeysByFormId_0400
     * @tc.name: hidumper enter in a existent and subscribe successfully formId
     * @tc.desc: 1.Enter a existent and subscribe successfully formId to print.
     *           2.publish data to form
     *           3.remove form and recreate a same form
     *           4.Return correct print result.
     */
    it('Acts_HiDumpFormSubscribedKeysByFormId_0400', 0, async (done: Function) => {
      setTimeout(() => {
        commonEventManager.createSubscriber(commonEvent).then(data => {
          subscribe = data;
          let formId = '';
          commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
            if (data.event === "FMS_onAddForm_commonEvent" && data.parameters) {
              await sleep(1000);
              formId = data.parameters['formId'].toString();
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data)).assertContain("key [ [cityName] [cityTemperature] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [0]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })

              testAbilityContext.startAbility({
                bundleName: 'com.acts.actsdfxenhanceformprovider',
                abilityName: 'EntryAbility',
                parameters: {
                  'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0400',
                  'formId': formId
                }
              });
              await sleep(1000);
            } else if (data.event === "FMS_updateForm_commonEvent") {
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data)).assertContain("key [ [cityName] [cityTemperature] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [1]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })
              commonEventManager.publish('FMS_onRemoveForm_commonEvent', async () => {
              });
              await sleep(1000);

              let stopCmd = 'aa force-stop com.acts.actsdfxenhanceformprovider';
              await abilityDelegator.executeShellCommand(stopCmd);
              commonEventManager.publish('FMS_onRemoveForm_commonEvent', async () => {
              });
              commonEventManager.unsubscribe(subscribe, () => {
              });

              setTimeout(() => {
                commonEventManager.createSubscriber(commonEvent).then(data => {
                  subscribe = data;
                  commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
                    if (data.event === "FMS_onAddForm_commonEvent" && data.parameters) {
                      await sleep(1000);
                      let formId = '';
                      formId = data.parameters['formId'].toString();
                      let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';

                      await abilityDelegator.executeShellCommand(cmd).then((data) => {
                        try {
                          expect(JSON.stringify(data)).assertContain("key [ [cityName] [cityTemperature] ]");
                          expect(JSON.stringify(data)).assertContain("updatedCount [0]");
                        } catch {
                          expect().assertFail();
                          done();
                        }
                      })
                      done();
                    }
                  });
                  testAbilityContext.startAbility({
                    bundleName: 'com.acts.actsdfxenhancetest',
                    abilityName: 'EntryAbility',
                    parameters: {
                      'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0400'
                    }
                  });
                });
              }, 1000);
            }
            ;
          });

          testAbilityContext.startAbility({
            bundleName: 'com.acts.actsdfxenhancetest',
            abilityName: 'EntryAbility',
            parameters: {
              'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0400'
            }
          });
        })
      }, 1000);
    })

    /**
     * @tc.number: Acts_HiDumpFormSubscribedKeysByFormId_0500
     * @tc.name: hidumper enter in a existent and subscribe successfully formId
     * @tc.desc: 1.Enter a existent and subscribe successfully formId to print.
     *           2.publish data for the two keys separately
     *           3.Return correct print result.
     */
    it('Acts_HiDumpFormSubscribedKeysByFormId_0500', 0, async (done: Function) => {
      setTimeout(() => {
        commonEventManager.createSubscriber(commonEvent).then(data => {
          subscribe = data;
          let formId = '';
          commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
            if (data.event === "FMS_onAddForm_commonEvent" && data.parameters) {
              await sleep(1000);
              formId = data.parameters['formId'].toString();
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data)).assertContain("key [ [cityName] [cityTemperature] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [0]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })

              testAbilityContext.startAbility({
                bundleName: 'com.acts.actsdfxenhanceformprovider',
                abilityName: 'EntryAbility',
                parameters: {
                  'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0500',
                  'formId': formId
                }
              });
              await sleep(1000);
            } else if (data.event === "FMS_updateForm_commonEvent") {
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data)).assertContain("key [ [cityName] [cityTemperature] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [2]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })
              done();
            }
          });

          testAbilityContext.startAbility({
            bundleName: 'com.acts.actsdfxenhancetest',
            abilityName: 'EntryAbility',
            parameters: {
              'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0500'
            }
          });
        })
      }, 1000);
    })

    /**
     * @tc.number: Acts_HiDumpFormSubscribedKeysByFormId_0600
     * @tc.name: hidumper enter in a existent and subscribe successfully formId
     * @tc.desc: 1.Enter a existent and subscribe successfully formId to print.
     *           2.update publish and rdb data separately
     *           3.Return correct print result.
     */
    it('Acts_HiDumpFormSubscribedKeysByFormId_0600', 0, async (done: Function) => {
      setTimeout(() => {
        commonEventManager.createSubscriber(commonEvent).then(data => {
          subscribe = data;
          let formId = '';
          commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
            if (data.event === "FMS_onAddForm_commonEvent" && data.parameters) {
              await sleep(1000);
              formId = data.parameters['formId'].toString();
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data))
                    .assertContain("key [ [datashareproxy://com.acts.actsdfxenhanceformprovider/test] [cityName] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [1]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })

              testAbilityContext.startAbility({
                bundleName: 'com.acts.actsdfxenhanceformprovider',
                abilityName: 'EntryAbility',
                parameters: {
                  'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0600',
                  'formId': formId
                }
              });
              await sleep(1000);
            } else if (data.event === "FMS_updateForm_commonEvent") {
              let cmd = 'hidumper -s FormMgr -a \'-i ' + formId + '\'';
              await abilityDelegator.executeShellCommand(cmd).then((data) => {
                try {
                  expect(JSON.stringify(data))
                    .assertContain("key [ [datashareproxy://com.acts.actsdfxenhanceformprovider/test] [cityName] ]");
                  expect(JSON.stringify(data)).assertContain("updatedCount [3]");
                } catch {
                  expect().assertFail();
                  done();
                }
              })
              done();
            }
          });

          testAbilityContext.startAbility({
            bundleName: 'com.acts.actsdfxenhancetest',
            abilityName: 'EntryAbility',
            parameters: {
              'testcase': 'Acts_HiDumpFormSubscribedKeysByFormId_0600'
            }
          });
        })
      }, 1000);
    })

  })
}