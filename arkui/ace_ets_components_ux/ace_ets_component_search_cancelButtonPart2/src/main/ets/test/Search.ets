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
  describe('ActsAceSearchTestCancelButtonPart2', function () {
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
     * @tc.number    ArkUI_Stage_Search_CancelButton_1800
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Get the default value of cancelButton.icon.color
     */
    it('[ArkUI_Stage_Search_CancelButton_1800]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_1800] start");
      let newJson = getInspectorByKey('searchTestDefault');
      console.info("[ArkUI_Stage_Search_CancelButton_1800]: " + JSON.stringify(newJson));

      let obj = JSON.parse(newJson);
      console.info("[ArkUI_Stage_Search_CancelButton_1800]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_1800]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual("#99182431");
      console.info("[ArkUI_Stage_Search_CancelButton_1800] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_1900
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.color as 0x00ff00
     */
    it('[ArkUI_Stage_Search_CancelButton_1900]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_1900] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_1900]: " + JSON.stringify(newJson));

      let rightCancelIconColorNumber = 0x00ff00;
      try {
        var eventData = {
          data: {
            "rightCancelIconColorNumber": rightCancelIconColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_1900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_1900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_1900]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_1900]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_1900]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual("#FF00FF00");
      console.info("[ArkUI_Stage_Search_CancelButton_1900] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2000
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.color as Color.Red
     */
    it('[ArkUI_Stage_Search_CancelButton_2000]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2000] start");
      let newJson = getInspectorByKey('searchTestColor');
      console.info("[ArkUI_Stage_Search_CancelButton_2000]: " + JSON.stringify(newJson));

      let rightCancelIconColorColor = Color.Red;
      try {
        var eventData = {
          data: {
            "rightCancelIconColorColor": rightCancelIconColorColor
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestColor');
      console.info("[ArkUI_Stage_Search_CancelButton_2000]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2000]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2000]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual("#FFFF0000");
      console.info("[ArkUI_Stage_Search_CancelButton_2000] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2100
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.color as #ff9a35
     */
    it('[ArkUI_Stage_Search_CancelButton_2100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2100] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_CancelButton_2100]: " + JSON.stringify(newJson));

      let rightCancelIconColorString = '#ff9a35';
      try {
        var eventData = {
          data: {
            "rightCancelIconColorString": rightCancelIconColorString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_CancelButton_2100]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2100]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2100]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual("#FFFF9A35");
      console.info("[ArkUI_Stage_Search_CancelButton_2100] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2200
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.color as $r('sys.color.ohos_id_color_connected')
     */
    it('[ArkUI_Stage_Search_CancelButton_2200]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2200] start");
      let newJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_CancelButton_2200]: " + JSON.stringify(newJson));

      let rightCancelIconColorResource = $r('sys.color.ohos_id_color_connected');
      try {
        var eventData = {
          data: {
            "rightCancelIconColorResource": rightCancelIconColorResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_CancelButton_2200]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2200]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2200]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual('#FF00CB87');
      console.info("[ArkUI_Stage_Search_CancelButton_2200] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2300
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.color as abcdefghijk
     */
    it('[ArkUI_Stage_Search_CancelButton_2300]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2300] start");
      let newJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_CancelButton_2300]: " + JSON.stringify(newJson));

      let rightCancelIconColorString = 'abcdefghijk';
      try {
        var eventData = {
          data: {
            "rightCancelIconColorString": rightCancelIconColorString
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestString');
      console.info("[ArkUI_Stage_Search_CancelButton_2300]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2300]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2300]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual("#99182431");
      console.info("[ArkUI_Stage_Search_CancelButton_2300] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2400
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.color as null
     */
    it('[ArkUI_Stage_Search_CancelButton_2400]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2400] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2400]: " + JSON.stringify(newJson));

      let rightCancelIconColorNumber = null;
      try {
        var eventData = {
          data: {
            "rightCancelIconColorNumber": rightCancelIconColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2400]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2400]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual("#99182431");
      console.info("[ArkUI_Stage_Search_CancelButton_2400] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2500
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.color as undefined
     */
    it('[ArkUI_Stage_Search_CancelButton_2500]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2500] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2500]: " + JSON.stringify(newJson));

      let rightCancelIconColorNumber = undefined;
      try {
        var eventData = {
          data: {
            "rightCancelIconColorNumber": rightCancelIconColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2500]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2500]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual("#99182431");
      console.info("[ArkUI_Stage_Search_CancelButton_2500] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2600
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.size as 26
     *               Set the value of cancelButton.icon.color as 0x00ff00
     */
    it('[ArkUI_Stage_Search_CancelButton_2600]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2600] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2600]: " + JSON.stringify(newJson));

      let rightCancelIconSizeNumber = 26;
      let rightCancelIconColorNumber = 0x00ff00;
      try {
        var eventData = {
          data: {
            "rightCancelIconSizeNumber": rightCancelIconSizeNumber,
            "rightCancelIconColorNumber": rightCancelIconColorNumber
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2600] change component data error: " + err.message);
      }
      await Utils.sleep(2700);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2600]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2600]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2600]: " + JSON.stringify(obj.$attrs.cancelButton.icon.size));
      let result : number = 26;
      console.info("[ArkUI_Stage_Search_CancelButton_2600]: " + vp2px(result).toFixed(2));
      expect(obj.$attrs.cancelButton.icon.size).assertEqual(vp2px(result).toFixed(2) + "px");
      console.info("[ArkUI_Stage_Search_CancelButton_2600]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2600]: " + JSON.stringify(obj.$attrs.cancelButton.icon.color));
      expect(obj.$attrs.cancelButton.icon.color).assertEqual("#FF00FF00");
      console.info("[ArkUI_Stage_Search_CancelButton_2600] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2700
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Get the default value of cancelButton.icon.src
     */
    it('[ArkUI_Stage_Search_CancelButton_2700]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2700] start");
      let newJson = getInspectorByKey('searchTestDefault');
      console.info("[ArkUI_Stage_Search_CancelButton_2700]: " + JSON.stringify(newJson));

      let obj = JSON.parse(newJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2700]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2700]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual("resource:///ohos_close.svg");
      console.info("[ArkUI_Stage_Search_CancelButton_2700] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2800
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.src as common/icon2.svg
     */
    it('[ArkUI_Stage_Search_CancelButton_2800]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2800] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2800]: " + JSON.stringify(newJson));

      let rightIconSrcPath = 'common/icon2.svg';
      try {
        var eventData = {
          data: {
            "rightIconSrcPath": rightIconSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2800]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2800]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2800]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual('common/icon2.svg');
      console.info("[ArkUI_Stage_Search_CancelButton_2800] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_2900
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.src as common/icon2.jpg
     */
    it('[ArkUI_Stage_Search_CancelButton_2900]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_2900] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2900]: " + JSON.stringify(newJson));

      let rightIconSrcPath = 'common/icon2.jpg';
      try {
        var eventData = {
          data: {
            "rightIconSrcPath": rightIconSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_2900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_2900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_2900]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_2900]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_2900]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual('common/icon2.jpg');
      console.info("[ArkUI_Stage_Search_CancelButton_2900] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_3000
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.src as common/icon2.png
     */
    it('[ArkUI_Stage_Search_CancelButton_3000]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_3000] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3000]: " + JSON.stringify(newJson));

      let rightIconSrcPath = 'common/icon2.png';
      try {
        var eventData = {
          data: {
            "rightIconSrcPath": rightIconSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_3000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_3000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3000]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_3000]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_3000]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual('common/icon2.png');
      console.info("[ArkUI_Stage_Search_CancelButton_3000] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_3100
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.src as $r('sys.media.ohos_app_icon')
     */
    it('[ArkUI_Stage_Search_CancelButton_3100]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_3100] start");
      let newJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_CancelButton_3100]: " + JSON.stringify(newJson));

      let rightIconSrcPathResource = $r('sys.media.ohos_app_icon');
      try {
        var eventData = {
          data: {
            "rightIconSrcPathResource": rightIconSrcPathResource
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_3100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_3100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestResource');
      console.info("[ArkUI_Stage_Search_CancelButton_3100]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_3100]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_3100]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual('resource:///125829858.png');
      console.info("[ArkUI_Stage_Search_CancelButton_3100] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_3200
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.src as abc/def/ghi.jkl
     */
    it('[ArkUI_Stage_Search_CancelButton_3200]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_3200] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3200]: " + JSON.stringify(newJson));

      let rightIconSrcPath = 'abc/def/ghi.jkl';
      try {
        var eventData = {
          data: {
            "rightIconSrcPath": rightIconSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_3200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_3200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3200]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_3200]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_3200]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual('abc/def/ghi.jkl');
      console.info("[ArkUI_Stage_Search_CancelButton_3200] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_3300
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.src as ''
     */
    it('[ArkUI_Stage_Search_CancelButton_3300]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_3300] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3300]: " + JSON.stringify(newJson));

      let rightIconSrcPath = '';
      try {
        var eventData = {
          data: {
            "rightIconSrcPath": rightIconSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_3300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_3300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3300]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_3300]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_3300]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual('resource:///ohos_close.svg');
      console.info("[ArkUI_Stage_Search_CancelButton_3300] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_3400
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.src as null
     */
    it('[ArkUI_Stage_Search_CancelButton_3400]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_3400] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3400]: " + JSON.stringify(newJson));

      let rightIconSrcPath = null;
      try {
        var eventData = {
          data: {
            "rightIconSrcPath": rightIconSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_3400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_3400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_3400]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_3400]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual('resource:///ohos_close.svg');
      console.info("[ArkUI_Stage_Search_CancelButton_3400] end");
      done();
    });

    /**
     * @tc.number    ArkUI_Stage_Search_CancelButton_3500
     * @tc.name      Tests the cancelButton property of the search component
     * @tc.desc      Set the value of cancelButton.icon.src as undefined
     */
    it('[ArkUI_Stage_Search_CancelButton_3500]', 0, async function (done) {
      console.info("[ArkUI_Stage_Search_CancelButton_3500] start");
      let newJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3500]: " + JSON.stringify(newJson));

      let rightIconSrcPath = undefined;
      try {
        var eventData = {
          data: {
            "rightIconSrcPath": rightIconSrcPath
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_Stage_Search_CancelButton_3500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_Stage_Search_CancelButton_3500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJson = getInspectorByKey('searchTestNumber');
      console.info("[ArkUI_Stage_Search_CancelButton_3500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_Search_CancelButton_3500]: " + JSON.stringify(obj.$attrs.cancelButton));
      console.info("[ArkUI_Stage_Search_CancelButton_3500]: " + JSON.stringify(obj.$attrs.cancelButton.icon.src));
      expect(obj.$attrs.cancelButton.icon.src).assertEqual('resource:///ohos_close.svg');
      console.info("[ArkUI_Stage_Search_CancelButton_3500] end");
      done();
    });
  })
}