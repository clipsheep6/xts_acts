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
import { afterEach, beforeAll, beforeEach, describe, it, expect } from '@ohos/hypium';
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils';
import router from '@ohos.router';
import emitter from '@ohos.events.emitter';
// @ts-nocheck
let emitKey = ""

export default function ActsAceWebViewGetFrameUrlResourceType() {
  describe('ActsAceWebViewGetFrameUrlResourceType', () => {
      
    beforeAll(async (done: Function) => {
        let options : router.RouterOptions = {
            url: 'testability/pages/webViewGetFrameUrlResourceType',
        }
        
        try {
            await Utils.sleep(1000)
            router.clear();
            let pages = router.getState();
            console.info("get webViewGetFrameUrlResourceType state success " + JSON.stringify(pages));
            if (!("webViewGetFrameUrlResourceType" == pages.name)) {
                console.info("get webViewGetFrameUrlResourceType state success " + JSON.stringify(pages.name));
                let result = await router.pushUrl(options);
                await Utils.sleep(1000);
                console.info("push webViewGetFrameUrlResourceType state success " + JSON.stringify(result));
            }
        } catch (err) {
            console.error("push webViewGetFrameUrlResourceType page error:" + err);
        }
        done()
    });
    
    beforeEach(async (done: Function) => {
        await Utils.sleep(1000);
        done();
    })

      afterEach(async (done: Function) => {
        try {
            let backData: events_emitter.EventData = {
                data: {
                    "ACTION": emitKey
                }
            }
            let backEvent : events_emitter.InnerEvent = {
                eventId: 10,
                priority: events_emitter.EventPriority.LOW
            }
            console.info("start send emitKey");
            events_emitter.emit(backEvent, backData);
        } catch (err) {
            console.error("emit emitKey error:" + JSON.stringify(err));
        }
        await Utils.sleep(1000);
      done();
    })

    /*
     *@tc.number SUB_ACE_WEB_getFrameUrl_resourceType_API_0001
     *@tc.name testWebViewGetFrameUrlResourceType
     *@tc.desc test getFrameUrl getResourceType
     *@tc.size MediumTest
     *@tc.type Function
     *@tc.level Level 2
     */
    it('testWebViewGetFrameUrlResourceType', 0, async (done: Function) => {
        emitKey = "emitWebViewGetFrameUrlResourceType"
        Utils.emitEvent(emitKey, 10);
        Utils.registerEvent("testWebViewGetFrameUrlResourceType", true, 1330, done);
        sendEventByKey('webViewGetFrameUrlResourceType', 10, '');
    })
  })
}
