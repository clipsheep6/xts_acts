import {
  fileio, FILE_CONTENT, prepareFile, nextFileName, isIntNum,
  describe, it, expect,
} from '../../Common';

export default function fileioRead() {
describe('fileio_read', function () {
    /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0000
   * @tc.name fileioTestReadAsync000
   * @tc.desc Test readAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync000', 0, async function (done) {
    let fpath = await nextFileName('fileioTestReadAsync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o2);
      expect(isIntNum(fd)).assertTrue();
      let res = await fileio.read(fd, new ArrayBuffer(4096));
      expect(res.bytesRead == FILE_CONTENT.length).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestReadAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0010
   * @tc.name fileioTestReadAsync001
   * @tc.desc Test readAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync001', 0, async function (done) {
    let fpath = await nextFileName('fileioTestReadAsync001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath, 0o2);
      expect(isIntNum(fd)).assertTrue();
      fileio.read(fd, new ArrayBuffer(4096), async function (err, data) {
        expect(data.bytesRead == FILE_CONTENT.length).assertTrue();
        expect(fileio.closeSync(fd) == null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
        done();
      });
    } catch (e) {
      console.log('fileioTestReadAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0020
   * @tc.name fileioTestReadAsync002
   * @tc.desc Test readAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync002', 0, async function (done) {
    let fpath = await nextFileName('fileioTestReadAsync002');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath);
      expect(isIntNum(fd)).assertTrue();
      let readout = await fileio.read(fd, new ArrayBuffer(4096));
      expect(readout.buffer.byteLength == 4096).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestReadAsync002 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0030
   * @tc.name fileioTestReadAsync003
   * @tc.desc Test readAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync003', 0, async function (done) {
    let fpath = await nextFileName('fileioTestReadAsync003');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath);
      expect(isIntNum(fd)).assertTrue();
      let readout = await fileio.read(fd, new ArrayBuffer(4096), {
        offset: 1,
      });
      expect(readout.bytesRead == FILE_CONTENT.length).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestReadAsync003 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0040
   * @tc.name fileioTestReadAsync004
   * @tc.desc Test readAsync() interface.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync004', 0, async function (done) {
    let fpath = await nextFileName('fileioTestReadAsync004');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath);
      expect(isIntNum(fd)).assertTrue();
      let readout = await fileio.read(fd, new ArrayBuffer(4096), {
        offset: 1,
        length: 3,
      });
      expect(readout.bytesRead == 3).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestReadAsync004 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0050
   * @tc.name fileioTestReadAsync005
   * @tc.desc Test readAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync005', 0, async function (done) {
    let fpath = await nextFileName('fileioTestReadAsync005');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let fd = fileio.openSync(fpath);
      expect(isIntNum(fd)).assertTrue();
      let readout = await fileio.read(fd, new ArrayBuffer(5), {
        offset: 1,
      });
      expect(readout.bytesRead == 4).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestReadAsync005 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0060
   * @tc.name fileioTestReadAsync006
   * @tc.desc Test readAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync006', 0, async function (done) {
    let fd;
    const invalidOffset = 999;
    let fpath = await nextFileName('fileioTestReadAsync006');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fd = fileio.openSync(fpath, 0o2);
      expect(isIntNum(fd)).assertTrue();
      await fileio.read(fd, new ArrayBuffer(4096), {
        offset: invalidOffset,
      });
      throw new Error('invalid offset');
    } catch (e) {
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0070
   * @tc.name fileioTestReadAsync007
   * @tc.desc Test readAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync007', 0, async function (done) {
    let fpath = await nextFileName('fileioTestReadAsync007');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();
    let fd;

    try {
      fd = fileio.openSync(fpath, 0o2);
      expect(isIntNum(fd)).assertTrue();
      let invalidPos = FILE_CONTENT.length + 1;
      let err = await fileio.read(fd, new ArrayBuffer(4096), {
        offset: 1,
        position: invalidPos,
      });
      expect(!!err).assertTrue();
      expect(fileio.closeSync(fd) == null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
      done();
    } catch (e) {
      console.log('fileioTestReadAsync007 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_READ_ASYNC_0080
   * @tc.name fileioTestReadAsync008
   * @tc.desc Test readAsync() interfaces.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioTestReadAsync008', 0, async function (done) {
    try {
      await fileio.read(-1, new ArrayBuffer(4096));
      expect(null).assertFail();
    } catch (e) {
      console.info('fileioTestReadAsync008 has failed for ' + e);
      done();
    }
  });
});
}
