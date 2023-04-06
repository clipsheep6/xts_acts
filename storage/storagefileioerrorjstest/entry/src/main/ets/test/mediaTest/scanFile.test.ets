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
import { listFile, scanFile } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'scanFileTest';
const MEDIA_FILE = "MEDIA_TYPE_FILE";
const FILE_FILTER_COUNT = 20;
const FILE_TXT_NUMBER = 5;
const FILE_JPG_NUMBER = 10;
const FILE_MP3_NUMBER = 15;
const FILTER_RESULT_COUNT = 10;

export default function scanFileTest(helper) {

  describe('scanFileTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_SCAN_FILE_0000
     * @tc.name media_file_access_test_scan_file_000
     * @tc.desc Test scanFile() interfaces, Scan root directory,No filtering.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_scan_file_000', 0, async (done) => {
      try {
        let rootIterator = await helper.getRoots();
        let isDone = false;
        while (!isDone) {
          let rootData = rootIterator.next();
          let count = 0;
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let rootUri = rootData.value.uri;
              hilog.info(DOMAIN_CODE, TAG, 'rootUri is ' + rootUri);
              if (rootUri.indexOf('media') != -1) {
                let isBreak = false;
                let fileIterator = rootData.value.scanFile();
                while (!isBreak) {
                  let result = fileIterator.next();
                  if (result) {
                    isBreak = result.done;
                    if (result.value) {
                      count++;
                    }
                  }
                }
                expect(count >= 0).assertTrue();
              }
            }
          }
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_scan_file_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_SCAN_FILE_0100
     * @tc.name media_file_access_test_scan_file_001
     * @tc.desc Test scanFile() interfaces, Scan root directory.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_scan_file_001', 0, async (done) => {
      try {
        let rootIterator = await helper.getRoots();
        let isDone = false;
        while (!isDone) {
          let rootData = rootIterator.next();
          let count = 0;
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let rootUri = rootData.value.uri;
              if (rootUri.indexOf('media') != -1) {
                let isBreak = false;
                globalThis.filesArrData = [];
                globalThis.filesArrData.push(rootData.value);
                let rootFiles = listFile(rootUri, false);
                let dir = rootFiles.find(item => item.name == MEDIA_FILE);
                hilog.info(DOMAIN_CODE, TAG, 'dir uri is ' + dir.uri);
                let filesData = listFile(dir.uri, false);
                let downloadDir = filesData.find(item => item.name == "Download");
                hilog.info(DOMAIN_CODE, TAG, 'downloadDir uri is ' + downloadDir.uri);
                let dirTest = await helper.mkDir(downloadDir.uri, 'scanFile' + new Date().getTime());
                hilog.info(DOMAIN_CODE, TAG, 'dirTest is ' + dirTest);
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
                let fileIterator = rootData.value.scanFile(filter);
                while (!isBreak) {
                  let result = fileIterator.next();
                  if (result) {
                    isBreak = result.done;
                    if (result.value) {
                      count++;
                    }
                  }
                }
                expect(count >= FILTER_RESULT_COUNT).assertTrue();
              }
            }
          }
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_scan_file_001 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_SCAN_FILE_0200
    * @tc.name media_file_access_test_scan_file_002
    * @tc.desc Test scanFile() interfaces, scan the specified directory.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_scan_file_002', 0, async (done) => {
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
              if (rootUri.indexOf('media') != -1) {
                globalThis.filesArrData = [];
                globalThis.filesArrData.push(rootData.value);
                let rootFiles = listFile(rootUri, false);
                let dir = rootFiles.find(item => item.name == MEDIA_FILE);
                hilog.info(DOMAIN_CODE, TAG, 'dir uri is ' + dir.uri);
                let filesData = listFile(dir.uri, false);
                let downloadDir = filesData.find(item => item.name == "Download");
                hilog.info(DOMAIN_CODE, TAG, 'downloadDir uri is ' + downloadDir.uri);
                let dirTest = await helper.mkDir(downloadDir.uri, 'scanFile' + new Date().getTime());
                hilog.info(DOMAIN_CODE, TAG, 'dirTest is ' + dirTest);
                dirs.push(downloadDir.uri);
                dirs.push(dirTest);
                let nextLevelDir = await helper.mkDir(dirTest, 'scanFile0' + new Date().getTime());
                for (let i = 0; i < FILE_FILTER_COUNT; i++) {
                  if (i < FILE_TXT_NUMBER) {
                    await helper.createFile(nextLevelDir, `files${i}.txt`);
                  } else if (i < FILE_JPG_NUMBER) {
                    await helper.createFile(nextLevelDir, `files${i}.jpg`);
                  } else if (i < FILE_MP3_NUMBER) {
                    await helper.createFile(nextLevelDir, `files${i}.mp3`);
                  } else {
                    await helper.createFile(nextLevelDir, `files${i}.mp4`);
                  }
                }
                for (let i = 0; i < dirs.length; i++) {
                  listFile(dirs[i], false);
                }
                let filter = {
                  "suffix": [".jpg", ".mp3"]
                }
                let count = scanFile(nextLevelDir, filter);
                expect(count == FILTER_RESULT_COUNT).assertTrue();
              }
            }
          }
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_scan_file_002 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_MEDIA_FILE_ACCESS_SCAN_FILE_0300
    * @tc.name media_file_access_test_scan_file_003
    * @tc.desc Test scanFile() interfaces, No filtering.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('media_file_access_test_scan_file_003', 0, async (done) => {
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
              if (rootUri.indexOf('media') != -1) {
                globalThis.filesArrData = [];
                globalThis.filesArrData.push(rootData.value);
                let rootFiles = listFile(rootUri, false);
                let dir = rootFiles.find(item => item.name == MEDIA_FILE);
                hilog.info(DOMAIN_CODE, TAG, 'dir uri is ' + dir.uri);
                let filesData = listFile(dir.uri, false);
                let downloadDir = filesData.find(item => item.name == "Download");
                hilog.info(DOMAIN_CODE, TAG, 'downloadDir uri is ' + downloadDir.uri);
                let dirTest = await helper.mkDir(downloadDir.uri, 'scanFile' + new Date().getTime());
                hilog.info(DOMAIN_CODE, TAG, 'dirTest is ' + dirTest);
                dirs.push(downloadDir.uri);
                dirs.push(dirTest);
                let nextLevelDir = await helper.mkDir(dirTest, 'scanFile0' + new Date().getTime());
                for (let i = 0; i < FILE_FILTER_COUNT; i++) {
                  if (i < FILE_TXT_NUMBER) {
                    await helper.createFile(nextLevelDir, `files${i}.txt`);
                  } else if (i < FILE_JPG_NUMBER) {
                    await helper.createFile(nextLevelDir, `files${i}.jpg`);
                  } else if (i < FILE_MP3_NUMBER) {
                    await helper.createFile(nextLevelDir, `files${i}.mp3`);
                  } else {
                    await helper.createFile(nextLevelDir, `files${i}.mp4`);
                  }
                }
                for (let i = 0; i < dirs.length; i++) {
                  listFile(dirs[i], false);
                }
                let count = scanFile(nextLevelDir, false);
                expect(count == FILE_FILTER_COUNT).assertTrue();
              }
            }
          }
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_scan_file_003 has failed for ' + err);
      }
    })
  })
}