/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import { describe, beforeEach, afterEach, it, expect } from '@ohos/hypium'
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils.ets';

let emitKey = "emitUserAgent";
export default function search() {
  describe('ActsAceSearchTestFontColor', function () {
    beforeEach(async function (done) {
      await Utils.sleep(2000);
      console.info("search beforeEach start");
      done();
    })

    afterEach(async function (done) {
      console.info("search afterEach start");
      let caretWidthNumber: number = 5
      let caretWidthString: string = '15px'
      let caretWidthResource: Resource = $r('sys.float.ohos_id_text_margin_vertical')
      let caretColorColor: Color = Color.Red
      let caretColorNumber: number = 0x000000
      let caretColorString: string = '#ff9a35'
      let caretColorResource: Resource = $r('sys.color.ohos_id_color_connected')
      let leftSearchIconSizeNumber: number = 20
      let leftSearchIconSizeString: string = '50px'
      let leftSearchIconSizeResource: Resource = $r('sys.float.ohos_id_text_paragraph_margin_m')
      let leftSearchIconColorColor: Color = Color.Red
      let leftSearchIconColorNumber: number = 0x000000
      let leftSearchIconColorString: string = '#ff9a35'
      let leftSearchIconColorResource: Resource = $r('sys.color.ohos_id_color_connected')
      let searchSrcPath: string = 'common/icon.png'
      let rightButtonStyleParam: CancelButtonStyle = CancelButtonStyle.INPUT
      let rightCancelIconSizeNumber: number = 20
      let rightCancelIconSizeString: string = '50px'
      let rightCancelIconSizeResource: Resource = $r('sys.float.ohos_id_text_paragraph_margin_m')
      let rightCancelIconColorColor: Color = Color.Red
      let rightCancelIconColorNumber: number = 0x000000
      let rightCancelIconColorString: string = '#ff9a35'
      let rightCancelIconColorResource: Resource = $r('sys.color.ohos_id_color_connected')
      let rightIconSrcPath: string = 'common/icon.png'
      let searchButtonFontSizeNumber: number = 20
      let searchButtonFontSizeString: string = '10vp'
      let searchButtonFontSizeResource: Resource = $r('sys.float.ohos_id_text_paragraph_margin_m')
      let searchButtonFontColorColor: Color = Color.Blue
      let searchButtonFontColorNumber: number = 0x000000
      let searchButtonFontColorString: string = '#ff9a35'
      let searchButtonFontColorResource: Resource = $r('sys.color.ohos_id_color_connected')
      let textColorColor: Color = Color.Red
      let textColorNumber: number = 0x000000
      let textColorString: string = '#ff9a35'
      let textColorResource: Resource = $r('sys.color.ohos_id_color_connected')

      try {
        var eventData = {
          data: {
            'caretWidthNumber' : caretWidthNumber,
            'caretWidthString' : caretWidthString,
            'caretWidthResource' : caretWidthResource,
            'caretColorColor' : caretColorColor,
            'caretColorNumber' : caretColorNumber,
            'caretColorString' : caretColorString,
            'caretColorResource' : caretColorResource,
            'leftSearchIconSizeNumber' : leftSearchIconSizeNumber,
            'leftSearchIconSizeString' : leftSearchIconSizeString,
            'leftSearchIconSizeResource' : leftSearchIconSizeResource,
            'leftSearchIconColorColor' : leftSearchIconColorColor,
            'leftSearchIconColorNumber' : leftSearchIconColorNumber,
            'leftSearchIconColorString' : leftSearchIconColorString,
            'leftSearchIconColorResource' : leftSearchIconColorResource,
            'searchSrcPath' : searchSrcPath,
            'rightButtonStyleParam' : rightButtonStyleParam,
            'rightCancelIconSizeNumber' : rightCancelIconSizeNumber,
            'rightCancelIconSizeString' : rightCancelIconSizeString,
            'rightCancelIconSizeResource' : rightCancelIconSizeResource,
            'rightCancelIconColorColor' : rightCancelIconColorColor,
            'rightCancelIconColorNumber' : rightCancelIconColorNumber,
            'rightCancelIconColorString' : rightCancelIconColorString,
            'rightCancelIconColorResource' : rightCancelIconColorResource,
            'rightIconSrcPath' : rightIconSrcPath,
            'searchButtonFontSizeNumber' : searchButtonFontSizeNumber,
            'searchButtonFontSizeString' : searchButtonFontSizeString,
            'searchButtonFontSizeResource' : searchButtonFontSizeResource,
            'searchButtonFontColorColor' : searchButtonFontColorColor,
            'searchButtonFontColorNumber' : searchButtonFontColorNumber,
            'searchButtonFontColorString' : searchButtonFontColorString,
            'searchButtonFontColorResource' : searchButtonFontColorResource,
            'textColorColor' : textColorColor,
            'textColorNumber' : textColorNumber,
            'textColorString' : textColorString,
            'textColorResource' : textColorResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("search afterEach start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.info("search afterEach start to publish change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      done();
    })

    /**
     * @tc.number    ArkUI_Stage_Search_FontColor_0100
     * @tc.name      Tests the fontColor property of the search component
     * @tc.desc      Get the default value of fontColor
     */
    it('[ArkUI_Stage_Search_FontColor_0100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_FontColor_0100] start");
      let newJson = getInspectorByKey('searchTestDefault');
      console.info("[ArkUI_Stage_Search_FontColor_0100]: " + JSON.stringify(newJson));

      let obj = JSON.parse(newJson);
      console.info("[ArkUI_Stage_Search_FontColor_0100]: " + JSON.stringify(obj.$attrs.fontColor));
      expect(obj.$attrs.fontColor).assertEqual("#FF182431");
      console.info("[ArkUI_Stage_Search_FontColor_0100] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_FontColor_0200
     * @tc.name      Tests the fontColor property of the search component
     * @tc.desc      Set the value of fontColor as 0xff0000
     */
    it('[ArkUI_Stage_Search_FontColor_0200]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_FontColor_0200] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_FontColor_0200]: " + JSON.stringify(newJson));

      let textColorNumber = 0xff0000;
      try {
        var eventData = {
          data: {
            "textColorNumber": textColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_FontColor_0200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_FontColor_0200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_FontColor_0200]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_FontColor_0200]: " + JSON.stringify(obj.$attrs.fontColor));
      expect(obj.$attrs.fontColor).assertEqual("#FFFF0000");
      console.info("[ArkUI_Stage_Search_FontColor_0200] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_FontColor_0300
     * @tc.name      Tests the fontColor property of the search component
     * @tc.desc      Set the value of fontColor as Color.Red
     */
    it('[ArkUI_Stage_Search_FontColor_0300]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_FontColor_0300] start");
      let newJson = getInspectorByKey('searchTestColor');
      console.info("[ArkUI_Stage_Search_FontColor_0300]: " + JSON.stringify(newJson));

      let textColorColor = Color.Red;
      try {
        var eventData = {
          data: {
            "textColorColor": textColorColor
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_FontColor_0300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_FontColor_0300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestColor');
      console.info("[ArkUI_Stage_Search_FontColor_0300]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_FontColor_0300]: " + JSON.stringify(obj.$attrs.fontColor));
      expect(obj.$attrs.fontColor).assertEqual("#FFFF0000");
      console.info("[ArkUI_Stage_Search_FontColor_0300] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_FontColor_0400
     * @tc.name      Tests the fontColor property of the search component
     * @tc.desc      Set the value of fontColor as #ff9a35
     */
    it('[ArkUI_Stage_Search_FontColor_0400]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_FontColor_0400] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_FontColor_0400]: " + JSON.stringify(newJson));

      let textColorString = '#ff9a35';
      try {
        var eventData = {
          data: {
            "textColorString": textColorString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_FontColor_0400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_FontColor_0400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_FontColor_0400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_FontColor_0400]: " + JSON.stringify(obj.$attrs.fontColor));
      expect(obj.$attrs.fontColor).assertEqual("#FFFF9A35");
      console.info("[ArkUI_Stage_Search_FontColor_0400] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_FontColor_0500
     * @tc.name      Tests the fontColor property of the search component
     * @tc.desc      Set the value of fontColor as $r('sys.color.ohos_id_color_connected')
     */
    it('[ArkUI_Stage_Search_FontColor_0500]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_FontColor_0500] start");
      let newJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_FontColor_0500]: " + JSON.stringify(newJson));

      let textColorResource = $r('sys.color.ohos_id_color_connected');
      try {
        var eventData = {
          data: {
            "textColorResource": textColorResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_FontColor_0500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_FontColor_0500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_FontColor_0500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_FontColor_0500]: " + JSON.stringify(obj.$attrs.fontColor));
      expect(obj.$attrs.fontColor).assertEqual('#FF00CB87');
      console.info("[ArkUI_Stage_Search_FontColor_0500] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_FontColor_0600
     * @tc.name      Tests the fontColor property of the search component
     * @tc.desc      Set the value of fontColor as abcdefghijk
     */
    it('[ArkUI_Stage_Search_FontColor_0600]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_FontColor_0600] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_FontColor_0600]: " + JSON.stringify(newJson));

      let textColorString = 'abcdefghijk';
      try {
        var eventData = {
          data: {
            "textColorString": textColorString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_FontColor_0600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_FontColor_0600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_FontColor_0600]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_FontColor_0600]: " + JSON.stringify(obj.$attrs.fontColor));
      expect(obj.$attrs.fontColor).assertEqual("#FF182431");
      console.info("[ArkUI_Stage_Search_FontColor_0600] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_FontColor_0700
     * @tc.name      Tests the fontColor property of the search component
     * @tc.desc      Set the value of fontColor as null
     */
    it('[ArkUI_Stage_Search_FontColor_0700]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_FontColor_0700] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_FontColor_0700]: " + JSON.stringify(newJson));

      let textColorNumber = null;
      try {
        var eventData = {
          data: {
            "textColorNumber": textColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_FontColor_0700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_FontColor_0700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_FontColor_0700]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_FontColor_0700]: " + JSON.stringify(obj.$attrs.fontColor));
      expect(obj.$attrs.fontColor).assertEqual("#FF182431");
      console.info("[ArkUI_Stage_Search_FontColor_0700] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_FontColor_0800
     * @tc.name      Tests the fontColor property of the search component
     * @tc.desc      Set the value of fontColor as undefined
     */
    it('[ArkUI_Stage_Search_FontColor_0800]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_FontColor_0800] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_FontColor_0800]: " + JSON.stringify(newJson));

      let textColorNumber = undefined;
      try {
        var eventData = {
          data: {
            "textColorNumber": textColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_FontColor_0800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_FontColor_0800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_FontColor_0800]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_FontColor_0800]: " + JSON.stringify(obj.$attrs.fontColor));
      expect(obj.$attrs.fontColor).assertEqual("#FF182431");
      console.info("[ArkUI_Stage_Search_FontColor_0800] end");
      done();
    });
  })
}