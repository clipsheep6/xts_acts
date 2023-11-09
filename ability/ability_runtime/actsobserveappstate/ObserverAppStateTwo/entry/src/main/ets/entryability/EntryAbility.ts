import appManager from '@ohos.app.ability.appManager';
import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import type window from '@ohos.window';
import commonEventManager from '@ohos.commonEventManager';

let TAG = 'Observe Error';
let applicationState = -1;
let bundlename = '';
let commonEventData = {
  parameters: {
    applicationState: applicationState,
    bundlename: bundlename
  }
}
let appForegroundStateObserver = {
  onAppStateChanged(appStateData) {
    console.info('onAppStateChanged: ' + JSON.stringify(appStateData.bundleName));
    console.info('onAppStateChanged: ' + JSON.stringify(appStateData.state));
  }
}

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    try {
      appManager.on('appForegroundState', appForegroundStateObserver);
    } catch (error) {
      console.error(TAG, 'on error' + JSON.stringify(error));
      commonEventData.parameters.applicationState = error.code;
      commonEventManager.publish('stateEvent', commonEventData, (err) => {
        console.info('publish error' + JSON.stringify(err));
      })
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
    try {
      appManager.on('appForegroundState', appForegroundStateObserver);
    } catch (error) {
      console.error(TAG, 'on error' + JSON.stringify(error));
    }
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
