import UIAbility from '@ohos.app.ability.UIAbility';
import window from '@ohos.window';

export default class MainAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.log('testTag', '%{public}s', 'Ability onCreate');
    // console.log('MainAbility','55555')
    // globalThis.context_EntryMainAbility = this.context
  }

  onDestroy() {
    console.log('testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('testTag', '%{public}s', 'Ability onWindowStageCreate');


    windowStage.loadContent('pages/Main', (err, data) => {
      if (err.code) {
        console.log('testTag', '%{public}s', 'Ability onWindowStageCreate');
        return;
      }
      console.log('testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');

    });

    try {
      let windowMainAbility = windowStage.getMainWindowSync();
      AppStorage.setOrCreate('windowMainAbility',windowMainAbility)
    } catch (exception) {
      console.error('Failed to obtain the main windowMainAbility. Cause: ' + JSON.stringify(exception));
    }
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log('testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    // Ability has back to background
    console.log('testTag', '%{public}s', 'Ability onBackground');
  }
}
