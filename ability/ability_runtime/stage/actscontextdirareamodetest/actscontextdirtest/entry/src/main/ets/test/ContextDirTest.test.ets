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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import contextConstant from '@ohos.app.ability.contextConstant';
import common from '@ohos.app.ability.common';

let abilityDelegator: abilityDelegatorRegistry.AbilityDelegator;
let areaMode: string;

let sleep = async (delay: number): Promise<void> => {
  return new Promise((resolve, _) => {
    setTimeout(async () => {
      resolve();
    }, delay);
  });
};

function checkContextDir(context: common.Context, moduleName: string): boolean {
  hilog.info(0x0000, 'testTag', '%{public}s', ' checkContextDir' + JSON.stringify(context.cacheDir));
  expect(context.cacheDir).assertEqual("/data/storage/" + areaMode + "/base/haps/" + moduleName + "/cache");
  expect(context.tempDir).assertEqual("/data/storage/" + areaMode + "/base/haps/" + moduleName + "/temp");
  expect(context.filesDir).assertEqual("/data/storage/" + areaMode + "/base/haps/" + moduleName + "/files");
  expect(context.distributedFilesDir).assertEqual("/data/storage/" + areaMode + "/distributedfiles");
  expect(context.databaseDir).assertEqual("/data/storage/" + areaMode + "/database/" + moduleName);
  expect(context.preferencesDir)
    .assertEqual("/data/storage/" + areaMode + "/base/haps/" + moduleName + "/preferences");
  expect(context.bundleCodeDir).assertEqual("/data/storage/el1/bundle");
  return true;
}

function checkApplicationContextDir(applicationContext: common.ApplicationContext): boolean {
  hilog.info(0x0000, 'testTag', '%{public}s', ' checkApplicationContextDir' + JSON.stringify(applicationContext.cacheDir));
  expect(applicationContext.cacheDir).assertEqual("/data/storage/" + areaMode + "/base/cache");
  expect(applicationContext.tempDir).assertEqual("/data/storage/" + areaMode + "/base/temp");
  expect(applicationContext.filesDir).assertEqual("/data/storage/" + areaMode + "/base/files");
  expect(applicationContext.distributedFilesDir).assertEqual("/data/storage/" + areaMode + "/distributedfiles");
  expect(applicationContext.databaseDir).assertEqual("/data/storage/" + areaMode + "/database");
  expect(applicationContext.preferencesDir).assertEqual("/data/storage/" + areaMode + "/base/preferences");
  expect(applicationContext.bundleCodeDir).assertEqual("/data/storage/el1/bundle");
  return true;
}

