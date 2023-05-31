import {
  fileio, FILE_CONTENT, prepareFile, nextFileName, isIntNum, isBigInt, isBoolean,
  describe, it, expect,
} from '../../Common';

export default function fileioStat() {
describe('fileio_stat', function () {
/**
   * @tc.number SUB_DF_FILEIO_STAT_SYNC_0000
   * @tc.name fileioStatSync000
   * @tc.desc Test Stat.statSync() interfaces.
   * This interface shall work properly in normal case.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioStatSync000', 0, async function () {
    let fpath = await nextFileName('fileioStatSync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(stat !== null).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_SYNC_0010
   * @tc.name fileioStatSync001
   * @tc.desc Test Stat.statSync() interfaces.
   * This interface shall throw an exception when the file isnt's exist.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioStatSync001', 0, async function () {
    let fpath = await nextFileName('fileioStatSync001');

    try {
      fileio.statSync(fpath);
      expect(null).assertFail();
    } catch (e) {
      console.log('fileioStatSync001 has failed for ' + e);
    }
  });
/**
   * @tc.number SUB_DF_FILEIO_STAT_ASYNC_0000
   * @tc.name fileioStatAsync000
   * @tc.desc Test Stat.statAsync() interface.
   * This interface shall work properly in normal case when providing the promise async model.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioStatAsync000', 0, async function (done) {
    let fpath = await nextFileName('fileioStatAsync000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.stat(fpath).then((stat) => {
        expect(stat !== null).assertTrue();
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
      });
      done();
    } catch (e) {
      console.log('fileioStatAsync000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_ASYNC_0010
   * @tc.name fileioStatAsync001
   * @tc.desc Test Stat.statAsync() interface.
   * This interface shall work properly in normal case when providing the callback async model.
   * @tc.size MediumTest
   * @tc.type Functoin
   * @tc.level Level 2
   * @tc.require
   */
  it('fileioStatAsync001', 0, async function (done) {
    let fpath = await nextFileName('fileioStatAsync001');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      fileio.stat(fpath, function (error) {
        expect(fileio.unlinkSync(fpath) == null).assertTrue();
        done();
      });
    } catch (e) {
      console.log('fileioStatAsync001 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_INO_0000
   * @tc.name fileioStatSyncIno000
   * @tc.desc Test  Stat.statSync_Ino() interfaces.
   * @tc.desc Test the ino member of class Stat
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
  it('fileioStatSyncIno000', 0, async function () {
    let fpath = await nextFileName('fileioStatSyncIno000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(isBigInt(stat.ino)).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSyncIno000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_MODE_0000
   * @tc.name fileioStatSyncMode000
   * @tc.desc Test  Stat.statSync_Mode() interfaces.
   * @tc.desc Test the mode member of class Stat
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
  it('fileioStatSyncMode000', 0, async function () {
    let fpath = await nextFileName('fileioStatSyncMode000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(isIntNum(stat.mode)).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSyncMode000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_UID_0000
   * @tc.name fileioStatSyncUid000
   * @tc.desc Test  Stat.statSync_Uid() interfaces.
   * @tc.desc Test the uid member of class Stat
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
  it('fileioStatSyncUid000', 0, async function () {
    let fpath = await nextFileName('fileioStatSyncUid000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(isIntNum(stat.uid)).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSyncUid000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_SYNC_GID_0000
   * @tc.name fileioStatSyncGid000
   * @tc.desc Test Stat.statSync_Gid() interfaces.
   * @tc.desc Test the gid member of class Stat
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
  it('fileioStatSyncGid000', 0, async function () {
    let fpath = await nextFileName('fileioStatSyncGid000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(isIntNum(stat.gid)).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSyncGid000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_SYNC_SIZE_0000
   * @tc.name fileioStatSyncSize000
   * @tc.desc Test Stat.statSync_Size() interfaces.
   * @tc.desc Test the size member of class Stat
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
  it('fileioStatSyncSize000', 0, async function () {
    let fpath = await nextFileName('fileioStatSyncSize000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(isIntNum(stat.size)).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSyncSize000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_SYNC_ATIME_0000
   * @tc.name fileioStatSyncAtime000
   * @tc.desc Test Stat.statSync_Atime() interfaces.
   * @tc.desc Test the atime member of class Stat
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
  it('fileioStatSyncAtime000', 0, async function () {
    let fpath = await nextFileName('fileioStatSyncAtime000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(isIntNum(stat.atime)).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSyncAtime000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_SYNC_MTIME_0000
   * @tc.name fileioStatSyncMtime000
   * @tc.desc Test Stat.statSync_Mtime() interfaces.
   * @tc.desc Test the mtime member of class Stat
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
  it('fileioStatSyncMtime000', 0, async function () {
    let fpath = await nextFileName('fileioStatSyncMtime000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(isIntNum(stat.mtime)).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSyncMtime000 has failed for ' + e);
      expect(null).assertFail();
    }
  });

  /**
   * @tc.number SUB_DF_FILEIO_STAT_SYNC_CTIME_0000
   * @tc.name fileioStatSyncCtime000
   * @tc.desc Test Stat.statSync_Ctime() interfaces.
   * @tc.desc Test the ctime member of class Stat
   * @tc.size MediumTest
   * @tc.type Field
   * @tc.level Level 1
   * @tc.require
   */
  it('fileioStatSyncCtime000', 0, async function () {
    let fpath = await nextFileName('fileioStatSyncCtime000');
    expect(prepareFile(fpath, FILE_CONTENT)).assertTrue();

    try {
      let stat = fileio.statSync(fpath);
      expect(isIntNum(stat.ctime)).assertTrue();
      expect(fileio.unlinkSync(fpath) == null).assertTrue();
    } catch (e) {
      console.log('fileioStatSyncCtime000 has failed for ' + e);
      expect(null).assertFail();
    }
  });
});}