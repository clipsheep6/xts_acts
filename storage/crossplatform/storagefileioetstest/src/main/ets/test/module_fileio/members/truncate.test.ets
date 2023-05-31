import {
  fileio, FILE_CONTENT, prepareFile, nextFileName, isIntNum,
  describe, it, expect,
} from '../../Common';

export default function fileioTruncate() {
describe('fileio_truncate', function () {

  /**
   * @tc.number SUB_DF_FILEIO_TRUNCATE_ASYNC_0000
   * @tc.name fileioTruncateAsync000
   * @tc.desc Test truncateAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTruncateAsync000', 0, async function (done) {
    let fpath = await nextFileName('fileioTruncateAsync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let truncateLen = 5;

    try {
      fileio.truncate(fpath, truncateLen, function (err) {
        let fd = fileio.openSync(fpath, 0o2);
        expect(isIntNum(fd)).assertTrue();
        let len = fileio.readSync(fd, new ArrayBuffer(4096));
        expect(len == truncateLen).assertTrue();
        expect(fileio.closeSync(fd) == null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
        done();
      });
    } catch (e) {
      console.log('fileioTruncateAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });
  
  /**
   * @tc.number SUB_DF_FILEIO_TRUNCATE_ASYNC_0010
   * @tc.name fileioTruncateAsync001
   * @tc.desc Test truncateAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTruncateAsync001', 0, async function (done) {
    let fpath = await nextFileName('fileioTruncateAsync001');
    expect(prepareFile(fpath, 'truncate')).assertTrue();
    let truncateLen = 2;

    try {
      fileio
        .truncate(fpath, truncateLen)
        .then(function (err) {
          expect(err == null).assertTrue();
          let fd = fileio.openSync(fpath, 0o2);
          expect(isIntNum(fd)).assertTrue();
          let len = fileio.readSync(fd, new ArrayBuffer(4096));
          expect(len == truncateLen).assertTrue();
          expect(fileio.closeSync(fd) == null).assertTrue();
          expect(fileio.unlinkSync(fpath) == null).assertTrue();
          done();
        })
        .catch(function (e) {
          console.log('catch ' + e);
        });
    } catch (e) {
      console.log('fileioTruncateAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_TRUNCATE_ASYNC_0020
   * @tc.name fileioTruncateAsync002
   * @tc.desc Test truncateAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTruncateAsync002', 0, async function (done) {
    let fpath = await nextFileName('fileioTruncateAsync002');
    let truncateLen = 2;

    try {
      fileio.truncate(fpath, truncateLen, function (err) {
        done();
      });
    } catch (e) {
      expect(!!e).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_TRUNCATE_SYNC_0000
   * @tc.name fileioTestTruncateSync000
   * @tc.desc Test truncateSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestTruncateSync000', 0, async function () {
    let fpath = await nextFileName('fileioTestTruncateSync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      expect(fileio.truncateSync(fpath) == null).assertTrue();
      expect(fileio.statSync(fpath).size == 0).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioTestTruncateSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_TRUNCATE_SYNC_0010
   * @tc.name fileioTestTruncateSync001
   * @tc.desc Test truncateSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestTruncateSync001', 0, async function () {
    let fpath = await nextFileName('fileioTestTruncateSync001');

    try {
      fileio.truncateSync(fpath);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioTestTruncateSync001 has failed for ' + e);
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_TRUNCATE_SYNC_0020
   * @tc.name fileioTestTruncateSync002
   * @tc.desc Test truncateSync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestTruncateSync002', 0, function () {
    try {
      fileio.truncateSync();
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioTestTruncateSync002 has failed for ' + e);
    }
  });
});
}
