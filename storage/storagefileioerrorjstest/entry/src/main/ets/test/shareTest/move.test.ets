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
import fileio from "@ohos.fileio"
import { randomString } from "../common"
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'shareMoveTest';


let tarDir = [];

export default function moveTest(helper) {

  describe('shareMoveTest', function () {

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0000
    * @tc.name share_file_access_test_move_async_000
    * @tc.desc Test move() interfaces, return in promise mode.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_move_async_000', 0, async (done) => {
      try {
        let name = "file_access_test_move_async_000.txt";
        let dirs = [];
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let tarPath = await helper.mkDir(uri, "tarDir");
          globalThis.fileList.push(tarPath);
          dirs.push({
            "uri": uri,
            "value": tarPath
          });
          let filePath = await helper.createFile(uri, name);
          let result = await helper.move(filePath, tarPath);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${tarPath}/${name}`).assertTrue();
        }
        tarDir = dirs;
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_000 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0100
    * @tc.name share_file_access_test_move_async_001
    * @tc.desc Test move() interfaces, return in callback mode.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_move_async_001', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let name = "file_access_test_move_async_001.txt";
          let uri = globalThis.fileExtensionList[0].uri;
          let filePath = await helper.createFile(uri, name);
          let tarObj = tarDir.find(item => item.uri == uri);
          let tarPath = tarObj.value;
          helper.move(filePath, tarPath, (err, result) => {
            if (err) {
              hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_001 has failed for ' + err);
              expect(false).assertTrue();
              done();
            }
            expect(typeof result == 'string').assertTrue();
            expect(result == `${tarPath}/${name}`).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_001 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0200
    * @tc.name share_file_access_test_move_async_002
    * @tc.desc Test move() interfaces, When the destination path does not exist.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_move_async_002', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let name = "file_access_test_move_async_002.txt";
          let result = await helper.createFile(uri, name);
          globalThis.fileList.push(result);
          await helper.move(result, "/d");
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_002 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })


    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0300
    * @tc.name share_file_access_test_move_async_003
    * @tc.desc Test move() interfaces, Move nonexistent files.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_move_async_003', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let tarObj = tarDir.find(item => item.uri == uri);
          await helper.move(`${uri}/async004.txt`, tarObj.value);
        } else {
          done();
        }
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_003 has failed for ' + err);
        expect(err.code != 0).assertTrue();
        done();
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0400
    * @tc.name share_file_access_test_move_async_004
    * @tc.desc Test move() interfaces, Move empty directory.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_move_async_004', 0, async (done) => {
      try {
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let dirPath = await helper.mkDir(uri, "moveDir");
          let tarObj = tarDir.find(item => item.uri == uri);
          let tarPath = tarObj.value;
          let result = await helper.move(dirPath, tarPath);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${tarPath}/moveDir`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_004 has failed for ' + err);
      }
    })


    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0500
    * @tc.name share_file_access_test_move_async_005
    * @tc.desc Test move() interfaces,Move directory, There are a lot of files in the directory.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_move_async_005', 0, async (done) => {
      try {
        let content = randomString(1024 * 4);
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let dirPath = await helper.mkDir(uri, "DirWithFiles");
          let tarObj = tarDir.find(item => item.uri == uri);
          let tarPath = tarObj.value;
          for (let j = 0; j < 1000; j++) {
            let filePath = await helper.createFile(dirPath, 'files' + j);
            let number = await helper.openFile(filePath, 0o2);
            fileio.writeSync(number, content);
            fileio.closeSync(number);
          }
          let result = await helper.move(dirPath, tarPath);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${tarPath}/DirWithFiles`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_005 has failed for ' + err);
      }
    })

    /**
   * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0600
   * @tc.name share_file_access_test_move_async_006
   * @tc.desc Test move() interfaces, Move Large file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
    it('share_file_access_test_move_async_006', 0, async (done) => {
      try {
        let name = 'LargeFile.txt';
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let tarObj = tarDir.find(item => item.uri == uri);
          let tarPath = tarObj.value;
          let filePath = await helper.createFile(uri, name);
          let fd = await helper.openFile(filePath, 0o2);
          fileio.ftruncateSync(fd, 1024 * 1024 * 1024);
          let result = await helper.move(`${uri}/${name}`, tarPath);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${tarPath}/${name}`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_006 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0700
    * @tc.name share_file_access_test_move_async_007
    * @tc.desc Test move() interfaces, The directory level is 64.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('share_file_access_test_move_async_007', 0, async (done) => {
      try {
        for (let i = 0; i < globalThis.fileExtensionList.length; i++) {
          let uri = globalThis.fileExtensionList[i].uri;
          let dirPath = await helper.mkDir(uri, "Dirs");
          let dirInnerPath = dirPath;
          let content = randomString(1024 * 4);
          let tarObj = tarDir.find(item => item.uri == uri);
          let tarPath = tarObj.value;
          for (let j = 0; j < 64; j++) {
            dirInnerPath = await helper.mkDir(dirInnerPath, "Dirs" + j);
            let filePath = await helper.createFile(dirInnerPath, 'files' + j);
            let number = await helper.openFile(filePath, 0o2);
            fileio.writeSync(number, content);
            fileio.closeSync(number);
          }
          let result = await helper.move(dirPath, tarPath);
          expect(typeof result == 'string').assertTrue();
          expect(result == `${tarPath}/Dirs`).assertTrue();
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_move_async_007 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0800
     * @tc.name share_file_access_test_move_async_008
     * @tc.desc Test move() interfaces, concurrent requests.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_move_async_008', 0, async (done) => {
      try {
        if (globalThis.fileExtensionList.length > 0) {
          let uri = globalThis.fileExtensionList[0].uri;
          let fileUri = await helper.createFile(uri, "move.txt");
          let tarObj = tarDir.find(item => item.uri == uri);
          const delay = function delay() {
            return new Promise((resolve, reject) => {
              helper.move(fileUri, tarObj.value, (err, result) => {
                resolve(result);
              })
            });
          };
          let tasks = [delay(), delay(), delay(), delay()]
          Promise.all(tasks).then(results => {
            let result = results.filter(item => item != null);
            expect(result.length == 1).assertTrue();
            expect(results.length == tasks.length).assertTrue();
            done();
          });
        } else {
          done();
        }
      } catch (err) {
        console.info('share_file_access_test_move_async_008 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_MOVE_0900
     * @tc.name share_file_access_test_move_async_009
     * @tc.desc Test move() interfaces, If there are multiple devices, move them to each other.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_move_async_009', 0, async (done) => {
      try {
        let length = globalThis.fileExtensionList.length;
        if (length > 1) {
          for (let i = 0; i < length; i++) {
            for (let j = i + 1; j < length; j++) {
              let fileName = 'file' + new Date().getTime();
              let uri = globalThis.fileExtensionList[i].uri;
              let tarUri = globalThis.fileExtensionList[j].uri;
              let sourceUri = await helper.createFile(uri, fileName);
              globalThis.fileList.push(sourceUri);
              let result = await helper.move(sourceUri, tarUri);
              expect(result == `${tarUri}/${fileName}`).assertTrue();

              let result1 = await helper.move(result, uri);
              expect(result1 == sourceUri).assertTrue();
            }
          }
          done();
        } else {
          done();
        }
      } catch (err) {
        console.info('share_file_access_test_move_async_009 has failed for ' + err);
      }
    })
  })
}