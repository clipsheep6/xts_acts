/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import { beforeAll, beforeEach, describe, it } from '@ohos/hypium';
import router from '@ohos.router';
import Utils from './Utils';

export default function webErrorCode() {

  describe('ErrorCodeTestSuite', () => {
    beforeAll(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/webErrorCode',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get webErrorCode state success " + JSON.stringify(pages));
        if (!("webErrorCode" == pages.name)) {
          console.info("get webErrorCode state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push webErrorCode page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push webErrorCode page error: " + err);
      }
      done()
    });
    beforeEach(async (done: Function) => {
      await Utils.sleep(2000);
      console.info("web beforeEach start");
      done();
    })

    /*
    * @tc.number     : SUB_WEB_SEARCHALLASYNC_ERROR_0100
    * @tc.name       : testSearchAllAsyncError001
    * @tc.desc       : test searchAllAsync error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testSearchAllAsyncError001', 0, async (done: Function) => {
      Utils.emitEvent("emitSearchAllAsync", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testSearchAllAsyncError001", '17100001', 1000, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ALLOWGEOLOCATION_ERROR_0100
    * @tc.name       : testAllowGeolocationError001
    * @tc.desc       : test SearchAllAsync error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testAllowGeolocationError001', 0, async (done: Function) => {
      Utils.emitEvent("emitAllowGeolocation", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testAllowGeolocationError001", '17100011', 1002, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ALLOWGEOLOCATION_ERROR_0200
    * @tc.name       : testAllowGeolocationError002
    * @tc.desc       : test SearchAllAsync error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testAllowGeolocationError002', 0, async (done: Function) => {
      Utils.emitEvent("emitAllowGeolocation2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testAllowGeolocationError002", '17100011', 1003, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ALLOWGEOLOCATION_ERROR_0300
    * @tc.name       : testAllowGeolocationError003
    * @tc.desc       : test AllowGeolocation error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testAllowGeolocationError003', 0, async (done: Function) => {
      Utils.emitEvent("emitAllowGeolocation3", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testAllowGeolocationError003", '17100011', 1004, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ALLOWGEOLOCATION_ERROR_0400
    * @tc.name       : testAllowGeolocationError004
    * @tc.desc       : test AllowGeolocation error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testAllowGeolocationError004', 0, async (done: Function) => {
      Utils.emitEvent("emitAllowGeolocation4", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testAllowGeolocationError004", '17100011', 1005, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_GETUSERAGENT_ERROR_0100
    * @tc.name       : testGetUserAgentError001
    * @tc.desc       : test GetUserAgent error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testGetUserAgentError001', 0, async (done: Function) => {
      Utils.emitEvent("emitGetUserAgent", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testGetUserAgentError001", '17100001', 1006, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_CLEARMATCHES_ERROR_0100
    * @tc.name       : testClearMatchesError001
    * @tc.desc       : test ClearMatches error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testClearMatchesError001', 0, async (done: Function) => {
      Utils.emitEvent("emitClearMatches", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testClearMatchesError001", '17100001', 1007, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_SEARCHNEXT_ERROR_0100
    * @tc.name       : testSearchNextError001
    * @tc.desc       : test SearchNext error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testSearchNextError001', 0, async (done: Function) => {
      Utils.emitEvent("emitSearchNext", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testSearchNextError001", '17100001', 1009, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_CLEARSSLCACHE_ERROR_0100
    * @tc.name       : testClearSslCacheError001
    * @tc.desc       : test ClearSslCache error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testClearSslCacheError001', 0, async (done: Function) => {
      Utils.emitEvent("emitClearSslCache", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testClearSslCacheError001", '17100001', 1010, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_CLEARCLIENTAUTHENTICATIONCACHE_ERROR_0100
    * @tc.name       : testClearClientAuthenticationCacheError001
    * @tc.desc       : test ClearClientAuthenticationCache error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testClearClientAuthenticationCacheError001', 0, async (done: Function) => {
      Utils.emitEvent("emitClearClientAuthenticationCache", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testClearClientAuthenticationCacheError001", '17100001', 1011, done);
      sendEventByKey('button', 10, '');
    })


    /*
    * @tc.number     : SUB_WEB_ZOOMIN_ERROR_0100
    * @tc.name       : testZoomInError001
    * @tc.desc       : test zoomIn error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testZoomInError001', 0, async (done: Function) => {
      Utils.emitEvent("emitZoomIn", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testZoomInError001", '17100001', 1012, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ZOOMIN_ERROR_0200
    * @tc.name       : testZoomInError002
    * @tc.desc       : test zoomIn error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testZoomInError002', 0, async (done: Function) => {
      Utils.emitEvent("emitZoomIn2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testZoomInError002", '17100004', 1013, done);
      sendEventByKey('button', 10, '');
    })


    /*
    * @tc.number     : SUB_WEB_WEBMESSAGEPORT_ERROR_0100
    * @tc.name       : testWebMessagePortError001
    * @tc.desc       : test WebMessagePort error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testWebMessagePortError001', 0, async (done: Function) => {
      Utils.emitEvent("emitWebMessagePort", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testWebMessagePortError001", '17100010', 1014, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_CREATEWEBMESSAGEPORTS_ERROR_0100
    * @tc.name       : testCreateWebMessagePortsError001
    * @tc.desc       : test CreateWebMessagePorts error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testCreateWebMessagePortsError001', 0, async (done: Function) => {
      Utils.emitEvent("emitCreateWebMessagePort", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testCreateWebMessagePortsError001", '17100001', 1021, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_POSTMESSAGE_ERROR_0100
    * @tc.name       : testPostMessageError001
    * @tc.desc       : test PostMessage error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testPostMessageError001', 0, async (done: Function) => {
      Utils.emitEvent("emitPostMessage", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testPostMessageError001", '17100001', 1022, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_REQUESTFOCUS_ERROR_0100
    * @tc.name       : testRequestfocusError001
    * @tc.desc       : test Requestfocus error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testRequestfocusError001', 0, async (done: Function) => {
      Utils.emitEvent("emitRequestFocus", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testRequestfocusError001", '17100001', 1023, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_REFRESH_ERROR_0100
    * @tc.name       : testRefreshError001
    * @tc.desc       : test Refresh error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testRefreshError001', 0, async (done: Function) => {
      Utils.emitEvent("emitRefresh", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testRefreshError001", '17100001', 1024, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_LOADDATA_ERROR_0100
    * @tc.name       : testLoadDataError001
    * @tc.desc       : test loadData error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testLoadDataError001', 0, async (done: Function) => {
      Utils.emitEvent("emitLoadData", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testLoadDataError001", '17100001', 1025, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_LOADDATA_ERROR_0200
    * @tc.name       : testLoadDataError002
    * @tc.desc       : test LoadData error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testLoadDataError002', 0, async (done: Function) => {
      Utils.emitEvent("emitLoadData2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testLoadDataError002", '17100002', 1026, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_LOADURL_ERROR_0100
    * @tc.name       : testLoadUrlError001
    * @tc.desc       : test LoadUrl error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testLoadUrlError001', 0, async (done: Function) => {
      Utils.emitEvent("emitLoadUrl", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testLoadUrlError001", '17100001', 1027, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ZOOMOUT_ERROR_0100
    * @tc.name       : testZoomOutError001
    * @tc.desc       : test zoomOut error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testZoomOutError001', 0, async (done: Function) => {
      Utils.emitEvent("emitZoomOut", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testZoomOutError001", '17100001', 1028, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_RUNJAVASCRIPT_ERROR_0100
    * @tc.name       : testRunJavaScriptError001
    * @tc.desc       : test runJavaScrip error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testRunJavaScriptError001', 0, async (done: Function) => {
      Utils.emitEvent("emitRunJsCallback", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testRunJavaScriptError001", '17100001', 1029, done);
      sendEventByKey('button', 10, '');
    })


    /*
    * @tc.number     : SUB_WEB_RUNJAVASCRIPT_ERROR_0200
    * @tc.name       : testRunJavaScriptError002
    * @tc.desc       : test runJavaScrip error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testRunJavaScriptError002', 0, async (done: Function) => {
      Utils.emitEvent("emitRunJsPromise", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testRunJavaScriptError002", '17100001', 1030, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_SLIDESCROLL_ERROR_0100
    * @tc.name       : testSlideScrollError001
    * @tc.desc       : test slideScroll error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testSlideScrollError001', 0, async (done: Function) => {
      Utils.emitEvent("emitSlideScroll", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testSlideScrollError001", '17100001', 1033, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_SCROLLBY_ERROR_0100
    * @tc.name       : testScrollByError001
    * @tc.desc       : test scrollBy error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testScrollByError001', 0, async (done: Function) => {
      Utils.emitEvent("emitScrollBy", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testScrollByError001", '17100001', 1034, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_SERIALIZEWEBSTATE_ERROR_0100
    * @tc.name       : testSerializeWebStateError001
    * @tc.desc       : test serializeWebState error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testSerializeWebStateError001', 0, async (done: Function) => {
      Utils.emitEvent("emitSerializeWebState", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testSerializeWebStateError001", '17100001', 1035, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_RESTOREWEBSTATE_ERROR_0100
    * @tc.name       : testRestoreWebStateError001
    * @tc.desc       : test restoreWebState error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testRestoreWebStateError001', 0, async (done: Function) => {
      Utils.emitEvent("emitRestoreWebState", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testSerializeWebStateError001", '17100001', 1036, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_STOP_ERROR_0100
    * @tc.name       : testStopError001
    * @tc.desc       : test stop error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testStopError001', 0, async (done: Function) => {
      Utils.emitEvent("emitStop", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testStopError001", '17100001', 1037, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_REGISTERJAVASCRIPTPROXY_ERROR_0100
    * @tc.name       : testRegisterJavaScriptProxyError001
    * @tc.desc       : test registerJavaScriptProxy error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testRegisterJavaScriptProxyError001', 0, async (done: Function) => {
      Utils.emitEvent("emitRegisterJavaScriptProxy", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testRegisterJavaScriptProxyError001", '17100001', 1038, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_DELETEJAVASCRIPTREGISTER_ERROR_0100
    * @tc.name       : testDeleteJavaScriptRegisterError001
    * @tc.desc       : test deleteJavaScriptRegister error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testDeleteJavaScriptRegisterError001', 0, async (done: Function) => {
      Utils.emitEvent("emitDeleteJavaScriptRegister", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testDeleteJavaScriptRegisterError001", '17100001', 1039, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_DELETEJAVASCRIPTREGISTER_ERROR_0200
    * @tc.name       : testDeleteJavaScriptRegisterError002
    * @tc.desc       : test deleteJavaScriptRegister error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testDeleteJavaScriptRegisterError002', 0, async (done: Function) => {
      Utils.emitEvent("emitDeleteJavaScriptRegister2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testDeleteJavaScriptRegisterError002", '17100008', 1040, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_GETHITTEST_ERROR_0100
    * @tc.name       : testGetHitTestError001
    * @tc.desc       : test getHitTest error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testGetHitTestError001', 0, async (done: Function) => {
      Utils.emitEvent("emitGetHitTest", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testGetHitTestError001", '17100001', 1041, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_STOREWEBARCHIVE_ERROR_0100
    * @tc.name       : testStoreWebArchiveError001
    * @tc.desc       : test storeWebArchive error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testStoreWebArchiveError001', 0, async (done: Function) => {
      Utils.emitEvent("emitStoreWebArchive", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testStoreWebArchiveError001", '17100001', 1042, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_STOREWEBARCHIVE_ERROR_0200
    * @tc.name       : testStoreWebArchiveError002
    * @tc.desc       : test storeWebArchive error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testStoreWebArchiveError002', 0, async (done: Function) => {
      Utils.emitEvent("emitStoreWebArchive2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testStoreWebArchiveError002", '17100003', 1043, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_GETTITLE_ERROR_0100
    * @tc.name       : testGetTitleError001
    * @tc.desc       : test getTitle error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testGetTitleError001', 0, async (done: Function) => {
      Utils.emitEvent("emitGetTitle", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testGetTitleError001", '17100001', 1044, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_GETPAGEHEIGHT_ERROR_0100
    * @tc.name       : testGetPageHeightError001
    * @tc.desc       : test getPageHeight error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testGetPageHeightError001', 0, async (done: Function) => {
      Utils.emitEvent("emitGetPageHeight", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testGetPageHeightError001", '17100001', 1045, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_GETHITTESTVALUE_ERROR_0100
    * @tc.name       : testGetHitTestValueError001
    * @tc.desc       : test getHitTestValue error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testGetHitTestValueError001', 0, async (done: Function) => {
      Utils.emitEvent("emitGetHitTestValue", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testGetHitTestValueError001", '17100001', 1046, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_GETWEBID_ERROR_0100
    * @tc.name       : testGetWebIdError001
    * @tc.desc       : test getWebId error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testGetWebIdError001', 0, async (done: Function) => {
      Utils.emitEvent("emitGetWebId", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testGetWebIdError001", '17100001', 1047, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_BACKORFORWARD_ERROR_0100
    * @tc.name       : testBackOrForwardError001
    * @tc.desc       : test backOrForward error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testBackOrForwardError001', 0, async (done: Function) => {
      Utils.emitEvent("emitBackOrForward", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testBackOrForwardError001", '17100001', 1048, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ZOOM_ERROR_0100
    * @tc.name       : testZoomError001
    * @tc.desc       : test zoom error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testZoomError001', 0, async (done: Function) => {
      Utils.emitEvent("emitZoom", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testZoomError001", '17100001', 1049, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ZOOM_ERROR_0200
    * @tc.name       : testZoomError002
    * @tc.desc       : test zoom error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testZoomError002', 0, async (done: Function) => {
      Utils.emitEvent("emitZoom2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testZoomError002", '17100004', 1050, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_LOADURL_ERROR_0200
    * @tc.name       : testLoadUrlError002
    * @tc.desc       : test LoadUrl error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testLoadUrlError002', 0, async (done: Function) => {
      Utils.emitEvent("emitLoadUrl2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testLoadUrlError002", '17100002', 1058, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_LOADURL_ERROR_0300
    * @tc.name       : testLoadUrlError003
    * @tc.desc       : test LoadUrl error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testLoadUrlError003', 0, async (done: Function) => {
      Utils.emitEvent("emitLoadUrl3", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testLoadUrlError003", '17100003', 1059, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_WEBMESSAGEPORT_ERROR_0200
    * @tc.name       : testWebMessagePortError002
    * @tc.desc       : test WebMessagePort error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testWebMessagePortError002', 0, async (done: Function) => {
      Utils.emitEvent("emitWebMessagePort2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testWebMessagePortError002", '17100010', 1064, done);
      sendEventByKey('button', 10, '');
    })

    /*
    * @tc.number     : SUB_WEB_ZOOMOUT_ERROR_0200
    * @tc.name       : testZoomOutError002
    * @tc.desc       : test zoomOut error
    * @tc.size       : MEDIUM
    * @tc.type       : Function
    * @tc.level      : Level 0
    */
    it('testZoomOutError002', 0, async (done: Function) => {
      Utils.emitEvent("emitZoomOut2", 10)
      await Utils.sleep(2000);
      Utils.registerEvent("testZoomOutError002", '17100004', 1065, done);
      sendEventByKey('button', 10, '');
    })

  })
}
