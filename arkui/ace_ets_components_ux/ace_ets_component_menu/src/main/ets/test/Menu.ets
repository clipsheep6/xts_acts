/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { afterEach, beforeEach, describe, expect, it } from '@ohos/hypium'
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils.ets';
import router from '@system.router';

let emitKey = "emitUserAgent";

export default function Menu() {
  describe('ActsAceMenuTest', function () {
    beforeEach(async function (done) {
      await Utils.sleep(2000);
      console.info("Menu beforeEach start");
      let options = {
        uri: 'pages/Index',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get bindMenu state pages:" + JSON.stringify(pages));
        if (!("Index" == pages.name)) {
          console.info("get bindMenu state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push bindMenu page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push bindMenu page error:" + err);
      }
      let callback = (indexEvent) => {
        console.info("Cancel button get state result is: " + JSON.stringify(indexEvent));
        expect(indexEvent.data.ACTION).assertEqual(true);
        done();
      }
      let indexEvent = {
        eventId: 64,
        priority: events_emitter.EventPriority.LOW
      }
      try {
        events_emitter.on(indexEvent, callback);
      } catch (err) {
        console.info("Cancel button on events_emitter err : " + JSON.stringify(err));
      }
      console.info("Cancel button click result is: " + JSON.stringify(sendEventByKey('cancelShowMenu', 10, "")));
      await Utils.sleep(1000);
      done();
    })

    afterEach(async function (done) {
      console.info("Menu afterEach start");
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26fp',
            "menuFontColorStr": '#FF000000',
            "menuFontWeightStr": '500',
            "startIconStr": 'app.media.icon',
            "endIconStr": 'app.media.icon',
            "selectIconStr": 'app.media.icon',
            "nullFlag": false,
            "fontColor": Color.Red,
            "menuFontSizeNum": 26,
            "menuFontColorNum": 0x000000,
            "menuFontWeightNum": 500,
            "menuFontSizeRes": $r('app.string.Divider_fontSize'),
            "menuFontColorRes": $r('app.color.Menu_Divider_color'),
            "menuFontWeightRes": FontWeight.Lighter,
            "startIconRes": $r('app.media.icon'),
            "endIconRes": $r('app.media.icon'),
            "selectIconRes": $r('app.media.icon'),
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuContainer_Divider] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuContainer_Divider] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      done();
    })

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0100
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Do not set menu font properties
     */
    it('ArkUI_MenuFont_Divider_0100', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0100 START');
      console.info("ArkUI_MenuFont_Divider_0100 text click result is: "
        + JSON.stringify(sendEventByKey('defaultMenu', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("16.00fp");
      expect(obj.$attrs.fontColor).assertEqual("#E5182431");
      expect(obj.$attrs.font.weight).assertEqual("FontWeight.Regular");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0200
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Normal values of menu font attributes
     */
    it('ArkUI_MenuFont_Divider_0200', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0200 START');
      console.info("ArkUI_MenuFont_Divider_0200 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("26.00fp");
      expect(obj.$attrs.fontColor).assertEqual("#FF000000");
      expect(obj.$attrs.font.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0300
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Normal values of menu font attributes
     */
    it('ArkUI_MenuFont_Divider_0300', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0300 START');
      console.info("ArkUI_MenuFont_Divider_0300 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontNum', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontNumTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("26.00fp");
      expect(obj.$attrs.fontColor).assertEqual("#FF000000");
      expect(obj.$attrs.font.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0400
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Normal values of menu font attributes
     */
    it('ArkUI_MenuFont_Divider_0400', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0400 START');
      console.info("ArkUI_MenuFont_Divider_0400 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontRes', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontResTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("26.00fp");
      expect(obj.$attrs.fontColor).assertEqual("#FF000000");
      expect(obj.$attrs.font.weight).assertEqual("FontWeight.Lighter");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0500
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Normal values of menu font attributes
     */
    it('ArkUI_MenuFont_Divider_0500', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0500 START');
      console.info("ArkUI_MenuFont_Divider_0500 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontColor', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontColorTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("26.00fp");
      expect(obj.$attrs.fontColor).assertEqual("#FFFF0000");
      expect(obj.$attrs.font.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0600
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Menu font attribute outlier
     */
    it('ArkUI_MenuFont_Divider_0600', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0600 START');
      console.info("ArkUI_MenuFont_Divider_0600 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "nullFlag": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuFont_Divider_0600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuFont_Divider_0600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("16.00fp");
      expect(obj.$attrs.fontColor).assertEqual("#E5182431");
      expect(obj.$attrs.font.weight).assertEqual("FontWeight.Normal");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0700
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Menu font attribute outlier
     */
    it('ArkUI_MenuFont_Divider_0700', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0700 START');
      console.info("ArkUI_MenuFont_Divider_0700 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontNum', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeNum": -1,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuFont_Divider_0700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuFont_Divider_0700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontNumTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("16.00fp");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0800
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Menu font attribute outlier
     */
    it('ArkUI_MenuFont_Divider_0800', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0800 START');
      console.info("ArkUI_MenuFont_Divider_0800 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontColorStr": 'qazwsx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuFont_Divider_0800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuFont_Divider_0800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.fontColor).assertEqual("#E5182431");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_0900
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Menu font properties support "vp" unit settings
     */
    it('ArkUI_MenuFont_Divider_0900', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_0900 START');
      console.info("ArkUI_MenuFont_Divider_0900 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26vp',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuFont_Divider_0900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuFont_Divider_0900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("26.00vp");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_1000
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Menu font properties support "px" unit settings
     */
    it('ArkUI_MenuFont_Divider_1000', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_1000 START');
      console.info("ArkUI_MenuFont_Divider_1000 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26px',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuFont_Divider_1000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuFont_Divider_1000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("26.00px");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuFont_Divider_1100
     * @tc.name      Verify Menu font attribute
     * @tc.desc      Menu font properties support "lpx" unit settings
     */
    it('ArkUI_MenuFont_Divider_1100', 0, async function (done) {
      console.info('ArkUI_MenuFont_Divider_1100 START');
      console.info("ArkUI_MenuFont_Divider_1100 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26lpx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuFont_Divider_1100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuFont_Divider_1100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.font.size).assertEqual("26.00lpx");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0100
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      Do not set MenuItem font properties
     */
    it('ArkUI_MenuItemFont_Divider_0100', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0100 START');
      console.info("ArkUI_MenuItemFont_Divider_0100 text click result is: "
        + JSON.stringify(sendEventByKey('defaultMenu', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("16.00fp");
      expect(obj.$attrs.contentFontColor).assertEqual("#E5182431");
      expect(obj.$attrs.contentFont.weight).assertEqual("FontWeight.Regular");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0200
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      Normal values of MenuItem font attributes
     */
    it('ArkUI_MenuItemFont_Divider_0200', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0200 START');
      console.info("ArkUI_MenuItemFont_Divider_0200 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("26.00fp");
      expect(obj.$attrs.contentFontColor).assertEqual("#FF000000");
      expect(obj.$attrs.contentFont.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0300
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      Normal values of MenuItem font attributes
     */
    it('ArkUI_MenuItemFont_Divider_0300', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0300 START');
      console.info("ArkUI_MenuItemFont_Divider_0300 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontNum', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontNumTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("26.00fp");
      expect(obj.$attrs.contentFontColor).assertEqual("#FF000000");
      expect(obj.$attrs.contentFont.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0400
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      Normal values of MenuItem font attributes
     */
    it('ArkUI_MenuItemFont_Divider_0400', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0400 START');
      console.info("ArkUI_MenuItemFont_Divider_0400 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontRes', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontResTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("26.00fp");
      expect(obj.$attrs.contentFontColor).assertEqual("#FF000000");
      expect(obj.$attrs.contentFont.weight).assertEqual("FontWeight.Lighter");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0500
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      Normal values of MenuItem font attributes
     */
    it('ArkUI_MenuItemFont_Divider_0500', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0500 START');
      console.info("ArkUI_MenuItemFont_Divider_0500 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontColor', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontColorTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("26.00fp");
      expect(obj.$attrs.contentFontColor).assertEqual("#FFFF0000");
      expect(obj.$attrs.contentFont.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0600
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      MenuItem font attribute outlier
     */
    it('ArkUI_MenuItemFont_Divider_0600', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0600 START');
      console.info("ArkUI_MenuItemFont_Divider_0600 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "nullFlag": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuItemFont_Divider_0600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuItemFont_Divider_0600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("16.00fp");
      expect(obj.$attrs.contentFontColor).assertEqual("#E5182431");
      expect(obj.$attrs.contentFont.weight).assertEqual("FontWeight.Normal");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0700
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      MenuItem font attribute outlier
     */
    it('ArkUI_MenuItemFont_Divider_0700', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0700 START');
      console.info("ArkUI_MenuItemFont_Divider_0700 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontNum', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeNum": -1,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuItemFont_Divider_0700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuItemFont_Divider_0700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontNumTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("16.00fp");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0800
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      MenuItem font attribute outlier
     */
    it('ArkUI_MenuItemFont_Divider_0800', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0800 START');
      console.info("ArkUI_MenuItemFont_Divider_0800 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontColorStr": 'qazwsx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuItemFont_Divider_0800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuItemFont_Divider_0800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFontColor).assertEqual("#E5182431");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_0900
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      MenuItem font properties support "vp" unit settings
     */
    it('ArkUI_MenuItemFont_Divider_0900', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_0900 START');
      console.info("ArkUI_MenuItemFont_Divider_0900 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26vp',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuItemFont_Divider_0900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuItemFont_Divider_0900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("26.00vp");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_1000
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      MenuItem font properties support "px" unit settings
     */
    it('ArkUI_MenuItemFont_Divider_1000', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_1000 START');
      console.info("ArkUI_MenuItemFont_Divider_1000 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26px',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuItemFont_Divider_1000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuItemFont_Divider_1000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("26.00px");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuItemFont_Divider_1100
     * @tc.name      Verify MenuItem font attribute
     * @tc.desc      MenuItem font properties support "lpx" unit settings
     */
    it('ArkUI_MenuItemFont_Divider_1100', 0, async function (done) {
      console.info('ArkUI_MenuItemFont_Divider_1100 START');
      console.info("ArkUI_MenuItemFont_Divider_1100 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26lpx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuItemFont_Divider_1100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuItemFont_Divider_1100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuItemFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.contentFont.size).assertEqual("26.00lpx");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0100
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      Do not set MenuLabel font properties
     */
    it('ArkUI_MenuLabelFont_Divider_0100', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0100 START');
      console.info("ArkUI_MenuLabelFont_Divider_0100 text click result is: "
        + JSON.stringify(sendEventByKey('defaultMenu', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("16.00fp");
      expect(obj.$attrs.labelFontColor).assertEqual("#99182431");
      expect(obj.$attrs.labelFont.weight).assertEqual("FontWeight.Regular");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0200
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      Normal values of MenuLabel font attributes
     */
    it('ArkUI_MenuLabelFont_Divider_0200', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0200 START');
      console.info("ArkUI_MenuLabelFont_Divider_0200 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("26.00fp");
      expect(obj.$attrs.labelFontColor).assertEqual("#FF000000");
      expect(obj.$attrs.labelFont.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0300
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      Normal values of MenuLabel font attributes
     */
    it('ArkUI_MenuLabelFont_Divider_0300', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0300 START');
      console.info("ArkUI_MenuLabelFont_Divider_0300 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontNum', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontNumTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("26.00fp");
      expect(obj.$attrs.labelFontColor).assertEqual("#FF000000");
      expect(obj.$attrs.labelFont.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0400
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      Normal values of MenuLabel font attributes
     */
    it('ArkUI_MenuLabelFont_Divider_0400', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0400 START');
      console.info("ArkUI_MenuLabelFont_Divider_0400 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontRes', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontResTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("26.00fp");
      expect(obj.$attrs.labelFontColor).assertEqual("#FF000000");
      expect(obj.$attrs.labelFont.weight).assertEqual("FontWeight.Lighter");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0500
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      Normal values of MenuLabel font attributes
     */
    it('ArkUI_MenuLabelFont_Divider_0500', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0500 START');
      console.info("ArkUI_MenuLabelFont_Divider_0500 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontColor', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontColorTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("26.00fp");
      expect(obj.$attrs.labelFontColor).assertEqual("#FFFF0000");
      expect(obj.$attrs.labelFont.weight).assertEqual("500");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0600
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      MenuLabel font attribute outlier
     */
    it('ArkUI_MenuLabelFont_Divider_0600', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0600 START');
      console.info("ArkUI_MenuLabelFont_Divider_0600 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "nullFlag": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuLabelFont_Divider_0600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuLabelFont_Divider_0600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("16.00fp");
      expect(obj.$attrs.labelFontColor).assertEqual("#99182431");
      expect(obj.$attrs.labelFont.weight).assertEqual("FontWeight.Normal");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0700
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      MenuLabel font attribute outlier
     */
    it('ArkUI_MenuLabelFont_Divider_0700', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0700 START');
      console.info("ArkUI_MenuLabelFont_Divider_0700 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontNum', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeNum": -1,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuLabelFont_Divider_0700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuLabelFont_Divider_0700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontNumTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("16.00fp");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0800
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      MenuLabel font attribute outlier
     */
    it('ArkUI_MenuLabelFont_Divider_0800', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0800 START');
      console.info("ArkUI_MenuLabelFont_Divider_0800 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontColorStr": 'qazwsx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuLabelFont_Divider_0800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuLabelFont_Divider_0800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFontColor).assertEqual("#99182431");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_0900
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      MenuLabel font properties support "vp" unit settings
     */
    it('ArkUI_MenuLabelFont_Divider_0900', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_0900 START');
      console.info("ArkUI_MenuLabelFont_Divider_0900 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26vp',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuLabelFont_Divider_0900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuLabelFont_Divider_0900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("26.00vp");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_1000
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      MenuLabel font properties support "px" unit settings
     */
    it('ArkUI_MenuLabelFont_Divider_1000', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_1000 START');
      console.info("ArkUI_MenuLabelFont_Divider_1000 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26px',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuLabelFont_Divider_1000] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuLabelFont_Divider_1000] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("26.00px");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuLabelFont_Divider_1100
     * @tc.name      Verify MenuLabel font attribute
     * @tc.desc      MenuLabel font properties support "lpx" unit settings
     */
    it('ArkUI_MenuLabelFont_Divider_1100', 0, async function (done) {
      console.info('ArkUI_MenuLabelFont_Divider_1100 START');
      console.info("ArkUI_MenuLabelFont_Divider_1100 text click result is: "
        + JSON.stringify(sendEventByKey('menuFontStr', 10, "")));
      try {
        var eventData = {
          data: {
            "menuFontSizeStr": '26lpx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuLabelFont_Divider_1100] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuLabelFont_Divider_1100] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuLabelFontStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.labelFont.size).assertEqual("26.00lpx");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuStartIcon_Divider_0100
     * @tc.name      Verify MenuStart icon attribute
     * @tc.desc      Do not set MenuStart icon properties
     */
    it('ArkUI_MenuStartIcon_Divider_0100', 0, async function (done) {
      console.info('ArkUI_MenuStartIcon_Divider_0100 START');
      console.info("ArkUI_MenuStartIcon_Divider_0100 text click result is: "
        + JSON.stringify(sendEventByKey('defaultMenu', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuStartIconTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.startIcon).assertEqual("");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuStartIcon_Divider_0200
     * @tc.name      Verify MenuStart icon attribute
     * @tc.desc      Set the MenuStart icon property to normal values
     */
    it('ArkUI_MenuStartIcon_Divider_0200', 0, async function (done) {
      console.info('ArkUI_MenuStartIcon_Divider_0200 START');
      console.info("ArkUI_MenuStartIcon_Divider_0200 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconStr', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuStartIconStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.startIcon).assertEqual("app.media.icon");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuStartIcon_Divider_0300
     * @tc.name      Verify MenuStart icon attribute
     * @tc.desc      Set the MenuStart icon property to normal values
     */
    it('ArkUI_MenuStartIcon_Divider_0300', 0, async function (done) {
      console.info('ArkUI_MenuStartIcon_Divider_0300 START');
      console.info("ArkUI_MenuStartIcon_Divider_0300 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconRes', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuStartIconResTest');
      let obj = JSON.parse(strJson);
      var str = obj.$attrs.startIcon;
      var iconRes = str.substr(str.lastIndexOf(".") + 1, 3);
      expect(iconRes).assertEqual("png");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuStartIcon_Divider_0400
     * @tc.name      Verify MenuStart icon attribute
     * @tc.desc      Set the MenuStart icon attribute to outlier
     */
    it('ArkUI_MenuStartIcon_Divider_0400', 0, async function (done) {
      console.info('ArkUI_MenuStartIcon_Divider_0400 START');
      console.info("ArkUI_MenuStartIcon_Divider_0400 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconRes', 10, "")));
      try {
        var eventData = {
          data: {
            "nullFlag": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuStartIcon_Divider_0400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuStartIcon_Divider_0400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuStartIconResTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.startIcon).assertEqual("");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuStartIcon_Divider_0500
     * @tc.name      Verify MenuStart icon attribute
     * @tc.desc      Set the MenuStart icon attribute to outlier
     */
    it('ArkUI_MenuStartIcon_Divider_0500', 0, async function (done) {
      console.info('ArkUI_MenuStartIcon_Divider_0500 START');
      console.info("ArkUI_MenuStartIcon_Divider_0500 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconStr', 10, "")));
      try {
        var eventData = {
          data: {
            "startIconStr": 'qazwsx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuStartIcon_Divider_0500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuStartIcon_Divider_0500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuStartIconStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.startIcon).assertEqual("qazwsx");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuEndIcon_Divider_0100
     * @tc.name      Verify MenuEnd icon attribute
     * @tc.desc      Do not set MenuEnd icon properties
     */
    it('ArkUI_MenuEndIcon_Divider_0100', 0, async function (done) {
      console.info('ArkUI_MenuEndIcon_Divider_0100 START');
      console.info("ArkUI_MenuEndIcon_Divider_0100 text click result is: "
        + JSON.stringify(sendEventByKey('defaultMenu', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuEndIconTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.endIcon).assertEqual("");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuEndIcon_Divider_0200
     * @tc.name      Verify MenuEnd icon attribute
     * @tc.desc      Set the MenuEnd icon property to normal values
     */
    it('ArkUI_MenuEndIcon_Divider_0200', 0, async function (done) {
      console.info('ArkUI_MenuEndIcon_Divider_0200 START');
      console.info("ArkUI_MenuEndIcon_Divider_0200 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconStr', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuEndIconStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.endIcon).assertEqual("app.media.icon");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuEndIcon_Divider_0300
     * @tc.name      Verify MenuEnd icon attribute
     * @tc.desc      Set the MenuEnd icon property to normal values
     */
    it('ArkUI_MenuEndIcon_Divider_0300', 0, async function (done) {
      console.info('ArkUI_MenuEndIcon_Divider_0300 START');
      console.info("ArkUI_MenuEndIcon_Divider_0300 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconRes', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuEndIconResTest');
      let obj = JSON.parse(strJson);
      var str = obj.$attrs.endIcon;
      var iconRes = str.substr(str.lastIndexOf(".") + 1, 3);
      expect(iconRes).assertEqual("png");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuEndIcon_Divider_0400
     * @tc.name      Verify MenuEnd icon attribute
     * @tc.desc      Set the MenuEnd icon attribute to outlier
     */
    it('ArkUI_MenuEndIcon_Divider_0400', 0, async function (done) {
      console.info('ArkUI_MenuEndIcon_Divider_0400 START');
      console.info("ArkUI_MenuEndIcon_Divider_0400 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconRes', 10, "")));
      try {
        var eventData = {
          data: {
            "nullFlag": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuEndIcon_Divider_0400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuEndIcon_Divider_0400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuEndIconResTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.endIcon).assertEqual("");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuEndIcon_Divider_0500
     * @tc.name      Verify MenuEnd icon attribute
     * @tc.desc      Set the MenuEnd icon attribute to outlier
     */
    it('ArkUI_MenuEndIcon_Divider_0500', 0, async function (done) {
      console.info('ArkUI_MenuEndIcon_Divider_0500 START');
      console.info("ArkUI_MenuEndIcon_Divider_0500 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconStr', 10, "")));
      try {
        var eventData = {
          data: {
            "endIconStr": 'qazwsx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuEndIcon_Divider_0500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuEndIcon_Divider_0500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuEndIconStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.endIcon).assertEqual("qazwsx");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuSelectIcon_Divider_0100
     * @tc.name      Verify MenuSelect icon attribute
     * @tc.desc      Do not set MenuSelect icon properties
     */
    it('ArkUI_MenuSelectIcon_Divider_0100', 0, async function (done) {
      console.info('ArkUI_MenuSelectIcon_Divider_0100 START');
      console.info("ArkUI_MenuSelectIcon_Divider_0100 text click result is: "
        + JSON.stringify(sendEventByKey('defaultMenu', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuSelectIconTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.selectIcon).assertFalse;
      done();
    });

    /**
     * @tc.number    ArkUI_MenuSelectIcon_Divider_0200
     * @tc.name      Verify MenuSelect icon attribute
     * @tc.desc      Set the MenuSelect icon property to normal values
     */
    it('ArkUI_MenuSelectIcon_Divider_0200', 0, async function (done) {
      console.info('ArkUI_MenuSelectIcon_Divider_0200 START');
      console.info("ArkUI_MenuSelectIcon_Divider_0200 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconStr', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuSelectIconStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.selectIcon).assertEqual("app.media.icon");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuSelectIcon_Divider_0300
     * @tc.name      Verify MenuSelect icon attribute
     * @tc.desc      Set the MenuSelect icon property to normal values
     */
    it('ArkUI_MenuSelectIcon_Divider_0300', 0, async function (done) {
      console.info('ArkUI_MenuSelectIcon_Divider_0300 START');
      console.info("ArkUI_MenuSelectIcon_Divider_0300 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconRes', 10, "")));
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuSelectIconResTest');
      let obj = JSON.parse(strJson);
      var str = obj.$attrs.selectIcon;
      var iconRes = str.substr(str.lastIndexOf(".") + 1, 3);
      expect(iconRes).assertEqual("png");
      done();
    });

    /**
     * @tc.number    ArkUI_MenuSelectIcon_Divider_0400
     * @tc.name      Verify MenuSelect icon attribute
     * @tc.desc      Set the MenuEnd icon attribute to outlier
     */
    it('ArkUI_MenuSelectIcon_Divider_0400', 0, async function (done) {
      console.info('ArkUI_MenuSelectIcon_Divider_0400 START');
      console.info("ArkUI_MenuSelectIcon_Divider_0400 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconRes', 10, "")));
      try {
        var eventData = {
          data: {
            "nullFlag": true,
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuSelectIcon_Divider_0400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuSelectIcon_Divider_0400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuSelectIconResTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.endIcon).assertTrue;
      done();
    });

    /**
     * @tc.number    ArkUI_MenuSelectIcon_Divider_0500
     * @tc.name      Verify MenuSelect icon attribute
     * @tc.desc      Set the MenuEnd icon attribute to outlier
     */
    it('ArkUI_MenuSelectIcon_Divider_0500', 0, async function (done) {
      console.info('ArkUI_MenuSelectIcon_Divider_0500 START');
      console.info("ArkUI_MenuSelectIcon_Divider_0500 text click result is: "
        + JSON.stringify(sendEventByKey('menuIconStr', 10, "")));
      try {
        var eventData = {
          data: {
            "selectIconStr": 'qazwsx',
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_MenuSelectIcon_Divider_0500] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_MenuSelectIcon_Divider_0500] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('menuSelectIconStrTest');
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.endIcon).assertFalse;
      done();
    });
  })
}
