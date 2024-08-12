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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@ohos.router';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../../MainAbility/common/Common';
import { MessageManager, Callback } from '../../MainAbility/common/MessageManager';

export default function search_gesture() {
  describe('search_gesture', () => {
    beforeEach(async (done: Function) => {
      console.info("search_gesture beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/Search/search_gesture',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get search_caret state pages: " + JSON.stringify(pages));
        if (!("search_gesture" == pages.name)) {
          console.info("get search_gesture state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push search_gesture page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push search_gesture page error: " + err);
        expect().assertFail();
      }
      done();
    });

    /* *
      * @tc.number: SUB_ACE_UI_SEARCH_GESTURE_0100
      * @tc.name  : search_gesture_001
      * @tc.desc  : click caret, check caret to singleHandle and the text selection menu appears
      * @tc.level : Level 0
      * @tc.type :
      * @tc.size :
      */
    it('search_gesture_001', 0, async (done: Function) => {

      console.info('[search_gesture_001] START');
      let driver = Driver.create();
      let searchComponent = await driver.findComponent(ON.id('SearchGesture'));
      await searchComponent.click();
      await CommonFunc.sleep(1000);
      console.info('search_gesture_001 click success');
      //first step: input hello
      await searchComponent.inputText('hello');
      await CommonFunc.sleep(1000);

      //second step: get caret position and click caret
      let button = await driver.findComponent(ON.id('SearchCaret11'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson1 = getInspectorByKey('SearchCaretXText');
      let obj1: ESObject = JSON.parse(strJson1);
      await CommonFunc.sleep(1000);
      console.info(`[search_gesture_001] caretOffsetX is:${obj1.$attrs.content}`);
      let caretRelativeX = parseInt(obj1.$attrs.content);
      let searchRect = CommonFunc.getComponentRectOnScreen('SearchGesture');
      let searchIconLeftSpace = 12;
      let searchIconRightSpace = 8;
      let defaultSearchIconWidth = 16;
      let relativeContentRectLeftWidth = vp2px(searchIconLeftSpace + searchIconRightSpace + defaultSearchIconWidth).toFixed(2);
      let clickX = searchRect.left + caretRelativeX + relativeContentRectLeftWidth;
      let clickY =  Math.round((searchRect.bottom + searchRect.top)/2);
      await driver.click(clickX, clickY);
      await CommonFunc.sleep(1000);

      //check the text selection menu appearing
      let selectAllButton = await driver.findComponent(BY.text('全选'));
      let result = selectAllButton ? '1':'0';
      expect(result).assertEqual('1');
      //handle state and caret twinking state

      console.info('[search_gesture_001] END');
      done();
    });

   /* *
      * @tc.number: SUB_ACE_UI_SEARCH_GESTURE_0200
      * @tc.name  : search_gesture_002
      * @tc.desc  : longClick and check selection state
      * @tc.level : Level 0
      * @tc.type :
      * @tc.size :
      */
      it('search_gesture_002', 0, async (done: Function) => {

      console.info('[search_gesture_002] START');
      if (globalThis.winLeft == 0) {
        let driver = Driver.create();
        let searchComponent = await driver.findComponent(ON.id('SearchGesture'));
        await searchComponent.click();
        await CommonFunc.sleep(1000);
        console.info('search_gesture_001 click success');
        //first step: longClick on content and check
        //待校验双手柄
        let button = await driver.findComponent(ON.id('SearchCaret11'));
        await button.click();
        await CommonFunc.sleep(1000);
        let strJson1 = getInspectorByKey('SearchCaretXText');
        let obj1: ESObject = JSON.parse(strJson1);
        await CommonFunc.sleep(1000);
        console.info(`[search_gesture_001] caretOffsetX is:${obj1.$attrs.content}`);
        let caretRelativeX = parseInt(obj1.$attrs.content);
        let searchRect = CommonFunc.getComponentRectOnScreen('SearchGesture');
        let searchIconLeftSpace = 12;
        let searchIconRightSpace = 8;
        let defaultSearchIconWidth = 16;
        let relativeContentRectLeftWidth = vp2px(searchIconLeftSpace + searchIconRightSpace + defaultSearchIconWidth).toFixed(2);
        let clickX = searchRect.left + caretRelativeX + relativeContentRectLeftWidth - vp2px(2);
        let clickY =  Math.round((searchRect.bottom + searchRect.top)/2);
        await driver.longClick(clickX, clickY);
        await CommonFunc.sleep(1000);
        let selectAllButton1 = await driver.findComponent(BY.text('全选'));
        let result1 = selectAllButton1 ? '1':'0';
        expect(result1).assertEqual('1');
        let copyButton1 = await driver.findComponent(BY.text('复制'));
        let result2 = copyButton1 ? '1':'0';
        expect(result2).assertEqual('1');
        let cutButton1 = await driver.findComponent(BY.text('剪切'));
        let result3 = cutButton1 ? '1':'0';
        expect(result3).assertEqual('1');

        //second step: longClick on an empty space and check
        //待校验长按空白处变单手柄在文本末尾
        let clickX2 = searchRect.left + caretRelativeX + relativeContentRectLeftWidth + vp2px(2);
        await driver.longClick(clickX2, clickY);
        await CommonFunc.sleep(1000);
        let selectAllButton2 = await driver.findComponent(BY.text('全选'));
        let result4 = selectAllButton2 ? '1':'0';
        expect(result4).assertEqual('1');

        //Thirdstep:  after clear text , longClick and check
        //待校验单手柄
        await searchComponent.clearText()
        await CommonFunc.sleep(3000);
        let clickX3 = searchRect.left + relativeContentRectLeftWidth + vp2px(2);
        await driver.longClick(clickX3, clickY);
       
      }

      console.info('[search_gesture_002] END');
      done();
    });

  })
}