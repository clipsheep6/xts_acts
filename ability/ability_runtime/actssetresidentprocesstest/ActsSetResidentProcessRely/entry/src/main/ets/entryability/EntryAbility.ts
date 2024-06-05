import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import Base from '@ohos.base';
import abilitiyManager from '@ohos.app.ability.abilityManager'


export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
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
    console.info("ActsSetResidentProcessRely is onForeground");
    let errCode :number;
    abilitiyManager.setResidentProcessEnabled("com.ohos.launcher", true).then(() => {
      console.info("ActsSetResidentProcessRely setResidentProcessEnabled success");
    }).catch((err: Base.BusinessError) => {
      console.error(`ActsSetResidentProcessRely setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
      errCode = err.code;
    });
    setTimeout(() => {
      console.info("ActsNotificationNoPermissionSystemRely start terminateSelfWithResult");
      console.info('ActsSetResidentProcessRely errCode is :' + errCode);
      this.context.terminateSelfWithResult({
        resultCode: 0,
        want: {
          parameters: {
            errCode:errCode,
          }
        }
      }, (err: Base.BusinessError) => {
        console.info("ActsSetResidentProcessRely err is :" + JSON.stringify(err));
      });
    }, 5000);
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
