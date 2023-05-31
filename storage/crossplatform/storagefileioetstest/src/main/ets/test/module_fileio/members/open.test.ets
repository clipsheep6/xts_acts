import {
  fileio, FILE_CONTENT, prepareFile, nextFileName,
  describe, it, expect,
} from '../../Common';

export default function fileioOpen() {
describe('fileio_open', function () {

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_ASYNC_0000
   * @tc.name fileioTestOpenAsync000
   * @tc.desc Test openASync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestOpenAsync000', 0, async function (done) {
    let fpath = await nextFileName('fileioTestOpenAsync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      await fileio.access(fpath).then(function (err) {
        fileio.open(fpath, 0, 0o0400, function (err, fd) {
          fileio.read(fd, new ArrayBuffer(4096))
            .then(function (res) {
              expect(res.bytesRead == FILE_CONTENT.length).assertTrue();
              fileio.closeSync(fd);
              fileio.unlinkSync(fpath);
              done();
            });
        });
      });
    } catch (e) {
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_ASYNC_0010
   * @tc.name fileioTestOpenAsync001
   * @tc.desc Test openASync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestOpenAsync001', 0, async function (done) {
    let fpath = await nextFileName('fileioTestOpenAsync001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      await fileio.open(fpath, 0, 0o0400, function (err, fd) {
        fileio.read(fd, new ArrayBuffer(4096))
          .then(function (res) {
            expect(res.bytesRead == FILE_CONTENT.length).assertTrue();
            fileio.closeSync(fd);
            fileio.unlinkSync(fpath);
            done();
          });
      });
    } catch (e) {
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_ASYNC_0020
   * @tc.name fileioTestOpenAsync002
   * @tc.desc Test openASync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestOpenAsync002', 0, async function (done) {
    let fpath = await nextFileName('fileioTestOpenAsync002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      await fileio.open(fpath, 0, function (err, fd) {
        fileio.read(fd, new ArrayBuffer(4096))
          .then(function (res) {
            expect(res.bytesRead == FILE_CONTENT.length).assertTrue();
            fileio.closeSync(fd);
            fileio.unlinkSync(fpath);
            done();
          });
      });
    } catch (e) {
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_ASYNC_0030
   * @tc.name fileioTestOpenAsync003
   * @tc.desc Test openASync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestOpenAsync003', 0, async function (done) {
    let fpath = await nextFileName('fileioTestOpenAsync003');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.open(fpath, 0o2, function (err, fd) {
        fileio.read(fd, new ArrayBuffer(4096))
          .then(function (res) {
            expect(res.bytesRead == FILE_CONTENT.length).assertTrue();
            fileio.closeSync(fd);
            fileio.unlinkSync(fpath);
            done();
          });
      });
    } catch (e) {
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_OPEN_ASYNC_0040
   * @tc.name fileioTestOpenAsync004
   * @tc.desc Test openASync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestOpenAsync004', 0, async function (done) {
    let fpath = await nextFileName('fileioTestOpenAsync004');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      await fileio.open(fpath)
        .then(function (fd) {
          fileio.read(fd, new ArrayBuffer(4096))
            .then(function (res) {
              expect(res.bytesRead == FILE_CONTENT.length).assertTrue();
              fileio.closeSync(fd);
              fileio.unlinkSync(fpath);
            });
        })
        .catch(function (err) {
          expect(err == null).assertTrue();
        })
      done();
    } catch (e) {
      expect(null).assertFail();
    }
  });
});
}
