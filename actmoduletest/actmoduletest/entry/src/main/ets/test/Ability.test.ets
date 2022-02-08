import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"


export default function abilityTest(abilityContext) {
  describe('ActsAbilityTest', function() {
    /**
     * @tc.number: SUB_AA_OpenHarmony_Context_0900
     * @tc.name: Check that resourceManager is ok.
     * @tc.desc: Check the resourceManager is ok.
     */
    it('SUB_AA_OpenHarmony_Context_0900', 0, async function(done) {
      console.log("SUB_AA_OpenHarmony_Context_0900--- start")
      abilityContext.resourceManager.getString(16777218,(error,data) => {
        expect('demo for test').assertEqual(data);
        done()
      });
    })
  })
}