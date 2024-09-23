import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
function sleep(ms: number) {
  return new Promise<void>(resolve => setTimeout(resolve, ms));
}
export default function abilityTest() {
  describe('ActsAbilityTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })

    beforeEach(async () => {
      await sleep()
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    it('assertContain', 0, async () => {
      await sleep()
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      let a = 'abc';
      let b = 'b';
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.
      expect(a).assertContain(b);
      expect(a).assertEqual(a);
    })
    it('ButtonType0100', 0, async (done: Function) => {
      let tagName = 'ButtonType0100';
      console.info('[' + tagName + '] START============================1');
      let strJsonNew: string = getInspectorByKey('key_ButtonType_001');
      console.info('[' + tagName + '] START============================2');
      console.info('[' + tagName + '] Search type is: ' + strJsonNew);
      let parseNew: object = JSON.parse(strJsonNew);
      console.info('[' + tagName + '] START============================3');
      if(parseNew != NULL){
        expect(parseNew?.$attrs?.type).assertEqual('ButtonType.ROUNDED_RECTANGLE');
      }
      console.info('[' + tagName + '] END ===========================');
      done();
    });
  })
}