import {
  fileio, FILE_CONTENT, prepareFile, nextFileName,
  describe, it, expect,
} from '../../Common';

export default function fileioFsync() {
describe('fileio_fsync', function () {

  /**
   * @tc.number SUB_DF_FILEIO_FSYNC_SYNC_0000
   * @tc.name fileioTestFsyncSync000
   * @tc.desc Test fsyncSync() interface.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFsyncSync000', 0, async function () {
    let fpath = await nextFileName('fileioTestFsyncSync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o2);
      expect(fileio.fsyncSync(fd) == null).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioTestFsyncSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FSYNC_SYNC_0010
   * @tc.name fileioTestFsyncSync001
   * @tc.desc Test fsyncSync() interface.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFsyncSync001', 0, function () {
    try {
      fileio.fsyncSync(-1);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioTestFsyncSync001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FSYNC_ASYNC_000
   * @tc.name fileioTestFsyncAsync000
   * @tc.desc Test fsync() interface.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFsyncAsync000', 0, async function (done) {
    let fpath = await nextFileName('fileioTestFsyncAsync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o2);
      await fileio.fsync(fd);
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestFsyncAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FSYNC_ASYNC_001
   * @tc.name fileioTestFsyncAsync001
   * @tc.desc Test fsync() interface.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFsyncAsync001', 0, async function (done) {
    let fpath = await nextFileName('fileioTestFsyncAsync001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o2);
      fileio.fsync(fd, function (error) {
        expect(fileio.closeSync(fd) == null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
      });
      done();
    } catch (e) {
      console.log('fileioTestFsyncAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FSYNC_ASYNC_002
   * @tc.name fileioTestFsyncAsync002
   * @tc.desc Test fsync() interface.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFsyncAsync002', 0, async function (done) {
    try {
      let fd = -1;
      await fileio.fsync(fd);
      expect(null).assertFail();
      done();
    } catch (e) {
      done();
    }
  })
})}
