import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@system.router';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../MainAbility/utils/Common';
import {MessageManager,Callback} from '../MainAbility/utils/MessageManager';


export default function VideoJsunit01() {
  describe('VideoJsunit01', function () {
    beforeEach(async function (done) {
      console.info("VideoJsunit01 beforeEach start");
      let options = {
        uri: 'MainAbility/pages/video1',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get VideoJsunit01 state pages: " + JSON.stringify(pages));
        if (!("video1" == pages.name)) {
          console.info("get VideoJsunit01 state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push VideoJsunit01 page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push VideoJsunit01 page error: " + err);
        expect().assertFail();
      }
      done();
    });
    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46Q4_
    * @tc.name  : VideoJsunit01_0100
    * @tc.desc  : onPrepared
    * @tc.level : Level 3
    */
    it('VideoJsunit01_0100', 0, async function (done) {
      console.info('[VideoJsunit01_0100] START');
      let driver = await UiDriver.create()
      let srcbutton = await driver.findComponent(BY.key('srcbutton'));
      await srcbutton.click();
      await CommonFunc.sleep(1000);

      let strJson = getInspectorByKey('onPrepared');
      let obj = JSON.parse(strJson);
      console.info("[VideoJsunit01_0100] component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.content).assertEqual('onPrepared_Doing');
      await CommonFunc.sleep(1000);
      console.info('[VideoJsunit01_0100] END');
      done();
    });

    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46Q4_071；SUB_ACE_TS_COMPONENT_SR000I46Q4_072；SUB_ACE_TS_COMPONENT_SR000I46Q4_073；
    * @tc.name  : VideoJsunit01_0200
    * @tc.desc  : onStart-onPause-onFinish-onUpdate
    * @tc.level : Level 3
    */
    it('VideoJsunit01_0200', 0, async function (done) {
      console.info('[VideoJsunit01_0200] START');
      let driver = await UiDriver.create()
      let srcbutton = await driver.findComponent(BY.key('start'));
      await srcbutton.click();
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('onStart');
      let obj = JSON.parse(strJson);
      console.info("[VideoJsunit01_0200] component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.content).assertEqual('onStart_Doing');
      await CommonFunc.sleep(1000);
      let str4 = getInspectorByKey('onUpdate');
      let obj14 = JSON.parse(str4);
      console.info("[VideoJsunit01_0200] component obj14 is: " + JSON.stringify(obj14));
      expect(obj14.$attrs.content).assertEqual('onUpdate_Doing');
      await CommonFunc.sleep(1000);
      let pausebutton = await driver.findComponent(BY.key('pause'));
      await pausebutton.click();
      await CommonFunc.sleep(1000);
      let strJson1 = getInspectorByKey('onPause');
      let obj1 = JSON.parse(strJson1);
      console.info("[VideoJsunit01_0200] component obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.content).assertEqual('onPause_Doing');
      await CommonFunc.sleep(1000);
      let srcbutton2 = await driver.findComponent(BY.key('start'));
      await srcbutton2.click();
      await CommonFunc.sleep(13000);
      let strJson2 = getInspectorByKey('onFinish');
      let obj2 = JSON.parse(strJson2);
      console.info("[VideoJsunit01_0200] component obj2 is: " + JSON.stringify(obj2));
      expect(obj2.$attrs.content).assertEqual('onFinish_Doing');
      await CommonFunc.sleep(1000);
      console.info('[VideoJsunit01_0200] END');
      done();
    });

  })
}
