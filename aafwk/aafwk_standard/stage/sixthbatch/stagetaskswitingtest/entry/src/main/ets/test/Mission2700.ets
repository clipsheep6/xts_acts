// @ts-nocheck
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import missionManager from '@ohos.application.missionManager'

export default function abilityTest2700(abilityContext) {
  describe('AbilityTest', function () {
    console.log("-------------start test---------------");
    var TAG = "";
    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2700
     * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
     * @tc.desc    Function test
     * @tc.level   0
     */
            it('SUB_AA_OpenHarmony_MoveMissionToFront_2700', 0, async function (done) {
                console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2700-------------");
                var missionId = "aa";
                try {
                    missionManager.moveMissionToFront(missionId, (error, data) => {
                        console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2700 error: " +
                        JSON.stringify(error) + ", data: " + JSON.stringify(data));
                        expect(error.code == -1).assertTrue();
                        done();
                    })
                } catch (error) {
                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2700: error " + error);
                }
                console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2700-------------");
            });

       }

      )}
