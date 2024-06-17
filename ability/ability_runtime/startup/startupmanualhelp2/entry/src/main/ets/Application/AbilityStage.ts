import AbilityStage from "@ohos.app.ability.AbilityStage"
import hilog from '@ohos.hilog';
import process from '@ohos.process';
import window from '@ohos.window';

const LOG_TAG:string = 'testTag-stage';

export default class MyAbilityStage extends AbilityStage {
  onCreate() {
    hilog.info(0x0000, LOG_TAG, `onCreate`);
    hilog.info(0x0000, LOG_TAG, "mainThread pid: %{public}d, tid: %{public}d", process.pid, process.tid);
  }
}