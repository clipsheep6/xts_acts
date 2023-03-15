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

import { describe, beforeAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'

let Subscriber;

let getCallingBundleType = {
  events: ["wantType"]
}

let subscriberInfo = {
  events: ["contextApplicationInfo"]
}
let applicationInfo;

let TAG;
export default function applicationInfoTest(abilityContext) {
  describe('ApplicationInfoTest', function () {

    beforeAll(async (done) => {
      console.log("ActsApplicationInfoTest afterEach called");
      TAG = 'ActsApplicationInfoTest';
      function SubscribeCallBackCodePath(err, data) {
        console.log(TAG + "Subscribe CallBack data:" + JSON.stringify(data));
        applicationInfo = data;
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
      }

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBackCodePath);
      });

      abilityContext.startAbility({
        bundleName: "com.example.applicationinfoassist",
        abilityName: "MainAbility"
      }, (error, data) => {
        console.log(TAG + ":startAbility success,err:" + JSON.stringify(error) +
        ",data:" + JSON.stringify(data));
      })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Want_0100
     * @tc.name    Verify the type of want of API8
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Want_0100', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_Want_0100"
      console.log(`${TAG} start`);

      function SubscribeCallBackType(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data.parameters));
        expect(data.parameters.type == "MIMETYPE").assertTrue();
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
      }

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
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
        console.log(TAG + ":startAbility success , err:" + JSON.stringify(err) +
        ",data:" + JSON.stringify(data));
      });
      console.log(`${TAG} end`);
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0100
     * @tc.name    Verify the CodePath of applicationinfo
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0100', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0100";
      console.log(`${TAG} start`);

      expect(applicationInfo.parameters.codePath)
      .assertEqual("/data/app/el1/bundle/public/com.example.applicationinfoassist");
      done();

      console.log(`${TAG} end`);
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0200
     * @tc.name    Verify the removable of applicationinfo
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0200', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0200";
      console.log(`${TAG} start`);

      expect(applicationInfo.parameters.removable == true).assertTrue();
      done();

      console.log(`${TAG} end`);
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0300
     * @tc.name    Verify the accesstokenid of applicationinfo
     * @tc.desc    Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0300', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0300";
      console.log(`${TAG} start`);

      expect(applicationInfo.parameters.accessTokenId == undefined).assertTrue();
      done();

      console.log(`${TAG} end`);
    })
  })
}