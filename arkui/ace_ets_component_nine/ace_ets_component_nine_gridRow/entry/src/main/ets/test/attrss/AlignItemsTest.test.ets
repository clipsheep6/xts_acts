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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "@ohos/hypium"
import router from '@system.router';
import events_emitter from '@ohos.events.emitter'
import Utils from '../Utils';

export default function GridRowAlignItemsTest() {
  describe('gridRowAlignItemsTest', function () {
    beforeEach(async function (done) {
      console.info("alignItems beforeEach start");
      let options = {
        uri: 'MainAbility/pages/component/AlignItemsPage',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get alignItems state pages: " + JSON.stringify(pages));
        if (!("AlignItemsPage" == pages.name)) {
          console.info("get alignItems state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push alignItems page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push alignItems page error: " + err);
      }
      done()
    });

    afterEach(async function () {
      await Utils.sleep(1000);
      console.info("alignItems after each called");
    })

    it('testGridRowAlignItemsTest', 0, async function (done) {
      var tagName = 'testGridRowAlignItemsTest';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
      let strJson = getInspectorByKey('keyGridRowAlignItems');
      let obj = JSON.parse(strJson);
      console.info('[' + tagName + '] component obj is: ' + JSON.stringify(obj.$attrs.alignItems));
      expect(obj.$type).assertEqual('GridRow');
      expect(obj.$attrs.alignItems).assertEqual("ItemAlign.Start");

      try {
        var eventData = {
          data: {
            "alignItemsValue": ItemAlign.Center
          }
        }
        var innerEvent = {
          eventId: 181,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('keyGridRowAlignItems');
      let objNew = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] component objNew is: ' + JSON.stringify(objNew));
      expect(objNew.$type).assertEqual('GridRow');
      expect(objNew.$attrs.alignItems).assertEqual("ItemAlign.Center");

      try {
        var eventData2 = {
          data: {
            "alignItemsValue": ItemAlign.End
          }
        }
        var innerEvent2 = {
          eventId: 182,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent2, eventData2);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
      let strJson2 = getInspectorByKey('keyGridRowAlignItems');
      let obj2 = JSON.parse(strJson2);
      console.info('[' + tagName + '] component strJson2 is: ' + JSON.stringify(strJson2));
      expect(obj2.$type).assertEqual('GridRow');
      expect(obj2.$attrs.alignItems).assertEqual("ItemAlign.End");      

      try {
        var eventData3 = {
          data: {
            "alignItemsValue": ItemAlign.Stretch
          }
        }
        var innerEvent3 = {
          eventId: 183,
          priority: events_emitter.EventPriority.LOW
        }
        console.info('[' + tagName + '] start to publish emit');
        events_emitter.emit(innerEvent3, eventData3);
      } catch (err) {
        console.log('[' + tagName + '] change component data error: ' + err.message);
      }
      await Utils.sleep(2000);
      let strJson3 = getInspectorByKey('keyGridRowAlignItems');
      let obj3 = JSON.parse(strJson3);
      console.info('[' + tagName + '] component strJson3 is: ' + JSON.stringify(strJson3));
      expect(obj3.$type).assertEqual('GridRow');
      expect(obj3.$attrs.alignItems).assertEqual("ItemAlign.Stretch");

      console.info('[' + tagName + '] END ===========================');
      done();
    });
  })
}
