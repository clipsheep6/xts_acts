/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import { describe, it, expect }from '@ohos/hypium'
import { randomString, getDownloadUri } from "../common"
import fileio from "@ohos.fileio"
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaMoveTest';

export default function moveTest(helper) {

  describe('mediaMoveTest', function () {

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MOVE_0000
    * @tc.name media_file_access_test_move_async_000
    * @tc.desc Test move() interfaces, return in promise mode.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_move_async_000', 0, async (done) => {
      try {
        let name = `move${new Date().getTime()}.txt`;
        let uri = await getDownloadUri(helper);
        let tarDirUri = await helper.mkDir(uri, `tarDir${new Date().getTime()}`);
        let filePath = await helper.createFile(uri, name);
        let result = await helper.move(filePath, tarDirUri);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_move_async_000 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MOVE_0100
    * @tc.name media_file_access_test_move_async_001
    * @tc.desc Test move() interfaces, return in callback mode.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_move_async_001', 0, async (done) => {
      try {
        let name = `move1${new Date().getTime()}.txt`;
        let uri = await getDownloadUri(helper);
        let filePath = await helper.createFile(uri, name);
        let tarDirUri = await helper.mkDir(uri, `tarDir1${new Date().getTime()}`);
        helper.move(filePath, tarDirUri, (err, result) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_move_async_001 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          let fileId = result.substring(result.lastIndexOf('/') + 1);
          expect(typeof result == 'string').assertTrue();
          expect(fileId > 0).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_move_async_001 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MOVE_0200
    * @tc.name media_file_access_test_move_async_002
    * @tc.desc Test move() interfaces, When the destination path does not exist.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_move_async_002', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `move2${new Date().getTime()}.txt`;
        let result = await helper.createFile(uri, name);
        await helper.move(result, "/d");
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_move_async_002 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MOVE_0300
    * @tc.name media_file_access_test_move_async_003
    * @tc.desc Test move() interfaces, Move nonexistent files.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_move_async_003', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let tarDirUri = await helper.mkDir(uri, `tarDir3${new Date().getTime()}`);
        await helper.move(`${uri}/async004.txt`, tarDirUri);
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_move_async_003 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MOVE_0400
     * @tc.name media_file_access_test_move_async_004
     * @tc.desc Test move() interfaces, concurrent requests.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_move_async_004', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `moveConcurrent${new Date().getTime()}.txt`;
        let fileUri = await helper.createFile(uri, name);
        let tarDirUri = await helper.mkDir(uri, `tarDir4${new Date().getTime()}`);
        const delay = function delay() {
          return new Promise((resolve, reject) => {
            helper.move(fileUri, tarDirUri, (err, result) => {
              resolve(result);
            })
          });
        };
        let tasks = [delay(), delay(), delay(), delay()]
        Promise.all(tasks).then(results => {
          hilog.error(DOMAIN_CODE, TAG, 'move concurrent request:' + JSON.stringify(results));
          let flag = results.some(item => item != null);
          expect(flag).assertTrue();
          expect(results.length == tasks.length).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_move_async_004 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MOVE_0500
    * @tc.name media_file_access_test_move_async_005
    * @tc.desc Test move() interfaces, Move empty directory.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_move_async_005', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let name = `moveDir${new Date().getTime()}`;
        let dirPath = await helper.mkDir(uri, name);
        let tarDirUri = await helper.mkDir(uri, `tarDir5${new Date().getTime()}`);
        let result = await helper.move(dirPath, tarDirUri);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_move_async_005 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_MOVE_0600
    * @tc.name media_file_access_test_move_async_006
    * @tc.desc Test move() interfaces, Move directory, There are a lot of files in the directory.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_move_async_006', 0, async (done) => {
      try {
        let uri = await getDownloadUri(helper);
        let content = randomString(1024 * 4);
        let name = `DirWithFiles${new Date().getTime()}`;
        let dirPath = await helper.mkDir(uri, name);
        let tarDirUri = await helper.mkDir(uri, `tarDir5${new Date().getTime()}`);
        for (let i = 0; i < 200; i++) {
          let filePath = await helper.createFile(dirPath, `files${i}.txt`);
          let number = await helper.openFile(filePath, 0o2);
          fileio.writeSync(number, content);
          fileio.closeSync(number);
        }
        let result = await helper.move(dirPath, tarDirUri);
        let fileId = result.substring(result.lastIndexOf('/') + 1);
        expect(typeof result == 'string').assertTrue();
        expect(fileId > 0).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_move_async_006 has failed for ' + err);
      }
    })
  })
}