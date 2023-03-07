/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
 
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
const START_ABILITY_TIMEOUT = 5000;

var subscriberInfo_MainAbility = {
  events: ["MainAbility_Start_CommonEvent"],
};

function sleep(delay) {
  var start = (new Date()).getTime();
  while ((new Date()).getTime() - start < delay) {
    continue;
  }
}

export default function abilityTest(abilityContext) {
    describe('ActsGetDisplayIdTest', function () {

        it('Acts_GetDisplayIdTest_0100', 0, async function (done) {
          var subscriber;
          let id;
          commonEvent.createSubscriber(subscriberInfo_MainAbility).then((data) => {
            console.debug('====>Create Subscriber====>');
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
          })
          await abilityContext.startAbility({
            bundleName: "com.example.actsspecifytesthap",
            abilityName: "com.example.actsspecifytesthap.MainAbility"
          },
            {
              windowMode: 0,
              displayId:15
            },
            (error, data) => {
              console.log('ACTS_DisplayIdTest_0100 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
            function subscribeCallBack(err, data) {
              console.debug('=====subscribeCallBack=====' + data.event);
              if (data.event == 'MainAbility_Start_CommonEvent') {
                console.info('Start ActsGetDisplayIdTest success_0100');
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
              }
              function unSubscribeCallback(err, data) {
                clearTimeout(id);
                console.debug('====>UnSubscribe CallBack====>');
                done();
              }
              console.info('====> Acts_GetDisplayIdTest_0100 end=====>' + JSON.stringify(data));
            }
        })

        it('Acts_GetDisplayIdTest_0200', 0, async function (done) {
          await abilityContext.startAbility({
            bundleName: "com.example.actsspecifytesthap",
            abilityName: "com.example.actsspecifytesthap.MainAbility"
          },
            {
              windowMode: 0,
              displayId:"abc"
            },
            (error, data) => {
              console.log('ACTS_DisplayIdTest_0100 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
          done();
        })

        it('Acts_GetDisplayIdTest_0300', 0, async function (done) {
          await abilityContext.startAbility({
            bundleName: "com.example.actsspecifytesthap",
            abilityName: "com.example.actsspecifytesthap.MainAbility"
          },
            {
              windowMode: 0,
              displayId:undefined
            },
            (error, data) => {
              console.log('ACTS_DisplayIdTest_0100 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
          done();
        })
    })
}