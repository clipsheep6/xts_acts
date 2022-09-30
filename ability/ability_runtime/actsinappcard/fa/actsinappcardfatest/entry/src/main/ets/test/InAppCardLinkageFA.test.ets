/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'
import featureAbility from '@ohos.ability.featureAbility'
import { UiDriver, BY, UiComponent, MatchPattern } from '@ohos.uitest'
import missionManager from '@ohos.application.missionManager'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'

var driver;
const MAX_MISSION_NUM = 1024;
const CLICK_TIME = 500;
async function getMissionId(abilityName, state, bundleName) {
  let missionId: number = -1;
  let missionInfos = await missionManager.getMissionInfos('', MAX_MISSION_NUM);
  for (let i = 0; i < missionInfos.length; i++) {
    if ((missionInfos[i].want.abilityName == abilityName)
      && (missionInfos[i].runningState == state) && (missionInfos[i].want.bundleName == bundleName)) {
      missionId = missionInfos[i].missionId;
      break;
    }
  }
  return missionId;
}

export default function abilityTest() {
  describe('ActsCardLinkageFATest', function () {
    beforeAll(async (done) => {
      driver = await UiDriver.create()
      done();
    })

    /**
     * @tc.number: ACTS_InAppCardLinkage_0700
     * @tc.name: Linkage between in-app cards and out-of-app cards of the same formid
     * @tc.desc: The data of card A in the application changes, and the data of card B outside the application
     *           changes accordingly. The data of card C, which is different from card A and card BFormID,
     *           remains unchanged.(fa)
     */
    it('ACTS_InAppCardLinkage_0700', 0, async function (done) {
      console.log('ACTS_InAppCardLinkage_0700 begin');
      let subscriber = null;
      let formId_main = null;
      let formId_c = null;
      let subscribeInfo = {
        events: ["form_id_from_linkagefatest_main",
          "form_id_from_userfa_c", "form_userfa"],
      }
      async function unsubscribeCallback() {
        console.log("ACTS_InAppCardLinkage_0700 unsubscribeCallback");
        done()
      }
      async function updateForm() {
        let testMissionId = await getMissionId("com.example.entry.MainAbility", 0, "com.inappcard.linkagefatest");
        console.log("ACTS_InAppCardLinkage_0700 ====> updateForm testMissionId :" + testMissionId);
        await missionManager.moveMissionToFront(testMissionId).then((data) => {
          console.log("ACTS_InAppCardLinkage_0700 ====> moveMissionToFront data:" + data);
        }).catch((err) => {
          console.log("ACTS_InAppCardLinkage_0700 ====> moveMissionToFront err:" + err);
        })
        setTimeout(async () => {
          try {
            await driver.click(100, 200)
          } catch (err) {
            console.debug("ACTS_InAppCardLinkage_0700 ====> catch err: " + JSON.stringify(err));
            console.debug("ACTS_InAppCardLinkage_0700 ====> catch err: " + err);
            expect("").assertFail();
            done();
          }
        }, CLICK_TIME)
      }

      async function subscribeCallback(err, data) {
        console.log("ACTS_InAppCardLinkage_0700 ====> subscribeCallback data:" + JSON.stringify(data));
        if (data.event == subscribeInfo.events[0]) {
          formId_main = data.parameters['formId']
        } else if (data.event == subscribeInfo.events[1]) {
          formId_c = data.parameters['formId']
          updateForm()
        } else if (data.event == subscribeInfo.events[2]) {
          let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
          let cmdA = "hidumper -s FormMgr -a '-i " + formId_main + "'";
          await abilityDelegator.executeShellCommand(cmdA).then((data) => {
            console.info(`getFormData data : + ${JSON.stringify(data)}`)
            let temp
            temp = data["stdResult"].toString()
            expect(temp.indexOf("\"updateCount\":1") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.linkagefatest]") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.faa]") >= 0).assertTrue()
          }).catch((err) => {
            console.info(`ACTS_InAppCardLinkage_0700 ====> getFormData err : + ${JSON.stringify(err)}`)
          })
          let cmdB = "hidumper -s FormMgr -a '-i " + formId_c + "'";
          await abilityDelegator.executeShellCommand(cmdB).then((data) => {
            console.info(`getFormData data : + ${JSON.stringify(data)}`)
            let temp
            temp = data["stdResult"].toString()
            expect(temp.indexOf("\"updateCount\":0") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.fab]") >= 0).assertTrue()
          }).catch((err) => {
            console.info(`ACTS_InAppCardLinkage_0700 ====> getFormData err : + ${JSON.stringify(err)}`)
          })
          commonEvent.unsubscribe(subscriber, unsubscribeCallback);
        }
      }

      commonEvent.createSubscriber(subscribeInfo).then((data) => {
        console.log("ACTS_InAppCardLinkage_0700 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallback);
        let parameter = {
          "want": {
            bundleName: "com.inappcard.linkagefatest",
            abilityName: "com.example.entry.MainAbility"
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLinkage_0700 ====> start linkagefatest err.code:' + err.code)
          expect(0).assertEqual(err.code)
        })
      });
    })

    /**
     * @tc.number: ACTS_InAppCardLinkage_0800
     * @tc.name: Linkage between in-app cards and out-of-app cards of the same formid
     * @tc.desc: The data of card B in the application changes, and the data of card A outside the application
     *           changes accordingly. The data of card C, which is different from the FormID of card A and card B,
     *           remains unchanged.(fa)
     */
    it('ACTS_InAppCardLinkage_0800', 0, async function (done) {
      console.log('ACTS_InAppCardLinkage_0800 begin');

      let subscriber = null;
      let formId_main = null;
      let formId_c = null;
      let subscribeInfo = {
        events: ["form_id_from_linkagefatest_main",
          "form_id_from_userfa_c", "form_userfa"],
      }

      async function unsubscribeCallback() {
        console.log("ACTS_InAppCardLinkage_0800 ====> unsubscribeCallback");
        done()
      }

      async function updateForm() {
        let testMissionId = await getMissionId("com.example.entry.MainAbility", 0, "com.inappcard.faa");
        console.log("ACTS_InAppCardLinkage_0800 ====> updateForm testMissionId :" + testMissionId);
        await missionManager.moveMissionToFront(testMissionId).then((data) => {
          console.log("ACTS_InAppCardLinkage_0800 ====> moveMissionToFront data:" + data);
        }).catch((err) => {
          console.log("ACTS_InAppCardLinkage_0800 ====> moveMissionToFront err:" + err);
        })
        setTimeout(async () => {
          try {
            await driver.click(100, 200)
          } catch (err) {
            console.debug("ACTS_InAppCardLinkage_0800 ====> catch err: " + JSON.stringify(err));
            console.debug("ACTS_InAppCardLinkage_0800 ====> catch err: " + err);
            expect("").assertFail();
            done();
          }
        }, CLICK_TIME)

      }

      async function subscribeCallback(err, data) {
        console.log("ACTS_InAppCardLinkage_0800 subscribeCallback data:" + JSON.stringify(data));

        if (data.event == subscribeInfo.events[0]) {
          formId_main = data.parameters['formId']
        } else if (data.event == subscribeInfo.events[1]) {
          formId_c = data.parameters['formId']
          updateForm()
        } else if (data.event == subscribeInfo.events[2]) {
          let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
          let cmdA = "hidumper -s FormMgr -a '-i " + formId_main + "'";
          await abilityDelegator.executeShellCommand(cmdA).then((data) => {
            console.info(`getFormData data : + ${JSON.stringify(data)}`)
            let temp
            temp = data["stdResult"].toString()
            expect(temp.indexOf("\"updateCount\":1") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.linkagefatest]") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.faa]") >= 0).assertTrue()
          }).catch((err) => {
            console.info(`ACTS_InAppCardLinkage_0800 ====> getFormData err : + ${JSON.stringify(err)}`)
          })
          let cmdB = "hidumper -s FormMgr -a '-i " + formId_c + "'";
          await abilityDelegator.executeShellCommand(cmdB).then((data) => {
            console.info(`getFormData data : + ${JSON.stringify(data)}`)
            let temp
            temp = data["stdResult"].toString()
            expect(temp.indexOf("\"updateCount\":0") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.fab]") >= 0).assertTrue()
          }).catch((err) => {
            console.info(`ACTS_InAppCardLinkage_0800 ====> getFormData err : + ${JSON.stringify(err)}`)
          })
          commonEvent.unsubscribe(subscriber, unsubscribeCallback);
        }
      }

      commonEvent.createSubscriber(subscribeInfo).then((data) => {
        console.log("ACTS_InAppCardLinkage_0800 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallback);
        let parameter = {
          "want": {
            bundleName: "com.inappcard.linkagefatest",
            abilityName: "com.example.entry.MainAbility"
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLinkage_0800 start linkagefatest err.code:' + err.code)
          expect(0).assertEqual(err.code)
        })
      });
    })

    /**
     * @tc.number: ACTS_InAppCardLinkage_0900
     * @tc.name: Linkage between in-app cards and out-of-app cards of the same formid
     * @tc.desc: The data of card C, which is different from the FormID of in-app card A and out-of-app card B,
     *           changes, but the data of card A and card B remain unchanged (fa)
     */
    it('ACTS_InAppCardLinkage_0900', 0, async function (done) {
      console.log('ACTS_InAppCardLinkage_0900 begin');
      let subscriber = null;
      let formId_main = null;
      let formId_c = null;
      let subscribeInfo = {
        events: ["form_id_from_linkagefatest_main",
          "form_id_from_userfa_c", "form_userfa"],
      }

      async function unsubscribeCallback() {
        console.log("ACTS_InAppCardLinkage_0900 unsubscribeCallback");
        done()
      }

      async function updateForm() {
        let testMissionId = await getMissionId("com.example.entry.MainAbility", 0, "com.inappcard.fab");
        console.log("ACTS_InAppCardLinkage_0900 ====> updateForm testMissionId :" + testMissionId);
        await missionManager.moveMissionToFront(testMissionId).then((data) => {
          console.log("ACTS_InAppCardLinkage_0900 ====> moveMissionToFront data:" + data);
        }).catch((err) => {
          console.log("ACTS_InAppCardLinkage_0900 ====> moveMissionToFront err:" + err);
        })
        setTimeout(async () => {
          try {
            await driver.click(100, 200)
          } catch (err) {
            console.debug("ACTS_InAppCardLinkage_0900 ====> catch err: " + JSON.stringify(err));
            console.debug("ACTS_InAppCardLinkage_0900 ====> catch err: " + err);
            expect("").assertFail();
            done();
          }
        }, CLICK_TIME)
      }

      async function subscribeCallback(err, data) {
        console.log("ACTS_InAppCardLinkage_0900 subscribeCallback data:" + JSON.stringify(data));

        if (data.event == subscribeInfo.events[0]) {
          formId_main = data.parameters['formId']
        } else if (data.event == subscribeInfo.events[1]) {
          formId_c = data.parameters['formId']
          updateForm()
        } else if (data.event == subscribeInfo.events[2]) {
          let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
          let cmdA = "hidumper -s FormMgr -a '-i " + formId_main + "'";
          await abilityDelegator.executeShellCommand(cmdA).then((data) => {
            console.info(`getFormData data : + ${JSON.stringify(data)}`)
            let temp
            temp = data["stdResult"].toString()
            expect(temp.indexOf("\"updateCount\":0") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.linkagefatest]") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.faa]") >= 0).assertTrue()
          }).catch((err) => {
            console.info(`ACTS_InAppCardLinkage_0900 ====> getFormData err : + ${JSON.stringify(err)}`)
          })
          let cmdB = "hidumper -s FormMgr -a '-i " + formId_c + "'";
          await abilityDelegator.executeShellCommand(cmdB).then((data) => {
            console.info(`getFormData data : + ${JSON.stringify(data)}`)
            let temp
            temp = data["stdResult"].toString()
            expect(temp.indexOf("\"updateCount\":1") >= 0).assertTrue()
            expect(temp.indexOf("hostBundleName [com.inappcard.fab]") >= 0).assertTrue()
          }).catch((err) => {
            console.info(`ACTS_InAppCardLinkage_0900 ====> getFormData err : + ${JSON.stringify(err)}`)
          })
          commonEvent.unsubscribe(subscriber, unsubscribeCallback);
        }
      }

      commonEvent.createSubscriber(subscribeInfo).then((data) => {
        console.log("ACTS_InAppCardLinkage_0900 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallback);
        let parameter = {
          "want": {
            bundleName: "com.inappcard.linkagefatest",
            abilityName: "com.example.entry.MainAbility"
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLinkage_0900 start linkagefatest err.code:' + err.code)
          expect(0).assertEqual(err.code)
        })
      });
    })
  })
}