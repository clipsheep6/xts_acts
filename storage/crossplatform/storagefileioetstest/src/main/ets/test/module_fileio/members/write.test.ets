import {
  fileio, FILE_CONTENT, nextFileName, isIntNum,
  describe, it, expect,
} from '../../Common';

export default function fileioWrite() {
describe('fileio_write', function () {
    /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0000
   * @tc.name fileioTestWriteAsync000
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync000', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync000');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      expect(await fileio.write(fd, FILE_CONTENT) == FILE_CONTENT.length).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestWriteAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0010
   * @tc.name fileioTestWriteAsync001
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync001', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync001');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      let writeNum = await fileio.write(fd, FILE_CONTENT, {
        offset: 1,
      });
      expect(writeNum == FILE_CONTENT.length - 1).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestWriteAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0020
   * @tc.name fileioTestWriteAsync002
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync002', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync002');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      let writeNum = await fileio.write(fd, FILE_CONTENT, {
        offset: 1,
        length: 3,
      });
      expect(writeNum == 3).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestWriteAsync002 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0030
   * @tc.name fileioTestWriteAsync003
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync003', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync003');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      let writeNum = await fileio.write(fd, FILE_CONTENT, {
        offset: 1,
        length: 3,
        position: 5,
      });
      expect(writeNum == 3).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestWriteAsync003 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0040
   * @tc.name fileioTestWriteAsync004
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync004', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync004');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      let writeNum = await fileio.write(fd, FILE_CONTENT, {
        offset: 0,
        length: 4,
        position: 5,
        encoding: 'utf-8',
      });
      expect(writeNum == 4).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestWriteAsync004 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0050
   * @tc.name fileioTestWriteAsync005
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync005', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync005');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      fileio.write(fd, new ArrayBuffer(4096), function (
          error,
          bytesWritten
      ) {
        expect(bytesWritten == 4096).assertTrue();
        expect(fileio.closeSync(fd) == null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
      });
      done();
    } catch (e) {
      console.log('fileioTestWriteAsync005 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0060
   * @tc.name fileioTestWriteAsync006
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync006', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync006');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      fileio.write(
        fd,
        FILE_CONTENT,
        {
          offset: 1,
        }, function (error, bytesWritten) {
          expect(bytesWritten == FILE_CONTENT.length - 1).assertTrue();
          expect(fileio.closeSync(fd) == null).assertTrue();
          expect(fileio.unlinkSync(fpath) == null).assertTrue();
          done();
        }
      );
    } catch (e) {
      console.log('fileioTestWriteAsync006 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0070
   * @tc.name fileioTestWriteAsync007
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync007', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync007');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      fileio.write(
        fd,
        FILE_CONTENT,
        {
          offset: 1,
          length: 5,
        }, function (error, bytesWritten) {
          expect(bytesWritten == 5).assertTrue();
          expect(fileio.closeSync(fd) == null).assertTrue();
          expect(fileio.unlinkSync(fpath) == null).assertTrue();
          done();
        }
      );
    } catch (e) {
      console.log('fileioTestWriteAsync007 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0080
   * @tc.name fileioTestWriteAsync008
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync008', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync008');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      fileio.write(
        fd,
        FILE_CONTENT,
        {
          offset: 1,
          length: 5,
          position: 5,
        }, function (error, bytesWritten) {
          expect(bytesWritten == 5).assertTrue();
          expect(fileio.closeSync(fd) == null).assertTrue();
          expect(fileio.unlinkSync(fpath) == null).assertTrue();
          done();
        }
      );
    } catch (e) {
      console.log('fileioTestWriteAsync008 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_WRITE_ASYNC_0090
   * @tc.name fileioTestWriteAsync009
   * @tc.desc Test writeAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestWriteAsync009', 0, async function (done) {
    let fpath = await nextFileName('fileioTestWriteAsync009');

    try {
      let fd = fileio.openSync(fpath, 0o102, 0o666);
      expect(isIntNum(fd)).assertTrue();
      fileio.write(
        fd,
        FILE_CONTENT,
        {
          offset: 1,
          length: 5,
          position: 5,
          encoding: 'utf-8',
        }, function (error, bytesWritten) {
          expect(bytesWritten == 5).assertTrue();
          expect(fileio.closeSync(fd) == null).assertTrue();
          expect(fileio.unlinkSync(fpath) == null).assertTrue();
          done();
        }
      );
    } catch (e) {
      console.log('fileioTestWriteAsync009 has failed for ' + e);
      expect(null).assertFail();
    }
  });
});
}
