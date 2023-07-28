import {
  fileio, FILE_CONTENT, prepareFile, nextFileName,
  describe, it, expect,
} from '../../Common';

export default function fileioUnlink() {
describe('fileio_unlink', function () {

  /**
   * @tc.number SUB_DF_FILEIO_UNLINK_SYNC_0000
   * @tc.name fileioTestUnlinkSync000
   * @tc.desc Test unlinkSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestUnlinkSync000', 0, function () {
    try {
      fileio.unlinkSync();
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioTestUnlinkSync000 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_UNLINK_SYNC_0010
   * @tc.name fileioTestUnlinkSync001
   * @tc.desc Test unlinkSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestUnlinkSync001', 0, async function () {
    let fpath = await nextFileName('fileIOTest');

    try {
      fileio.unlinkSync(fpath);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioTestUnlinkSync001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_UNLINK_SYNC_0020
   * @tc.name fileioTestUnlinkSync002
   * @tc.desc Test unlinkSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestUnlinkSync002', 0, async function () {
    let fpath = await nextFileName('fileioTestUnlinkSync002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      expect(fileio.accessSync(fpath) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioTestUnlinkSync002 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_UNLINK_ASYNC_0000
   * @tc.name fileioTestUnlinkAsync000
   * @tc.desc Test unlinkAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestUnlinkAsync000', 0, async function (done) {
    let fpath = await nextFileName('fileIOTest');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      expect(await fileio.unlink(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestUnlinkAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_UNLINK_ASYNC_0010
   * @tc.name fileioTestUnlinkAsync001
   * @tc.desc Test unlinkAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestUnlinkAsync001', 0, async function (done) {
    let fpath = await nextFileName('fileIOTest');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.unlink(fpath, function (error) {
        done();
      });
    } catch (e) {
      console.log('fileioTestUnlinkAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_UNLINK_ASYNC_0020
   * @tc.name fileioTestUnlinkAsync002
   * @tc.desc Test unlink() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestUnlinkAsync002', 0, async function (done) {
    let fpath = await nextFileName('fileioTestUnlinkAsync002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.unlink(fpath, function (err) {
        done();
      });
    } catch (e) {
      console.log('fileioTestUnlinkAsync002 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_UNLINK_ASYNC_0030
   * @tc.name fileioTestUnlinkAsync003
   * @tc.desc Test unlink() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestUnlinkAsync003', 0, async function (done) {
    let fpath = await nextFileName('fileioTestUnlinkAsync003');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.unlink(fpath).then(function (err) {
        done();
      });
    } catch (e) {
      console.log('fileioTestUnlinkAsync003 has failed for ' + e);
      expect(null).assertFail();
    }
  });
});
}
