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
  fileio, FILE_CONTENT, prepareFile, nextFileName, fileToReadOnly, fileToWriteOnly,
  describe, it, expect,
} from '../../Common';

describe('fileio_createStream', function () {

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0000
   * @tc.name fileio_test_stream_create_stream_async_000
   * @tc.desc Test createStreamAsync() interfaces, return in promise mode. mode = r+. The test file is exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_000', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let ss = await fileio.createStream(fpath, 'r+');
      expect(ss !== null).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    } catch (e) {
      console.info('fileio_test_stream_create_stream_async_000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0100
   * @tc.name fileio_test_stream_create_stream_async_001
   * @tc.desc Test createStreamAsync() interfaces, return in callback mode. mode = r. The test file is exist.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_001', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    expect(fileToReadOnly(fpath)).assertTrue();

    try {
      fileio.createStream(fpath, 'r', function (err, ss) {
        expect(ss !== null).assertTrue();
        ss.closeSync();
        fileio.unlinkSync(fpath);
        done();
      });
    } catch (e) {
      console.info('fileio_test_stream_create_stream_async_001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0200
   * @tc.name fileio_test_stream_create_stream_async_002
   * @tc.desc Test createStreamAsync() interfaces, return in promise mode. mode = w+. Test file length is cleared to 0.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_002', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o2);
      let buf = new ArrayBuffer(4096);
      let number = fileio.readSync(fd, buf);
      expect(number == 11).assertTrue();
      let ss = await fileio.createStream(fpath, 'w+');
      let num = ss.readSync(buf);
      expect(num == 0).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_002 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0300
   * @tc.name fileio_test_stream_create_stream_async_003
   * @tc.desc Test createStreamAsync() interfaces, return in callback mode. mode = w+. Test the new file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_stream_create_stream_async_003', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_003');

    try {
      fileio.createStream(fpath, 'w+', function (err, ss) {
        expect(ss !== null).assertTrue();
        fileio.accessSync(fpath);
        ss.closeSync();
        fileio.unlinkSync(fpath);
        done();
      });
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_003 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0400
   * @tc.name fileio_test_stream_create_stream_async_004
   * @tc.desc Test createStreamAsync() interfaces, return in promise mode. mode = w. Test file length is cleared to 0.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_004', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_004');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o2);
      let buf = new ArrayBuffer(4096);
      let number = fileio.readSync(fd, buf);
      expect(number == 11).assertTrue();
      expect(fileToWriteOnly(fpath)).assertTrue();
      let ss = await fileio.createStream(fpath, 'w');
      let num = fileio.readSync(fd, buf);
      expect(num == 0).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_004 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0500
   * @tc.name fileio_test_stream_create_stream_async_005
   * @tc.desc Test createStreamAsync() interfaces, return in callback mode. mode = w. Test the new file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_005', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_005');

    try {
      fileio.createStream(fpath, 'w', function (err, ss) {
        expect(ss !== null).assertTrue();
        fileio.accessSync(fpath);
        ss.closeSync();
        fileio.unlinkSync(fpath);
        done();
      });
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_005 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0600
   * @tc.name fileio_test_stream_create_stream_async_006
   * @tc.desc Test createStreamAsync() interfaces, return in promise mode. mode = a+. Test append file content.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_006', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_006');
    expect(prepareFile(fpath, 'a')).assertTrue();
    let text = '0123456789abcdefg';
    try {
      let ss = await fileio.createStream(fpath, 'a+');
      expect(ss !== null).assertTrue();
      let wlen = ss.writeSync(text);
      expect(wlen !== null).assertTrue();
      ss.closeSync();
      expect(fileToReadOnly(fpath)).assertTrue();
      ss = await fileio.createStream(fpath, 'r');
      let rlen = ss.readSync(new ArrayBuffer(4096));
      expect(rlen == text.length + 1).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_006 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0700
   * @tc.name fileio_test_stream_create_stream_async_007
   * @tc.desc Test createStreamAsync() interfaces, return in callback mode. mode = a+. Test the new file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_007', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_007');
    try {
      fileio.createStream(fpath, 'a+', function (err, ss) {
        expect(ss !== null).assertTrue();
        fileio.accessSync(fpath);
        ss.closeSync();
        fileio.unlinkSync(fpath);
        done();
      });
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_007 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0800
   * @tc.name fileio_test_stream_create_stream_async_008
   * @tc.desc Test createStreamAsync() interfaces, return in promise mode. mode = a. Test append file content.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_008', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_008');
    expect(prepareFile(fpath, 'a')).assertTrue();
    expect(fileToWriteOnly(fpath)).assertTrue();
    let text = '0123456789abcdefg';
    try {
      let ss = await fileio.createStream(fpath, 'a');
      expect(ss !== null).assertTrue();
      let wlen = ss.writeSync(text);
      expect(wlen !== null).assertTrue();
      ss.closeSync();
      expect(fileToReadOnly(fpath)).assertTrue();
      ss = await fileio.createStream(fpath, 'r');
      let rlen = ss.readSync(new ArrayBuffer(4096));
      expect(rlen == text.length + 1).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_008 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_0900
   * @tc.name fileio_test_stream_create_stream_async_009
   * @tc.desc Test createStreamAsync() interfaces, return in callback mode. mode = a. Test the new file.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_009', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_009');
    try {
      fileio.createStream(fpath, 'a', function(err, ss) {
        expect(ss !== null).assertTrue();
        fileio.accessSync(fpath);
        ss.closeSync();
        fileio.unlinkSync(fpath);
        done();
      });
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_009 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_1000
   * @tc.name fileio_test_stream_create_stream_async_010
   * @tc.desc Test createStreamAsync() interfaces. Invalid path.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_010', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_010');

    try {
      await fileio.createStream(fpath, 'r+');
    } catch (e) {
      console.info('fileio_test_stream_create_stream_async_010 has failed for ' + e);
      expect(e.message == 'No such file or directory').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_1100
   * @tc.name fileio_test_stream_create_stream_async_011
   * @tc.desc Test createStreamAsync() interfaces. Invalid argument.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_011', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_011');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      await fileio.createStream(fpath, 'ohos');
    } catch (e) {
      console.info('fileio_test_stream_create_stream_async_011 has failed for ' + e);
      expect(e.message == 'Invalid argument').assertTrue();
      fileio.unlinkSync(fpath);
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_1200
   * @tc.name fileio_test_stream_create_stream_async_012
   * @tc.desc Test createStreamAsync() interfaces. Missing parameters.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_012', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_012');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    try {
      await fileio.createStream(fpath);
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_012 has failed for ' + e);
      expect(e.message == 'Number of arguments unmatched').assertTrue();
      fileio.unlinkSync(fpath);
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_1300
   * @tc.name fileio_test_stream_create_stream_async_013
   * @tc.desc Test createStreamAsync() interfaces. Invalid path.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_013', 0, async function (done) {
    try {
      await fileio.createStream('', 'r');
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_013 has failed for ' + e);
      expect(e.message == 'No such file or directory').assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_CREATE_STREAM_ASYNC_1400
   * @tc.name fileio_test_stream_create_stream_async_014
   * @tc.desc Test createStreamAsync() interfaces.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_create_stream_async_014', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_create_stream_async_014');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    try {
      await fileio.createStream(fpath, '');
    }
    catch (e) {
      console.info('fileio_test_stream_create_stream_async_014 has failed for ' + e);
      expect(e.message == 'Invalid mode').assertTrue();
      fileio.unlinkSync(fpath);
      done();
    }
  });
});
