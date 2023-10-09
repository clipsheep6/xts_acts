/**
 * Copyright (c) 2023 iSoftStone Information Technology (Group) Co.,Ltd.
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
import CommonFunc from '../../../MainAbility/common/Common';
import { MessageManager,Callback } from '../../../MainAbility/common/MessageManager';
import { Driver, ON } from '@ohos.UiTest';

export default function Grid_ScrollAndScrollIndex() {
  describe('Grid_ScrollAndScrollIndex', function () {
    beforeEach(async function (done) {
      console.info("Grid_ScrollAndScrollIndex beforeEach start");
      let options = {
        url: "MainAbility/pages/Grid/Grid_scroll/Grid_ScrollAndScrollIndex",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get Grid_ScrollAndScrollIndex state pages:" + JSON.stringify(pages));
        if (!("Grid_ScrollAndScrollIndex" == pages.name)) {
          console.info("get Grid_ScrollAndScrollIndex pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push Grid_ScrollAndScrollIndex page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push Grid_ScrollAndScrollIndex page error:" + err);
      }
      console.info("Grid_ScrollAndScrollIndex beforeEach end");
      done();
    });
    afterEach(async function () {
      await CommonFunc.sleep(1000);
      router.back()
      console.info("Grid_ScrollAndScrollIndex after each called");
    });


    //grid初始化时会触发一次onScrollIndex事件
    it('Grid_ScrollAndScrollIndex_0100', 0, async function (done) {
      console.info('[Grid_ScrollAndScrollIndex_0100] START');
      let strJson1 = getInspectorByKey('Grid_ScrollAndScrollIndex_tex1')
      let obj1 = JSON.parse(strJson1)
      console.info("[Grid_ScrollAndScrollIndex_0100] component obj1 is: " + JSON.stringify(obj1))
      expect(obj1.$attrs.content).assertEqual('onScrollIndex1');

      console.info('[Grid_ScrollAndScrollIndex_0100] END');
      done();
    });

    //grid滑动时触发onScroll事件
    it('Grid_ScrollAndScrollIndex_0200', 0, async function (done) {
      console.info('[Grid_ScrollAndScrollIndex_0200] START');
      let gridRect = CommonFunc.getComponentRect('Grid_ScrollAndScrollIndex_grid')
      let driver = Driver.create()
      await driver.swipe(
        parseInt((gridRect.right-gridRect.left)*0.5+gridRect.left),
        parseInt((gridRect.bottom-gridRect.top)*0.9+gridRect.top),
        parseInt((gridRect.right-gridRect.left)*0.5+gridRect.left),
        parseInt((gridRect.bottom-gridRect.top)*0.1+gridRect.top),
        1000);
      await CommonFunc.sleep(2000);

      let strJson1 = getInspectorByKey('Grid_ScrollAndScrollIndex_tex2')
      let obj1 = JSON.parse(strJson1)
      console.info("[Grid_ScrollAndScrollIndex_0200] component obj1 is: " + JSON.stringify(obj1))
      expect(obj1.$attrs.content).assertEqual('onScroll');

      console.info('[Grid_ScrollAndScrollIndex_0200] END');
      done();
    });


    //grid滑动，显示区域上第一个子组件/最后一个组件的索引值有变化就会触发onScrollIndex事件
    it('Grid_ScrollAndScrollIndex_0300', 0, async function (done) {
      console.info('[Grid_ScrollAndScrollIndex_0300] START');
      let gridRect = CommonFunc.getComponentRect('Grid_ScrollAndScrollIndex_grid')
      let driver = Driver.create()
      await driver.swipe(
        parseInt((gridRect.right-gridRect.left)*0.5+gridRect.left),
        parseInt((gridRect.bottom-gridRect.top)*0.9+gridRect.top),
        parseInt((gridRect.right-gridRect.left)*0.5+gridRect.left),
        parseInt((gridRect.bottom-gridRect.top)*0.1+gridRect.top),
        1000);     //grid滑到底部会再触发两次onScrollIndex事件
      await CommonFunc.sleep(2000);

      let strJson1 = getInspectorByKey('Grid_ScrollAndScrollIndex_tex1')
      let obj1 = JSON.parse(strJson1)
      console.info("[Grid_ScrollAndScrollIndex_0300] component obj1 is: " + JSON.stringify(obj1))
      expect(obj1.$attrs.content).assertEqual('onScrollIndex3');

      console.info('[Grid_ScrollAndScrollIndex_0300] END');
      done();
    });


    //scrollBar滑动，grid显示区域上第一个子组件/最后一个组件的索引值有变化就会触发onScrollIndex事件
    it('Grid_ScrollAndScrollIndex_0400', 0, async function (done) {
      console.info('[Grid_ScrollAndScrollIndex_0400] START');
      let scrollBarRect= CommonFunc.getComponentRect('Grid_ScrollAndScrollIndex_scrollBar')
	    let driver = Driver.create()
	    await driver.swipe(
        parseInt((scrollBarRect.right-scrollBarRect.left)*0.5+scrollBarRect.left),
        parseInt((scrollBarRect.bottom-scrollBarRect.top)*0.1+scrollBarRect.top),
        parseInt((scrollBarRect.right-scrollBarRect.left)*0.5+scrollBarRect.left),
        parseInt((scrollBarRect.bottom-scrollBarRect.top)*0.9+scrollBarRect.top),
        1000);     //scrollBar滑到底部，会再触发两次onScrollIndex事件
      await CommonFunc.sleep(2000);

      let strJson1 = getInspectorByKey('Grid_ScrollAndScrollIndex_tex1')
      let obj1 = JSON.parse(strJson1)
      console.info("[Grid_ScrollAndScrollIndex_0400] component obj1 is: " + JSON.stringify(obj1))
      expect(obj1.$attrs.content).assertEqual('onScrollIndex3');

      console.info('[Grid_ScrollAndScrollIndex_0400] END');
      done();
    });




  })
}
