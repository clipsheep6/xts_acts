// @ts-nocheck
/**
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@ohos.router';
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils.ets';

class shadowValue {
  radius: number | string
  color: Color | number | string
  offsetX: number | string
  offsetY: number | string
}

export default function imageEffectsJsunit() {
  describe('imageEffectsTest', () => {
    beforeEach(async () => {
      let options: router.RouterOptions = {
        uri: 'MainAbility/pages/imageEffects',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get imageEffects state success " + JSON.stringify(pages));
        if (!("imageEffects" == pages.name)) {
          console.info("get imageEffects state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push imageEffects page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push imageEffects page error: " + err);
      }
    });

    afterEach(async () => {
      await Utils.sleep(2000);
      console.info("imageEffects after each called");
    });

    it('testImageEffects001', 0, async () => {
      console.info('[testSizeSetting001] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('centerRow');
      console.info("[testImageEffects001] component strJson:" + strJson);
      let obj: ESObject = JSON.parse(strJson);
      expect(obj.$type).assertEqual('Text');
      expect(obj.$attrs.blur).assertEqual(100);

    });

    it('testImageEffects002', 0, async () => {
      console.info('[testImageEffects002] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "blurValue": "10"
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 12,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects002] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects002] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects002] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.blur).assertEqual(10);

    });

    it('testImageEffects003', 0, async () => {
      console.info('[testImageEffects003] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "blurValue": 0x80000000
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 12,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects003] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects003] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects003] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.blur).assertEqual(-2147483648);

    });

    it('testImageEffects004', 0, async () => {
      console.info('[testImageEffects004] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "blurValue": 10000
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 12,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects004] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects004] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects004] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.blur).assertEqual(10000);

    });

    it('testImageEffects005', 0, async () => {
      console.info('[testImageEffects005] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "blurValue": '0'
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 12,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects005] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects005] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects005] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.blur).assertEqual(0);

    });

    it('testImageEffects006', 0, async () => {
      console.info('[testImageEffects006] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('centerRow3');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testImageEffects006] component strJson:" + obj.$attrs.shadow);
      expect(obj.$attrs.shadow.radius).assertEqual("10.000000");
      expect(obj.$attrs.shadow.color).assertEqual("#FF808080");
      expect(obj.$attrs.shadow.offsetX).assertEqual("5.000000");
      expect(obj.$attrs.shadow.offsetY).assertEqual("5.000000");

    });

    it('testImageEffects007', 0, async () => {
      console.info('[testImageEffects007] START');
      await Utils.sleep(1000);
      let shadowValue: shadowValue = {
        radius: 20, color: Color.Gray, offsetX: 10, offsetY: 10
      };
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowValue": JSON.stringify(shadowValue)
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 13,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects007] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects007] change component data error: " + err.message);
      }

      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow3');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects007] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow.radius).assertEqual("20.000000");
      expect(objNew.$attrs.shadow.color).assertEqual("#FF808080");
      expect(objNew.$attrs.shadow.offsetX).assertEqual("10.000000");
      expect(objNew.$attrs.shadow.offsetY).assertEqual("10.000000");

    });

    it('testImageEffects008', 0, async () => {
      console.info('[testImageEffects008] START');
      await Utils.sleep(1000);
      let shadowValue: shadowValue = {
        radius: 0x80000000, color: 0x80000000, offsetX: 0x80000000, offsetY: 0x80000000
      };
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowValue": JSON.stringify(shadowValue)
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 13,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects008] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects008] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow3');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects008] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow.radius).assertEqual("2147483648.000000");
      expect(objNew.$attrs.shadow.color).assertEqual("#80000000");
      expect(objNew.$attrs.shadow.offsetX).assertEqual("2147483648.000000");
      expect(objNew.$attrs.shadow.offsetY).assertEqual("2147483648.000000");

    });

    it('testImageEffects009', 0, async () => {
      console.info('[testImageEffects009] START');
      await Utils.sleep(1000);
      let shadowValue: shadowValue = {
        radius: 0x7FFFFFFF, color: 0x7FFFFFFF, offsetX: 0x7FFFFFFF, offsetY: 0x7FFFFFFF
      };
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowValue": JSON.stringify(shadowValue)
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 13,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects009] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects009] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow3');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects009] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow.radius).assertEqual("2147483647.000000");
      expect(objNew.$attrs.shadow.color).assertEqual("#7FFFFFFF");
      expect(objNew.$attrs.shadow.offsetX).assertEqual("2147483647.000000");
      expect(objNew.$attrs.shadow.offsetY).assertEqual("2147483647.000000");

    });

    it('testImageEffects010', 0, async () => {
      console.info('[testImageEffects010] START');
      await Utils.sleep(1000);
      let shadowValue: shadowValue = {
        radius: 'error', color: 'error', offsetX: 'error', offsetY: 'error'
      };
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowValue": JSON.stringify(shadowValue)
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 13,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects010] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects010] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow3');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects010] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow.radius).assertEqual("0.000000");
      expect(objNew.$attrs.shadow.color).assertEqual("#FF000000");
      expect(objNew.$attrs.shadow.offsetX).assertEqual("0.000000");
      expect(objNew.$attrs.shadow.offsetY).assertEqual("0.000000");

    });

    it('testImageEffects011', 0, async () => {
      console.info('[testSizeSetting011] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('centerRow5');
      console.info("[testImageEffects011] component strJson:" + strJson);
      let obj: ESObject = JSON.parse(strJson);
      expect(obj.$attrs.brightness).assertEqual(20);

    });

    it('testImageEffects012', 0, async () => {
      console.info('[testImageEffects012] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "brightnessValue": "15"
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 15,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects012] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects012] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow5');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects012] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.brightness).assertEqual(15);

    });

    it('testImageEffects013', 0, async () => {
      console.info('[testImageEffects012] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "brightnessValue": 0x80000000
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 15,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects013] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects013] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow5');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects013] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.brightness).assertEqual(-2147483648);

    });

    it('testImageEffects014', 0, async () => {
      console.info('[testImageEffects014] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "brightnessValue": 0x7FFFFFFF
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 15,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects014] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects014] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow5');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects014] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.brightness).assertEqual(2147483647);

    });

    it('testImageEffects015', 0, async () => {
      console.info('[testImageEffects015] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "brightnessValue": 'error'
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 15,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects015] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects015] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow5');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects015] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.brightness).assertEqual(0);

    });

    it('testImageEffects016', 0, async () => {
      console.info('[testImageEffects016] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('centerRow6');
      console.info("[testImageEffects016] component strJson:" + strJson);
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testImageEffects016] component strJson:" + obj.$attrs.saturate);
      expect(obj.$attrs.saturate).assertEqual(50);

    });

    it('testImageEffects017', 0, async () => {
      console.info('[testImageEffects017] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "saturateValue": "40"
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 16,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects017] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects017] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow6');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects017] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.saturate).assertEqual(40);

    });

    it('testImageEffects018', 0, async () => {
      console.info('[testImageEffects018] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "saturateValue": 0x80000000
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 16,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects018] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects018] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow6');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects018] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.saturate).assertEqual(0);

    });

    it('testImageEffects019', 0, async () => {
      console.info('[testImageEffects019] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "saturateValue": 0x7FFFFFFF
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 16,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects019] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects019] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow6');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects019] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.saturate).assertEqual(2147483647);

    });

    it('testImageEffects020', 0, async () => {
      console.info('[testImageEffects020] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "saturateValue": 'error'
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 16,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects020] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects020] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow6');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects020] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.saturate).assertEqual(0);

    });

    it('testImageEffects021', 0, async () => {
      console.info('[testSizeSetting021] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('centerRow7');
      console.info("[testImageEffects021] component strJson:" + strJson);
      let obj: ESObject = JSON.parse(strJson);
      expect(obj.$attrs.contrast).assertEqual(20);

    });

    it('testImageEffects022', 0, async () => {
      console.info('[testImageEffects022] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "contrastValue": "10"
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 17,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects022] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects022] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow7');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects022] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.contrast).assertEqual(10);

    });

    it('testImageEffects023', 0, async () => {
      console.info('[testImageEffects023] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "contrastValue": 0x80000000
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 17,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects023] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects023] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow7');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects023] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.contrast).assertEqual(0);

    });

    it('testImageEffects024', 0, async () => {
      console.info('[testImageEffects024] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "contrastValue": 0x7FFFFFFF
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 17,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects024] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects024] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow7');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects024] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.contrast).assertEqual(2147483647);

    });

    it('testImageEffects025', 0, async () => {
      console.info('[testImageEffects025] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "contrastValue": 'error'
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 17,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects025] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects025] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow7');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects025] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.contrast).assertEqual(0);

    });

    it('testImageEffects026', 0, async () => {
      console.info('[testSizeSetting0026] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('centerRow8');
      console.info("[testImageEffects026] component strJson:" + strJson);
      let obj: ESObject = JSON.parse(strJson);
      expect(obj.$attrs.invert).assertEqual(10);

    });

    it('testImageEffects027', 0, async () => {
      console.info('[testImageEffects027] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "invertValue": 20
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 18,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects027] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects027] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow8');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects027] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.invert).assertEqual(20);

    });

    it('testImageEffects028', 0, async () => {
      console.info('[testImageEffects028] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "invertValue": 0
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 18,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects028] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects028] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow8');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects028] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.invert).assertEqual(0);

    });

    it('testImageEffects029', 0, async () => {
      console.info('[testImageEffects029] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "invertValue": 10000
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 18,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects029] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects029] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow8');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects029] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.invert).assertEqual(10000);

    });

    it('testImageEffects030', 0, async () => {
      console.info('[testImageEffects030] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "invertValue": 'error'
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 18,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects030] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects030] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow8');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects030] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.invert).assertEqual(0);

    });

    it('testImageEffects031', 0, async () => {
      console.info('[testImageEffects031] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('centerRow9');
      console.info("[testImageEffects031] component strJson:" + strJson);
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testImageEffects031] component strJson:" + obj.$attrs.shadow);
      expect(obj.$attrs.hueRotate).assertEqual(10);

    });

    it('testImageEffects032', 0, async () => {
      console.info('[testImageEffects032] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "hueRotateValue": "20"
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 19,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects032] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects032] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow9');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects032] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.hueRotate).assertEqual(20);

    });

    it('testImageEffects033', 0, async () => {
      console.info('[testImageEffects033] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "hueRotateValue": 0x80000000
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 19,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects033] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects033] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow9');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects033] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.hueRotate).assertEqual(232);

    });

    it('testImageEffects034', 0, async () => {
      console.info('[testImageEffects034] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "hueRotateValue": 0x7FFFFFFF
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 19,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects034] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects034] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow9');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects034] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.hueRotate).assertEqual(128);

    });

    it('testImageEffects035', 0, async () => {
      console.info('[testImageEffects035] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "hueRotateValue": 'error'
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 19,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects035] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects035] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow9');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects035] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.hueRotate).assertEqual(0);

    });

    it('testImageEffects036', 0, async () => {
      console.info('[testImageEffects036] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowStyleValue": ShadowStyle.OuterDefaultXS
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 20,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects036] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects036] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('shadowDefaultShadow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects036] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow).assertEqual("ShadowStyle.OuterDefaultXS");

    });

    it('testImageEffects037', 0, async () => {
      console.info('[testImageEffects037] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowStyleValue": ShadowStyle.OuterDefaultSM
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 20,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects037] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects037] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJsonNew = getInspectorByKey('shadowDefaultShadow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects037] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow).assertEqual("ShadowStyle.OuterDefaultSM");

    });

    it('testImageEffects038', 0, async () => {
      console.info('[testImageEffects038] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowStyleValue": ShadowStyle.OuterDefaultMD
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 20,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects038] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects038] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJsonNew = getInspectorByKey('shadowDefaultShadow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects038] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow).assertEqual("ShadowStyle.OuterDefaultMD");

    });

    it('testImageEffects039', 0, async () => {
      console.info('[testImageEffects039] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowStyleValue": ShadowStyle.OuterDefaultLG
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 20,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects039] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects039] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJsonNew = getInspectorByKey('shadowDefaultShadow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects039] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow).assertEqual("ShadowStyle.OuterDefaultLG");

    });

    it('testImageEffects040', 0, async () => {
      console.info('[testImageEffects040] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowStyleValue": ShadowStyle.OuterFloatingSM
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 20,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects040] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects040] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJsonNew = getInspectorByKey('shadowDefaultShadow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects040] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow).assertEqual("ShadowStyle.OuterFloatingSM");

    });

    it('testImageEffects041', 0, async () => {
      console.info('[testImageEffects041] START');
      await Utils.sleep(1000);
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowStyleValue": ShadowStyle.OuterFloatingMD
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 20,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects041] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects041] change component data error: " + err.message);
      }
      await Utils.sleep(2000);

      let strJsonNew = getInspectorByKey('shadowDefaultShadow');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects041] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow).assertEqual("ShadowStyle.OuterFloatingMD");

    });

    it('testImageEffects042', 0, async () => {
      console.info('[testImageEffects042] START');
      await Utils.sleep(1000);
      let shadowValue = {
        radius: 20, color: ColoringStrategy.AVERAGE, offsetX: 10, offsetY: 10
      };
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "shadowValue": JSON.stringify(shadowValue)
          }
        }
        let innerEvent: events_emitter.InnerEvent = {
          eventId: 21,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testImageEffects042] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testImageEffects042] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('centerRow3');
      let objNew: ESObject = JSON.parse(strJsonNew);
      console.info("[testImageEffects042] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.shadow.radius).assertEqual("20.000000");
      expect(objNew.$attrs.shadow.color).assertEqual("ColoringStrategy.AVERAGE");
      expect(objNew.$attrs.shadow.offsetX).assertEqual("10.000000");
      expect(objNew.$attrs.shadow.offsetY).assertEqual("10.000000");

    });
  })
}












