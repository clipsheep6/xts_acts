/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import { describe, afterEach, it, expect } from "deccjsunit/index";
import { sleep, startAbility } from "../../../../../../../common"
import photoAccessHelper from '@ohos.file.photoAccessHelper'

export default function photoPickerTest() {
  describe("photoPickerTest", function () {
    afterEach(async function() {
      await sleep(500);
      await startAbility('ohos.acts.storage.picker', 'com.example.myapplication.MainAbility');
      await sleep(500);
    })

    async function selectPromise(testNum, done, isSelectOriginal, expectSelectNum = 2) {
      try {
        let photoPicker = new photoAccessHelper.PhotoViewPicker();
        photoPicker.select().then((result) => {
          console.info(`${testNum}::select result: ${JSON.stringify(result)}`);
          expect(result.photoUris.length).assertEqual(expectSelectNum);
          done();
        }).catch((err) => {
          console.info(`${testNum}::select err: ${JSON.stringify(err)}`);
          expect(false).assertTrue();
          done();
        })
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum}::select error: ${JSON.stringify(error)}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function selectCallback(testNum, done, isSelectOriginal, expectSelectNum = 2) {
      try {
        let photoPicker = new photoAccessHelper.PhotoViewPicker();
        photoPicker.select((err, result) => {
          if (err != undefined) {
            console.info(`${testNum}::select err: ${JSON.stringify(err)}`);
            expect(false).assertTrue();
            done();
            return;
          }
          console.info(`${testNum}::select result: ${JSON.stringify(result)}`);
          expect(result.photoUris.length).assertEqual(expectSelectNum);
          expect(result.isOriginalPhoto).assertEqual(isSelectOriginal);
          done();
        });
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum}::select error: ${JSON.stringify(error)}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function selectWithOptionPromise(testNum, done, option, expectSelectNum) {
      try {
        let photoPicker = new photoAccessHelper.PhotoViewPicker();
        photoPicker.select(option).then((result) => {
          console.info(`${testNum}::selectWithOption result: ${JSON.stringify(result)}`);
          expect(result.photoUris.length).assertEqual(expectSelectNum);
          done();
        }).catch((err) => {
          console.info(`${testNum}::selectWithOption err: ${JSON.stringify(err)}`);
          expect(false).assertTrue();
          done();
        })
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum}::selectWithOption error: ${JSON.stringify(error)}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function selectWithOptionCallback(testNum, done, option, expectSelectNum) {
      try {
        let photoPicker = new photoAccessHelper.PhotoViewPicker();
        photoPicker.select(option, (err, result) => {
          if (err != undefined) {
            console.info(`${testNum}::selectWithOption err: ${JSON.stringify(err)}`);
            expect(false).assertTrue();
            done();
            return;
          }
          console.info(`${testNum}::selectWithOption result: ${JSON.stringify(result)}`);
          expect(result.photoUris.length).assertEqual(expectSelectNum);
          done();
        });
        expect(true).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum}::selectWithOption error: ${JSON.stringify(error)}`);
        expect(false).assertTrue();
        done();
      }
    }

    //promise
    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_PROMISE_0000
     * @tc.name      : photopicker_select_promise_000
     * @tc.desc      : select image
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_promise_000", 0, async function (done) {
      let testNum = "photopicker_select_promise_000";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_TYPE;
      let expectSelectNum = 1;
      await selectWithOptionPromise(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_PROMISE_0100
     * @tc.name      : photopicker_select_promise_001
     * @tc.desc      : select video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_promise_001", 0, async function (done) {
      let testNum = "photopicker_select_promise_001";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.VIDEO_TYPE;
      let expectSelectNum = 1;
      await selectWithOptionPromise(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_PROMISE_0200
     * @tc.name      : photopicker_select_promise_002
     * @tc.desc      : select image&video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_promise_002", 0, async function (done) {
      let testNum = "photopicker_select_promise_002";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_VIDEO_TYPE;
      let expectSelectNum = 1;
      await selectWithOptionPromise(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_PROMISE_0300
     * @tc.name      : photopicker_select_promise_003
     * @tc.desc      : select image&video, singleSelect
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_promise_003", 0, async function (done) {
      let testNum = "photopicker_select_promise_003";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_VIDEO_TYPE;
      option.maxSelectNumber = 1;
      let expectSelectNum = 1;
      await selectWithOptionPromise(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_PROMISE_0400
     * @tc.name      : photopicker_select_promise_004
     * @tc.desc      : select image&video, multipleselect
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
    */
    it("photopicker_select_promise_004", 1, async function (done) {
      let testNum = "photopicker_select_promise_004";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_VIDEO_TYPE;
      option.maxSelectNumber = 2;
      let expectSelectNum = 2;
      await selectWithOptionPromise(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_PROMISE_0500
     * @tc.name      : photopicker_select_promise_005
     * @tc.desc      : select image&video, default selectNum
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_promise_005", 0, async function (done) {
      let testNum = "photopicker_select_promise_005";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_VIDEO_TYPE;
      option.maxSelectNumber = 0;
      let expectSelectNum = 2;
      await selectWithOptionPromise(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_PROMISE_0600
     * @tc.name      : photopicker_select_promise_006
     * @tc.desc      : select without option
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_promise_006", 0, async function (done) {
      let testNum = "photopicker_select_promise_006";
      let expectSelectNum = 2;
      let isSelectOriginal = true;
      await selectPromise(testNum, done, isSelectOriginal, expectSelectNum);
    });

    //callback
    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_CALLBACK_0000
     * @tc.name      : photopicker_select_callback_000
     * @tc.desc      : select image
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_callback_000", 0, async function (done) {
      let testNum = "photopicker_select_callback_000";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_TYPE;
      let expectSelectNum = 1;
      await selectWithOptionCallback(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_CALLBACK_0100
     * @tc.name      : photopicker_select_callback_001
     * @tc.desc      : select video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_callback_001", 0, async function (done) {
      let testNum = "photopicker_select_callback_001";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.VIDEO_TYPE;
      let expectSelectNum = 1;
      await selectWithOptionCallback(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_CALLBACK_0200
     * @tc.name      : photopicker_select_callback_002
     * @tc.desc      : select image&video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_callback_002", 0, async function (done) {
      let testNum = "photopicker_select_callback_002";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_VIDEO_TYPE;
      let expectSelectNum = 1;
      await selectWithOptionCallback(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_CALLBACK_0300
     * @tc.name      : photopicker_select_callback_003
     * @tc.desc      : select image&video, singleSelect
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_callback_003", 0, async function (done) {
      let testNum = "photopicker_select_callback_003";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_VIDEO_TYPE;
      option.maxSelectNumber = 1;
      let expectSelectNum = 1;
      await selectWithOptionCallback(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_CALLBACK_0400
     * @tc.name      : photopicker_select_callback_004
     * @tc.desc      : select image&video, multipleselect
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
    */
    it("photopicker_select_callback_004", 1, async function (done) {
      let testNum = "photopicker_select_callback_004";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_VIDEO_TYPE;
      option.maxSelectNumber = 2;
      let expectSelectNum = 2;
      await selectWithOptionCallback(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_CALLBACK_0500
     * @tc.name      : photopicker_select_callback_005
     * @tc.desc      : select image&video, default selectNum
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_callback_005", 0, async function (done) {
      let testNum = "photopicker_select_callback_005";
      let option = new photoAccessHelper.PhotoSelectOptions();
      option.MIMEType = photoAccessHelper.PhotoViewMIMETypes.IMAGE_VIDEO_TYPE;
      option.maxSelectNumber = 0;
      let expectSelectNum = 2;
      await selectWithOptionCallback(testNum, done, option, expectSelectNum);
    });

    /**
     * @tc.number    : SUB_STORAGE_PHOTOPICKER_SELECT_CALLBACK_0600
     * @tc.name      : photopicker_select_callback_006
     * @tc.desc      : select without option
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
    */
    it("photopicker_select_callback_006", 0, async function (done) {
      let testNum = "photopicker_select_callback_006";
      let expectSelectNum = 2;
      let isSelectOriginal = true;
      await selectCallback(testNum, done, isSelectOriginal, expectSelectNum);
    });
  });
}
