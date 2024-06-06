import StartupTask from '@ohos.app.appstartup.StartupTask';
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';

@Sendable
export default class SendableStartupTaskC3 extends StartupTask {
  constructor() {
    super();
  }
  async init(context: common.AbilityStageContext) {
    console.info('StartupTest SendableStartupTaskC3 init');
    commonEventManager.publish('SendableStartupTaskC3_init', (err, data)=>{
      console.log("StartupTest SendableStartupTaskC3 init, publish msg, err=" + JSON.stringify(err));
      console.log("StartupTest SendableStartupTaskC3 init, publish msg, data=" + JSON.stringify(data));
    })
    return 'SendableStartupTaskB3';
  }

  onDependencyCompleted(dependence: string, result: Object): void {
    console.info('StartupTest SendableStartupTaskC3 onDependencyCompleted dependence=' + dependence);
    console.info('StartupTest SendableStartupTaskC3 onDependencyCompleted result=' + JSON.stringify(result));
  }
}