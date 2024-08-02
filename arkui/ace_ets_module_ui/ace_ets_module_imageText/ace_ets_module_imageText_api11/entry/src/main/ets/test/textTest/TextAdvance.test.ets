/**
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import router from '@ohos.router';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import CommonFunc from '../../MainAbility/common/Common';
import Utils from '../../MainAbility/common/Utils'

export default function textAdvance() {
  const routerPush = async (target:string) => {
    let options:router.RouterOptions = {
      url: `MainAbility/pages/text/TextAdvance/${target}`,
    }
    try {
      router.clear();
      let pages = router.getState();
      console.info(`get ${target} state pages:` + JSON.stringify(pages));
      console.info(`get ${target} pages.name:` + JSON.stringify(pages.name));
      if (!(target == pages.name)) {
        let result = router.pushUrl(options);
        console.info(`router options url is ${options.url}`);
        await CommonFunc.sleep(1000);
        console.info(`push ${target} page result:` + JSON.stringify(result));
        let pages = router.getState();
        console.info(`push page name is ${pages.name}`);
        expect(pages.name).assertEqual(target)
      }
    } catch (err) {
      console.error(`push ${target} page error:` + err);
    }
  }
  describe('textAdvance', () => {

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info('text10 after each called');
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0010
     * @tc.name    testAspectRatio001
     * @tc.desc    Set the displayPriority of two components to 1 and 1.9 respectively
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0010', 0, async (done:Function) => {
      await routerPush('textPrioSize');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0010 START');
      await Utils.sleep(2000);
      let strJson1 = getInspectorByKey('text1');
      let strJson2 = getInspectorByKey('text2');
      let obj1: ESObject = JSON.parse(strJson1);
      let prio:number =JSON.parse(strJson1).$attrs.displayPriority;
      console.info('[text10]text1 priority is '+prio);
      expect(JSON.parse(strJson2).$attrs.displayPriority).assertEqual(prio);
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0020
     * @tc.name    testAspectRatio002
     * @tc.desc    Set the displayPriority to  1.5 and the height to 200
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0020', 0, async (done:Function) => {
      await routerPush('textPrioSize');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0020 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('text3');
      console.info('[text20]width is'+JSON.parse(strJson).$attrs.size.width+' height is'+JSON.parse(strJson).$attrs.size.height);
      expect(JSON.parse(strJson).$attrs.size.width).assertEqual('300.00vp');
      expect(JSON.parse(strJson).$attrs.size.height).assertEqual('200.00vp');
      done();
    });

    /*
     * @tc.number SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0060
     * @tc.name   testAspectRatio006
     * @tc.desc    set width to 40px, height to 10px
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0060', 0, async (done:Function) => {
      await routerPush('textPrioSize');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0060 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('text4');
      let width:string = JSON.parse(strJson).$attrs.size.width;
      let height:string = JSON.parse(strJson).$attrs.size.height;
      console.info('[text60]height is '+height+'width is '+width);
      expect(parseFloat(width)/parseFloat(height)).assertEqual(4);
      done();
    });

    /*
     * @tc.number SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0070
     * @tc.name   testAspectRatio007
     * @tc.desc    set aspectRatio to a negative number
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0070', 0, async (done:Function) => {
      await routerPush('textPrioSize');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0070 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('text5');
      expect(JSON.parse(strJson).$attrs.aspectRatio).assertEqual('');
      done();
    });

    /*
     * @tc.number SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0030
     * @tc.name   testAspectRatio003
     * @tc.desc    Medium containers show priority 2 and priority 3 components
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0030', 0, async (done:Function) => {
      await routerPush('text30');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0030 START');
      await Utils.sleep(2000);
      done();
    });

    /*
     * @tc.number SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0040
     * @tc.name   testAspectRatio004
     * @tc.desc    big containers show all components
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0040', 0, async (done:Function) => {
      await routerPush('text40');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0040 START');
      await Utils.sleep(2000);
      done();
    });

    /*
     * @tc.number SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0050
     * @tc.name   testAspectRatio005
     * @tc.desc    small containers only priority 3 component show
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0050', 0, async (done:Function) => {
      await routerPush('text50');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_ASPECTRATIO_INTERFACE_0050 START');
      await Utils.sleep(2000);
      done();
    });

  })
}