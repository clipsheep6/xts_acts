// @ts-nocheck
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
import formHost from '@ohos.application.formHost';
import commonEvent from '@ohos.commonEvent'
const CASE_TIMEOUT = 5000;
let cardFormId;
var FMS_SHARE_FROM = {
    events: ["FMS_SHARE_FROM_CommonEvent"]
};
export default function abilityTest() {
    describe('ActsAbilityTest',function  () {
        beforeAll(async function(done){
            let subscriber;
            let flag=true
            function subscribeCallBack (err, data) {
                console.debug("====> formId:====>" + JSON.stringify(data.parameters.formId));
                if (data.event == "FMS_SHARE_FROM_CommonEvent") {
                    console.debug("====> formId:====>" + JSON.stringify(data.parameters.formId));
                    cardFormId=data.parameters.formId
                }
            }
            function unSubscribeCallback() {
                flag=false
                console.debug("====>UnSubscribeCallback====>");
                done();
            }
           await commonEvent.createSubscriber(FMS_SHARE_FROM).then(async(data) => {
                console.debug("Create Subscriber====>");
                await globalThis.abilityContext.startAbility(
                    {
                        bundleName: 'com.example.sharecardexceptionparameterstagetest',
                        abilityName: 'MainAbility1'
                    },(err,data) => {
                    console.debug("====>startAbility end====>err"+JSON.stringify(err));
                    console.debug("====>startAbility end====>data"+JSON.stringify(data));
                })
                subscriber = data;
                commonEvent.subscribe(subscriber, subscribeCallBack);
            })
            setTimeout(()=>{
                if(flag==true){
                    commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                }
            },CASE_TIMEOUT)
        })

        /*
         * @tc.number  : FMS_ShareForm_5400
         * @tc.name    : Support cross-device sharing
         * @tc.desc    : Unauthorized card sharing promise form
         */
        it('FMS_ShareForm_5400',0, async function (done) {
            console.log("start FMS_ShareForm_5400 =====>");
            await formHost.shareForm(cardFormId.toString(), "xxxxxxx").then((data) => {
                console.log("FormMgrService shareForm FMS_ShareForm_5400 ====> result data:" + data);
                expect().assertFail();
            }).catch((err)=>{
                console.log("FormMgrService shareForm FMS_ShareForm_5400 ====> result err:" + err.code);
                expect(err.code==2).assertTrue();
            });
            done();
        })
        /*
        * @tc.number  : FMS_ShareForm_2900
        * @tc.name    : Support cross-device sharing
        * @tc.desc    : Unauthorized card sharing callback form
        */
        it('FMS_ShareForm_2900',0, function  (done) {
            console.log("start FMS_ShareForm_2900 =====>");
            formHost.shareForm(cardFormId.toString(), "xxxxxxx",(err,data) => {
                console.log("FormMgrService shareForm FMS_ShareForm_2900 ====> result data:" + data);
                console.log("FormMgrService shareForm FMS_ShareForm_2900 ====> result err:" + err.code);
                expect(err.code==2).assertTrue();
                done();
            })
        })
    })
}