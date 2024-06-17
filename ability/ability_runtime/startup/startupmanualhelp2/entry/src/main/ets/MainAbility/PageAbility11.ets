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

import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import startupManager from '@ohos.app.appstartup.startupManager'
import commonEventManager from '@ohos.commonEventManager';
import common from '@ohos.app.ability.common';
import Want from '@ohos.app.ability.Want';

let subscriber: commonEventManager.CommonEventSubscriber;
let uiContext: common.UIAbilityContext;
let keepAlive = false;
let apiResult:boolean[];
let timeOutNumber = -1;

export default class PageAbility11 extends UIAbility {
  onCreate(want: Want){
    hilog.info(0x0000, 'StartupTest PageAbility11', '%{public}s', 'Ability onCreate');

    if (want.parameters && want.parameters.keepAlive) {
      console.info('StartupTest PageAbility11 keepAlive = true');
      keepAlive = true;
    }
    uiContext = this.context;
    apiResult = [];
  }

  async onForeground(){
    hilog.info(0x0000, 'StartupTest PageAbility11', '%{public}s', 'Ability onForeground');
    let result:Boolean = false;
    try {
      await startupManager.run(['Sample_019']).then(() => {
        this.pushMsg('Sample_019 加载完毕');
        let resultGet = startupManager.getStartupTaskResult('Sample_019');
        console.info('第一次查询,StartupTest PageAbility11 getStartupTaskResult resultGet = ' + resultGet);
        this.pushMsg('第一次查询,StartupTest PageAbility11 getStartupTaskResult resultGet = ' + resultGet);
        let resultInit = startupManager.isStartupTaskInitialized('Sample_019');
        console.info('加载完毕后查询,StartupTest PageAbility11 isStartupTaskInitialized resultInit = ' + resultInit);
        this.pushMsg('加载完毕后查询,StartupTest PageAbility11 isStartupTaskInitialized resultInit = ' + resultInit);
        startupManager.removeStartupTaskResult('Sample_019');
        result = true;
      })
    } catch (error) {
      console.info('for,StartupTest PageAbility11 for');
      this.pushMsg('for,StartupTest PageAbility11 for');
    }
    if (!keepAlive) {
      clearTimeout(timeOutNumber);
      uiContext.terminateSelfWithResult({
        resultCode: 0,
        want:{
          parameters:{
            'result': result
          }
        }
      })
    }
  }

  async pushMsg(msg: string){
    commonEventManager.publish('show_msg', {
      parameters: {
        'msg': msg
      }
    }, () => {
      console.info('StartupTest PageAbility11 send msg');
    })
  }

  onDestroy(){
    hilog.info(0x0000, 'StartupTest', '%{public}s', 'Ability onDestroy');
    if (subscriber) {
      console.info('StartupTest PageAbility11 unsubscribe');
      commonEventManager.unsubscribe(subscriber);
    }
  }

  onWindowStageCreate(windowStage: window.WindowStage){
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'StartupTest PageAbility11', '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onBackground(){
    // Ability has back to background
    hilog.info(0x0000, 'StartupTest PageAbility11', '%{public}s', 'Ability onBackground');
  }
}
