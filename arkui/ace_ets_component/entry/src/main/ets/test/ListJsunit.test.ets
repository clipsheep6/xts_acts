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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium";
import router from '@ohos.router';
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils.ets';

export default function listJsunit() {
  describe('listTest', () => {
    beforeEach(async () => {
      console.info("list beforeEach start");
      let options: router.RouterOptions = {
        uri: 'MainAbility/pages/list',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get list state pages:" + JSON.stringify(pages));
        if (!("list" == pages.name)) {
          console.info("get list state pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push list page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push list page error:" + err);
      }
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("list after each called");
    });

    it('testList01', 0, async () => {
      console.info('[testList01] START');
      await Utils.sleep(1000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList01] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.listDirection).assertEqual('Axis.Vertical');
      expect(obj.$attrs.editMode).assertFalse();
      expect(obj.$attrs.edgeEffect).assertEqual('EdgeEffect.None');
      expect(obj.$attrs.chainAnimation).assertFalse();
      expect(obj.$attrs.divider.strokeWidth).assertEqual("2.00vp");
      expect(obj.$attrs.divider.color).assertEqual("#FFFFFFFF");
      expect(obj.$attrs.divider.startMargin).assertEqual("20.00vp");
      expect(obj.$attrs.divider.endMargin).assertEqual("20.00vp");
      console.info('[testList01] END');
      
    });

    it('testList02', 0, async () => {
      console.info('[testList02] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "listDirection": Axis.Horizontal
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 124,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList02] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList02] change component data error: " + err.message);
      }
      await Utils.sleep(4000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList02] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.listDirection).assertEqual('Axis.Horizontal');
      console.info('testList02 END');
      
    });

    it('testList03', 0, async () => {
      console.info('[testList03] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "editMode": true
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 124,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList03] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList03] change component data error: " + err.message);
      }
      await Utils.sleep(4000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList03] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.editMode).assertTrue();
      console.info('testList03 END');
      
    });

    it('testList04', 0, async () => {
      console.info('[testList04] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "edgeEffect": EdgeEffect.Spring
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 124,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList04] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList04] change component data error: " + err.message);
      }
      await Utils.sleep(4000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList04] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.edgeEffect).assertEqual('EdgeEffect.Spring');
      console.info('testList04 END');
      
    });

    it('testList05', 0, async () => {
      console.info('[testList05] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "chainAnimation": true
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 124,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList05] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList05] change component data error: " + err.message);
      }
      await Utils.sleep(4000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList05] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.chainAnimation).assertTrue();
      console.info('testList05 END');
      
    });

    it('testList06', 0, async () => {
      console.info('[testList06] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "strokeWidth": "3.000000vp"
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 125,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList06] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList06] change component data error: " + err.message);
      }
      await Utils.sleep(1000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList06] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.divider.strokeWidth).assertEqual("3.00vp");
      console.info('testList06 END');
      
    });

    it('testList07', 0, async () => {
      console.info('[testList07] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "color": "#FF0000FF"
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 125,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList07] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList07] change component data error: " + err.message);
      }
      await Utils.sleep(1000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList07] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.divider.color).assertEqual("#FF0000FF");
      console.info('testList07 END');
      
    });

    it('testList08', 0, async () => {
      console.info('[testList08] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "startMargin": "30.000000vp"
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 125,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList08] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList08] change component data error: " + err.message);
      }
      await Utils.sleep(1000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList08] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.divider.startMargin).assertEqual("30.00vp");
      console.info('testList08 END');
      
    });

    it('testList09', 0, async () => {
      console.info('[testList09] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "endMargin": "30.000000vp"
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 125,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList09] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList09] change component data error: " + err.message);
      }
      await Utils.sleep(1000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList09] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.divider.endMargin).assertEqual("30.00vp");
      console.info('testList09 END');
      
    });

    it('testList10', 0, async () => {
      console.info('[testList10] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "editMode": "true123"
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 901,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList10] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList10] change component data error: " + err.message);
      }
      await Utils.sleep(4000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList10] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.editMode).assertTrue();
      console.info('testList10 END');
      
    });

    it('testList11', 0, async () => {
      console.info('[testList11] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "editMode": "39000000"
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 902,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList11] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList11] change component data error: " + err.message);
      }
      await Utils.sleep(4000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList11] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.editMode).assertTrue();
      console.info('testList11 END');
      
    });

    it('testList12', 0, async () => {
      console.info('[testList12] START');
      try {
        let eventData: events_emitter.EventData = {
          data: {
            "chainAnimation": "true123"
          }
        }
        let eventData: events_emitter.InnerEvent = {
          eventId: 903,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testList12] start to publish emit:" + JSON.stringify(eventData.data));
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testList12] change component data error: " + err.message);
      }
      await Utils.sleep(4000);
      let strJson = getInspectorByKey('list');
      let obj: ESObject = JSON.parse(strJson);
      console.info("[testList12] obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.chainAnimation).assertTrue();
      console.info('testList12 END');
      
    });
  })
}
