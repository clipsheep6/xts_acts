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
  fileio, FILE_CONTENT, prepareFile, nextFileName,
  describe, it, expect,
} from '../../Common';

describe('fileio_stream_read', function () {

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_READASYNC_0000
   * @tc.name fileio_test_stream_read_async_000
   * @tc.desc Test read() interface,return in promise mode.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_read_async_000', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_read_async_000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let ss = fileio.createStreamSync(fpath, 'r+');
      expect(ss !== null).assertTrue();
      let readout = await ss.read(new ArrayBuffer(4096));
      expect(readout.bytesRead == FILE_CONTENT.length).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    } catch (err) {
      console.info('fileio_test_stream_read_async_000 has failed for ' + err);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_READASYNC_0100
   * @tc.name fileio_test_stream_read_async_001
   * @tc.desc Test read() interface, return in callback mode.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
  it('fileio_test_stream_read_async_001', 0, async function () {
    let fpath = await nextFileName('fileio_test_stream_read_async_001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let ss = fileio.createStreamSync(fpath, 'r+');
      expect(ss !== null).assertTrue();
      ss.read(new ArrayBuffer(4096), null, function (err, readout) {
        expect(readout.bytesRead == FILE_CONTENT.length).assertTrue();
        ss.closeSync();
        fileio.unlinkSync(fpath);
      });
    } catch (err) {
      console.info('fileio_test_stream_read_async_001 has failed for ' + err);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_READASYNC_0200
   * @tc.name fileio_test_stream_read_async_002
   * @tc.desc Test read() interface, When the offset is 1 and the length is 5.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_stream_read_async_002', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_read_async_002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let ss = fileio.createStreamSync(fpath, 'r+');
      expect(ss !== null).assertTrue();
      let options = {
        offset: 1,
        length: 5
      }
      let readout = await ss.read(new ArrayBuffer(4096),options);
      expect(readout.bytesRead == 5).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    } catch (err) {
      console.info('fileio_test_stream_read_async_002 has failed for ' + err);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_READASYNC_0300
   * @tc.name fileio_test_stream_read_async_003
   * @tc.desc Test read() interface, When offset equals buffer length.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_stream_read_async_003', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_read_async_003');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let ss = fileio.createStreamSync(fpath, 'r+');
      expect(ss !== null).assertTrue();
      let readout = await ss.read(new ArrayBuffer(4096), {offset: 4096});
      expect(readout.bytesRead == 0).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    } catch (err) {
      console.info('fileio_test_stream_read_async_003 has failed for ' + err);
      expect(null).assertFail();
    }
  });


  /**
   * @tc.number SUB_DF_FILEIO_STREAM_READASYNC_0400
   * @tc.name fileio_test_stream_read_async_004
   * @tc.desc Test read() interface, When the offset is 1 and the position is 5.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_stream_read_async_004', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_read_async_004');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let ss = fileio.createStreamSync(fpath, 'r+');
      expect(ss !== null).assertTrue();
      let options = {
        offset: 1,
        position:5
      }
      let readout = await ss.read(new ArrayBuffer(4096),options);
      expect(readout.bytesRead == FILE_CONTENT.length).assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    } catch (err) {
      console.info('fileio_test_stream_read_async_004 has failed for ' + err);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_READASYNC_0500
   * @tc.name fileio_test_stream_read_async_005
   * @tc.desc Test read() interface, When the offset is negative.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_stream_read_async_005', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_read_async_005');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let ss = fileio.createStreamSync(fpath, 'r+');
    expect(ss !== null).assertTrue();
    try {
      await ss.read(new ArrayBuffer(4096), {offset: -1});
    } catch (err) {
      console.info('fileio_test_stream_read_async_005 has failed for ' + err);
      expect(err.message == "Failed GetReadArg").assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_READASYNC_0600
   * @tc.name fileio_test_stream_read_async_006
   * @tc.desc Test read() interface, When offset+length>buffer.size.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_stream_read_async_006', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_read_async_006');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let ss = fileio.createStreamSync(fpath, 'r+');
    expect(ss !== null).assertTrue();
    try {
      await ss.read(new ArrayBuffer(4096), {offset: 1,length:4096});
    } catch (err) {
      console.info('fileio_test_stream_read_async_006 has failed for ' + err);
      expect(err.message == "Failed GetReadArg").assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STREAM_READASYNC_0700
   * @tc.name fileio_test_stream_read_async_007
   * @tc.desc Test read() interface, When the offset is greater than the buffer length.
   * @tc.size MEDIUM
   * @tc.type Function
   * @tc.level Level 0
   * @tc.require
   */
   it('fileio_test_stream_read_async_007', 0, async function (done) {
    let fpath = await nextFileName('fileio_test_stream_read_async_007');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let ss = fileio.createStreamSync(fpath, 'r+');
    expect(ss !== null).assertTrue();
    try {
      await ss.read(new ArrayBuffer(4096), {offset: 4097});
    } catch (err) {
      console.info('fileio_test_stream_read_async_007 has failed for ' + err);
      expect(err.message == "Failed GetReadArg").assertTrue();
      ss.closeSync();
      fileio.unlinkSync(fpath);
      done();
    }
  });

});
