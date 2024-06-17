import StartupTask from '@ohos.app.appstartup.StartupTask';
import common from '@ohos.app.ability.common';

@Sendable
export default class SendableStartupTaskA extends StartupTask {
  constructor() {
    super();
  }
  async init(context: common.AbilityStageContext) {
    console.info('StartupTest SendableStartupTaskA init');
    return 'Sample_014';
  }

  onDependencyCompleted(dependence: string, result: Object): void {
    console.info('StartupTest SendableStartupTaskA onDependencyCompleted dependence=' + dependence);
    console.info('StartupTest SendableStartupTaskA onDependencyCompleted result=' + JSON.stringify(result));
  }
}