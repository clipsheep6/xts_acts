/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import featureAbility from '@ohos.ability.featureAbility';
import { describe, beforeEach, afterEach, beforeAll, afterAll, it, expect } from '@ohos/hypium';
import Utils from './Utils';
import backgroundTaskManager from '@ohos.backgroundTaskManager';

export default function ContextJsunit() {
  describe('faContextTest', () => {

    /*
    *@tc.number     : Context_GetCacheDir_Test_0100
    *@tc.name       : Context_GetCacheDir_Test_0100
    *@tc.desc       : Check the return value of getCacheDir (by promise)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it("Context_GetCacheDir_Test_0100", 0, async (done: Function) => {
      console.log("------------------start context_getCacheDir_test_0100-------------------");
      try {
        let timeOldStamp = Utils.getNowTime();
        let context = featureAbility.getContext();
        context.getCacheDir()
          .then((data) => {
            let timeNewStamp = Utils.getNowTime();
            Utils.getDurationTime('context_getCacheDir_test_0100', timeOldStamp, timeNewStamp);
            console.log("context_getCacheDir_test_0100: CacheDir is " + data);
            expect(typeof (data)).assertEqual("string");
            expect(data).assertEqual("/data/storage/el2/base/haps/entry/cache");
            console.log("------------------end context_getCacheDir_test_0100-------------------");
            done();
          })
      } catch (error) {
        console.log("logMessage context_getCacheDir_test_0100: error = " + error);
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_GetCacheDir_Test_0200
    *@tc.name       : Context_GetCacheDir_Test_0200
    *@tc.desc       : Check the return value of getCacheDir (by AsyncCallback)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it("Context_GetCacheDir_Test_0200", 0, async (done: Function) => {
      console.log("------------------start context_getCacheDir_test_0200-------------------");
      try {
        let timeOldStamp = Utils.getNowTime();
        let context = featureAbility.getContext();
        context.getCacheDir((err, data) => {
          let timeNewStamp = Utils.getNowTime();
          Utils.getDurationTime('context_getCacheDir_test_0200', timeOldStamp, timeNewStamp);
          console.log("context_getCacheDir_test_0200: getCacheDir successful, result = " + data);
          expect(typeof (data)).assertEqual("string");
          expect(data).assertEqual("/data/storage/el2/base/haps/entry/cache");
          console.log("------------------end context_getCacheDir_test_0200-------------------");
          done();
        })
      } catch (error) {
        console.log("logMessage context_getCacheDir_test_0200: error = " + error);
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_GetFilesDir_Test_0100
    *@tc.name       : Context_GetFilesDir_Test_0100
    *@tc.desc       : Check the return value of getFilesDir (by promise)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it("Context_GetFilesDir_Test_0100", 0, async (done: Function) => {
      console.log("------------------start context_getFilesDir_test_0100-------------------");
      try {
        let timeOldStamp = await Utils.getNowTime();
        let context = await featureAbility.getContext();
        context.getFilesDir()
          .then((data) => {
            let timeNewStamp = Utils.getNowTime();
            Utils.getDurationTime('context_getFilesDir_test_0100', timeOldStamp, timeNewStamp);
            console.log("context_getFilesDir_test_0100：FilesDir is " + data);
            expect(typeof (data)).assertEqual("string");
            expect(data).assertEqual("/data/storage/el2/base/haps/entry/files");
            console.log("------------------end context_getFilesDir_test_0100-------------------");
            done();
          })
      } catch (error) {
        console.log("logMessage context_getFilesDir_test_0100: error = " + error);
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_GetFilesDir_Test_0200
    *@tc.name       : Context_GetFilesDir_Test_0200
    *@tc.desc       : Check the return value of getFilesDir (by AsyncCallback)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it("Context_GetFilesDir_Test_0200", 0, async (done: Function) => {
      console.log("------------------start context_getFilesDir_test_0200-------------------");
      try {
        let timeOldStamp = await Utils.getNowTime();
        let context = await featureAbility.getContext();
        context.getFilesDir((err, data) => {
          let timeNewStamp = Utils.getNowTime();
          Utils.getDurationTime('context_getFilesDir_test_0200', timeOldStamp, timeNewStamp);
          console.log("context_getFilesDir_test_0200: getFilesDir successful, result = " + data);
          expect(typeof (data)).assertEqual("string");
          expect(data).assertEqual("/data/storage/el2/base/haps/entry/files");
          console.log("------------------end context_getFilesDir_test_0200-------------------");
          done();
        })
      } catch (error) {
        console.log("logMessage context_getFilesDir_test_0200: error = " + error);
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_GetOrCreateDistributedDir_0100
    *@tc.name       : Context_GetOrCreateDistributedDir_0100
    *@tc.desc       : Check the return value of getOrCreateDistributedDir (by promise)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it("Context_GetOrCreateDistributedDir_0100", 0, async (done: Function) => {
      console.log("------------------start context_getOrCreateDistributedDir_0100-------------------");
      try {
        let timeOldStamp = Utils.getNowTime();
        let context = featureAbility.getContext();
        context.getOrCreateDistributedDir().then((data) => {
          let timeNewStamp = Utils.getNowTime();
          Utils.getDurationTime('context_getOrCreateDistributedDir_0100', timeOldStamp, timeNewStamp);
          console.log("context_getOrCreateDistributedDir_0100: DistributedDir is " + data);
          expect(typeof (data)).assertEqual("string");
          expect(data).assertEqual("/data/storage/el2/distributedfiles");
          console.log("------------------end context_getOrCreateDistributedDir_0100-------------------");
          done();
        })
      } catch (error) {
        console.log("logMessage context_getOrCreateDistributedDir_0100: error = " + error);
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_GetOrCreateDistributedDir_0200
    *@tc.name       : Context_GetOrCreateDistributedDir_0200
    *@tc.desc       : Check the return value of getOrCreateDistributedDir (by AsyncCallback)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it("Context_GetOrCreateDistributedDir_0200", 0, async (done: Function) => {
      console.log("------------------start context_getOrCreateDistributedDir_0200-------------------");
      try {
        let timeOldStamp = await Utils.getNowTime();
        let context = await featureAbility.getContext();
        context.getOrCreateDistributedDir((err, data) => {
          let timeNewStamp = Utils.getNowTime();
          Utils.getDurationTime('context_getOrCreateDistributedDir_0200', timeOldStamp, timeNewStamp);
          console.log("context_getOrCreateDistributedDir_0200: getOrCreateDistributedDir successful, result = " + data);
          expect(typeof (data)).assertEqual("string");
          expect(data).assertEqual("/data/storage/el2/distributedfiles");
          console.log("------------------end context_getOrCreateDistributedDir_0200-------------------");
          done();
        })
      } catch (error) {
        console.log("logMessage context_getOrCreateDistributedDir_0200: error = " + error);
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_GetAppType_0100
    *@tc.name       : Context_GetAppType_0100
    *@tc.desc       : Check the return value of getAppType (by promise)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it("Context_GetAppType_0100", 0, async (done: Function) => {
      console.log("------------------start context_getAppType_0100-------------------");
      try {
        let timeOldStamp = Utils.getNowTime();
        let context = featureAbility.getContext();
        context.getAppType()
          .then((data) => {
            let timeNewStamp = Utils.getNowTime();
            Utils.getDurationTime('context_getAppType_0100_0100', timeOldStamp, timeNewStamp);
            console.log("context_getAppType_0100: AppType is " + data);
            expect(typeof (data)).assertEqual("string");
            expect(data).assertEqual("system");
            console.log("------------------end context_getAppType_0100-------------------");
            done();
          })
      } catch (error) {
        console.log("logMessage context_getAppType_0100: error = " + error);
        expect().assertFail();
        done();
      }
    })

    /*
    *@tc.number     : Context_GetAppType_0200
    *@tc.name       : Context_GetAppType_0200
    *@tc.desc       : Check the return value of getAppType (by AsyncCallback)
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it("Context_GetAppType_0200", 0, async (done: Function) => {
      console.log("------------------start context_getAppType_0200-------------------");
      try {
        let timeOldStamp = await Utils.getNowTime();
        let context = await featureAbility.getContext();
        context.getAppType((err, data) => {
          let timeNewStamp = Utils.getNowTime();
          Utils.getDurationTime('context_getAppType_0200_0100', timeOldStamp, timeNewStamp);
          console.log("context_getAppType_0200: getAppType successful, result = " + data);
          expect(typeof (data)).assertEqual("string");
          expect(data).assertEqual("system");
          console.log("------------------end context_getAppType_0200-------------------");
          done();
        })
      } catch (error) {
        console.log("logMessage context_getAppType_0200: error = " + error);
        expect().assertFail();
        done();
      }
    })
  })
}
