import { fileio, nextFileName, describe, it, expect } from '../../Common';

export default function fileioMkdirRmdir() {
describe('fileio_mkdir_rmdir', function () {

  /**
   * @tc.number SUB_DF_FILEIO_MKDIR_SYNC_RMDIR_SYNC_0000
   * @tc.name fileioMkdirSyncRmdirSync000
   * @tc.desc Test mkdirSync() and rmdirSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioMkdirSyncRmdirSync000', 0, async function () {
    let dpath = await nextFileName('fileioMkdirSyncRmdirSync000') + 'd';

    try {
      expect(fileio.mkdirSync(dpath) == null).assertTrue();
      expect(fileio.rmdirSync(dpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioMkdirSyncRmdirSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_MKDIR_SYNC_RMDIR_SYNC_0010
   * @tc.name fileioMkdirSyncRmdirSync001
   * @tc.desc Test mkdirSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioMkdirSyncRmdirSync001', 0, function () {
    try {
      expect(fileio.mkdirSync('/') == null).assertTrue();
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioMkdirSyncRmdirSync001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_MKDIR_SYNC_RMDIR_SYNC_0020
   * @tc.name fileioMkdirSyncRmdirSync002
   * @tc.desc Test mkdirSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioMkdirSyncRmdirSync002', 0, function () {
    try {
      expect(fileio.mkdirSync(12) == null).assertTrue();
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioMkdirSyncRmdirSync002 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_MKDIR_ASYNC_RMDIR_SYNC_0000
   * @tc.name fileioMkdirAsyncRmdirSync000
   * @tc.desc Test mkdirAsync() and rmdirSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioMkdirAsyncRmdirSync000', 0, async function (done) {
    let dpath = await nextFileName('fileioMkdirAsyncRmdirSync000') + 'd';

    try {
      expect(await fileio.mkdir(dpath) == null).assertTrue();
      expect(fileio.rmdirSync(dpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioMkdirAsyncRmdirSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_MKDIR_ASYNC_RMDIR_SYNC_0010
   * @tc.name fileioMkdirAsyncRmdirSync001
   * @tc.desc Test mkdirAsync() and rmdirSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioMkdirAsyncRmdirSync001', 0, async function (done) {
    let dpath = await nextFileName('fileioMkdirAsyncRmdirSync001') + 'd';

    try {
      fileio.mkdir(dpath, function (error) {
        expect(fileio.rmdirSync(dpath) == null).assertTrue();
        done();
      });
    } catch (e) {
      console.log('fileioMkdirAsyncRmdirSync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });
});}
