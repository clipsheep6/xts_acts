import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import type window from '@ohos.window';
import appManager from '@ohos.app.ability.appManager';
import commonEventManager from '@ohos.commonEventManager';

let wantValue;
let foregroundState = 0;
let backgroundState = 0;
let foregroundTimes = 0;
let backgroundTimes = 0;
let commonEventData = {
  parameters: {
    foregroundState: foregroundState,
    backgroundState: backgroundState,
    foregroundTimes: foregroundTimes,
    backgroundTimes: backgroundTimes
  }
}
let windowModeObserver = {
  onAppStateChanged(appStateData) {
    console.info('On app2 state changed.');
    if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
      console.info('Testing application2 state has changed: ' + JSON.stringify(appStateData));
      if (appStateData.state == 2) {
        commonEventData.parameters.foregroundState = 2;
        commonEventData.parameters.foregroundTimes++;
      }
      if (appStateData.state == 4) {
        console.info('foregroundState: ', foregroundState);
        commonEventData.parameters.backgroundState = 4;
        commonEventData.parameters.backgroundTimes++;
      }
    }
  }
};
export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    wantValue = want;
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
    appManager.on('appForegroundState', windowModeObserver);
    if (wantValue.action == 'Acts_MonitorApp_1300') {
      appManager.off('appForegroundState', windowModeObserver);
    }
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
    setTimeout(() => {
      commonEventManager.publish('MultiApplicationTest', commonEventData, (error) => {
        console.info('CommonEventManager publish error: ' + JSON.stringify(error));
        appManager.off('appForegroundState', windowModeObserver);
        this.context.terminateSelf((error) => {
          console.info('Terminate self error: ' + JSON.stringify(error));
        });
      })
    }, 3500)
  }
}
