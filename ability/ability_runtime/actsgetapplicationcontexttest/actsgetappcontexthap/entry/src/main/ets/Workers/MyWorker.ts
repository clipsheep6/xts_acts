import worker, { ThreadWorkerGlobalScope, MessageEvents } from '@ohos.worker';
import Handle from './Handle';
import hilog from '@ohos.hilog';
import application from '@ohos.app.ability.Application';
import commonEventManager from '@ohos.commonEventManager';

let workerPort: ThreadWorkerGlobalScope = worker.workerPort;
let handler: Handle = new Handle()

workerPort.onmessage = (e : MessageEvents): void => {
  switch (e.data.type as number) {
    case 0:
      hilog.info(0x0000, 'testTag', 'worker start!');
      let context1 = application.getApplicationContext();
      hilog.info(0x0000, 'testTag', 'context1: %{public}s', JSON.stringify(context1));
      if (context1.applicationInfo.name == 'com.example.getapplicationcontexthap') {
        commonEventManager.publish('0400', (err, data)=>{
          hilog.info(0x0000, 'testTag', 'customData, publish msg, err=' + JSON.stringify(err));
          hilog.info(0x0000, 'testTag', 'customData, publish msg, data=' + JSON.stringify(data));
        })
      } else {
        hilog.info(0x0000, 'testTag', 'context1.applicationInfo.name = %{public}s',
          context1.applicationInfo.name);
      }
      break;
  }
}