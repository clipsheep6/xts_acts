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
// @ts-nocheck
import { describe, beforeEach, afterEach, it, expect } from "@ohos/hypium";
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils.ets';
let emitKey = "emitStoreWebArchiveCallbackSaveFail";
export default function storeWebArchiveSaveFail() {
  describe('ActsAceWebTest', function () {
    beforeAll(async function (done) {
      let options = {
        uri: 'MainAbility/pages/storeWebArchiveSaveFail',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get storeWebArchiveSaveFail state success " + JSON.stringify(pages));
        if (!("storeWebArchiveSaveFail" == pages.name)) {
          console.info("get storeWebArchiveSaveFail state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push storeWebArchiveSaveFail page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push storeWebArchiveSaveFail page error: " + err);
      }
      done();
    });
    beforeEach(async function (done) {
      console.info("web beforeEach start");
      done();
    })
    afterEach(async function (done) {
      console.info("web afterEach start:"+emitKey);
      try {
            let backData = {
                data: {
                    "ACTION": emitKey
                }
            }
            let backEvent = {
                eventId:10,
                priority:events_emitter.EventPriority.LOW
            }
            console.info("start send emitKey");
            events_emitter.emit(backEvent, backData);
      } catch (err) {
            console.info("emit emitKey  err: " + JSON.stringify(err));
      }
      await Utils.sleep(2000);
      done();
    })

    /*
     *tc.number SUB_ACE_BASIC_ETS_API_007
     *tc.name storeWebArchiveCallbackSaveFail
     *tc.desic test storeWebArchiveCallback interface when save file failed.
     */
    it('storeWebArchiveCallbackSaveFail',0,async function(done){
      emitKey="emitStoreWebArchivePromiseSaveFail";
      Utils.registerEvent("testStoreWebArchivePromise","/data/storage/el2/base/blanknull.html.mht",138,done);
      sendEventByKey('webcomponent03',10,'');
    })

    /*
     *tc.number SUB_ACE_BASIC_ETS_API_008
     *tc.name storeWebArchivePromiseSaveFail
     *tc.desic test storeWebArchivePromise interface when save file failed.
     */
    it('storeWebArchivePromiseSaveFail',0,async function(done){
      emitKey="emitStoreWebArchiveCallbackSaveFail";
      Utils.registerEvent("testStoreWebArchivePromise","/data/storage/el2/base/blanknull.html-1.mht",140,done);
      sendEventByKey('webcomponent03',10,'');
    })
  })
}