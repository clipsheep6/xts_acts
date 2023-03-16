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
  describe('ActsAceSearchTestSearchButton', function () {
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
     * @tc.number    ArkUI_Stage_Search_SearchButton_0100
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Get the default value of searchButton.fontSize
     */
    it('[ArkUI_Stage_Search_SearchButton_0100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0100] start");
      let newJson = getInspectorByKey('searchTestDefault');
      console.info("[ArkUI_Stage_Search_SearchButton_0100]: " + JSON.stringify(newJson));

      let obj = JSON.parse(newJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0100]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0100]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("16.00fp");
      console.info("[ArkUI_Stage_Search_SearchButton_0100] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_0200
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as 20vp
     */
    it('[ArkUI_Stage_Search_SearchButton_0200]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0200] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0200]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = '20vp';
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_0200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_0200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0200]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0200]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0200]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("20.00vp");
      console.info("[ArkUI_Stage_Search_SearchButton_0200] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_0300
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as 40vp
     */
    it('[ArkUI_Stage_Search_SearchButton_0300]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0300] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0300]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = '40vp';
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_0300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_0300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0300]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0300]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0300]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("40.00vp");
      console.info("[ArkUI_Stage_Search_SearchButton_0300] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_0400
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as 20
     */
    it('[ArkUI_Stage_Search_SearchButton_0400]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0400] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_0400]: " + JSON.stringify(newJson));

      let searchButtonFontSizeNumber = 20;
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeNumber": searchButtonFontSizeNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_0400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_0400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_0400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0400]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0400]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual('20.00fp');
      console.info("[ArkUI_Stage_Search_SearchButton_0400] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_0500
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as 40fp
     */
    it('[ArkUI_Stage_Search_SearchButton_0500]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0500] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0500]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = '40px';
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_0500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_0500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0500]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0500]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("40.00px");
      console.info("[ArkUI_Stage_Search_SearchButton_0500] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_0600
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as 40lpx
     */
    it('[ArkUI_Stage_Search_SearchButton_0600]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0600] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0600]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = '40lpx';
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_0600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_0600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0600]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0600]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0600]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("40.00lpx");
      console.info("[ArkUI_Stage_Search_SearchButton_0600] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_0700
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as $r('sys.float.ohos_id_text_paragraph_margin_m')
     */
    it('[ArkUI_Stage_Search_SearchButton_0700]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0700] start");
      let newJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchButton_0700]: " + JSON.stringify(newJson));

      let searchButtonFontSizeResource = $r('sys.float.ohos_id_text_paragraph_margin_m');
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeResource": searchButtonFontSizeResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_0700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_0700] change component data error: " + err.message);
      }
      await Utils.sleep(5000);

      let strJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchButton_0700]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0700]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0700]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual('16.00vp');
      console.info("[ArkUI_Stage_Search_SearchButton_0700] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_0800
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as 0vp
     */
    it('[ArkUI_Stage_Search_SearchButton_0800]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0800] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0800]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = '0vp';
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_0800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_0800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0800]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0800]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0800]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("0.00vp");
      console.info("[ArkUI_Stage_Search_SearchButton_0800] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_0900
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as 800vp
     */
    it('[ArkUI_Stage_Search_SearchButton_0900]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_0900] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0900]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = '800vp';
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_0900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_0900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_0900]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_0900]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_0900]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("800.00vp");
      console.info("[ArkUI_Stage_Search_SearchButton_0900] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1000
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as -14vp
     */
    it('[ArkUI_Stage_Search_SearchButton_1000]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1000] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1000]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = '-14vp';
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1000]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1000]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1000]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("16.00fp");
      console.info("[ArkUI_Stage_Search_SearchButton_1000] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1100
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as null
     */
    it('[ArkUI_Stage_Search_SearchButton_1100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1100] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1100]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = null;
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1100]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1100]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1100]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("16.00fp");
      console.info("[ArkUI_Stage_Search_SearchButton_1100] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1200
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as undefined
     */
    it('[ArkUI_Stage_Search_SearchButton_1200]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1200] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1200]: " + JSON.stringify(newJson));

      let searchButtonFontSizeString = undefined;
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeString": searchButtonFontSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1200]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1200]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1200]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("16.00fp");
      console.info("[ArkUI_Stage_Search_SearchButton_1200] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1300
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Get the default value of searchButton.fontColor
     */
    it('[ArkUI_Stage_Search_SearchButton_1300]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1300] start");
      let newJson = getInspectorByKey('searchTestDefault');
      console.info("[ArkUI_Stage_Search_SearchButton_1300]: " + JSON.stringify(newJson));

      let obj = JSON.parse(newJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1300]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1300]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual("#FF007DFF");
      console.info("[ArkUI_Stage_Search_SearchButton_1300] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1400
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontColor as 0xff0000
     */
    it('[ArkUI_Stage_Search_SearchButton_1400]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1400] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_1400]: " + JSON.stringify(newJson));

      let searchButtonFontColorNumber = 0xff0000;
      try {
        var eventData = {
          data: {
            "searchButtonFontColorNumber": searchButtonFontColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_1400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1400]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1400]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual("#FFFF0000");
      console.info("[ArkUI_Stage_Search_SearchButton_1400] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1500
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontColor as Color.Blue
     */
    it('[ArkUI_Stage_Search_SearchButton_1500]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1500] start");
      let newJson = getInspectorByKey('searchTestColor');
      console.info("[ArkUI_Stage_Search_SearchButton_1500]: " + JSON.stringify(newJson));

      let searchButtonFontColorColor = Color.Blue;
      try {
        var eventData = {
          data: {
            "searchButtonFontColorColor": searchButtonFontColorColor
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestColor');
      console.info("[ArkUI_Stage_Search_SearchButton_1500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1500]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1500]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual("#FF0000FF");
      console.info("[ArkUI_Stage_Search_SearchButton_1500] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1600
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontColor as #ff9a35
     */
    it('[ArkUI_Stage_Search_SearchButton_1600]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1600] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1600]: " + JSON.stringify(newJson));

      let searchButtonFontColorString = '#ff9a35';
      try {
        var eventData = {
          data: {
            "searchButtonFontColorString": searchButtonFontColorString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1600]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1600]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1600]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual("#FFFF9A35");
      console.info("[ArkUI_Stage_Search_SearchButton_1600] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1700
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontColor as $r('sys.color.ohos_id_color_connected')
     */
    it('[ArkUI_Stage_Search_SearchButton_1700]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1700] start");
      let newJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchButton_1700]: " + JSON.stringify(newJson));

      let searchButtonFontColorResource = $r('sys.color.ohos_id_color_connected');
      try {
        var eventData = {
          data: {
            "searchButtonFontColorResource": searchButtonFontColorResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchButton_1700]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1700]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1700]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual('#FF00CB87');
      console.info("[ArkUI_Stage_Search_SearchButton_1700] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1800
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontColor as abcdefghijk
     */
    it('[ArkUI_Stage_Search_SearchButton_1800]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1800] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1800]: " + JSON.stringify(newJson));

      let searchButtonFontColorString = 'abcdefghijk';
      try {
        var eventData = {
          data: {
            "searchButtonFontColorString": searchButtonFontColorString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchButton_1800]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1800]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1800]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual("#FF007DFF");
      console.info("[ArkUI_Stage_Search_SearchButton_1800] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_1900
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontColor as null
     */
    it('[ArkUI_Stage_Search_SearchButton_1900]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_1900] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_1900]: " + JSON.stringify(newJson));

      let searchButtonFontColorNumber = null;
      try {
        var eventData = {
          data: {
            "searchButtonFontColorNumber": searchButtonFontColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_1900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_1900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_1900]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_1900]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_1900]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual("#FF007DFF");
      console.info("[ArkUI_Stage_Search_SearchButton_1900] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_2000
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontColor as undefined
     */
    it('[ArkUI_Stage_Search_SearchButton_2000]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_2000] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_2000]: " + JSON.stringify(newJson));

      let searchButtonFontColorNumber = undefined;
      try {
        var eventData = {
          data: {
            "searchButtonFontColorNumber": searchButtonFontColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_2000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_2000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_2000]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_2000]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_2000]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual("#FF007DFF");
      console.info("[ArkUI_Stage_Search_SearchButton_2000] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchButton_2100
     * @tc.name      Tests the searchButton property of the search component
     * @tc.desc      Set the value of searchButton.fontSize as 20
     *               Set the value of searchButton.fontColor as 0xff0000
     */
    it('[ArkUI_Stage_Search_SearchButton_2100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchButton_2100] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_2100]: " + JSON.stringify(newJson));

      let searchButtonFontSizeNumber = 20;
      let searchButtonFontColorNumber = 0xff0000;
      try {
        var eventData = {
          data: {
            "searchButtonFontSizeNumber": searchButtonFontSizeNumber,
            "searchButtonFontColorNumber": searchButtonFontColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchButton_2100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchButton_2100] change component data error: " + err.message);
      }
      await Utils.sleep(2100);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchButton_2100]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchButton_2100]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_2100]: " + JSON.stringify(obj.$attrs.searchButton.fontSize));
      expect(obj.$attrs.searchButton.fontSize).assertEqual("20.00fp");
      console.info("[ArkUI_Stage_Search_SearchButton_2100]: " + JSON.stringify(obj.$attrs.searchButton));
      console.info("[ArkUI_Stage_Search_SearchButton_2100]: " + JSON.stringify(obj.$attrs.searchButton.fontColor));
      expect(obj.$attrs.searchButton.fontColor).assertEqual("#FFFF0000");
      console.info("[ArkUI_Stage_Search_SearchButton_2100] end");
      done();
    });
  })
}