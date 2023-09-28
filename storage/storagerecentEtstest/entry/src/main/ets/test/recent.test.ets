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

import { describe, it, expect, beforeAll, afterAll, afterEach } from '@ohos/hypium';
import fileUri from '@ohos.file.fileuri';
import fileAccess from '@ohos.file.fileAccess'
import fs from '@ohos.file.fs';
import recent from '@ohos.file.recent';

export default function fileRecent_test(fileAccessHelper) {
  describe("file_recent", function () {
    
  const CONTENT = "Hello World!";
  const BASE_COUNT = 100;
  const BASE_PATH = '/storage/Users/currentUser/';
  beforeAll(() => {
    let fileInfoArray = recent.listFile();
    while (fileInfoArray.length != 0) {
      for (let j = 0; j < fileInfoArray.length; j++) {
        recent.remove(fileInfoArray[j].uri);
      }
      fileInfoArray = recent.listFile();
    }
  })

  async function createFiles(count, testNum) {
    let uriForResource = [];
    try {
      let rootIter = await fileAccessHelper.getRoots();
      let rootFileInfo = rootIter.next();
      let isDone = rootFileInfo.done;
      while(!isDone) {
        let tmp = rootFileInfo.value.uri;
        let isAccess = await fileAccessHelper.access('file://docs/storage/Users/currentUser/' + testNum);
        if (tmp.indexOf('Users/currentUser') > 0 && !isAccess) {
          let uriForDocs = tmp;
          let baseDirUri = await fileAccessHelper.mkDir(uriForDocs, testNum);
          for (let index = 0; index < count; index++) {
            uriForResource[index] = await fileAccessHelper.createFile(baseDirUri, 'testfile_' + index);
          }
          return uriForResource;
        }
        rootFileInfo = rootIter.next();
        isDone = rootFileInfo.done;
      }
    } catch (e) {
      console.log(`creatFile has failed for: {message: ${e.message}, code: ${e.code}}`);
      return [];
    }
  }

  function prepareFile(fileName, content) {
    try {
      let file = fs.openSync(fileName, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      fs.truncateSync(file.fd);
      fs.writeSync(file.fd, content);
      fs.fsyncSync(file.fd);
      fs.closeSync(file);
      return true;
    } catch (e) {
      console.log(`prepareFile has failed for: {message: ${e.message}, code: ${e.code}}`);
      return false;
    }
  }

  function removeFileAndDir(testNum) {
    try {
      let fileInfoArray = recent.listFile();
      while (fileInfoArray.length != 0) {
        for (let j = 0; j < fileInfoArray.length; j++) {
          recent.remove(fileInfoArray[j].uri);
        }
        fileInfoArray = recent.listFile();
      }
      fs.rmdirSync(BASE_PATH + testNum);
    } catch(e) {
      console.log(`removeFileAndDir has failed for: {message: ${e.message}, code: ${e.code}}`);
      expect(false).assertTrue();
    }
  }

  /**
   * @tc.number  : SUB_STORAGE_FILE_RECENT_TEST_0000
   * @tc.name    : file_recent_test_000
   * @tc.desc    : Add files as recently accessed files first, and delete 3 files later.
   * @tc.size    : MEDIUM
   * @tc.type    : Function
   * @tc.level   : Level 0
   */
  it("file_recent_test_000", 0, async function () {
    let testNum = "file_recent_test_000";
    let uriForResource = await createFiles(5, testNum);
    if (uriForResource.length != 5) {
      console.log('Failed to prepare files for ' + testNum);
      expect(false).assertTrue();
    }

    try {
      let filePathArray = [];
      let fileNameArray = [];
      for (let index = 0; index < 5; index++) {
        filePathArray[index] = uriForResource[index].replace(/^file:\/\/docs/, '');
        let parts = uriForResource[index].split('/');
        fileNameArray[index] = parts[parts.length - 1];
        recent.add(uriForResource[index]);
      }

      let fileInfoArray = recent.listFile();
      expect(fileInfoArray.length === 5).assertTrue();
      for (let i = 0; i < fileInfoArray.length; i++) {
        console.log("The uri of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].uri);
        expect(fileInfoArray[i].srcPath === filePathArray[i]).assertTrue();
        expect(fileInfoArray[i].fileName === fileNameArray[i]).assertTrue();
        console.log("The size of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].size.toString());
        console.log("The mode of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].mode.toString());
        console.log("The mtime of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].mtime.toString());
        console.log("The ctime of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].ctime.toString());
      }
      for (let j = 0; j < 3; j++) {
        recent.remove(fileInfoArray[j].uri);
      }
      fileInfoArray = recent.listFile();
      expect(fileInfoArray.length === 2).assertTrue();
      expect(fileInfoArray[0].srcPath === filePathArray[3]).assertTrue();
      expect(fileInfoArray[1].srcPath === filePathArray[4]).assertTrue();
      removeFileAndDir(testNum);
    } catch (e) {
      removeFileAndDir(testNum);
      console.log('file_recent_test_000 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number  : SUB_STORAGE_FILE_RECENT_TEST_0100
   * @tc.name    : file_recent_test_001
   * @tc.desc    : While adding recently accessed files, remove some files from recent list.
   * @tc.size    : MEDIUM
   * @tc.type    : Function
   * @tc.level   : Level 0
   */
  it("file_recent_test_001", 0, async function () {
    let testNum = "file_recent_test_001";
    let uriForResource = await createFiles(10, testNum);
    if (uriForResource.length != 10) {
      console.log('Failed to prepare files for ' + testNum);
      expect(false).assertTrue();
    }

    try {
      let filePathArray = [];
      let fileNameArray = [];
      for (let index = 0; index < 10; index++) {
        filePathArray[index] = uriForResource[index].replace(/^file:\/\/docs/, '');
        let parts = uriForResource[index].split('/');
        fileNameArray[index] = parts[parts.length - 1];
        recent.add(uriForResource[index]);
        if ((index + 1) % 2 == 0) {
          recent.remove(uriForResource[index]);
        }
      }

      let fileInfoArray = recent.listFile();
      expect(fileInfoArray.length === 5).assertTrue();
      for (let i = 0; i < fileInfoArray.length; i++) {
        console.log("The uri of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].uri);
        expect(fileInfoArray[i].srcPath === filePathArray[Number(i * 2)]).assertTrue();
        expect(fileInfoArray[i].fileName === fileNameArray[Number(i * 2)]).assertTrue();
        console.log("The size of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].size.toString());
        console.log("The mode of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].mode.toString());
        console.log("The mtime of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].mtime.toString());
        console.log("The ctime of " + fileInfoArray[i].fileName + "is: " + fileInfoArray[i].ctime.toString());
      }
      removeFileAndDir(testNum);
    } catch (e) {
      removeFileAndDir(testNum);
      console.log('file_recent_test_001 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number  : SUB_STORAGE_FILE_RECENT_TEST_0200
   * @tc.name    : file_recent_test_002
   * @tc.desc    : Add more than 100 files to the recent access list as recently accessed files.
   * @tc.size    : MEDIUM
   * @tc.type    : Function
   * @tc.level   : Level 0
   */
  it("file_recent_test_002", 0, async function () {
    let testNum = "file_recent_test_002";
    let uriForResource = await createFiles(BASE_COUNT + 5, testNum);
    if (uriForResource.length != BASE_COUNT + 5) {
      console.log('Failed to prepare files for ' + testNum);
      expect(false).assertTrue();
    }

    try {
      let filePathArray = [];
      let fileNameArray = [];
      for (let index = 0; index < BASE_COUNT + 5; index++) {
        filePathArray[index] = uriForResource[index].replace(/^file:\/\/docs/, '');
        let parts = uriForResource[index].split('/');
        fileNameArray[index] = parts[parts.length - 1];
        recent.add(uriForResource[index]);
      }
      let fileInfoArray = recent.listFile();
      expect(fileInfoArray.length === BASE_COUNT).assertTrue();
      removeFileAndDir(testNum);
    } catch (e) {
      console.log('file_recent_test_002 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });


  /**
   * @tc.number  : SUB_STORAGE_FILE_RECENT_TEST_0300
   * @tc.name    : file_recent_test_003
   * @tc.desc    : Remove the same file twice from the recently accessed list.
   * @tc.size    : MEDIUM
   * @tc.type    : Function
   * @tc.level   : Level 3
   */
  it("file_recent_test_003", 3, async function () {
    let testNum = "file_recent_test_003";
    let dpath = BASE_PATH + testNum;
    fs.mkdirSync(dpath);
    let fpath = dpath + '/testfile_003_0';
    let uriFromPath = fileUri.getUriFromPath(fpath);

    try {
      recent.add(uriFromPath);
      recent.remove(uriFromPath);
      recent.remove(uriFromPath);
      expect(false).assertTrue();
    } catch (e) {
      let fileInfoArray = recent.listFile();
      expect(fileInfoArray.length === 0).assertTrue();
      fs.rmdirSync(dpath);
      console.log('file_recent_test_003 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue();
    }
  });

  /**
   * @tc.number  : SUB_STORAGE_FILE_RECENT_TEST_0400
   * @tc.name    : file_recent_test_004
   * @tc.desc    : Add the same file twice from the recently accessed list.
   * @tc.size    : MEDIUM
   * @tc.type    : Function
   * @tc.level   : Level 3
   */
  it("file_recent_test_004", 3, async function () {
    let testNum = "file_recent_test_004";
    let dpath = BASE_PATH + testNum;
    fs.mkdirSync(dpath);
    let fpath = dpath + '/testfile_004_0';
    prepareFile(fpath, CONTENT);
    let uriFromPath = fileUri.getUriFromPath(fpath);

    try {
      recent.add(uriFromPath);
      recent.add(uriFromPath);
      let fileInfoArray = recent.listFile();
      console.log('file_recent_test_004 step 2:  ' + fileInfoArray.length);
      expect(fileInfoArray.length === 1).assertTrue();
      removeFileAndDir(testNum);
    } catch (e) {
      console.log('file_recent_test_004 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number  : SUB_STORAGE_FILE_RECENT_TEST_0500
   * @tc.name    : file_recent_test_005
   * @tc.desc    : The file pointed by the URI does not exist.
   * @tc.size    : MEDIUM
   * @tc.type    : Function
   * @tc.level   : Level 3
   */
  it("file_recent_test_005", 3, async function () {
    let fpath = BASE_PATH + 'testfile_005_0';
    let uriFromPath = fileUri.getUriFromPath(fpath);

    try {
      recent.add(uriFromPath);
      expect(false).assertTrue();
    } catch (e) {
      let fileInfoArray = recent.listFile();
      expect(fileInfoArray.length === 0).assertTrue();
      console.log('file_recent_test_005 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue();
    }
  });

  /**
   * @tc.number  : SUB_STORAGE_FILE_RECENT_TEST_0600
   * @tc.name    : file_recent_test_006
   * @tc.desc    : not uri
   * @tc.size    : MEDIUM
   * @tc.type    : Function
   * @tc.level   : Level 3
   */
  it("file_recent_test_006", 3, async function () {
    let testNum = 'file_recent_test_006';
    let dpath = BASE_PATH + testNum;
    fs.mkdirSync(dpath);
    let fpath = dpath + '/testfile_006_0';
    prepareFile(fpath, CONTENT);

    try {
      recent.add(fpath);
      let fileInfoArray = recent.listFile();
      console.log('file_recent_test_006 step 2:  ' + fileInfoArray.length);
      console.log('file_recent_test_006 step 2:  ' + fileInfoArray[0].uri);
      expect(fileInfoArray.length === 1).assertTrue();
      removeFileAndDir(testNum);
    } catch (e) {
      console.log('file_recent_test_006 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number   : SUB_STORAGE_FILE_RECENT_TEST_0700
   * @tc.name    : file_recent_test_007
   * @tc.desc    : Add a directory as a recently accessed folder.
   * @tc.size    : MEDIUM
   * @tc.type    : Function
   * @tc.level   : Level 3
   */
  it("file_recent_test_007", 3, async function () {
    let testNum = 'file_recent_test_007';
    let dpath = BASE_PATH + testNum;
    fs.mkdirSync(dpath);
    let uriFromPath = fileUri.getUriFromPath(dpath);

    try {
      recent.add(uriFromPath);
      let fileInfoArray = recent.listFile();
      expect(fileInfoArray.length === 1).assertTrue();
      removeFileAndDir(testNum);
    } catch (e) {
      console.log('file_recent_test_007 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });
  });
}
