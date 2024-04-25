import { describe, it, expect } from '@ohos/hypium'
import abilitiyManager from '@ohos.app.ability.abilityManager'
import Base from '@ohos.base';
import common from '@ohos.app.ability.common';

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_setResidentProcess_0100
     * @tc.name: Resident processes support on-demand start stop.
     * @tc.desc: Non system application calling interface, returning error code 202.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 1
     */
    it('SUB_Ability_AbilityRuntime_setResidentProcess_0100', 0, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_setResidentProcess_0100 start');
      let want = {
        bundleName: 'com.example.actssetresidentprocessrely',
        abilityName: 'EntryAbility'
      };
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('SUB_Ability_AbilityRuntime_setResidentProcess_0100 startAbilityForResult successful');
        setTimeout(() => {
          console.info('SUB_Ability_AbilityRuntime_setResidentProcess_0100 data is: ' + JSON.stringify(data));
          expect(data.want.parameters.errCode).assertEqual(202);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('SUB_Ability_AbilityRuntime_setResidentProcess_0100 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
    })

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_setResidentProcess_0200
     * @tc.name: Resident processes support on-demand start stop.
     * @tc.desc: Non permission set non-existent bundleName return 16200006, .
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 1
     */
    it('SUB_Ability_AbilityRuntime_setResidentProcess_0200', 0, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_setResidentProcess_0200 start');
      await abilitiyManager.setResidentProcessEnabled("com.ohos.launcher", true).then(() => {
        console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0201 setResidentProcessEnabled success");
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0201 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
        expect(err.code).assertEqual(16200006);
        done();
      });

      await abilitiyManager.setResidentProcessEnabled("com.ohos.test51522", true).then(() => {
        console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0202 setResidentProcessEnabled success");
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0202 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
        expect(err.code).assertEqual(16200006);
        done();
      });

      await abilitiyManager.setResidentProcessEnabled("com.example.actssetresidentprocesstest", true).then(() => {
        console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0203 setResidentProcessEnabled success");
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0203 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
        expect(err.code).assertEqual(16000050);
        done();
      });
    })

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_setResidentProcess_0300
     * @tc.name: Resident processes support on-demand start stop.
     * @tc.desc: Input error param application calling interface, returning error code 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 1
     */
    it('SUB_Ability_AbilityRuntime_setResidentProcess_0300', 0, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_setResidentProcess_0300 start');
      try {
        await abilitiyManager.setResidentProcessEnabled(null, true).then(() => {
          console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled success");
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(401);
          done();
        });
      } catch (err) {
        expect(err.code).assertEqual(401);
        done();
      }

      try {
        await abilitiyManager.setResidentProcessEnabled(undefined, true).then(() => {
          console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled success");
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(401);
          done();
        });
      } catch (err) {
        expect(err.code).assertEqual(401);
        done();
      }

      try {
        await abilitiyManager.setResidentProcessEnabled("com.ohos.launcher", null).then(() => {
          console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled success");
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(401);
          done();
        });
      } catch (err) {
        expect(err.code).assertEqual(401);
        done();
      }

      try {
        await abilitiyManager.setResidentProcessEnabled("com.ohos.launcher", undefined).then(() => {
          console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled success");
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(401);
          done();
        });
      } catch (err) {
        expect(err.code).assertEqual(401);
        done();
      }

      try {
        await abilitiyManager.setResidentProcessEnabled("", true).then(() => {
          console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled success");
          expect().assertFail();
          done();
        }).catch((err: Base.BusinessError) => {
          console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0301 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(401);
          done();
        });
      } catch (err) {
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_setResidentProcess_0400
     * @tc.name: Resident processes support on-demand start stop.
     * @tc.desc: Non permission set self bundleName return 16000050.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 1
     */
    it('SUB_Ability_AbilityRuntime_setResidentProcess_0400', 0, async function (done) {
      console.info('SUB_Ability_AbilityRuntime_setResidentProcess_0400 start');
      await abilitiyManager.setResidentProcessEnabled("com.example.actssetresidentprocesstest", true).then(() => {
        console.info("SUB_Ability_AbilityRuntime_setResidentProcess_0400 setResidentProcessEnabled success");
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        console.error(`SUB_Ability_AbilityRuntime_setResidentProcess_0400 setResidentProcessEnabled fail: ${JSON.stringify(err)}`);
        expect(err.code).assertEqual(16000050);
        done();
      });
    })
  })
}