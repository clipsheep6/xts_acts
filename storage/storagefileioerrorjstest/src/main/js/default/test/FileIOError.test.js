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

import fileio from '@ohos.fileio'
import {
  describe,
  it,
  expect
}
from 'deccjsunit/index'
import {
  FILE_CONTENT,
  prepareFile,
  fileName,
  nextFileName,
  appName,
  randomString,
  isIntNum
}
from './Common'

describe('FileIOError', function () {

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0000
   * @tc.name FileIo_test_error_000
   * @tc.desc Function of API, copy. fpathTarget is invalid.
   */
  it('FileIo_test_error_000', 0, function () {
    let fpath = nextFileName('fileio_test_error');
    let fpathTarget = appName('fileio_test_error');
    try {
      expect(fileio.copyFileSync(fpath, fpathTarget) === undefined).assertTrue();
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('fileio_test_error_000 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0100
   * @tc.name FileIo_test_error_001
   * @tc.desc Sync to mkdir and rmdir.
   */
  it('FileIo_test_error_001', 0, function () {
    let dpath = nextFileName('fileio_test_error_001d');
    try {
      expect(fileio.mkdirSync(dpath) === undefined).assertTrue();
      expect(fileio.rmdirSync(dpath) === undefined).assertTrue();
    }
    catch (e) {
      console.log('fileio_test_error_001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0200
   * @tc.name FileIo_test_error_002
   * @tc.desc Sync to mkdir and rmdir. mkdirSync(mode=0o660).
   */
  it('FileIo_test_error_002', 0, function () {
    let dpath = fileName('fileio_test_error_002d');
    try {
      expect(fileio.mkdirSync(dpath, 0o660) === undefined).assertTrue();
      expect(fileio.rmdirSync(dpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('fileio_test_error_002 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0300
   * @tc.name FileIo_test_error_003
   * @tc.desc Function of API, writeSync.
   */
  it('FileIo_test_error_003', 0, function () {
    let fpath = nextFileName('fileio_test_error_003');
    try {
      let fd = fileio.openSync(fpath, 0o102, 0o777);
      expect(isIntNum(fd)).assertTrue();
      expect(fileio.writeSync(fd, FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(fileio.closeSync(fd) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('fileio_test_error_003 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0400
   * @tc.name FileIo_test_error_004
   * @tc.desc Function of API, fsyneSync.
   */
  it('FileIo_test_error_004', 0, function () {
    let fpath = nextFileName('fileio_test_error_004');
    try {
      let fd = fileio.openSync(fpath, 0o102, 0o777);
      expect(isIntNum(fd)).assertTrue();
      expect(fileio.fsyncSync(fd) === undefined).assertTrue();
      expect(fileio.closeSync(fd) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('fileio_test_error_004 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0500
   * @tc.name FileIo_test_error_005
   * @tc.desc Function of API, openSync. The test file is not exist.
   */
  it('FileIo_test_error_005', 0, function () {
    let fpath = nextFileName('fileio_test_error_005');
    try {
      fileio.openSync(fpath);
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('fileio_test_error_005 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0600
   * @tc.name FileIo_test_error_006
   * @tc.desc Function of API, readSync.
   */
  it('FileIo_test_error_006', 0, function () {
    let fpath = nextFileName('fileio_test_error_006');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      let rlen = fileio.readSync(fd, new ArrayBuffer(209715200));
      expect(rlen == FILE_CONTENT.length).assertTrue();
      expect(fileio.closeSync(fd) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('fileio_test_error_006 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0700
   * @tc.name FileIo_test_error_007
   * @tc.desc Function of API, mode = r+. The test file is not exist.
   */
  it('FileIo_test_error_007', 0, function () {
    let fpath = nextFileName('fileio_test_error_007');
    try {
      fileio.createStreamSync(fpath, 'r+');
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('fileio_test_error_007 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0800
   * @tc.name FileIo_test_error_008
   * @tc.desc Function of API, mode = w. The test file is exist.
   */
  it('FileIo_test_error_008', 0, function () {
    let fpath = nextFileName('fileio_test_error_008');
    let txt = 'hello';
    expect(prepareFile(fpath, txt)).assertTrue();
    try {
      let ss = fileio.createStreamSync(fpath, 'r+');
      expect(ss !== null).assertTrue();
      let rlen = ss.readSync(new ArrayBuffer(209715200));
      expect(rlen == txt.length).assertTrue();
      expect(ss.closeSync() === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('fileio_test_error_008 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_0900
   * @tc.name FileIo_test_error_009
   * @tc.desc Function of API, Delete directories with files. Directory not empty.
   */
  it('FileIo_test_error_009', 0, function () {
    let dpath = fileName('fileio_test_error_009d');
    let fpath = dpath + '/fileio_test_error_009f';
    expect(fileio.mkdirSync(dpath) === undefined).assertTrue();
    expect(prepareFile(fpath, 'hello')).assertTrue();
    try {
      expect(fileio.rmdirSync(dpath) === undefined).assertTrue();
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('fileio_test_error_009 has failed for ' + e);
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
      expect(fileio.rmdirSync(dpath) === undefined).assertTrue();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_1000
   * @tc.name FileIo_test_error_010
   * @tc.desc Function of API, delete file. Not a directory.
   */
  it('FileIo_test_error_010', 0, function () {
    let fpath = fileName('fileio_test_error_010f');
    expect(prepareFile(fpath, 'hello')).assertTrue();
    try {
      expect(fileio.rmdirSync(fpath) === undefined).assertTrue();
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('fileio_test_error_010 has failed for ' + e);
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_1100
   *
   *
   *
   * @tc.name FileIo_test_error_011
   * @tc.desc Function of API, parameter more than 4096.
   */
  it('FileIo_test_error_011', 0, function () {
    let fpath = nextFileName('fileio_test_error_011');
    let fd = fileio.openSync(fpath, 0o102, 0o777);
    expect(isIntNum(fd)).assertTrue();
    let dpath = nextFileName('fileio_error_011d');
    expect(fileio.mkdirSync(dpath) === undefined).assertTrue();
    try {
      for (let i = 0; i < 16; i++) {
        if (i == 15) {
          let fpathTarget = dpath + '/f' + randomString(248);
          expect(fileio.copyFileSync(fpath, fpathTarget) === undefined).assertTrue();
        } else {
          dpath = dpath + '/d' + randomString(248);
          fileio.mkdirSync(dpath);
        }
      }
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('fileio_test_error_011 has failed for ' + e);
      expect(fileio.closeSync(fd) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIo_test_error_1200
   * @tc.name FileIo_test_error_012
   * @tc.desc Function of API, flags=0o102. The test file is exist. missing mode parameter.
   */
  it('FileIo_test_error_012', 0, function () {
    let fpath = nextFileName('FileIo_test_error_012');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    try {
      fileio.openSync(fpath, 0o102);
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('FileIo_test_error_012 has failed for ' + e);
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_1300
   * @tc.name FileIo_test_error_013
   * @tc.desc Function of API, flags=0o102. The test file is not exist. missing mode parameter.
   */
  it('FileIo_test_error_013', 0, function () {
    let fpath = nextFileName('FileIo_test_error_013');
    try {
      fileio.openSync(fpath, 0o102);
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('FileIo_test_error_013 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_1400
   * @tc.name FileIo_test_error_014
   * @tc.desc Function of API,  flags=0o202. The test file is exist.
   */
  it('FileIo_test_error_014', 0, function () {
    let fpath = nextFileName('FileIo_test_error_014');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    try {
      let fd = fileio.openSync(fpath, 0o202);
      expect(isIntNum(fd)).assertTrue();
      expect(fileio.closeSync(fd) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('FileIo_test_error_014 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_1500
   * @tc.name FileIo_test_error_015
   * @tc.desc Function of API,  flags=0o302. The test file is exist. missing mode parameter.
   */
  it('FileIo_test_error_015', 0, function () {
    let fpath = nextFileName('FileIo_test_error_015');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    try {
      fileio.openSync(fpath, 0o302);
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('FileIo_test_error_015 has failed for ' + e);
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_1600
   * @tc.name FileIo_test_error_016
   * @tc.desc Function of API,  flags=0o100002. The test file is exist.
   */
  it('FileIo_test_error_016', 0, function () {
    let fpath = nextFileName('FileIo_test_error_016');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    try {
      let fd = fileio.openSync(fpath, 0o100002);
      expect(isIntNum(fd)).assertTrue();
      expect(fileio.closeSync(fd) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('FileIo_test_error_016 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_1700
   * @tc.name FileIo_test_error_017
   * @tc.desc Function of API, flags=0o40002 The test file is exist. missing mode parameter.
   */
  it('FileIo_test_error_017', 0, function () {
    let dpath = nextFileName('FileIo_test_error_017');
    expect(fileio.mkdirSync(dpath) === undefined).assertTrue();
    try {
      fileio.openSync(dpath, 0o40002);
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('FileIo_test_error_017 has failed for ' + e);
      expect(fileio.rmdirSync(dpath) === undefined).assertTrue();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_1800
   * @tc.name FileIo_test_error_018
   * @tc.desc Function of API, flags=0o20040002. The test file is exist.
   */
  it('FileIo_test_error_018', 0, function () {
    let fpath = nextFileName('FileIo_test_error_018');
    try {
      fileio.openSync(fpath, 0o20040002);
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('FileIo_test_error_018 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_1900
   * @tc.name FileIo_test_error_019
   * @tc.desc Function of API, flags=0o400002. The test file is exist.
   */
  it('FileIo_test_error_019', 0, function () {
    let fpath = nextFileName('FileIo_test_error_019');
    let txt = 'h'
    expect(prepareFile(fpath, txt)).assertTrue();
    try {
      let fd = fileio.openSync(fpath, 0o400002);
      expect(isIntNum(fd)).assertTrue();
      expect(fileio.closeSync(fd) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('FileIo_test_error_019 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_2000
   * @tc.name FileIo_test_error_020
   * @tc.desc Function of API, flags=0o400002. The test file is exist.
   */
  it('FileIo_test_error_020', 0, function () {
    let fpath = nextFileName('FileIo_test_error_020');
    let txt = randomString(5000);
    expect(prepareFile(fpath, txt)).assertTrue();
    try {
      let fd = fileio.openSync(fpath, 0o400002);
      expect(isIntNum(fd)).assertTrue();
      expect(fileio.closeSync(fd) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('FileIo_test_error_020 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_2100
   * @tc.name FileIo_test_error_021
   * @tc.desc Function of API, flags=0o10000102. The test file is exist.
   */
  it('FileIo_test_error_021', 0, function () {
    let fpath = nextFileName('FileIo_test_error_021');
    try {
      fileio.openSync(fpath, 0o10000102);
      expect(null).assertFail();
    } 
    catch (e) {
      console.log('FileIo_test_error_021 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_STORAGE_FileIO_OpenSync_2200
   * @tc.name FileIo_test_error_022
   * @tc.desc Function of API,mode=1 The test file is exist.
   */
  it('FileIo_test_error_022', 0, function () {
    let fpath = nextFileName('FileIo_test_error_022');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let fpathTarget = fpath + 'f1';
    try {
      fileio.copyFileSync(fpath, fpathTarget, 1);
      expect(fileio.unlinkSync(fpath) === undefined).assertTrue();
      expect(fileio.unlinkSync(fpathTarget) === undefined).assertTrue();
    } 
    catch (e) {
      console.log('FileIo_test_error_022 has failed for ' + e);
      expect(null).assertFail();
    }
  });

});
