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
import { describe, it, expect, beforeAll }from '@ohos/hypium'
import hilog from '@ohos.hilog'
import fileExtensionInfo from "@ohos.file.fileExtensionInfo"
import { listFile } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'shareGetRootTest';
const DeviceFlag = fileExtensionInfo.DeviceFlag;
const Flag = DeviceFlag.SUPPORTS_READ | DeviceFlag.SUPPORTS_WRITE;
const FILE_COUNT = 1000;
const MULTI_FILE_COUNT = 5;
const EXCEED_MEMORY = 1050;
const MULTI_DIR_COUNT = 50;

export default function getRootTest(helper) {

  describe('shareGetRootTest', function () {

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GET_ROOTS_0000
     * @tc.name share_file_access_test_get_root_async_000
     * @tc.desc Test getRoots() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_get_root_async_000', 0, async (done) => {
      globalThis.fileExtensionList = [];
      let isDone = false;
      helper.getRoots().then((rootIterator) => {
        while (!isDone) {
          let rootData = rootIterator.next();
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let uri = rootData.value.uri;
              if (uri.indexOf('com.ohos.UserFile.ExternalFileManager') != -1) {
                expect(rootData.value.deviceFlags == Flag).assertTrue();
                globalThis.fileExtensionList.push(rootData.value);
              }
            }
          }
        }
        done();
      }).catch((err) => {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_get_root_async_000 has failed for ' + err);
      });
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GET_ROOTS_0100
     * @tc.name share_file_access_test_get_root_async_001
     * @tc.desc Test getRoots() interfaces, There are 1000 files under the folder.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_get_root_async_001', 0, async (done) => {
      globalThis.fileList = [];
      let isDone = false;
      try {
        helper.getRoots(async (err, rootIterator) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_get_root_async_001 has failed for ' + err);
            expect(false).assertTrue();
            done();
          }
          while (!isDone) {
            let dirs = [];
            let rootData = rootIterator.next();
            if (rootData) {
              isDone = rootData.done;
              if (!isDone) {
                let rootUri = rootData.value.uri;
                globalThis.filesArrData = [];
                globalThis.filesArrData.push(rootData.value);
                if (rootUri.indexOf('media') == -1) {
                  let dirTest = await helper.mkDir(rootUri, "iteratorTest" + new Date().getTime());
                  globalThis.fileList.push(dirTest);
                  dirs.push(rootUri);
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
      } catch(err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_get_root_async_001 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GET_ROOTS_0200
     * @tc.name share_file_access_test_get_root_async_002
     * @tc.desc Test getRoots() interfaces, There are more than 1000 files under the folder.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_get_root_async_002', 0, async (done) => {
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
              if (rootUri.indexOf('media') == -1) {
                let dirTest = await helper.mkDir(rootUri, "iteratorTest" + new Date().getTime());
                globalThis.fileList.push(dirTest);
                dirs.push(rootUri);
                dirs.push(dirTest);
                for (let j = 0; j < EXCEED_MEMORY; j++) {
                  await helper.createFile(dirTest, `files${j}.txt`);
                }
                for (let i = 0; i < dirs.length; i++) {
                  let fileData = listFile(dirs[i], false);
                  if (i == dirs.length - 1) {
                    expect(fileData.length == EXCEED_MEMORY).assertTrue();
                  }
                }
              }
            }
          }
        }
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_get_root_async_002 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GET_ROOTS_0300
     * @tc.name share_file_access_test_get_root_async_003
     * @tc.desc Test getRoots() interfaces, There are multi level directory.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_get_root_async_003', 0, async (done) => {
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
              if (rootUri.indexOf('media') == -1) {
                let dirTest = await helper.mkDir(rootUri, "multiDirTest" + new Date().getTime());
                let dirInnerPath = dirTest;
                dirs.push(rootUri);
                dirs.push(dirTest);
                globalThis.fileList.push(dirTest);
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
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_get_root_async_003 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GET_ROOTS_0400
     * @tc.name share_file_access_test_get_root_async_004
     * @tc.desc Test getRoots() interfaces, concurrent requests.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_get_root_async_004', 0, async (done) => {
      try {
        const delay = function delay() {
          return new Promise((resolve, reject) => {
            helper.getRoots((err, result) => {
              resolve(result);
            })
          });
        };
        let tasks = [delay(), delay(), delay(), delay()];
        Promise.all(tasks).then(results => {
          let flag = results.every(item => item != null);
          expect(flag).assertTrue();
          expect(results.length == tasks.length).assertTrue();
          done();
        });
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_get_root_async_004 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GET_ROOTS_0500
     * @tc.name share_file_access_test_get_root_async_005
     * @tc.desc Test getRoots() interfaces, empty directory, No files.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_get_root_async_005', 0, async (done) => {
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
              if (rootUri.indexOf('media') == -1) {
                dirs.push(rootUri);
                let dirTest = await helper.mkDir(rootUri, "emptyDir" + new Date().getTime());
                globalThis.fileList.push(dirTest);
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
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_get_root_async_005 has failed for ' + err);
      }
    })
  })
}

