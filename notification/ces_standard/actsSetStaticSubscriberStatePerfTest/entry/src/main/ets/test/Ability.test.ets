import hilog from '@ohos.hilog';
import { describe, it, expect } from '@ohos/hypium'
import commonEventManager from '@ohos.commonEventManager';

export default function staticSubscriberStatePerfTest() {
  describe('staticSubscriberStatePerfTest', function () {
    const BASE_COUNT = 2;
    const BASE_LINE_SET_STATIC_SUBSCRIBER_STATE = 250;

    it('Acts_SetStaticSubscriberStatePerfTest_0100', 0, async function (done) {
      let enable: boolean = true;
      let events: Array<string> = [
        'usual.event.CHARGE_IDLE_MODE_CHANGED'
      ];
      let startTime = new Date().getTime();
      let curTime = new Date().getTime();
      setStaticSubscriberStatePerfTest(0);
      async function setStaticSubscriberStatePerfTest(index) {
        commonEventManager.setStaticSubscriberState(enable, events)
          .then(()=>{
            console.info('Acts_SetStaticSubscriberStatePerfTest_0100 index: ' + index);
            if(index < BASE_COUNT) {
              curTime = new Date().getTime();
              console.info('Acts_SetStaticSubscriberStatePerfTest_0100 curTime: ' + curTime);
              setStaticSubscriberStatePerfTest(index + 1);
            } else {
              let endTime = new Date().getTime();
              console.info('Acts_SetStaticSubscriberStatePerfTest_0100 endTime: ' + endTime);
              let averageTime = ((endTime - startTime) * 1000 ) / BASE_COUNT;
              console.info('Acts_SetStaticSubscriberStatePerfTest_0100 average Time: ' + averageTime + ' μs');
              expect(averageTime < BASE_LINE_SET_STATIC_SUBSCRIBER_STATE).assertTrue();
              done();
            }
          }) 
      }
    })
  })
}