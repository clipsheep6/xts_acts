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

export default function cloudSyncTest() {
  describe("cloudSyncTest", function () {
    const gallerySync = new cloudSync.GallerySync();
    beforeAll(async function () {
      console.info("beforeAll case");
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
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_GETGALLERYSYNC_001
     * @tc.name      : GallerySync
     * @tc.desc      : Obtains a GallerySync instance
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_GETMEDIALIBRAY_001", 0, async function (done) {
      try {
        expect(gallerySync != undefined).assertTrue();
        done();
      } catch (error) {
        console.info(`GallerySyncTest : getGallerySync 001 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_ON_001
     * @tc.name      : on
     * @tc.desc      : ON Progess
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
        console.info(`${testNum}:: error :${error}`);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_ON_002
     * @tc.name      : on
     * @tc.desc      : ON Progess
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
        console.info(`${testNum}:: error :${error}`);
        expect(true).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_ON_003
     * @tc.name      : on
     * @tc.desc      : ON Progess
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
        console.info(`${testNum}:: error :${error}`);
        expect(true).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_OFF_001
     * @tc.name      : off
     * @tc.desc      : off Progess
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_OFF_001", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_OFF_001";
      try {
        gallerySync.on("progress", (progress) => {
        });
        gallerySync.off("progress");
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum}:: error :${error}`);
        expect(false).assertTrue();
      }
    });

    /**
     * @tc.number    : SUB_CLOUDSYNC_GALLERYSYNC_OFF_002
     * @tc.name      : off
     * @tc.desc      : off Progess
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("SUB_CLOUDSYNC_GALLERYSYNC_OFF_002", 0, async function (done) {
      let testNum = "SUB_CLOUDSYNC_GALLERYSYNC_OFF_002";
      try {
        gallerySync.on("progress", (progress) => {
        });

        gallerySync.off("");
        expect(false).assertTrue();
      } catch (error) {
        console.info(`${testNum}:: error :${error}`);
        expect(true).assertTrue();
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
        let count = 0;
        gallerySync.start().then((result) => {
          count++;
          expect(count > 0).assertTrue();
        });
        await sleep(1000);
      } catch (error) {
        console.info(`${testNum}:: error :${error}`);
        expect(false).assertTrue();
      } finally {
        done();
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
        let count = 0;
        await gallerySync.start(() => {
          count++;
        });
        await sleep(1000);
        expect(count > 0).assertTrue();
      } catch (error) {
        console.info(`${testNum}:: error :${error}`);
        expect(false).assertTrue();
      } finally {
        done();
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
        let count = 0;
        gallerySync.start();
        sleep(1000);
        gallerySync.stop().then((result) => {
          count++;
          expect(count > 0).assertTrue();
        });
        await sleep(1000);
      } catch (error) {
        console.info(`${testNum}:: error :${error}`);
        expect(false).assertTrue();
      } finally {
        done();
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
        let count = 0;
        await gallerySync.start(() => {
        });
        await sleep(1000);
        await gallerySync.stop(() => {
          count++;
          expect(count > 0).assertTrue();
        });
        await sleep(1000);
      } catch (error) {
        console.info(`${testNum}:: error :${error}`);
        expect(false).assertTrue();
      } finally {
        done();
      }
    });
  });
}
