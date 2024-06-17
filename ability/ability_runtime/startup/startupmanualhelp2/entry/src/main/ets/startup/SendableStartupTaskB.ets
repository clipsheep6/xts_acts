import StartupTask from '@ohos.app.appstartup.StartupTask';
import common from '@ohos.app.ability.common';
import hilog from '@ohos.hilog';
import process from '@ohos.process';

@Sendable
export default class SendableStartupTaskB extends StartupTask {
  constructor() {
    super();
  }
  async init(context: common.AbilityStageContext) {
    console.info('StartupTest SendableStartupTaskB init');
    return 'SendableStartupTaskB'
  }

  onDependencyCompleted(dependence: string, result: Object): void {
    console.info('StartupTest SendableStartupTaskB onDependencyCompleted dependence=' + dependence);
    console.info('StartupTest SendableStartupTaskB onDependencyCompleted result=' + JSON.stringify(result));
  }
}