export default function contextDirTest() {
  describe('contextDirTest', () => {
    beforeAll(async () => {
      let TAG = 'SUB_Ability_AbilityRuntime_Context_Dir_Test';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
    })

    beforeEach(async () =>{
      await abilityDelegator.startAbility({
        bundleName: 'com.example.contextdirtest',
        abilityName: 'TestAbility',
      })
      await sleep(300);
    })
    /**
     * @tc.number     : SUB_Ability_AbilityRuntime_AbilityContext_Dir_0100
     * @tc.name       : testAbilityContextDir0100
     * @tc.desc       : When area mode is EL3, check the path of the AbilityContext under the same application and module.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_AbilityContext_Dir_0100', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_AbilityContext_Dir_0100';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await abilityDelegator.getCurrentTopAbility().then((ability) => {
        try {
          let context = ability.context;
          context.area = contextConstant.AreaMode.EL3;
          areaMode = "el3";
          let result = checkContextDir(context, 'entry');
          expect(result).assertTrue();
          done();
        } catch (e) {
          hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
          done();
        }
      })
    })

    /**
     * @tc.number     : SUB_Ability_AbilityRuntime_AbilityContext_Dir_0200
     * @tc.name       : testAbilityContextDir0200
     * @tc.desc       : When area mode is EL4, check the path of the AbilityContext under the same application and module.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_AbilityContext_Dir_0200', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_AbilityContext_Dir_0200';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await abilityDelegator.getCurrentTopAbility().then((ability) => {
        try {
          let context = ability.context;
          context.area = contextConstant.AreaMode.EL4;
          areaMode = "el4";
          let result = checkContextDir(context, 'entry');
          expect(result).assertTrue();
          done();
        } catch (e) {
          hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
          done();
        }
      })
    })

    /**
     * @tc.number     : SUB_Ability_AbilityRuntime_AbilityContext_Dir_0300
     * @tc.name       : testAbilityContextDir0300
     * @tc.desc       : When area mode is EL3, check the path of the AbilityContext under different modules of the same application.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_AbilityContext_Dir_0300', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_AbilityContext_Dir_0300';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await abilityDelegator.startAbility({
        bundleName: 'com.example.contextdirtest',
        moduleName: 'application',
        abilityName: 'ApplicationAbility',
      })
      setTimeout(async () => {
        await abilityDelegator.getCurrentTopAbility().then((ability) => {
          try {
            let context = ability.context;
            expect(context.currentHapModuleInfo.name).assertEqual('application');
            context.area = contextConstant.AreaMode.EL3;
            areaMode = "el3";
            checkContextDir(context, 'application');
            done();
          } catch (e) {
            hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
            done();
          }
        })
      }, 300)
    })

     /**
     * @tc.number     : SUB_Ability_AbilityRuntime_AbilityContext_Dir_0400
     * @tc.name       : testAbilityContextDir0400
     * @tc.desc       : When area mode is EL4, check the path of the AbilityContext under different modules of the same application.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_AbilityContext_Dir_0400', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_AbilityContext_Dir_0400';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await abilityDelegator.startAbility({
        bundleName: 'com.example.contextdirtest',
        moduleName: 'application',
        abilityName: 'ApplicationAbility',
      })
      setTimeout(async () => {
        await abilityDelegator.getCurrentTopAbility().then((ability) => {
          try {
            let context = ability.context;
            expect(context.currentHapModuleInfo.name).assertEqual('application');
            context.area = contextConstant.AreaMode.EL4;
            areaMode = "el4";
            checkContextDir(context, 'application');
            done();
          } catch (e) {
            hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
            done();
          }
        })
      }, 300)
    })

     /**
     * @tc.number     : SUB_Ability_AbilityRuntime_ModuleContext_Dir_0500
     * @tc.name       : testModuleContextDir0500
     * @tc.desc       : When area mode is EL3, check the path of the ModuleContext under different modules of the same application.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_ModuleContext_Dir_0500', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_ModuleContext_Dir_0500';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await abilityDelegator.startAbility({
        bundleName: 'com.example.contextdirtest',
        moduleName: 'application',
        abilityName: 'ApplicationAbility',
      })
      setTimeout(async () => {
        await abilityDelegator.getCurrentTopAbility().then((ability) => {
          try {
            let context = ability.context;
            expect(context.currentHapModuleInfo.name).assertEqual('application');
            context.area = contextConstant.AreaMode.EL3;
            areaMode = "el3";
            checkContextDir(context, 'application');
            done();
          } catch (e) {
            hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
            done();
          }
        })
      }, 300)
    })

     /**
     * @tc.number     : SUB_Ability_AbilityRuntime_ModuleContext_Dir_0600
     * @tc.name       : testModuleContextDir0600
     * @tc.desc       : When area mode is EL4, check the path of the ModuleContext under different modules of the same application.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_ModuleContext_Dir_0600', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_ModuleContext_Dir_0600';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await abilityDelegator.startAbility({
        bundleName: 'com.example.contextdirtest',
        moduleName: 'application',
        abilityName: 'ApplicationAbility',
      })
      setTimeout(async () => {
        await abilityDelegator.getCurrentTopAbility().then((ability) => {
          try {
            let context = ability.context;
            expect(context.currentHapModuleInfo.name).assertEqual('application');
            context.area = contextConstant.AreaMode.EL4;
            areaMode = "el4";
            checkContextDir(context, 'application');
            done();
          } catch (e) {
            hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
            done();
          }
        })
      }, 300)
    })

     /**
     * @tc.number     : SUB_Ability_AbilityRuntime_ApplicationContext_Dir_0700
     * @tc.name       : testApplicationContextDir0700
     * @tc.desc       : When area mode is EL3, check the path of the ApplicationContext under different application.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_ApplicationContext_Dir_0700', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_ApplicationContext_Dir_0700';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await abilityDelegator.getCurrentTopAbility().then(async (ability) => {
        let abilityContext = ability.context;
        await abilityDelegator.startAbility({
          bundleName: 'com.example.contextdirnormaltest',
          abilityName: 'EntryAbility',
        })
        await sleep(300);
        try {
          let bundleName = 'com.example.contextdirnormaltest';
          let otherAppContext = abilityContext.createBundleContext(bundleName);
          otherAppContext.getApplicationContext().area = contextConstant.AreaMode.EL3;
          areaMode = "el3";
          let result = checkApplicationContextDir(otherAppContext.getApplicationContext());
          expect(result).assertTrue();
          done();
        } catch (e) {
          hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
          done();
        }
      })
    })

     /**
     * @tc.number     : SUB_Ability_AbilityRuntime_ApplicationContext_Dir_0800
     * @tc.name       : testApplicationContextDir0800
     * @tc.desc       : When area mode is EL4, check the path of the ApplicationContext under different application.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_ApplicationContext_Dir_0800', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_ApplicationContext_Dir_0800';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await abilityDelegator.getCurrentTopAbility().then(async (ability) => {
        let abilityContext = ability.context;
        await abilityDelegator.startAbility({
          bundleName: 'com.example.contextdirnormaltest',
          abilityName: 'EntryAbility',
        })
        await sleep(300);
        try {
          let bundleName = 'com.example.contextdirnormaltest';
          let otherAppContext = abilityContext.createBundleContext(bundleName);
          otherAppContext.getApplicationContext().area = contextConstant.AreaMode.EL4;
          areaMode = "el4";
          let result = checkApplicationContextDir(otherAppContext.getApplicationContext());
          expect(result).assertTrue();
          done();
        } catch (e) {
          hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
          done();
        }
      })
    })

     /**
     * @tc.number     : SUB_Ability_AbilityRuntime_AbilityStageContext_Dir_0900
     * @tc.name       : testAbilityStageContextDir0900
     * @tc.desc       : When area mode is EL3, check the path of the AbilityStageContext under the same application and module.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_AbilityStageContext_Dir_0900', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_AbilityStageContext_Dir_0900';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await sleep(300);
      let abilityStageContext = AppStorage.get<common.AbilityStageContext>('myAbilityStageContext') as common.AbilityStageContext;
      console.log('testTag stageContext ', JSON.stringify(abilityStageContext.cacheDir))
      try {
        abilityStageContext.area = contextConstant.AreaMode.EL3;
        areaMode = "el3";
        let result = checkContextDir(abilityStageContext, 'entry');
        expect(result).assertTrue();
        done();
      } catch (e) {
        hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
        done();
      }
    })

     /**
     * @tc.number     : SUB_Ability_AbilityRuntime_AbilityStageContext_Dir_1000
     * @tc.name       : testAbilityStageContextDir1000
     * @tc.desc       : When area mode is EL4, check the path of the AbilityStageContext under the same application and module.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_AbilityStageContext_Dir_1000', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_AbilityStageContext_Dir_1000';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      await sleep(300);
      let abilityStageContext = AppStorage.get<common.AbilityStageContext>('myAbilityStageContext') as common.AbilityStageContext;
      console.log('testTag stageContext ', JSON.stringify(abilityStageContext.cacheDir))
      try {
        abilityStageContext.area = contextConstant.AreaMode.EL4;
        areaMode = "el4";
        let result = checkContextDir(abilityStageContext, 'entry');
        expect(result).assertTrue();
        done();
      } catch (e) {
        hilog.info(0x0000, 'testTag', '%{public}s', TAG + " error: " + JSON.stringify(e));
        done();
      }
    })
  })
}