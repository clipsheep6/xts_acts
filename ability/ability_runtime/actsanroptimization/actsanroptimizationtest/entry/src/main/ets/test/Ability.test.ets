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
import appManager from '@ohos.application.appManager';
import missionManager from '@ohos.application.missionManager';
import { BY, UiDriver, UiComponent, MatchPattern } from '@ohos.uitest'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'

var abilityDelegator = undefined
var driver;

function sleep(time) {
  return new Promise < void> ((resolve, reject) => {
    setTimeout(() => {
      resolve();
    }, time)
  })
}


export default function abilityTest() {
  describe('ActsANROptimizationTest', function () {
    beforeAll(async (done) => {
      driver = await UiDriver.create()
      done();
    })

    afterEach(async (done) => {
      await appManager.killProcessesByBundleName("com.example.applicationnotresponserelyhap");
      await appManager.killProcessesByBundleName("com.example.anrlongenamerelyhap");
      setTimeout(() => {
        done();
      }, 300)
    })

    /*
     * @tc.number: ACTS_ANROptimization_0100
     * @tc.name: Single process, trigger ANR pop-up window selection close
     * @tc.desc: Single process, trigger ANR pop-up window selection close,
     * process is killed, mission is cleaned up
     */
    it('ACTS_ANROptimization_0100', 0, async function (done) {
      console.log("ACTS_ANROptimization_0100 --- start")
      await sleep(1000);
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_0100 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_0100 startAbility end");
        })

      await sleep(500);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_0100 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stagea";
      console.log('ACTS_ANROptimization_0100 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_0100 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_0100 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_0100 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_0100 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_0100 executeShellCommand : data : ' + d.exitCode);

          await sleep(1000);
          console.debug("ACTS_ANROptimization_0100 create");
          try {
            console.debug("ACTS_ANROptimization_0100 create enter");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANROptimizationRelyHap未响应'))
            console.debug("ACTS_ANROptimization_0100 findComponent");
            let button = await driver.findComponent(BY.text('关闭应用').enabled(true))
            console.debug("ACTS_ANROptimization_0100 button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0100 click");
            await button.click()
            console.debug("ACTS_ANROptimization_0100 click success");
          } catch (err) {
            console.debug("ACTS_ANROptimization_0100 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0100 catch err: " + err);
            expect("").assertFail();
            done();
          }
          await sleep(2000);
          var processExist = false;
          var processInfosAfter = await appManager.getProcessRunningInfos()
          console.log('ACTS_ANROptimization_0100 processInfosAfter = ' + JSON.stringify(processInfosAfter));
          var processName = "stagea";
          console.log('ACTS_ANROptimization_0100 processInfosAfter.length = ' + processInfosAfter.length);
          for (var i = 0; i < processInfosAfter.length; i++) {
            if (processInfosAfter[i].processName == processName) {
              console.log('ACTS_ANROptimization_0100 processName is exist ');
              processExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0100 processExist = ' + processExist);
          expect(processExist).assertEqual(false);

          var numMax = 1024;
          var missionExist = false;
          var missionInfos = await missionManager.getMissionInfos('', numMax);
          console.log('ACTS_ANROptimization_0100 missionInfos = ' + JSON.stringify(missionInfos));
          console.log('ACTS_ANROptimization_0100 missionInfos.length = ' + JSON.stringify(missionInfos.length));
          for (var j = 0; j < missionInfos.length; j++) {
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0100 mission is exist ');
              missionExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0100 missionExist = ' + missionExist);
          expect(missionExist).assertEqual(false);
          try {
            var notFoundFlag = false;
            console.debug("ACTS_ANROptimization_0100 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
          } catch (err) {
            console.debug("ACTS_ANROptimization_0100 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0100 catch err: " + err);
            notFoundFlag = true;
          }
          expect(notFoundFlag).assertEqual(true);
          setTimeout(() => {
            done();
          }, 100)
        })
    })

    /*
     * @tc.number: ACTS_ANROptimization_0200
     * @tc.name: Single process, trigger ANR pop-up window selection wait
     * @tc.desc: Single process, trigger ANR pop-up window selection wait,
     * process is not killed, mission is not cleaned up
     */
    it('ACTS_ANROptimization_0200', 0, async function (done) {

      console.log("ACTS_ANROptimization_0200 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_0200 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_0200 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_0200 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stagea";
      console.log('ACTS_ANROptimization_0200 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_0200 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_0200 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_0200 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_0200 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_0200 executeShellCommand : data : ' + d.exitCode);
          await sleep(500);
          console.debug("ACTS_ANROptimization_0200 create");
          try {
            console.debug("ACTS_ANROptimization_0200 create enter");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANROptimizationRelyHap未响应'))
            console.debug("ACTS_ANROptimization_0200 findComponent");
            let button = await driver.findComponent(BY.text('等待响应').enabled(true))
            console.debug("ACTS_ANROptimization_0200 button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0200 click");
            await button.click()
            console.debug("ACTS_ANROptimization_0200 click success");
          } catch (err) {
            console.debug("ACTS_ANROptimization_0200 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0200 catch err: " + err);
            expect("").assertFail();
            done();
          }
          await sleep(2000);
          var processExist = false;
          var processInfosAfter = await appManager.getProcessRunningInfos()
          console.log('ACTS_ANROptimization_0200 processInfosAfter = ' + JSON.stringify(processInfosAfter));
          var processName = "stagea";
          console.log('ACTS_ANROptimization_0200 processInfosAfter.length = ' + processInfosAfter.length);
          for (var i = 0; i < processInfosAfter.length; i++) {
            if (processInfosAfter[i].processName == processName) {
              console.log('ACTS_ANROptimization_0200 process is exist ');
              processExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0200 processExist = ' + processExist);
          expect(processExist).assertEqual(true);

          var numMax = 1024;
          var missionExist = false;
          var missionInfos = await missionManager.getMissionInfos('', numMax);
          console.log('ACTS_ANROptimization_0200 missionInfos = ' + JSON.stringify(missionInfos));
          console.log('ACTS_ANROptimization_0200 missionInfos.length = ' + JSON.stringify(missionInfos.length));
          for (var j = 0; j < missionInfos.length; j++) {
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0200 mission is exist ');
              missionExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0200 missionExist = ' + missionExist);
          expect(missionExist).assertEqual(true);
          try {
            var notFoundFlag = false;
            console.debug("ACTS_ANROptimization_0200 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
          } catch (err) {
            console.debug("ACTS_ANROptimization_0200 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0200 catch err: " + err);
            notFoundFlag = true;
          }
          expect(notFoundFlag).assertEqual(true);
          setTimeout(() => {
            done();
          }, 100)
        })
    })

    /*
     * @tc.number: ACTS_ANROptimization_0300
     * @tc.name: Multi-process, trigger ANR pop-up window selection close
     * @tc.desc: Multi-process, trigger ANR pop-up window selection close,
     * process is killed, mission is cleaned up
     */
    it('ACTS_ANROptimization_0300', 0, async function (done) {
      console.log("ACTS_ANROptimization_0300 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMainBMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_0300 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_0300 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_0300 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stageb";
      console.log('ACTS_ANROptimization_0300 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_0300 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_0300 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_0300 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_0300 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_0300 executeShellCommand : data : ' + d.exitCode);

          await sleep(500);
          console.debug("ACTS_ANROptimization_0300 create");
          try {
            console.debug("ACTS_ANROptimization_0300 create enter");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANROptimizationRelyHap未响应'))
            console.debug("ACTS_ANROptimization_0300 findComponent");
            let button = await driver.findComponent(BY.text('关闭应用').enabled(true))
            console.debug("ACTS_ANROptimization_0300 button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0300 click");
            await button.click()
            console.debug("ACTS_ANROptimization_0300 click success");
          } catch (err) {
            console.debug("ACTS_ANROptimization_0300 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0300 catch err: " + err);
            expect("").assertFail();
            done();
          }
          await sleep(2000);
          var processAName = "stagea";
          var processBName = "stageb";
          var processAExist = false;
          var processBExist = false;
          var processInfosAfter = await appManager.getProcessRunningInfos()
          console.log('ACTS_ANROptimization_0300 processInfosAfter = ' + JSON.stringify(processInfosAfter));
          console.log('ACTS_ANROptimization_0300 processInfosAfter.length = ' + processInfosAfter.length);
          for (var i = 0; i < processInfosAfter.length; i++) {
            if (processInfosAfter[i].processName == processAName) {
              console.log('ACTS_ANROptimization_0300 processA is exist ');
              processAExist = true;
            }
            if (processInfosAfter[i].processName == processBName) {
              console.log('ACTS_ANROptimization_0300 processB is exist ');
              processBExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0300 processExist = ' + processAExist);
          console.log('ACTS_ANROptimization_0300 processExist = ' + processBExist);
          expect(processAExist).assertEqual(true);
          expect(processBExist).assertEqual(false);

          var numMax = 1024;
          var missionAExist = false;
          var missionBExist = false;
          var missionInfos = await missionManager.getMissionInfos('', numMax);
          console.log('ACTS_ANROptimization_0300 missionInfos = ' + JSON.stringify(missionInfos));
          console.log('ACTS_ANROptimization_0300 missionInfos.length = ' + JSON.stringify(missionInfos.length));
          for (var j = 0; j < missionInfos.length; j++) {
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0300 missionA is exist ');
              missionAExist = true;
            }
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility1")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0300 missionB is exist ');
              missionBExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0300 missionAExist = ' + missionAExist);
          console.log('ACTS_ANROptimization_0300 missionBExist = ' + missionBExist);
          expect(missionAExist).assertEqual(true);
          expect(missionBExist).assertEqual(false);
          try {
            var notFoundFlag = false;
            console.debug("ACTS_ANROptimization_0300 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
          } catch (err) {
            console.debug("ACTS_ANROptimization_0300 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0300 catch err: " + err);
            notFoundFlag = true;
          }
          expect(notFoundFlag).assertEqual(true);
          setTimeout(() => {
            done();
          }, 100)
        })
    })

    /*
     * @tc.number: ACTS_ANROptimization_0400
     * @tc.name: Multi-process, trigger ANR pop-up window selection wait
     * @tc.desc: Multi-process, trigger ANR pop-up window selection wait,
     * process is not killed, mission is not cleaned up
     */
    it('ACTS_ANROptimization_0400', 0, async function (done) {
      console.log("ACTS_ANROptimization_0400 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMainBMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_0400 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_0400 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_0400 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stageb";
      console.log('ACTS_ANROptimization_0400 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_0400 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_0400 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_0400 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_0400 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_0400 executeShellCommand : data : ' + d.exitCode);

          await sleep(500);
          console.debug("ACTS_ANROptimization_0400 create");
          try {
            console.debug("ACTS_ANROptimization_0400 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANROptimizationRelyHap未响应'))
            let button = await driver.findComponent(BY.text('等待响应').enabled(true))
            console.debug("ACTS_ANROptimization_0400 button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0400 click");
            await button.click()
            console.debug("ACTS_ANROptimization_0400 click success");
          } catch (err) {
            console.debug("ACTS_ANROptimization_0400 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0400 catch err: " + err);
            expect("").assertFail();
            done();
          }
          await sleep(2000);
          var processAName = "stagea";
          var processBName = "stageb";
          var processAExist = false;
          var processBExist = false;
          var processInfosAfter = await appManager.getProcessRunningInfos()
          console.log('ACTS_ANROptimization_0400 processInfosAfter = ' + JSON.stringify(processInfosAfter));
          console.log('ACTS_ANROptimization_0400 processInfosAfter.length = ' + processInfosAfter.length);
          for (var i = 0; i < processInfosAfter.length; i++) {
            if (processInfosAfter[i].processName == processAName) {
              console.log('ACTS_ANROptimization_0400 processA is exist ');
              processAExist = true;
            }
            if (processInfosAfter[i].processName == processBName) {
              console.log('ACTS_ANROptimization_0400 processB is exist ');
              processBExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0400 processAExist = ' + processAExist);
          console.log('ACTS_ANROptimization_0400 processBExist = ' + processBExist);
          expect(processAExist).assertEqual(true);
          expect(processBExist).assertEqual(true);

          var numMax = 1024;
          var missionAExist = false;
          var missionBExist = false;
          var missionInfos = await missionManager.getMissionInfos('', numMax);
          console.log('ACTS_ANROptimization_0400 missionInfos = ' + JSON.stringify(missionInfos));
          console.log('ACTS_ANROptimization_0400 missionInfos.length = ' + JSON.stringify(missionInfos.length));
          for (var j = 0; j < missionInfos.length; j++) {
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0400 missionA is exist ');
              missionAExist = true;
            }
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility1")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0400 missionB is exist ');
              missionBExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0400 missionAExist = ' + missionAExist);
          console.log('ACTS_ANROptimization_0400 missionBExist = ' + missionBExist);
          expect(missionAExist).assertEqual(true);
          expect(missionBExist).assertEqual(true);
          try {
            var notFoundFlag = false;
            console.debug("ACTS_ANROptimization_0400 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
          } catch (err) {
            console.debug("ACTS_ANROptimization_0400 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0400 catch err: " + err);
            notFoundFlag = true;
          }
          expect(notFoundFlag).assertEqual(true);
          setTimeout(() => {
            done();
          }, 100)
        })
    })

    /*
     * @tc.number: ACTS_ANROptimization_0500
     * @tc.name: Multi-process and multiple ability, trigger ANR pop-up window selection close
     * @tc.desc: Multi-process and multiple ability, trigger ANR pop-up window selection close,
     * process is killed, mission is cleaned up
     */
    it('ACTS_ANROptimization_0500', 0, async function (done) {
      console.log("ACTS_ANROptimization_0500 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMainBMainBSecond",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_0500 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_0500 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_0500 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stageb";
      console.log('ACTS_ANROptimization_0500 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_0500 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_0500 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_0500 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_0500 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_0500 executeShellCommand : data : ' + d.exitCode);

          await sleep(500);
          console.debug("ACTS_ANROptimization_0500 create");
          try {
            console.debug("ACTS_ANROptimization_0500 create enter");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANROptimizationRelyHap未响应'))
            console.debug("ACTS_ANROptimization_0500 findComponent");
            let button = await driver.findComponent(BY.text('关闭应用').enabled(true))
            console.debug("ACTS_ANROptimization_0500 button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0500 click");
            await button.click()
            console.debug("ACTS_ANROptimization_0500 click success");
          } catch (err) {
            console.debug("ACTS_ANROptimization_0500 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0500 catch err: " + err);
            expect("").assertFail();
            done();
          }
          await sleep(2000);
          var processAName = "stagea";
          var processBName = "stageb";
          var processAExist = false;
          var processBExist = false;
          var processInfosAfter = await appManager.getProcessRunningInfos()
          console.log('ACTS_ANROptimization_0500 processInfosAfter = ' + JSON.stringify(processInfosAfter));
          console.log('ACTS_ANROptimization_0500 processInfosAfter.length = ' + processInfosAfter.length);
          for (var i = 0; i < processInfosAfter.length; i++) {
            if (processInfosAfter[i].processName == processAName) {
              console.log('ACTS_ANROptimization_0500 processA is exist ');
              processAExist = true;
            }
            if (processInfosAfter[i].processName == processBName) {
              console.log('ACTS_ANROptimization_0500 processB is exist ');
              processBExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0500 processAExist = ' + processAExist);
          console.log('ACTS_ANROptimization_0500 processBExist = ' + processBExist);
          expect(processAExist).assertEqual(true);
          expect(processBExist).assertEqual(false);

          var numMax = 1024;
          var missionAExist = false;
          var missionBExist = false;
          var missionInfos = await missionManager.getMissionInfos('', numMax);
          console.log('ACTS_ANROptimization_0500 missionInfos = ' + JSON.stringify(missionInfos));
          console.log('ACTS_ANROptimization_0500 missionInfos.length = ' + JSON.stringify(missionInfos.length));
          for (var j = 0; j < missionInfos.length; j++) {
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0500 missionA is exist ');
              missionAExist = true;
            }
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility1")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0500 missionB is exist ');
              missionBExist = true;
            }
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "SecondAbility1")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0500 missionB is exist ');
              missionBExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0500 missionAExist = ' + missionAExist);
          console.log('ACTS_ANROptimization_0500 missionBExist = ' + missionBExist);
          expect(missionAExist).assertEqual(true);
          expect(missionBExist).assertEqual(false);
          try {
            var notFoundFlag = false;
            console.debug("ACTS_ANROptimization_0500 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
          } catch (err) {
            console.debug("ACTS_ANROptimization_0500 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0500 catch err: " + err);
            notFoundFlag = true;
          }
          expect(notFoundFlag).assertEqual(true);
          setTimeout(() => {
            done();
          }, 1000)
        })
    })

    /*
     * @tc.number: ACTS_ANROptimization_0600
     * @tc.name: Multi-process and multiple ability, trigger ANR pop-up window selection wait
     * @tc.desc: Multi-process and multiple ability, trigger ANR pop-up window selection wait,
     * process is not killed, mission is not cleaned up
     */
    it('ACTS_ANROptimization_0600', 0, async function (done) {
      console.log("ACTS_ANROptimization_0600 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMainBMainBSecond",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_0600 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_0600 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_0600 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stageb";
      console.log('ACTS_ANROptimization_0600 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_0600 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_0600 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_0600 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_0600 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_0600 executeShellCommand : data : ' + d.exitCode);
          await sleep(500);
          console.debug("ACTS_ANROptimization_0600 create");
          try {
            console.debug("ACTS_ANROptimization_0600 create enter");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANROptimizationRelyHap未响应'))
            console.debug("ACTS_ANROptimization_0600 findComponent");
            let button = await driver.findComponent(BY.text('等待响应').enabled(true))
            console.debug("ACTS_ANROptimization_0600 button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0600 click");
            await button.click()
            console.debug("ACTS_ANROptimization_0600 click success");
          } catch (err) {
            console.debug("ACTS_ANROptimization_0600 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0600 catch err: " + err);
            expect("").assertFail();
            done();
          }
          await sleep(2000);
          var processAName = "stagea";
          var processBName = "stageb";
          var processAExist = false;
          var processBExist = false;
          var processInfosAfter = await appManager.getProcessRunningInfos()
          console.log('ACTS_ANROptimization_0600 processInfosAfter = ' + JSON.stringify(processInfosAfter));
          console.log('ACTS_ANROptimization_0600 processInfosAfter.length = ' + processInfosAfter.length);
          for (var i = 0; i < processInfosAfter.length; i++) {
            if (processInfosAfter[i].processName == processAName) {
              console.log('ACTS_ANROptimization_0600 processA is exist ');
              processAExist = true;
            }
            if (processInfosAfter[i].processName == processBName) {
              console.log('ACTS_ANROptimization_0600 processB is exist ');
              processBExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0600 processAExist = ' + processAExist);
          console.log('ACTS_ANROptimization_0600 processBExist = ' + processBExist);
          expect(processAExist).assertEqual(true);
          expect(processBExist).assertEqual(true);

          var numMax = 1024;
          var missionAExist = false;
          var missionBExist = false;
          var missionInfos = await missionManager.getMissionInfos('', numMax);
          console.log('ACTS_ANROptimization_0600 missionInfos = ' + JSON.stringify(missionInfos));
          console.log('ACTS_ANROptimization_0600 missionInfos.length = ' + JSON.stringify(missionInfos.length));
          for (var j = 0; j < missionInfos.length; j++) {
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0600 missionA is exist ');
              missionAExist = true;
            }
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility1")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0600 missionB is exist ');
              missionBExist = true;
            }
            if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
              && (missionInfos[j].want.abilityName == "SecondAbility1")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0600 missionB is exist ');
              missionBExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0600 missionAExist = ' + missionAExist);
          console.log('ACTS_ANROptimization_0600 missionBExist = ' + missionBExist);
          expect(missionAExist).assertEqual(true);
          expect(missionBExist).assertEqual(true);
          try {
            var notFoundFlag = false;
            console.debug("ACTS_ANROptimization_0600 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
          } catch (err) {
            console.debug("ACTS_ANROptimization_0600 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0600 catch err: " + err);
            notFoundFlag = true;
          }
          expect(notFoundFlag).assertEqual(true);
          setTimeout(() => {
            done();
          }, 1000)
        })
    })

    /*
    * @tc.number: ACTS_ANROptimization_0700
    * @tc.name: FA model, trigger ANR pop-up window selection close
    * @tc.desc: FA model, trigger ANR pop-up window selection close,
    * process is killed, mission is cleaned up
    */
    it('ACTS_ANROptimization_0700', 0, async function (done) {
      console.log("ACTS_ANROptimization_0700 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.anroptimizationfarelyhap',
          abilityName: 'com.example.entry.MainAbility',
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_0700 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_0700 startAbility end");
        })

      await sleep(500);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_0700 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "com.example.anroptimizationfarelyhap";
      console.log('ACTS_ANROptimization_0700 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_0700 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_0700 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_0700 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_0700 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_0700 executeShellCommand : data : ' + d.exitCode);

          await sleep(1000);
          console.debug("ACTS_ANROptimization_0700 create");
          try {
            console.debug("ACTS_ANROptimization_0700 create enter");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANROptimizationFA未响应'))
            console.debug("ACTS_ANROptimization_0700 findComponent");
            let button = await driver.findComponent(BY.text('关闭应用').enabled(true))
            console.debug("ACTS_ANROptimization_0700 button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0700 click");
            await button.click()
            console.debug("ACTS_ANROptimization_0700 click success");
          } catch (err) {
            console.debug("ACTS_ANROptimization_0700 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0700 catch err: " + err);
            expect("").assertFail();
            done();
          }
          await sleep(2000);
          var processExist = false;
          var processInfosAfter = await appManager.getProcessRunningInfos()
          console.log('ACTS_ANROptimization_0700 processInfosAfter = ' + JSON.stringify(processInfosAfter));
          var processName = "com.example.anroptimizationfarelyhap";
          console.log('ACTS_ANROptimization_0700 processInfosAfter.length = ' + processInfosAfter.length);
          for (var i = 0; i < processInfosAfter.length; i++) {
            if (processInfosAfter[i].processName == processName) {
              console.log('ACTS_ANROptimization_0700 processName is exist ');
              processExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0700 processExist = ' + processExist);
          expect(processExist).assertEqual(false);

          var numMax = 1024;
          var missionExist = false;
          var missionInfos = await missionManager.getMissionInfos('', numMax);
          console.log('ACTS_ANROptimization_0700 missionInfos = ' + JSON.stringify(missionInfos));
          console.log('ACTS_ANROptimization_0700 missionInfos.length = ' + JSON.stringify(missionInfos.length));
          for (var j = 0; j < missionInfos.length; j++) {
            if ((missionInfos[j].want.bundleName == "com.example.anroptimizationfarelyhap")
              && (missionInfos[j].want.abilityName == "MainAbility")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0700 mission is exist ');
              missionExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0700 missionExist = ' + missionExist);
          expect(missionExist).assertEqual(false);
          try {
            var notFoundFlag = false;
            console.debug("ACTS_ANROptimization_0700 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
          } catch (err) {
            console.debug("ACTS_ANROptimization_0700 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0700 catch err: " + err);
            notFoundFlag = true;
          }
          expect(notFoundFlag).assertEqual(true);
          setTimeout(() => {
            done();
          }, 100)
        })
    })

    /*
     * @tc.number: ACTS_ANROptimization_0800
     * @tc.name: FA model, trigger ANR pop-up window selection wait
     * @tc.desc: FA model, trigger ANR pop-up window selection wait,
     * process is not killed, mission is not cleaned up
     */
    it('ACTS_ANROptimization_0800', 0, async function (done) {

      console.log("ACTS_ANROptimization_0800 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.anroptimizationfarelyhap',
          abilityName: 'com.example.entry.MainAbility',
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_0800 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_0800 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_0800 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "com.example.anroptimizationfarelyhap";
      console.log('ACTS_ANROptimization_0800 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_0800 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_0800 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_0800 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_0800 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_0800 executeShellCommand : data : ' + d.exitCode);
          await sleep(500);
          try {
            console.debug("ACTS_ANROptimization_0800 create enter");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANROptimizationFA未响应'))
            console.debug("ACTS_ANROptimization_0800 findComponent");
            let button = await driver.findComponent(BY.text('等待响应').enabled(true))
            console.debug("ACTS_ANROptimization_0800 button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0800 click");
            await button.click()
            console.debug("ACTS_ANROptimization_0800 click success");
          } catch (err) {
            console.debug("ACTS_ANROptimization_0800 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0800 catch err: " + err);
            expect("").assertFail();
            done();
          }
          await sleep(2000);
          var processExist = false;
          var processInfosAfter = await appManager.getProcessRunningInfos()
          console.log('ACTS_ANROptimization_0800 processInfosAfter = ' + JSON.stringify(processInfosAfter));
          var processName = "com.example.anroptimizationfarelyhap";
          console.log('ACTS_ANROptimization_0800 processInfosAfter.length = ' + processInfosAfter.length);
          for (var i = 0; i < processInfosAfter.length; i++) {
            if (processInfosAfter[i].processName == processName) {
              console.log('ACTS_ANROptimization_0800 process is exist ');
              processExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0800 processExist = ' + processExist);
          expect(processExist).assertEqual(true);

          var numMax = 1024;
          var missionExist = false;
          var missionInfos = await missionManager.getMissionInfos('', numMax);
          console.log('ACTS_ANROptimization_0800 missionInfos = ' + JSON.stringify(missionInfos));
          console.log('ACTS_ANROptimization_0800 missionInfos.length = ' + JSON.stringify(missionInfos.length));
          for (var j = 0; j < missionInfos.length; j++) {
            if ((missionInfos[j].want.bundleName == "com.example.anroptimizationfarelyhap")
              && (missionInfos[j].want.abilityName == "com.example.entry.MainAbility")
              && (missionInfos[j].runningState == 0)) {
              console.log('ACTS_ANROptimization_0800 mission is exist ');
              missionExist = true;
            }
          }
          console.log('ACTS_ANROptimization_0800 missionExist = ' + missionExist);
          expect(missionExist).assertEqual(true);
          try {
            var notFoundFlag = false;
            console.debug("ACTS_ANROptimization_0800 findComponent");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
          } catch (err) {
            console.debug("ACTS_ANROptimization_0800 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_0800 catch err: " + err);
            notFoundFlag = true;
          }
          expect(notFoundFlag).assertEqual(true);
          setTimeout(() => {
            done();
          }, 100)
        })
    })


    /*
     * @tc.number: ACTS_ANROptimization_1000
     * @tc.name: Invalid pid in trigger ANR instruction
     * @tc.desc: Invalid pid in trigger ANR instruction,ANR popup won't pop up
     */
    it('ACTS_ANROptimization_1000', 0, async function (done) {
      console.log("ACTS_ANROptimization_1000 --- start")

      var cmd = 'aa ApplicationNotResponding -p -1';
      var notFoundFlag = false;
      console.log('ACTS_ANROptimization_1000 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

      try {
        console.debug("ACTS_ANROptimization_1000 create");
        await sleep(2000);
        console.debug("ACTS_ANROptimization_1000 create enter");
        console.debug("ACTS_ANROptimization_1000 findComponent");
        await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
      } catch (err) {
        console.debug("ACTS_ANROptimization_1000 catch err: " + JSON.stringify(err));
        console.debug("ACTS_ANROptimization_1000 catch err: " + err);
        notFoundFlag = true;
      }
      expect(notFoundFlag).assertEqual(true);
      done();
    })

    /*
     * @tc.number: ACTS_ANROptimization_1100
     * @tc.name: After the ANR pops up, operate other interfaces, and then choose to close the application
     * @tc.desc: After the ANR pops up, operate other interfaces, and then choose to close the application,
     * no freeze screen,after that, the pop-up window can be operated normally
     */
    it('ACTS_ANROptimization_1100', 0, async function (done) {
      console.log("ACTS_ANROptimization_1100 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_1100 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_1100 startAbility end");
        })

      await sleep(500);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1100 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stagea";
      console.log('ACTS_ANROptimization_1100 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_1100 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_1100 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      await abilityDelegator.executeShellCommand(cmd, 0);
      try {
        console.debug("ACTS_ANROptimization_1100 create");
        await sleep(1000);
        var button = await driver.findComponent(BY.text('关闭应用').enabled(true))
        var point = await button.getBoundsCenter();
        console.debug("ACTS_ANROptimization_1100 button: " + JSON.stringify(button))

        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.anrlongenamerelyhap',
            abilityName: 'MainAbility',
            action: "AMain",
          }, (error, data) => {
            console.debug("ACTS_ANROptimization_1100 startAbility " +
              JSON.stringify(error) + "," + JSON.stringify(data));
            console.debug("ACTS_ANROptimization_1100 startAbility end");
          })

        await abilityDelegator.executeShellCommand("hilog -r", 0)

        console.debug("ACTS_ANROptimization_1100 click");
        await sleep(500);
        await driver.click(point.X, point.Y);
        console.debug("ACTS_ANROptimization_1100 click success");
      } catch (err) {
        console.debug("ACTS_ANROptimization_1100 catch err: " + JSON.stringify(err));
        console.debug("ACTS_ANROptimization_1100 catch err: " + err);
        expect(err.message).assertEqual(false);
        expect("").assertFail();
        done();
      }
      await sleep(2000);
      var processExist = false;
      var processInfosAfter = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1100 processInfosAfter = ' + JSON.stringify(processInfosAfter));

      console.log('ACTS_ANROptimization_1100 processInfosAfter.length = ' + processInfosAfter.length);
      for (i = 0; i < processInfosAfter.length; i++) {
        if (processInfosAfter[i].processName == processName) {
          console.log('ACTS_ANROptimization_1100 processName is exist ');
          processExist = true;
        }
      }
      console.log('ACTS_ANROptimization_1100 processExist = ' + processExist);
      expect(processExist).assertEqual(false);

      var numMax = 1024;
      var missionExist = false;
      var missionInfos = await missionManager.getMissionInfos('', numMax);
      console.log('ACTS_ANROptimization_1100 missionInfos = ' + JSON.stringify(missionInfos));
      console.log('ACTS_ANROptimization_1100 missionInfos.length = ' + JSON.stringify(missionInfos.length));
      for (var j = 0; j < missionInfos.length; j++) {
        if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
          && (missionInfos[j].want.abilityName == "MainAbility")
          && (missionInfos[j].runningState == 0)) {
          console.log('ACTS_ANROptimization_1100 mission is exist ');
          missionExist = true;
        }
      }
      console.log('ACTS_ANROptimization_1100 missionExist = ' + missionExist);
      expect(missionExist).assertEqual(false);

      checkLogExist('"click close app"', async (err, data) => {
        let result = data.stdResult;
        console.debug("ACTS_ANROptimization_1100 stdResult ====>" + result);
        let matchResult = result.match(/click close app/g);
        console.debug("ACTS_ANROptimization_1100 checkLogExist ====>" + matchResult);
        expect(matchResult != null).assertEqual(true);
        try {
          var notFoundFlag = false;
          console.debug("ACTS_ANROptimization_1100 findComponent");
          await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
            '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
        } catch (err) {
          console.debug("ACTS_ANROptimization_1100 catch err: " + JSON.stringify(err));
          console.debug("ACTS_ANROptimization_1100 catch err: " + err);
          notFoundFlag = true;
        }
        expect(notFoundFlag).assertEqual(true);
        done();
      })
    })

    function checkLogExist(content, callBack) {
      let cmd = 'hilog | grep ';
      cmd += content;
      cmd += ' | grep -v grep | grep -v hilog > /data/tmp & jobs -l';
      abilityDelegator.executeShellCommand(cmd, 1, (err, data) => {
        console.debug("ACTS_ANROptimization first logResult====>" + data.stdResult);
        let disContent = data.stdResult;
        let array = disContent.split(/\s+/);
        console.debug("ACTS_ANROptimization first array[0]:" + array[2]);
        setTimeout(() => {
          cmd = 'kill -9 ' + array[2];
          cmd += ' && cat /data/tmp'
          abilityDelegator.executeShellCommand(cmd, (err, data) => {
            console.debug("ACTS_ANROptimization logResult====>" + data.stdResult);
            callBack(err, data);
          });
        }, 3000)
      });
    }

    /*
     * @tc.number: ACTS_ANROptimization_1200
     * @tc.name: After the ANR pops up, operate other interfaces, and then choose to waiting for a response
     * @tc.desc: After the ANR pops up, operate other interfaces, and then choose to waiting for a response,
     * no freeze screen,after that, the pop-up window can be operated normally
     */
    it('ACTS_ANROptimization_1200', 0, async function (done) {
      console.log("ACTS_ANROptimization_1200 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_1200 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_1200 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1200 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stagea";
      console.log('ACTS_ANROptimization_1200 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_1200 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_1200 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      await abilityDelegator.executeShellCommand(cmd, 0);
      try {
        console.debug("ACTS_ANROptimization_1200 create");
        await sleep(2000);
        let button = await driver.findComponent(BY.text('等待响应').enabled(true))
        var point = await button.getBoundsCenter();
        console.debug("ACTS_ANROptimization_1200 button: " + JSON.stringify(button))

        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.anrlongenamerelyhap',
            abilityName: 'MainAbility',
            action: "AMain",
          }, (error, data) => {
            console.debug("ACTS_ANROptimization_1200 startAbility " +
              JSON.stringify(error) + "," + JSON.stringify(data));
            console.debug("ACTS_ANROptimization_1200 startAbility end");
          })
        await abilityDelegator.executeShellCommand("hilog -r", 0)
        await sleep(2000);

        console.debug("ACTS_ANROptimization_1200 click");
        await sleep(1000);
        await driver.click(point.X, point.Y);
        console.debug("ACTS_ANROptimization_1200 click success");
      } catch (err) {
        console.debug("ACTS_ANROptimization_1200 catch err: " + JSON.stringify(err));
        console.debug("ACTS_ANROptimization_1200 catch err: " + err);
        expect("").assertFail();
        done();
      }

      await sleep(2000);
      var processExist = false;
      var processInfosAfter = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1200 processInfosAfter = ' + JSON.stringify(processInfosAfter));

      console.log('ACTS_ANROptimization_1200 processInfosAfter.length = ' + processInfosAfter.length);
      for (i = 0; i < processInfosAfter.length; i++) {
        if (processInfosAfter[i].processName == processName) {
          console.log('ACTS_ANROptimization_1200 processName is exist ');
          processExist = true;
        }
      }
      console.log('ACTS_ANROptimization_1200 processExist = ' + processExist);
      expect(processExist).assertEqual(true);

      var numMax = 1024;
      var missionExist = false;
      var missionInfos = await missionManager.getMissionInfos('', numMax);
      console.log('ACTS_ANROptimization_1200 missionInfos = ' + JSON.stringify(missionInfos));
      console.log('ACTS_ANROptimization_1200 missionInfos.length = ' + JSON.stringify(missionInfos.length));
      for (var j = 0; j < missionInfos.length; j++) {
        if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
          && (missionInfos[j].want.abilityName == "MainAbility")
          && (missionInfos[j].runningState == 0)) {
          console.log('ACTS_ANROptimization_1200 mission is exist ');
          missionExist = true;
        }
      }
      console.log('ACTS_ANROptimization_1200 missionExist = ' + missionExist);
      expect(missionExist).assertEqual(true);

      checkLogExist('"click waiting for a response"', async (err, data) => {
        let result = data.stdResult;
        console.debug("ACTS_ANROptimization_1200 stdResult ====>" + result);
        let matchResult = result.match(/click waiting for a response/g);
        console.debug("ACTS_ANROptimization_1200 checkLogExist ====>" + matchResult);
        expect(matchResult != null).assertEqual(true);
        try {
          var notFoundFlag = false;
          console.debug("ACTS_ANROptimization_1200 findComponent");
          await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
            '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
        } catch (err) {
          console.debug("ACTS_ANROptimization_1200 catch err: " + JSON.stringify(err));
          console.debug("ACTS_ANROptimization_1200 catch err: " + err);
          notFoundFlag = true;
        }
        expect(notFoundFlag).assertEqual(true);
        done();
      })
    })

    /*
     * @tc.number: ACTS_ANROptimization_1300
     * @tc.name: After ANR popup,close the application process
     * @tc.desc: After ANR popup,close the application process,the pop-up window is normal
     */
    it('ACTS_ANROptimization_1300', 0, async function (done) {
      console.log("ACTS_ANROptimization_1300 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_1300 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_1300 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1300 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stagea";
      console.log('ACTS_ANROptimization_1300 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_1300 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_1300 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

      var cmdKillProcess = 'kill -9 ' + pid;
      console.log('ACTS_ANROptimization_1300 cmdKillProcess = ' + cmdKillProcess);
      await abilityDelegator.executeShellCommand(cmd, 0)
      await abilityDelegator.executeShellCommand(cmdKillProcess, 0)


      try {
        console.debug("ACTS_ANROptimization_1300 create");
        await sleep(5000);
        console.debug("ACTS_ANROptimization_1300 create enter");
        await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
        await driver.assertComponentExist(BY.text('ANROptimizationRelyHap未响应'))
        console.debug("ACTS_ANROptimization_1300 findComponent");
        let button = await driver.findComponent(BY.text('等待响应').enabled(true))
        console.debug("ACTS_ANROptimization_1300 button: " + JSON.stringify(button))
        console.debug("ACTS_ANROptimization_1300 click");
        await button.click()
        console.debug("ACTS_ANROptimization_1300 click success");
      } catch (err) {
        console.debug("ACTS_ANROptimization_1300 catch err: " + JSON.stringify(err));
        console.debug("ACTS_ANROptimization_1300 catch err: " + err);
        expect("").assertFail();
        done();
      }

      await sleep(2000);
      var processExist = false;
      var processInfosAfter = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1300 processInfosAfter = ' + JSON.stringify(processInfosAfter));
      console.log('ACTS_ANROptimization_1300 processInfosAfter.length = ' + processInfosAfter.length);
      for (var i = 0; i < processInfosAfter.length; i++) {
        if (processInfosAfter[i].processName == processName) {
          console.log('ACTS_ANROptimization_1300 processName is exist ');
          processExist = true;
        }
      }
      console.log('ACTS_ANROptimization_1300 processExist = ' + processExist);
      expect(processExist).assertEqual(false);

      var numMax = 1024;
      var missionExist = false;
      var missionInfos = await missionManager.getMissionInfos('', numMax);
      console.log('ACTS_ANROptimization_1300 missionInfos = ' + JSON.stringify(missionInfos));
      console.log('ACTS_ANROptimization_1300 missionInfos.length = ' + JSON.stringify(missionInfos.length));
      for (var j = 0; j < missionInfos.length; j++) {
        if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
          && (missionInfos[j].want.abilityName == "MainAbility")
          && (missionInfos[j].runningState == 0)) {
          console.log('ACTS_ANROptimization_1300 mission is exist ');
          missionExist = true;
        }
      }
      console.log('ACTS_ANROptimization_1300 missionExist = ' + missionExist);
      expect(missionExist).assertEqual(false);
      try {
        var notFoundFlag = false;
        console.debug("ACTS_ANROptimization_1300 findComponent");
        await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
          '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
      } catch (err) {
        console.debug("ACTS_ANROptimization_1300 catch err: " + JSON.stringify(err));
        console.debug("ACTS_ANROptimization_1300 catch err: " + err);
        notFoundFlag = true;
      }
      expect(notFoundFlag).assertEqual(true);
      setTimeout(() => {
        done();
      }, 100)
    })

    /*
     * @tc.number: ACTS_ANROptimization_1400
     * @tc.name: After ANR popup,uninstall app
     * @tc.desc: After ANR popup,uninstall app,the pop-up window is normal
     */
    it('ACTS_ANROptimization_1400', 0, async function (done) {
      console.log("ACTS_ANROptimization_1400 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.applicationnotresponserelyhap',
          abilityName: 'MainAbility',
          action: "AMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_1400 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_1400 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1400 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "stagea";
      console.log('ACTS_ANROptimization_1400 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_1400 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_1400 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

      var cmdKillProcess = 'bm uninstall -n com.example.applicationnotresponserelyhap';
      console.log('ACTS_ANROptimization_1400 cmdKillProcess = ' + cmdKillProcess);
      await abilityDelegator.executeShellCommand(cmd, 0)
      await abilityDelegator.executeShellCommand(cmdKillProcess, 0)


      try {
        console.debug("ACTS_ANROptimization_1400 create");
        await sleep(5000);
        console.debug("ACTS_ANROptimization_1400 create enter");
        await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
        await driver.assertComponentExist(BY.text('ANROptimizationRelyHap未响应'))
        console.debug("ACTS_ANROptimization_1400 findComponent");
        let button = await driver.findComponent(BY.text('等待响应').enabled(true))
        console.debug("ACTS_ANROptimization_1400 button: " + JSON.stringify(button))
        console.debug("ACTS_ANROptimization_1400 click");
        await button.click()
        console.debug("ACTS_ANROptimization_1400 click success");
      } catch (err) {
        console.debug("ACTS_ANROptimization_1400 catch err: " + JSON.stringify(err));
        console.debug("ACTS_ANROptimization_1400 catch err: " + err);
        expect("").assertFail();
        done();
      }

      await sleep(2000);
      var processExist = false;
      var processInfosAfter = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1400 processInfosAfter = ' + JSON.stringify(processInfosAfter));
      console.log('ACTS_ANROptimization_1400 processInfosAfter.length = ' + processInfosAfter.length);
      for (var i = 0; i < processInfosAfter.length; i++) {
        if (processInfosAfter[i].processName == processName) {
          console.log('ACTS_ANROptimization_1400 processName is exist ');
          processExist = true;
        }
      }
      console.log('ACTS_ANROptimization_1400 processExist = ' + processExist);
      expect(processExist).assertEqual(false);

      var numMax = 1024;
      var missionExist = false;
      var missionInfos = await missionManager.getMissionInfos('', numMax);
      console.log('ACTS_ANROptimization_1400 missionInfos = ' + JSON.stringify(missionInfos));
      console.log('ACTS_ANROptimization_1400 missionInfos.length = ' + JSON.stringify(missionInfos.length));
      for (var j = 0; j < missionInfos.length; j++) {
        if ((missionInfos[j].want.bundleName == "com.example.applicationnotresponserelyhap")
          && (missionInfos[j].want.abilityName == "MainAbility")
          && (missionInfos[j].runningState == 0)) {
          console.log('ACTS_ANROptimization_1400 mission is exist ');
          missionExist = true;
        }
      }
      console.log('ACTS_ANROptimization_1400 missionExist = ' + missionExist);
      expect(missionExist).assertEqual(false);
      try {
        var notFoundFlag = false;
        console.debug("ACTS_ANROptimization_1400 findComponent");
        await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
          '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
      } catch (err) {
        console.debug("ACTS_ANROptimization_1400 catch err: " + JSON.stringify(err));
        console.debug("ACTS_ANROptimization_1400 catch err: " + err);
        notFoundFlag = true;
      }
      expect(notFoundFlag).assertEqual(true);
      setTimeout(() => {
        done();
      }, 100)
    })

    /*
     * @tc.number: ACTS_ANROptimization_1500
     * @tc.name: App name is too long
     * @tc.desc: App name is too long，the ANR pop-up window is displayed normally
     */
    it('ACTS_ANROptimization_1500', 0, async function (done) {
      console.log("ACTS_ANROptimization_1500 --- start")
      globalThis.abilityContext.startAbility(
        {
          bundleName: 'com.example.anrlongenamerelyhap',
          abilityName: 'MainAbility',
          action: "AMain",
        }, (error, data) => {
          console.debug("ACTS_ANROptimization_1500 startAbility " +
            JSON.stringify(error) + "," + JSON.stringify(data));
          console.debug("ACTS_ANROptimization_1500 startAbility end");
        })

      await sleep(1000);
      var pid;
      var processInfosBefore = await appManager.getProcessRunningInfos()
      console.log('ACTS_ANROptimization_1500 processInfosBefore = ' + JSON.stringify(processInfosBefore));
      var processName = "com.example.anrlongenamerelyhap";
      console.log('ACTS_ANROptimization_1500 processInfosBefore.length = ' + processInfosBefore.length);
      for (var i = 0; i < processInfosBefore.length; i++) {
        if (processInfosBefore[i].processName == processName) {
          pid = processInfosBefore[i].pid;
          console.log('ACTS_ANROptimization_1500 pid = ' + pid);
        }
      }
      var cmd = 'aa ApplicationNotResponding -p ' + pid;
      console.log('ACTS_ANROptimization_1500 cmd = ' + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,
        async (err: any, d: any) => {
          console.info('ACTS_ANROptimization_1500 executeShellCommand : err : ' + JSON.stringify(err));
          console.info('ACTS_ANROptimization_1500 executeShellCommand : data : ' + d.stdResult);
          console.info('ACTS_ANROptimization_1500 executeShellCommand : data : ' + d.exitCode);

          await sleep(500);
          console.debug("ACTS_ANROptimization_1500 create");
          try {
            console.debug("ACTS_ANROptimization_1500 create enter");
            await driver.assertComponentExist(BY.text('应用未响应，如果您关闭应用，' +
              '可能丢失最近的数据，如果您继续等待，应用可能会响应。'))
            await driver.assertComponentExist(BY.text('ANRLongNameRelyHapANRLongNameRelyHapANRLongNameRelyHap' +
              'ANRLongNameRelyHapANRLongNameRelyHapANRLongNameRelyHapANRLongNameRelyHapANRLongNameRelyHap' +
              'ANRLongNameRelyHapANRLongNameRelyHapANRLongNameRelyHapA未响应'))
            console.debug("ACTS_ANROptimization_0900 final findComponent");
            let button = await driver.findComponent(BY.text('关闭应用').enabled(true))
            console.debug("ACTS_ANROptimization_0900 final button: " + JSON.stringify(button))
            console.debug("ACTS_ANROptimization_0900 final click");
            await button.click();
          } catch (err) {
            console.debug("ACTS_ANROptimization_1500 catch err: " + JSON.stringify(err));
            console.debug("ACTS_ANROptimization_1500 catch err: " + err);
            expect("").assertFail();
            done();
          }

          await sleep(10000);
          done();
        })
    })
  })
}