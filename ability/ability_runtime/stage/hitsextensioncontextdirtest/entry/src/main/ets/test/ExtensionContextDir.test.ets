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

import { describe, beforeAll, it, expect } from '@ohos/hypium'
import contextConstant from '@ohos.app.ability.contextConstant';
import common from '@ohos.app.ability.common';
import Want from '@ohos.app.ability.Want';
import hilog from '@ohos.hilog';

let areaMode: string;
let context: common.UIAbilityContext;
let serviceExtensionContext: common.ServiceExtensionContext;

let sleep = async (delay: number): Promise<void> => {
  return new Promise((resolve, _) => {
    setTimeout(async () => {
      resolve();
    }, delay);
  });
};

function checkExtensionContextDir(serviceExtensionContext: common.ServiceExtensionContext): boolean {
  hilog.info(0x0000, 'testTag', '%{public}s', 'checkExtensionContextDir cacheDir: ' + serviceExtensionContext.cacheDir);
  expect(serviceExtensionContext.cacheDir).assertEqual("/data/storage/" + areaMode + "/base/haps/entry/cache");
  expect(serviceExtensionContext.tempDir).assertEqual("/data/storage/" + areaMode + "/base/haps/entry/temp");
  expect(serviceExtensionContext.filesDir).assertEqual("/data/storage/" + areaMode + "/base/haps/entry/files");
  expect(serviceExtensionContext.distributedFilesDir).assertEqual("/data/storage/" + areaMode + "/distributedfiles");
  expect(serviceExtensionContext.databaseDir).assertEqual("/data/storage/" + areaMode + "/database/entry");
  expect(serviceExtensionContext.preferencesDir)
    .assertEqual("/data/storage/" + areaMode + "/base/haps/entry/preferences");
  expect(serviceExtensionContext.bundleCodeDir).assertEqual("/data/storage/el1/bundle");
  return true;
}

export default function extensionContextDirTest() {
  describe('extensionContextDirTest', () => {
    /**
     * @tc.number     : SUB_Ability_AbilityRuntime_ExtensionContext_Dir_0100
     * @tc.name       : testExtensionContextDir0100
     * @tc.desc       : When area mode is EL3, check the path of the ServiceExtensionContext is correct.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_ExtensionContext_Dir_0100', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_ExtensionContext_Dir_0100';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      try {
        context = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
        let wantInfo: Want = {
          bundleName: 'com.acts.extensioncontextdirtest',
          abilityName: 'ServiceAbility',
        }
        context.startServiceExtensionAbility(wantInfo);
        await sleep(1000);
        serviceExtensionContext = AppStorage.get<common.ServiceExtensionContext>('myServiceExtensionContext') as common.ServiceExtensionContext;
        areaMode = "el3";
        serviceExtensionContext.area = contextConstant.AreaMode.EL3;
        let result = checkExtensionContextDir(serviceExtensionContext);
        expect(result).assertTrue();
        done();
      } catch (error) {
        hilog.info(0x0000, 'testTag', '%{public}s', TAG + 'checkExtensionContextDir error: ' + JSON.stringify(error));
        done();
      }
    })

    /**
     * @tc.number     : SUB_Ability_AbilityRuntime_ExtensionContext_Dir_0200
     * @tc.name       : testExtensionContextDir0200
     * @tc.desc       : When area mode is EL4, check the path of the ServiceExtensionContext is correct.
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('SUB_Ability_AbilityRuntime_ExtensionContext_Dir_0200', 0, async (done: Function) => {
      let TAG = 'SUB_Ability_AbilityRuntime_ExtensionContext_Dir_0200';
      hilog.info(0x0000, 'testTag', '%{public}s', TAG + ' --start');
      try {
        context = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
        let wantInfo: Want = {
          bundleName: 'com.acts.extensioncontextdirtest',
          abilityName: 'ServiceAbility',
        }
        context.startServiceExtensionAbility(wantInfo);
        await sleep(1000);
        serviceExtensionContext = AppStorage.get<common.ServiceExtensionContext>('myServiceExtensionContext') as common.ServiceExtensionContext;
        areaMode = "el4";
        serviceExtensionContext.area = contextConstant.AreaMode.EL4;
        let result = checkExtensionContextDir(serviceExtensionContext);
        expect(result).assertTrue();
        done();
      } catch (error) {
        hilog.info(0x0000, 'testTag', '%{public}s', TAG + 'checkExtensionContextDir error: ' + JSON.stringify(error));
        done();
      }
    })
  })
}

