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
import StartupConfig from '@ohos.app.appstartup.StartupConfig'
import StartupListener from '@ohos.app.appstartup.StartupListener'
import { BusinessError } from '@ohos.base';

let subscriber: commonEventManager.CommonEventSubscriber;
let uiContext:common.UIAbilityContext;
let startupSampleInit9:boolean = false;
let startupSampleInit10:boolean = false;
let startupSampleInit11:boolean = false;
let startupDefaultConfig:boolean = false;
let onAbiltiyDestory = false;
let keepAlive = false;
let customConfig = false;

export default class PageAbility4 extends UIAbility {
  // Sample_009 -> Sample_010 -> Sample_009
  //                          -> Sample_011
  onCreate(want:Want){
    hilog.info(0x0000, 'PageAbility4 StartupTest', '%{public}s', 'Ability onCreate');

    if (want.parameters && want.parameters.keepAlive) {
      console.info('PageAbility4 StartupTest PageAbility4 keepAlive = true');
      keepAlive = true;
    }
    if (want.parameters && want.parameters.customConfig) {
      console.info('StartupTest PageAbility4 customConfig = true');
      customConfig = true;
    }

    uiContext = this.context;
    let subscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
      events: ['StartupSample_009', 'StartupSample_010', 'StartupSample_011', 'StartupTestDefaultConfig'],
    };
    commonEventManager.createSubscriber(subscribeInfo).then(data => {
      console.info('StartupTest PageAbility4 createSubscriber success');
      subscriber = data;
      commonEventManager.subscribe(subscriber, (err, data)=>{
        console.info('StartupTest PageAbility4 receive event, data = ' + JSON.stringify(data));
        let event = data.event;
        if(event === 'StartupSample_009') {
          startupSampleInit9 = true;
          //startOrder.push(['startupSampleInit9']);
          let message:String;
          if(!customConfig) {
            message = '默认配置 StartupSample_009加载完毕';
          } else {
            message = '自定义配置 StartupSample_009加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility4 send msg');
          })
        }
        if(event === 'StartupSample_010') {
          startupSampleInit10 = true;
          //startOrder.push(['startupSampleInit10']);
          let message:String;
          if (!customConfig) {
            message = '默认配置 StartupSample_010加载完毕';
          } else {
            message = '自定义配置 StartupSample_010加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility4 send msg');
          })
        }
        if(event === 'StartupSample_011') {
          startupSampleInit11 = true;
          //startOrder.push(['startupSampleInit11']);
          let message:String;
          if (!customConfig) {
            message = '默认配置 StartupSample_011加载完毕';
          } else {
            message = '自定义配置 StartupSample_011加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility4 send msg');
          })
        }
        if(event === 'StartupTestDefaultConfig') {
          startupDefaultConfig = true;
          let message:String;
          if (!customConfig) {
            message = '默认配置 配置监听到测试框架加载完毕';
          } else {
            message = '自定义配置 配置监听到测试框架加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility4 send msg');
          })
        }
        if (!keepAlive) {
          let startResult = false;
          if(startupSampleInit9 && startupSampleInit10 && startupSampleInit11) {
            console.info('StartupTest PageAbility4 terminateSelfWithResult , result = true');
            startResult = true;
            setTimeout(()=>{
              uiContext.terminateSelfWithResult({
                resultCode: 0,
                want:{
                  parameters:{
                    'startResult': startResult,
                  }
                }
              })
            }, 2000)
          }
        }
      })
    }).catch((err: BusinessError) => {
      console.info('StartupTest PageAbility4 createSubscriber failed, error=' + JSON.stringify(err));
    })
  }

  onDestroy(){
    hilog.info(0x0000, 'StartupTest', '%{public}s', 'Ability onDestroy');
    onAbiltiyDestory = true;
    if (subscriber) {
      console.info('StartupTest PageAbility4 unsubscribe');
      commonEventManager.unsubscribe(subscriber);
    }
  }

  onWindowStageCreate(windowStage: window.WindowStage){
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'StartupTest PageAbility4 ', '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy(){
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'StartupTest PageAbility4 ', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(){
    // Ability has brought to foreground
    // Sample_009 -> Sample_010
    // Sample_011 -> Sample_010
    hilog.info(0x0000, 'StartupTest PageAbility4 ', '%{public}s', 'Ability onForeground');
    console.log('StartupTest startupManager run');
      console.log('StartupTest PageAbility4 startupManager run with custom Config');
      let onCompletedCallback = (error: BusinessError<void>) => {
        console.log('Custom StartupTest MyStartupConfigEntry callback, error=' + JSON.stringify(error));
        if (error) {
          hilog.info(0x0000, 'testTag', 'onCompletedCallback: %{public}d, message: %{public}s', error.code, error.message);
        } else {
          hilog.info(0x000, 'Custom MyStartupConfigEntry TAG ', ' onCompletedCallback: success');
        }
        setTimeout(()=>{
          commonEventManager.publish('StartupTestDefaultConfig', {
            parameters: {
              'error': error
            }
          }, (err, data) => {
            console.log('Custom StartupTest onCompletedCallback end, publish msg, err=' + JSON.stringify(err));
            console.log('Custom StartupTest onCompletedCallback end, publish msg, data=' + JSON.stringify(data));
          })
        }, 500)
      }
      let startupListener: StartupListener = {
        'onCompleted': onCompletedCallback
      }
      let config: StartupConfig = {
        'timeoutMs': 5000,
        'startupListener': startupListener
      }
      try {
        startupManager.run(['Sample_009', 'Sample_010', 'Sample_011'], config);
      }catch(error){
        console.log('StartupTest PageAbility4 startupManager run error: catch error = ' + JSON.stringify(error));
      }
  }

  onBackground(){
    // Ability has back to background
    hilog.info(0x0000, 'StartupTest PageAbility4 ', '%{public}s', 'Ability onBackground');
  }
}
