
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@system.router';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../MainAbility/utils/Common';
import {MessageManager,Callback} from '../MainAbility/utils/MessageManager';


export default function DialogJsunit() {
  describe('DialogJsunit', function () {
    beforeEach(async function (done) {
      console.info("DialogJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/DialogPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get DialogJsunit state pages: " + JSON.stringify(pages));
        if (!("DialogPage" == pages.name)) {
          console.info("get DialogJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push DialogJsunit success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push DialogJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });
    it('DialogJsunit_0100', 0, async function (done) {

      console.info('[DialogJsunit_0100] START');
      await CommonFunc.sleep(1000);

      let driver = await UiDriver.create()
      let button = await driver.findComponent(BY.key('button'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('button');
      let obj = JSON.parse(strJson);
      console.info('[DialogJsunit_0100] component obj is: ' + obj.$attrs.content);
      expect(obj.$attrs.label).assertEqual('OneButton:succ');

      console.info('[DialogJsunit_0100] END');
      done();
    });
  })
}