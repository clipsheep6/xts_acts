/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import {
  fileio, FILE_CONTENT, prepareFile, describe, it, expect,
} from '../../Common';

import fileuri from "@ohos.file.fileuri";
  
  export default function fileiogetFullDirectoryUri() {
  describe('fileio_getFullDirectoryUri', function () {
  
  /**
   * @tc.number SUB_BASIC_FM_FileAPI_FileIO_GETFULLDIRECTORYURI_0100
   * @tc.name fileio_test_fileiogetFullDirectoryUri_async_001
   * @tc.desc Test getFullDirectoryUri() interface.
   * Retrieve the URI of the current path through the file URI.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fileiogetFullDirectoryUri_async_001', 0, async function () {
    let fpath = '/data/storage/el2/base/haps/entry/files/fileio_test_fileiogetFullDirectoryUri_async_001.txt';
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
  
    try {
      let fileUriObject = new fileuri.FileUri(fpath);
      let directoryUri = fileUriObject.getFullDirectoryUri();
      expect(directoryUri + '/fileio_test_fileiogetFullDirectoryUri_async_001.txt' == fileUriObject).assertTrue();
    } catch (e) {
      console.log('fileio_test_fileiogetFullDirectoryUri_async_001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_BASIC_FM_FileAPI_FileIO_GETFULLDIRECTORYURI_0200
   * @tc.name fileio_test_fileiogetFullDirectoryUri_async_002
   * @tc.desc Test getFullDirectoryUri() interface.
   * Retrieve the URI of the current path through the folder URI.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_fileiogetFullDirectoryUri_async_002', 0, async function () {
    let dpath = '/data/storage/el2/base/haps/entry/files/fileio_test_fileiogetFullDirectoryUri_async_002';
    fileio.mkdirSync(dpath);
  
    try {
      let fileUriObject = new fileuri.FileUri(dpath);
      let directoryUri = fileUriObject.getFullDirectoryUri();
      expect(directoryUri == fileUriObject).assertTrue()
    } catch (e) {
      console.log('fileio_test_fileiogetFullDirectoryUri_async_002 has failed for ' + e);
      expect(null).assertFail();
    }
  });
  
  /**
   * @tc.number SUB_BASIC_FM_FileAPI_FileIO_GETFULLDIRECTORYURI_0300
   * @tc.name fileio_test_fileiogetFullDirectoryUri_async_003
   * @tc.desc Test getFullDirectoryUri() interface.
   * File does not exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileio_test_fileiogetFullDirectoryUri_async_003', 3, async function () {
    let fpath = '/data/storage/el2/base/haps/entry/files/fileio_test_fileiogetFullDirectoryUri_async_003.txt';

    try {
      let fileUriObject = new fileuri.FileUri(fpath);
      let directoryUri = fileUriObject.getFullDirectoryUri();
      except(false).assertTrue();
    } catch (e) {
      console.log('fileio_test_fileiogetFullDirectoryUri_async_003 has failed for ' + e);
      expect(e.message == 'No such file or directory').assertTrue();
    }
  });

  /**
   * @tc.number SUB_BASIC_FM_FileAPI_FileIO_GETFULLDIRECTORYURI_0400
   * @tc.name fileio_test_fileiogetFullDirectoryUri_async_004
   * @tc.desc Test getFullDirectoryUri() interface. -1
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileio_test_fileiogetFullDirectoryUri_async_004', 3, async function () {
    let fpath = '/data/storage/el2/base/haps/entry/files/fileio_test_fileiogetFullDirectoryUri_async_004.txt';
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
  
    try {
      let fileUriObject = new fileuri.FileUri(-1);
      let directoryUri = fileUriObject.getFullDirectoryUri();
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileio_test_fileiogetFullDirectoryUri_async_004 has failed for ' + e);
      expect(e.message == 'Invalid argument').assertTrue();
    }
  });

  /**
   * @tc.number SUB_BASIC_FM_FileAPI_FileIO_GETFULLDIRECTORYURI_0500
   * @tc.name fileio_test_fileiogetFullDirectoryUri_async_005
   * @tc.desc Test getFullDirectoryUri() interface. Witout Uri
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileio_test_fileiogetFullDirectoryUri_async_005', 3, async function () {
    let fpath = '/data/storage/el2/base/haps/entry/files/fileio_test_fileiogetFullDirectoryUri_async_005.txt';
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
  
    try {
      let fileUriObject = new fileuri.FileUri();
      let directoryUri = fileUriObject.getFullDirectoryUri();
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileio_test_fileiogetFullDirectoryUri_async_005 has failed for ' + e);
      expect(e.message == 'Invalid argument').assertTrue();
    }
  });
});
}