/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
  fileIO, FILE_CONTENT, prepareFile, nextFileName,
  describe, it, expect, fileUri,
} from '../Common';

export default function fileIOCreateStream() {
describe('fileIO_fs_createStream', function () {

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0000
   * @tc.name fileIO_test_create_stream_sync_000
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'r' mode and read data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_000', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sr = fileIO.createStreamSync(fpath, 'r');

    try {
      expect(sr !== null).assertTrue();
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      sr.writeSync(FILE_CONTENT);
      expect(false).assertTrue();
    } catch (e) {
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_sync_000 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0100
   * @tc.name fileIO_test_create_stream_sync_001
   * @tc.desc Test createStreamSync() interface.
   * File does not exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_001', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_001');

    try {
      fileIO.createStreamSync(fpath, 'r');
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_001 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0200
   * @tc.name fileIO_test_create_stream_sync_002
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'r+' mode, reading and writing data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_002', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sr = fileIO.createStreamSync(fpath, 'r+');
      expect(sr !== null).assertTrue();
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      expect(sr.writeSync(FILE_CONTENT, { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_002 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0300
   * @tc.name fileIO_test_create_stream_sync_003
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'r+' mode, file does not exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_003', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_003');

    try {
      fileIO.createStreamSync(fpath, 'r+');
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_003 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0400
   * @tc.name fileIO_test_create_stream_sync_004
   * @tc.desc Test createStreamSync() interface.
   * Invalid mode.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_004', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_004');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStreamSync(fpath, 'ohos');
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_004 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      fileIO.unlinkSync(fpath);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0500
   * @tc.name fileIO_test_create_stream_sync_005
   * @tc.desc Test createStreamSync() interface.
   * Missing parameter.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_005', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_005');

    try {
      fileIO.createStreamSync(fpath);
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_005 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0600
   * @tc.name fileIO_test_create_stream_sync_006
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w' mode, writing data to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_006', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_006');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sw = fileIO.createStreamSync(fpath, 'w');

    try {
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.readSync(new ArrayBuffer(4096));
      expect(false).assertTrue();
    } catch (e) {
      sw.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_sync_006 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0700
   * @tc.name fileIO_test_create_stream_sync_007
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w' mode and empty contents.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_007', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_007');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sw = fileIO.createStreamSync(fpath, 'w');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();

      let sr = fileIO.createStreamSync(fpath, 'r');
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_007 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0800
   * @tc.name fileIO_test_create_stream_sync_008
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w' mode, creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_008', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_008');

    try {
      let sw = fileIO.createStreamSync(fpath, 'w');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_008 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_0900
   * @tc.name fileIO_test_create_stream_sync_009
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w+' mode and empty contents.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_009', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_009');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sw = fileIO.createStreamSync(fpath, 'w+');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_009 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1000
   * @tc.name fileIO_test_create_stream_sync_010
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w+' mode and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_010', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_010');

    try {
      let sw = fileIO.createStreamSync(fpath, 'w+');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_010 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1100
   * @tc.name fileIO_test_create_stream_sync_011
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a' mode and append contents.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_011', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_011');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sa = fileIO.createStreamSync(fpath, 'a');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();

      let sr = fileIO.createStreamSync(fpath, 'r');
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length * 2).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_011 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1200
   * @tc.name fileIO_test_create_stream_sync_012
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a' mode and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_012', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_012');

    try {
      let sa = fileIO.createStreamSync(fpath, 'a');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_012 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1300
   * @tc.name fileIO_test_create_stream_sync_013
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a' mode and write data to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_013', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_013');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sa = fileIO.createStreamSync(fpath, 'a');

    try {
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.readSync(new ArrayBuffer(4096));
      expect(false).assertTrue();
    } catch (e) {
      sa.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_sync_013 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1400
   * @tc.name fileIO_test_create_stream_sync_014
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a+' mode and append contents.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_014', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_014');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sa = fileIO.createStreamSync(fpath, 'a+');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length * 2).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_014 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1500
   * @tc.name fileIO_test_create_stream_sync_015
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a+' mode and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_015', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_015');

    try {
      let sa = fileIO.createStreamSync(fpath, 'a+');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_015 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1600
   * @tc.name fileIO_test_create_stream_sync_016
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'r' mode by uri and read data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_016', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_016');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sr = fileIO.createStreamSync(uri, 'r');

    try {
      expect(sr !== null).assertTrue();
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      sr.writeSync(FILE_CONTENT);
      expect(false).assertTrue();
    } catch (e) {
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_sync_016 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1700
   * @tc.name fileIO_test_create_stream_sync_017
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'r+' mode by uri, reading and writing data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_017', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_017');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sr = fileIO.createStreamSync(uri, 'r+');

    try {
      expect(sr !== null).assertTrue();
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      expect(sr.writeSync(FILE_CONTENT, { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_017 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1800
   * @tc.name fileIO_test_create_stream_sync_018
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w' mode by uri, writing data to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_018', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_018');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sw = fileIO.createStreamSync(uri, 'w');

    try {
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.readSync(new ArrayBuffer(4096));
      expect(false).assertTrue();
    } catch (e) {
      sw.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_sync_018 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_1900
   * @tc.name fileIO_test_create_stream_sync_019
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w' mode by uri and empty contents.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_019', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_019');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sw = fileIO.createStreamSync(uri, 'w');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();

      let sr = fileIO.createStreamSync(uri, 'r');
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_019 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_2000
   * @tc.name fileIO_test_create_stream_sync_020
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w' mode by uri, creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_020', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_020');
    let uri = fileUri.getUriFromPath(fpath);

    try {
      let sw = fileIO.createStreamSync(uri, 'w');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_020 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_2100
   * @tc.name fileIO_test_create_stream_sync_021
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w+' mode by uri and empty contents.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_021', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_021');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sw = fileIO.createStreamSync(uri, 'w+');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_021 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_2200
   * @tc.name fileIO_test_create_stream_sync_022
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'w+' mode by uri and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_022', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_022');
    let uri = fileUri.getUriFromPath(fpath);

    try {
      let sw = fileIO.createStreamSync(uri, 'w+');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_022 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_2300
   * @tc.name fileIO_test_create_stream_sync_023
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a' mode by uri and append contents.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_023', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_023');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sa = fileIO.createStreamSync(uri, 'a');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();

      let sr = fileIO.createStreamSync(uri, 'r');
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length * 2).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_023 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_2400
   * @tc.name fileIO_test_create_stream_sync_024
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a' mode by uri and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_024', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_024');
    let uri = fileUri.getUriFromPath(fpath);

    try {
      let sa = fileIO.createStreamSync(uri, 'a');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_024 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_2500
   * @tc.name fileIO_test_create_stream_sync_025
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a' mode by uri and write data to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_025', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_025');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sa = fileIO.createStreamSync(uri, 'a');

    try {
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.readSync(new ArrayBuffer(4096));
      expect(false).assertTrue();
    } catch (e) {
      sa.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_sync_025 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_2600
   * @tc.name fileIO_test_create_stream_sync_026
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a+' mode by uri and append contents.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_026', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_026');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sa = fileIO.createStreamSync(uri, 'a+');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length * 2).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_026 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATESTREAM_SYNC_2700
   * @tc.name fileIO_test_create_stream_sync_027
   * @tc.desc Test createStreamSync() interface.
   * Create stream in 'a+' mode by uri and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_sync_027', 0, async function () {
    let fpath = await nextFileName('fileIO_test_create_stream_sync_027');
    let uri = fileUri.getUriFromPath(fpath);

    try {
      let sa = fileIO.createStreamSync(uri, 'a+');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
    } catch (e) {
      console.log('fileIO_test_create_stream_sync_027 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0000
   * @tc.name fileIO_test_create_stream_async_000
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'r' mode and read data from stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_000', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sr = await fileIO.createStream(fpath, 'r');

    try {
      expect(sr !== null).assertTrue();
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      sr.writeSync(FILE_CONTENT);
      expect(false).assertTrue();
    } catch (e) {
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_async_000 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0100
   * @tc.name fileIO_test_create_stream_async_001
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'r' mode and read data from stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_001', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStream(fpath, 'r', (err, sr) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_001 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sr !== null).assertTrue();
        expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
        sr.write(FILE_CONTENT, (err) => {
          if (err) {
            sr.closeSync();
            fileIO.unlinkSync(fpath);
            console.log(
              'fileIO_test_create_stream_async_001 error: {message: ' + err.message + ', code: ' + err.code + '}'
            );
            expect(err.code == 13900005 && err.message == 'I/O error').assertTrue();
            done();
          } else {
            expect(false).assertTrue();
          }
        });
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_001 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0200
   * @tc.name fileIO_test_create_stream_async_002
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'r' mode, file does not exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_002', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_002');

    try {
      await fileIO.createStream(fpath, 'r');
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_002 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0300
   * @tc.name fileIO_test_create_stream_async_003
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'r' mode, file does not exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_003', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_003');

    try {
      fileIO.createStream(fpath, 'r', (err) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_003 error: {message: ' + err.message + ', code: ' + err.code + '}');
          expect(err.code == 13900002 && err.message == 'No such file or directory').assertTrue();
          done();
        }
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_003 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0400
   * @tc.name fileIO_test_create_stream_async_004
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'r+' mode, reading and writing data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 1
   * @tc.require
   */
  it('fileIO_test_create_stream_async_004', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_004');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sr = await fileIO.createStream(fpath, 'r+');
      expect(sr !== null).assertTrue();
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      expect(sr.writeSync(FILE_CONTENT, { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_004 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0500
   * @tc.name fileIO_test_create_stream_async_005
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'r+' mode, reading and writing data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 1
   * @tc.require
   */
  it('fileIO_test_create_stream_async_005', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_005');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStream(fpath, 'r+', (err, sr) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_005 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sr !== null).assertTrue();
        expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
        expect(sr.writeSync(FILE_CONTENT, { offset: 0 }) == FILE_CONTENT.length).assertTrue();
        sr.closeSync();
        fileIO.unlinkSync(fpath);
        done();
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_005 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0600
   * @tc.name fileIO_test_create_stream_async_006
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'r+' mode, File does not exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_006', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_006');

    try {
      await fileIO.createStream(fpath, 'r+');
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_006 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900002 && e.message == 'No such file or directory').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0700
   * @tc.name fileIO_test_create_stream_async_007
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'r+' mode, file does not exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_007', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_007');

    try {
      fileIO.createStream(fpath, 'r+', (err) => {
        console.log('fileIO_test_create_stream_async_007 error: {message: ' + err.message + ', code: ' + err.code + '}');
        expect(err.code == 13900002 && err.message == 'No such file or directory').assertTrue();
        done();
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_007 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0800
   * @tc.name fileIO_test_create_stream_async_008
   * @tc.desc Test createStream() interfaces. Promise.
   * Invalid mode.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_008', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_008');

    try {
      await fileIO.createStream(fpath, 'ohos');
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_008 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_0900
   * @tc.name fileIO_test_create_stream_async_009
   * @tc.desc Test createStream() interfaces. Promise.
   * Missing parameter.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_009', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_009');

    try {
      await fileIO.createStream(fpath);
      expect(false).assertTrue();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_009 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900020 && e.message == 'Invalid argument').assertTrue();
      done();
    }
  });


  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1000
   * @tc.name fileIO_test_create_stream_async_010
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'w' mode and write data to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_010', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_010');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sw = await fileIO.createStream(fpath, 'w');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();

      let sr = fileIO.createStreamSync(fpath, 'r');
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_010 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1100
   * @tc.name fileIO_test_create_stream_async_011
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'w' mode, can't to read data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_011', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_011');
    let sw = await fileIO.createStream(fpath, 'w');

    try {
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.readSync(new ArrayBuffer(4096));
      expect(false).assertTrue();
    } catch (e) {
      sw.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_async_011 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1200
   * @tc.name fileIO_test_create_stream_async_012
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'w' mode, can't to read data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_012', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_012');

    try {
      fileIO.createStream(fpath, 'w', (err, sw) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_012 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sw !== null).assertTrue();
        expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        sw.read(new ArrayBuffer(4096), (err) => {
          if (err) {
            sw.closeSync();
            fileIO.unlinkSync(fpath);
            console.log(
              'fileIO_test_create_stream_async_012 error: {message: ' + err.message + ', code: ' + err.code + '}'
            );
            expect(err.code == 13900005 && err.message == 'I/O error').assertTrue();
            done();
          } else {
            expect(false).assertTrue();
          }
        });
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_012 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1300
   * @tc.name fileIO_test_create_stream_async_013
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'w+' mode and write/read data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_013', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_013');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sw = await fileIO.createStream(fpath, 'w+');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_013 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1400
   * @tc.name fileIO_test_create_stream_async_014
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'w+' mode and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_014', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_014');

    try {
      let sw = await fileIO.createStream(fpath, 'w+');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_014 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1500
   * @tc.name fileIO_test_create_stream_async_015
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'w+' mode and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_015', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_015');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStream(fpath, 'w+', (err, sw) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_015 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sw !== null).assertTrue();
        expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
        sw.closeSync();
        fileIO.unlinkSync(fpath);
        done();
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_015 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1600
   * @tc.name fileIO_test_create_stream_async_016
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'a' mode and append content to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_016', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_016');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sa = await fileIO.createStream(fpath, 'a');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();

      let sr = fileIO.createStreamSync(fpath, 'r');
      expect(sr.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length * 2).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_016 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1700
   * @tc.name fileIO_test_create_stream_async_017
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'a' mode and can't to read data from stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_017', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_017');
    let sa = await fileIO.createStream(fpath, 'a');

    try {
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.readSync(new ArrayBuffer(4096));
      expect(false).assertTrue();
    } catch (e) {
      sa.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_async_017 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1800
   * @tc.name fileIO_test_create_stream_async_018
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'a' mode and can't to read data from stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_018', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_018');
    
    try {
      fileIO.createStream(fpath, 'a', (err, sa) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_018 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sa !== null).assertTrue();
        expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        sa.read(new ArrayBuffer(4096), (err) => {
          if (err) {
            sa.closeSync();
            fileIO.unlinkSync(fpath);
            console.log(
              'fileIO_test_create_stream_async_018 error: {message: ' + err.message + ', code: ' + err.code + '}'
              );
            expect(err.code == 13900005 && err.message == 'I/O error').assertTrue();
            done();
          } else {
            expect(false).assertTrue();
          }
        })
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_018 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_1900
   * @tc.name fileIO_test_create_stream_async_019
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'a+' mode and append content to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_019', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_019');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sa = await fileIO.createStream(fpath, 'a+');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length * 2).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_019 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2000
   * @tc.name fileIO_test_create_stream_async_020
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'a+' mode and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_020', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_019');

    try {
      let sa = await fileIO.createStream(fpath, 'a+');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_020 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2100
   * @tc.name fileIO_test_create_stream_async_021
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'a+' mode and append content to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_021', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_021');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStream(fpath, 'a+', (err, sa) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_021 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sa !== null).assertTrue();
        expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length * 2).assertTrue();
        sa.closeSync();
        fileIO.unlinkSync(fpath);
        done();
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_021 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2200
   * @tc.name fileIO_test_create_stream_async_022
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'r' mode by uri and read data from stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_022', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_022');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let sr = await fileIO.createStream(uri, 'r');

    try {
      expect(sr !== null).assertTrue();
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      sr.writeSync(FILE_CONTENT);
      expect(false).assertTrue();
    } catch (e) {
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_async_022 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2300
   * @tc.name fileIO_test_create_stream_async_023
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'r' mode by uri and read data from stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_023', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_023');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStream(uri, 'r', (err, sr) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_023 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sr !== null).assertTrue();
        expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
        sr.write(FILE_CONTENT, (err) => {
          if (err) {
            sr.closeSync();
            fileIO.unlinkSync(fpath);
            console.log(
              'fileIO_test_create_stream_async_023 error: {message: ' + err.message + ', code: ' + err.code + '}'
            );
            expect(err.code == 13900005 && err.message == 'I/O error').assertTrue();
            done();
          } else {
            expect(false).assertTrue();
          }
        });
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_023 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });
  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2400
   * @tc.name fileIO_test_create_stream_async_024
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'r+' mode by uri, reading and writing data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 1
   * @tc.require
   */
  it('fileIO_test_create_stream_async_024', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_024');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sr = await fileIO.createStream(uri, 'r+');
      expect(sr !== null).assertTrue();
      expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
      expect(sr.writeSync(FILE_CONTENT, { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_024 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2500
   * @tc.name fileIO_test_create_stream_async_025
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'r+' mode by uri, reading and writing data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 1
   * @tc.require
   */
  it('fileIO_test_create_stream_async_025', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_025');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStream(uri, 'r+', (err, sr) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_025 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sr !== null).assertTrue();
        expect(sr.readSync(new ArrayBuffer(4096)) == FILE_CONTENT.length).assertTrue();
        expect(sr.writeSync(FILE_CONTENT, { offset: 0 }) == FILE_CONTENT.length).assertTrue();
        sr.closeSync();
        fileIO.unlinkSync(fpath);
        done();
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_025 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2600
   * @tc.name fileIO_test_create_stream_async_026
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'w' mode by uri, can't to read data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_026', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_026');
    let uri = fileUri.getUriFromPath(fpath);
    let sw = await fileIO.createStream(uri, 'w');

    try {
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sw.readSync(new ArrayBuffer(4096));
      expect(false).assertTrue();
    } catch (e) {
      sw.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_async_026 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2700
   * @tc.name fileIO_test_create_stream_async_027
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'w' mode by uri, can't to read data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_027', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_027');
    let uri = fileUri.getUriFromPath(fpath);

    try {
      fileIO.createStream(uri, 'w', (err, sw) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_027 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sw !== null).assertTrue();
        expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        sw.read(new ArrayBuffer(4096), (err) => {
          if (err) {
            sw.closeSync();
            fileIO.unlinkSync(fpath);
            console.log(
              'fileIO_test_create_stream_async_027 error: {message: ' + err.message + ', code: ' + err.code + '}'
            );
            expect(err.code == 13900005 && err.message == 'I/O error').assertTrue();
            done();
          } else {
            expect(false).assertTrue();
          }
        });
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_027 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2800
   * @tc.name fileIO_test_create_stream_async_028
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'w+' mode by uri and write/read data from this stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_028', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_028');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sw = await fileIO.createStream(uri, 'w+');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_028 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_2900
   * @tc.name fileIO_test_create_stream_async_029
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'w+' mode by uri and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_029', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_029');
    let uri = fileUri.getUriFromPath(fpath);

    try {
      let sw = await fileIO.createStream(uri, 'w+');
      expect(sw !== null).assertTrue();
      expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sw.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_029 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_3000
   * @tc.name fileIO_test_create_stream_async_030
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'w+' mode by uri and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_030', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_030');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStream(uri, 'w+', (err, sw) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_030 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sw !== null).assertTrue();
        expect(sw.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        expect(sw.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
        sw.closeSync();
        fileIO.unlinkSync(fpath);
        done();
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_030 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_3100
   * @tc.name fileIO_test_create_stream_async_031
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'a' mode by uri and append content to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_031', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_031');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sa = await fileIO.createStream(uri, 'a');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();

      let sr = fileIO.createStreamSync(fpath, 'r');
      expect(sr.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length * 2).assertTrue();
      sr.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_031 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_3200
   * @tc.name fileIO_test_create_stream_async_032
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'a' mode by uri and can't to read data from stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_032', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_032');
    let uri = fileUri.getUriFromPath(fpath);
    let sa = await fileIO.createStream(uri, 'a');

    try {
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      sa.readSync(new ArrayBuffer(4096));
      expect(false).assertTrue();
    } catch (e) {
      sa.closeSync();
      fileIO.unlinkSync(fpath);
      console.log('fileIO_test_create_stream_async_032 has failed for ' + e.message + ', code: ' + e.code);
      expect(e.code == 13900005 && e.message == 'I/O error').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_3300
   * @tc.name fileIO_test_create_stream_async_033
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'a' mode by uri and can't to read data from stream.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_033', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_033');
    let uri = fileUri.getUriFromPath(fpath);
    
    try {
      fileIO.createStream(uri, 'a', (err, sa) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_033 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sa !== null).assertTrue();
        expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        sa.read(new ArrayBuffer(4096), (err) => {
          if (err) {
            sa.closeSync();
            fileIO.unlinkSync(fpath);
            console.log(
              'fileIO_test_create_stream_async_033 error: {message: ' + err.message + ', code: ' + err.code + '}'
              );
            expect(err.code == 13900005 && err.message == 'I/O error').assertTrue();
            done();
          } else {
            expect(false).assertTrue();
          }
        })
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_033 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_3400
   * @tc.name fileIO_test_create_stream_async_034
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'a+' mode by uri and append content to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_034', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_034');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let sa = await fileIO.createStream(uri, 'a+');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length * 2).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_034 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_3500
   * @tc.name fileIO_test_create_stream_async_035
   * @tc.desc Test createStream() interfaces. Promise.
   * Create stream in 'a+' mode by uri and creat a file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_035', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_035');
    let uri = fileUri.getUriFromPath(fpath);

    try {
      let sa = await fileIO.createStream(uri, 'a+');
      expect(sa !== null).assertTrue();
      expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length).assertTrue();
      sa.closeSync();
      fileIO.unlinkSync(fpath);
      done();
    } catch (e) {
      console.log('fileIO_test_create_stream_async_035 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_CREATE_CREATESTREAM_ASYNC_3600
   * @tc.name fileIO_test_create_stream_async_036
   * @tc.desc Test createStream() interfaces. Callback.
   * Create stream in 'a+' mode by uri and append content to file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 3
   * @tc.require
   */
  it('fileIO_test_create_stream_async_036', 0, async function (done) {
    let fpath = await nextFileName('fileIO_test_create_stream_async_036');
    let uri = fileUri.getUriFromPath(fpath);
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileIO.createStream(uri, 'a+', (err, sa) => {
        if (err) {
          console.log('fileIO_test_create_stream_async_036 error package: ' + JSON.stringify(err));
          expect(false).assertTrue();
        }
        expect(sa !== null).assertTrue();
        expect(sa.writeSync(FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
        expect(sa.readSync(new ArrayBuffer(4096), { offset: 0 }) == FILE_CONTENT.length * 2).assertTrue();
        sa.closeSync();
        fileIO.unlinkSync(fpath);
        done();
      });
    } catch (e) {
      console.log('fileIO_test_create_stream_async_036 has failed for ' + e.message + ', code: ' + e.code);
      expect(false).assertTrue();
    }
  });
});
}
