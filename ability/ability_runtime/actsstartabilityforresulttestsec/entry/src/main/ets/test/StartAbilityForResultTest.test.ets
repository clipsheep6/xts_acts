/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import Subscriber from '@ohos.commonEvent'
import hilog from '@ohos.hilog';

export default function StartAbilityForResultTest() {
  describe('StartAbilityForResultTest', function () {
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_3800
     * @tc.name      : Verify system service startup Ability api8
     * @tc.desc      : Send the want parameter in the form of the aa command
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */                   
    it('AbilityRuntime_StartAndTerminate_StartAbility_3800',3,async function(done){
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_3800';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'SecondAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let  cmd='aa start -a SecondAbility -b com.example.mytest1';
          delegator.executeShellCommand(cmd,(err,data)=>{
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} executeShellCommand successful`);
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_4100
     * @tc.name      : Carry a key and value, where value is of type number
     * @tc.desc      : Call the startAbility interface through context, 
     *                 where the wantAbilityName and bundleName are the correct values, 
     *                 and the value type in parameters is number
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_4100', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_4100';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'SecondAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            bundleName: 'com.example.mytest1',
            abilityName: abilityName,
            parameters:{
              Key:100
            }
          }
          // @ts-ignore
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });
            
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_4300
     * @tc.name      : Carry a key and value, where value is a string
     * @tc.desc      : Call the startAbility interface through context, 
     *                 where the wantAbilityName and bundleName are the correct values, 
     *                 and the value type in the parameters is a string
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_4300', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_4300';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'SecondAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            bundleName: 'com.example.mytest1',
            abilityName: abilityName,
            parameters:{
              Key: 'str'
            }
          }
          // @ts-ignore
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5000
     * @tc.name      : Carry a key and value, with the key being ability. want. params. TITLE and the value being String
     * @tc.desc      : Call the startAbility interface through context, 
     *                 and input wantAbilityName, bundleName, 
     *                 parameters with a value of string in parameters
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5000', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5000';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
           done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'SecondAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            bundleName: 'com.example.mytest1',
            abilityName: abilityName,
            parameters:{
              'ability.want.params.TITLE': 'str'
            }
          }
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5100
     * @tc.name      : Carry a key and value, with the key being ability. want. params. INTENT and the value being object
     * @tc.desc      : By calling the startAbility interface through context, 
     *                 the wantAbilityName and bundleName parameters are the correct values, 
     *                 and there are multiple key value pairs in the parameters
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */  
    it('AbilityRuntime_StartAndTerminate_StartAbility_5100', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5100';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'SecondAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            bundleName: 'com.example.mytest1',
            abilityName: abilityName,
            parameters:{
              'ability.want.params.TITLE': {
                key1: 'value1',
                key2: 'value2'
              }
            }
          }
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5200
     * @tc.name      : Carrying multiple keys and values
     * @tc.desc      : By calling the startAbility interface through context, 
     *                 the wantAbilityName and bundleName parameters are the correct values, 
     *                 and the parameters carry multiple keys and values
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5200', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5200';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'SecondAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            bundleName: 'com.example.mytest1',
            abilityName: abilityName,
            parameters:{
              keyForString: 'str',
              keyForInt:99,
              keyForDouble:9.9,
              keyForBool:true
            }
          }
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });
            
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5300
     * @tc.name      : Ability (custom action) with corresponding action successfully launched
     * @tc.desc      : Call the startAbility interface through context, 
     *                 and only configure actions for want, which have corresponding Capabilities
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5300', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5300';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'ThirdAbility';
          //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            action:"abc"
          }
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5400
     * @tc.name      : Ability with corresponding entities (custom, array length greater than 1) started successfully
     * @tc.desc      : Call the startAbility interface through context, 
     *                 and configure the Ability of corresponding entities for action+entities in Want configuration
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5400', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5400';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'ThirdAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            entities:['ab','acd']
          }
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5500
     * @tc.name      : AbilityName is not passed, only bundle Name is passed
     * @tc.desc      : Calling the startAbility interface through context, 
     *                 the only input parameter for want is bundleName
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5500', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5500';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        let want = {
          bundleName: 'com.example.mytest1'
        };
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        await delegator.startAbility(want).then(async () => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
        }).catch((err) => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
          expect(err.code).assertEqual(2097199);
          done();
        })
      } catch (err) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5600
     * @tc.name      : BundleName is not passed, only abilityName is passed
     * @tc.desc      : Calling the startAbility interface through context, 
     *                 the only input parameter for want is abilityName
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5600', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5600';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        let want = {
        'abilityName': 'SecondAbility',
        //'bundleName': 'com.example.mytest1',
        };
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        await delegator.startAbility(want).then(async () => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
        }).catch((err) => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
          expect(err.code).assertEqual(2097152);
          done();
        })
      } catch (err) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${err}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5700
     * @tc.name      : DeviceId is an incorrect value
     * @tc.desc      : Call the startAbility interface through context, 
     *                 where the wantAbilityName and bundleName are the correct values, 
     *                 deviceId is the incorrect value, and numbi is the type
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5700', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5700';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'SecondAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            deviceId: 123,
            bundleName: 'com.example.mytest1',
            abilityName: abilityName,
          }
          // @ts-ignore
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5800
     * @tc.name      : There is no Ability corresponding to the action
     * @tc.desc      : Call the startAbility interface through context, 
     *                 and only configure actions for want without corresponding Ability
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5800', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5800';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        let want = {
          action: 'action.syst.hos'
          //entities:['action.syst.hos']
        };
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect(err.code).assertEqual(2097199);
            done();
          })
      } catch (error) {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
          expect().assertFail();
          done();
        }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5900
     * @tc.name      : There is no Ability corresponding to entities
     * @tc.desc      : Call the startAbility interface through context, 
     *                 configure action+entities for want, 
     *                 but there is no corresponding Ability for entities
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_5900', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_5900';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
          let want = {
        //action: 'action.syst.hos'
        entities:['entity.syst.hos']
      };
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        await delegator.startAbility(want).then(async () => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
        }).catch((err) => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
          expect(err.code).assertEqual(2097199);
          done();
        })
      } catch (error) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_6000
     * @tc.name      : The entities array is an empty array
     * @tc.desc      : Call the startAbility interface through context, 
     *                 configure action+entities for want, where entities are an empty array
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_6000', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_6000';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
        var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
        const abilityName = 'ThirdAbility';
        //设置监听�?,监听新ability的生命周期函�?
        let monitor = {
          abilityName: abilityName,
          onAbilityCreate: onCreateCallback,
          onWindowStageCreate: onWindowStageCreateCallback,
          onAbilityForeground: onForegroundCallback
        };
        delegator.addAbilityMonitor(monitor, (async (err, result) => {
          let want = {
            action:"abc",
            entities:[]
          }
          await delegator.startAbility(want).then(async () => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          }).catch((err) => {
            hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
            expect().assertFail();
            done();
          })
        }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_6100
     * @tc.name      : Configure entities as strings
     * @tc.desc      : Call the startAbility interface through context, 
     *                 configure action+entities for want, where entities are strings
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('AbilityRuntime_StartAndTerminate_StartAbility_6100', 3, async function (done) {
      const TAG='StartAbility';
      const TEST_SUITE_NAME : string='StartAbilityTest';
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbility_6100';
      try{
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        var lifeMethodCalledCount = 0;
        //onCreate回调
        function onCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(1);
        }
        //onWindowStageCreate回调
        function onWindowStageCreateCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onWindowStageCreateCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(2);
        }
        //onForeground回调
        function onForegroundCallback() {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} onForegroundCallback succ`);
          lifeMethodCalledCount++;
          expect(lifeMethodCalledCount).assertEqual(3);
          lifeMethodCalledCount = 0;
          done();
        }
          var delegator = AbilityDelegatorRegistry.getAbilityDelegator();
          const abilityName = 'ThirdAbility';
          //设置监听�?,监听新ability的生命周期函�?
          let monitor = {
            abilityName: abilityName,
            onAbilityCreate: onCreateCallback,
            onWindowStageCreate: onWindowStageCreateCallback,
            onAbilityForeground: onForegroundCallback
          };
          delegator.addAbilityMonitor(monitor, (async (err, result) => {
            let want = {
              action:"abc",
              //entities:["ab"],
              entities:["acd"]
            }
            await delegator.startAbility(want).then(async () => {
              hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
            }).catch((err) => {
              hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
              expect().assertFail();
              done();
            })
          }))
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }
    });  
  })
}