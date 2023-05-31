import {
  fileio, FILE_CONTENT, prepareFile, nextFileName,
  describe, it, expect,
} from '../../Common';

export default function fileioFdatasync() {
describe('fileio_fdatasync', async function () {

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_ASYNC_0000
   * @tc.name fileioTestFdatasyncAsync000
   * @tc.desc Test fdatasync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFdatasyncAsync000', 0, async function () {
    let fpath = await nextFileName('fileioTestFdatasyncAsync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      fileio.fdatasync(fd, function (err) {
        expect(fileio.closeSync(fd) == null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
      });
    } catch (e) {
      console.log('fileioTestFdatasyncAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_ASYNC_0010
   * @tc.name fileioTestFdatasyncAsync001
   * @tc.desc Test fdatasync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFdatasyncAsync001', 0, async function () {
    let fpath = await nextFileName('fileioTestFdatasyncAsync001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      fileio
        .fdatasync(fd)
        .then(function (err) {
          expect(fileio.closeSync(fd) == null).assertTrue();
          expect(fileio.unlinkSync(fpath) == null).assertTrue();
        })
        .catch(function (err) {
          expect(null).assertFail();
        });
    } catch (e) {
      console.log('fileioTestFdatasyncAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_ASYNC_0020
   * @tc.name fileioTestFdatasyncAsync002
   * @tc.desc Test fdatasync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
   it('fileioTestFdatasyncAsync002', 0, async function (done) {
    try {
      let fd = -1;
      await fileio.fdatasync(fd);
      expect(null).assertFail();
      done()
    } catch (e) {
      console.info('fileioTestFdatasyncAsync002 has failed for ' + e);
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_SYNC_0000
   * @tc.name fileioTestFdatasyncSync000
   * @tc.desc Test fdatasyncSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFdatasyncSync000', 0, async function () {
    let fpath = await nextFileName('fileioTestFdatasyncSync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(fileio.fdatasyncSync(fd) == null).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioTestFdatasyncSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });
  
  /**
   * @tc.number SUB_DF_FILEIO_FDATASYNC_SYNC_0010
   * @tc.name fileioTestFdatasyncSync001
   * @tc.desc Test fdatasyncSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestFdatasyncSync001', 0, async function () {
    try {
      fileio.fdatasyncSync(-1);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioTestFdatasyncSync001 has failed for ' + e);
    }
  });
});
}
