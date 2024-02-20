import UIAbility from '@ohos.app.ability.UIAbility';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import hilog from '@ohos.hilog';
import { Hypium } from '@ohos/hypium';
import window from '@ohos.window';
import commonEvent from '@ohos.commonEvent'
import CommonEventManager from '@ohos.commonEventManager';
import Want from '@ohos.app.ability.Want';
import common from '@ohos.app.ability.common';

const TAG = "launchRule:AssistantTag"

export default class AssistantAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.log(TAG, 'AssistantAbility onCreate');
    console.log(TAG, 'want param:' + JSON.stringify(want) ?? '');
    console.log(TAG, 'launchParam:' + JSON.stringify(launchParam) ?? '');
    globalThis.context = this.context;
    let subscriber;
    let subscribeInfo = {
      events: ["event_100001"]
    };
    CommonEventManager.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
      console.log(TAG, "createSubscriber");
      subscriber = commonEventSubscriber;
      CommonEventManager.subscribe(subscriber, subscribeCallback);
    }).catch((err) => {
      console.error(TAG, ` createSubscriber failed, code is ${err.code}, message is ${err.message}`);
    });

    function subscribeCallback(err, data) {
      if (err) {
        console.error(TAG, `subscribe failed, code is ${err.code}, message is ${err.message}`);
      } else {
        let want: Want = {
          bundleName: 'com.example.launchrule',
          abilityName: 'AssistantAbility'
        };
        let resultCode = 100;
        let abilityResult: common.AbilityResult = {
          want,
          resultCode
        };
        //2.Assistant Ability registered "terminateAssistantAbility" event, call terminateAbilityWithResult received after the event
        globalThis.context.terminateSelfWithResult(abilityResult, (err) => {
          CommonEventManager.unsubscribe(subscriber, UnSubscribeCallback);
          console.log(TAG, 'terminateSelfWithResult succeed');
        });
      }
    }

    function UnSubscribeCallback() {
      console.log(TAG, "====>UnSubscribe CallBack====>");
    }
  }

  onDestroy() {
    console.log(TAG, 'AssistantAbility onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    console.log(TAG, 'AssistantAbility onWindowStageCreate');
    windowStage.loadContent('AssistantAbility/pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, TAG, 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, TAG, 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy() {
    console.log(TAG, 'AssistantAbility onWindowStageDestroy');
  }

  onForeground() {
    console.log(TAG, 'AssistantAbility onForeground');
  }

  onBackground() {
    console.log(TAG, 'AssistantAbility onBackground');
  }
}