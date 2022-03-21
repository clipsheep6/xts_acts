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
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils';

export default function searchJsunit() {
  describe('searchTest', function () {
    beforeEach(async function (done) {
      let options = {
        uri: 'pages/search',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get search state success " + JSON.stringify(pages));
        if (!("span" == pages.name)) {
          console.info("get search success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push search page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push search page error " + JSON.stringify(err));
      }
      done()
    });

    afterEach(async function () {
      await Utils.sleep(2000);
      console.info("search after each called");
    });

    it('testSearch001', 0, async function (done) {
      console.info('[testSearch001] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('search');
      console.info("[testSearch001] component strJson:" + strJson);
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.searchButton).assertEqual('10');
      done();
    });

    it('testSearch002', 0, async function (done) {
      console.info('[testSearch002] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": "5"
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch002] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch002] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch002] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual('5');
      done();
    });

    it('testSearch003', 0, async function (done) {
      console.info('[testSearch003] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": "A"
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch003] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch003] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch003] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual('A');
      done();
    });

    it('testSearch004', 0, async function (done) {
      console.info('[testSearch004] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": "0"
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch004] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch004] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch004] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual('0');
      done();
    });

    it('testSearch005', 0, async function (done) {
      console.info('[testSearch005] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": "你好"
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch005] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch005] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch005] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual('你好');
      done();
    });

    it('testSearch006', 0, async function (done) {
      console.info('[testSearch006] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": "0.12"
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch006] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch006] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch006] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual('0.12');
      done();
    });

    it('testSearch007', 0, async function (done) {
      console.info('[testSearch007] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": null
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch007] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch007] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch007] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual('0.12');
      done();
    });

    it('testSearch008', 0, async function (done) {
      console.info('[testSearch008] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": "1A2b"
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch008] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch008] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch008] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual("1A2b");
      done();
    });

    it('testSearch009', 0, async function (done) {
      console.info('[testSearch009] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": "你好abc"
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch009] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch009] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch009] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual("你好abc");
      done();
    });

    it('testSearch010', 0, async function (done) {
      console.info('[testSearch010] START');
      await Utils.sleep(1000);
      try {
        var eventData = {
          data: {
            "searchButton": "0.123你好abc"
          }
        }
        var innerEvent = {
          eventId: 190,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("[testSearch010] start to publish emit");
        events_emitter.emit(innerEvent, eventData);
      } catch (err) {
        console.log("[testSearch010] change component data error: " + err.message);
      }
      await Utils.sleep(2000);
      let strJsonNew = getInspectorByKey('search');
      let objNew = JSON.parse(strJsonNew);
      console.info("[testSearch010] component objNew is: " + JSON.stringify(objNew));
      expect(objNew.$attrs.searchButton).assertEqual("0.123你好abc");
      done();
    });
  })
}
