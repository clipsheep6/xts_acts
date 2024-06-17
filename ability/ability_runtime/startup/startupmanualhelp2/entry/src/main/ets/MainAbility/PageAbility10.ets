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

export default class PageAbility10 extends UIAbility {
  onCreate(want: Want){
    hilog.info(0x0000, 'StartupTest PageAbility10', '%{public}s', 'Ability onCreate');

    if (want.parameters && want.parameters.keepAlive) {
      console.info('StartupTest PageAbility10 keepAlive = true');
      keepAlive = true;
    }
    uiContext = this.context;
    apiResult = [];
  }

  onForeground(){
    hilog.info(0x0000, 'StartupTest PageAbility10', '%{public}s', 'Ability onForeground');
    startupManager.run(['Sample_019']).then(() => {
      this.pushMsg('Sample_019 加载完毕');
      setTimeout(()=>{
        this.optionApi(0);
      }, 1000)
    })
    if (!keepAlive) {
      timeOutNumber = setTimeout(()=>{
        if (!keepAlive) {
          console.info('apiResult     000000000000000000000000000');
          hilog.info(0x0000, 'StartupTest PageAbility10', '%{public}s', ' query api timeout');
          uiContext.terminateSelfWithResult({
            resultCode: 0,
            want:{
              parameters:{
                'apiResult': apiResult
              }
            }
          })
        }
      }, 20000)
     }
  }

