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

export default function cloudSyncTest() {
  let isConnect: boolean;
  describe("cloudSyncTest", function () {
    const gallerySync = new cloudSync.GallerySync();

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
      console.info("beforeAll case");
      let netId = await getNetId();
      if (netId >= 100) {
        isConnect = true;
      } else {
        isConnect = false;
      }
      console.log(`网络状态：${isConnect}`)
    });
    beforeEach(function () {
      console.info("beforeEach case");
    });
    afterEach(async function () {
      console.info("afterEach case");
      await sleep(0);
    });
    afterAll(function () {
      console.info("afterAll case");
    });

    const sleep = async function sleep(times) {
      if (!times) {
        times = 10;
      }
      await new Promise((res) => setTimeout(res, times));
    };

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_ON_001
     * @tc.name      : on
     * @tc.desc      : ON Progess Success
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_ON_001", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_ON_001";
      try {
        gallerySync.on('progress', (progress) => {
        });
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error}`)
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_ON_002
     * @tc.name      : on
     * @tc.desc      : ON Progess ——401: The input parameter is invalid
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_ON_002", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_ON_002";
      try {
        gallerySync.on("", (progress) => {
        });
        expect(false).assertTrue();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, error.message : ${error.message}`)
        expect(error.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_ON_003
     * @tc.name      : on
     * @tc.desc      : ON Progess ——Number of arguments unmatched
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_ON_003", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_ON_003";
      try {
        gallerySync.on((progress) => {
        });
        expect(false).assertTrue();
      } catch (error) {
        console.error(`${testNum}:: error : ${error}`)
        expect(true).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_OFF_001
     * @tc.name      : off
     * @tc.desc      : off Progess Success
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_OFF_001", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_OFF_001";
      try {
        gallerySync.off("progress");
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, error.message : ${error.message}`)
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_OFF_002
     * @tc.name      : off
     * @tc.desc      : off Progess ——401: The input parameter is invalid
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_OFF_002", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_OFF_002";
      try {
        gallerySync.off("");
        expect(false).assertTrue();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, error.message : ${error.message}`)
        expect(error.code == 401).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_START_PROMISE_001
     * @tc.name      : start
     * @tc.desc      : start sync by promise mode
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_START_PROMISE_001", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_START_PROMISE_001";
      try {
        await gallerySync.start().then((result) => {
          expect(isConnect).assertTrue();
        }).catch((err) => {
          console.error(`${testNum}:: err.code :${err.code}, err.message : ${err.message}`);
          if (isConnect) {
            console.error(`${testNum}:: err1.code :${err.code}, err1.message : ${err.message}`);
            expect(err.code == 13600001).assertTrue(); //IPC error
          } else {
            console.error(`${testNum}:: err2.code :${err.code}, err2.message : ${err.message}`);
            expect(err.code == 22400002).assertTrue(); //Network unavailable
          }
        });
        done();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, error.message : ${error.message}`)
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_START_CALLBACK_001
     * @tc.name      : start
     * @tc.desc      : start sync by callback mode
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_START_CALLBACK_001", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_START_CALLBACK_001";
      try {
        gallerySync.start((err) => {
          if (err) {
            console.error(`${testNum}:: err.code :${err.code}, err.message : ${err.message}`);
            if (isConnect) {
              console.error(`${testNum}:: err1.code :${err.code}, err1.message : ${err.message}`);
              expect(err.code == 13600001).assertTrue(); //IPC error
            } else {
              console.error(`${testNum}:: err2.code :${err.code}, err2.message : ${err.message}`);
              expect(err.code == 22400002).assertTrue(); //Network unavailable
            }
          } else {
            expect(true).assertTrue();
          }
        });
        done();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, error.message : ${error.message}`)
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_STOP_PROMISE_001
     * @tc.name      : stop
     * @tc.desc      : stop sync by promise mode
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_STOP_PROMISE_001", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_STOP_PROMISE_001";
      try {
        await gallerySync.stop().then((info) => {
          expect(true).assertTrue();
          done();
        }).catch((err) => {
          expect(false).assertTrue();
          done();
        });
      } catch (err) {
        if (isConnect) {
          console.error(`${testNum}:: err1.code :${err.code}, err1.message : ${err.message}`);
          expect(err.code == 13600001).assertTrue(); //IPC error
        } else {
          console.error(`${testNum}:: err2.code :${err.code}, err2.message : ${err.message}`);
          expect(err.code == 22400002).assertTrue(); //Network unavailable
        }
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_STOP_CALLBACK_001
     * @tc.name      : stop
     * @tc.desc      : stop sync by callback mode
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_STOP_CALLBACK_001", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_STOP_CALLBACK_001";
      try {
        gallerySync.stop((err) => {
          if (err) {
            if (isConnect) {
              console.error(`${testNum}:: err1.code :${err.code}, err1.message : ${err.message}`);
              expect(err.code == 13600001).assertTrue(); //IPC error
            } else {
              console.error(`${testNum}:: err2.code :${err.code}, err2.message : ${err.message}`);
              expect(err.code == 22400002).assertTrue(); //Network unavailable
            }
          } else {
            expect(true).assertTrue();
          }
        });
        done();
      } catch (error) {
        console.error(`${testNum}:: error.code :${error.code}, error.message : ${error.message}`)
        expect(false).assertTrue();
      }
    });
  });
}
