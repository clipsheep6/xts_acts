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
export default function tabs() {
  describe('ActsAceTabsTest', function () {
    beforeEach(async function (done) {
      await Utils.sleep(2000);
      console.info("tabs beforeEach start");
      done();
    })

    afterEach(async function (done) {
      console.info("tabs afterEach start");
      let qrcodeOpacityNum: number = 0
      try {
        var eventData = {
          data: {
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      done();
    })

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0100
     *tc.name   Tests the default content opacity of the QRCode component
     *tc.desc   Get the default value of content opacity
     */
    it('ArkUI_QRCode_ContentOpacity_0100', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0100] start");
      let newJson = getInspectorByKey('qrCodeDefault');
      console.info("[ArkUI_QRCode_ContentOpacity_0100]: " + JSON.stringify(newJson));
      let obj = JSON.parse(newJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0100]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.contentOpacity).assertEqual(1.0);
      console.info("[ArkUI_QRCode_ContentOpacity_0100] end");
      done();
    });

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0200
     *tc.name   Tests the content opacity of the QRCode component
     *tc.desc   Set the value of contentOpacity as 0.1
     */
    it('ArkUI_QRCode_ContentOpacity_0200', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0200] start");
      let newJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0200]: " + JSON.stringify(newJson));
      try {
        var eventData = {
          data: {
            "qrcodeOpacityNum": 0.1
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_QRCode_ContentOpacity_0200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_QRCode_ContentOpacity_0200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0200]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0200]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.capsuleStyle.contentOpacity).assertEqual(0.1);
      console.info("[ArkUI_QRCode_ContentOpacity_0200] end");
      done();
    });

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0300
     *tc.name   Tests the content opacity of the QRCode component
     *tc.desc   Set the value of contentOpacity as 0.0
     */
    it('ArkUI_QRCode_ContentOpacity_0300', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0300] start");
      let newJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0300]: " + JSON.stringify(newJson));
      try {
        var eventData = {
          data: {
            "qrcodeOpacityNum": 0.0
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_QRCode_ContentOpacity_0300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_QRCode_ContentOpacity_0300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0300]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0300]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.capsuleStyle.contentOpacity).assertEqual(0.0);
      console.info("[ArkUI_QRCode_ContentOpacity_0300] end");
      done();
    });

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0400
     *tc.name   Tests the content opacity of the QRCode component
     *tc.desc   Set the value of contentOpacity as 1.0
     */
    it('ArkUI_QRCode_ContentOpacity_0400', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0400] start");
      let newJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0400]: " + JSON.stringify(newJson));
      try {
        var eventData = {
          data: {
            "qrcodeOpacityNum": 1.0
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_QRCode_ContentOpacity_0400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_QRCode_ContentOpacity_0400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0400]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0400]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.capsuleStyle.contentOpacity).assertEqual(1.0);
      console.info("[ArkUI_QRCode_ContentOpacity_0400] end");
      done();
    });

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0500
     *tc.name   Tests the content opacity of the QRCode component
     *tc.desc   Set the value of contentOpacity as $r('app.float.QRCode_Opacity')
     */
    it('ArkUI_QRCode_ContentOpacity_0500', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0500] start");
      let strJson = getInspectorByKey('qrCodeRes');
      console.info("[ArkUI_QRCode_ContentOpacity_0500]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0500]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.capsuleStyle.contentOpacity).assertEqual(0.1);
      console.info("[ArkUI_QRCode_ContentOpacity_0500] end");
      done();
    });

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0600
     *tc.name   Tests the content opacity of the QRCode component
     *tc.desc   Set the value of contentOpacity as -1.0
     */
    it('ArkUI_QRCode_ContentOpacity_0600', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0600] start");
      let newJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0600]: " + JSON.stringify(newJson));
      try {
        var eventData = {
          data: {
            "qrcodeOpacityNum": -1.0
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_QRCode_ContentOpacity_0600] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_QRCode_ContentOpacity_0600] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0600]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0600]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.capsuleStyle.contentOpacity).assertEqual(1.0);
      console.info("[ArkUI_QRCode_ContentOpacity_0600] end");
      done();
    });

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0700
     *tc.name   Tests the content opacity of the QRCode component
     *tc.desc   Set the value of contentOpacity as 10.0
     */
    it('ArkUI_QRCode_ContentOpacity_0700', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0700] start");
      let newJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0700]: " + JSON.stringify(newJson));
      try {
        var eventData = {
          data: {
            "qrcodeOpacityNum": 10.0
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_QRCode_ContentOpacity_0700] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_QRCode_ContentOpacity_0700] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0700]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0700]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.capsuleStyle.contentOpacity).assertEqual(1.0);
      console.info("[ArkUI_QRCode_ContentOpacity_0700] end");
      done();
    });

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0800
     *tc.name   Tests the content opacity of the QRCode component
     *tc.desc   Set the value of contentOpacity as null
     */
    it('ArkUI_QRCode_ContentOpacity_0800', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0800] start");
      let newJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0800]: " + JSON.stringify(newJson));
      try {
        var eventData = {
          data: {
            "qrcodeOpacityNum": null
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_QRCode_ContentOpacity_0800] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_QRCode_ContentOpacity_0800] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0800]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0800]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.capsuleStyle.contentOpacity).assertEqual(1.0);
      console.info("[ArkUI_QRCode_ContentOpacity_0800] end");
      done();
    });

    /*
     *tc.number ArkUI_QRCode_ContentOpacity_0900
     *tc.name   Tests the content opacity of the QRCode component
     *tc.desc   Set the value of contentOpacity as undefined
     */
    it('ArkUI_QRCode_ContentOpacity_0900', 0, async function (done) {
      console.info("[ArkUI_QRCode_ContentOpacity_0900] start");
      let newJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0900]: " + JSON.stringify(newJson));
      try {
        var eventData = {
          data: {
            "qrcodeOpacityNum": undefined
          }
        }
        var innerEvent = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[ArkUI_QRCode_ContentOpacity_0900] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[ArkUI_QRCode_ContentOpacity_0900] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('qrCodeNum');
      console.info("[ArkUI_QRCode_ContentOpacity_0900]: " + JSON.stringify(strJson))
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_QRCode_ContentOpacity_0900]: " + JSON.stringify(obj.$attrs.contentOpacity));
      expect(obj.$attrs.capsuleStyle.contentOpacity).assertEqual(1.0);
      console.info("[ArkUI_QRCode_ContentOpacity_0900] end");
      done();
    });
  })
}