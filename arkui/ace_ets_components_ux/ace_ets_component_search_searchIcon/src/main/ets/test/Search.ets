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
  describe('ActsAceSearchTestSearchIcon', function () {
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
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0100
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Get the default value of searchIcon.size
     */
    it('[ArkUI_Stage_Search_SearchIcon_0100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0100] start");
      let newJson = getInspectorByKey('searchTestDefault');
      console.info("[ArkUI_Stage_Search_SearchIcon_0100]: " + JSON.stringify(newJson));

      let obj = JSON.parse(newJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0100]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0100]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      expect(obj.$attrs.searchIcon.size).assertEqual("24.00px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0100] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0200
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as 26
     */
    it('[ArkUI_Stage_Search_SearchIcon_0200]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0200] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_0200]: " + JSON.stringify(newJson));

      let leftSearchIconSizeNumber = 26;
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeNumber": leftSearchIconSizeNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_0200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_0200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_0200]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0200]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0200]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      let result : number = 26;
      console.info("[ArkUI_Stage_Search_SearchIcon_0200]: " + vp2px(result).toFixed(2));
      expect(obj.$attrs.searchIcon.size).assertEqual(vp2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0200] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0300
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as 50px
     */
    it('[ArkUI_Stage_Search_SearchIcon_0300]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0300] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_0300]: " + JSON.stringify(newJson));

      let leftSearchIconSizeString = '50px';
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeString": leftSearchIconSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_0300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_0300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_0300]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0300]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0300]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      expect(obj.$attrs.searchIcon.size).assertEqual("50.00px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0300] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0400
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as 50fp
     */
    it('[ArkUI_Stage_Search_SearchIcon_0400]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0400] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_0400]: " + JSON.stringify(newJson));

      let leftSearchIconSizeString = '50fp';
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeString": leftSearchIconSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_0400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_0400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_0400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0400]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0400]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      let result : number = 50;
      console.info("[ArkUI_Stage_Search_SearchIcon_0400]: " + fp2px(result).toFixed(2));
      expect(obj.$attrs.searchIcon.size).assertEqual(fp2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0400] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0500
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as 50lpx
     */
    it('[ArkUI_Stage_Search_SearchIcon_0500]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0500] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_0500]: " + JSON.stringify(newJson));

      let leftSearchIconSizeString = '50lpx';
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeString": leftSearchIconSizeString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_0500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_0500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_0500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0500]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0500]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      let result : number = 50;
      console.info("[ArkUI_Stage_Search_SearchIcon_0500]: " + lpx2px(result).toFixed(2));
      expect(obj.$attrs.searchIcon.size).assertEqual(lpx2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0500] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0600
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as $r('sys.float.ohos_id_text_paragraph_margin_m')
     */
    it('[ArkUI_Stage_Search_SearchIcon_0600]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0600] start");
      let newJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchIcon_0600]: " + JSON.stringify(newJson));

      let leftSearchIconSizeResource = $r('sys.float.ohos_id_text_paragraph_margin_m');
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeResource": leftSearchIconSizeResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_0600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_0600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchIcon_0600]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0600]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0600]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      let result : number = 16;
      console.info("[ArkUI_Stage_Search_SearchIcon_0600]: " + vp2px(result).toFixed(2));
      expect(obj.$attrs.searchIcon.size).assertEqual(vp2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0600] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0700
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as 40
     */
    it('[ArkUI_Stage_Search_SearchIcon_0700]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0700] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_0700]: " + JSON.stringify(newJson));

      let leftSearchIconSizeNumber = 40;
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeNumber": leftSearchIconSizeNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_0700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_0700] change component data error: " + err.message);
      }
      await Utils.sleep(5000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_0700]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0700]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0700]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      let result : number = 40;
      console.info("[ArkUI_Stage_Search_SearchIcon_0700]: " + vp2px(result).toFixed(2));
      expect(obj.$attrs.searchIcon.size).assertEqual(vp2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0700] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0800
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as 0
     */
    it('[ArkUI_Stage_Search_SearchIcon_0800]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0800] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_0800]: " + JSON.stringify(newJson));

      let leftSearchIconSizeNumber = 0;
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeNumber": leftSearchIconSizeNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_0800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_0800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_0800]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0800]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0800]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      let result : number = 0;
      console.info("[ArkUI_Stage_Search_SearchIcon_0800]: " + vp2px(result).toFixed(2));
      expect(obj.$attrs.searchIcon.size).assertEqual(vp2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0800] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_0900
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as -16
     */
    it('[ArkUI_Stage_Search_SearchIcon_0900]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_0900] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_0900]: " + JSON.stringify(newJson));

      let leftSearchIconSizeNumber = -16;
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeNumber": leftSearchIconSizeNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_0900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_0900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_0900]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_0900]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_0900]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      expect(obj.$attrs.searchIcon.size).assertEqual("24.00px");
      console.info("[ArkUI_Stage_Search_SearchIcon_0900] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1000
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as 10000
     */
    it('[ArkUI_Stage_Search_SearchIcon_1000]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1000] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1000]: " + JSON.stringify(newJson));

      let leftSearchIconSizeNumber = 10000;
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeNumber": leftSearchIconSizeNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1000]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1000]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1000]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      let result : number = 10000;
      console.info("[ArkUI_Stage_Search_SearchIcon_1000]: " + vp2px(result).toFixed(2));
      expect(obj.$attrs.searchIcon.size).assertEqual(vp2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_SearchIcon_1000] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1100
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as null
     */
    it('[ArkUI_Stage_Search_SearchIcon_1100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1100] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1100]: " + JSON.stringify(newJson));

      let leftSearchIconSizeNumber = null;
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeNumber": leftSearchIconSizeNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1100]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1100]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1100]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      expect(obj.$attrs.searchIcon.size).assertEqual("24.00px");
      console.info("[ArkUI_Stage_Search_SearchIcon_1100] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1200
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as undefined
     */
    it('[ArkUI_Stage_Search_SearchIcon_1200]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1200] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1200]: " + JSON.stringify(newJson));

      let leftSearchIconSizeNumber = undefined;
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeNumber": leftSearchIconSizeNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1200]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1200]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1200]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      expect(obj.$attrs.searchIcon.size).assertEqual("24.00px");
      console.info("[ArkUI_Stage_Search_SearchIcon_1200] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1300
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Get the default value of searchIcon.color
     */
    it('[ArkUI_Stage_Search_SearchIcon_1300]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1300] start");
      let newJson = getInspectorByKey('searchTestDefault');
      console.info("[ArkUI_Stage_Search_SearchIcon_1300]: " + JSON.stringify(newJson));

      let obj = JSON.parse(newJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1300]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1300]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual("#99182431");
      console.info("[ArkUI_Stage_Search_SearchIcon_1300] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1400
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.color as 0x00ff00
     */
    it('[ArkUI_Stage_Search_SearchIcon_1400]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1400] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1400]: " + JSON.stringify(newJson));

      let leftSearchIconColorNumber = 0x00ff00;
      try {
        var eventData = {
          data: {
            "leftSearchIconColorNumber": leftSearchIconColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1400]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1400]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual("#FF00FF00");
      console.info("[ArkUI_Stage_Search_SearchIcon_1400] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1500
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.color as Color.Red
     */
    it('[ArkUI_Stage_Search_SearchIcon_1500]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1500] start");
      let newJson = getInspectorByKey('searchTestColor');
      console.info("[ArkUI_Stage_Search_SearchIcon_1500]: " + JSON.stringify(newJson));

      let leftSearchIconColorColor = Color.Red;
      try {
        var eventData = {
          data: {
            "leftSearchIconColorColor": leftSearchIconColorColor
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestColor');
      console.info("[ArkUI_Stage_Search_SearchIcon_1500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1500]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1500]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual("#FFFF0000");
      console.info("[ArkUI_Stage_Search_SearchIcon_1500] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1600
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.color as #ff9a35
     */
    it('[ArkUI_Stage_Search_SearchIcon_1600]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1600] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_1600]: " + JSON.stringify(newJson));

      let leftSearchIconColorString = '#ff9a35';
      try {
        var eventData = {
          data: {
            "leftSearchIconColorString": leftSearchIconColorString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_1600]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1600]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1600]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual("#FFFF9A35");
      console.info("[ArkUI_Stage_Search_SearchIcon_1600] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1700
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.color as $r('sys.color.ohos_id_color_connected')
     */
    it('[ArkUI_Stage_Search_SearchIcon_1700]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1700] start");
      let newJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchIcon_1700]: " + JSON.stringify(newJson));

      let leftSearchIconColorResource = $r('sys.color.ohos_id_color_connected');
      try {
        var eventData = {
          data: {
            "leftSearchIconColorResource": leftSearchIconColorResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchIcon_1700]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1700]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1700]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual('#FF00CB87');
      console.info("[ArkUI_Stage_Search_SearchIcon_1700] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1800
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.color as abcdefghijk
     */
    it('[ArkUI_Stage_Search_SearchIcon_1800]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1800] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_1800]: " + JSON.stringify(newJson));

      let leftSearchIconColorString = 'abcdefghijk';
      try {
        var eventData = {
          data: {
            "leftSearchIconColorString": leftSearchIconColorString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_SearchIcon_1800]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1800]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1800]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual("#99182431");
      console.info("[ArkUI_Stage_Search_SearchIcon_1800] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_1900
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.color as null
     */
    it('[ArkUI_Stage_Search_SearchIcon_1900]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_1900] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1900]: " + JSON.stringify(newJson));

      let leftSearchIconColorNumber = null;
      try {
        var eventData = {
          data: {
            "leftSearchIconColorNumber": leftSearchIconColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_1900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_1900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_1900]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_1900]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_1900]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual("#99182431");
      console.info("[ArkUI_Stage_Search_SearchIcon_1900] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2000
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.color as undefined
     */
    it('[ArkUI_Stage_Search_SearchIcon_2000]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2000] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2000]: " + JSON.stringify(newJson));

      let leftSearchIconColorNumber = undefined;
      try {
        var eventData = {
          data: {
            "leftSearchIconColorNumber": leftSearchIconColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2000]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2000]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2000]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual("#99182431");
      console.info("[ArkUI_Stage_Search_SearchIcon_2000] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2100
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.size as 26
     *               Set the value of searchIcon.color as 0x00ff00
     */
    it('[ArkUI_Stage_Search_SearchIcon_2100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2100] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2100]: " + JSON.stringify(newJson));

      let leftSearchIconSizeNumber = 26;
      let leftSearchIconColorNumber = 0x00ff00;
      try {
        var eventData = {
          data: {
            "leftSearchIconSizeNumber": leftSearchIconSizeNumber,
            "leftSearchIconColorNumber": leftSearchIconColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2100] change component data error: " + err.message);
      }
      await Utils.sleep(2100);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2100]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2100]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2100]: " + JSON.stringify(obj.$attrs.searchIcon.size));
      let result : number = 26;
      console.info("[ArkUI_Stage_Search_SearchIcon_2100]: " + vp2px(result).toFixed(2));
      expect(obj.$attrs.searchIcon.size).assertEqual(vp2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_SearchIcon_2100]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2100]: " + JSON.stringify(obj.$attrs.searchIcon.color));
      expect(obj.$attrs.searchIcon.color).assertEqual("#FF00FF00");
      console.info("[ArkUI_Stage_Search_SearchIcon_2100] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2200
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Get the default value of searchIcon.src
     */
    it('[ArkUI_Stage_Search_SearchIcon_2200]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2200] start");
      let newJson = getInspectorByKey('searchTestDefault');
      console.info("[ArkUI_Stage_Search_SearchIcon_2200]: " + JSON.stringify(newJson));

      let obj = JSON.parse(newJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2200]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2200]: " + JSON.stringify(obj.$attrs.searchIcon.src));
        expect(obj.$attrs.searchIcon.src).assertEqual("resource:///ohos_search.svg");
      console.info("[ArkUI_Stage_Search_SearchIcon_2200] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2300
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.src as common/icon2.svg
     */
    it('[ArkUI_Stage_Search_SearchIcon_2300]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2300] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2300]: " + JSON.stringify(newJson));

      let searchSrcPath = 'common/icon2.svg';
      try {
        var eventData = {
          data: {
            "searchSrcPath": searchSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2300]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2300]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2300]: " + JSON.stringify(obj.$attrs.searchIcon.src));
      expect(obj.$attrs.searchIcon.src).assertEqual('common/icon2.svg');
      console.info("[ArkUI_Stage_Search_SearchIcon_2300] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2400
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.src as common/icon2.jpg
     */
    it('[ArkUI_Stage_Search_SearchIcon_2400]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2400] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2400]: " + JSON.stringify(newJson));

      let searchSrcPath = 'common/icon2.jpg';
      try {
        var eventData = {
          data: {
            "searchSrcPath": searchSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2400]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2400]: " + JSON.stringify(obj.$attrs.searchIcon.src));
      expect(obj.$attrs.searchIcon.src).assertEqual('common/icon2.jpg');
      console.info("[ArkUI_Stage_Search_SearchIcon_2400] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2500
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.src as common/icon2.png
     */
    it('[ArkUI_Stage_Search_SearchIcon_2500]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2500] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2500]: " + JSON.stringify(newJson));

      let searchSrcPath = 'common/icon2.png';
      try {
        var eventData = {
          data: {
            "searchSrcPath": searchSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2500]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2500]: " + JSON.stringify(obj.$attrs.searchIcon.src));
      expect(obj.$attrs.searchIcon.src).assertEqual('common/icon2.png');
      console.info("[ArkUI_Stage_Search_SearchIcon_2500] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2600
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.src as $r('sys.media.ohos_app_icon')
     */
    it('[ArkUI_Stage_Search_SearchIcon_2600]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2600] start");
      let newJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchIcon_2600]: " + JSON.stringify(newJson));

      let searchSrcPathResource = $r('sys.media.ohos_app_icon');
      try {
        var eventData = {
          data: {
            "searchSrcPathResource": searchSrcPathResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_SearchIcon_2600]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2600]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2600]: " + JSON.stringify(obj.$attrs.searchIcon.src));
      expect(obj.$attrs.searchIcon.src).assertEqual('resource:///125829858.png');
      console.info("[ArkUI_Stage_Search_SearchIcon_2600] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2700
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.src as abc/def/ghi.jkl
     */
    it('[ArkUI_Stage_Search_SearchIcon_2700]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2700] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2700]: " + JSON.stringify(newJson));

      let searchSrcPath = 'abc/def/ghi.jkl';
      try {
        var eventData = {
          data: {
            "searchSrcPath": searchSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2700]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2700]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2700]: " + JSON.stringify(obj.$attrs.searchIcon.src));
      expect(obj.$attrs.searchIcon.src).assertEqual('abc/def/ghi.jkl');
      console.info("[ArkUI_Stage_Search_SearchIcon_2700] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2800
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.src as ''
     */
    it('[ArkUI_Stage_Search_SearchIcon_2800]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2800] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2800]: " + JSON.stringify(newJson));

      let searchSrcPath = '';
      try {
        var eventData = {
          data: {
            "searchSrcPath": searchSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2800]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2800]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2800]: " + JSON.stringify(obj.$attrs.searchIcon.src));
      expect(obj.$attrs.searchIcon.src).assertEqual('resource:///ohos_search.svg');
      console.info("[ArkUI_Stage_Search_SearchIcon_2800] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_2900
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.src as null
     */
    it('[ArkUI_Stage_Search_SearchIcon_2900]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_2900] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2900]: " + JSON.stringify(newJson));

      let searchSrcPath = null;
      try {
        var eventData = {
          data: {
            "searchSrcPath": searchSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_2900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_2900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_2900]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_2900]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_2900]: " + JSON.stringify(obj.$attrs.searchIcon.src));
      expect(obj.$attrs.searchIcon.src).assertEqual('resource:///ohos_search.svg');
      console.info("[ArkUI_Stage_Search_SearchIcon_2900] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_SearchIcon_3000
     * @tc.name      Tests the searchIcon property of the search component
     * @tc.desc      Set the value of searchIcon.src as undefined
     */
    it('[ArkUI_Stage_Search_SearchIcon_3000]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_SearchIcon_3000] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_3000]: " + JSON.stringify(newJson));

      let searchSrcPath = undefined;
      try {
        var eventData = {
          data: {
            "searchSrcPath": searchSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_SearchIcon_3000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_SearchIcon_3000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_SearchIcon_3000]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_SearchIcon_3000]: " + JSON.stringify(obj.$attrs.searchIcon));
      console.info("[ArkUI_Stage_Search_SearchIcon_3000]: " + JSON.stringify(obj.$attrs.searchIcon.src));
      expect(obj.$attrs.searchIcon.src).assertEqual('resource:///ohos_search.svg');
      console.info("[ArkUI_Stage_Search_SearchIcon_3000] end");
      done();
    });
  })
}