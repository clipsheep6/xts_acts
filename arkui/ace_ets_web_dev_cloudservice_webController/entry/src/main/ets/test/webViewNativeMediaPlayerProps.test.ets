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
export default function webViewNativeMediaPlayerProps() {
  describe('ActsAcewebViewNativeMediaPlayerProps', () => {
      
    beforeEach(async (done: Function) => {
        await Utils.sleep(1000);
      console.info("webViewNativeMediaPlayerProps beforeEach start");
      done();
    })
    
    /*
     *@tc.number SUB_ACE_WEB_PlaybackStatus_PLAYING_API_0001
     *@tc.name testWebViewNativeMediaPlayerPlaybackStatusPlaying0001
     *@tc.desc test PlaybackStatus.PLAYING
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerPlaybackStatusPlaying', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerPlaybackStatusPlaying";
      Utils.registerEvent("testWebViewNativeMediaPlayerPlaybackStatusPlaying", true, 1307, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_MediaError_NETWORK_ERROR_API_0002
     *@tc.name testWebViewNativeMediaPlayerNetworkError0002
     *@tc.desc test MediaError.NETWORK_ERROR
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerNetworkError', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerNetworkError";
      Utils.registerEvent("testWebViewNativeMediaPlayerNetworkError", true, 1300, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_MediaError_FORMAT_ERROR_API_0003
     *@tc.name testWebViewNativeMediaPlayerFORMATERROR0003
     *@tc.desc test MediaError.FORMAT_ERROR
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerFORMATERROR', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerFORMATERROR";
      Utils.registerEvent("testWebViewNativeMediaPlayerFORMATERROR", true, 1301, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_MediaError_DECODE_ERROR_API_0004
     *@tc.name testWebViewNativeMediaPlayerDECODEERROR0004
     *@tc.desc test MediaError.DECODE_ERROR
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerDECODEERROR', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerDECODEERROR";
      Utils.registerEvent("testWebViewNativeMediaPlayerDECODEERROR", true, 1302, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_CreateNativeMediaPlayerCallback_API_0005
     *@tc.name testWebViewNativeMediaPlayerCreateNativeMediaPlayerCallback0005
     *@tc.desc test CreateNativeMediaPlayerCallback
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerCreateNativeMediaPlayerCallback', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerCreateNativeMediaPlayerCallback";
      Utils.registerEvent("testWebViewNativeMediaPlayerCreateNativeMediaPlayerCallback", true, 1303, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_NetworkState_EMPTY_API_0006
     *@tc.name testWebViewNativeMediaPlayerNetworkStateEmpty0006
     *@tc.desc test NetworkState EMPTY
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerNetworkStateEmpty', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerNetworkStateEmpty";
      Utils.registerEvent("testWebViewNativeMediaPlayerNetworkStateEmpty", true, 1304, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_NetworkState_IDLE_API_0007
     *@tc.name testWebViewNativeMediaPlayerNetworkStateIDLE0007
     *@tc.desc test NetworkState IDLE
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerNetworkStateIDLE', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerNetworkStateIDLE";
      Utils.registerEvent("testWebViewNativeMediaPlayerNetworkStateIDLE", true, 1305, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_NetworkState_NETWORK_ERROR_API_0008
     *@tc.name testWebViewNativeMediaPlayerNetworkStateNETWORKERROR0008
     *@tc.desc test NetworkState NETWORK_ERROR
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerNetworkStateNETWORKERROR', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerNetworkStateNETWORKERROR";
      Utils.registerEvent("testWebViewNativeMediaPlayerNetworkStateNETWORKERROR", true, 1305, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_ReadyState_HAVE_NOTHING_API_0009
     *@tc.name testWebViewNativeMediaPlayerReadyStateHAVENOTHING0009
     *@tc.desc test ReadyState.HAVE_NOTHING
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerReadyStateHAVENOTHING', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerReadyStateHAVENOTHING";
      Utils.registerEvent("testWebViewNativeMediaPlayerReadyStateHAVENOTHING", true, 1308, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_ReadyState_HAVE_METADATA_API_0010
     *@tc.name testWebViewNativeMediaPlayerReadyStateHAVEMETADATA00110
     *@tc.desc test ReadyState.HAVE_CURRENT_DATA
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerReadyStateHAVEMETADATA', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerReadyStateHAVEMETADATA";
      Utils.registerEvent("testWebViewNativeMediaPlayerReadyStateHAVEMETADATA", true, 1309, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_ReadyState_HAVE_CURRENT_DATA_API_0011
     *@tc.name testWebViewNativeMediaPlayerReadyStateHAVE_CURRENT_DATA0011
     *@tc.desc test ReadyState.HAVE_CURRENT_DATA
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerReadyStateHAVE_CURRENT_DATA', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerReadyStateHAVE_CURRENT_DATA";
      Utils.registerEvent("testWebViewNativeMediaPlayerReadyStateHAVE_CURRENT_DATA", true, 1310, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_ReadyState_HAVE_Future_DATA_API_0012
     *@tc.name testWebViewNativeMediaPlayerReadyStateHAVE_Future_DATA0012
     *@tc.desc test ReadyState.HAVE_Future_DATA
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerReadyStateHAVE_Future_DATA', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerReadyStateHAVE_Future_DATA";
      Utils.registerEvent("testWebViewNativeMediaPlayerReadyStateHAVE_Future_DATA", true, 1311, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
    
    /*
     *@tc.number SUB_ACE_WEB_ReadyState_HAVE_Enough_DATA_API_0013
     *@tc.name testWebViewNativeMediaPlayerReadyStateHAVE_ENOUGH_DATA0013
     *@tc.desc test ReadyState.HAVE_Enough_DATA
     *@tc.type Function
     *@tc.level 1
     */
    it('testWebViewNativeMediaPlayerReadyStateHAVE_Enough_DATA', 0, async (done: Function) => {
      emitKey = "emitWebViewNativeMediaPlayerReadyStateHAVE_Enough_DATA";
      Utils.registerEvent("testWebViewNativeMediaPlayerReadyStateHAVE_Enough_DATA", true, 1312, done);
      sendEventByKey('webViewNativeMediaPlayerProps', 10, '');
    })
  })
}
