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
import hilog from '@ohos.hilog'
import { listFile } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaListFileTest';
const FILE_COUNT = 200;
const MEDIA_FILE = "MEDIA_TYPE_FILE";
const MULTI_FILE_COUNT = 5;
const MULTI_DIR_COUNT = 20;
const FILE_FILTER_COUNT = 20;
const FILE_TXT_NUMBER = 5;
const FILE_JPG_NUMBER = 10;
const FILE_MP3_NUMBER = 15;
const FILTER_RESULT_COUNT = 10;

export default function listFileTest(helper) {

  describe('listFileTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_LIST_FILE_0000
     * @tc.name media_file_access_test_list_file_000
     * @tc.desc Test getRoots() interfaces, There are less than 1000 files under the folder.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_list_file_000', 0, async (done) => {
      helper.getRoots(async (err, rootIterator) => {
        let isDone = false;
        while (!isDone) {
          let dirs = [];
          let rootData = rootIterator.next();
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let rootUri = rootData.value.uri;
              globalThis.filesArrData = [];
              globalThis.filesArrData.push(rootData.value);
              if (rootUri.indexOf('media') != -1) {
                let rootFiles = listFile(rootUri, false);
                let dir = rootFiles.find(item => item.name == MEDIA_FILE);
                hilog.info(DOMAIN_CODE, TAG, 'dirUri is ' + dir.uri);
                let filesData = listFile(dir.uri, false);
                let downloadDir = filesData.find(item => item.name == "Download");
                hilog.info(DOMAIN_CODE, TAG, 'downloadDir is ' + downloadDir.uri);
                let dirTest = await helper.mkDir(downloadDir.uri, "iteratorTest" + new Date().getTime());
                dirs.push(downloadDir.uri);
                dirs.push(dirTest);
                for (let j = 0; j < FILE_COUNT; j++) {
                  await helper.createFile(dirTest, `files${j}.txt`);
                }
                for (let i = 0; i < dirs.length; i++) {
                  let fileData = listFile(dirs[i], false);
                  if (i == dirs.length - 1) {
                    expect(fileData.length == FILE_COUNT).assertTrue();
                  }
                }
              }
            }
          }
        }
        done();
      })
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_LIST_FILE_0100
     * @tc.name media_file_access_test_list_file_001
     * @tc.desc Test getRoots() interfaces, There are multi level directory.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_list_file_001', 0, async (done) => {
      try {
        let rootIterator = await helper.getRoots();
        let isDone = false;
        while (!isDone) {
          let dirs = [];
          let rootData = rootIterator.next();
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let rootUri = rootData.value.uri;
              globalThis.filesArrData = [];
              globalThis.filesArrData.push(rootData.value);
              if (rootUri.indexOf('media') != -1) {
                let rootFiles = listFile(rootUri, false);
                let dir = rootFiles.find(item => item.name == MEDIA_FILE);
                hilog.info(DOMAIN_CODE, TAG, 'dirUri is ' + dir.uri);
                let filesData = listFile(dir.uri, false);
                let downloadDir = filesData.find(item => item.name == "Download");
                hilog.info(DOMAIN_CODE, TAG, 'downloadDir is ' + downloadDir.uri);
                let dirTest = await helper.mkDir(downloadDir.uri, "multiDirTest" + new Date().getTime());
                hilog.info(DOMAIN_CODE, TAG, 'dirTest is ' + dirTest);
                let dirInnerPath = dirTest;
                dirs.push(downloadDir.uri);
                dirs.push(dirTest);
                for (let i = 0; i < MULTI_DIR_COUNT; i++) {
                  dirInnerPath = await helper.mkDir(dirInnerPath, `dir${i}`);
                  for (let j = 0; j < MULTI_FILE_COUNT; j++) {
                    await helper.createFile(dirInnerPath, `files${j}.txt`);
                  }
                  dirs.push(dirInnerPath);
                }
                for (let i = 0; i < dirs.length; i++) {
                  let fileData = listFile(dirs[i], false);
                  if (i == dirs.length - 1) {
                    expect(fileData.length == MULTI_FILE_COUNT).assertTrue();
                  }
                }
              }
            }
          }
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_list_file_001 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_LIST_FILE_0200
    * @tc.name media_file_access_test_list_file_002
    * @tc.desc Test getRoots() interfaces, empty directory,No files.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_list_file_002', 0, async (done) => {
      try {
        let rootIterator = await helper.getRoots();
        let isDone = false;
        while (!isDone) {
          let dirs = [];
          let rootData = rootIterator.next();
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let rootUri = rootData.value.uri;
              globalThis.filesArrData = [];
              globalThis.filesArrData.push(rootData.value);
              if (rootUri.indexOf('media') != -1) {
                let rootFiles = listFile(rootUri, false);
                let dir = rootFiles.find(item => item.name == MEDIA_FILE);
                hilog.info(DOMAIN_CODE, TAG, 'dirUri is ' + dir.uri);
                let filesData = listFile(dir.uri, false);
                let downloadDir = filesData.find(item => item.name == "Download");
                hilog.info(DOMAIN_CODE, TAG, 'downloadDir is ' + downloadDir.uri);
                let dirTest = await helper.mkDir(downloadDir.uri, "emptyDir" + new Date().getTime());
                hilog.info(DOMAIN_CODE, TAG, 'dirTest is ' + dirTest);
                dirs.push(downloadDir.uri);
                dirs.push(dirTest);
                for (let i = 0; i < dirs.length; i++) {
                  let fileData = listFile(dirs[i], false);
                  if (i == dirs.length - 1) {
                    expect(fileData.length == 0).assertTrue();
                  }
                }
              }
            }
          }
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_list_file_002 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_LIST_FILE_0300
    * @tc.name media_file_access_test_list_file_003
    * @tc.desc Test getRoots() interfaces, filter by suffix.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_list_file_003', 0, async (done) => {
      try {
        let rootIterator = await helper.getRoots();
        let isDone = false;
        while (!isDone) {
          let dirs = [];
          let rootData = rootIterator.next();
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let rootUri = rootData.value.uri;
              globalThis.filesArrData = [];
              globalThis.filesArrData.push(rootData.value);
              if (rootUri.indexOf('media') != -1) {
                let rootFiles = listFile(rootUri, false);
                let dir = rootFiles.find(item => item.name == MEDIA_FILE);
                hilog.info(DOMAIN_CODE, TAG, 'dirUri is ' + dir.uri);
                let filesData = listFile(dir.uri, false);
                let downloadDir = filesData.find(item => item.name == "Download");
                hilog.info(DOMAIN_CODE, TAG, 'downloadDir is ' + downloadDir.uri);
                let dirTest = await helper.mkDir(downloadDir.uri, "filterDir" + new Date().getTime());
                hilog.info(DOMAIN_CODE, TAG, 'dirTest is ' + dirTest);
                dirs.push(downloadDir.uri);
                dirs.push(dirTest);
                for (let i = 0; i < FILE_FILTER_COUNT; i++) {
                  if (i < FILE_TXT_NUMBER) {
                    await helper.createFile(dirTest, `files${i}.txt`);
                  } else if (i < FILE_JPG_NUMBER) {
                    await helper.createFile(dirTest, `files${i}.jpg`);
                  } else if (i < FILE_MP3_NUMBER) {
                    await helper.createFile(dirTest, `files${i}.mp3`);
                  } else {
                    await helper.createFile(dirTest, `files${i}.mp4`);
                  }
                }
                let filter = {
                  "suffix": [".jpg", ".mp3"]
                };
                for (let i = 0; i < dirs.length; i++) {
                  if (i == dirs.length - 1) {
                    let fileData = listFile(dirs[i], filter);
                    expect(fileData.length == FILTER_RESULT_COUNT).assertTrue();
                  } else {
                    listFile(dirs[i], false);
                  }
                }
              }
            }
          }
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_list_file_003 has failed for ' + err);
      }
    })
  })
}