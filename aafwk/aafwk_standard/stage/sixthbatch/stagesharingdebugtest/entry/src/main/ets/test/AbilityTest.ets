/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
// @ts-nocheck
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import ability from '@ohos.application.Ability'
import wantConstant from '@ohos.ability.wantConstant'

const INTENT_PARAMS_TITLE = "ability.want.params.TITLE";
const INTENT_PARAMS_INTENT = "ability.want.params.INTENT"

var subscriberInfo_MainAbility_parameter = {
  events: ["entry2MainAbility_parameter"]
}

export default function abilityTest(abilityContext) {
  describe('AbilityTest', function () {
    console.log("---------------------------test -----------------")
    var TAG = "";
    var isTrue = "";

    function SubscribeIsTrue(err, data) {
      console.info(TAG + " Subscribe IsTrue data:" + JSON.stringify(data));
      if (data.event == "entry2MainAbility_parameter") {
        isTrue = "true"
      }
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_0800
     * @tc.name    Ability loop pull up: 1 pull 2, 2 pull 1 (multiple cases), and terminate ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Share_0800", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Share_0800-------------");
      TAG = "SUB_AA_OpenHarmony_Share_0800";
      isTrue = ""
      var Subscriber = "";
      commonEvent.createSubscriber(subscriberInfo_MainAbility_parameter).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber====>");
        console.info(TAG + "MainAbility_parameter" + data)
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeIsTrue);
      })
      abilityContext.startAbility({
        action: "action.system.home2",
        parameters: {
          key: 123
        }
      }, (error, data) => {
        console.log(TAG + '-- startAbility success: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        expect(error.code == 0).assertTrue();
      });
      setTimeout(function () {
        expect(isTrue).assertEqual("true");
        done();
      }, 3000)
      console.log("------------end SUB_AA_OpenHarmony_Share_0800-------------");
    });

    it("SUB_AA_OpenHarmony_Share_0900", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Share_0900-------------");
      TAG = "SUB_AA_OpenHarmony_Share_0900";
      isTrue = ""
      var Subscriber = "";
      commonEvent.createSubscriber(subscriberInfo_MainAbility_parameter).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber====>");
        console.info(TAG + "MainAbility_parameter" + data)
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeIsTrue);
      })
      abilityContext.startAbilityForResult({
        action: "action.system.home2",
        parameters: {
          key: 123
        }
      }, (error, data) => {
        console.log(TAG + '-- startAbilityForResult success: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        expect(error.code == 0).assertTrue();
      });
      setTimeout(function () {
        expect(isTrue).assertEqual("true");
        done();
      }, 2000);
      console.log("------------end SUB_AA_OpenHarmony_Share_0900-------------");
    });
  });
}