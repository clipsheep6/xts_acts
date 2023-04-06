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
import fileExtensionInfo from "@ohos.file.fileExtensionInfo"
import { listFile } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'mediaGetRootTest';
const DeviceFlag = fileExtensionInfo.DeviceFlag;
const FLAG = DeviceFlag.SUPPORTS_READ | DeviceFlag.SUPPORTS_WRITE;
const MEDIA_FILE = "MEDIA_TYPE_FILE";

export default function getRootTest(helper) {

  describe('mediaGetRootTest', function () {

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_ROOTS_0000
     * @tc.name media_file_access_test_get_root_async_000
     * @tc.desc Test getRoots() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_get_root_async_000', 0, async (done) => {
      helper.getRoots().then((rootIterator) => {
        expect(rootIterator != null).assertTrue();
        let isDone = false;
        while (!isDone) {
          let rootData = rootIterator.next();
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let uri = rootData.value.uri;
              globalThis.filesArrData = [];
              globalThis.filesArrData.push(rootData.value);
              if (uri.indexOf('media') != -1) {
                let rootFiles = listFile(uri, false);
                let dir = rootFiles.find(item => item.name == MEDIA_FILE);
                globalThis.localUri = dir.uri;
                expect(rootData.value.deviceFlags == FLAG).assertTrue();
                break;
              }
            }
          }
        }
        done();
      }).catch((err) => {
        hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_get_root_async_000 has failed for ' + err);
      });
    })

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_ROOTS_0100
     * @tc.name media_file_access_test_get_root_async_001
     * @tc.desc Test getRoots() interfaces, return in callback mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('media_file_access_test_get_root_async_001', 0, async (done) => {
      helper.getRoots((err, rootIterator) => {
        if (err) {
          hilog.error(DOMAIN_CODE, TAG, 'media_file_access_test_get_root_async_001 has failed for ' + err);
          expect(false).assertTrue();
          done();
        }
        let isDone = false;
        while (!isDone) {
          let rootData = rootIterator.next();
          if (rootData) {
            isDone = rootData.done;
            if (!isDone) {
              let uri = rootData.value.uri;
              if (uri.indexOf('media') != -1) {
                expect(rootData.value.deviceFlags == FLAG).assertTrue();
              }
            }
          }
        }
        done();
      })
    })

    /**
     * @tc.number SUB_DF_SHARE_FILE_ACCESS_GET_ROOTS_0200
     * @tc.name share_file_access_test_get_root_async_002
     * @tc.desc Test getRoots() interfaces, concurrent requests.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('share_file_access_test_get_root_async_002', 0, async (done) => {
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
        hilog.error(DOMAIN_CODE, TAG, 'share_file_access_test_get_root_async_002 has failed for ' + err);
      }
    })
  })
}