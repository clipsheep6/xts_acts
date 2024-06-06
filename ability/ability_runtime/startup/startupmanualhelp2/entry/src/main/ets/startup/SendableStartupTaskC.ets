import StartupTask from '@ohos.app.appstartup.StartupTask';
import common from '@ohos.app.ability.common';


@Sendable
export default class SendableStartupTaskC extends StartupTask {
  constructor() {
    super();
  }
  async init(context: common.AbilityStageContext) {
    console.info('StartupTest SendableStartupTaskC init');
    return 'SendableStartupTaskC'
  }

  onDependencyCompleted(dependence: string, result: Object): void {
    console.info('StartupTest SendableStartupTaskC onDependencyCompleted dependence=' + dependence);
    console.info('StartupTest SendableStartupTaskC onDependencyCompleted result=' + JSON.stringify(result));
  }
}