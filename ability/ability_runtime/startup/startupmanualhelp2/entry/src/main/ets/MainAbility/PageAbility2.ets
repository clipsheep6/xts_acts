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
let startupSampleInit2:boolean = false;
let startupSampleInit3:boolean = false;
let startupDefaultConfig:boolean = false;
let onAbiltiyDestory:boolean = false;
let keepAlive:boolean = false;
let customConfig:boolean = true;

export default class PageAbility2 extends UIAbility {

  onCreate(want:Want){
    hilog.info(0x0000, 'StartupTest PageAbility2', '%{public}s', 'Ability onCreate');
    // Sample_002 -> Sample_003 -> Sample_001
    if (want.parameters && want.parameters.keepAlive) {
      console.info('StartupTest PageAbility2 keepAlive = true');
      keepAlive = true;
    }
    if (want.parameters && want.parameters.defaultConfig) {
      console.info('StartupTest PageAbility2 defaultConfig = true');
      customConfig = false;
    }

    uiContext = this.context;
    let subscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
      events: ['StartupSample_001', 'StartupSample_002', 'StartupSample_003', 'StartupTestDefaultConfig'],
    };
    commonEventManager.createSubscriber(subscribeInfo).then(data => {
      console.info('StartupTest PageAbility2 createSubscriber success');
      subscriber = data;
      commonEventManager.subscribe(subscriber, (err, data)=>{
        console.info('StartupTest PageAbility2 receive event, data = ' + JSON.stringify(data));
        let event = data.event;
        if (event === 'StartupSample_001') {
          startupSampleInit1 = true;
          //startOrder.push(['startupSampleInit1']);
          let msg:String = '';
          if (customConfig) {
            msg = '自定义config StartupSample_001加载完毕';
          } else {
            msg = 'StartupSample_001加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              'msg':msg
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility2 send msg');
          })
        }
        if (event === 'StartupSample_002') {
          startupSampleInit2 = true;
          //startOrder.push(['startupSampleInit2']);
          let msg:String = '';
          if (customConfig) {
            msg = '自定义config StartupSample_002加载完毕';
          } else {
            msg = 'StartupSample_002加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              'msg':msg
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility2 send msg');
          })
        }
        if (event === 'StartupSample_003') {
          startupSampleInit3 = true;
          //startOrder.push(['startupSampleInit3']);
          let msg:String = '';
          if (customConfig) {
            msg = '自定义config StartupSample_003加载完毕';
          } else {
            msg = 'StartupSample_003加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              'msg':msg
            }
          }, (err, data) => {
            console.info('StartupTest PageAbility2 send msg');
          })
        }
        if (event === 'StartupTestDefaultConfig') {
          startupDefaultConfig = true;
          let msg = '';
          if (customConfig) {
            msg = '自定义配置config 配置监听到测试框架加载完毕';
          } else {
            msg = '默认配置监听到测试框架加载完毕';
          }
          commonEventManager.publish('show_msg', {
            parameters:{
              'msg':msg
            }
          }, (err, data) => {
            console.info('StartupTest SingleStartAbility send msg');
          })
        }
        if (startupSampleInit1 && startupSampleInit2 && startupSampleInit3 && startupDefaultConfig) {
          console.info('StartupTest PageAbility2 terminateSelfWithResult , result = true');
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
      console.info('StartupTest PageAbility2 createSubscriber failed, error=' + JSON.stringify(err));
    })
  }

  onDestroy(){
    hilog.info(0x0000, 'StartupTest PageAbility2 ', '%{public}s', 'Ability onDestroy');
    onAbiltiyDestory = true;
    if (subscriber) {
      console.info('StartupTest PageAbility2 unsubscribe');
      commonEventManager.unsubscribe(subscriber);
    }
  }

  onWindowStageCreate(windowStage: window.WindowStage){
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'StartupTest PageAbility2 ', '%{public}s', 'Ability onWindowStageCreate');

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
    hilog.info(0x0000, 'StartupTest PageAbility2 ', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(){
    // Ability has brought to foreground
    // Sample_002 -> Sample_003 -> Sample_001
    hilog.info(0x0000, 'StartupTest PageAbility2 ', '%{public}s', 'Ability onForeground');
    console.log('StartupTest PageAbility2 startupManager run');
    setTimeout(()=>{
      console.log('StartupTest PageAbility2 startupManager run with custom Config');
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
      startupManager.run(['Sample_002'], config);
    }, 1500)
  }

  onBackground(){
    // Ability has back to background
    hilog.info(0x0000, 'StartupTest PageAbility2 ', '%{public}s', 'Ability onBackground');
  }
}
