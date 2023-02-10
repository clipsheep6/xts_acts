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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import commonEvent from '@ohos.commonEvent'
import wantConstantNew from '@ohos.app.ability.wantConstant';
import wantConstant from '@ohos.ability.wantConstant';
import WantAgent from '@ohos.app.ability.wantAgent';
import rpc from '@ohos.rpc';

var subscribeInfo = {
    events: ["ACTS_Start_CommonEvent"]
};
let subscriber;
function sleep(time) {
    return new Promise((resolve)=>setTimeout(resolve,time));
  }
const START_ABILITY_TIMEOUT = 4000;
let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
export default function abilityTest() {
    describe('ACTS_TestApi', function () {
       /*
        * @tc.number  : SUB_AA_AMS_PCSTEST_0100
        * @tc.name    : start new ability
        * @tc.desc    : [G-SOFTWARE-0400]禁止修改现有want的显示匹配行为或语义
        */
        it('SUB_AA_AMS_PCSTEST_0100', 0, async function (done) {
            expect(wantConstantNew.Entity.ENTITY_DEFAULT).assertEqual("entity.system.default");
            expect(wantConstantNew.Entity.ENTITY_HOME).assertEqual("entity.system.home");
            expect(wantConstantNew.Entity.ENTITY_VOICE).assertEqual("entity.system.voice");
            expect(wantConstantNew.Entity.ENTITY_BROWSABLE).assertEqual("entity.system.browsable");
            expect(wantConstantNew.Entity.ENTITY_VIDEO).assertEqual("entity.system.video");
            expect(wantConstantNew.Flags.FLAG_AUTH_READ_URI_PERMISSION).assertEqual(0x00000001);
            expect(wantConstantNew.Flags.FLAG_AUTH_WRITE_URI_PERMISSION).assertEqual(0x00000002);
            expect(wantConstantNew.Flags.FLAG_INSTALL_ON_DEMAND).assertEqual(0x00000800);
            done();
        })

        /*
        * @tc.number  : SUB_AA_AMS_PCSTEST_0800
        * @tc.name    : start new ability
        * @tc.desc    : [STD-SOFTWARE-0300]任何替代ohos核心应用程序的版本都必须遵守ohos核心应用程序提供的相同的want，系统实现者必须支持ohos SDK提供的所有want
        */
        it('SUB_AA_AMS_PCSTEST_0800', 0, async function (done) {
            expect(wantConstant.Action.ACTION_HOME).assertEqual("ohos.want.action.home");
            expect(wantConstant.Action.ACTION_DIAL).assertEqual("ohos.want.action.dial");
            expect(wantConstant.Action.ACTION_SEARCH).assertEqual("ohos.want.action.search");
            expect(wantConstant.Action.ACTION_WIRELESS_SETTINGS).assertEqual("ohos.settings.wireless");
            expect(wantConstant.Action.ACTION_MANAGE_APPLICATIONS_SETTINGS).assertEqual("ohos.settings.manage.applications");
            expect(wantConstant.Action.ACTION_APPLICATION_DETAILS_SETTINGS).assertEqual("ohos.settings.application.details");
            expect(wantConstant.Action.ACTION_SET_ALARM).assertEqual("ohos.want.action.setAlarm");
            expect(wantConstant.Action.ACTION_SHOW_ALARMS).assertEqual("ohos.want.action.showAlarms");
            expect(wantConstant.Action.ACTION_SNOOZE_ALARM).assertEqual("ohos.want.action.snoozeAlarm");
            expect(wantConstant.Action.ACTION_DISMISS_ALARM).assertEqual("ohos.want.action.dismissAlarm");
            expect(wantConstant.Action.ACTION_DISMISS_TIMER).assertEqual("ohos.want.action.dismissTimer");
            expect(wantConstant.Action.ACTION_SEND_SMS).assertEqual("ohos.want.action.sendSms");
            expect(wantConstant.Action.ACTION_CHOOSE).assertEqual("ohos.want.action.choose");
            expect(wantConstant.Action.ACTION_IMAGE_CAPTURE).assertEqual("ohos.want.action.imageCapture");
            expect(wantConstant.Action.ACTION_VIDEO_CAPTURE).assertEqual("ohos.want.action.videoCapture");
            expect(wantConstant.Action.ACTION_SELECT).assertEqual("ohos.want.action.select");
            expect(wantConstant.Action.ACTION_SEND_DATA).assertEqual("ohos.want.action.sendData");
            expect(wantConstant.Action.ACTION_SEND_MULTIPLE_DATA).assertEqual("ohos.want.action.sendMultipleData");
            expect(wantConstant.Action.ACTION_SCAN_MEDIA_FILE).assertEqual("ohos.want.action.scanMediaFile");
            expect(wantConstant.Action.ACTION_VIEW_DATA).assertEqual("ohos.want.action.viewData");
            expect(wantConstant.Action.ACTION_EDIT_DATA).assertEqual("ohos.want.action.editData");
            expect(wantConstant.Action.INTENT_PARAMS_INTENT).assertEqual("ability.want.params.INTENT");
            expect(wantConstant.Action.INTENT_PARAMS_TITLE).assertEqual("ability.want.params.TITLE");
            expect(wantConstant.Action.ACTION_FILE_SELECT).assertEqual("ohos.action.fileSelect");
            expect(wantConstant.Action.PARAMS_STREAM).assertEqual("ability.params.stream");
            expect(wantConstant.Action.ACTION_APP_ACCOUNT_AUTH).assertEqual("ohos.appAccount.action.auth");
            expect(wantConstant.Action.ACTION_MARKET_DOWNLOAD).assertEqual("ohos.want.action.marketDownload");
            expect(wantConstant.Action.ACTION_MARKET_CROWDTEST).assertEqual("ohos.want.action.marketCrowdTest");
            expect(wantConstant.Entity.ENTITY_DEFAULT).assertEqual("entity.system.default");
            expect(wantConstant.Entity.ENTITY_HOME).assertEqual("entity.system.home");
            expect(wantConstant.Entity.ENTITY_VOICE).assertEqual("entity.system.voice");
            expect(wantConstant.Entity.ENTITY_BROWSABLE).assertEqual("entity.system.browsable");
            expect(wantConstant.Entity.ENTITY_VIDEO).assertEqual("entity.system.video");
            expect(wantConstant.Flags.FLAG_AUTH_READ_URI_PERMISSION).assertEqual(0x00000001);
            expect(wantConstant.Flags.FLAG_AUTH_WRITE_URI_PERMISSION).assertEqual(0x00000002);
            expect(wantConstant.Flags.FLAG_INSTALL_ON_DEMAND).assertEqual(0x00000800);
            expect(wantConstant.Flags.FLAG_ABILITY_FORWARD_RESULT).assertEqual(0x00000004);
            expect(wantConstant.Flags.FLAG_ABILITY_CONTINUATION).assertEqual(0x00000008);
            expect(wantConstant.Flags.FLAG_NOT_OHOS_COMPONENT).assertEqual(0x00000010);
            expect(wantConstant.Flags.FLAG_ABILITY_FORM_ENABLED).assertEqual(0x00000020);
            expect(wantConstant.Flags.FLAG_AUTH_PERSISTABLE_URI_PERMISSION).assertEqual(0x00000040);
            expect(wantConstant.Flags.FLAG_AUTH_PREFIX_URI_PERMISSION).assertEqual(0x00000080);
            expect(wantConstant.Flags.FLAG_ABILITYSLICE_MULTI_DEVICE).assertEqual(0x00000100);
            expect(wantConstant.Flags.FLAG_START_FOREGROUND_ABILITY).assertEqual(0x00000200);
            expect(wantConstant.Flags.FLAG_ABILITY_CONTINUATION_REVERSIBLE).assertEqual(0x00000400);
            expect(wantConstant.Flags.FLAG_INSTALL_ON_DEMAND).assertEqual(0x00000800);
            expect(wantConstant.Flags.FLAG_ABILITY_CLEAR_MISSION).assertEqual(0x00008000);
            expect(wantConstant.Flags.FLAG_ABILITY_NEW_MISSION).assertEqual(0x10000000);
            expect(wantConstant.Flags.FLAG_ABILITY_MISSION_TOP).assertEqual(0x20000000);
            done();
        })

      /*
       * @tc.number  : SUB_AA_AMS_PCSTEST_0200
       * @tc.name    : start new ability
       * @tc.desc    : [G-SOFTWARE-0402]应事先一个可让用户轻松切换到前一个FA的快捷方式
       */
        it('SUB_AA_AMS_PCSTEST_0200', 0, async function (done) {
            let secondAbility;
            let startWant = {
                deviceId : "",
                bundleName: "com.acts.actspcstest",
                abilityName: "MainAbility3",
                moduleName : "entry",
                uri : "xxx.////",
                type : "kkkkkk",
                flags : 0,
                action : wantConstant.Action.ACTION_HOME,
                entities : "",
                parameters: {
                    "key" : "SUB_AA_AMS_PCSTEST_0300"
                }
            }
            globalThis.abilityContext.startAbility(startWant).then((data)=>{
                console.info("SUB_AA_AMS_PCSTEST_0200 start Ability success!");
            }).catch((err)=>{
                console.info("SUB_AA_AMS_PCSTEST_0200 start Ability failed:" + err.messsage);
                expect().assertFail();
                done();
            })
            await sleep(3000)
            await abilityDelegator.getCurrentTopAbility().then((data)=>{
                console.info("SUB_AA_AMS_PCSTEST_0200 get top Ability success");
                expect(data.context.abilityInfo.bundleName).assertEqual("com.acts.actspcstest");
                expect(data.context.abilityInfo.name).assertEqual("MainAbility3");
                secondAbility = data;
            }).catch((err)=>{
                console.info("SUB_AA_AMS_PCSTEST_0200 get top Ability failed:" + err.messsage);
                expect().assertFail();
                done();
            })
            await sleep(1000)
            secondAbility.context.terminateSelf((err, data)=>{
                console.info("SUB_AA_AMS_PCSTEST_0200 secondAbility terminateSelf");
            })
            await sleep(3000)
            await abilityDelegator.getCurrentTopAbility().then((data)=>{
                console.info("SUB_AA_AMS_PCSTEST_0200 get top Ability success");
                expect(data.context.abilityInfo.bundleName).assertEqual("com.acts.actspcstest");
                expect(data.context.abilityInfo.name).assertEqual("MainAbility");
                done();
            }).catch((err)=>{
                console.info("SUB_AA_AMS_PCSTEST_0200 get top Ability failed:" + err.messsage);
                expect().assertFail();
                done();
            })
        })

      /*
       * @tc.number  : SUB_AA_AMS_PCSTEST_0300
       * @tc.name    : start new ability
       * @tc.desc    : [G-SOFTWARE-0401]系统实现者不应更改Ability的生命周期或生命周期回调语义
       */
        it('SUB_AA_AMS_PCSTEST_0300', 0, async function (done) {
            let startWant = {
                deviceId : "",
                bundleName: "com.acts.actspcstest",
                abilityName: "MainAbility2",
                moduleName : "entry",
                uri : "xxx.////",
                type : "kkkkkk",
                flags : 0,
                action : wantConstant.Action.ACTION_HOME,
                entities : "",
                parameters: {
                    "key" : "SUB_AA_AMS_PCSTEST_0300"
                }
            }

            function UnSubscribeInfoCallback(err, data) {
                console.info("SUB_AA_AMS_PCSTEST_0300 ===UnSubscribeInfoCallback===");
                done();
            }
            function SubscribeInfoCallback(err, data) {
                console.info("SUB_AA_AMS_PCSTEST_0300 ===SubscribeInfoCallback===" + JSON.stringify(data))
                expect(data.parameters.lifList[0]).assertEqual("MainAbility2_onCreate");
                expect(data.parameters.lifList[1]).assertEqual("MainAbility2_onWindowStageCreate");
                expect(data.parameters.lifList[2]).assertEqual("MainAbility2_onForeground");
                expect(data.parameters.lifList[3]).assertEqual("MainAbility2_onBackground");
                expect(data.parameters.lifList[4]).assertEqual("MainAbility2_onWindowStageDestroy");
                expect(data.parameters.lifList[5]).assertEqual("MainAbility2_onDestroy");
                commonEvent.unsubscribe(subscriber, UnSubscribeInfoCallback);
            }
            commonEvent.createSubscriber({
                events: ["ACTS_Start_CommonEvent"]
            }, (err, data) => {
                console.info("SUB_AA_AMS_PCSTEST_0300 ===CreateSubscriberCallback===");
                subscriber = data;
                commonEvent.subscribe(subscriber, SubscribeInfoCallback);
            })

            globalThis.abilityContext.startAbility(startWant).then((data)=>{
                console.info("SUB_AA_AMS_PCSTEST_0300 start Ability success!");
            }).catch((err)=>{
                console.info("SUB_AA_AMS_PCSTEST_0300 start Ability failed:" + err.messsage);
                expect().assertFail();
                done();
            })
        })

      /*
       * @tc.number  : SUB_AA_AMS_PCSTEST_0400
       * @tc.name    : start new ability
       * @tc.desc    : [G-SOFTWARE-0400]禁止修改现有want的显示匹配行为或语义
       */
        it('SUB_AA_AMS_PCSTEST_0400', 0, async function (done) {
            let startWant = {
                deviceId : "",
                bundleName: "com.acts.pcs.server",
                abilityName: "ServiceAbility",
                moduleName : "entry",
                parameters: {
                    "key" : "SUB_AA_AMS_PCSTEST_0400"
                }
            }
            
            function UnSubscribeInfoCallback(err, data) {
                console.info("SUB_AA_AMS_PCSTEST_0400 ===UnSubscribeInfoCallback===");
                }
            function SubscribeInfoCallback(err, data) {
                console.info("SUB_AA_AMS_PCSTEST_0400 ===SubscribeInfoCallback===" + JSON.stringify(data))
                expect(data.parameters.lifeList[0]).assertEqual("Server_ServiceAbility_onCreate");
                expect(data.parameters.lifeList[1]).assertEqual("Server_ServiceAbility_onRequest");
                commonEvent.unsubscribe(subscriber, UnSubscribeInfoCallback);
                done();
            }
            commonEvent.createSubscriber({
                events:["SUB_AA_AMS_PCSTEST_0400"]
            }, (err, data) => {
                console.info("SUB_AA_AMS_PCSTEST_0400 ===CreateSubscriberCallback===");
                subscriber = data;
                commonEvent.subscribe(subscriber, SubscribeInfoCallback);
            })
            await sleep(1000)
            globalThis.abilityContext.startServiceExtensionAbility(startWant).then((data)=>{
                console.info("SUB_AA_AMS_PCSTEST_0400 start Ability success!");
            }).catch((err)=>{
                console.info("SUB_AA_AMS_PCSTEST_0400 start Ability failed:" + err.messsage);
                expect().assertFail();
                done();
            })
        })

        /*
         * @tc.number  : SUB_AA_AMS_PCSTEST_0500
         * @tc.name    : start new ability
         * @tc.desc    : [STD-SOFTWARE-0301]系统实现者不应对使用ohosSDK提供的want的系统应用附加任何特权，不应阻止三方应用绑定并承担对这些want的控制
         */
        it('SUB_AA_AMS_PCSTEST_0500', 0, async function (done) {
            let startWant = {
                deviceId : "",
                bundleName: "com.acts.pcs.server",
                abilityName: "ServiceAbility",
                moduleName : "entry",
                parameters: {
                    "key" : "SUB_AA_AMS_PCSTEST_0500"
                }
            }
            globalThis.abilityContext.connectServiceExtensionAbility(startWant,{
                onConnect:function(element, proxy){
                    if(proxy == null){
                        return;
                    }
                    let option = new rpc.MessageOption();
                    let data = new rpc.MessageParcel();
                    let reply = new rpc.MessageParcel();
                    data.writeInt(1);
                    data.writeInt(99);
                    proxy.sendRequest(1, data, reply, option).then((result)=>{
                        console.log('SUB_AA_AMS_PCSTEST_0500 sendRequest success');
                        let msg = result.reply.readInt();
                        expect(msg).assertEqual(100);
                        console.info('SUB_AA_AMS_PCSTEST_0500 get msg: ' + msg);
                        done();
                    }).catch((err)=>{
                        console.info("SUB_AA_AMS_PCSTEST_0500 catch err:" + err.message);
                        expect().assertFail()
                        done();
                    })
                },
                onDisconnect(element){
                    console.info("SUB_AA_AMS_PCSTEST_0500 onDisconnect");
                    expect().assertFail()
                    done();
                },
                onFailed(code){
                    console.info("SUB_AA_AMS_PCSTEST_0500 onFailed:" + code);
                    expect().assertFail()
                    done();
                }
            })
        })

        /*
         * @tc.number  : SUB_AA_AMS_PCSTEST_0600
         * @tc.name    : start new ability
         * @tc.desc    : [G-SOFTWARE-0400]ohos设备必须发送公共事件want以响应适当的系统事件来通知三方应用硬件或软件环境的改变
         */
        it('SUB_AA_AMS_PCSTEST_0600', 0, async function (done) {
            let wantAgent;
            var triggerInfo = {
                code: 0
            }
            let WantAgentInfo = {
                wants:[
                    {
                        deviceId:"",
                        bundleName:"com.acts.actspcstest",
                        abilityName:"MainAbility3",
                        action:"action1",
                        entities:["entities1"],
                        type:"MIMETYPE",
                        URI:"KEY = {true, true, false}",
                        parameters:{
                            myKey:"SUB_AA_AMS_PCSTEST_0600"
                        }   
                    }
                ],
                operationType: WantAgent.OperationType.START_ABILITIES,
                requestCode: 0,
                wantAgentFlags:[WantAgent.WantAgentFlags.UPDATE_PRESENT_FLAG]
            }
            function getWantAgentCallback(err, data) {
                if (err == undefined) {
                    wantAgent = data;
                    function triggerCallback(err, data) {
                        if(err) {
                            console.info('getUid failed!' + JSON.stringify(err.code) + JSON.stringify(err.message));
                        } else {
                            console.info('getUid ok!' + JSON.stringify(data));
                        }
                    }
                    try {
                        WantAgent.trigger(wantAgent, triggerInfo, triggerCallback);
                    } catch(err) {
                        console.info('getUid failed!' + JSON.stringify(err.code) + JSON.stringify(err.message));
                    }
                } else {
                    console.info('getWantAgent failed' + JSON.stringify(err));
                }
            }
            try{
                WantAgent.getWantAgent(WantAgentInfo, getWantAgentCallback);
            } catch(err){
                console.info('getWantAgent failed!' + JSON.stringify(err.code) + JSON.stringify(err.message));
            }
            await sleep(4000)
            await abilityDelegator.getCurrentTopAbility().then((data)=>{
                console.info("SUB_AA_AMS_PCSTEST_0600 get top Ability success");
                expect(data.context.abilityInfo.bundleName).assertEqual("com.acts.actspcstest");
                expect(data.context.abilityInfo.name).assertEqual("MainAbility3");
                done();
            }).catch((err)=>{
                console.info("SUB_AA_AMS_PCSTEST_0600 get top Ability failed:" + err.messsage);
                expect().assertFail();
                done();
            })
        })
    })
}