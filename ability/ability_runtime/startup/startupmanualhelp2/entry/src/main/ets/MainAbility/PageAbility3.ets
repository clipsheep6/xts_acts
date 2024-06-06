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
let startupSampleInit1:boolean = false;
let startupSampleInit4:boolean = false;
let startupSampleInit5:boolean = false;
let startupSampleInit6:boolean = false;
let startupSampleInit7:boolean = false;
let startupSampleInit8:boolean = false;
let startupDefaultConfig:boolean = false;
let onAbiltiyDestory = false;
let keepAlive = false;
let customConfig = false;

export default class PageAbility3 extends UIAbility {

  onCreate(want:Want){
    hilog.info(0x0000, 'StartupTest PageAbility3', '%{public}s', 'Ability onCreate');

    if (want.parameters && want.parameters.keepAlive) {
      console.info('StartupTest PageAbility3 keepAlive = true');
      keepAlive = true;
    }
    if (want.parameters && want.parameters.customConfig) {
      console.info('StartupTest PageAbility3 customConfig = true');
      customConfig = true;
    }

    uiContext = this.context;
    let subscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
      events: ['StartupSample_001', 'StartupSample_004', 'StartupSample_005', 'StartupSample_006',
        'StartupSample_007', 'StartupSample_008', 'StartupTestDefaultConfig'],
    };
    commonEventManager.createSubscriber(subscribeInfo).then(data => {
      console.info('StartupTest PageAbility3 createSubscriber success');
      subscriber = data;
      commonEventManager.subscribe(subscriber, (err, data)=>{
        console.info('StartupTest PageAbility3 receive event, data = ' + JSON.stringify(data));
        let event = data.event;
        if (event === 'StartupSample_001') {
          startupSampleInit1 = true;
          //startOrder.push(['startupSampleInit1']);
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:'StartupSample_001加载完毕'
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility3 send msg');
          })
        }
        if (event === 'StartupSample_004') {
          startupSampleInit4 = true;
          //startOrder.push(['startupSampleInit4']);
          let message:String;
          if (!customConfig) {
            message = '默认配置 StartupSample_004加载完毕';
          } else {
            message = '自定义配置 StartupSample_004加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility3 send msg');
          })
        }
        if (event === 'StartupSample_005') {
          startupSampleInit5 = true;
          //startOrder.push(['startupSampleInit5']);
          let message:String;
          if (!customConfig) {
            message = '默认配置 StartupSample_005加载完毕';
          } else {
            message = '自定义配置 StartupSample_005加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility3 send msg');
          })
        }
        if (event === 'StartupSample_006') {
          startupSampleInit6 = true;
          //startOrder.push(['startupSampleInit6']);
          let message:String;
          if (!customConfig) {
            message = '默认配置 StartupSample_006加载完毕';
          } else {
            message = '自定义配置 StartupSample_006加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility3 send msg');
          })
        }
        if (event === 'StartupSample_007') {
          startupSampleInit7 = true;
          //startOrder.push(['startupSampleInit7']);
          let message:String;
          if (!customConfig) {
            message = '默认配置 StartupSample_007加载完毕';
          } else {
            message = '自定义配置 StartupSample_007加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility3 send msg');
          })
        }
        if (event === 'StartupSample_008') {
          startupSampleInit8 = true;
          //startOrder.push(['startupSampleInit8']);
          let message:String;
          if (!customConfig) {
            message = '默认配置 StartupSample_008加载完毕';
          } else {
            message = '自定义配置 StartupSample_008加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility3 send msg');
          })
        }
        if (event === 'StartupTestDefaultConfig') {
          startupDefaultConfig = true;
          let message:String;
          if (!customConfig) {
            message = '默认配置 监听到测试框架加载完毕';
          } else {
            message = '自定义配置 监听到测试框架加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              msg:message
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility3 send msg');
          })
        }
        if (startupSampleInit1 &&
            startupSampleInit4 &&
            startupSampleInit5 &&
            startupSampleInit6 &&
            startupSampleInit7 &&
            startupSampleInit8 &&
            startupDefaultConfig) {
          console.info('StartupTest PageAbility3 terminateSelfWithResult , result = true');
          if (!keepAlive) {
            setTimeout(()=>{
              uiContext.terminateSelfWithResult({
                resultCode: 0,
                want:{
                  parameters:{
                    'startResult': true,
                  }
                }
              })
            }, 2000)
          }
        }
      })
    }).catch((err: BusinessError) => {
      console.info('StartupTest PageAbility3 createSubscriber failed, error=' + JSON.stringify(err));
    })
  }

  onDestroy(){
    hilog.info(0x0000, 'StartupTest PageAbility3 ', '%{public}s', 'Ability onDestroy');
    onAbiltiyDestory = true;
    if (subscriber) {
      console.info('StartupTest PageAbility3 unsubscribe');
      commonEventManager.unsubscribe(subscriber);
    }
  }

  onWindowStageCreate(windowStage: window.WindowStage){
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'StartupTest PageAbility3 ', '%{public}s', 'Ability onWindowStageCreate');

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
    hilog.info(0x0000, 'StartupTest PageAbility3 ', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(){
    // Ability has brought to foreground
    // Sample_004 -> Sample_005 -> Sample_006
    //            -> Sample_007 -> Sample_008
    //                          -> Sample_001
    hilog.info(0x0000, 'StartupTest PageAbility3 ', '%{public}s', 'Ability onForeground');
    console.log('StartupTest startupManager run')
    setTimeout(()=>{
        console.log('StartupTest PageAbility3 startupManager run with custom Config');
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
        startupManager.run(['Sample_004'], config);
    }, 1500)
  }

  onBackground(){
    // Ability has back to background
    hilog.info(0x0000, 'StartupTest PageAbility3 ', '%{public}s', 'Ability onBackground');
  }
}
