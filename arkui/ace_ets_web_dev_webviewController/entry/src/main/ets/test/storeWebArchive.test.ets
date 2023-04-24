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
let emitKey = "emitStoreWebArchiveCallback";
export default function storeWebArchive() {
  describe('ActsAceWebTest', function () {
    beforeAll(async function (done) {
     let options = {
       uri: 'MainAbility/pages/storeWebArchive',
     }
     try {
       router.clear();
       let pages = router.getState();
       console.info("get storeWebArchive state success " + JSON.stringify(pages));
       if (!("storeWebArchive" == pages.name)) {
         console.info("get storeWebArchive state success " + JSON.stringify(pages.name));
         let result = await router.push(options);
         await Utils.sleep(2000);
         console.info("push storeWebArchive page success " + JSON.stringify(result));
       }
     } catch (err) {
       console.error("push storeWebArchive page error: " + err);
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
     *tc.number SUB_ACE_BASIC_ETS_API_003
     *tc.name storeWebArchiveCallback
     *tc.desic test storeWebArchive interface when choose Callback mode and autoName parameter is ture.
     */
    it('storeWebArchiveCallback',0,async function(done){
      emitKey="emitStoreWebArchiveCallbackFalse";
      Utils.registerEvent("testStoreWebArchiveCallback","/data/storage/el2/base/index.html.mht",130,done);
      sendEventByKey('webcomponent02',10,'');
    })

      /*
     *tc.number SUB_ACE_BASIC_ETS_API_004
     *tc.name storeWebArchiveCallbackFalse
     *tc.desic test storeWebArchive interface when choose Callback mode and autoName parameter is false.
     */
    it('storeWebArchiveCallbackFalse',0,async function(done){
      emitKey="emitStoreWebArchivePromise";
      Utils.registerEvent("testStoreWebArchiveCallbackFalse","/data/storage/el2/base/index.html.mht",132,done);
      sendEventByKey('webcomponent02',10,'');
    })

    /*
     *tc.number SUB_ACE_BASIC_ETS_API_005
     *tc.name storeWebArchivePromise
     *tc.desic test storeWebArchive interface when choose Promise mode and autoName parameter is ture.
     */
    it('storeWebArchivePromise',0,async function(done){
      emitKey="storeWebArchivePromise";
      Utils.registerEvent("testStoreWebArchivePromise","/data/storage/el2/base/index.html-1.mht",134,done);
      sendEventByKey('webcomponent02',10,'');
    })

    /*
     *tc.number SUB_ACE_BASIC_ETS_API_006
     *tc.name storeWebArchivePromiseFalse
     *tc.desic test storeWebArchive interface when choose Promise mode and autoName parameter is false.
     */
    it('storeWebArchivePromiseFalse',0,async function(done){
      emitKey="emitStoreWebArchiveCallbackSaveFail";
      Utils.registerEvent("testStoreWebArchivePromiseFalse","/data/storage/el2/base/index.html.mht",136,done);
      sendEventByKey('webcomponent02',10,'');
    })
  })
}