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
import fileAccess from '@ohos.file.fileAccess'
import hilog from '@ohos.hilog'

const DOMAIN_CODE = 0x0001;
const TAG = 'createHelperTest';

export default function createHelperTest() {

  describe('createHelperTest', function () {

    /**
     * @tc.number SUB_DF_FILE_ACCESS_CREATE_FILE_HELPER_0000
     * @tc.name file_access_test_create_file_access_helper_async_000
     * @tc.desc Test createFileAccessHelper() interfaces, return in promise mode.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_access_test_create_file_access_helper_async_000', 0, async (done) => {
      try {
        let wants = await fileAccess.getFileAccessAbilityInfo();
        let helper = fileAccess.createFileAccessHelper(globalThis.abilityContext, wants);
        expect(helper != null).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_access_test_create_file_access_helper_async_000 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_FILE_ACCESS_CREATE_FILE_HELPER_0100
     * @tc.name file_access_test_create_file_access_helper_async_001
     * @tc.desc Test createFileAccessHelper() interfaces, Pull up media library service.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_access_test_create_file_access_helper_async_001', 0, async (done) => {
      try {
        let wants = await fileAccess.getFileAccessAbilityInfo();
        let mediaName = 'com.ohos.medialibrary.medialibrarydata';
        let result = wants.filter(item => item.bundleName == mediaName);
        let helper = fileAccess.createFileAccessHelper(globalThis.abilityContext, result);
        expect(helper != null).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_access_test_create_file_access_helper_async_001 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_FILE_ACCESS_CREATE_FILE_HELPER_0200
    * @tc.name file_access_test_create_file_access_helper_async_002
    * @tc.desc Test createFileAccessHelper() interfaces, Pull up shared disk service.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('file_access_test_create_file_access_helper_async_002', 0, async (done) => {
      try {
        let wants = await fileAccess.getFileAccessAbilityInfo();
        let name = 'com.ohos.UserFile.ExternalFileManager';
        let result = wants.filter(item => item.bundleName == name);
        let helper = fileAccess.createFileAccessHelper(globalThis.abilityContext, result);
        expect(helper != null).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_access_test_create_file_access_helper_async_002 has failed for ' + err);
      }
    })

    /**
     * @tc.number SUB_DF_FILE_ACCESS_CREATE_FILE_HELPER_0300
     * @tc.name file_access_test_create_file_access_helper_async_003
     * @tc.desc Test createFileAccessHelper() interfaces, No wants parameter.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('file_access_test_create_file_access_helper_async_003', 0, async (done) => {
      try {
        let helper = fileAccess.createFileAccessHelper(globalThis.abilityContext);
        expect(helper != null).assertTrue();
        done();
      } catch (err) {
        hilog.error(DOMAIN_CODE, TAG, 'file_access_test_create_file_access_helper_async_003 has failed for ' + err);
      }
    })

    /**
    * @tc.number SUB_DF_FILE_ACCESS_CREATE_FILE_HELPER_0400
    * @tc.name file_access_test_create_file_access_helper_async_004
    * @tc.desc Test createFileAccessHelper() interfaces, concurrent requests.
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 0
    * @tc.require
    */
    it('file_access_test_create_file_access_helper_async_004', 0, async (done) => {
      try {
        let wants = await fileAccess.getFileAccessAbilityInfo();
        const delay = function delay() {
          return new Promise(async (resolve, reject) => {
            let helper = fileAccess.createFileAccessHelper(globalThis.abilityContext, wants);
            resolve(helper);
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
        hilog.error(DOMAIN_CODE, TAG, 'file_access_test_create_file_access_helper_async_004 has failed for ' + err);
      }
    })
  })
}