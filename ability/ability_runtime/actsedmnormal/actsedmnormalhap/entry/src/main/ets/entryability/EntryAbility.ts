import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    let applicationContext = this.context.getApplicationContext();
    let autoStartupCallback = {
      onAutoStartupOn(data) {
        console.info('===> Listening onAutoStartupOn data: ' + JSON.stringify(data));
      },
      onAutoStartupOff(data) {
        console.info('===> Listening onAutoStartupOff data: ' + JSON.stringify(data));
      }
    }
    globalThis.Register = () => {
      try {
        applicationContext.on('abilityAutoStartup', autoStartupCallback)
      } catch (err) {
        console.info('====> autostartupmanager on callback err: ' + JSON.stringify(err));
      }
    }
    globalThis.unRegister = () => {
      try {
        applicationContext.off('abilityAutoStartup', autoStartupCallback)
      } catch (err) {
        console.info('====> autostartupmanager off callback err: ' + JSON.stringify(err));
      }
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