  async optionApi(type: number){
    setTimeout(()=>{
      if (type == 0) {
        let result = startupManager.isStartupTaskInitialized('Sample_019');
        console.info('加载完毕后查询,StartupTest PageAbility10 isStartupTaskInitialized result = ' + result);
        this.pushMsg('加载完毕后查询,StartupTest PageAbility10 isStartupTaskInitialized result = ' + result);
        this.optionApi(1);
        apiResult.push(result);
      }
      if (type == 1) {
        let result = startupManager.getStartupTaskResult('Sample_019');
        console.info('加载完毕后查询,StartupTest PageAbility10 getStartupTaskResult result = ' + result);
        this.pushMsg('加载完毕后查询,StartupTest PageAbility10 getStartupTaskResult result = ' + result);
        if (result === 'Sample_019 init success') {
          apiResult.push(true);
        } else {
          apiResult.push(false);
        }
        this.optionApi(2);
      }
      if (type == 2) {
        startupManager.removeStartupTaskResult('Sample_019');
        console.info('加载完毕后remove,StartupTest PageAbility10 removeStartupTaskResult');
        this.pushMsg('加载完毕后remove,StartupTest PageAbility10 removeStartupTaskResult');
        apiResult.push(true);
        this.optionApi(3);
      }
      if (type == 3) {
        let result:Boolean = startupManager.isStartupTaskInitialized('Sample_019');
        console.info('remove后第一次查询,StartupTest PageAbility10 isStartupTaskInitialized result = ' + result);
        this.pushMsg('remove后第一次查询,StartupTest PageAbility10 isStartupTaskInitialized result = ' + result);
        if(result == true){
          apiResult.push(true);
        } else{
          apiResult.push(false);
        }
        this.optionApi(4);
      }
      if (type == 4) {
        try {
          let result = startupManager.getStartupTaskResult('Sample_019');
          console.info('remove后第一次查询,StartupTest PageAbility10 getStartupTaskResult result = ' + result);
          this.pushMsg('remove后第一次查询,StartupTest PageAbility10 getStartupTaskResult result = ' + result);
          apiResult.push(true);
        }catch(error){
          console.info('remove后第一次查询,StartupTest PageAbility10 getStartupTaskResult error = ' +
            JSON.stringify(error));
          this.pushMsg('remove后第一次查询,StartupTest PageAbility10 getStartupTaskResult error = ' +
            JSON.stringify(error));
          apiResult.push(false);
        }
        this.optionApi(5);
      }
      if (type == 5) {
        try {
          startupManager.removeStartupTaskResult('Sample_019');
          apiResult.push(true);
        }catch(error){
          console.info('第二次remove,StartupTest PageAbility10 removeStartupTaskResult ');
          this.pushMsg('第二次remove,StartupTest PageAbility10 removeStartupTaskResult');
          apiResult.push(false);
          this.optionApi(6);
        }
      }
      if (type == 6) {
        let result:Boolean = startupManager.isStartupTaskInitialized('Sample_019');
        console.info('第二次remove后查询,StartupTest PageAbility10 isStartupTaskInitialized result = ' + result);
        this.pushMsg('第二次remove后查询,StartupTest PageAbility10 isStartupTaskInitialized result = ' + result);
        if(result == true){
          apiResult.push(true);
        } else{
          apiResult.push(false);
        }
        this.optionApi(7);
      }
      if (type == 7) {
        try {
          let result = startupManager.getStartupTaskResult('Sample_019');
          console.info('第二次remove后查询,StartupTest PageAbility10 getStartupTaskResult result = ' + result);
          this.pushMsg('第二次remove后查询,StartupTest PageAbility10 getStartupTaskResult result = ' + result);
          apiResult.push(true);
        }catch(error){
          console.info('第二次remove后查询,StartupTest PageAbility10 getStartupTaskResult error = ' + 
            JSON.stringify(error));
          this.pushMsg('第二次remove后查询,StartupTest PageAbility10 getStartupTaskResult error = ' + 
            JSON.stringify(error));
          apiResult.push(false);
        }
        console.info('StartupTest PageAbility10 apiResult = ' + JSON.stringify(apiResult));
        this.pushMsg('StartupTest PageAbility10 apiResult = ' + JSON.stringify(apiResult));
        this.optionApi(8);
      }
      if (type == 8) {
        try {
          startupManager.removeStartupTaskResult('Sample_019');
          apiResult.push(true);
        }catch(error){
          console.info('第三次remove,StartupTest PageAbility10 removeStartupTaskResult ');
          this.pushMsg('第三次remove,StartupTest PageAbility10 removeStartupTaskResult');
          apiResult.push(false);
        }
        this.optionApi(9);
      }
      if (type == 9) {
        try {
          startupManager.removeStartupTaskResult('Sample_019');
          apiResult.push(true);
        }catch(error){
          console.info('第四次remove,StartupTest PageAbility10 removeStartupTaskResult ');
          this.pushMsg('第四次remove,StartupTest PageAbility10 removeStartupTaskResult');
          apiResult.push(false);
        }
        console.info('StartupTest PageAbility10 apiResult = ' + JSON.stringify(apiResult));
        this.pushMsg('StartupTest PageAbility10 apiResult = ' + JSON.stringify(apiResult));
        this.optionApi(10);
      }
      if (type == 10) {
        try {
          startupManager.removeAllStartupTaskResults();
          apiResult.push(true);
        }catch(error){
          console.info('removeAllStartupTaskResults,StartupTest PageAbility10 removeStartupTaskResult');
          this.pushMsg('removeAllStartupTaskResults,StartupTest PageAbility10 removeStartupTaskResult');
          apiResult.push(false);
        }
        console.info('StartupTest PageAbility10 apiResult = ' + JSON.stringify(apiResult));
        this.pushMsg('StartupTest PageAbility10 apiResult = ' + JSON.stringify(apiResult));
        this.optionApi(11);
      }
      if(type == 11){
        try {
          startupManager.run(['Sample_019']).then(() => {
            this.pushMsg('Sample_019 加载完毕');
            let resultGet = startupManager.getStartupTaskResult('Sample_019');
            console.info('第一次查询,StartupTest PageAbility10 getStartupTaskResult resultGet = ' + resultGet);
            this.pushMsg('第一次查询,StartupTest PageAbility10 getStartupTaskResult resultGet = ' + resultGet);
            let resultInit = startupManager.isStartupTaskInitialized('Sample_019');
            console.info('加载完毕后查询,StartupTest PageAbility10 isStartupTaskInitialized resultInit = ' + resultInit);
            this.pushMsg('加载完毕后查询,StartupTest PageAbility10 isStartupTaskInitialized resultInit = ' + resultInit);
            startupManager.removeStartupTaskResult('Sample_019');
            apiResult.push(true);
          })
        } catch (error) {
          console.info('for,StartupTest PageAbility10 for');
          this.pushMsg('for,StartupTest PageAbility10 for');
          apiResult.push(false);
        }
        console.info('StartupTest PageAbility10 apiResult = ' + JSON.stringify(apiResult));
        this.pushMsg('StartupTest PageAbility10 apiResult = ' + JSON.stringify(apiResult));
        if (!keepAlive) {
          console.info('apiResult     1111111111111111111111111111111');
          clearTimeout(timeOutNumber);
          uiContext.terminateSelfWithResult({
            resultCode: 0,
            want:{
              parameters:{
                'apiResult': apiResult
              }
            }
          })
        }
      }
    }, 1000)
  }

  async pushMsg(msg: string){
    commonEventManager.publish('show_msg', {
      parameters: {
        'msg': msg
      }
    }, () => {
      console.info('StartupTest PageAbility10 send msg');
    })
  }

  onDestroy(){
    hilog.info(0x0000, 'StartupTest', '%{public}s', 'Ability onDestroy');
    if (subscriber) {
      console.info('StartupTest PageAbility10 unsubscribe');
      commonEventManager.unsubscribe(subscriber);
    }
  }

  onWindowStageCreate(windowStage: window.WindowStage){
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'StartupTest PageAbility10', '%{public}s', 'Ability onWindowStageCreate');

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
    hilog.info(0x0000, 'StartupTest PageAbility10', '%{public}s', 'Ability onBackground');
  }
}
