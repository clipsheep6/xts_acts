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
import emitter from '@ohos.events.emitter;
// @ts-nocheck

export default function webViewNativeMediaPlayerHandler() {
  describe('ActsAceWebViewNativeMediaPlayerHandleFullScreenChanged', () => {
    
    beforeEach(async (done: Function) => {
        await Utils.sleep(1000);
      done();
    })
    
    /*
     *@tc.number SUB_ACE_WEB_handleFullscreenChanged_API_0001
     *@tc.name testWebViewNativeMediaPlayerHandleFullscreenChanged
     *@tc.desc test handleFullscreenChanged
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerHandleFullscreenChanged', 0, async (done: Function) => {
        sendEventByKey('webViewNativePlayerHandleFullscreenKey', 10, '');
        Utils.emitEvent("emitWebViewNativeMediaPlayerHandleFullscreenChanged",10)
        Utils.registerEvent("testWebViewNativeMediaPlayerHandleFullscreenChanged", true, 1313, done);
        sendEventByKey('webViewNativeMediaPlayerHandler', 10, '');
    })
  })
}
