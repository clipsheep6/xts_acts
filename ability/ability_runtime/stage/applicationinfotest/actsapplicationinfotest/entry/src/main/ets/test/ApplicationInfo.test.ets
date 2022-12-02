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

import { describe, afterEach, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'

let Subscriber;

let getCallingBundleType = {
  events: ["wantType"]
}

let getCodePathEvent = {
  events: ["getCodePath"]
}

let getRemovableEvent = {
  events: ["getRemovable"]
}

let getAccessTokenIdEvent = {
  events: ["getAccessTokenId"]
}
let TAG;
export default function applicationInfoTest(abilityContext) {
  describe('ApplicationInfoTest', function () {

    afterEach(async (done) => {
      console.log("ActsAACommandPrinOneTest afterEach called");
      let wantInfo = {
        abilityName: "MainAbility",
        bundleName: "com.example.applicationinfotest",
      }
      await globalThis.abilityContext.startAbility(wantInfo).then((data) => {
        console.log("ActsAACommandPrinOneTest startAbility data : " + JSON.stringify(data));
      }).catch((err) => {
        console.log("ActsAACommandPrinOneTest startAbility err : " + JSON.stringify(err));
      })

      setTimeout(function () {
        console.log("ActsAACommandPrinOneTest afterEach end");
        done();
      }, 1000);
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Want_0100
     * @tc.name    Verify the type of want of API8
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Want_0100', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Want_0100-------------");
      TAG = "SUB_AA_OpenHarmony_Want_0100"

      function SubscribeCallBackType(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data.parameters));
        expect(data.parameters.type == "MIMETYPE").assertTrue();
        done();
      }

      await commonEvent.createSubscriber(getCallingBundleType).then((data) => {
        console.debug(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        commonEvent.subscribe(Subscriber, SubscribeCallBackType);
      });

      abilityContext.startAbility({
        abilityName: "MainAbility2",
        bundleName: "com.example.applicationinfotest",
        type: "MIMETYPE",
      }, (err, data) => {
        console.log(TAG + ":startAbility success , err:" + JSON.stringify(err) + ",data:" + JSON.stringify(data));
      });
      console.log("------------end SUB_AA_OpenHarmony_Want_0100-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0100
     * @tc.name    Verify the CodePath of applicationinfo
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0100', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_ApplicationInfo_0100-------------");
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0100";

      function SubscribeCallBackCodePath(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        expect(data.parameters.codePath).assertEqual("/data/app/el1/bundle/public/com.example.applicationinfoassist");
        done();
      }

      await commonEvent.createSubscriber(getCodePathEvent).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBackCodePath);
      });

      abilityContext.startAbility({
        bundleName: "com.example.applicationinfoassist",
        abilityName: "MainAbility"
      }, (error, data) => {
        console.log(TAG + ":startAbility success,err:" + JSON.stringify(error) + ",data:" + JSON.stringify(data));
      })
      console.log("------------end SUB_AA_OpenHarmony_ApplicationInfo_0100-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0200
     * @tc.name    Verify the removable of applicationinfo
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0200', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_ApplicationInfo_0200-------------");
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0200";

      function SubscribeCallBackRemovable(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        expect(data.parameters.removable == true).assertTrue();
        done();
      }

      await commonEvent.createSubscriber(getRemovableEvent).then((data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        commonEvent.subscribe(Subscriber, SubscribeCallBackRemovable);
      });

      abilityContext.startAbility({
        bundleName: "com.example.applicationinfoassist",
        abilityName: "MainAbility"
      }, (error, data) => {
        console.log(TAG + ":startAbility success,err:" + JSON.stringify(error) + ",data:" + JSON.stringify(data));
      })
      console.log("------------end SUB_AA_OpenHarmony_ApplicationInfo_0200-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0300
     * @tc.name    Verify the accesstokenid of applicationinfo
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0300', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_ApplicationInfo_0300-------------");
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0300";

      function SubscribeCallBackAccessTokenId(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        expect(data.parameters.accessTokenId == undefined).assertTrue();
        done();
      }

      await commonEvent.createSubscriber(getAccessTokenIdEvent).then((data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        commonEvent.subscribe(Subscriber, SubscribeCallBackAccessTokenId);
      });

      abilityContext.startAbility({
        bundleName: "com.example.applicationinfoassist",
        abilityName: "MainAbility"
      }, (error, data) => {
        console.log(TAG + ":startAbility success,err:" + JSON.stringify(error) + ",data:" + JSON.stringify(data));
      })
      console.log("------------end SUB_AA_OpenHarmony_ApplicationInfo_0300-------------");
    })
  })
}