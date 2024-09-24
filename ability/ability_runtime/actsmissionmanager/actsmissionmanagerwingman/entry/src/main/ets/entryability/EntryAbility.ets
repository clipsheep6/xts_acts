import { AbilityConstant, UIAbility, Want } from '@kit.AbilityKit';
import { hilog } from '@kit.PerformanceAnalysisKit';
import { window } from '@kit.ArkUI';
import { BusinessError, commonEventManager } from '@kit.BasicServicesKit';

const TAG: string = "missionmanagerwingmanEntryAbility -----> "

export default class EntryAbility extends UIAbility {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    let commonEventPublishData: commonEventManager.CommonEventPublishData = {
      parameters: {
        lifeCycle: "onCreate"
      }
    }
    commonEventManager.publish('wingmanApplicationCommonEvent', commonEventPublishData, (err: BusinessError) => {
      if (err) {
        console.log(TAG, "onCreate publish data failed: " + JSON.stringify(err) );
      }
      console.log(TAG, "onCreate publish data successfully");
    })
  }

  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage): void {
    // Main window is created, set main page for this ability
    let commonEventPublishData: commonEventManager.CommonEventPublishData = {
      parameters: {
        lifeCycle: "onWindowStageCreate"
      }
    }
    commonEventManager.publish('wingmanApplicationCommonEvent', commonEventPublishData, (err: BusinessError) => {
      if (err) {
        console.log(TAG, "onWindowStageCreate publish data failed: " + JSON.stringify(err) );
      }
      console.log(TAG, "onWindowStageCreate publish data successfully");
    })

    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err) => {
      if (err) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content.');
    });
  }

  onWindowStageDestroy(): void {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(): void {
    // Ability has brought to foreground
    let commonEventPublishData: commonEventManager.CommonEventPublishData = {
      parameters: {
        lifeCycle: "onForeground"
      }
    }
    commonEventManager.publish('wingmanApplicationCommonEvent', commonEventPublishData, (err: BusinessError) => {
      if (err) {
        console.log(TAG, "onForeground publish data failed: " + JSON.stringify(err) );
      }
      console.log(TAG, "onForeground publish data successfully");
    })
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground(): void {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
