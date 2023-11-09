import appManager from '@ohos.app.ability.appManager';
import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import commonEventManager from '@ohos.commonEventManager';

let  TAG = 'ObserverAppState04 publish '
let applicationState = -1
let bundlename = ''
let commonEventData = {
  parameters: {
    applicationState:applicationState,
    bundlename:bundlename
  }
}
let appForegroundStateObserver = {
  onAppStateChanged(appStateData) {
    console.info("onAppStateChanged: " + JSON.stringify(appStateData));
    if (appStateData.bundleName == 'com.example.observerappstaterely' && appStateData.state == 2) {
      commonEventData.parameters.applicationState = appStateData.state;
      commonEventData.parameters.bundlename = appStateData.bundleName;
      commonEventManager.publish('stateEvent2', commonEventData, (err) => {
        console.info(TAG + 'onAppStateChanged publish2 error' + JSON.stringify(err));
      })
    }else if (appStateData.bundleName == 'com.example.observerappstaterely' && appStateData.state == 4) {
      commonEventData.parameters.applicationState = appStateData.state;
      commonEventManager.publish('stateEvent4', commonEventData, (err) => {
        console.info(TAG + 'onAppStateChanged publish4 error' + JSON.stringify(err));
      })
    }
  }
}
export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    appManager.on("appForegroundState", appForegroundStateObserver);
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
    appManager.off("appForegroundState", appForegroundStateObserver);
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
