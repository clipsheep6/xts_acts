/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import cloudSync from '@ohos.file.cloudSync';

export default function cloudFileDownloadTest() {

  let cloudSyncDownload

  describe('cloud_file_download_test', function () {
    beforeAll(async function () {
      console.info("beforeAll case");
      try {
        cloudSyncDownload = new cloudSync.Download();
      } catch (err) {
        console.info("beforeAll case err: " + err);
      }
    });
    beforeEach(function () {
      console.info("beforeEach case");

    });
    afterEach(async function () {
      console.info("afterEach case");
    });
    afterAll(function () {
      console.info("afterAll case");
    });
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_000
     * @tc.name download_start_test_000
     * @tc.desc Function of API, Test start() interfaces. success
     */
    it('download_start_test_000', 0, function (done) {
      try {
        let uri = "qqewasddasd";
        cloudSyncDownload.start(uri, (err, info) => {
          if (err) {
            console.info("start：callback succeed. err = " + err);
            expect(true).assertTrue();
          } else {
            console.info("start：callback succeed. info = " + info);
          }
          done();
        });
      } catch (err) {
        console.info("start：callback catch failed. err = " + err);
        expect(false).assertTrue();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_001
     * @tc.name download_start_test_001
     * @tc.desc Function of API, Test start() interfaces. success
     */
    it('download_start_test_001', 0, async function (done) {
      try {
        let uri = "qqewasddasd123";
        let result = await cloudSyncDownload.start(uri)
        console.info("start：promise succeed. result = " + result);
        expect(false).assertTrue();
      } catch (err) {
        console.info("start：promise catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_002
     * @tc.name download_start_test_002
     * @tc.desc Function of API, Test start() interfaces. fail
     */
    it('download_start_test_002', 0, function (done) {
      try {
        cloudSyncDownload.start();
        expect(false).assertTrue();
        done();
      } catch (err) {
        console.info("start failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_003
     * @tc.name download_start_test_003
     * @tc.desc Function of API, Test start() interfaces. fail
     */
    it('download_start_test_003', 0, function (done) {
      try {
        cloudSyncDownload.start(undefined);
      } catch (err) {
        console.info("start：callback catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_004
     * @tc.name download_start_test_004
     * @tc.desc Function of API, Test start() interfaces. fail
     */
    it('download_start_test_004', 0, function (done) {
      try {
        cloudSyncDownload.start(() => {
        }, (info) => {
          console.info("start：callback succeed. info = " + info);
          expect(false).assertTrue();
        });
      } catch (err) {
        console.info("start：callback catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_000
     * @tc.name download_stop_test_000
     * @tc.desc Function of API, Test stop() interfaces. success
     */
    it('download_stop_test_000', 0, async function (done) {
      try {
        let uri = "qqewasddasd";
        cloudSyncDownload.stop(uri, (err, info) => {
          if (err) {
            console.info("stop：callback failed. err = " + err);
            expect(true).assertTrue();
          } else {
            console.info("stop：callback succeed. info = " + info);
          }
          done();
        });
      } catch (err) {
        console.info("stop：callback catch failed. err = " + err);
        expect(false).assertTrue();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_001
     * @tc.name download_stop_test_001
     * @tc.desc Function of API, Test stop() interfaces. success
     */
    it('download_stop_test_001', 0, async function (done) {
      try {
        let uri = "";
        let result = await cloudSyncDownload.stop(uri)
        console.info("stop：promise succeed. result = " + result);
        expect(false).assertTrue();
      } catch (err) {
        console.info("stop：promise catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_002
     * @tc.name download_stop_test_002
     * @tc.desc Function of API, Test stop() interfaces. fail
     */
    it('download_stop_test_002', 0, function (done) {
      try {
        cloudSyncDownload.stop();
        expect(false).assertTrue();
      } catch (err) {
        console.info("stop failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_003
     * @tc.name download_stop_test_003
     * @tc.desc Function of API, Test stop() interfaces. fail
     */
    it('download_stop_test_003', 0, function (done) {
      try {
        cloudSyncDownload.stop(undefined);
      } catch (err) {
        console.info("stop：promise catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_004
     * @tc.name download_stop_test_004
     * @tc.desc Function of API, Test stop() interfaces.fail
     */
    it('download_stop_test_004', 0, function (done) {
      try {
        cloudSyncDownload.stop(undefined, undefined);
      } catch (err) {
        console.info("stop：callback catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_ON_TEST_000
     * @tc.name download_stop_test_000
     * @tc.desc Function of API, Test on() interfaces. fail
     */
    it('download_on_test_000', 0, function (done) {
      try {
        cloudSyncDownload.on(undefined, (progress) => {
          console.info("on：callback succeed.");
          if (progress != undefined) {
            console.info("on：callback succeed. progress.uri = " + progress.uri);
            expect(false).assertTrue();
          }
        })
      } catch (e) {
        console.info("on：callback failed. e = " + e);
        expect(true).assertTrue();
        done();
      }
    });
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_ON_TEST_001
     * @tc.name download_stop_test_001
     * @tc.desc Function of API, Test on() interfaces. fail
     */
    it('download_on_test_001', 0, function (done) {
      try {
        let result = cloudSyncDownload.on(undefined);
        if (result == undefined) {
          console.info("on：callback succeed. result = " + result);
        }
        expect(false).assertTrue();
      } catch (err) {
        console.info("on：callback catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_OFF_TEST_000
     * @tc.name download_stop_test_000
     * @tc.desc Function of API, Test off() interfaces. fail
     */
    it('download_off_test_000', 0, function (done) {
      try {
        let result = cloudSyncDownload.off(undefined);
        if (result == undefined) {
          console.info("on：callback succeed. result = " + result);
        }
        expect(false).assertTrue();
      } catch (err) {
        console.info("on：callback catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_OFF_TEST_001
     * @tc.name download_stop_test_001
     * @tc.desc Function of API, Test off() interfaces. fail
     */
    it('download_off_test_001', 0, function (done) {
      try {
        let result = cloudSyncDownload.off(undefined, undefined);
        if (result == undefined) {
          console.info("on：callback succeed. result = " + result);
        }
        expect(false).assertTrue();
      } catch (err) {
        console.info("on：callback catch failed. err = " + err);
        expect(true).assertTrue();
        done();
      }
    })
  })
}