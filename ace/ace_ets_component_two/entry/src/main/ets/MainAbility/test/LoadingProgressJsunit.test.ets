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
import Utils from './Utils';

export default function loadingProgressJsunit() {
  describe('loadingProgressTest', function () {
    beforeEach(async function (done) {
      let options = {
        uri: 'pages/loadingProgress',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get loadingProgress state success " + JSON.stringify(pages));
        if (!("loadingProgress" == pages.name)) {
          console.info("get loadingProgress state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(4000);
          console.info("push loadingProgress page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push loadingProgress page error " + err);
      }
      done()
    });

    afterEach(async function () {
      await Utils.sleep(1000);
      console.info("loadingProgress after each called");
    });

    it('testLoadingProgress_100', 0, async function (done) {
      console.info('[testLoadingProgress_100] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_100 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.borderColor).assertEqual("#FF000000");
      console.info('testLoadingProgress_100 END');
      done();
    });

    it('testLoadingProgress_200', 0, async function (done) {
      console.info('[testLoadingProgress_200] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_200 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.borderRadius).assertEqual("0.0vp");
      console.info('testLoadingProgress_200 END');
      done();
    });

    it('testLoadingProgress_300', 0, async function (done) {
      console.info('[testLoadingProgress_300] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_300 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.height).assertEqual("22.000000");
      console.info('testLoadingProgress_300 END');
      done();
    });

    it('testLoadingProgress_400', 0, async function (done) {
      console.info('[testLoadingProgress_400] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_400 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.borderWidth).assertEqual("0.00px");
      console.info('testLoadingProgress_400 END');
      done();
    });

    it('testLoadingProgress_500', 0, async function (done) {
      console.info('[testLoadingProgress_500] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_500 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.borderStyle).assertEqual("BorderStyle.Solid");
      console.info('testLoadingProgress_500 END');
      done();
    });

    it('testLoadingProgress_600', 0, async function (done) {
      console.info('[testLoadingProgress_600] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_600 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.backgroundColor).assertEqual("#00000000");
      console.info('testLoadingProgress_600 END');
      done();
    });

    it('testLoadingProgress_700', 0, async function (done) {
      console.info('testLoadingProgress_700 START');
      await Utils.sleep(1000);
      try {
        let eventData = {
          data: {
            "color": "Yellow",
          }
        }
        var innerEvent = {
          eventId: 442,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("testLoadingProgress_700 start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("testLoadingProgress_700 change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_700 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.color).assertEqual(undefined);
      console.info('testLoadingProgress_700 END');
      done();
    });

    it('testLoadingProgress_800', 0, async function (done) {
      console.info('testLoadingProgress_800 START');
      await Utils.sleep(1000);
      try {
        let eventData = {
          data: {
            "color": "Red"
          }
        }
        var innerEvent = {
          eventId: 442,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("testLoadingProgress_800 start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("testLoadingProgress_800 change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_800 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.color).assertEqual(undefined);
      console.info('testLoadingProgress_800 END');
      done();
    });

    it('testLoadingProgress_900', 0, async function (done) {
      console.info('testLoadingProgress_900 START');
      await Utils.sleep(1000);
      try {
        let eventData = {
          data: {
            "color": "Color.Green"
          }
        }
        var innerEvent = {
          eventId: 442,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("testLoadingProgress_900 start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("testLoadingProgress_900 change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_900 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.color).assertEqual(undefined);
      console.info('testLoadingProgress_900 END');
      done();
    });

    it('testLoadingProgress_1000', 0, async function (done) {
      console.info('testLoadingProgress_1000 START');
      await Utils.sleep(1000);
      try {
        let eventData = {
          data: {
            "color": Color.Black
          }
        }
        var innerEvent = {
          eventId: 442,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("testLoadingProgress_1000 start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("testLoadingProgress_1000 change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('LP');
      let obj = JSON.parse(strJson);
      console.info("testLoadingProgress_1000 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.color).assertEqual(undefined);
      console.info('testLoadingProgress_1000 END');
      done();
    });
  })
}




