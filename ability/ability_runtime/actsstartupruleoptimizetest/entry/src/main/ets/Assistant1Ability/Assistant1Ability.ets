import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';

const TAG = "launchRule:Assistant1Ability"

export default class Assistant1Ability extends UIAbility {
  onCreate(want, launchParam) {
    console.log(TAG, 'AssistantAbility onCreate');
    console.log(TAG, 'want param:' + JSON.stringify(want) ?? '');
    console.log(TAG, 'launchParam:' + JSON.stringify(launchParam) ?? '');
  }

  onDestroy() {
    console.log(TAG, 'AssistantAbility onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    console.log(TAG, 'AssistantAbility onWindowStageCreate');
    windowStage.loadContent('Assistant1Ability/pages/Index', (err, data) => {
      if (err.code) {
        console.log(TAG, JSON.stringify(err) ?? '');
        return;
      }
      console.log(TAG, JSON.stringify(data) ?? '');
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