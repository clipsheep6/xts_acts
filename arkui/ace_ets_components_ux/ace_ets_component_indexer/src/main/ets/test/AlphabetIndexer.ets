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
// @ts-nocheck
import { describe, beforeEach, afterEach, it, expect } from '@ohos/hypium'
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils.ets';

let emitKey = "emitUserAgent";

export default function AlphabetIndexer() {
  describe('ActsAlphabetIndexerTest', function () {
    beforeEach(async function (done) {
      await Utils.sleep(2000);
      console.info("AlphabetIndexer beforeEach start");
      done();
    })

    afterEach(async function (done) {
      console.info("AlphabetIndexer afterEach start");
      try {
        var eventData = {
          data: {
            "popupSelectedColorStr": '#00FF00',
            "popupUnselectedColorStr": '#DA70D6',
            "popupItemBackgroundStr": '#FFD700',
            "popupItemFontSizeStr": '20',
            "popupItemFontWeightStr": '400',
            "popupSpaceStr": '120',
            "popupSelectedColor": Color.Orange,
            "popupUnselectedColor": Color.Green,
            "popupItemBackgroundColor": Color = Color.Pink,
            "popupSelectedColorNum": 0x00CED1,
            "popupUnselectedColorNum": 0xC0FF3E,
            "popupItemBackgroundNum": 0x8470FF,
            "popupItemFontSizeNum": 30,
            "popupItemFontWeightNum": FontWeight.Normal,
            "popupSpaceNum": 50,
            "popupSelectedColorRes": $r('app.color.popupSelectedColor'),
            "popupUnselectedColorRes": $r('app.color.popupUnselectedColor'),
            "popupItemBackgroundRes": $r('app.color.popupItemBackground'),
            "popupItemFontSizeRes": $r('app.string.fontSize'),
            "popupSpaceRes": $r('app.string.popupSpace'),
            "popupItemFontWeightFont": FontWeight.Bolder,
            "nullFlag1": false,
            "nullFlag2": false,
            "nullFlag3": false,
            "nullFlag4": false,
            "nullFlag5": false
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      done();
    })

    it('ArkUI_AlphabetIndexer_0100', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0100 start");
      let strJson = getInspectorByKey('alphabetIndexerTest1');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF182431");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FF182431");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFFFFF");
      expect(obj.$attrs.popupItemFontSize).assertEqual("24.00vp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Medium");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("-1.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_0200', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0200 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00CED1");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFC0FF3E");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FF8470FF");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00vp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Normal");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_0300', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0300 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00FF00");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFDA70D6");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFD700");
      expect(obj.$attrs.popupItemFontSize).assertEqual("20.00vp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("400");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual('120.00vp');
      done();
    });

    it('ArkUI_AlphabetIndexer_0400', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0400 start");
      let strJson = getInspectorByKey('alphabetIndexerTest4');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00C5CD");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFFFEC8B");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FF4EEE94");
      expect(obj.$attrs.popupItemFontSize).assertEqual("25.00px");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Bolder");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual('10.00vp');
      done();
    });

    it('ArkUI_AlphabetIndexer_0500', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0500 start");
      let strJson = getInspectorByKey('alphabetIndexerTest5');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FFFFA500");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FF008000");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFC0CB");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00vp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Normal");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual('50.00vp');
      done();
    });

    it('ArkUI_AlphabetIndexer_0600', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0600 start");
      let strJson = getInspectorByKey('alphabetIndexerTest6');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_0700', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0700 start");
      let strJson = getInspectorByKey('alphabetIndexerTest7');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Normal");
      done();
    });

    it('ArkUI_AlphabetIndexer_0800', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0800 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "nullFlag1": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_0800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_0800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF182431");
      done();
    });

    it('ArkUI_AlphabetIndexer_0900', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_0900 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "nullFlag2": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_0900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_0900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FF182431");
      done();
    });

    it('ArkUI_AlphabetIndexer_1000', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1000 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "nullFlag3": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFFFFF");
      done();
    });

    it('ArkUI_AlphabetIndexer_1100', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1100 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "nullFlag4": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemFontSize).assertEqual("24.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_1200', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1200 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "nullFlag4": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Medium");
      done();
    });

    it('ArkUI_AlphabetIndexer_1300', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1300 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "nullFlag5": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("-1.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_1400', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1400 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag1": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF182431");
      done();
    });

    it('ArkUI_AlphabetIndexer_1500', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1500 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag2": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FF182431");
      done();
    });

    it('ArkUI_AlphabetIndexer_1600', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1600 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag3": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFFFFF");
      done();
    });

    it('ArkUI_AlphabetIndexer_1700', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1700 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag4": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemFontSize).assertEqual("24.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_1800', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1800 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag4": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Medium");
      done();
    });

    it('ArkUI_AlphabetIndexer_1900', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_1900 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag5": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_1900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_1900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("-1.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_2000', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2000 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "nullFlag1": false,
            "nullFlag2": false,
            "nullFlag3": false,
            "nullFlag4": false,
            "nullFlag5": false,
            "popupSelectedColorNum": "null",
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual('#FF182431');
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFC0FF3E");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FF8470FF");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00vp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Normal");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_2100', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2100 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "popupUnselectedColorNum": "null",
            "popupSelectedColorNum": "#FF00CED1",
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupUnselectedColor).assertEqual('#FF182431');
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00CED1");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FF8470FF");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00vp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Normal");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_2200', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2200 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "popupItemBackgroundNum": "null",
            "popupUnselectedColorNum": "#FFC0FF3E",
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFFFFF");
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00CED1");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFC0FF3E");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00vp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Normal");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_2300', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2300 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "popupItemFontSizeNum": "null",
            "popupItemBackgroundNum": "#FF8470FF",
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemFontSize).assertEqual("24.00vp");
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00CED1");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFC0FF3E");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FF8470FF");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Normal");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_2400', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2400 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "popupItemFontWeightNum": "null",
            "popupItemFontSizeNum": "30",
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00CED1");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFC0FF3E");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FF8470FF");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00vp");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_2500', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2500 start");
      let strJson = getInspectorByKey('alphabetIndexerTest2');
      try {
        var eventData = {
          data: {
            "popupSpaceNum": -1,
            "popupItemFontWeightNum": "FontWeight.Normal",
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest2');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("-1.00vp");
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00CED1");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFC0FF3E");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FF8470FF");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00vp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Normal");
      done();
    });

    it('ArkUI_AlphabetIndexer_2600', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2600 start");
      let strJson = getInspectorByKey('alphabetIndexerTest4');
      try {
        var eventData = {
          data: {
            "nullFlag1": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest4');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF182431");
      done();
    });

    it('ArkUI_AlphabetIndexer_2700', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2700 start");
      let strJson = getInspectorByKey('alphabetIndexerTest4');
      try {
        var eventData = {
          data: {
            "nullFlag2": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest4');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FF182431");
      done();
    });

    it('ArkUI_AlphabetIndexer_2800', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2800 start");
      let strJson = getInspectorByKey('alphabetIndexerTest4');
      try {
        var eventData = {
          data: {
            "nullFlag3": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest4');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFFFFF");
      done();
    });

    it('ArkUI_AlphabetIndexer_2900', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_2900 start");
      let strJson = getInspectorByKey('alphabetIndexerTest4');
      try {
        var eventData = {
          data: {
            "nullFlag4": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_2900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_2900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest4');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemFontSize).assertEqual("24.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_3000', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3000 start");
      let strJson = getInspectorByKey('alphabetIndexerTest4');
      try {
        var eventData = {
          data: {
            "nullFlag4": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_3000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_3000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest4');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupItemFontWeight).assertEqual("FontWeight.Medium");
      done();
    });

    it('ArkUI_AlphabetIndexer_3100', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3100 start");
      let strJson = getInspectorByKey('alphabetIndexerTest4');
      try {
        var eventData = {
          data: {
            "nullFlag5": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_3100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_3100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest4');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("-1.00vp");
      done();
    });

    it('ArkUI_AlphabetIndexer_3200', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3200 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag1": false,
            "nullFlag2": false,
            "nullFlag3": false,
            "nullFlag4": false,
            "nullFlag5": false,
            "popupItemFontSizeStr": '30fp',
            "popupSpaceStr": '50fp',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_3200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_3200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00FF00");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFDA70D6");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFD700");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00fp");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("400");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00fp");
      done();
    });

    it('ArkUI_AlphabetIndexer_3300', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3300 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag4": false,
            "nullFlag5": false,
            "popupItemFontSizeStr": '30px',
            "popupSpaceStr": '50px',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_3300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_3300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00FF00");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFDA70D6");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFD700");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00px");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("400");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00px");
      done();
    });

    it('ArkUI_AlphabetIndexer_3400', 0, async function (done) {
      console.info("ArkUI_AlphabetIndexer_3400 start");
      let strJson = getInspectorByKey('alphabetIndexerTest3');
      try {
        var eventData = {
          data: {
            "nullFlag4": false,
            "nullFlag5": false,
            "popupItemFontSizeStr": '30lpx',
            "popupSpaceStr": '50lpx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_AlphabetIndexer_3400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_AlphabetIndexer_3400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let newJson = getInspectorByKey('alphabetIndexerTest3');
      let obj = JSON.parse(newJson);
      expect(obj.$attrs.popupSelectedColor).assertEqual("#FF00FF00");
      expect(obj.$attrs.popupUnselectedColor).assertEqual("#FFDA70D6");
      expect(obj.$attrs.popupItemBackground).assertEqual("#FFFFD700");
      expect(obj.$attrs.popupItemFontSize).assertEqual("30.00lpx");
      expect(obj.$attrs.popupItemFontWeight).assertEqual("400");
      expect(obj.$attrs.popupHorizontalSpace).assertEqual("50.00lpx");
      done();
    });
  })
}