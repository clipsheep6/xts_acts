/**
 * Copyright (c) 2023 iSoftStone Information Technology (Group) Co.,Ltd.
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
import { describe, beforeEach, afterEach, it, expect, beforeAll } from "@ohos/hypium";
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils.ets';
import router from '@system.router';

let emitKey = "emitGetAccessAllowAndRetainAllFalse";

export default function webViewGetAccessibleGeolocation() {
  describe('ActsAceWebDevWebViewGetAccessibleGeolocationTest', () => {
    beforeAll(async () => {
      let options = {
        uri: 'MainAbility/pages/webViewGetAccessibleGeolocation',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get webViewGetAccessibleGeolocation state success " + JSON.stringify(pages));
        if (!("webViewGetAccessibleGeolocation" == pages.name)) {
          console.info("get webViewGetAccessibleGeolocation state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push webViewGetAccessibleGeolocation page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push webViewGetAccessibleGeolocation page error: " + err);
      }

    });
    beforeEach(async () => {
      await Utils.sleep(2000);
      console.info("webViewGetAccessibleGeolocation beforeEach start");

    })
    afterEach(async () => {
      console.info("webViewGetAccessibleGeolocation afterEach start:" + emitKey);
      try {
        let backData: events_emitter.EventData = {
          data: {
            "ACTION": emitKey
          }
        }
        let backEvent: events_emitter.InnerEvent = {
          eventId: 10,
          priority: events_emitter.EventPriority.LOW
        }
        console.info("start send emitKey");
        events_emitter.emit(backEvent, backData);
      } catch (err) {
        console.info("emit emitKey  err: " + JSON.stringify(err));
      }
      await Utils.sleep(2000);

    })
    /*
     *tc.number SUB_ACE_BASIC_ETS_WEBVIEWGETACCGEO_API_0100
     *tc.name testGetAccessibleGeolocationFalse
     *tc.desc test interface of getaccessiblegeolocation with allow and retain all False
     */
    it('testGetAccessibleGeolocationFalse', 0, async () => {
      emitKey = "emitGetAccessAllowAndRetainAllTrue";
      Utils.registerEvent("testGetAccessibleGeolocationFalse", false, 409);
      sendEventByKey('webViewGetAccessibleGeolocation', 10, '');
    })
    /*
     *tc.number SUB_ACE_BASIC_ETS_WEBVIEWGETACCGEO_API_0200
     *tc.name testGetAccessibleGeolocationTrue
     *tc.desc test interface of getaccessiblegeolocation with allow and retain all true
     */
    it('testGetAccessibleGeolocationTrue', 0, async () => {
      emitKey = "emitGetAccessAllowAndRetainAllTrue";
      Utils.registerEvent("testGetAccessibleGeolocationTrue", true, 410);
      sendEventByKey('webViewGetAccessibleGeolocation', 10, '');
    })
  })
}