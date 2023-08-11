import hilog from '@ohos.hilog';
import testNapi from 'libbackup.so'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

export default function RdbNdkStoreBackupTest() {
  describe('RdbNdkStoreBackupTest', function () {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(function () {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(function () {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(function () {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(function () {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })


    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0500
     * @tc.desc: Exception testCase of NDK store for Backup、Restore.
     * @tc.desc: backup file name is empty
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0500',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0500();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0100
     * @tc.desc: Normal testCase of NDK store for Backup、Restore.
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0100',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0100();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0300
     * @tc.desc: Exception testCase of NDK store for Backup、Restore.
     * @tc.desc: backup file name already exists
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0300',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0300();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0400
     * @tc.desc: Exception testCase of NDK store for Backup、Restore.
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0400',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0400();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0900
     * @tc.desc: Exception testCase of NDK store for Backup、Restore.
     * @tc.desc: Restore file name is empty
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0900',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0900();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0110
     * @tc.desc: Exception testCase of NDK store for Backup、Restore.
     * @tc.desc: Restore file name is invalid
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0110',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0110();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0600
     * @tc.desc: Normal testCase of NDK store for Backup、Restore.
     * @tc.desc: backup file name is a space
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0600',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0600();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0800
     * @tc.desc: Normal testCase of NDK store for Backup、Restore.
     * @tc.desc: Restore file name is a null
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0800',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0800();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_BackupRestoreTest_0700
     * @tc.desc: Normal testCase of NDK store for Backup、Restore.
     * @tc.desc: Backup file name is a null
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_BackupRestoreTest_0700',0, async function () {
      let path = globalThis.abilityContext.databaseDir
      hilog.info(0x0000, 'testTag path is : '+ path , 'end');
      let re = testNapi.SUB_DDM_RDB_BackupRestoreTest_0700();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })


  })
}