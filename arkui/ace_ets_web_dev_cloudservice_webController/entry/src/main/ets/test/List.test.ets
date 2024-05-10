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
import webViewJsBridgeLastJsProxyCallingFrameUrl from './webViewJsBridgeLastJsProxyCallingFrameUrl.test';
import webViewOnFullScreenEnterInfo from './webViewOnFullScreenEnterInfo.test';
import webViewNativeVideoMediaInfo from './webViewNativeMediaMediaInfo.test';
import webViewNativeVideoEnterExitFullScreen from './webViewNativeVideoEnterExitFullScreen.test';
import webViewNatvieVideoSetVolumn from './webViewNatvieMediaSetVolumn.test';
import webViewNativeVideoUpdateRect from './webViewNativeMediaUpdateRect.test';
import webViewNativeVideoSetMuted from './webViewNativeMediaSetMuted.test';
import webViewNativeVideoSetSeek from './webViewNativeMediaSetSeek.test';
import webViewNativeMediaPlayerHandler from './webViewNativeMediaPlayerHandler.test';
import webViewNativeMediaPlayerHandler2 from './webViewNativeMediaPlayerHandler2.test';
import webViewNativeMediaPlayerProps from './webViewNativeMediaPlayerProps.test';
import webViewNativeVideoSetPlaybackRate from './webViewNativeMediaSetPlaybackRate.test';
import webViewNativeMediaPlayerHandleFullScreen from './webViewNativeMediaPlayerHandleFullScreen.test';
import webViewCookieTrack from './webViewCookieTrack.test';
import webViewCookieTrack2 from './webViewCookieTrack2.test';
import webViewSetRenderProcessMode from './webViewSetRenderProcessMode.test';
import webViewGetRenderProcessMode from './webViewGetRenderProcessMode.test';
import webViewRegisterNativeEmbedRule from './webViewRegisterNativeEmbedRule.test';
import webViewOnOverrideUrlLoading from './webViewOnOverrideUrlLoading.test';
import webViewMetaViewportFalse from './webViewMetaViewportFalse.test';
import webViewMetaViewportTrue from './webViewMetaViewportTrue.test';

export default function testsuite() {
  webViewOnFullScreenEnterInfo()
  webViewNativeVideoMediaInfo()
  webViewNativeVideoEnterExitFullScreen()
  webViewNativeVideoUpdateRect()
  webViewNativeVideoSetMuted()
  webViewNativeVideoSetSeek()
  webViewNativeMediaPlayerHandler()
  webViewNativeMediaPlayerHandler2()
  webViewNatvieVideoSetVolumn()
  webViewNativeVideoSetPlaybackRate()
  webViewNativeMediaPlayerHandleFullScreen()
  webViewJsBridgeLastJsProxyCallingFrameUrl()
  webViewNativeMediaPlayerProps()
  webViewSetRenderProcessMode()
  webViewGetRenderProcessMode()
  webViewRegisterNativeEmbedRule()
  webViewOnOverrideUrlLoading()
  webViewCookieTrack()
  webViewCookieTrack2()
  webViewMetaViewportFalse()
  webViewMetaViewportTrue()
}
