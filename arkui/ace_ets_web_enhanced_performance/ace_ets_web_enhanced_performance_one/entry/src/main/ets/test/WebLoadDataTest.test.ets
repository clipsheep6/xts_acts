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

import { afterEach, beforeEach, describe, it } from '@ohos/hypium';
import { Constants } from './Constants';
import Utils from './Utils';
import router from '@ohos.router';

export default function webLoadDataTest() {

  describe('WebLoadDataTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebLoadDataTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebLoadDataTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebLoadDataTest state success " + JSON.stringify(pages));
        if (!("WebLoadDataTest" == pages.name)) {
          console.info("get WebLoadDataTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebLoadDataTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebLoadDataTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebLoadDataTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebLoadDataTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0100
    * @tc.name        : testLoadData001
    * @tc.desc        : test loadData performance with data,mimeType,encoding
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData001', 0, async (done: Function) => {
      Utils.doIt("testLoadData001", 80100, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0200
    * @tc.name        : testLoadData002
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrl
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData002', 0, async (done: Function) => {
      Utils.doIt("testLoadData002", 80101, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0300
    * @tc.name        : testLoadData003
    * @tc.desc        : test loadData performance with data,mimeType,encoding,historyUrl
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData003', 0, async (done: Function) => {
      Utils.doIt("testLoadData003", 80102, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0400
    * @tc.name        : testLoadData004
    * @tc.desc        : test loadData performance with data,mimeType,encoding,historyUrl
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData004', 0, async (done: Function) => {
      Utils.doIt("testLoadData004", 80103, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0500
    * @tc.name        : testLoadData005
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrl=""
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData005', 0, async (done: Function) => {
      Utils.doIt("testLoadData005", 80104, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0600
    * @tc.name        : testLoadData006
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrl="",historyUrl=""
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData006', 0, async (done: Function) => {
      Utils.doIt("testLoadData006", 80106, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0700
    * @tc.name        : testLoadData007
    * @tc.desc        : test loadData performance with data,mimeType,encoding,historyUrll=""
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData007', 0, async (done: Function) => {
      Utils.doIt("testLoadData007", 80107, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0800
    * @tc.name        : testLoadData008
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrll="",historyUrl
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData008', 0, async (done: Function) => {
      Utils.doIt("testLoadData008", 80108, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADDATA_0900
    * @tc.name        : testLoadData009
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrll,historyUrl=""
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadData009', 0, async (done: Function) => {
      Utils.doIt("testLoadData009", 80109, Constants.WEB_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

  })
}
