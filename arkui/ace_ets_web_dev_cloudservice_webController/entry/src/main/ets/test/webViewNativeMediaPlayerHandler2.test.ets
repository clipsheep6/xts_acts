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
export default function webViewNativeMediaPlayerHandler2() {
  describe('ActsAceWebViewNativeMediaPlayerHandler2', () => {
      
    beforeEach(async (done: Function) => {
        await Utils.sleep(1000);
      console.info("webViewNativeMediaPlayerHandler2 beforeEach start");
      done();
    })
    
    /*
     *@tc.number SUB_ACE_WEB_handleReadyStateChanged_API_0010
     *@tc.name testWebViewNativeMediaPlayerHandleReadyStateChanged0010
     *@tc.desc test handleReadyStateChanged
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerHandleReadyStateChanged', 0, async (done: Function) => {
      let emitKey = "emitWebViewNativeMediaPlayerHandleReadyStateChanged";
      Utils.emitEvent(emitKey, 10)
      Utils.registerEvent("testWebViewNativeMediaPlayerHandleReadyStateChanged", true, 1310, done);
      sendEventByKey('webViewNativeMediaPlayerHandler', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_handleStatusChanged_API_0011
     *@tc.name testWebViewNativeMediaPlayerHandleStatusChanged0011
     *@tc.desc test handleStatusChanged
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerHandleStatusChanged', 0, async (done: Function) => {
      let emitKey = "emitWebViewNativeMediaPlayerHandleStatusChanged";
      Utils.emitEvent(emitKey, 10)
      Utils.registerEvent("testWebViewNativeMediaPlayerHandleStatusChanged", true, 1312, done);
      sendEventByKey('webViewNativeMediaPlayerHandler', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_handleNetworkStateChanged_API_0012
     *@tc.name testWebViewNativeMediaPlayerHandleNetworkStateChanged0012
     *@tc.desc test handleNetworkStateChanged
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerHandleNetworkStateChanged', 0, async (done: Function) => {
      let emitKey = "emitWebViewNativeMediaPlayerHandleNetworkStateChanged";
      Utils.emitEvent(emitKey, 10)
      Utils.registerEvent("testWebViewNativeMediaPlayerHandleNetworkStateChanged", true, 1315, done);
      sendEventByKey('webViewNativeMediaPlayerHandler', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_handleMutedChanged_API_0013
     *@tc.name testWebViewNativeMediaPlayerHandleMutedChanged0013
     *@tc.desc test handleMutedChanged
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerHandleMutedChanged', 0, async (done: Function) => {
      let emitKey = "emitWebViewNativeMediaPlayerHandleMutedChanged";
      Utils.emitEvent(emitKey, 10)
      Utils.registerEvent("testWebViewNativeMediaPlayerHandleMutedChanged", true, 1316, done);
      sendEventByKey('webViewNativeMediaPlayerHandler', 10, '');
    })
  })
}
