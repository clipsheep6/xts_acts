import {describe, beforeAll, beforeEach, afterAll, it, expect} from "deccjsunit/index"


export default function abilityTest(abilityContext) {
  describe('ActsAbilityTest',function() {
    /**
     * @tc.number: SUB_AA_OpenHarmony_Context_0900
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc: Check the ability context paths of the same hap are the same.
     */
    it('SUB_AA_OpenHarmony_Context_0900', 0, async function(done) {
      console.log("SUB_AA_OpenHarmony_Context_0900--- start")
      abilityContext.resourceManager.getString(16777218,(error,data) => {
        expect('demo for test').assertEqual(data) => {
        done()

      });
    })
  })
}