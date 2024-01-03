import hilog from '@ohos.hilog';
import testNapi from 'libentry.so'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

export default function abilityTest() {
  describe('NetworkMangerNetConnectionTest', () => {
   /**
    * @tc.name    TestNetConnection
    * @tc.desc    check netconnection result
    * @tc.size    MediumTest
    * @tc.type    Function
    * @tc.level   Level 2
    */
    it('test_NDK_CAPI_series', 0, () => {
      if (testNapi.GetAllNetsNDK().valueOf() == 0) {
        console.log("Success [" + testNapi.GetAllNetsNDK() + "]")
      } else if (testNapi.GetAllNetsNDK().valueOf() == 201) {
        console.log("Missing permissions [" + testNapi.GetAllNetsNDK() + "]")
      } else if (testNapi.GetAllNetsNDK().valueOf() == 401) {
        console.log("Parameter error [" + testNapi.GetAllNetsNDK() + "]")
      } else {
        console.log("Other errors [" + testNapi.GetAllNetsNDK() + "]")
      }
    })
  })
}