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

import { beforeEach, describe, it } from '@ohos/hypium';
import Utils from './Utils';
import router from '@ohos.router';
import { Constants } from './Constants'

export default function webViewPerformanceWebContextMenu() {

  describe('WebViewPerformanceWebContextMenu', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebViewPerformanceWebContextMenu',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebViewPerformanceWebContextMenu state success " + JSON.stringify(pages));
        if (!("WebViewPerformanceWebContextMenu" == pages.name)) {
          console.info("get WebViewPerformanceWebContextMenu state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebViewPerformanceWebContextMenu page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebViewPerformanceWebContextMenu page error: " + err);
      }
      done()
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_X_0100
    * @tc.name       : testWebContextMenuParamX001
    * @tc.desc       : test WebContextMenuParam
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamX001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamX001", 801, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*+
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_Y_0100
    * @tc.name       : testWebContextMenuParamY001
    * @tc.desc       : test WebContextMenuParam
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamY001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamY001", 802, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_GETLINKURL_0100
    * @tc.name       : testWebContextMenuParamGetLinkUrl001
    * @tc.desc       : test WebContextMenuParamGetLinkUrl
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamGetLinkUrl001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamGetLinkUrl001", 803, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_GETUNFILTEREDLINKURL_0100
    * @tc.name       : testWebContextMenuParamGetUnfilteredLinkUrl001
    * @tc.desc       : test WebContextMenuParamGetUnfilteredLinkUrl
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamGetUnfilteredLinkUrl001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamGetUnfilteredLinkUrl001", 804, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_GETSOURCEURL_0100
    * @tc.name       : testWebContextMenuParamGetSourceUrl001
    * @tc.desc       : test WebContextMenuParamGetSourceUrl
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamGetSourceUrl001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamGetSourceUrl001", 805, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_EXISTSIMAGECONTENTS_0100
    * @tc.name       : testWebContextMenuParamExistsImageContents001
    * @tc.desc       : test WebContextMenuParamExistsImageContents
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamExistsImageContents001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamExistsImageContents001", 806, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_GETMEDIATYPE_0100
    * @tc.name       : testWebContextMenuParamGetMediaType001
    * @tc.desc       : test WebContextMenuParamGetMediaType
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamGetMediaType001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamGetMediaType001", 807, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_GETSELECTIONTEXT_0100
    * @tc.name       : testWebContextMenuParamGetSelectionText001
    * @tc.desc       : test WebContextMenuParamGetSelectionText
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamGetSelectionText001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamGetSelectionText001", 808, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_GETSOURCETYPE_0100
    * @tc.name       : testWebContextMenuParamGetSourceType001
    * @tc.desc       : test WebContextMenuParamGetSourceType
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamGetSourceType001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamGetSourceType001", 809, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_GETINPUTFIELDTYPE_0100
    * @tc.name       : testWebContextMenuParamGetInputFieldType001
    * @tc.desc       : test WebContextMenuParamGetInputFieldType
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamGetInputFieldType001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamGetInputFieldType001", 810, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_ISEDITABLE_0100
    * @tc.name       : testWebContextMenuParamIsEditable001
    * @tc.desc       : test WebContextMenuParamIsEditable
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamIsEditable001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamIsEditable001", 811, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENUPARAM_GETEDITSTATEFLAGS_0100
    * @tc.name       : testWebContextMenuParamGetEditStateFlags001
    * @tc.desc       : test WebContextMenuParamGetEditStateFlags
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuParamGetEditStateFlags001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuParamGetEditStateFlags001", 812, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
   * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENURESULT_COPYIMAGE_0100
   * @tc.name       : testWebContextMenuResultCopyImage001
   * @tc.desc       : test WebContextMenuResultCopyImage
   * @tc.size       : MediumTest
   * @tc.type       : Function
   * @tc.level      : Level 1
   */
    it('testWebContextMenuResultCopyImage001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuResultCopyImage001", 3001, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENURESULT_CLOSECONTEXTMENU_0100
    * @tc.name       : testWebContextMenuResultCloseContextMenu001
    * @tc.desc       : test WebContextMenuResultCloseContextMenu
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuResultCloseContextMenu001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuResultCloseContextMenu001", 3002, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENURESULT_COPY_0100
    * @tc.name       : testWebContextMenuResultCopy001
    * @tc.desc       : test WebContextMenuResultCopy
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuResultCopy001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuResultCopy001", 3003, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENURESULT_PASTE_0100
    * @tc.name       : testWebContextMenuResultPaste001
    * @tc.desc       : test WebContextMenuResultPaste
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuResultPaste001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuResultPaste001", 3004, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENURESULT_CUT_0100
    * @tc.name       : testWebContextMenuResultCut001
    * @tc.desc       : test WebContextMenuResultCut
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuResultCut001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuResultCut001", 3005, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBCONTEXTMENURESULT_SELECTALL_0100
    * @tc.name       : testWebContextMenuResultSelectAll001
    * @tc.desc       : test WebContextMenuResultSelectAll
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebContextMenuResultSelectAll001', 0, async (done: Function) => {
      Utils.doIt("testWebContextMenuResultSelectAll001", 3006, Constants.WEB_CONTEXT_MENU_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })
  })
}
