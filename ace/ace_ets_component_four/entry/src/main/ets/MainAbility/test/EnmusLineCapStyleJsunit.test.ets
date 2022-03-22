// @ts-nocheck
/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index.ets"
import router from '@system.router';
import events_emitter from '@ohos.events.emitter'
import Utils from './Utils';

export default function enumsImageJsunit() {
  describe('enumsLineCapStyle', function () {
    beforeEach(async function (done) {
      console.info('beforeEach ===================enumsLineCapStyle test beforeEach called===================');
      let options = {
        uri: 'pages/enumsLineCapStyle',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info('beforeEach get enumsLineCapStyleTest state pages:' + JSON.stringify(pages));
        if (!('enumsFlexItem' == pages.name)) {
          console.info('beforeEach get enumsLineCapStyleTest state pages.name:' + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info('beforeEach push enumsLineCapStyleTest page result:' + JSON.stringify(result));
        }
      } catch (err) {
        console.error('beforeEach push enumsLineCapStyleTest page error:' + err);
      }
      done()
    });

    afterEach(async function () {
      await Utils.sleep(1000);
      console.info('[ afterEach ] ===================enumsImageTest test after each called===================');
    });

    it('enumsLineCapStyleTest_0100', 0, async function (done) {
      console.info('enumsLineCapStyleTest_0100 START');
      let strJson = getInspectorByKey('Butt');
      console.info("enumsLineCapStyleTest_0100 component strJson:" + strJson);
      let obj = JSON.parse(strJson);
      console.info("enumsLineCapStyleTest_0100 component obj is: " + JSON.stringify(obj));
      console.info('obj.$attrs.strokeLineCap' + obj.$attrs.strokeLineCap)
      expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Butt');
      console.info('enumsLineCapStyleTest_0100 END');
      done();
    });

    it('enumsLineCapStyleTest_0200', 0, async function (done) {
      console.info('enumsLineCapStyleTest_0200 START');
      try {
        var eventData = {
          data: {
            "capStyle": LineCapStyle.Round
          }
        }
        var innerEvent = {
          eventId: 2010,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[enumsLineCapStyleTest_0200] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[enumsLineCapStyleTest_0200] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('Butt');
      console.info("enumsLineCapStyleTest_0200 component strJson:" + strJson);
      let obj = JSON.parse(strJson);
      console.info("enumsLineCapStyleTest_0200 component obj is: " + JSON.stringify(obj));
      console.info('obj.$attrs.strokeLineCap' + obj.$attrs.strokeLineCap)
      expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Round');
      console.info('enumsLineCapStyleTest_0200 END');
      done();
    });

    it('enumsLineCapStyleTest_0300', 0, async function (done) {
      console.info('enumsLineCapStyleTest_0300 START');
      try {
        var eventData = {
          data: {
            "capStyle": LineCapStyle.six
          }
        }
        var innerEvent = {
          eventId: 2020,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[enumsLineCapStyleTest_0300] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[enumsLineCapStyleTest_0300] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('Butt');
      console.info("enumsLineCapStyleTest_0300 component strJson:" + strJson);
      let obj = JSON.parse(strJson);
      console.info("enumsLineCapStyleTest_0300 component obj is: " + JSON.stringify(obj));
      console.info('obj.$attrs.strokeLineCap' + obj.$attrs.strokeLineCap)
      expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Round');
      console.info('enumsLineCapStyleTest_0300 END');
      done();
    });

    it('enumsLineCapStyleTest_0400', 0, async function (done) {
      console.info('enumsLineCapStyleTest_0400 START');
      try {
        var eventData = {
          data: {
            "capStyle": 212131
          }
        }
        var innerEvent = {
          eventId: 2030,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[enumsLineCapStyleTest_0400] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[enumsLineCapStyleTest_0400] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('Butt');
      console.info("enumsLineCapStyleTest_0400 component strJson:" + strJson);
      let obj = JSON.parse(strJson);
      console.info("enumsLineCapStyleTest_0400 component obj is: " + JSON.stringify(obj));
      console.info('obj.$attrs.strokeLineCap' + obj.$attrs.strokeLineCap)
      expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Butt');
      console.info('enumsLineCapStyleTest_0400 END');
      done();
    });
  })
}
