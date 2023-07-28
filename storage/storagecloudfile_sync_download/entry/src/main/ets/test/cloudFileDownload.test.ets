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
import connection from '@ohos.net.connection'
// @ts-ignore
import cloudSync from '@ohos.file.cloudsync';

export default function cloudFileDownloadTest() {

  let uri_ = "file://media/image/7";
  let cloudSyncDownload
  let isConnect: boolean;
  describe('cloud_file_download_test', async function () {

    async function getNetId(): Promise<number> {
      let netId = 0;
      try {
        let netHandle = await connection.getDefaultNet();
        if (netHandle) {
          console.log(`getNetId Info : ${JSON.stringify(netHandle)}`)
          netId = netHandle.netId;
        }
      } catch (error) {
        console.error(`getNetId Error : ${JSON.stringify(error)}`)
      }
      return netId;
    }

    beforeAll(async function () {
      console.info("beforeAll case uri: " + uri_);
      try {
        let netId = await getNetId();
        if (netId >= 100) {
          isConnect = true;
        } else {
          isConnect = false;
        }
        console.info(`网络状态：${isConnect}`);
        cloudSyncDownload = new cloudSync.Download();
      } catch (err) {
        console.error("beforeAll case err: " + err);
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

    function errHandle(err, tag: string) {
      console.error(`${tag} err.code :${err.code}, err.message : ${err.message}, isConnect : ${isConnect}`);
      if (err.code != undefined) {
        switch (err.code) {
          case 13600001: //IPC error
            console.error(`${tag} IPC error`);
            expect(true).assertTrue();
            break
          case 22400002: //Network unavailable
            console.error(`${tag} Network unavailable`);
            expect(true).assertTrue();
            break
          case 401: //The input parameter is invalid
            console.error(`${tag} The input parameter is invalid`);
            expect(true).assertTrue();
            break
        }
      } else {
        console.error(`${tag} catch failed. err = ${JSON.stringify(err)}`);
        expect(false).assertTrue();
      }
    };

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_000
     * @tc.name download_start_test_000
     * @tc.desc Function of API, Test start() interfaces. fail(13600001)
     */
    it('download_start_test_000', 0, async function (done) {
      let TAG = "start_test_000::";
      try {
        let uri = "qqewasddasd";
        cloudSyncDownload.start(uri, (err, info) => {
          if (err) {
            errHandle(err, TAG);
          } else {
            console.info(`${TAG} succeed. info = ${info}`);
          }
          done();
        });
      } catch (err) {
        console.error(`${TAG} catch failed. err.code :${err.code}, err.message : ${err.message}`);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_001
     * @tc.name download_start_test_001
     * @tc.desc Function of API, Test start() interfaces. success
     */
    it('download_start_test_001', 0, function (done) {
      let TAG = "start_test_001::";
      let uri = uri_;
      try {
        console.info(`${TAG} uri: ${uri}`);
        cloudSyncDownload.start(uri, (err, info) => {
          if (err) {
            errHandle(err, TAG);
          } else {
            console.info(`${TAG} succeed. info = ${info}`);
          }
          done();
        });
      } catch (err) {
        console.error(`${TAG} catch failed. err.code :${err.code}, err.message : ${err.message}`);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_002
     * @tc.name download_start_test_002
     * @tc.desc Function of API, Test start() interfaces. success
     */
    it('download_start_test_002', 0, async function (done) {
      let TAG = "start_test_002::";
      try {
        let uri = "qqewasddasd123";
        let result = await cloudSyncDownload.start(uri);
        console.info(`${TAG} succeed. result = ${result}`);
        expect(true).assertTrue();
        done();
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_003
     * @tc.name download_start_test_003
     * @tc.desc Function of API, Test start() interfaces. fail
     */
    it('download_start_test_003', 0, function (done) {
      let TAG = "start_test_003::";
      try {
        cloudSyncDownload.start();
        expect(false).assertTrue();
        done();
      } catch (err) {
        console.error(`${TAG} err.code :${err.code}, err.message : ${err.message}, isConnect : ${isConnect}`);
        expect(err.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_004
     * @tc.name download_start_test_004
     * @tc.desc Function of API, Test start() interfaces. fail
     */
    it('download_start_test_004', 0, function (done) {
      let TAG = "start_test_004::";
      try {
        cloudSyncDownload.start(undefined);
      } catch (err) {
        console.error(`${TAG} err.code :${err.code}, err.message : ${err.message}, isConnect : ${isConnect}`);
        expect(err.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_START_TEST_005
     * @tc.name download_start_test_005
     * @tc.desc Function of API, Test start() interfaces. fail
     */
    it('download_start_test_005', 0, function (done) {
      let TAG = "start_test_005::";
      try {
        cloudSyncDownload.start(() => {
        }, (info) => {
          console.info(`${TAG} succeed. info = ${info}`);
          expect(false).assertTrue();
        });
      } catch (err) {
        console.error(`${TAG} err.code :${err.code}, err.message : ${err.message}, isConnect : ${isConnect}`);
        expect(err.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_000
     * @tc.name download_stop_test_000
     * @tc.desc Function of API, Test stop() interfaces. success
     */
    it('download_stop_test_000', 0, async function (done) {
      let TAG = "stop_test_000::";
      try {
        let uri = "qqewasddasd";
        cloudSyncDownload.stop(uri, (err, info) => {
          if (err) {
            errHandle(err, TAG);
            done();
          } else {
            console.info(`${TAG} succeed. info = ${info}`);
          }
          done();
        });
      } catch (err) {
        console.error(`${TAG} catch failed. err = ${JSON.stringify(err)}`);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_001
     * @tc.name download_stop_test_001
     * @tc.desc Function of API, Test stop() interfaces. success
     */
    it('download_stop_test_001', 0, async function (done) {
      let TAG = "stop_test_001::";
      try {
        let uri = "";
        await cloudSyncDownload.stop(uri);
        expect(true).assertTrue();
        done();
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_002
     * @tc.name download_stop_test_002
     * @tc.desc Function of API, Test stop() interfaces. fail
     */
    it('download_stop_test_002', 0, function (done) {
      let TAG = "stop_test_002::";
      try {
        cloudSyncDownload.stop();
        expect(false).assertTrue();
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_003
     * @tc.name download_stop_test_003
     * @tc.desc Function of API, Test stop() interfaces. fail
     */
    it('download_stop_test_003', 0, function (done) {
      let TAG = "stop_test_003::";
      try {
        cloudSyncDownload.stop(undefined);
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_STOP_TEST_004
     * @tc.name download_stop_test_004
     * @tc.desc Function of API, Test stop() interfaces.fail
     */
    it('download_stop_test_004', 0, function (done) {
      let TAG = "stop_test_004::";
      try {
        cloudSyncDownload.stop(undefined, undefined);
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_ON_TEST_000
     * @tc.name download_stop_test_000
     * @tc.desc Function of API, Test on() interfaces. fail
     */
    it('download_on_test_000', 0, function (done) {
      let TAG = "on_test_000::";
      try {
        cloudSyncDownload.on(undefined, (progress) => {
          console.info("on：callback succeed.");
          if (progress != undefined) {
            console.info("on：callback succeed. progress.uri = " + progress.uri);
            expect(false).assertTrue();
          }
        })
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_ON_TEST_001
     * @tc.name download_stop_test_001
     * @tc.desc Function of API, Test on() interfaces. fail
     */
    it('download_on_test_001', 0, function (done) {
      let TAG = "on_test_001::";
      try {
        cloudSyncDownload.on(undefined);
        expect(false).assertTrue();
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_OFF_TEST_000
     * @tc.name download_stop_test_000
     * @tc.desc Function of API, Test off() interfaces. fail
     */
    it('download_off_test_000', 0, function (done) {
      let TAG = "off_test_000::";
      try {
        cloudSyncDownload.off(undefined);
        expect(false).assertTrue();
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });

    /**
     * @tc.number SUB_STORAGE_DOWNLOAD_OFF_TEST_001
     * @tc.name download_stop_test_001
     * @tc.desc Function of API, Test off() interfaces. fail
     */
    it('download_off_test_001', 0, function (done) {
      let TAG = "off_test_001::";
      try {
        cloudSyncDownload.off(undefined, undefined);
        expect(false).assertTrue();
      } catch (err) {
        errHandle(err, TAG);
        done();
      }
    });
  })
}