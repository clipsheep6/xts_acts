import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import fs from '@ohos.file.fs';
import { RewardAdEventPublish } from "../publish/RewardAdEventPublish";

const TAG = "FullScreenAdAbility"
export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    let rewardAdEventPublish = RewardAdEventPublish.getInstance();
    rewardAdEventPublish.publishEvents("onAdReward");
    let name = want?.bundleName;
    console.log(TAG,`testTag, Ability onCreate is : ${name}`);
    let AdDisplayOptions = want?.parameters["AdDisplayOptions"];
    console.log(TAG,`testTag, Ability onCreate is : ${AdDisplayOptions}`);
  }

  writeAdsToLocalFile(ads: any) {
    let requestAdsPath = globalThis.pathDir + "/kitAds.txt";
    fs.stat(requestAdsPath).then((stat) => {
      console.log("get file info succeed, the size of file is " + stat.size);
    }).catch((err) => {
      console.log("get file info failed with error message: " + err.message + ", error code: " + err.code);
    });
    let file = fs.openSync(requestAdsPath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    fs.write(file.fd, JSON.stringify(ads)).then((writeLen) => {
      console.log("write data to file succeed and size is:" + writeLen);
      fs.closeSync(file);
    }).catch((err) => {
      console.log("write data to file failed with error message: " + err.message + ", error code: " + err.code);
    });
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
