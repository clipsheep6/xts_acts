/*
 * Copyright (C) 2024 HiHope Open Source Organization.
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
import { hilog } from '@kit.PerformanceAnalysisKit';
import { describe, beforeAll,  it, expect, afterEach,  } from '@ohos/hypium';
import { common } from '@kit.AbilityKit';
import { BusinessError } from '@kit.BasicServicesKit';
import commonEvent from '@ohos.commonEventManager';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';


const TAG = 'AbilityRuntime';
const TEST_SUITE_NAME: string = 'AppcloneChose';
let testAbilityContext: common.UIAbilityContext;

function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time))
}

let driver = Driver.create();
export default function actsStartAppCloneAppTest() {
  describe('ActsStartAppCloneAppTest', () => {
    let ON_WINDOW_STAGE_CREATE = "on_window_stage_create";
    let ON_FOREGROUND = "on_foreground";
    let ON_DESTROY = "on_destroy";
    let START_ABILITY_IN_NEW_PROCESS_EVENT = "start_ability_in_new_process_event";
    let START_ABILITY_EVENT = "start_ability_event";
    let FOREGROUND_EVENT = "foreground_event";
    let NOTIFY_PID_EVENT = "notify_pid_event";
    let subscribeInfo:commonEvent.CommonEventSubscribeInfo = {
      events: [ON_WINDOW_STAGE_CREATE, ON_DESTROY, ON_FOREGROUND, START_ABILITY_IN_NEW_PROCESS_EVENT, FOREGROUND_EVENT, NOTIFY_PID_EVENT],
    };
    let subscriber:commonEvent.CommonEventSubscriber | undefined = undefined;
    let onWindowStageFlag = false;
    let onForegroundFlag = false;
    let onDestroyFlag = false;
    let expectErrorCode = -1;
    let commonEventData:commonEvent.CommonEventPublishData = {
      parameters: {}
    };
    let pids:string[] = [];
    let subscribeCallBack = async (err:BusinessError, data:commonEvent.CommonEventData, done:Function, tag:string, obj:ESObject):Promise<void> => {
      console.log(`${tag} subscribeCallBack err: ${JSON.stringify(err)}, data: ${JSON.stringify(data)}`);
      switch (data.event) {
        case START_ABILITY_IN_NEW_PROCESS_EVENT: {
          expect(data.parameters!.num).assertEqual(expectErrorCode);
          if (expectErrorCode !== 0) {
            done();
          }
        }
          break;
        case ON_WINDOW_STAGE_CREATE:
          onWindowStageFlag = true;
          console.log(`${tag} subscribeCallBack onWindowStageFlag: ${onWindowStageFlag}`);
          break;
        case ON_FOREGROUND:
          onForegroundFlag = true;
          console.log(`${tag} subscribeCallBack onForegroundFlag: ${onForegroundFlag}`);
          break;
        case ON_DESTROY:
          onDestroyFlag = true;
          console.log(`${tag} subscribeCallBack onDestroyFlag: ${onDestroyFlag}`);
          break;
        case FOREGROUND_EVENT: {
          obj.flag = true;
          await sleep(500);
          commonEventData.parameters!["targetPid"] = data.parameters!.pid;
          commonEvent.publish(START_ABILITY_EVENT, commonEventData, (err)=>{
            console.log(`${tag} publish START_ABILITY_EVENT err: ${JSON.stringify(err)}`);
          });
        }
          break;
        case NOTIFY_PID_EVENT: {
          pids.push(data.parameters!.pid);
        }
          break;
        default:
          console.log(`${tag} subscribeCallBack event error: ${data.event}`);
          break;
      }
    }
    beforeAll(() => {
      testAbilityContext = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
    })
    afterEach(async ()=>{
      await sleep(3000);
    })


    /**
     * @tc.number SUB_Ability_AbilityRuntime_AppcloneChose_0100
     * @tc.name SUB_Ability_AbilityRuntime_AppcloneChose_0100
     * @tc.desc test Arguments
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('SUB_Ability_AbilityRuntime_AppcloneChose_0100',0,async (done: Function)=>{
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_AppcloneChose_0100';
      hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} test begin`);
      let startAssistAbility = async (tag:string, done:Function):Promise<void> => {
        let obj:ESObject = { flag: false };
        subscriber = await commonEvent.createSubscriber(subscribeInfo);
        commonEvent.subscribe(subscriber, (err, data) => {
          subscribeCallBack(err, data, done, tag, obj);
        });
        let want: Want = {
          deviceId: '',
          bundleName: 'com.acts.appclonedemo',
          abilityName: 'EntryAbility',
        };
        try {
          console.log(`${tag} startAssistAbility, ${JSON.stringify(want)}`);
          testAbilityContext.startAbility(want, (err: BusinessError) => {
            if (err.code) {
              console.log(`${tag} startAbility failed, code is ${err.code}, message is ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility succeed`);

          });
          await sleep(2000);
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility=flag== ${obj.flag} `);
          if (obj.flag) {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=flag== ${obj.flag} `);
            expect(obj.flag).assertTrue();
            done();
            return;
          }
          try {
            let allowed = await driver.findComponent(ON.text('想要打开', MatchPattern.CONTAINS));
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=allowed== ${allowed} `);
            if (allowed) {
              let buttons = await driver.findComponents(ON.type('Button'));
              if (buttons && buttons.length > 0) {
                buttons[buttons.length - 1].click();
              };
            };
            done();
          } catch (err) {
            let code = (err as BusinessError).code;
            let message = (err as BusinessError).message;
            console.log(`${tag} click button failed, code is ${code}, message is ${message}`);
            expect().assertFail();
            done();
          };
        } catch (err) {
          let code = (err as BusinessError).code;
          let message = (err as BusinessError).message;
          console.log(`${tag} startAbility failed, code is ${code}, message is ${message}`);
          expect().assertFail();
          done();
        };
      };
      startAssistAbility(TEST_CASE_NAME,done);
    });

    // SUB_Ability_AbilityRuntime_AppcloneChose_0200
    /**
     * @tc.number SUB_Ability_AbilityRuntime_AppcloneChose_0200
     * @tc.name SUB_Ability_AbilityRuntime_AppcloneChose_0200
     * @tc.desc test Arguments
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('SUB_Ability_AbilityRuntime_AppcloneChose_0200',0,async (done: Function)=>{
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_AppcloneChose_0200';
      hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} test begin`);
      let startAssistAbility = async (tag:string, done:Function):Promise<void> => {
        let obj:ESObject = { flag: false };
        subscriber = await commonEvent.createSubscriber(subscribeInfo);
        commonEvent.subscribe(subscriber, (err, data) => {
          subscribeCallBack(err, data, done, tag, obj);
        });
        let want: Want = {
          deviceId: '',
          bundleName: 'com.acts.appclonedemo',
          abilityName: 'EntryAbility',
          parameters:{
            "ohos.extra.param.key.appCloneIndex": 0,
          },
        };
        try {
          console.log(`${tag} startAssistAbility, ${JSON.stringify(want)}`);
          testAbilityContext.startAbility(want, (err: BusinessError) => {
            if (err.code) {
              hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} code is ${err.code}, message is ${err.message} `);
              expect().assertFail();
              done();
              return;
            };
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility succeed`);
          });
          await sleep(2000);
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility=flag== ${obj.flag} `);
          if (obj.flag) {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=flag== ${obj.flag} `);
            expect(obj.flag).assertTrue();
            done();
            return;
          }
          try {
            let allowed = await driver.findComponent(ON.text('想要打开', MatchPattern.CONTAINS));
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=allowed== ${allowed} `);
            if (allowed) {
              let buttons = await driver.findComponents(ON.type('Button'));
              if (buttons && buttons.length > 0) {
                buttons[buttons.length - 1].click();
              };
            };
            done();
          } catch (err) {
            let code = (err as BusinessError).code;
            let message = (err as BusinessError).message;
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} code is ${code}, message is ${message} `);
            expect().assertFail();
            done();
          };
        } catch (err) {
          let code = (err as BusinessError).code;
          let message = (err as BusinessError).message;
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} code is ${code}, message is ${message} `);
          expect().assertFail();
          done();
        };
      };
      startAssistAbility(TEST_CASE_NAME,done);
    });

    /**
     * @tc.number SUB_Ability_AbilityRuntime_AppcloneChose_0300
     * @tc.name SUB_Ability_AbilityRuntime_AppcloneChose_0300
     * @tc.desc test Arguments
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('SUB_Ability_AbilityRuntime_AppcloneChose_0300',0,async (done: Function)=>{
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_AppcloneChose_0300';
      hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} test begin`);
      let startAssistAbility = async (tag:string, done:Function):Promise<void> => {
        let obj:ESObject = { flag: false };
        subscriber = await commonEvent.createSubscriber(subscribeInfo);
        commonEvent.subscribe(subscriber, (err, data) => {
          subscribeCallBack(err, data, done, tag, obj);
        });
        let want: Want = {
          deviceId: '',
          bundleName: 'com.acts.appclonedemo',
          abilityName: 'EntryAbility',
          parameters:{
            "ohos.extra.param.key.appCloneIndex": 1
          },
        };
        try {
          console.log(`${tag} startAssistAbility, ${JSON.stringify(want)}`);
          testAbilityContext.startAbility(want, (err: BusinessError) => {
            if (err.code) {
              hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} code is ${err.code}, message is ${err.message} `);
              let errorCode = 16000001;
              expect(err.code).assertEqual(errorCode);
              done();
              return;
            };
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility succeed`);
          });
          await sleep(2000);
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility=flag== ${obj.flag} `);
          if (obj.flag) {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=flag== ${obj.flag} `);
            expect(obj.flag).assertTrue();
            done();
            return;
          };
          try {
            let allowed = await driver.findComponent(ON.text('想要打开', MatchPattern.CONTAINS));
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=allowed== ${allowed} `);
            if (allowed) {
              let buttons = await driver.findComponents(ON.type('Button'));
              if (buttons && buttons.length > 0) {
                buttons[buttons.length - 1].click();
              };
            };
            done();
          } catch (err) {
            let code = (err as BusinessError).code;
            let message = (err as BusinessError).message;
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} code is ${code}, message is ${message} `);
            expect().assertFail();
            done();
          };
        } catch (err) {
          let code = (err as BusinessError).code;
          let message = (err as BusinessError).message;
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} code is ${code}, message is ${message} `);
          expect().assertFail();
          done();
        };
      };
      startAssistAbility(TEST_CASE_NAME,done);
    });

    /**
     * @tc.number SUB_Ability_AbilityRuntime_AppcloneChose_0500
     * @tc.name SUB_Ability_AbilityRuntime_AppcloneChose_0500
     * @tc.desc test Arguments
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('SUB_Ability_AbilityRuntime_AppcloneChose_0500',0,async (done: Function)=>{
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_AppcloneChose_0500';
      hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} test begin`);
      let startAssistAbility = async (tag:string, done:Function):Promise<void> => {
        let obj:ESObject = { flag: false };
        subscriber = await commonEvent.createSubscriber(subscribeInfo);
        commonEvent.subscribe(subscriber, (err, data) => {
          subscribeCallBack(err, data, done, tag, obj);
        });
        let want: Want = {
          deviceId: '',
          bundleName: 'com.acts.appclonedemo',
          abilityName: '',
          entities:['entity.system.entryability'],
        };
        try {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility want== ${JSON.stringify(want)} `);
          testAbilityContext.startAbility(want, (err: BusinessError) => {
            if (err.code) {
              hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility error code is ${err.code}, message is ${err.message} `);
              expect().assertFail();
              done();
              return;
            };
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility succeed`);
          });
          await sleep(2000);
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility=flag== ${obj.flag} `);
          if (obj.flag) {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=flag== ${obj.flag} `);
            expect(obj.flag).assertTrue();
            done();
            return;
          };
          try {
            let allowed = await driver.findComponent(ON.text('想要打开', MatchPattern.CONTAINS));
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=allowed== ${allowed} `);
            if (allowed) {
              let buttons = await driver.findComponents(ON.type('Button'));
              if (buttons && buttons.length > 0) {
                buttons[buttons.length - 1].click();
              };
            };
            done();
          } catch (err) {
            let code = (err as BusinessError).code;
            let message = (err as BusinessError).message;
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME}  catch err code is ${code}, message is ${message} `);
            expect().assertFail();
            done();
          };
        } catch (err) {
          let code = (err as BusinessError).code;
          let message = (err as BusinessError).message;
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} catch  code is ${code}, message is ${message} `);
          expect().assertFail();
          done();
        };
      };
      startAssistAbility(TEST_CASE_NAME,done);
    });

    /**
     * @tc.number SUB_Ability_AbilityRuntime_AppcloneChose_0400
     * @tc.name SUB_Ability_AbilityRuntime_AppcloneChose_0400
     * @tc.desc test Arguments
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 3
     */
    it('SUB_Ability_AbilityRuntime_AppcloneChose_0400',0,async (done: Function)=>{
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_AppcloneChose_0400';
      hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} test begin`);
      let startAssistAbility = async (tag:string, done:Function):Promise<void> => {
        let obj:ESObject = { flag: false };
        subscriber = await commonEvent.createSubscriber(subscribeInfo);
        commonEvent.subscribe(subscriber, (err, data) => {
          subscribeCallBack(err, data, done, tag, obj);
        });
        let want: Want = {
          deviceId: '',
          bundleName: 'com.acts.appclonedemo',
          abilityName: '',
          entities:['entity.system.common'],
        };
        try {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility want== ${JSON.stringify(want)} `);
          testAbilityContext.startAbility(want, (err: BusinessError) => {
            if (err.code) {
              hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility error code is ${err.code}, message is ${err.message} `);
              done();
              return;
            }
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility succeed`);
          });
          await sleep(2000);
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility=flag== ${obj.flag} `);
          if (obj.flag) {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=flag== ${obj.flag} `);
            expect(obj.flag).assertTrue()
            done();
            return;
          }
          try {
            let allowed = await driver.findComponents(ON.text('label', MatchPattern.CONTAINS));
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=allowedOne== ${JSON.stringify(allowed)} `);
            let abilityNums = 4;
            if (allowed && allowed.length === abilityNums) {
              let index =Math.floor(Math.random() * abilityNums);
              hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} no need to click button=index== ${JSON.stringify(index)} `);
              allowed[index].click();
            }
            await sleep(4000);
            expect(allowed.length).assertEqual(abilityNums);
            done();
          } catch (err) {
            let code = (err as BusinessError).code;
            let message = (err as BusinessError).message;
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME}  catch err code is ${code}, message is ${message} `);
            expect().assertFail();
            done();
          };
        } catch (err) {
          let code = (err as BusinessError).code;
          let message = (err as BusinessError).message;
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} catch  code is ${code}, message is ${message} `);
          expect().assertFail();
          done();
        };
      };
      startAssistAbility(TEST_CASE_NAME,done);
  });

  })
}

