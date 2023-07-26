import hilog from '@ohos.hilog';
import testNapi from 'liblevelTest.so'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

export default function RdbNdkStoreLevelTest() {
  describe('RdbNdkStoreLevelTest', function () {
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
     * @tc.name: SUB_DDM_RDB_LEVEL_0100
     * @tc.desc: Normal testCase of NDK SecurityLevel is S1
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_LEVEL_0100',0, async function () {
      let re = testNapi.SUB_DDM_RDB_LEVEL_0100();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_LEVEL_0200
     * @tc.desc: Normal testCase of NDK SecurityLevel is S2
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_LEVEL_0200',0, async function () {
      let re = testNapi.SUB_DDM_RDB_LEVEL_0200();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_LEVEL_0300
     * @tc.desc: Normal testCase of NDK SecurityLevel is S3
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_LEVEL_0300',0, async function () {
      let re = testNapi.SUB_DDM_RDB_LEVEL_0300();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })

    /**
     * @tc.name: SUB_DDM_RDB_LEVEL_0400
     * @tc.desc: Normal testCase of NDK SecurityLevel is S4
     * @tc.type: FUNC
     */
    it('SUB_DDM_RDB_LEVEL_0400',0, async function () {
      let re = testNapi.SUB_DDM_RDB_LEVEL_0400();
      hilog.info(0x0000, 'testTag errorCode is : '+ re , 'aa');
      expect(re == 0).assertTrue()
    })



  })
}