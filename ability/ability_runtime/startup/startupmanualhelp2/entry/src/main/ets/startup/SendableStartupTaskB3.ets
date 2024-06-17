import StartupTask from '@ohos.app.appstartup.StartupTask';
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';

@Sendable
export default class SendableStartupTaskB3 extends StartupTask {
  constructor() {
    super();
  }
  async init(context: common.AbilityStageContext) {
    console.info('StartupTest SendableStartupTaskB3 init');
    commonEventManager.publish('SendableStartupTaskB3_init', (err, data)=>{
      console.log("StartupTest SendableStartupTaskB3 init, publish msg, err=" + JSON.stringify(err));
      console.log("StartupTest SendableStartupTaskB3 init, publish msg, data=" + JSON.stringify(data));
    })
    return 'SendableStartupTaskB3';
  }

  onDependencyCompleted(dependence: string, result: Object): void {
    console.info('StartupTest SendableStartupTaskB3 onDependencyCompleted dependence=' + dependence);
    console.info('StartupTest SendableStartupTaskB3 onDependencyCompleted result=' + JSON.stringify(result));
  }
}