/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import router from '@ohos.router';
import {UiComponent, Driver, Component, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../../MainAbility/utils/Common';
import {MessageManager,Callback} from '../../MainAbility/utils/MessageManager';
export default function AlphabetIndexerDirection() {
  describe('AlphabetIndexerDirection', () => {
    beforeEach(async (done: Function) => {
      console.info("AlphabetIndexerDirection beforeEach start");
      let options: router.RouterOptions = {
        url: "MainAbility/pages/AlphabetIndexer/AlphabetIndexerDirection",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get AlphabetIndexerDirection state pages:" + JSON.stringify(pages));
        if (!("AlphabetIndexerDirection" == pages.name)) {
          console.info("get AlphabetIndexerDirection pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push AlphabetIndexerDirection page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push AlphabetIndexerDirection page error:" + err);
      }
      console.info("AlphabetIndexerDirection beforeEach end");
      done();
    });
    afterEach(async () => {
      await CommonFunc.sleep(1000);
      console.info("AlphabetIndexerDirection after each called");
    });
    /**
     * @tc.number AlphabetIndexer
     * @tc.name testAlphabetIndexerDirectionTest_001
     * @tc.desc      Support direction:Auto --> direction:Rtl
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testAlphabetIndexerDirectionTest_001', 0, async (done: Function) => {
      console.info('testAlphabetIndexerDirectionTest_001 START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('Auto'));
      await button.click();
      await CommonFunc.sleep(1000);
      let btn_auto: Component = await driver.findComponent(ON.id('AlphabetIndexer'));
      let point_auto = await btn_auto.getBoundsCenter();
      console.info('testAlphabetIndexerDirectionTest_001 component point_auto:  ' + JSON.stringify(point_auto));
      let button_rtl: Component = await driver.findComponent(ON.id('Rtl'));
      await button_rtl.click();
      await CommonFunc.sleep(1000);
      let btn_rtl: Component = await driver.findComponent(ON.id('AlphabetIndexer'));
      let point_rtl = await btn_rtl.getBoundsCenter()
      console.info('testAlphabetIndexerDirectionTest_001 component point_rtl: ' + JSON.stringify(point_rtl));
      let equalValue = point_auto.x == point_rtl.x;
      expect(equalValue).assertFalse();
      console.info('AlphabetIndexerDirectionText_001 END');
      done();
    });

    /**
     * @tc.number    testAlphabetIndexerDirectionTest_002
     * @tc.name      testAlphabetIndexerDirectionTest_002
     * @tc.desc      Support direction:Auto  alignStyle:Left
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testAlphabetIndexerDirectionTest_002', 0, async (done: Function) => {
      console.info('[testAlphabetIndexerDirectionTest_002] START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let columnCompoment: Component = await driver.findComponent(ON.id('Column'));
      let columnRect = await columnCompoment.getBounds();
      let columnRight = columnRect.right;
      let button: Component = await driver.findComponent(ON.id('Auto'))
      await button.click()
      await CommonFunc.sleep(1000);
      let initialValue: Component = await driver.findComponent(ON.text('安'))
      let rect_getBounds = await initialValue.getBounds()
      console.info('testAlphabetIndexerDirectionTest_002 initialValue component getBounds: ' + JSON.stringify(rect_getBounds));
      let button_left: Component = await driver.findComponent(ON.id('Left'))
      await button_left.click()
      await CommonFunc.sleep(1000);
      let btn: Component = await driver.findComponent(ON.text('A'));
      await btn.click();
      await CommonFunc.sleep(1000);
      let leftComponents = await driver.findComponents(ON.text('安'))
      console.info('testAlphabetIndexerDirectionTest_002 rect_getpopup component leftComponents.length: ' + JSON.stringify(leftComponents.length));
      let rect_getBound_left = rect_getBounds
      expect(leftComponents.length > 1).assertTrue();
      for(let index=0;index < leftComponents.length;index++){
          rect_getBound_left = await leftComponents[index].getBounds()
          if(rect_getBound_left.left != rect_getBounds.left){
            
            break;
          }
        }
      console.info('testAlphabetIndexerDirectionTest_002 rect_getpopup component getBounds rect_getBound_left: ' + JSON.stringify(rect_getBound_left));
      expect(rect_getBound_left.left > (columnRight/2)).assertTrue();
      console.info('[testAlphabetIndexerDirectionTest_002] END');
      done();
    });
    /**
     * @tc.number    testAlphabetIndexerDirectionTest_003
     * @tc.name      testAlphabetIndexerDirectionTest_003
     * @tc.desc      Support direction:Auto  alignStyle:Right
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testAlphabetIndexerDirectionTest_003', 0, async (done: Function) => {
      console.info('[testAlphabetIndexerDirectionTest_003] START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let columnCompoment: Component = await driver.findComponent(ON.id('Column'));
      let columnRect = await columnCompoment.getBounds();
      let columnRight = columnRect.right;
      let button: Component = await driver.findComponent(ON.id('Auto'))
      await button.click()
      await CommonFunc.sleep(1000);
      let initialValue: Component = await driver.findComponent(ON.text('安'))
      let rect_getBounds = await initialValue.getBounds()
      console.info('testAlphabetIndexerDirectionTest_003 initialValue component getBounds: ' + JSON.stringify(rect_getBounds));
      let button_right: Component = await driver.findComponent(ON.id('Right'))
      await button_right.click()
      await CommonFunc.sleep(1000);
      let btn: Component = await driver.findComponent(ON.text('A'));
      await btn.click();
      await CommonFunc.sleep(1000);
      let leftComponents = await driver.findComponents(ON.text('安'))
      console.info('testAlphabetIndexerDirectionTest_003 rect_getpopup component leftComponents.length: ' + JSON.stringify(leftComponents.length));
      let rect_getBound_left = rect_getBounds
      expect(leftComponents.length > 1).assertTrue();
      for(let index=0;index < leftComponents.length;index++){
          rect_getBound_left = await leftComponents[index].getBounds()
          if(rect_getBound_left.left != rect_getBounds.left){
            
            break;
          }
        }
      console.info('testAlphabetIndexerDirectionTest_003 rect_getpopup component getBounds rect_getBound_left: ' + JSON.stringify(rect_getBound_left));
      expect(rect_getBound_left.left < (columnRight/2)).assertTrue();
      console.info('[testAlphabetIndexerDirectionTest_003] END');
      done();
    });
    /**
     * @tc.number    testAlphabetIndexerDirectionTest_004
     * @tc.name      testAlphabetIndexerDirectionTest_004
     * @tc.desc      Support direction:Auto  alignStyle:Start
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testAlphabetIndexerDirectionTest_004', 0, async (done: Function) => {
      console.info('[testAlphabetIndexerDirectionTest_004] START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let columnCompoment: Component = await driver.findComponent(ON.id('Column'));
      let columnRect = await columnCompoment.getBounds();
      let columnRight = columnRect.right;
      let button: Component = await driver.findComponent(ON.id('Auto'))
      await button.click()
      await CommonFunc.sleep(1000);
      let initialValue: Component = await driver.findComponent(ON.text('安'))
      let rect_getBounds = await initialValue.getBounds()
      console.info('testAlphabetIndexerDirectionTest_004 initialValue component getBounds: ' + JSON.stringify(rect_getBounds));
      let button_start: Component = await driver.findComponent(ON.id('Start'))
      await button_start.click()
      await CommonFunc.sleep(1000);
      let btn: Component = await driver.findComponent(ON.text('A'));
      await btn.click();
      await CommonFunc.sleep(1000);
      let leftComponents = await driver.findComponents(ON.text('安'))
      console.info('testAlphabetIndexerDirectionTest_004 rect_getpopup component leftComponents.length: ' + JSON.stringify(leftComponents.length));
      let rect_getBound_left = rect_getBounds
      expect(leftComponents.length > 1).assertTrue();
      for(let index=0;index < leftComponents.length;index++){
          rect_getBound_left = await leftComponents[index].getBounds()
          if(rect_getBound_left.left != rect_getBounds.left){
            
            break;
          }
        }
      console.info('testAlphabetIndexerDirectionTest_004 rect_getpopup component getBounds rect_getBound_left: ' + JSON.stringify(rect_getBound_left));
      expect(rect_getBound_left.left > (columnRight/2)).assertTrue();
      console.info('[testAlphabetIndexerDirectionTest_004] END');
      done();
    });
    /**
     * @tc.number    testAlphabetIndexerDirectionTest_005
     * @tc.name      testAlphabetIndexerDirectionTest_005
     * @tc.desc      Support direction:Auto  alignStyle:End
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testAlphabetIndexerDirectionTest_005', 0, async (done: Function) => {
      console.info('[testAlphabetIndexerDirectionTest_005] START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let columnCompoment: Component = await driver.findComponent(ON.id('Column'));
      let columnRect = await columnCompoment.getBounds();
      let columnRight = columnRect.right;
      let button: Component = await driver.findComponent(ON.id('Auto'));
      await button.click();
      await CommonFunc.sleep(1000);
      let initialValue: Component = await driver.findComponent(ON.text('安'))
      let rect_getBounds = await initialValue.getBounds()
      console.info('testAlphabetIndexerDirectionTest_005 initialValue component getBounds: ' + JSON.stringify(rect_getBounds));
      let button_end: Component = await driver.findComponent(ON.id('End'))
      await button_end.click()
      await CommonFunc.sleep(1000);
      let btn: Component = await driver.findComponent(ON.text('A'));
      await btn.click();
      await CommonFunc.sleep(1000);
      let leftComponents = await driver.findComponents(ON.text('安'))
      console.info('testAlphabetIndexerDirectionTest_005 rect_getpopup component leftComponents.length: ' + JSON.stringify(leftComponents.length));
      let rect_getBound_left = rect_getBounds
      expect(leftComponents.length > 1).assertTrue();
      for(let index=0;index < leftComponents.length;index++){
          rect_getBound_left = await leftComponents[index].getBounds()
          if(rect_getBound_left.left != rect_getBounds.left){
            
            break;
          }
        }
      console.info('testAlphabetIndexerDirectionTest_005 rect_getpopup component getBounds rect_getBound_left: ' + JSON.stringify(rect_getBound_left));
      expect(rect_getBound_left.left < (columnRight/2)).assertTrue();
      console.info('[testAlphabetIndexerDirectionTest_005] END');
      done();
    });
        /**
     * @tc.number    testAlphabetIndexerDirectionTest_006
     * @tc.name      testAlphabetIndexerDirectionTest_006
     * @tc.desc      Support direction:Rtl  alignStyle:Left
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testAlphabetIndexerDirectionTest_006', 0, async (done: Function) => {
      console.info('[testAlphabetIndexerDirectionTest_006] START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let columnCompoment: Component = await driver.findComponent(ON.id('Column'));
      let columnRect = await columnCompoment.getBounds();
      let columnRight = columnRect.right;
      let button: Component = await driver.findComponent(ON.id('Rtl'))
      await button.click()
      await CommonFunc.sleep(1000);
      let initialValue: Component = await driver.findComponent(ON.text('安'))
      let rect_getBounds = await initialValue.getBounds()
      console.info('testAlphabetIndexerDirectionTest_006 initialValue component getBounds: ' + JSON.stringify(rect_getBounds));
      let button_left: Component = await driver.findComponent(ON.id('Left'))
      await button_left.click()
      await CommonFunc.sleep(1000);
      let btn: Component = await driver.findComponent(ON.text('A'));
      await btn.click();
      await CommonFunc.sleep(1000);
      let leftComponents = await driver.findComponents(ON.text('安'))
      console.info('testAlphabetIndexerDirectionTest_006 rect_getpopup component leftComponents.length: ' + JSON.stringify(leftComponents.length));
      let rect_getBound_left = rect_getBounds
      expect(leftComponents.length > 1).assertTrue();
      for(let index=0;index < leftComponents.length;index++){
          rect_getBound_left = await leftComponents[index].getBounds()
          if(rect_getBound_left.left != rect_getBounds.left){
            
            break;
          }
        }
      console.info('testAlphabetIndexerDirectionTest_006 rect_getpopup component getBounds rect_getBound_left: ' + JSON.stringify(rect_getBound_left));
      expect(rect_getBound_left.left > (columnRight/2)).assertTrue();
      console.info('[testAlphabetIndexerDirectionTest_006] END');
      done();
    });
    /**
     * @tc.number    testAlphabetIndexerDirectionTest_007
     * @tc.name      testAlphabetIndexerDirectionTest_007
     * @tc.desc      Support direction:Rtl  alignStyle:Right
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testAlphabetIndexerDirectionTest_007', 0, async (done: Function) => {
      console.info('[testAlphabetIndexerDirectionTest_007] START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let columnCompoment: Component = await driver.findComponent(ON.id('Column'));
      let columnRect = await columnCompoment.getBounds();
      let columnRight = columnRect.right;
      let button: Component = await driver.findComponent(ON.id('Rtl'))
      await button.click()
      await CommonFunc.sleep(1000);
      let initialValue: Component = await driver.findComponent(ON.text('安'))
      let rect_getBounds = await initialValue.getBounds()
      console.info('testAlphabetIndexerDirectionTest_007 initialValue component getBounds: ' + JSON.stringify(rect_getBounds));
      let button_right: Component = await driver.findComponent(ON.id('Right'))
      await button_right.click()
      await CommonFunc.sleep(1000);
      let btn: Component = await driver.findComponent(ON.text('A'));
      await btn.click();
      await CommonFunc.sleep(1000);
      let leftComponents = await driver.findComponents(ON.text('安'))
      console.info('testAlphabetIndexerDirectionTest_007 rect_getpopup component leftComponents.length: ' + JSON.stringify(leftComponents.length));
      let rect_getBound_left = rect_getBounds
      expect(leftComponents.length > 1).assertTrue();
      for(let index=0;index < leftComponents.length;index++){
          rect_getBound_left = await leftComponents[index].getBounds()
          if(rect_getBound_left.left != rect_getBounds.left){
            
            break;
          }
        }
      console.info('testAlphabetIndexerDirectionTest_007 rect_getpopup component getBounds rect_getBound_left: ' + JSON.stringify(rect_getBound_left));
      expect(rect_getBound_left.left < (columnRight/2)).assertTrue();
      console.info('[testAlphabetIndexerDirectionTest_007] END');
      done();
    });
    /**
     * @tc.number    testAlphabetIndexerDirectionTest_008
     * @tc.name      testAlphabetIndexerDirectionTest_008
     * @tc.desc      Support direction:Rtl  alignStyle:Start
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testAlphabetIndexerDirectionTest_008', 0, async (done: Function) => {
      console.info('[testAlphabetIndexerDirectionTest_008] START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let columnCompoment: Component = await driver.findComponent(ON.id('Column'));
      let columnRect = await columnCompoment.getBounds();
      let columnRight = columnRect.right;
      let button: Component = await driver.findComponent(ON.id('Rtl'))
      await button.click()
      await CommonFunc.sleep(1000);
      let initialValue: Component = await driver.findComponent(ON.text('安'))
      let rect_getBounds = await initialValue.getBounds()
      console.info('testAlphabetIndexerDirectionTest_008 initialValue component getBounds: ' + JSON.stringify(rect_getBounds));
      let button_start: Component = await driver.findComponent(ON.id('Start'))
      await button_start.click()
      await CommonFunc.sleep(1000);
      let btn: Component = await driver.findComponent(ON.text('A'));
      await btn.click();
      await CommonFunc.sleep(1000);
      let leftComponents = await driver.findComponents(ON.text('安'))
      console.info('testAlphabetIndexerDirectionTest_008 rect_getpopup component leftComponents.length: ' + JSON.stringify(leftComponents.length));
      let rect_getBound_left = rect_getBounds
      expect(leftComponents.length > 1).assertTrue();
      for(let index=0;index < leftComponents.length;index++){
          rect_getBound_left = await leftComponents[index].getBounds()
          if(rect_getBound_left.left != rect_getBounds.left){
            
            break;
          }
        }
      console.info('testAlphabetIndexerDirectionTest_008 rect_getpopup component getBounds rect_getBound_left: ' + JSON.stringify(rect_getBound_left));
      expect(rect_getBound_left.left < (columnRight/2)).assertTrue();
      console.info('[testAlphabetIndexerDirectionTest_008] END');
      done();
    });
    /**
     * @tc.number    testAlphabetIndexerDirectionTest_009
     * @tc.name      testAlphabetIndexerDirectionTest_009
     * @tc.desc      Support direction:Rtl  alignStyle:End
     * @tc.level     Level 0
     * @tc.type      Function
     * @tc.size      MediumTest
     */
    it('testtestAlphabetIndexerDirectionTest_009', 0, async (done: Function) => {
      console.info('[testAlphabetIndexerDirectionTest_009] START');
      await CommonFunc.sleep(1000);
      let driver: Driver = Driver.create();
      let columnCompoment: Component = await driver.findComponent(ON.id('Column'));
      let columnRect = await columnCompoment.getBounds();
      let columnRight = columnRect.right;
      let button: Component = await driver.findComponent(ON.id('Rtl'))
      await button.click()
      await CommonFunc.sleep(1000);
      let initialValue: Component = await driver.findComponent(ON.text('安'))
      let rect_getBounds = await initialValue.getBounds()
      console.info('testAlphabetIndexerDirectionTest_009 initialValue component getBounds: ' + JSON.stringify(rect_getBounds));
      let button_end: Component = await driver.findComponent(ON.id('End'))
      await button_end.click()
      await CommonFunc.sleep(1000);
      let btn: Component = await driver.findComponent(ON.text('A'));
      await btn.click();
      await CommonFunc.sleep(1000);
      let leftComponents = await driver.findComponents(ON.text('安'))
      console.info('testAlphabetIndexerDirectionTest_009 rect_getpopup component leftComponents.length: ' + JSON.stringify(leftComponents.length));
      let rect_getBound_left = rect_getBounds
      expect(leftComponents.length > 1).assertTrue();
      for(let index=0;index < leftComponents.length;index++){
          rect_getBound_left = await leftComponents[index].getBounds()
          if(rect_getBound_left.left != rect_getBounds.left){
            
            break;
          }
        }
      console.info('testAlphabetIndexerDirectionTest_009 rect_getpopup component getBounds rect_getBound_left: ' + JSON.stringify(rect_getBound_left));
      expect(rect_getBound_left.left > (columnRight/2)).assertTrue();
      console.info('[testAlphabetIndexerDirectionTest_009] END');
      done();
    });
  })
}
