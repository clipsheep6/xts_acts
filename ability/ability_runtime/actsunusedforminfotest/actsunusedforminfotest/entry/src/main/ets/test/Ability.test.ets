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
import formObserver from '@ohos.app.form.formObserver';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { describe, beforeEach, it, expect } from '@ohos/hypium';
import formHost from '@ohos.app.form.formHost';

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

let FIRST_FORM_FIRST_FILTER = {
  bundleName: 'com.example.formprovider',
  isUnusedIncluded: false
};
let FIRST_FORM_SECOND_FILTER = {
  bundleName: 'com.example.formprovider',
  isUnusedIncluded: true
};
let FIRST_ABILITY_WANT = {
  bundleName: 'com.example.formtest',
  abilityName: 'EntryAbility'
};
let SECOND_ABILITY_WANT = {
  bundleName: 'com.example.formtest',
  abilityName: 'EntryAbilityTwo'
};

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeEach(async function () {
      await sleep(500);
    })

    /**
     * @tc.number: Acts_GetRunningFormInfosByFilter_0100
     * @tc.name: Test getRunningFormInfosByFilter.
     * @tc.desc: getRunningFormInfosByFilter can get information of a single form.
     */
    it('Acts_GetRunningFormInfosByFilter_0100', 0, async function (done) {
      await abilityDelegator.startAbility(FIRST_ABILITY_WANT).catch((err) => {
        expect(err.code).assertEqual(0);
      });
      let formId = '0';
      await sleep(1000);
      try {
        formObserver.getRunningFormInfosByFilter(FIRST_FORM_FIRST_FILTER, async (err, data) => {
          console.log('====>Acts_GetRunningFormInfosByFilter_0100 first getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          expect(data[0].formUsageState).assertEqual(0);
          expect(data[0].visibilityType).assertEqual(0);
          expect(data[0].dimension).assertEqual(2);
          expect(data[0].hostBundleName).assertContain('com.example.formtest');
          expect(data[0].bundleName).assertContain('com.example.formprovider');
          expect(data[0].moduleName).assertContain('entry');
          expect(data[0].abilityName).assertContain('FormAbility');
          expect(data[0].formName).assertContain('form');
          formId = data[0].formId;
          await formHost.releaseForm(formId);
          try {
            await formObserver.getRunningFormInfosByFilter(FIRST_FORM_SECOND_FILTER).then(async (data) => {
              console.log('====>Acts_GetRunningFormInfosByFilter_0100 second getInfo data: ' + JSON.stringify(data));
              if (data) {
                expect(data[0].formUsageState).assertEqual(1);
                expect(data[0].visibilityType).assertEqual(0);
                expect(data[0].dimension).assertEqual(0);
                expect(data[0].hostBundleName).assertContain('com.example.formtest');
                expect(data[0].bundleName).assertContain('com.example.formprovider');
                expect(data[0].moduleName).assertContain('entry');
                expect(data[0].abilityName).assertContain('FormAbility');
                expect(data[0].formName).assertContain('form');
                formId = data[0].formId;
                await formHost.deleteForm(formId);
                done();
              }
            });
          } catch (err) {
            console.log('====>Acts_GetRunningFormInfosByFilter_0100 second getInfo err: ' + JSON.stringify(err));
          }

        });
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfosByFilter_0100 first getInfo err: ' + JSON.stringify(err));
      }
    })

    /**
     * @tc.number: Acts_GetRunningFormInfosByFilter_0200
     * @tc.name: Test getRunningFormInfosByFilter.
     * @tc.desc: getRunningFormInfosByFilter can get information of multiple forms.
     */
    it('Acts_GetRunningFormInfosByFilter_0200', 0, async function (done) {
      await abilityDelegator.startAbility(FIRST_ABILITY_WANT).catch((err) => {
        expect(err.code).assertEqual(0);
      });
      await sleep(1000);
      await abilityDelegator.startAbility(SECOND_ABILITY_WANT).catch((err) => {
        expect(err.code).assertEqual(0);
      });
      await sleep(1000);
      let firstFormId = '0';
      let secondFormId = '0';
      try {
        formObserver.getRunningFormInfosByFilter(FIRST_FORM_FIRST_FILTER, async (err, data) => {
          console.log('====>Acts_GetRunningFormInfosByFilter_0200 first getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          expect(data[0].formUsageState).assertEqual(0);
          expect(data[0].visibilityType).assertEqual(0);
          expect(data[0].dimension).assertEqual(2);
          expect(data[0].hostBundleName).assertContain('com.example.formtest');
          expect(data[0].bundleName).assertContain('com.example.formprovider');
          expect(data[0].moduleName).assertContain('entry');
          expect(data[0].abilityName).assertContain('FormAbility');
          expect(data[0].formName).assertContain('form');
          expect(data[1].formUsageState).assertEqual(0);
          expect(data[1].visibilityType).assertEqual(0);
          expect(data[1].dimension).assertEqual(2);
          expect(data[1].hostBundleName).assertContain('com.example.formtest');
          expect(data[1].bundleName).assertContain('com.example.formprovider');
          expect(data[1].moduleName).assertContain('entry');
          expect(data[1].abilityName).assertContain('FormAbility');
          expect(data[1].formName).assertContain('form');
          firstFormId = data[0].formId;
          secondFormId = data[1].formId;
          await formHost.releaseForm(firstFormId).catch((err) => {
            console.log('====>Acts_GetRunningFormInfosByFilter_0200 first release err: ' + JSON.stringify(err));
          });
          await sleep(500);
          try {
            await formObserver.getRunningFormInfosByFilter(FIRST_FORM_SECOND_FILTER).then(async (data) => {
              console.log('====>Acts_GetRunningFormInfosByFilter_0200 second getInfo data: ' + JSON.stringify(data));
              if (!data) {
                expect().assertFail();
              }
              if (data[0].formId === firstFormId) {
                expect(data[0].formUsageState).assertEqual(1);
                expect(data[0].dimension).assertEqual(0);
                expect(data[1].formUsageState).assertEqual(0);
                expect(data[1].dimension).assertEqual(2);
              } else if (data[1].formId === firstFormId) {
                expect(data[0].formUsageState).assertEqual(0);
                expect(data[0].dimension).assertEqual(2);
                expect(data[1].formUsageState).assertEqual(1);
                expect(data[1].dimension).assertEqual(0);
              } else {
                await formHost.deleteForm(firstFormId);
                await formHost.deleteForm(secondFormId);
                expect().assertFail();
              }
              expect(data[0].visibilityType).assertEqual(0);
              expect(data[0].hostBundleName).assertContain('com.example.formtest');
              expect(data[0].bundleName).assertContain('com.example.formprovider');
              expect(data[0].moduleName).assertContain('entry');
              expect(data[0].abilityName).assertContain('FormAbility');
              expect(data[0].formName).assertContain('form');
              expect(data[1].visibilityType).assertEqual(0);
              expect(data[1].hostBundleName).assertContain('com.example.formtest');
              expect(data[1].bundleName).assertContain('com.example.formprovider');
              expect(data[1].moduleName).assertContain('entry');
              expect(data[1].abilityName).assertContain('FormAbility');
              expect(data[1].formName).assertContain('form');
              await formHost.deleteForm(firstFormId);
              await formHost.deleteForm(secondFormId);
              done();
            }).catch((err) => {
              console.log('====>Acts_GetRunningFormInfosByFilter_0200 second getInfo err: ' + JSON.stringify(err));
            });
          } catch (err) {
            console.log('====>Acts_GetRunningFormInfosByFilter_0200 second getInfo err: ' + JSON.stringify(err));
            expect().assertFail();
          }
        })
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfosByFilter_0200 first getInfo err: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })

    /**
     * @tc.number: Acts_GetRunningFormInfosByFilter_0400
     * @tc.name: Test getRunningFormInfosByFilter.
     * @tc.desc: After applying the upgrade, you can get the form information by using getRunningFormInfosByFilter.
     */
    it('Acts_GetRunningFormInfosByFilter_0400', 0, async function (done) {
      await abilityDelegator.startAbility({
        bundleName: 'com.example.getunusedforminforely',
        abilityName: 'EntryAbility'
      }).catch((err) => {
        console.log('====>Acts_GetRunningFormInfosByFilter_0400 err.code: ' + err.code);
        expect(err.code).assertEqual(0);
      });
      await sleep(1000);
      let formId = '0';
      try {
        await formObserver.getRunningFormInfosByFilter(FIRST_FORM_FIRST_FILTER).then(async (data) => {
          console.log('====>Acts_GetRunningFormInfosByFilter_0400 first getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          formId = data[0].formId;
          expect(data[0].formUsageState).assertEqual(0);
          expect(data[0].visibilityType).assertEqual(0);
          expect(data[0].dimension).assertEqual(2);
          expect(data[0].hostBundleName).assertContain('com.example.getunusedforminforely');
          expect(data[0].bundleName).assertContain('com.example.formprovider');
          expect(data[0].moduleName).assertContain('entry');
          expect(data[0].abilityName).assertContain('FormAbility');
          expect(data[0].formName).assertContain('form');
          let cmd = 'bm install -rp data/ActsUnusedFormInfoRelyTwo.hap';
          await abilityDelegator.executeShellCommand(cmd).then(() => {
            console.log('====>Acts_GetRunningFormInfosByFilter_0400 executeShellCommand:');
          }).catch((err) => {
            expect(err.code).assertEqual(0);
          });
        })
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfosByFilter_0400 first getInfo err: ' + JSON.stringify(err));
        expect().assertFail();
      }
      await sleep(1000);
      try {
        await formObserver.getRunningFormInfosByFilter(FIRST_FORM_SECOND_FILTER).then(async (data) => {
          console.log('====>Acts_GetRunningFormInfosByFilter_0400 second getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          if (data[0].formId === formId) {
            expect(data[0].formUsageState).assertEqual(1);
            expect(data[0].visibilityType).assertEqual(0);
            expect(data[0].dimension).assertEqual(0);
            expect(data[0].hostBundleName).assertContain('com.example.getunusedforminforely');
            expect(data[0].bundleName).assertContain('com.example.formprovider');
            expect(data[0].moduleName).assertContain('entry');
            expect(data[0].abilityName).assertContain('FormAbility');
            expect(data[0].formName).assertContain('form');
          } else {
            expect().assertFail();
          }

          await abilityDelegator.startAbility({
            bundleName: 'com.example.getunusedforminforely',
            abilityName: 'EntryAbilityTwo',
            parameters: {
              firstFormId: formId
            }
          }).catch((err) => {
            console.log('====>Acts_GetRunningFormInfosByFilter_0400 err.code: ' + err.code);
            expect(err.code).assertEqual(0);
          });
          await sleep(1000);
          done();
        });
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfosByFilter_0400 second getInfo err: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })

    /**
     * @tc.number: Acts_GetFormInstanceById_0100
     * @tc.name: Test getRunningFormInfoById.
     * @tc.desc: getRunningFormInfoById can get information of an unused form.
     */
    it('Acts_GetFormInstanceById_0100', 0, async function (done) {
      await abilityDelegator.startAbility(FIRST_ABILITY_WANT).catch((err) => {
        console.log('====>Acts_GetRunningFormInfosByFilter_0100 err.code: ' + err.code);
        expect(err.code).assertEqual(0);
      })
      let formId = '0';
      await sleep(1000);
      try {
        await formObserver.getRunningFormInfosByFilter(FIRST_FORM_FIRST_FILTER).then(async (data) => {
          if (!data) {
            expect().assertFail();
          }
          formId = data[0].formId;
          await formHost.releaseForm(formId);
        })
      } catch (err) {
        console.log('====>Acts_GetFormInstanceById_0100 getId err: ' + JSON.stringify(err));
        expect().assertFail();
      }
      try {
        formObserver.getRunningFormInfoById(formId, true, async (err, data) => {
          console.log('====>Acts_GetFormInstanceById_0100 getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          expect(data.formUsageState).assertEqual(1);
          expect(data.visibilityType).assertEqual(0);
          expect(data.dimension).assertEqual(0);
          expect(data.hostBundleName).assertContain('com.example.formtest');
          expect(data.bundleName).assertContain('com.example.formprovider');
          expect(data.moduleName).assertContain('entry');
          expect(data.abilityName).assertContain('FormAbility');
          expect(data.formName).assertContain('form');
          await formHost.deleteForm(formId);
          done();
        })
      } catch (err) {
        console.log('====>Acts_GetFormInstanceById_0100 getInfo err: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })

    /**
     * @tc.number: Acts_GetFormInstanceById_0200
     * @tc.name: Test getRunningFormInfoById.
     * @tc.desc: getRunningFormInfoById can get information of a form in used.
     */
    it('Acts_GetFormInstanceById_0200', 0, async function (done) {
      await abilityDelegator.startAbility(FIRST_ABILITY_WANT).catch((err) => {
        console.log('====>Acts_GetRunningFormInfosByFilter_0200 err.code: ' + err.code);
        expect(err.code).assertEqual(0);
      })
      let formId = '0';
      await sleep(1000);
      try {
        await formObserver.getRunningFormInfosByFilter(FIRST_FORM_FIRST_FILTER).then(async (data) => {
          if (!data) {
            expect().assertFail();
          }
          formId = data[0].formId;
        })
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfosByFilter_0200 getId err: ' + JSON.stringify(err));
      }

      try {
        await formObserver.getRunningFormInfoById(formId, false).then(async (data) => {
          console.log('====>Acts_GetFormInstanceById_0200 getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          expect(data.formUsageState).assertEqual(0);
          expect(data.visibilityType).assertEqual(0);
          expect(data.dimension).assertEqual(2);
          expect(data.hostBundleName).assertContain('com.example.formtest');
          expect(data.bundleName).assertContain('com.example.formprovider');
          expect(data.moduleName).assertContain('entry');
          expect(data.abilityName).assertContain('FormAbility');
          expect(data.formName).assertContain('form');
          await formHost.deleteForm(formId);
          done();
        })
      } catch (err) {
        console.log('====>Acts_GetFormInstanceById_0200 getInfo err: ' + JSON.stringify(err));
      }
    })

    /**
     * @tc.number: Acts_GetFormInstanceById_0400
     * @tc.name: Test getRunningFormInfoById.
     * @tc.desc: After applying the upgrade, you can get the form information by using getRunningFormInfoById.
     */
    it('Acts_GetFormInstanceById_0400', 0, async function (done) {
      await abilityDelegator.startAbility({
        bundleName: 'com.example.getunusedforminforely',
        abilityName: 'EntryAbility'
      }).catch((err) => {
        console.log('====>Acts_GetFormInstanceById_0400 err.code: ' + err.code);
        expect(err.code).assertEqual(0);
      });
      await sleep(1000);
      let formId = '0';
      try {
        await formObserver.getRunningFormInfosByFilter(FIRST_FORM_FIRST_FILTER).then((data) => {
          console.log('====>Acts_GetFormInstanceById_0400 getId data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          formId = data[0].formId;
        });
      } catch (err) {
        console.log('====>Acts_GetFormInstanceById_0400 getId err: ' + JSON.stringify(err));
        expect().assertFail();
      }

      try {
        await formObserver.getRunningFormInfoById(formId, true).then(async (data) => {
          console.log('====>Acts_GetFormInstanceById_0400 first getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          expect(data.formUsageState).assertEqual(0);
          expect(data.visibilityType).assertEqual(0);
          expect(data.dimension).assertEqual(2);
          expect(data.hostBundleName).assertContain('com.example.getunusedforminforely');
          expect(data.bundleName).assertContain('com.example.formprovider');
          expect(data.moduleName).assertContain('entry');
          expect(data.abilityName).assertContain('FormAbility');
          expect(data.formName).assertContain('form');
          let cmd = 'bm install -rp data/ActsUnusedFormInfoRelyTwo.hap';
          await abilityDelegator.executeShellCommand(cmd).then(() => {
            console.log('====>Acts_GetFormInstanceById_0400 executeShellCommand:');
          }).catch((err) => {
            expect(err.code).assertEqual(0);
          });
        });
      } catch (err) {
        console.log('====>Acts_GetFormInstanceById_0400 first getInfo err: ' + JSON.stringify(err));
      }
      await sleep(1000);
      try {
        await formObserver.getRunningFormInfoById(formId, true).then(async (data) => {
          console.log('====>Acts_GetFormInstanceById_0400 second getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          if (data.formId === formId) {
            expect(data.formUsageState).assertEqual(1);
            expect(data.visibilityType).assertEqual(0);
            expect(data.dimension).assertEqual(0);
            expect(data.hostBundleName).assertContain('com.example.getunusedforminforely');
            expect(data.bundleName).assertContain('com.example.formprovider');
            expect(data.moduleName).assertContain('entry');
            expect(data.abilityName).assertContain('FormAbility');
            expect(data.formName).assertContain('form');
          } else {
            expect().assertFail();
          }
          await abilityDelegator.startAbility({
            bundleName: 'com.example.getunusedforminforely',
            abilityName: 'EntryAbilityTwo',
            parameters: {
              firstFormId: formId
            }
          }).catch((err) => {
            console.log('====>Acts_GetFormInstanceById_0400 err.code: ' + err.code);
            expect(err.code).assertEqual(0);
          });
          await sleep(1000);
          done();
        })
      } catch (err) {
        console.log('====>Acts_GetFormInstanceById_0400 second getInfo err: ' + JSON.stringify(err));
      }
    })

    /**
     * @tc.number: Acts_GetRunningFormInfos_0100
     * @tc.name: Test getRunningFormInfos.
     * @tc.desc: getRunningFormInfos can get information of a single form.
     */
    it('Acts_GetRunningFormInfos_0100', 0, async function (done) {
      await abilityDelegator.startAbility(FIRST_ABILITY_WANT).catch((err) => {
        console.log('====>Acts_GetRunningFormInfos_0100 err.code: ' + err.code);
        expect(err.code).assertEqual(0);
      })
      let formId = '0';
      await sleep(1000);
      try {
        formObserver.getRunningFormInfos(async (err, data) => {
          console.log('====>Acts_GetRunningFormInfos_0100 first getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          console.log('====>Acts_GetRunningFormInfos_0100 first data.size is ' + data.length);
          let i;
          for(i = 0; i < data.length; i++)
            if (data[i].hostBundleName === 'com.example.formtest')
              break;
          expect(data[i].formUsageState).assertEqual(0);
          expect(data[i].visibilityType).assertEqual(0);
          expect(data[i].dimension).assertEqual(2);
          expect(data[i].hostBundleName).assertContain('com.example.formtest');
          expect(data[i].bundleName).assertContain('com.example.formprovider');
          expect(data[i].moduleName).assertContain('entry');
          expect(data[i].abilityName).assertContain('FormAbility');
          expect(data[i].formName).assertContain('form');
          formId = data[i].formId;
          await formHost.releaseForm(formId);
          try {
            await formObserver.getRunningFormInfos(true).then(async (data) => {
              console.log('====>Acts_GetRunningFormInfos_0100 second getInfo data: ' + JSON.stringify(data));
              if (!data) {
                expect().assertFail();
              }
              console.log('====>Acts_GetRunningFormInfos_0100 second data.size is ' + data.length);
              for(i = 0; i < data.length; i++)
                if (data[i].hostBundleName === 'com.example.formtest')
                  break;
              expect(data[i].formUsageState).assertEqual(1);
              expect(data[i].visibilityType).assertEqual(0);
              expect(data[i].dimension).assertEqual(0);
              expect(data[i].hostBundleName).assertContain('com.example.formtest');
              expect(data[i].bundleName).assertContain('com.example.formprovider');
              expect(data[i].moduleName).assertContain('entry');
              expect(data[i].abilityName).assertContain('FormAbility');
              expect(data[i].formName).assertContain('form');
              await formHost.deleteForm(formId);
              done();
            })
          } catch (err) {
            console.log('====>Acts_GetRunningFormInfos_0100 second getInfo err: ' + JSON.stringify(err));
            expect().assertFail();
          }
        }, false);
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfos_0100 first getInfo err: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })

    /**
     * @tc.number: Acts_GetRunningFormInfos_0200
     * @tc.name: Test getRunningFormInfos.
     * @tc.desc: getRunningFormInfos can get information of multiple forms.
     */
    it('Acts_GetRunningFormInfos_0200', 0, async function (done) {
      await abilityDelegator.startAbility(FIRST_ABILITY_WANT).catch((err) => {
        expect(err.code).assertEqual(0);
      })
      await sleep(1000);
      await abilityDelegator.startAbility(SECOND_ABILITY_WANT).catch((err) => {
        expect(err.code).assertEqual(0);
      })
      await sleep(1000);
      let firstFormId = '0';
      let secondFormId = '0';
      try {
        formObserver.getRunningFormInfos(async (err, data) => {
          console.log('====>Acts_GetRunningFormInfos_0200 first getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          console.log('====>Acts_GetRunningFormInfos_0200 first data.size is ' + data.length);
          let i;
          let j;
          for(i = 0; i < data.length; i++)
            if (data[i].hostBundleName === 'com.example.formtest')
              break;
          for(j = i + 1; j < data.length; j++)
            if (data[j].hostBundleName === 'com.example.formtest')
              break;
          expect(data[i].formUsageState).assertEqual(0);
          expect(data[i].visibilityType).assertEqual(0);
          expect(data[i].dimension).assertEqual(2);
          expect(data[i].hostBundleName).assertContain('com.example.formtest');
          expect(data[i].bundleName).assertContain('com.example.formprovider');
          expect(data[i].moduleName).assertContain('entry');
          expect(data[i].abilityName).assertContain('FormAbility');
          expect(data[i].formName).assertContain('form');
          expect(data[j].formUsageState).assertEqual(0);
          expect(data[j].visibilityType).assertEqual(0);
          expect(data[j].dimension).assertEqual(2);
          expect(data[j].hostBundleName).assertContain('com.example.formtest');
          expect(data[j].bundleName).assertContain('com.example.formprovider');
          expect(data[j].moduleName).assertContain('entry');
          expect(data[j].abilityName).assertContain('FormAbility');
          expect(data[j].formName).assertContain('form');
          firstFormId = data[i].formId;
          secondFormId = data[j].formId;
          await formHost.releaseForm(firstFormId);

          try {
            await formObserver.getRunningFormInfos(true).then(async (data) => {
              console.log('====>Acts_GetRunningFormInfos_0200 second getInfo data: ' + JSON.stringify(data));
              if (!data) {
                expect().assertFail();
              }
              console.log('====>Acts_GetRunningFormInfos_0200 second data.size is ' + data.length);
              for(i = 0; i < data.length; i++)
              if (data[i].hostBundleName === 'com.example.formtest')
                break;
              for(j = i + 1; j < data.length; j++)
                if (data[j].hostBundleName === 'com.example.formtest')
                  break;
              if (data[i].formId === firstFormId) {
                expect(data[i].formUsageState).assertEqual(1);
                expect(data[i].dimension).assertEqual(0);
                expect(data[j].formUsageState).assertEqual(0);
                expect(data[j].dimension).assertEqual(2);
              } else if (data[j].formId === firstFormId) {
                expect(data[i].formUsageState).assertEqual(0);
                expect(data[i].dimension).assertEqual(2);
                expect(data[j].formUsageState).assertEqual(1);
                expect(data[j].dimension).assertEqual(0);
              } else {
                await formHost.deleteForm(firstFormId);
                await formHost.deleteForm(secondFormId);
                expect().assertFail();
              }
              expect(data[i].visibilityType).assertEqual(0);
              expect(data[i].hostBundleName).assertContain('com.example.formtest');
              expect(data[i].bundleName).assertContain('com.example.formprovider');
              expect(data[i].moduleName).assertContain('entry');
              expect(data[i].abilityName).assertContain('FormAbility');
              expect(data[i].formName).assertContain('form');
              expect(data[j].visibilityType).assertEqual(0);
              expect(data[j].hostBundleName).assertContain('com.example.formtest');
              expect(data[j].bundleName).assertContain('com.example.formprovider');
              expect(data[j].moduleName).assertContain('entry');
              expect(data[j].abilityName).assertContain('FormAbility');
              expect(data[j].formName).assertContain('form');
              await formHost.deleteForm(firstFormId);
              await formHost.deleteForm(secondFormId);
              done();
            })
          } catch (err) {
            console.log('====>Acts_GetRunningFormInfos_0200 second getInfo err: ' + JSON.stringify(err));
            expect().assertFail();
          }
        }, false, 'com.example.formtest');
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfos_0200 first getInfo err: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })

    /**
     * @tc.number: Acts_GetRunningFormInfos_0400
     * @tc.name: Test getRunningFormInfos.
     * @tc.desc: After applying the upgrade, you can get the form information by using getRunningFormInfos.
     */
    it('Acts_GetRunningFormInfos_0400', 0, async function (done) {
      await abilityDelegator.startAbility({
        bundleName: 'com.example.getunusedforminforely',
        abilityName: 'EntryAbility'
      }).catch((err) => {
        console.log('====>Acts_GetRunningFormInfos_0400 err.code: ' + err.code);
        expect(err.code).assertEqual(0);
      });
      let formId = '0';
      await sleep(1000);
      try {
        await formObserver.getRunningFormInfos().then(async (data) => {
          console.log('====>Acts_GetRunningFormInfos_0400 first getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          console.log('====>Acts_GetRunningFormInfos_0400 first data.size is ' + data.length);
          let i;
          for(i = 0; i < data.length; i++)
            if (data[i].hostBundleName === 'com.example.getunusedforminforely')
              break;
          formId = data[i].formId;
          expect(data[i].formUsageState).assertEqual(0);
          expect(data[i].visibilityType).assertEqual(0);
          expect(data[i].dimension).assertEqual(2);
          expect(data[i].hostBundleName).assertContain('com.example.getunusedforminforely');
          expect(data[i].bundleName).assertContain('com.example.formprovider');
          expect(data[i].moduleName).assertContain('entry');
          expect(data[i].abilityName).assertContain('FormAbility');
          expect(data[i].formName).assertContain('form');
          let cmd = 'bm install -rp data/ActsUnusedFormInfoRelyTwo.hap';
          await abilityDelegator.executeShellCommand(cmd).then(() => {
            console.log('====>Acts_GetRunningFormInfos_0400 executeShellCommand:');
          }).catch((err) => {
            expect(err.code).assertEqual(0);
          });
        })
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfos_0400 first getInfo err: ' + JSON.stringify(err));
        expect().assertFail();
      }

      await sleep(1000);
      try {
        formObserver.getRunningFormInfos(true).then(async (data) => {
          console.log('====>Acts_GetRunningFormInfos_0400 second getInfo data: ' + JSON.stringify(data));
          if (!data) {
            expect().assertFail();
          }
          console.log('====>Acts_GetRunningFormInfos_0400 second data.size is ' + data.length);
          let i;
          for(i = 0; i < data.length; i++)
            if (data[i].hostBundleName === 'com.example.getunusedforminforely')
              break;
          if (data[i].formId === formId) {
            expect(data[i].formUsageState).assertEqual(1);
            expect(data[i].visibilityType).assertEqual(0);
            expect(data[i].dimension).assertEqual(0);
            expect(data[i].hostBundleName).assertContain('com.example.getunusedforminforely');
            expect(data[i].bundleName).assertContain('com.example.formprovider');
            expect(data[i].moduleName).assertContain('entry');
            expect(data[i].abilityName).assertContain('FormAbility');
            expect(data[i].formName).assertContain('form');
          } else {
            expect().assertFail();
          }

          await abilityDelegator.startAbility({
            bundleName: 'com.example.getunusedforminforely',
            abilityName: 'EntryAbilityTwo',
            parameters: {
              firstFormId: formId
            }
          }).catch((err) => {
            console.log('====>Acts_GetRunningFormInfosByFilter_0400 err.code: ' + err.code);
            expect(err.code).assertEqual(0);
          });
          await sleep(1000);
          done();
        });
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfos_0400 second getInfo err: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
  })
}